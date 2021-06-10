
Raspberry Pico minimalized SDK for Windows
------------------------------------------
(prepared by Miroslav Nemecek, panda38.sweb.cz, Panda38@seznam.cz)

How to install:
- Install compiler gcc-arm-none-eabi-10-2020 into folder C:\ARM10
- Unpack this package into some folder

If you have gcc compiler installed in another folder,
 edit PATH in files _c1.bat and _boot2\c.bat

I recommend FAR Manager as program editor - it contains
 very useful console output.

To compile demo project, run c.bat (or c_all.bat to compile all)
To clear demo project, run d.bat (or d_all.bat to clear all)
To write demo project to the Pico board:
 - press and hold BOOTSEL button on the Pico board
 - connect USB cable
 - release BOOTSEL button
 - edit destination drive (now there is r:) in file _e1.bat, command:
       copy /b program.uf2 r:
   and then run e.bat 
   ... or drag and drop file 'program.uf2' to Pico drive.


First try these demo projects
-----------------------------
blink ... simple blinking LED on the Pico board

hello_world_usb ... repeated printing text "USB: Hello, world!" on virtual
   serial port via USB cable. To see it, you must run some serial console
   program. Good choise is PuTTY console. Setup port to 115200 Baud,
   8 bits, 1 stop bit, no parity, flow control XON/XOF. How to determine
   virtual COM port number: get Properties on icon "This computer" and select
   "Driver Manager". Look at group "Ports (COM and LPT)". You should find
   "Serial USB device (COM3)", or another COM number.

hello_world_serial ... repeated printing text "UART: Hello, world!" on
   serial port. To see it, you need either convertor from RS232 COM port
   from 3.3V levels of Pico board, or you need convertor to USB port.
   Good choise is USB-serial adaptor PL2303TA.

   How to connect UART to Pico:
                    +---USB---+
   <-- UART0_TX GP0 |.1    40.|VBUS --- +5V power output to USB device
   --> UART0_RX GP1 |.2    39.|VSYS ---|<|--- +5V power input
   ---          GND |.3    38.| GND  K diode A
                GP2 |.4    37.| 3V3_EN
                GP3 |.5    36.| 3V3_OUT
                      ......
   Note: in simple case, you need not diode, you can connect +5V directly on board.

   connect USB/UART adaptor PL2303TA:
       red ......... +5V VSYS (39)
       black ....... GND (3)
       white RxD ... UART0_TX GP0 (1)
       green TxD ... UART0_RX GP1 (2)

   You need console program (as PuTTY) to see demo text.
   Setup port to 115200 Baud, 8 bits, 1 stop bit, no parity,
   flow control None.

   In Device Manager, USB adaptor can be found under name:
           "Prolific USB-to-Serial Comm Port (COM10)".


Other demo projects
-------------------
If possible, most programs have two variants:
 *_uart ... output to UART serial port
 *_usb ... output to virtual COM port via USB cable

But not all programs can have both variants.

Programs often print their texts immediately after connecting power.
But if you connect USB-Serial adaptor or USB cable, you will
need some time to run terminal program. And you will loss text prints.

To solve it, you can shortly power off USB-Serial adapter by disconnecting
+5V pin. When using USB cable with virtual COM port, some programs
will wait for pressing start key on console, usualy spacebar.


adc_console_uart, adc_console_usb ... ADC input to console
  Menu selected from keyboard:
        c0, ... : Select ADC channel n
        s       : Sample once
        S       : Sample many
        w       : Wiggle pins
        h       : print help

adc_dma_uart, adc_dma_usb ... Capture ADC input using DMA transfer
  Capture channel is 0, port GPIO26.
  If you have VGA board, demo sample (triangle) can be generated using PIO and core 1.

adc_hello_uart, adc_hello_usb ... Repeated measure ADC voltage on pin GPIO26.

adc_joystick_uart, adc_joystick_usb ... Repeated measure joystick
   position using ADC, X axis on GPIO26, Y axis on GPIO27.

clocks_48MHz_uart ... Measure frequency of on-board clocks with pll and without pll.

clocks_gpout_uart, clocks_gpout_usb ... Output clock signal to GPIO21
  Takes different clock sources, divide them by 100 and sends them to GPIO21 as clock signal.

clocks_resus_uart ... Resurection interrupt on system clock fail.
  Switch pll off. That raises emergency interrupt, which will restore lost system clock.

divider_hello_uart, divider_hello_usb ... Hello hardware divider

dma_control_uart ... Send data to UART using 2 DMAs control blocks.

dma_hello_uart, dma_hello_usb ... Copy data between 2 buffers using DMA.

dma_irq ... Control LED using PWM with PIO and DMA.

flash_cache_uart, flash_cache_usb ... Example of using flash cache hit/access counters

flash_nuke ... clear content of flash
  Program will load into SRAM, clear content of Flash, shortly blink LED to indicate all ok
  and restart USB loader. From now, Pico board will appear empty, as from factory setting.

flash_program_uart ... Program 256-byte page of Flash memory.

flash_ssi_dma_uart, flash_ssi_dma_usb ... Measure transfer speed from Flash to RAM using DMA.

