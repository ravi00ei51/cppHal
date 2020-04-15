#include "uart_comms.h"

circularBuffer    uart_comms<INTERRUPT>::rxBuffer;
circularBuffer    uart_comms<INTERRUPT>::txBuffer;
unsigned char     uart_comms<INTERRUPT>::rx_buffer[255u];
unsigned char     uart_comms<INTERRUPT>::tx_buffer[255u];
fptr              uart_comms<INTERRUPT>::events[UART_EVENT_MAX];
