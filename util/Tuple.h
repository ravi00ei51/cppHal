#ifndef __H_REG_TUPLE_H__
#define __H_REG_TUPLE_H__
/**********************************************************************************************************************
* Enum to declae permissions on bit fields of microprocessor registers
**********************************************************************************************************************/
enum access_t: unsigned int
{
    RESERVED,
    READ_WRITE,
    READ_ONLY,
    WRITE_ONLY
};
/**********************************************************************************************************************
* Class Name - Register Access
* Class Interfaces - set -
**********************************************************************************************************************/

template <typename T, unsigned int address, unsigned int access, unsigned int offset, unsigned int count> class registerAccess
{
private:
   static T getMask(void)
   {
        T mask;
        mask = (T)(~0);
        mask = (mask >> offset) << offset;
        mask = (mask ) << ( ( sizeof(T) << 3 ) - offset - count );
        mask = (mask ) >> ( ( sizeof(T) << 3 ) - offset - count );
        return mask;
   }

public:
    static void set( T value )
    {
        unsigned int * p;
        p = reinterpret_cast<unsigned int *>(address);
        T mask    = getMask();
        value     = value << offset;
        value    &=  mask;
        *p &= ~mask;
        *p |=  value;
    }
    static T get( void )
    {
        T value;
        T mask = getMask();
        unsigned int * p = reinterpret_cast<unsigned int *>(address);
        value    =  (*p)&mask;
        value    = value >> offset;
        return (T)(value);
    }
};

template <typename T, unsigned int address, unsigned int offset, unsigned int count> class registerAccess<T, address, RESERVED, offset, count>
{
};
template <typename T, unsigned int address,unsigned int offset, unsigned int count> class registerAccess<T, address, WRITE_ONLY, offset, count>
{
private:
   static T getMask(void)
   {
        T mask;
        mask = (T)(~0);
        mask = (mask >> offset) << offset;
        mask = (mask ) << ( ( sizeof(T) << 3 ) - offset - count );
        mask = (mask ) >> ( ( sizeof(T) << 3 ) - offset - count );
        return mask;
   }
public:
    static void set( T value )
    {
        T mask = getMask();;
        unsigned int * p = reinterpret_cast<unsigned int *>(address);
        value    = value << offset;
        value    &=  mask;
        *p &= ~mask;
        *p |=  value;
    }
};
template <typename T, unsigned int address, unsigned int offset, unsigned int count> class registerAccess<T, address, READ_ONLY, offset, count>
{
private:
   static T getMask(void)
   {
        T mask;
        mask = (T)(~0);
        mask = (mask >> offset) << offset;
        mask = (mask ) << ( ( sizeof(T) << 3 ) - offset - count );
        mask = (mask ) >> ( ( sizeof(T) << 3 ) - offset - count );
        return mask;
   }

public:
    static T get( void )
    {
        T mask;
        T value;
        unsigned int * p = reinterpret_cast<unsigned int *>(address);
        mask = (T)(~0);
        mask = (mask >> offset) << offset;
        mask = (mask ) << ( ( sizeof(T) << 3 ) - offset - count );
        mask = (mask ) >> ( ( sizeof(T) << 3 ) - offset - count );
        value    =  *p;
        value   &=  mask;
        value  >>=  offset;
        return (T)(value);
    }

};

/**********************************************************************************************************************
* Class Name - Tuple
**********************************************************************************************************************/

template <typename T, unsigned int base_address, unsigned int address_offset, unsigned int ...moreValues> class Tuple;
template <typename T, unsigned int base_address, unsigned int address_offset, unsigned int access, unsigned int offset, unsigned int count, unsigned int ...moreValues> class Tuple<T, base_address, address_offset, access, offset, count, moreValues...>:public Tuple<T, base_address, address_offset, moreValues...>
{
public:
//    registerAccess<T, address, access, offset, count> regBit;
};

template <typename T, unsigned int base_address, unsigned int address_offset> class Tuple<T, base_address, address_offset>
{
public:
};

/**********************************************************************************************************************
* Class Name - accessTuple
**********************************************************************************************************************/