flash_xip_stream_uart, flash_xip_stream_usb ... stream DMAable FIFO

gpio_7segment_uart, gpio_7segment_usb ... Counting 7-segment display. Press button to count down.

gpio_dht_uart, gpio_dht_usb ... Measure temperature and humidity using DHT sensor.

gpio_irq_uart, gpio_irq_usb ... Print events on GPIO 2 (edge fall, edge rise).

i2c_bus_scan_uart, i2c_bus_scan_usb ... Print out a table of I2C slave adresses.

i2c_lcd1602 ... Example code to drive a 16x2 LCD panel via a I2C (3.3V).

i2c_mpu6050_uart, i2c_mpu6050_usb ... Reading MPU6050 MEMS accelerometer and gyroscope

interp_uart, interp_usb ... Texture interpolation

multicore_fifo_uart, multicore_fifo_usb ... Multicore fifo iqrs

multicore_hello_uart, multicore_hello_usb ... Multicore hello

multicore_runner_uart, multicore_runner_usb ... Multicore run functions.

picoboard_blinky ... Blinking Morse text on LED on board.

picoboard_button ... Blink LED if BOOTSEL button is pressed.

pio_addition_uart, pio_addition_usb ... Do some PIO additions

pio_apa102 ... Control RGB LEDs using APA102

pio_blink_uart ... blink LEDs at different frequencies

pio_differ_uart, pio_differ_usb ... Differential serial transmit/receive example

pio_hello ... Blinking LED using PIO

pio_hub75 ... Display an image on a 128x64 HUB75 RGB LED matrix.

pio_i2c_uart, pio_i2c_usb ... Scan an I2C bus.

pio_logic_uart, pio_logic_usb ... PIO logic analyser example

pio_manchester_uart, pio_manchester_usb ... Send and receive Manchester-encoded serial.

pio_pwm_uart, pio_pwm_usb ... Pulse width modulation to fade LED.

pio_spiflash_uart, pio_spiflash_usb ... erase, program and read back SPI serial flash memory

pio_spiloopback_uart, pio_spiloopback_usb ... loopback test with all four CPHA/CPOL combinations.

pio_squarewave ... fast square wave onto a GPIO

pio_st7789 ... display spinning image on ST7789 serial LCD.

pio_uartrx_uart, pio_uartrx_usb ... implement UART receiver

pio_uarttx_uart ... print text on debug UART

pio_ws2812_uart, pio_ws2812_usb ... Example of driving WS2812 addressable RGB LEDs.

pio_ws2812par_uart, pio_ws2812par_usb ... Example of driving WS2812 addressable RGB LEDs.

pwm_duty_uart, pwm_duty_usb ... output PWM and measure duty cycle using another PWM

pwm_hello ... Output PWM signals on pins 0 and 1

pwm_led ... fade LED using PWM

reset_hello_uart, reset_hello_usb ... Perform a hard reset on some peripherals, then bring them back up.

rtc_alarm_uart, rtc_alarm_usb ... Trigger alarm after 5 seconds

rtc_alarmrep_uart, rtc_alarmrep_usb ... Trigger an RTC interrupt once per minute.

rtc_hello_uart, rtc_hello_usb ... set and display RTC clock

spi_bme280_uart, spi_bme280_usb ... Attach a BME280 temperature/humidity/pressure sensor via SPI.

spi_dma_uart, spi_dma_usb ... Use DMA to transfer data both to and from the SPI simultaneously.

spi_flash_uart, spi_flash_usb ... Erase, program and read a serial flash via SPI.

spi_mpu9250_uart, spi_mpu9250_usb ... Attach a MPU9250 accelerometer/gyoscope via SPI.

system_board_uart, system_board_usb ... Read the 64 bit unique ID from external flash, which serves as a unique identifier for the board.

system_dbltap ... Pressing reset quickly twice will reset into USB bootloader

system_write_uart, system_write_usb ... Demonstrate the effects of 8-bit and 16-bit writes on a 32-bit IO register.

timer_hello_uart, timer_hello_usb ... Set callbacks on the system timer, which repeat at regular intervals. Cancel the timer when we're done.

timer_lowlevel_uart, timer_lowlevel_usb ... Example of direct access to the timer hardware.

timer_sampler_uart, timer_sampler_usb ... Sample GPIOs in a timer callback

uart_advanced_uart ... Use some other UART features like RX interrupts, hardware control flow, and data formats other than 8n1.

uart_hello_uart ... Print some text from one of the UART serial ports, without going through stdio.

usb_audio ... Audio headset example from TinyUSB

usb_composite ... Composite HID (mouse + keyboard) example from TinyUSB

usb_generic ... Generic HID device example from TinyUSB

usb_host_uart ... Use USB in host mode to poll an attached HID keyboard (TinyUSB example)

usb_lowlevel_uart ... A USB Bulk loopback implemented with direct access to the USB hardware (no TinyUSB)

watchdog_hello_uart, watchdog_hello_usb ... Set the watchdog timer, and let it expire. Detect the reboot, and halt.
