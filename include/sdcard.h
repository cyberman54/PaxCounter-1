#ifndef _SDCARD_H
#define _SDCARD_H

#include <globals.h>
#include <stdio.h>

#include <SPI.h>
#include <mySD.h>

#define SDCARD_FILE_NAME       "paxcount.%02d"
#define SDCARD_FILE_HEADER     "date, time, wifi, bluet"

bool sdcardInit( void );
void sdcardWriteData( uint16_t, uint16_t);

//// pin definitions for SPI slave interface
//#define SPI_MOSI SDCARD_MOSI   // = 15
//#define SPI_MISO SDCARD_MISO   // = 2
//#define SPI_SCLK SDCARD_SCLK   // = 14
//#define SPI_CS   SDCARD_CS     // = 13

#endif
