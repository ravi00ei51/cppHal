# cppHal
This projects presents a technique to implement micrcontroller drivers in C++. This project uses combination of variadic templates in C++ along with template specialization to program micrcontroller registers. 
It has been tested with STM32F103rb nucleo board. Following drivers has been implemented using this:
1. UART
2. I2C
3. GPIO

Aim is to provide a genric way of microcontroller programming without writing numeros #defines for each peripheral.

Following tests have been run to test gpio, uart and i2c:

1. Simple LED blinking
2. A 16x2 I2C display 
3. MPU9250 acccelerometer/gyro over I2C
4. Simple UART communication between STM32 board and Laptop
5. ESP-01 wifi control over UART.

This code is free to use for any educational purposes. For any comeerical usage please notify the developer first. Any commercial usage of this project is not permitted without developer's knowledge.
