
# Includes from main Makefile

##############################################################################
# Input files

# ASM source files
ifneq ($(findstring -DPICO_NO_FLASH=0, $(DEFINE)),)	# boot loader only if flash
ASRC += ../_boot2/boot2_w25q080_bin.S
endif

# ASM sdk
ASRC += ../_sdk/bit_ops_aeabi.S
ASRC += ../_sdk/crt0.S
ASRC += ../_sdk/divider.S
ASRC += ../_sdk/divider0.S
ASRC += ../_sdk/double_aeabi.S
ASRC += ../_sdk/double_v1_rom_shim.S
ASRC += ../_sdk/float_aeabi.S
ASRC += ../_sdk/float_v1_rom_shim.S
ASRC += ../_sdk/irq_handler_chain.S
ASRC += ../_sdk/mem_ops_aeabi.S
ASRC += ../_sdk/pico_int64_ops_aeabi.S

# ASM picovga
ASRC += ../_picovga/render/vga_atext.S
ASRC += ../_picovga/render/vga_attrib8.S
ASRC += ../_picovga/render/vga_color.S
ASRC += ../_picovga/render/vga_ctext.S
ASRC += ../_picovga/render/vga_dtext.S
ASRC += ../_picovga/render/vga_fastsprite.S
ASRC += ../_picovga/render/vga_ftext.S
ASRC += ../_picovga/render/vga_graph1.S
ASRC += ../_picovga/render/vga_graph2.S
ASRC += ../_picovga/render/vga_graph4.S
ASRC += ../_picovga/render/vga_graph8.S
ASRC += ../_picovga/render/vga_graph8mat.S
ASRC += ../_picovga/render/vga_graph8persp.S
ASRC += ../_picovga/render/vga_gtext.S
ASRC += ../_picovga/render/vga_level.S
ASRC += ../_picovga/render/vga_levelgrad.S
ASRC += ../_picovga/render/vga_mtext.S
ASRC += ../_picovga/render/vga_oscil.S
ASRC += ../_picovga/render/vga_oscline.S
ASRC += ../_picovga/render/vga_persp.S
ASRC += ../_picovga/render/vga_persp2.S
ASRC += ../_picovga/render/vga_plane2.S
ASRC += ../_picovga/render/vga_progress.S
ASRC += ../_picovga/render/vga_sprite.S
ASRC += ../_picovga/render/vga_tile.S
ASRC += ../_picovga/render/vga_tile2.S
ASRC += ../_picovga/render/vga_tilepersp.S
ASRC += ../_picovga/render/vga_tilepersp15.S
ASRC += ../_picovga/render/vga_tilepersp2.S
ASRC += ../_picovga/render/vga_tilepersp3.S
ASRC += ../_picovga/render/vga_tilepersp4.S
ASRC += ../_picovga/vga_blitkey.S
ASRC += ../_picovga/vga_render.S

# C sdk
CSRC += ../_sdk/adc.c
CSRC += ../_sdk/binary_info.c
CSRC += ../_sdk/bootrom.c
CSRC += ../_sdk/claim.c
CSRC += ../_sdk/clocks.c
CSRC += ../_sdk/critical_section.c
CSRC += ../_sdk/datetime.c
CSRC += ../_sdk/dma.c
CSRC += ../_sdk/double_init_rom.c
CSRC += ../_sdk/double_math.c
CSRC += ../_sdk/flash.c
CSRC += ../_sdk/float_init_rom.c
CSRC += ../_sdk/float_math.c
CSRC += ../_sdk/gpio.c
CSRC += ../_sdk/i2c.c
CSRC += ../_sdk/interp.c
CSRC += ../_sdk/irq.c
CSRC += ../_sdk/lock_core.c
CSRC += ../_sdk/mem_ops.c
CSRC += ../_sdk/multicore.c
CSRC += ../_sdk/mutex.c
CSRC += ../_sdk/pheap.c
CSRC += ../_sdk/pico_malloc.c
CSRC += ../_sdk/pio.c
CSRC += ../_sdk/platform.c
CSRC += ../_sdk/pll.c
CSRC += ../_sdk/printf.c
CSRC += ../_sdk/queue.c
CSRC += ../_sdk/rp2040_usb_device_enumeration.c
CSRC += ../_sdk/rtc.c
CSRC += ../_sdk/runtime.c
CSRC += ../_sdk/sem.c
CSRC += ../_sdk/spi.c
CSRC += ../_sdk/stdio.c
CSRC += ../_sdk/stdio_semihosting.c
CSRC += ../_sdk/stdio_uart.c
CSRC += ../_sdk/stdio_usb.c
CSRC += ../_sdk/stdio_usb_descriptors.c
CSRC += ../_sdk/stdlib.c
CSRC += ../_sdk/sync.c
CSRC += ../_sdk/time.c
CSRC += ../_sdk/timeout_helper.c
CSRC += ../_sdk/timer.c
CSRC += ../_sdk/uart.c
CSRC += ../_sdk/unique_id.c
CSRC += ../_sdk/vreg.c
CSRC += ../_sdk/watchdog.c
CSRC += ../_sdk/xosc.c

