#ifndef __H_DMA_DRIVER_H__
#define __H_DMA_DRIVER_H__
template <> class dma_driver;
template <> class dma_driver<UART_TX>
{
private:

public:
    void open()
    {
        stm32f103rb::dma1::isr   ::clr<stm32f103rb::dma1::isr   ::TEIF5>();
        stm32f103rb::dma1::isr   ::clr<stm32f103rb::dma1::isr   ::HTIF5>();
        stm32f103rb::dma1::isr   ::clr<stm32f103rb::dma1::isr   ::TCIF5>();
        stm32f103rb::dma1::isr   ::clr<stm32f103rb::dma1::isr   ::GIF5 >();

        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::MEM2MEM>();
        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::PL>();
        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::MSIZE>();
        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::PSIZE>();
        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::MINC>();
        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::PINC>();
        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::CIRC>();
        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::DIR>();
        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::TEIE>();
        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::HTIE>();
        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::TCIE>();

        stm32f103rb::dma1::cndtr5::set<stm32f103rb::dma1::cndtr5::NDT>();
        stm32f103rb::dma1::cpar5 ::set<stm32f103rb::dma1::cpar5 ::PA >();
        stm32f103rb::dma1::cmar5 ::set<stm32f103rb::dma1::cmar5 ::MA >();
        stm32f103rb::dma1::ccr5  ::set<stm32f103rb::dma1::ccr5  ::EN >();

    }
    void write()
    {
        
    }
    void read()
    {
        
    }
    void close()
    {
        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::EN   >();
        stm32f103rb::dma1::isr   ::clr<stm32f103rb::dma1::isr   ::TEIF5>();
        stm32f103rb::dma1::isr   ::clr<stm32f103rb::dma1::isr   ::HTIF5>();
        stm32f103rb::dma1::isr   ::clr<stm32f103rb::dma1::isr   ::TCIF5>();
        stm32f103rb::dma1::isr   ::clr<stm32f103rb::dma1::isr   ::GIF5 >();

        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::MEM2MEM>();
        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::PL     >();
        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::MSIZE  >();
        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::PSIZE  >();
        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::MINC   >();
        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::PINC   >();
        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::CIRC   >();
        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::DIR    >();
        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::TEIE   >();
        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::HTIE   >();
        stm32f103rb::dma1::ccr5  ::clr<stm32f103rb::dma1::ccr5  ::TCIE   >();
    
        stm32f103rb::dma1::cndtr5::clr<stm32f103rb::dma1::cndtr5::NDT>();
        stm32f103rb::dma1::cpar5 ::clr<stm32f103rb::dma1::cpar5 ::PA >();
        stm32f103rb::dma1::cmar5 ::clr<stm32f103rb::dma1::cmar5 ::MA >();
    }
};

#endif
