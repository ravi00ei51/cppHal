#ifndef __H_COMMS_I2C_H__
#define __H_COMMS_I2C_H__
#include "stm32f103rb.h"
#include "iopin.h"
#include "types.h"

enum address_type_t
{
    ADDR_7BIT,
    ADDR_10BIT
};
template <commsType type, unsigned int speed, address_type_t address> class i2c_comms;
template <unsigned int speed, address_type_t address> class i2c_comms<POLLING, speed, address>
{
private:
    static unsigned char read1Byte( unsigned int slave_addr )
    {
        volatile unsigned int data;
        volatile unsigned int val = 1u;

        slave_addr <<= 1u;
        slave_addr |= 0x01u;
        while( val == 1u )
            val = stm32f103rb::i2c1::sr2::get<stm32f103rb::i2c1::sr2::BUSY>();
        stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::START>( 1u );

        val = 0u;
        while(  val != 1u )
            val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::SB>();

        val = stm32f103rb::i2c1::sr1::read();
        stm32f103rb::i2c1::dr::set<stm32f103rb::i2c1::dr::DR>( slave_addr );

        val = 0u;
        while( val != 1u )
            val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::ADDR>();
        stm32f103rb::i2c1::cr1::clr<stm32f103rb::i2c1::cr1::ACK>();
        asm("cpsid i");
        val = stm32f103rb::i2c1::sr1::read();
        val = stm32f103rb::i2c1::sr2::read();
        stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::STOP>( 1u );
        asm("cpsie i");
        val = 0u;
        while( val != 1u )
            val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::RXNE>();
        data = stm32f103rb::i2c1::dr::get<stm32f103rb::i2c1::dr::DR>();
        val = 1u;
        while( val != 0u )
            val = stm32f103rb::i2c1::cr1::get<stm32f103rb::i2c1::cr1::STOP>();
        stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::ACK>(1u);
        return static_cast<unsigned char>(data);
    }
    static void read2Bytes( unsigned int slave_addr, unsigned char * data )
    {
        volatile unsigned int val = 1u;

        slave_addr <<= 1u;
        slave_addr |= 0x01u;
        while( val == 1u )
            val = stm32f103rb::i2c1::sr2::get<stm32f103rb::i2c1::sr2::BUSY>();
        stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::START>( 1u );

        val = 0u;
        while(  val != 1u )
            val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::SB>();

        stm32f103rb::i2c1::dr::set<stm32f103rb::i2c1::dr::DR>( slave_addr );

        val = 0u;
        while( val != 1u )
            val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::ADDR>();
        stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::POS>( 1u );
        asm("cpsid i");
        val = stm32f103rb::i2c1::sr1::read();
        val = stm32f103rb::i2c1::sr2::read();
        stm32f103rb::i2c1::cr1::clr<stm32f103rb::i2c1::cr1::ACK>();
        asm("cpsie i");
        val = 0u;
        while( val != 1u )
            val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::BTF>();
        asm("cpsid i");
        stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::STOP>(1u);
        data[0] = static_cast<unsigned char>(stm32f103rb::i2c1::dr::get<stm32f103rb::i2c1::dr::DR>());
        asm("cpsie i");
        data[1] = static_cast<unsigned char>(stm32f103rb::i2c1::dr::get<stm32f103rb::i2c1::dr::DR>());
        val = 1u;
        while( val != 0u )
            val = stm32f103rb::i2c1::cr1::get<stm32f103rb::i2c1::cr1::STOP>();
        stm32f103rb::i2c1::cr1::clr<stm32f103rb::i2c1::cr1::POS>();
        stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::ACK>(1u);
    }
    static void readNBytes( unsigned int slave_addr, unsigned char * data, unsigned int numberOfBytes )
    {
        unsigned int counter = 0;
        volatile unsigned int val = 1u;

        slave_addr <<= 1u;
        slave_addr |= 0x01u;
        while( val == 1u )
            val = stm32f103rb::i2c1::sr2::get<stm32f103rb::i2c1::sr2::BUSY>();
        stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::START>( 1u );

        val = 0u;
        while(  val != 1u )
            val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::SB>();

        //val = stm32f103rb::i2c1::sr1::read();
        stm32f103rb::i2c1::dr::set<stm32f103rb::i2c1::dr::DR>( slave_addr );

        val = 0u;
        while( val != 1u )
            val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::ADDR>();
        val = stm32f103rb::i2c1::sr1::read();
        val = stm32f103rb::i2c1::sr2::read();
        while ( numberOfBytes != 0 )
        if( numberOfBytes != 3 )
        {
            val = 0u;
            while( val != 1u )
                val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::BTF>();
            data[counter] =  static_cast<unsigned char>(stm32f103rb::i2c1::dr::get<stm32f103rb::i2c1::dr::DR>());
            counter++;
            numberOfBytes--;
        }
        else
        {
            val = 0u;
            while( val != 1u )
                val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::BTF>();
            stm32f103rb::i2c1::cr1::clr<stm32f103rb::i2c1::cr1::ACK>();
            asm("cpsid i");
            data[counter] =  static_cast<unsigned char>(stm32f103rb::i2c1::dr::get<stm32f103rb::i2c1::dr::DR>());
            counter++;
            stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::STOP>(1u);
            data[counter] =  static_cast<unsigned char>(stm32f103rb::i2c1::dr::get<stm32f103rb::i2c1::dr::DR>());
            counter++;
            asm("cpsie i");
            val = 0u;
            while( val != 1u )
                val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::RXNE>();
            data[counter] = static_cast<unsigned char>(stm32f103rb::i2c1::dr::get<stm32f103rb::i2c1::dr::DR>());
            counter++;
            numberOfBytes = 0u;
            val = 1u;
            while( val != 0u )
                val = stm32f103rb::i2c1::cr1::get<stm32f103rb::i2c1::cr1::STOP>();
            stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::ACK>(1u);
        }
    }
public:
    static void open( void )
    {
        volatile unsigned int val = 1u;
        stm32f103rb::rcc::apb2enr  ::set<stm32f103rb::rcc::apb2enr::IOPBEN>(1u);
        stm32f103rb::rcc::apb2enr  ::set<stm32f103rb::rcc::apb2enr::AFIOEN>(1u);
        stm32f103rb::rcc ::apb1enr ::set<stm32f103rb::rcc ::apb1enr ::I2C1EN  >( 1u );
        iopin<PORTB, PIN6>::open( 1u, 3u );
        iopin<PORTB, PIN7>::open( 1u, 3u );
        iopin<PORTB, PIN6>::write(PIN_ON);
        iopin<PORTB, PIN7>::write(PIN_ON);

        iopin<PORTB, PIN6>::open( 1u, 3u );
        iopin<PORTB, PIN7>::open( 1u, 3u );
        iopin<PORTB, PIN6>::write(PIN_OFF);
        iopin<PORTB, PIN7>::write(PIN_OFF);

        iopin<PORTB, PIN6>::open( 1u, 3u );
        iopin<PORTB, PIN7>::open( 1u, 3u );
        iopin<PORTB, PIN6>::write(PIN_ON);
        iopin<PORTB, PIN7>::write(PIN_ON);

        iopin<PORTB, PIN6>::open( 3u, 3u );
        iopin<PORTB, PIN7>::open( 3u, 3u );
        stm32f103rb::i2c1::cr1     ::set<stm32f103rb::i2c1::cr1     ::SWRST   >(1u);
        stm32f103rb::i2c1::cr1     ::set<stm32f103rb::i2c1::cr1     ::SWRST   >(0u);
        stm32f103rb::i2c1::cr1     ::set<stm32f103rb::i2c1::cr1     ::PE      >(1u);

        // Disable I2C module to configure trise and CCR
        stm32f103rb::i2c1::cr1     ::clr<stm32f103rb::i2c1::cr1     ::PE      >();
        stm32f103rb::i2c1::cr2     ::clr<stm32f103rb::i2c1::cr2     ::ITBUFEN >();
        stm32f103rb::i2c1::cr2     ::clr<stm32f103rb::i2c1::cr2     ::ITEVTEN >();
        stm32f103rb::i2c1::cr2     ::clr<stm32f103rb::i2c1::cr2     ::ITERREN >();
        if( speed == 100000 )
        {
            //Calculate frequency based on current rcc configuration
            stm32f103rb::i2c1::cr2     ::set<stm32f103rb::i2c1::cr2     ::FREQ    >( 8u );
            //Calculate CCR value
            stm32f103rb::i2c1::trise   ::set<stm32f103rb::i2c1::trise   ::TRISE   >( 9u );
            stm32f103rb::i2c1::ccr     ::set<stm32f103rb::i2c1::ccr     ::CCR     >( 40u );
        }
        else
        {
            // change according to speed of 400000
            //Calculate frequency based on current rcc configuration
            stm32f103rb::i2c1::cr2     ::set<stm32f103rb::i2c1::cr2     ::FREQ    >( 8u );
            //Calculate CCR value
            stm32f103rb::i2c1::trise   ::set<stm32f103rb::i2c1::trise   ::TRISE   >( 3u );
            stm32f103rb::i2c1::ccr     ::set<stm32f103rb::i2c1::ccr     ::CCR     >( 6u );
            stm32f103rb::i2c1::ccr     ::set<stm32f103rb::i2c1::ccr     ::F_S     >( 1u );
            val = 0u;

        }
        // Disable I2C module to configure trise and CCR
        stm32f103rb::i2c1::cr1     ::set<stm32f103rb::i2c1::cr1     ::PE      >(1u);
        stm32f103rb::i2c1::cr1     ::set<stm32f103rb::i2c1::cr1     ::ACK     >( 1u );
        stm32f103rb::i2c1::cr1     ::set<stm32f103rb::i2c1::cr1     ::SMBUS   >( 0u );
        //Assign address mode 7-bit or 10-bit and enable I2C module
        stm32f103rb::i2c1::oar1    ::clr<stm32f103rb::i2c1::oar1    ::ADD0    >();
        stm32f103rb::i2c1::oar1    ::set<stm32f103rb::i2c1::oar1    ::ADD71   >(0x15u);
        stm32f103rb::i2c1::oar1    ::clr<stm32f103rb::i2c1::oar1    ::ADD     >();
        stm32f103rb::i2c1::oar1    ::clr<stm32f103rb::i2c1::oar1    ::ADDMODE >();
        stm32f103rb::i2c1::oar1    ::set<stm32f103rb::i2c1::oar1    ::RESERVED_0 >(0x10u);

        iopin<PORTB, PIN6>::open( 3u, 3u );
        iopin<PORTB, PIN7>::open( 3u, 3u );
    }
    static void write( unsigned int slave_addr, unsigned char * buffer, unsigned int write_size )
    {
        volatile unsigned int val = 0u;

        slave_addr <<= 1u;
        val = 1u;
        while( val == 1u )
            val = stm32f103rb::i2c1::sr2::get<stm32f103rb::i2c1::sr2::BUSY>();
        stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::START>( 1u );

        val = 0u;
        while(  val != 1u )
            val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::SB>();

        val = stm32f103rb::i2c1::sr1::read();
        stm32f103rb::i2c1::dr::set<stm32f103rb::i2c1::dr::DR>( slave_addr );

        val = 0u;
        while( val != 1u )
            val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::ADDR>();

        val = stm32f103rb::i2c1::sr1::read();
        val = stm32f103rb::i2c1::sr2::read();

        for( unsigned int i = 0; i < write_size ; i++ )
        {
            stm32f103rb::i2c1::dr::set<stm32f103rb::i2c1::dr::DR>( buffer[i] );
            val = 0u;
            while( val != 1u )
                val = stm32f103rb::i2c1::sr1::get<stm32f103rb::i2c1::sr1::BTF>();
        }
        stm32f103rb::i2c1::cr1::set<stm32f103rb::i2c1::cr1::STOP>( 1u );

        val = 1u;
        while( val != 0u )
            val = stm32f103rb::i2c1::cr1::get<stm32f103rb::i2c1::cr1::STOP>();
    }
    static void read( unsigned int slave_addr, unsigned char * buffer, unsigned int write_size )
    {
        switch( write_size )
        {
            case 1:
                buffer[0] = read1Byte( slave_addr );
            break;
            case 2:
                read2Bytes( slave_addr, buffer );
            break;
            default:
                readNBytes( slave_addr, buffer, write_size );
            break;
        }
    }
};
#endif // __H_PREIPHERAL_I2C_H__
