/******************************************************************************
arduino_mpu9250_i2c.cpp - MPU-9250 Digital Motion Processor Arduino Library
Jim Lindblom @ SparkFun Electronics
original creation date: November 23, 2016
https://github.com/sparkfun/SparkFun_MPU9250_DMP_Arduino_Library

This library implements motion processing functions of Invensense's MPU-9250.
It is based on their Emedded MotionDriver 6.12 library.
	https://www.invensense.com/developers/software-downloads/

Development environment specifics:
Arduino IDE 1.6.12
SparkFun 9DoF Razor IMU M0

Supported Platforms:
- ATSAMD21 (Arduino Zero, SparkFun SAMD21 Breakouts)
******************************************************************************/
#include "arduino_mpu9250_clk.h"
#include "peripheral.h"
unsigned char i2c_addr;
unsigned char buf[256];
extern void memcpy( void *, void *, int );
int arduino_i2c_write(unsigned char slave_addr, unsigned char reg_addr,
                       unsigned char length, unsigned char * data)
{
    buf[0] = reg_addr;
    memcpy( &buf[1], data, length );

    peripheral::i2c::write(slave_addr, buf, length+1 );
    delay(20);
	return 0;
}

int arduino_i2c_read(unsigned char slave_addr, unsigned char reg_addr,
                       unsigned char length, unsigned char * data)
{
    unsigned char i;

        i2c_addr = reg_addr;
        peripheral::i2c::write( slave_addr, &i2c_addr, 1u );
        delay(2);
        peripheral::i2c::read( slave_addr, data, length );
        reg_addr++;
        delay(20);


	return 0;
}
