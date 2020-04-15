#ifndef __H_INT_TUPLE_H__
#define __H_INT_TUPLE_H__
#include "types.h"
/**********************************************************************************************************************
* Class Name - Tuple
**********************************************************************************************************************/

template <fptr x, fptr ...moreValues> class funcTuple: public funcTuple<moreValues...>
{
public:
    constexpr static fptr val = x;
};

template <fptr ...moreValues> class funcTuple<NULL_FUNCTION_PTR, moreValues...>: public funcTuple<moreValues...>
{
public:
    static fptr val;
};


template <fptr x> class funcTuple<x, NULL_FUNCTION_PTR>
{
public:
    constexpr static fptr val = x;
};



template <> class funcTuple<NULL_FUNCTION_PTR, NULL_FUNCTION_PTR>
{
public:
    static fptr val;
};

/**********************************************************************************************************************
* Class Name - accessTuple
**********************************************************************************************************************/
template< unsigned int index, fptr ...moreValues> class accessFuncTuple;
//template< unsigned int index, unsigned int type, unsigned int func, unsigned int ...moreValues> class accessIntTuple;
template< unsigned int index, fptr func, fptr ...moreValues> class accessFuncTuple< index, func, moreValues... >:public accessFuncTuple<index - 1 , moreValues...>
{
public:
    static auto getRegister( funcTuple<func, moreValues...> * pParentFuncTuple ) -> decltype( accessFuncTuple<index-1, moreValues...>::getRegister( pParentFuncTuple ))
    {
        return accessFuncTuple<index-1, moreValues...>::getRegister(pParentFuncTuple);
    }
    static auto setRegister( funcTuple<func, moreValues...> * pParentFuncTuple, fptr value ) -> decltype( accessFuncTuple<index-1, moreValues...>::setRegister( pParentFuncTuple, value ))
    {
        return accessFuncTuple<index-1, moreValues...>::setRegister( pParentFuncTuple, value );
    }
    /*static auto runRegister( funcTuple<func, moreValues...> * pParentFuncTuple ) -> decltype( accessFuncTuple<index-1, moreValues...>::runRegister( pParentFuncTuple ))
    {
        return accessFuncTuple<index-1, moreValues...>::runRegister(pParentFuncTuple);
    }*/

};

template<fptr func, fptr ...moreValues> class accessFuncTuple<0, func, moreValues...>
{
public:
    static auto getRegister( funcTuple<func, moreValues...> * pParentIntTuple )
    {
        (void)pParentIntTuple;
        return funcTuple<func, moreValues...>::val;
    }
    static auto setRegister( funcTuple< func, moreValues...> * pParentIntTuple, fptr value )
    {
        (void)pParentIntTuple;
        funcTuple<func, moreValues...>::val = value;
    }
    /*static auto runRegister( funcTuple<func, moreValues...> * pParentIntTuple )
    {
        (void)pParentIntTuple;
        if( funcTuple<func, moreValues...>::val != NULL_FUNCTION_PTR )
        {
            funcTuple<func, moreValues...>::val();
        }
    }*/
};

namespace interruptContainer
{
    /**********************************************************************************************************************
    * set function
    **********************************************************************************************************************/

    template <unsigned int index, fptr func, fptr ...moreValues> void set( funcTuple<func, moreValues...> * pTuple, fptr value)
    {
        accessFuncTuple<index, func, moreValues...>::setRegister( pTuple, value );
        //(void)(aT.setRegister( pTuple, value ));
    }

    /**********************************************************************************************************************
    * get function
    **********************************************************************************************************************/

    template <unsigned int index, fptr func, fptr ...moreValues> auto get( funcTuple<func, moreValues...> * pTuple )
    {
        return accessFuncTuple<index, func, moreValues...>::getRegister( pTuple );
    }
    /**********************************************************************************************************************
    * run function
    **********************************************************************************************************************/

    /*template <unsigned int index, fptr func, fptr ...moreValues> auto run( funcTuple<func, moreValues...> * pTuple )
    {
        return accessFuncTuple<index, func, moreValues...>::runRegister( pTuple );
    }*/
}


template <unsigned int index> class iEnum
{
public:
    enum val:unsigned int
    {
        VAL0,
        VAL1
    };
};

extern void startupCall(void);
template <unsigned int index, fptr func, fptr ...moreValues  > class mcuIntModel:public iEnum<index>
{
public:
    static funcTuple<func, moreValues...> reg;

    template < typename iEnum<index>::val i > static  void set( fptr value )
    {
        interruptContainer::set<i>( &reg, value );
    }

    template < typename iEnum<index>::val i > static  void clr()
    {
        interruptContainer::set<i>( &reg, NULL_FUNCTION_PTR );
    }

    template < typename iEnum<index>::val i > static  fptr get( void )
    {
        return interruptContainer::get<i>( &reg );
    }

    template < typename iEnum<index>::val i > static  void interruptVector( void )
    {
        //volatile unsigned int index1;
        fptr call;
        call = get<i>();
        //index1 = i;
        if( call != NULL_FUNCTION_PTR )
        {
            call();
        }
        //interruptContainer::run<i>( &reg );
    }
};

template <unsigned int x> class moduleIntCtrl;

#endif
