# NMake Makefile для сборки FreeLDR и компонентов

# Настройки компилятора и линковщика
CC = cl
LINK = link
RC = rc
ASM = ml

# Общие флаги
CFLAGS = /nologo /W3 /O2 /DWIN32 /D_WIN32_WINNT=0x0502 /DUNICODE /D_UNICODE
LDFLAGS = /nOLOGO /SUBSYSTEM:CONSOLE /ENTRY:main
ASMFLAGS = /nologo /c /coff /Cx

# Пути к заголовочным файлам
INCLUDES = /Iinclude /I..\include

# Сборка всех компонентов
all: bootsect fdebug freeldr install

#--------------------------------------------------
# Bootsect
#--------------------------------------------------
BOOTSECT_SRC = bootsect\bootsect.asm
BOOTSECT_OBJ = bootsect.obj

bootsect: $(BOOTSECT_OBJ)

$(BOOTSECT_OBJ): $(BOOTSECT_SRC)
    $(ASM) $(ASMFLAGS) /Fo$@ $**

#--------------------------------------------------
# FDebug
#--------------------------------------------------
FDEBUG_SRC = fdebug\debug.c fdebug\output.c
FDEBUG_OBJ = debug.obj output.obj

fdebug: $(FDEBUG_OBJ)

.c.obj:
    $(CC) $(CFLAGS) $(INCLUDES) /c $<

#--------------------------------------------------
# FreeLDR
#--------------------------------------------------
FREELDR_SRC = freeldr\main.c freeldr\memory.c freeldr\disk.c
FREELDR_OBJ = main.obj memory.obj disk.obj
FREELDR_LIBS = kernel32.lib user32.lib advapi32.lib

freeldr: $(FREELDR_OBJ)
    $(LINK) $(LDFLAGS) /OUT:freeldr.sys $(FREELDR_OBJ) $(FREELDR_LIBS)

#--------------------------------------------------
# Install
#--------------------------------------------------
INSTALL_SRC = install\setup.c
INSTALL_OBJ = setup.obj

install: $(INSTALL_OBJ)
    $(LINK) $(LDFLAGS) /OUT:setup.exe $(INSTALL_OBJ)

# Очистка
clean:
    del /Q *.obj *.exe *.sys *.lib *.exp *.res