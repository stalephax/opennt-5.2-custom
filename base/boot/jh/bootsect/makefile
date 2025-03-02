# Makefile для сборки загрузочных секторов
# Версия для Windows Server 2003 DDK

!INCLUDE $(NTMAKEENV)\makefile.def

# Настройки архитектуры
!IFNDEF ARCH
ARCH=i386
!ENDIF

!IFNDEF SARCH
SARCH=pc98
!ENDIF

# Инструменты
ASM=ml
LINK=link
BIN2C=bin2c

# Флаги
ASMFLAGS=/nologo /c /coff /Cx
LDFLAGS=/nologo /SUBSYSTEM:NATIVE /DRIVER:BYTE /ALIGN:16

# Директории
SRC_DIR=.
BIN_DIR=bin
PC98_DIR=$(BIN_DIR)\pc98

# Цели для i386/amd64
!IF "$(ARCH)"=="i386" || "$(ARCH)"=="amd64"

all: create_dirs \
    $(BIN_DIR)\dosmbr.bin \
    $(BIN_DIR)\fat.bin \
    $(BIN_DIR)\fat32.bin \
    $(BIN_DIR)\ntfs.bin \
    copy_to_cd

!IF "$(SARCH)"=="pc98"
all: $(PC98_DIR)\fat12fdd.bin
!ENDIF

# Правила сборки
$(BIN_DIR)\dosmbr.bin: $(SRC_DIR)\dosmbr.S
    $(ASM) $(ASMFLAGS) /Fo$@ $?
    $(LINK) $(LDFLAGS) /ENTRY:_start /OUT:$@ $(@:.bin=.obj)
    del $(@:.bin=.obj)

$(BIN_DIR)\fat.bin: $(SRC_DIR)\fat.S
    $(ASM) $(ASMFLAGS) /Fo$@ $?
    $(LINK) $(LDFLAGS) /BASE:0x7C00 /OUT:$@ $(@:.bin=.obj)
    del $(@:.bin=.obj)

$(BIN_DIR)\fat32.bin: $(SRC_DIR)\fat32.S
    $(ASM) $(ASMFLAGS) /Fo$@ $?
    $(LINK) $(LDFLAGS) /BASE:0x7C00 /OUT:$@ $(@:.bin=.obj)
    del $(@:.bin=.obj)

$(BIN_DIR)\ntfs.bin: $(SRC_DIR)\ntfs.S
    $(ASM) $(ASMFLAGS) /Fo$@ $?
    $(LINK) $(LDFLAGS) /BASE:0x7C00 /OUT:$@ $(@:.bin=.obj)
    del $(@:.bin=.obj)

!IF "$(SARCH)"=="pc98"
$(PC98_DIR)\fat12fdd.bin: $(SRC_DIR)\pc98\fat12fdd.S
    $(ASM) $(ASMFLAGS) /Fo$@ $?
    $(LINK) $(LDFLAGS) /BASE:0x7C00 /OUT:$@ $(@:.bin=.obj)
    del $(@:.bin=.obj)
!ENDIF

# Копирование в CD-образ
copy_to_cd:
    @if not exist "cd_image\loader" mkdir "cd_image\loader"
    copy /Y $(BIN_DIR)\*.bin "cd_image\loader\"

# Создание директорий
create_dirs:
    @if not exist "$(BIN_DIR)" mkdir "$(BIN_DIR)"
    @if not exist "$(PC98_DIR)" mkdir "$(PC98_DIR)"

!ELSEIF "$(ARCH)"=="arm"

all:
    @echo Ошибка: ARM не поддерживается
    exit 1

!ENDIF

# Очистка
clean:
    del /Q $(BIN_DIR)\*.bin
    rmdir /Q $(BIN_DIR)