# C tinyusb
CSRC += ../_tinyusb/bsp/raspberry_pi_pico/board_raspberry_pi_pico.c
CSRC += ../_tinyusb/class/audio/audio_device.c
CSRC += ../_tinyusb/class/bth/bth_device.c
CSRC += ../_tinyusb/class/cdc/cdc_device.c
CSRC += ../_tinyusb/class/cdc/cdc_host.c
CSRC += ../_tinyusb/class/cdc/cdc_rndis_host.c
CSRC += ../_tinyusb/class/dfu/dfu_rt_device.c
CSRC += ../_tinyusb/class/hid/hid_device.c
CSRC += ../_tinyusb/class/hid/hid_host.c
CSRC += ../_tinyusb/class/midi/midi_device.c
CSRC += ../_tinyusb/class/msc/msc_device.c
CSRC += ../_tinyusb/class/msc/msc_host.c
CSRC += ../_tinyusb/class/net/net_device.c
CSRC += ../_tinyusb/class/usbtmc/usbtmc_device.c
CSRC += ../_tinyusb/class/vendor/vendor_device.c
CSRC += ../_tinyusb/class/vendor/vendor_host.c
CSRC += ../_tinyusb/common/tusb_fifo.c
CSRC += ../_tinyusb/device/usbd.c
CSRC += ../_tinyusb/device/usbd_control.c
CSRC += ../_tinyusb/host/ehci/ehci.c
CSRC += ../_tinyusb/host/ohci/ohci.c
CSRC += ../_tinyusb/host/hub.c
CSRC += ../_tinyusb/host/usbh.c
CSRC += ../_tinyusb/host/usbh_control.c
CSRC += ../_tinyusb/portable/raspberrypi/rp2040/dcd_rp2040.c
CSRC += ../_tinyusb/portable/raspberrypi/rp2040/hcd_rp2040.c
CSRC += ../_tinyusb/portable/raspberrypi/rp2040/rp2040_usb.c
CSRC += ../_tinyusb/tusb.c

# C picovga
SRC += ../_picovga/vga.cpp
SRC += ../_picovga/vga_layer.cpp
SRC += ../_picovga/vga_pal.cpp
SRC += ../_picovga/vga_screen.cpp
SRC += ../_picovga/vga_util.cpp
SRC += ../_picovga/vga_vmode.cpp
SRC += ../_picovga/util/canvas.cpp
SRC += ../_picovga/util/mat2d.cpp
SRC += ../_picovga/util/overclock.cpp
SRC += ../_picovga/util/print.cpp
SRC += ../_picovga/util/rand.cpp
SRC += ../_picovga/util/pwmsnd.cpp
SRC += ../_picovga/font/font_bold_8x8.cpp
SRC += ../_picovga/font/font_bold_8x14.cpp
SRC += ../_picovga/font/font_bold_8x16.cpp
SRC += ../_picovga/font/font_boldB_8x14.cpp
SRC += ../_picovga/font/font_boldB_8x16.cpp
SRC += ../_picovga/font/font_game_8x8.cpp
SRC += ../_picovga/font/font_ibm_8x8.cpp
SRC += ../_picovga/font/font_ibm_8x14.cpp
SRC += ../_picovga/font/font_ibm_8x16.cpp
SRC += ../_picovga/font/font_ibmtiny_8x8.cpp
SRC += ../_picovga/font/font_italic_8x8.cpp
SRC += ../_picovga/font/font_thin_8x8.cpp

# C++ sdk
SRC += ../_sdk/new_delete.cpp

# Includes
IPATH += -I./src
IPATH += -I../_sdk/include
IPATH += -I../_tinyusb

##############################################################################
# Configuration

# destination filename
TARGET = program

# stack size of one CPU core (should be 4KB to fit into SRAM banks 4 and 5)
STACK_SIZE = 0x1000

# temporary build directory
TEMP = ./build

# Base makefile (to ensure recompilation after change)
MAKEFILE = ./Makefile

# Base include file (to ensure recompilation after change)
INCLUDEFILE = ./src/include.h

