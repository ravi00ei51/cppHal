#include "spi_comms.h"
template  circularBuffer spi_comms<SPI1, SPI_MASTER, INTERRUPT>::rxBuffer;
template  circularBuffer spi_comms<SPI1, SPI_MASTER, INTERRUPT>::txBuffer;
template  unsigned char  spi_comms<SPI1, SPI_MASTER, INTERRUPT>::rx_buffer[0xFFu];
template  unsigned char  spi_comms<SPI1, SPI_MASTER, INTERRUPT>::tx_buffer[0xFFu];
template  fptr spi_comms<SPI1, SPI_MASTER, INTERRUPT>::events[SPI_EVENT_MAX];

template <> circularBuffer spi_comms<SPI1, SPI_MASTER, INTERRUPT>::rxBuffer;
template <> circularBuffer spi_comms<SPI1, SPI_MASTER, INTERRUPT>::txBuffer;
template <> unsigned char  spi_comms<SPI1, SPI_MASTER, INTERRUPT>::rx_buffer[0xFFu];
template <> unsigned char  spi_comms<SPI1, SPI_MASTER, INTERRUPT>::tx_buffer[0xFFu];
template <> fptr spi_comms<SPI1, SPI_MASTER, INTERRUPT>::events[SPI_EVENT_MAX];

template  circularBuffer spi_comms<SPI1, SPI_SLAVE, INTERRUPT>::rxBuffer;
template  circularBuffer spi_comms<SPI1, SPI_SLAVE, INTERRUPT>::txBuffer;
template  unsigned char  spi_comms<SPI1, SPI_SLAVE, INTERRUPT>::rx_buffer[0xFFu];
template  unsigned char  spi_comms<SPI1, SPI_SLAVE, INTERRUPT>::tx_buffer[0xFFu];
template  fptr spi_comms<SPI1, SPI_SLAVE, INTERRUPT>::events[SPI_EVENT_MAX];

template <> circularBuffer spi_comms<SPI1, SPI_SLAVE, INTERRUPT>::rxBuffer;
template <> circularBuffer spi_comms<SPI1, SPI_SLAVE, INTERRUPT>::txBuffer;
template <> unsigned char  spi_comms<SPI1, SPI_SLAVE, INTERRUPT>::rx_buffer[0xFFu];
template <> unsigned char  spi_comms<SPI1, SPI_SLAVE, INTERRUPT>::tx_buffer[0xFFu];
template <> fptr spi_comms<SPI1, SPI_SLAVE, INTERRUPT>::events[SPI_EVENT_MAX];
