# MAKEFILE for FreeLoader.X86
# Windows Server 2003 DDK Build System
# Copyright (C) Microsoft Corporation

!INCLUDE $(NTMAKEENV)\makefile.plt

#
# Configuration Options
#
!IFNDEF BUILD_BOOTCODE
BUILD_BOOTCODE=0       # Default: Do not build boot sector code
!ENDIF

!IFNDEF LANGUAGE
LANGUAGE=usa           # Default language
!ENDIF

!IF "$(LANGUAGE)" == "USA" || "$(LANGUAGE)" == "usa"
ALT_PROJECT_TARGET=.
!ELSE
ALT_PROJECT_TARGET=$(LANGUAGE)
!ENDIF

#
# Project Directories
#
FREELDR_ROOT=..\freeldr
SDK_INC_PATH=$(BASEDIR)\inc
OBJ_DIR=obj\i386
BIN_DIR=bin

#
# Toolchain Configuration
#
ASM=masm386
CC=cl16
LINK=link16
BIN2C=bin2c

AFLAGS=-Mx -z -DARCH_I386 -I$(FREELDR_ROOT)\include
CFLAGS=-W3 -G2s -Zelp -D_NTHAL_ -D_BLDR_ -D_NTSYSTEM_
LDFLAGS=/tiny /nod /noi /map

#
# Source Components
#
BOOTCODE_SRC= \
    $(FREELDR_ROOT)\boot\fat\fatboot.asm \
    $(FREELDR_ROOT)\boot\fat32\fat32bt.asm \
    $(FREELDR_ROOT)\boot\ntfs\ntfsboot.asm \
    $(FREELDR_ROOT)\boot\mbr\x86mboot.asm

FREELDR_SRC= \
    $(FREELDR_ROOT)\arch\i386\startup.asm \
    $(FREELDR_ROOT)\lib\debug.c \
    $(FREELDR_ROOT)\ui\video.c

#
# Build Targets
#
TARGETS= \
    $(BIN_DIR)\freeldr.com \
    $(SDK_INC_PATH)\bootcode.h

all: $(TARGETS)
!IF "$(BUILDMSG)" != ""
    @echo $(BUILDMSG)
!ENDIF

clean:
    del /Q $(OBJ_DIR)\*.obj
    del /Q $(BIN_DIR)\*.com
    del /Q $(SDK_INC_PATH)\boot*.h

#
# Boot Code Generation Rules
#
!IF $(BUILD_BOOTCODE)

$(SDK_INC_PATH)\bootfat.h: $(FREELDR_ROOT)\boot\fat\fatboot.asm
    $(ASM) $(AFLAGS) $?;
    $(LINK) $(LDFLAGS) fatboot.obj,fatboot.exe;
    $(BIN2C) fatboot.exe 32768 32256 512 $@ FatBootCode
    del fatboot.obj fatboot.exe

$(SDK_INC_PATH)\bootf32.h: $(FREELDR_ROOT)\boot\fat32\fat32bt.asm
    $(ASM) $(AFLAGS) $?;
    $(LINK) $(LDFLAGS) fat32bt.obj,fat32bt.exe;
    $(BIN2C) fat32bt.exe 33792 32256 1536 $@ Fat32BootCode
    del fat32bt.obj fat32bt.exe

$(SDK_INC_PATH)\bootntfs.h: $(FREELDR_ROOT)\boot\ntfs\ntfsboot.asm
    $(ASM) $(AFLAGS) $?;
    $(LINK) $(LDFLAGS) ntfsboot.obj,ntfsboot.com;
    $(BIN2C) ntfsboot.com 8192 0 8192 $@ NtfsBootCode
    del ntfsboot.obj ntfsboot.com

$(SDK_INC_PATH)\bootmbr.h: $(FREELDR_ROOT)\boot\mbr\x86mboot.asm
    $(ASM) $(AFLAGS) $?;
    $(LINK) $(LDFLAGS) x86mboot.obj,x86mboot.com;
    $(BIN2C) x86mboot.com 1792 1280 512 $@ x86BootCode
    del x86mboot.obj x86mboot.com

!ELSE 

$(SDK_INC_PATH)\bootfat.h: $(FREELDR_ROOT)\boot\fat\bootfat.h
    $(PUBLISH_CMD) {$?=$@}

$(SDK_INC_PATH)\bootf32.h: $(FREELDR_ROOT)\boot\fat32\bootf32.h
    $(PUBLISH_CMD) {$?=$@}

$(SDK_INC_PATH)\bootntfs.h: $(FREELDR_ROOT)\boot\ntfs\bootntfs.h
    $(PUBLISH_CMD) {$?=$@}

$(SDK_INC_PATH)\bootmbr.h: $(FREELDR_ROOT)\boot\mbr\bootmbr.h
    $(PUBLISH_CMD) {$?=$@}

!ENDIF

#
# FreeLoader Main Build Rules
#
$(OBJ_DIR)\startup.obj: $(FREELDR_ROOT)\arch\i386\startup.asm
    $(ASM) $(AFLAGS) -Fo$@ $?

$(OBJ_DIR)\debug.obj: $(FREELDR_ROOT)\lib\debug.c
    $(CC) $(CFLAGS) -Fo$@ -c $?

$(OBJ_DIR)\video.obj: $(FREELDR_ROOT)\ui\video.c
    $(CC) $(CFLAGS) -Fo$@ -c $?

$(BIN_DIR)\freeldr.com: $(OBJ_DIR)\startup.obj $(OBJ_DIR)\debug.obj $(OBJ_DIR)\video.obj
    $(LINK) @<<
$(LDFLAGS) +
$(OBJ_DIR)\startup.obj +
$(OBJ_DIR)\debug.obj +
$(OBJ_DIR)\video.obj
$@
$(OBJ_DIR)\freeldr.map
<<

#
# Directory Creation
#
!IF [if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)] != 0
!ERROR Failed to create object directory
!ENDIF

!IF [if not exist $(BIN_DIR) mkdir $(BIN_DIR)] != 0
!ERROR Failed to create binary directory
!ENDIF