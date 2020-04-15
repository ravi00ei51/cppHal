INCLUDE_PATH = -IHAL/stm32f103rb/ -IHAL/stm32f103rb/afio -IHAL/stm32f103rb/dma -IHAL/stm32f103rb/gpio -IHAL/stm32f103rb/i2c -IHAL/stm32f103rb/interrupt -IHAL/stm32f103rb/rcc -IHAL/stm32f103rb/uart -IHAL/stm32f103rb/spi -IPAL/PERIPHERAL/clock -IPAL/PERIPHERAL/dma -IPAL/PERIPHERAL/i2c -IPAL/PERIPHERAL/iopin -IPAL/PERIPHERAL/uart -IPAL/PERIPHERAL/spi -IPAL/ -Iutil -IDAL -IDAL/mcp2515 -IDAL/MPU9250 -IDAL/esp8266AT -IDAL/MPU9250/util -IDAL/LCD

SRC_FILES     = main.c HAL/stm32f103rb/interrupt/interrupt.cpp PAL/PERIPHERAL/uart/uart_comms.cpp PAL/PERIPHERAL/spi/spi_comms.cpp util/mem.cpp DAL/LCD/LiquidCrystal_I2C.cpp

OUTPUT_PATH  = build

COMPILER_OPTIONS = -Os  -nostartfiles -g -Wall -std=c++1y -pedantic -Wextra -Wconversion -Wuninitialized -Winit-self -Wmissing-include-dirs -Wstrict-aliasing -static -fno-non-call-exceptions -fno-exceptions -fno-rtti -fno-use-cxa-atexit -fomit-frame-pointer -ffunction-sections -fdata-sections -mcpu=cortex-m3 -mthumb

LINKER_PATH = linker

OUTPUT_PATH = build

COMPILER_EXE = arm-none-eabi-g++

OBJCOPY_EXE  = arm-none-eabi-objcopy

SIZE_CALC = arm-none-eabi-size

RM = rm

board.elf: main.c
	$(COMPILER_EXE) $(COMPILER_OPTIONS) $(INCLUDE_PATH) $(SRC_FILES) -T $(LINKER_PATH)/sample.ld -o $(OUTPUT_PATH)/board.elf
	$(OBJCOPY_EXE) -O binary $(OUTPUT_PATH)/board.elf $(OUTPUT_PATH)/board.bin
	$(SIZE_CALC) $(OUTPUT_PATH)/board.elf

.PHONY: clean
clean:
	$(RM) -rf $(OUTPUT_PATH)/board.bin
	$(RM) -rf $(OUTPUT_PATH)/board.elf