# linker script
LDSCRIPT = ../memmap_default.ld

ifneq ($(findstring -DPICO_COPY_TO_RAM=1, $(DEFINE)),)
LDSCRIPT = ../memmap_copy_to_ram.ld
endif

ifneq ($(findstring -DPICO_NO_FLASH=1, $(DEFINE)),)
LDSCRIPT = ../memmap_no_flash.ld
endif

# -nostartfiles

# CPU Architecture
MARCH = armv6-m

# CPU
MCU = cortex-m0plus

##############################################################################
# Compilation flags

# define MCU
ARCHCFG = -march=${MARCH} -mcpu=${MCU} -mthumb

# === ASM flags

# MCU
AFLAGS = $(ARCHCFG)

# === C flags

# MCU
CFLAGS = $(ARCHCFG)

# Optimization level
#CFLAGS += -O0	# do no optimization
#CFLAGS += -O1	# optimize minimally
#CFLAGS += -O2	# optimize more
CFLAGS += -O3	# optimize even more
#CFLAGS += -Ofast # optimize for speed
#CFLAGS += -Og -g3 # optimize for debugger (use together with -g0..-g3, level of debugging information)
#CFLAGS += -Os	# optimize for size

# create separate sections (to enable eliminate unused sections)
CFLAGS += -ffunction-sections -fdata-sections 

# use unsigned char (this is default for ARM cpu)
CFLAGS += -funsigned-char

# generate debug informations
CFLAGS += -g3

# === C++ flags

CPPFLAGS = $(CFLAGS)

# do not use exceptions and unwind frames
CPPFLAGS += -fno-exceptions -fno-unwind-tables
CPPFLAGS += -fno-rtti -fno-use-cxa-atexit -std=gnu++17

# === Linker flags

# MCU
LDFLAGS = $(ARCHCFG)

# no built in
LDFLAGS += -Wl,--build-id=none

# libc without system functions
LDFLAGS += --specs=nosys.specs 

# generate map file
LDFLAGS += -Wl,-Map=$(TARGET).map

# Linker script
LDFLAGS += -Wl,-script=$(LDSCRIPT)

# eliminate unused sections
LDFLAGS += -Wl,--gc-sections

# no start files if not flash
ifneq ($(findstring -DPICO_NO_FLASH=1, $(DEFINE)),)
LDFLAGS += -nostartfiles
endif

