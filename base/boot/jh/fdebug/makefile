# NMake Makefile для сборки fdebug

# Настройки компилятора и линковщика
CC = cl
RC = rc
LINK = link

# Флаги компиляции
CFLAGS = /nologo /W3 /O2 /DWIN32 /D_WIN32_WINNT=0x0502 /DUNICODE /D_UNICODE /I.
RCFLAGS = /nologo /DUNICODE /D_UNICODE
LDFLAGS = /nologo /SUBSYSTEM:WINDOWS /ENTRY:WinMainCRTStartup

# Библиотеки для линковки
LIBS = comdlg32.lib user32.lib gdi32.lib msvcrt.lib kernel32.lib

# Исходные файлы
SRCS = fdebug.c rs232.c
OBJS = $(SRCS:.c=.obj)
RES = fdebug.res

# Цели по умолчанию
all: fdebug.exe

# Правило для сборки исполняемого файла
fdebug.exe: $(OBJS) $(RES)
    $(LINK) $(LDFLAGS) /OUT:$@ $** $(LIBS)

# Правило для компиляции .c файлов
.c.obj:
    $(CC) $(CFLAGS) /c $<

# Правило для компиляции ресурсов
fdebug.res: fdebug.rc
    $(RC) $(RCFLAGS) /fo$@ $**

# Цель для копирования файла (аналог add_cd_file)
install:
    xcopy /Y fdebug.exe "cd_image\loader\"

# Очистка
clean:
    del /Q *.obj *.exe *.res *.lib *.exp

# Зависимости
fdebug.obj: fdebug.c
rs232.obj: rs232.c