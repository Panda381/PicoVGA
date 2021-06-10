#   make clean ... clean
#   make all ... compile TARGET

##############################################################################
# Input files

# ASM source files
ASRC +=		\
${TARGET}.S	\

##############################################################################
# Configuration

# destination filename
#TARGET = boot2

# stack size of one CPU core (should be 4KB to fit into SRAM banks 4 and 5)
STACK_SIZE = 0x1000

# temporary build directory
TEMP = ./build

# Base makefile (to ensure recompilation after change)
MAKEFILE = ./Makefile

# linker script
LDSCRIPT = ./boot_stage2.ld

# CPU
MCU=cortex-m0plus

# CPU Architecture
MARCH=armv6-m

# FPU
FPU=auto

##############################################################################
# Compilation flags

# define MCU
ARCHCFG = -mcpu=${MCU} -march=${MARCH} -mfpu=${FPU} -mfloat-abi=soft

# use ARM instructions
ARCHCFG += -mthumb

# === ASM flags

# MCU
AFLAGS += ${ARCHCFG}

# === C flags

# MCU
CFLAGS += ${ARCHCFG}

# Optimization level
#CFLAGS += -O0	# do no optimization
#CFLAGS += -O1	# optimize minimally
CFLAGS += -O2	# optimize more
#CFLAGS += -O3	# optimize even more (do not use, compilation may be incorrect)
#CFLAGS += -Ofast # optimize for speed (do not use, compilation may be incorrect)
#CFLAGS += -Og -g3 # optimize for debugger (use together with -g0..-g3, level of debugging information)
#CFLAGS += -Os	# optimize for size

# do not use builtin functions (memset)
CFLAGS += -Wl,--build-id=none
#CFLAGS += -fno-builtin

# do not use standard includes
#CFLAGS += -nostdinc

# create separate sections (to enable eliminate unused sections)
CFLAGS += -fdata-sections -ffunction-sections

# use signed char
CFLAGS += -fsigned-char

# do not assume usual definitions
#CFLAGS += -ffreestanding

# do not use exceptions and unwind frames
CFLAGS += -fno-unwind-tables -fno-exceptions

# --specs=nosys.specs ... do not use _exit
#CFLAGS += --specs=nosys.specs

# --specs=nano.specs ... use small library without printf float
#CFLAGS += --specs=nano.specs

# generate debug informations
#CFLAGS += -g3

# === C++ flags

CPPFLAGS = $(CFLAGS) -std=c++14 -Wno-aligned-new -fno-rtti -nostdinc++

# === Linker flags

# Entry point
LDFLAGS += --entry _stage2_boot

# Linker script
LDFLAGS += -Wl,-script=$(LDSCRIPT)

# do not link startup code and libs
LDFLAGS += -Wl,-nostdlib
# LDFLAGS += -Wl,-nostartfiles

# do not use builtin functions (memset)
LDLAGS += -Wl,--build-id=none

# symbol map
LDFLAGS += -Wl,-Map=./$(TARGET).map

# eliminate unused sections
LDFLAGS += -Wl,--gc-sections,--relax

##############################################################################
# Compiler

# compiler base
COMP = arm-none-eabi-

# C compiler name
CC = ${COMP}gcc

# C++ compiler name
CPP = ${COMP}g++

# ASM compiler name
AS = ${COMP}gcc -x assembler-with-cpp

# Linker
LD = ${COMP}gcc

# Object dump
OD = ${COMP}objdump

# Object copy
OC = ${COMP}objcopy

# Names
NM = ${COMP}nm

# Size
SZ = ${COMP}size

##############################################################################
# File list

# list of all source files
ALLSRC = $(ASRC) $(CSRC) $(SRC)

# list of all files without directory and without extension
ALLBASE = $(notdir $(basename $(ALLSRC)))

# list of all object files *.o
ALLOBJ = $(addprefix $(TEMP)/, $(addsuffix .o, $(ALLBASE)))

##############################################################################
# Clear temporary directory (use "make clean")

clean:
	@rm -rf $(TEMP)
	@rm -f ./$(TARGET).bin ./$(TARGET).hex ./$(TARGET).lst ./$(TARGET).map ./$(TARGET).sym ./$(TARGET).siz

##############################################################################
# Compile all (use "make all")

all: createdirs elf bin hex lst sym siz

##############################################################################
# Create temporary directory

createdirs:
	@mkdir -p $(TEMP)

##############################################################################
# Dependencies of output files

elf: $(TEMP)/$(TARGET).elf
bin: ./$(TARGET).bin
hex: ./$(TARGET).hex
lst: ./$(TARGET).lst
sym: ./$(TARGET).sym
siz: ./$(TARGET).siz

##############################################################################
# Create .bin file from .elf file

./$(TARGET).bin: $(TEMP)/$(TARGET).elf
	@echo "    bin		 $@"
	@$(OC) -O binary $< $@

##############################################################################
# Create .hex file from .elf file

./$(TARGET).hex: $(TEMP)/$(TARGET).elf
	@echo "    hex		 $@"
	@$(OC) -O ihex $< $@

##############################################################################
# Create .lst file from .elf file

./$(TARGET).lst: $(TEMP)/$(TARGET).elf
	@echo "    lst		 $@"
	@$(OD) -d -S $< > $@

##############################################################################
# Create .sym file from .elf file

./$(TARGET).sym: $(TEMP)/$(TARGET).elf
	@echo "    sym		 $@"
	@$(NM) -n $< > $@

##############################################################################
# Create .siz file from .elf file

./$(TARGET).siz: $(TEMP)/$(TARGET).elf
	@echo "    siz		 $@"
	@$(SZ) $< > $@

##############################################################################
# Create .o files from .c files

define CC_TEMP
$(TEMP)/$(notdir $(basename $(1))).o : $(1) $(MAKEFILE)
	@echo "    CC		 $$<"
	@$(CC) $$(CFLAGS) -std=gnu99 -c $$< -o $$@
endef

$(foreach src, $(CSRC), $(eval $(call CC_TEMP, $(src))))

##############################################################################
# Create .o files from .cpp files

define CPP_TEMP
$(TEMP)/$(notdir $(basename $(1))).o : $(1) $(MAKEFILE)
	@echo "    C++		 $$<"
	@$(CPP) $$(CPPFLAGS) -c $$< -o $$@
endef

$(foreach src, $(SRC), $(eval $(call CPP_TEMP, $(src))))

##############################################################################
# Create .o files from .S files

define AS_TEMP
$(TEMP)/$(notdir $(basename $(1))).o : $(1) $(MAKEFILE)
	@echo "    ASM		 $$<"
	@$(AS) $$(CFLAGS) $$(AFLAGS) -c $$< -o $$@
endef

$(foreach src, $(ASRC), $(eval $(call AS_TEMP, $(src))))

##############################################################################
# Create .elf from .o files

$(TEMP)/$(TARGET).elf: $(ALLOBJ) $(MAKEFILE) $(LDSCRIPT)
	@echo "    ld		 $@"
	@$(LD) $(LDFLAGS) $(ALLOBJ) -o $@

##############################################################################
# Head dependencies, to recompile C after changing H

ifneq (${MAKECMDGOALS},clean)
-include $(wildcard $(TEMP)/*.d)
endif

##############################################################################
# List of dependencies not creating files

.PHONY: clean all createdirs elf bin hex lst sym siz
