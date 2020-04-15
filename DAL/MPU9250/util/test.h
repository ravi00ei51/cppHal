#ifndef _H_TEST_H_
#define _H_TEST_H_
#include "types.h"
#include "peripheral.h"
#include "arduino_mpu9250_i2c.h"

#define    MPU9250_ADDRESS            0x68
#define    MAG_ADDRESS                0x0C

#define    GYRO_FULL_SCALE_250_DPS    0x00
#define    GYRO_FULL_SCALE_500_DPS    0x08
#define    GYRO_FULL_SCALE_1000_DPS   0x10
#define    GYRO_FULL_SCALE_2000_DPS   0x18

#define    ACC_FULL_SCALE_2_G        0x00
#define    ACC_FULL_SCALE_4_G        0x08
#define    ACC_FULL_SCALE_8_G        0x10
#define    ACC_FULL_SCALE_16_G       0x18

extern void delay(int);

class testMPU9250
{
public:
    // This function read Nbytes bytes from I2C device at address Address.
    // Put read bytes starting at register Register in the Data array.
    void I2Cread(uint8_t Address, uint8_t Register, uint8_t Nbytes, uint8_t* Data)
    {
        arduino_i2c_read( Address, Register, Nbytes, Data );
    }
    // Write a byte (Data) in device (Address) at register (Register)
    void I2CwriteByte(uint8_t Address, uint8_t Register, uint8_t Data)
    {
        arduino_i2c_write( Address, Register, 1, &Data );
    }

    // Initializations
    void setup()
    {
        unsigned char data;
        unsigned char data1[4];
        peripheral::i2c::open();
        delay(200);
        // Configure gyroscope range
        I2CwriteByte(MPU9250_ADDRESS,0x6B,0x80);
        delay(100);
        I2CwriteByte(MPU9250_ADDRESS,0x6B,0x00);
        delay(200);

        I2CwriteByte(MPU9250_ADDRESS,0x1D,0x48);
        delay(200);
        I2Cread(MPU9250_ADDRESS, 0x1D, 1, &data);
        delay(200);

        I2CwriteByte(MPU9250_ADDRESS,0x1B,0x18);
        delay(200);
        I2Cread(MPU9250_ADDRESS, 0x1B, 1, &data);
        delay(200);

        I2CwriteByte(MPU9250_ADDRESS,0x1C,0x00);
        delay(200);
        I2Cread(MPU9250_ADDRESS, 0x1C, 1, &data);
        delay(200);

        I2Cread(MPU9250_ADDRESS, 0x1a, 1, &data);
        delay(200);
        I2CwriteByte(MPU9250_ADDRESS,0x1a,0x03);
        delay(200);
        I2Cread(MPU9250_ADDRESS, 0x1a, 1, &data);
        delay(200);

        I2CwriteByte(MPU9250_ADDRESS,0x19,0x13);
        delay(200);
        I2Cread(MPU9250_ADDRESS, 0x19, 1, &data);
        delay(200);

        I2CwriteByte(MPU9250_ADDRESS,0x1a,0x04);
        delay(200);
        I2Cread(MPU9250_ADDRESS, 0x1a, 1, &data);
        delay(200);
        I2Cread(MPU9250_ADDRESS, 0x1a, 4, &data1[0]);
        delay(200);

        I2CwriteByte(MPU9250_ADDRESS,0x38,0x00);
        delay(200);
        I2Cread(MPU9250_ADDRESS, 0x38, 1, &data);
        delay(200);
        data = 0xFFu;

        I2CwriteByte(MPU9250_ADDRESS,0x6a,0x00);
        delay(200);
        I2Cread(MPU9250_ADDRESS, 0x6a, 1, &data);
        delay(200);

        I2CwriteByte(MPU9250_ADDRESS,0x37,0x82);
        delay(200);
        I2Cread(MPU9250_ADDRESS, 0x37, 1, &data);
        delay(200);

        I2CwriteByte(MAG_ADDRESS,0x0A,0x10);
        delay(200);


        I2Cread(MAG_ADDRESS, 0x00, 1, &data);
        delay(20);
        if( data != 0x48 )
        {
            data |= 0x01;
        }
    }


    long int cpt=0;
    // Main loop, read and display data
    void loop()
    {

        // _______________
        // ::: Counter :::

        // Display data counter

        // ____________________________________
        // :::  accelerometer and gyroscope :::

        // Read accelerometer and gyroscope
        uint8_t Buf[14];
        I2Cread(MPU9250_ADDRESS,0x3B,14,Buf);


        // Create 16 bits values from 8 bits data

        // Accelerometer
        int16_t ax=-(Buf[0]<<8 | Buf[1]);
        int16_t ay=-(Buf[2]<<8 | Buf[3]);
        int16_t az=Buf[4]<<8 | Buf[5];

        // Gyroscope
        int16_t gx=-(Buf[8]<<8 | Buf[9]);
        int16_t gy=-(Buf[10]<<8 | Buf[11]);
        int16_t gz=Buf[12]<<8 | Buf[13];



        // _____________________
        // :::  Magnetometer :::


        // Read register Status 1 and wait for the DRDY: Data Ready
        //Strong suspicion that this do while loop repeats to infinity
        uint8_t ST1;
        do
        {
             I2Cread(MAG_ADDRESS,0x02,1,&ST1);
             //Serial.println("Reading");
        }
        while (!(ST1&0x01));

        // Read magnetometer data
        uint8_t Mag[7];
        I2Cread(MAG_ADDRESS,0x03,7,Mag);


        // Create 16 bits values from 8 bits data

        // Magnetometer
        int16_t mx=-(Mag[3]<<8 | Mag[2]);
        int16_t my=-(Mag[1]<<8 | Mag[0]);
        int16_t mz=-(Mag[5]<<8 | Mag[4]);

         // End of line

         delay(100);
    }

};

#endif