template< unsigned int index, typename T, unsigned int baseAddress, unsigned int addressOffset, unsigned int ...moreValues> class accessTuple;
template< unsigned int index, typename T, unsigned int baseAddress, unsigned int addressOffset, unsigned int access, unsigned int offset, unsigned int count, unsigned int ...moreValues> class accessTuple<index, T, baseAddress, addressOffset, access, offset, count, moreValues...>:public accessTuple<index - 1 , T, baseAddress, addressOffset, moreValues...>
{
public:
    auto getRegister( Tuple<T, baseAddress, addressOffset, access, offset, count, moreValues...> * pParentTuple )
    {
        accessTuple<index - 1, T, baseAddress, addressOffset, moreValues...> * pAccessTuple;
        Tuple<T, baseAddress, addressOffset, moreValues...> * pChildTuple;
        pChildTuple  = static_cast<Tuple<T, baseAddress, addressOffset, moreValues...> *>(pParentTuple);
        pAccessTuple = static_cast<accessTuple<index-1, T, baseAddress, addressOffset, moreValues...> *>(this);
        return pAccessTuple->getRegister( pChildTuple );
    }
    auto setRegister( Tuple<T, baseAddress, addressOffset, access, offset, count, moreValues...> * pParentTuple, T value )
    {
        accessTuple<index - 1, T, baseAddress, addressOffset, moreValues...> * pAccessTuple;
        Tuple<T, baseAddress, addressOffset, moreValues...> * pChildTuple;
        pChildTuple  = static_cast<Tuple<T, baseAddress, addressOffset, moreValues...> *>(pParentTuple);
        pAccessTuple = static_cast<accessTuple<index-1, T, baseAddress, addressOffset, moreValues...> *>(this);
        return pAccessTuple->setRegister( pChildTuple, value );
    }
};
template<typename T, unsigned int baseAddress, unsigned int addressOffset, unsigned int access, unsigned int offset, unsigned int count, unsigned int ...moreValues> class accessTuple<0, T, baseAddress, addressOffset, access, offset, count, moreValues...>
{
public:
    auto getRegister( Tuple<T, baseAddress, addressOffset, access, offset, count, moreValues...> * pParentTuple )
    {
        static_cast<void>(pParentTuple);
        return registerAccess<T, baseAddress + addressOffset, access, offset, count>::get();
    }
    auto setRegister( Tuple<T, baseAddress, addressOffset, access, offset, count, moreValues...> * pParentTuple, T value )
    {
        static_cast<void>(pParentTuple);
        return registerAccess<T, baseAddress + addressOffset, access, offset, count>::set(value);
    }
};
namespace registers
{
    /**********************************************************************************************************************
    * set function
    **********************************************************************************************************************/

    template <unsigned int index, typename T, unsigned int baseAddress, unsigned int addressOffset, unsigned int access, unsigned int offset, unsigned int count, unsigned int ...moreValues> void set( Tuple<T, baseAddress, addressOffset, access, offset, count, moreValues...> * pTuple, T value)
    {
        accessTuple<index, T, baseAddress, addressOffset, access, offset, count, moreValues...> aT ;
        (void)(aT.setRegister( pTuple, value ));
    }

    /**********************************************************************************************************************
    * get function
    **********************************************************************************************************************/

    template <unsigned int index, typename T, unsigned int baseAddress, unsigned int addressOffset, unsigned int access, unsigned int offset, unsigned int count, unsigned int ...moreValues> T get( Tuple<T, baseAddress, addressOffset, access, offset, count, moreValues...> * pTuple )
    {
        accessTuple<index, T, baseAddress, addressOffset, access, offset, count, moreValues...> aT ;
        return (aT.getRegister( pTuple ));
    }
}


template <unsigned int baseAddress, unsigned int addressOffset> class xEnum
{
public:
    enum val:unsigned int
    {
        VAL0,
        VAL1
    };
};

template <typename T, unsigned int BASE_ADDRESS, unsigned int ADDRESS_OFFSET, unsigned int...  moreValues> class mcuRegister:public xEnum<BASE_ADDRESS, ADDRESS_OFFSET>
{
public:
    static Tuple<T, BASE_ADDRESS, ADDRESS_OFFSET, moreValues...> reg;

    template < typename xEnum<BASE_ADDRESS, ADDRESS_OFFSET>::val i > static  void set( unsigned int value )
    {

        registers::set<i>( &reg, value );
    }

    template < typename xEnum<BASE_ADDRESS, ADDRESS_OFFSET>::val i > static  void clr()
    {
        registers::set<i>( &reg, 0u );
    }

    template < typename xEnum<BASE_ADDRESS, ADDRESS_OFFSET>::val i >static  unsigned int get( void )
    {
        return registers::get<i>( &reg );
    }
    static unsigned int read()
    {
        unsigned int * address;
        address = reinterpret_cast<unsigned int *>(BASE_ADDRESS+ADDRESS_OFFSET);
        return *address;
    }
    static void write( unsigned int val )
    {
        unsigned int * address;
        address  = reinterpret_cast<unsigned int *>(BASE_ADDRESS+ADDRESS_OFFSET);
        *address = val;
    }

};
template <unsigned int x> class moduleName;
#endif
