
/*++ BUILD Version: 0015

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    ntarm.h

Abstract:

    User-mode visible ARM v4 specific structures and constants

Revision History:

--*/

#ifndef _NTARM_
#define _NTARM_
#if _MSC_VER > 1000
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

    // Определения системного времени (аналогично MIPS)
    typedef union _KSYSTEM_TIME {
        struct {
            ULONG LowPart;
            LONG High1Time;
            LONG High2Time;
        };
        ULONGLONG Alignment;
    } KSYSTEM_TIME, * PKSYSTEM_TIME;

    // Коды точек останова для ARM
#define USER_BREAKPOINT           0
#define KERNEL_BREAKPOINT         1
#define BREAKIN_BREAKPOINT        2
#define UNDEFINED_INSTRUCTION     3
#define PREFETCH_ABORT            4
#define DATA_ABORT                5
#define SOFTWARE_INTERRUPT        6

// Размеры стеков ядра для ARM
#define KERNEL_STACK_SIZE         8192        // 8 KB
#define KERNEL_LARGE_STACK_SIZE   32768       // 32 KB

// Контекст выполнения ARMv4
#define CONTEXT_ARM               0x00040000
#define CONTEXT_CONTROL           (CONTEXT_ARM | 0x01)
#define CONTEXT_INTEGER           (CONTEXT_ARM | 0x02)
#define CONTEXT_FLOATING_POINT    (CONTEXT_ARM | 0x04)
#define CONTEXT_FULL              (CONTEXT_CONTROL | CONTEXT_INTEGER)

    typedef struct _CONTEXT {
        // Регистры общего назначения
        ULONG R0;
        ULONG R1;
        ULONG R2;
        ULONG R3;
        ULONG R4;
        ULONG R5;
        ULONG R6;
        ULONG R7;
        ULONG R8;
        ULONG R9;
        ULONG R10;
        ULONG R11;
        ULONG R12;

        // Регистры стека и адреса
        ULONG Sp;     // R13
        ULONG Lr;     // R14
        ULONG Pc;     // R15

        // Регистр статуса
        ULONG Cpsr;

        // Флаги контекста
        ULONG ContextFlags;

        // FPU регистры (если поддерживается)
        ULONGLONG D[16];
        ULONG Fpscr;
    } CONTEXT, * PCONTEXT;

    // Макросы для работы с текущим контекстом
#define CONTEXT_TO_PROGRAM_COUNTER(Context) ((Context)->Pc)
#define NtCurrentTeb() ((PTEB)__builtin_thread_pointer())

// Адресное пространство ARMv4
#define USER_SPACE_BASE           0x00000000
#define KERNEL_SPACE_BASE         0x80000000

// Структуры обработки исключений
    typedef struct _EXCEPTION_REGISTRATION_RECORD {
        struct _EXCEPTION_REGISTRATION_RECORD* Next;
        PVOID Handler;
    } EXCEPTION_REGISTRATION_RECORD, * PEXCEPTION_REGISTRATION_RECORD;

    // Макросы для работы со стеком
#define GetCurrentStackPointer() __current_sp()

// Прототипы функций
    VOID RtlCaptureContext(PCONTEXT ContextRecord);
    LONG RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT Context);

#ifdef __cplusplus
}
#endif

#endif // _NTARM_