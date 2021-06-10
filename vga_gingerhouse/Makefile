#   make clean ... clean
#   make all ... compile

##############################################################################
# Input files

# ASM source files
ASRC +=

# C source files
CSRC +=

# C++ source files
SRC += img/01.cpp
SRC += img/02.cpp
SRC += img/03.cpp
SRC += img/04.cpp
SRC += img/05.cpp
SRC += img/06.cpp
SRC += img/07.cpp
SRC += img/08.cpp
SRC += img/09.cpp
SRC += img/10.cpp
SRC += img/11.cpp
SRC += img/12.cpp
SRC += img/13.cpp
SRC += img/14.cpp
SRC += img/15.cpp
SRC += img/16.cpp
SRC += img/17.cpp
SRC += img/18.cpp
SRC += img/19.cpp
SRC += img/20.cpp
SRC += img/22.cpp

SRC += src/main.cpp

##############################################################################
# Configuration

# defines
DEFINE += -DCFG_TUSB_DEBUG=0
DEFINE += -DCFG_TUSB_MCU=OPT_MCU_RP2040
DEFINE += -DCFG_TUSB_OS=OPT_OS_PICO
DEFINE += -DPICO_BIT_OPS_PICO=1
DEFINE += -DPICO_BOARD=\"pico\"
DEFINE += -DPICO_BUILD=1
DEFINE += -DPICO_CMAKE_BUILD_TYPE=\"Release\"
DEFINE += -DPICO_COPY_TO_RAM=0
DEFINE += -DPICO_CXX_ENABLE_EXCEPTIONS=0
DEFINE += -DPICO_DIVIDER_HARDWARE=1
DEFINE += -DPICO_DOUBLE_PICO=1
DEFINE += -DPICO_FLOAT_PICO=1
DEFINE += -DPICO_INT64_OPS_PICO=1
DEFINE += -DPICO_MEM_OPS_PICO=1
DEFINE += -DPICO_NO_FLASH=0
DEFINE += -DPICO_NO_HARDWARE=0
DEFINE += -DPICO_ON_DEVICE=1
DEFINE += -DPICO_PRINTF_PICO=1
DEFINE += -DPICO_PROGRAM_URL=\"https://github.com/raspberrypi/pico-examples\"
DEFINE += -DPICO_TARGET_NAME=\"pico\"
DEFINE += -DPICO_USE_BLOCKED_RAM=0
DEFINE += -DNDEBUG

# stdio output (select one option)
#DEFINE += -DPICO_STDIO_UART=1
#DEFINE += -DPICO_STDIO_SEMIHOSTING=1
DEFINE += -DPICO_STDIO_USB=1

# How to connect UART to Pico:
#                  +---USB---+
# <-- UART0_TX GP0 |.1    40.|VBUS --- +5V power output to USB device
# --> UART0_RX GP1 |.2    39.|VSYS ---|<|--- +5V power input
# ---          GND |.3    38.| GND  K diode A
#              GP2 |.4    37.| 3V3_EN
#              GP3 |.5    36.| 3V3_OUT
#                    ......
#
# USB/UART adaptor PL2303TA:
#    red ......... +5V VSYS (39)
#    black ....... GND (3)
#    white RxD ... UART0_TX GP0 (1)
#    green TxD ... UART0_RX GP1 (2)

# Setup: 115200 Baud

include ../Makefile.inc