# wrap library functions
LDFLAGS+=-Wl,--wrap=sprintf -Wl,--wrap=snprintf -Wl,--wrap=vsnprintf
LDFLAGS+=-Wl,--wrap=__clzsi2 -Wl,--wrap=__clzdi2 -Wl,--wrap=__ctzsi2 -Wl,--wrap=__ctzdi2
LDFLAGS+=-Wl,--wrap=__popcountsi2 -Wl,--wrap=__popcountdi2
LDFLAGS+=-Wl,--wrap=__clz -Wl,--wrap=__clzl -Wl,--wrap=__clzll
LDFLAGS+=-Wl,--wrap=__aeabi_idiv -Wl,--wrap=__aeabi_idivmod -Wl,--wrap=__aeabi_ldivmod
LDFLAGS+=-Wl,--wrap=__aeabi_uidiv -Wl,--wrap=__aeabi_uidivmod -Wl,--wrap=__aeabi_uldivmod
LDFLAGS+=-Wl,--wrap=__aeabi_dadd -Wl,--wrap=__aeabi_ddiv -Wl,--wrap=__aeabi_dmul -Wl,--wrap=__aeabi_drsub
LDFLAGS+=-Wl,--wrap=__aeabi_dsub -Wl,--wrap=__aeabi_cdcmpeq -Wl,--wrap=__aeabi_cdrcmple
LDFLAGS+=-Wl,--wrap=__aeabi_cdcmple -Wl,--wrap=__aeabi_dcmpeq -Wl,--wrap=__aeabi_dcmplt
LDFLAGS+=-Wl,--wrap=__aeabi_dcmple -Wl,--wrap=__aeabi_dcmpge -Wl,--wrap=__aeabi_dcmpgt
LDFLAGS+=-Wl,--wrap=__aeabi_dcmpun -Wl,--wrap=__aeabi_i2d -Wl,--wrap=__aeabi_l2d
LDFLAGS+=-Wl,--wrap=__aeabi_ui2d -Wl,--wrap=__aeabi_ul2d -Wl,--wrap=__aeabi_d2iz
LDFLAGS+=-Wl,--wrap=__aeabi_d2lz -Wl,--wrap=__aeabi_d2uiz -Wl,--wrap=__aeabi_d2ulz
LDFLAGS+=-Wl,--wrap=__aeabi_d2f -Wl,--wrap=sqrt -Wl,--wrap=cos -Wl,--wrap=sin -Wl,--wrap=tan
LDFLAGS+=-Wl,--wrap=atan2 -Wl,--wrap=exp -Wl,--wrap=log -Wl,--wrap=ldexp -Wl,--wrap=copysign
LDFLAGS+=-Wl,--wrap=trunc -Wl,--wrap=floor -Wl,--wrap=ceil -Wl,--wrap=round -Wl,--wrap=sincos
LDFLAGS+=-Wl,--wrap=asin -Wl,--wrap=acos -Wl,--wrap=atan -Wl,--wrap=sinh -Wl,--wrap=cosh
LDFLAGS+=-Wl,--wrap=tanh -Wl,--wrap=asinh -Wl,--wrap=acosh -Wl,--wrap=atanh -Wl,--wrap=exp2
LDFLAGS+=-Wl,--wrap=log2 -Wl,--wrap=exp10 -Wl,--wrap=log10 -Wl,--wrap=pow -Wl,--wrap=powint
LDFLAGS+=-Wl,--wrap=hypot -Wl,--wrap=cbrt -Wl,--wrap=fmod -Wl,--wrap=drem -Wl,--wrap=remainder
LDFLAGS+=-Wl,--wrap=remquo -Wl,--wrap=expm1 -Wl,--wrap=log1p -Wl,--wrap=fma -Wl,--wrap=__aeabi_lmul
LDFLAGS+=-Wl,--wrap=__aeabi_fadd -Wl,--wrap=__aeabi_fdiv -Wl,--wrap=__aeabi_fmul
LDFLAGS+=-Wl,--wrap=__aeabi_frsub -Wl,--wrap=__aeabi_fsub -Wl,--wrap=__aeabi_cfcmpeq
LDFLAGS+=-Wl,--wrap=__aeabi_cfrcmple -Wl,--wrap=__aeabi_cfcmple -Wl,--wrap=__aeabi_fcmpeq
LDFLAGS+=-Wl,--wrap=__aeabi_fcmplt -Wl,--wrap=__aeabi_fcmple -Wl,--wrap=__aeabi_fcmpge
LDFLAGS+=-Wl,--wrap=__aeabi_fcmpgt -Wl,--wrap=__aeabi_fcmpun -Wl,--wrap=__aeabi_i2f
LDFLAGS+=-Wl,--wrap=__aeabi_l2f -Wl,--wrap=__aeabi_ui2f -Wl,--wrap=__aeabi_ul2f
LDFLAGS+=-Wl,--wrap=__aeabi_f2iz -Wl,--wrap=__aeabi_f2lz -Wl,--wrap=__aeabi_f2uiz
LDFLAGS+=-Wl,--wrap=__aeabi_f2ulz -Wl,--wrap=__aeabi_f2d -Wl,--wrap=sqrtf -Wl,--wrap=cosf
LDFLAGS+=-Wl,--wrap=sinf -Wl,--wrap=tanf -Wl,--wrap=atan2f -Wl,--wrap=expf -Wl,--wrap=logf
LDFLAGS+=-Wl,--wrap=ldexpf -Wl,--wrap=copysignf -Wl,--wrap=truncf -Wl,--wrap=floorf
LDFLAGS+=-Wl,--wrap=ceilf -Wl,--wrap=roundf -Wl,--wrap=sincosf -Wl,--wrap=asinf
LDFLAGS+=-Wl,--wrap=acosf -Wl,--wrap=atanf -Wl,--wrap=sinhf -Wl,--wrap=coshf -Wl,--wrap=tanhf
LDFLAGS+=-Wl,--wrap=asinhf -Wl,--wrap=acoshf -Wl,--wrap=atanhf -Wl,--wrap=exp2f -Wl,--wrap=log2f
LDFLAGS+=-Wl,--wrap=exp10f -Wl,--wrap=log10f -Wl,--wrap=powf -Wl,--wrap=powintf -Wl,--wrap=hypotf
LDFLAGS+=-Wl,--wrap=cbrtf -Wl,--wrap=fmodf -Wl,--wrap=dremf -Wl,--wrap=remainderf -Wl,--wrap=remquof
LDFLAGS+=-Wl,--wrap=expm1f -Wl,--wrap=log1pf -Wl,--wrap=fmaf -Wl,--wrap=malloc -Wl,--wrap=calloc
LDFLAGS+=-Wl,--wrap=free -Wl,--wrap=memcpy -Wl,--wrap=memset -Wl,--wrap=__aeabi_memcpy
LDFLAGS+=-Wl,--wrap=__aeabi_memset -Wl,--wrap=__aeabi_memcpy4 -Wl,--wrap=__aeabi_memset4
LDFLAGS+=-Wl,--wrap=__aeabi_memcpy8 -Wl,--wrap=__aeabi_memset8 -Wl,--wrap=printf -Wl,--wrap=vprintf
LDFLAGS+=-Wl,--wrap=puts -Wl,--wrap=putchar 

