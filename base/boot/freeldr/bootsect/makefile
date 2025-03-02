# Параметры сборки
TARGETNAME=bootsect
TARGETTYPE=NOTARGET  # Специальный тип, так как генерируются бинарные образы

SOURCES= \
    dosmbr.S \
    ext2.S \
    fat.S \
    fat32.S \
    ntfs.S \
    btrfs.S \
    isoboot.S \
    isobtrt.S \
    isombr.S

# Для архитектур i386/amd64
!IF "$(ARCH)" == "i386" || "$(ARCH)" == "amd64"

MSC_WARNING_LEVEL=/W3
ASM=ml
ASMFLAGS=/nologo /c /Cx /coff

# Правила генерации бинарных образов
dosmbr.bin: dosmbr.S
    $(ASM) $(ASMFLAGS) /Fodosmbr.obj dosmbr.S
    link /nologo /SUBSYSTEM:NATIVE /DRIVER:BYTE /ALIGN:16 /ENTRY:start /MERGE:.rdata=.text /OUT:dosmbr.bin dosmbr.obj

ext2.bin: ext2.S
    $(ASM) $(ASMFLAGS) /Foext2.obj ext2.S
    link /nologo /SUBSYSTEM:NATIVE /DRIVER:BYTE /ALIGN:16 /ENTRY:start /OUT:ext2.bin ext2.obj

fat.bin: fat.S
    $(ASM) $(ASMFLAGS) /Fofat.obj fat.S
    link /nologo /SUBSYSTEM:NATIVE /DRIVER:BYTE /ALIGN:16 /ENTRY:start /MERGE:.rdata=.text /OUT:fat.bin fat.obj

fat32.bin: fat32.S
    $(ASM) $(ASMFLAGS) /Fofat32.obj fat32.S
    link /nologo /SUBSYSTEM:NATIVE /DRIVER:BYTE /ALIGN:16 /ENTRY:start /MERGE:.rdata=.text /OUT:fat32.bin fat32.obj

ntfs.bin: ntfs.S
    $(ASM) $(ASMFLAGS) /Fonfts.obj ntfs.S
    link /nologo /SUBSYSTEM:NATIVE /DRIVER:BYTE /ALIGN:16 /ENTRY:start /MERGE:.rdata=.text /OUT:ntfs.bin ntfs.obj

btrfs.bin: btrfs.S
    $(ASM) $(ASMFLAGS) /Fobtrfs.obj btrfs.S
    link /nologo /SUBSYSTEM:NATIVE /DRIVER:BYTE /ALIGN:16 /ENTRY:start /MERGE:.rdata=.text /OUT:btrfs.bin btrfs.obj

isoboot.bin: isoboot.S
    $(ASM) $(ASMFLAGS) /Foisoboot.obj isoboot.S
    link /nologo /SUBSYSTEM:NATIVE /DRIVER:BYTE /ALIGN:16 /ENTRY:start /OUT:isoboot.bin isoboot.obj

isobtrt.bin: isobtrt.S
    $(ASM) $(ASMFLAGS) /Foisobtrt.obj isobtrt.S
    link /nologo /SUBSYSTEM:NATIVE /DRIVER:BYTE /ALIGN:16 /ENTRY:start /OUT:isobtrt.bin isobtrt.obj

isombr.bin: isombr.S
    $(ASM) $(ASMFLAGS) /Foisombr.obj isombr.S
    link /nologo /SUBSYSTEM:NATIVE /DRIVER:BYTE /ALIGN:16 /ENTRY:start /OUT:isombr.bin isombr.obj

# Специальные правила для pc98
!IF "$(SARCH)" == "pc98"
SOURCES += \
    pc98/fat12fdd.S

fat12pc98.bin: pc98/fat12fdd.S
    $(ASM) $(ASMFLAGS) /Fofat12pc98.obj pc98/fat12fdd.S
    link /nologo /SUBSYSTEM:NATIVE /DRIVER:BYTE /ALIGN:16 /ENTRY:start /OUT:fat12pc98.bin fat12pc98.obj
!ENDIF

# Заглушки для архитектуры ARM
!ELSEIF "$(ARCH)" == "arm"
fat.bin:
    echo arm fat target not implemented yet > nul
    exit 1

fat32.bin:
    echo arm fat32 target not implemented yet > nul
    exit 1
!ENDIF

# Цели для копирования файлов в образ CD
C_DEFINES=-DBOOTCD -DREGTEST
INCLUDES=$(REACTOS_SOURCE_DIR)/boot/freeldr

ALL_TARGETS= \
    dosmbr.bin \
    ext2.bin \
    fat.bin \
    fat32.bin \
    ntfs.bin \
    btrfs.bin \
    isoboot.bin \
    isobtrt.bin \
    isombr.bin \
    fat12pc98.bin

# Цель по умолчанию
all: $(ALL_TARGETS)

# Для установки всех целевых файлов
install:
    echo "Installing targets to $(REACTOS_SOURCE_DIR)/boot/freeldr"
    @mkdir -p $(REACTOS_SOURCE_DIR)/boot/freeldr
    @copy /y $(ALL_TARGETS) $(REACTOS_SOURCE_DIR)/boot/freeldr

# Очистка сгенерированных файлов
clean:
    del /q $(ALL_TARGETS)