##############################################################################
# Compiler

# compiler base
COMP = arm-none-eabi-

# C compiler name
CC = ${COMP}gcc

# C++ compiler name
CPP = ${COMP}g++

# ASM compiler name
AS = ${COMP}gcc

# Linker
LD = ${COMP}g++

# Object dump
OD = ${COMP}objdump

# Object copy
OC = ${COMP}objcopy

# Names
NM = ${COMP}nm

# Size
SZ = ${COMP}size

# uf2
UF = ../_exe/elf2uf2.exe

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
	@rm -f ./$(TARGET).bin ./$(TARGET).hex ./$(TARGET).lst ./$(TARGET).map ./$(TARGET).sym ./$(TARGET).siz ./$(TARGET).uf2

##############################################################################
# Compile all (use "make all")

all: createdirs elf bin hex lst sym siz uf2

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
uf2: ./$(TARGET).uf2

##############################################################################
# Create .bin file from .elf file

./$(TARGET).bin: $(TEMP)/$(TARGET).elf
	@echo     bin		 $@
	@$(OC) -O binary $< $@

##############################################################################
# Create .hex file from .elf file

./$(TARGET).hex: $(TEMP)/$(TARGET).elf
	@echo     hex		 $@
	@$(OC) -O ihex $< $@

##############################################################################
# Create .lst file from .elf file

./$(TARGET).lst: $(TEMP)/$(TARGET).elf
	@echo     lst		 $@
	@$(OD) -d -S $< > $@

##############################################################################
# Create .sym file from .elf file

./$(TARGET).sym: $(TEMP)/$(TARGET).elf
	@echo     sym		 $@
	@$(NM) -n $< > $@

##############################################################################
# Create .siz file from .elf file

./$(TARGET).siz: $(TEMP)/$(TARGET).elf
	@echo     siz		 $@
	@$(SZ) $< > $@

##############################################################################
# Create .uf2 file from .elf file

./$(TARGET).uf2: $(TEMP)/$(TARGET).elf
	@echo     uf2		 $@
	@$(UF) $< $@

##############################################################################
# Create .o files from .c files

define CC_TEMP
$(TEMP)/$(notdir $(basename $(1))).o : $(1) $(MAKEFILE) $(INCLUDEFILE)
	@echo     CC		 $$<
	@$(CC) $$(DEFINE) $$(IPATH) $$(CFLAGS) -std=gnu11 -c $$< -o $$@
endef

$(foreach src, $(CSRC), $(eval $(call CC_TEMP, $(src))))

##############################################################################
# Create .o files from .cpp files

define CPP_TEMP
$(TEMP)/$(notdir $(basename $(1))).o : $(1) $(MAKEFILE) $(INCLUDEFILE)
	@echo     C++		 $$<
	@$(CPP) $$(DEFINE) $$(IPATH) $$(CPPFLAGS) -c $$< -o $$@
endef

$(foreach src, $(SRC), $(eval $(call CPP_TEMP, $(src))))

##############################################################################
# Create .o files from .S files

define AS_TEMP
$(TEMP)/$(notdir $(basename $(1))).o : $(1) $(MAKEFILE) $(INCLUDEFILE)
	@echo     ASM		 $$<
	@$(CC) $$(DEFINE) $$(IPATH) $$(AFLAGS) -c $$< -o $$@
endef

$(foreach src, $(ASRC), $(eval $(call AS_TEMP, $(src))))

##############################################################################
# Create .elf from .o files

$(TEMP)/$(TARGET).elf: $(ALLOBJ) $(MAKEFILE) $(LDSCRIPT)
	@echo     ld		 $@
	@$(LD) $(LDFLAGS) $(ALLOBJ) -o $@

##############################################################################
# Head dependencies, to recompile C after changing H

ifneq (${MAKECMDGOALS},clean)
-include $(wildcard $(TEMP)/*.d)
endif

##############################################################################
# List of dependencies not creating files

.PHONY: clean all createdirs elf bin hex lst sym siz uf2
