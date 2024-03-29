#ifndef FreeSansOblique16pt7b_H
#define FreeSansOblique16pt7b_H

#ifdef __AVR__
#include <avr/io.h>
#include <avr/pgmspace.h>
#elif defined(ESP8266)
#include <pgmspace.h>
#undef PROGMEM
#define PROGMEM STORE_ATTR
#elif defined(__IMXRT1052__) || defined(__IMXRT1062__)
// PROGMEM is defefind for T4 to place data in specific memory section
#undef PROGMEM
#define PROGMEM
#else
#define PROGMEM
#endif

const uint8_t FreeSansOblique16pt7bBitmaps[] PROGMEM = {
  0x00, 0x0E, 0x1C, 0x38, 0x71, 0xC3, 0x87, 0x0E, 0x1C, 0x70, 0xE1, 0xC3,
  0x86, 0x0C, 0x18, 0x20, 0x40, 0x00, 0x0E, 0x1C, 0x38, 0x00, 0x63, 0xE7,
  0xE7, 0xC6, 0xC6, 0xC6, 0x84, 0x84, 0x00, 0x61, 0x80, 0x38, 0x60, 0x0C,
  0x38, 0x03, 0x0C, 0x01, 0xC7, 0x00, 0x61, 0x81, 0xFF, 0xFC, 0x7F, 0xFF,
  0x1F, 0xFF, 0xC0, 0xC3, 0x00, 0x71, 0xC0, 0x18, 0x60, 0x0E, 0x38, 0x03,
  0x0C, 0x0F, 0xFF, 0xE3, 0xFF, 0xF8, 0xFF, 0xFE, 0x06, 0x18, 0x03, 0x8E,
  0x00, 0xC3, 0x00, 0x70, 0xC0, 0x18, 0x60, 0x0E, 0x18, 0x00, 0x00, 0x10,
  0x00, 0x7E, 0x00, 0xFF, 0xC0, 0xFF, 0xE0, 0xF2, 0x78, 0x73, 0x1C, 0x71,
  0x8E, 0x38, 0xC7, 0x1C, 0x60, 0x0E, 0x20, 0x07, 0xB0, 0x01, 0xF8, 0x00,
  0xFF, 0x80, 0x1F, 0xE0, 0x02, 0xF8, 0x03, 0x3C, 0xE1, 0x8E, 0x70, 0xC7,
  0x38, 0x63, 0x9C, 0x63, 0x8F, 0xB3, 0xC3, 0xFF, 0xC0, 0xFF, 0xC0, 0x1F,
  0x80, 0x06, 0x00, 0x03, 0x00, 0x01, 0x80, 0x00, 0xC0, 0x00, 0x00, 0x00,
  0x1C, 0x0F, 0x80, 0x18, 0x3F, 0xC0, 0x30, 0x7F, 0xE0, 0x60, 0x70, 0xE0,
  0xC0, 0xC0, 0x61, 0xC0, 0xC0, 0x61, 0x80, 0xE1, 0xC3, 0x00, 0xFF, 0xC6,
  0x00, 0x7F, 0x8C, 0x00, 0x3E, 0x1C, 0x00, 0x00, 0x18, 0x00, 0x00, 0x30,
  0x7C, 0x00, 0x61, 0xFE, 0x00, 0xC3, 0xFF, 0x01, 0xC3, 0x87, 0x01, 0x86,
  0x03, 0x03, 0x06, 0x03, 0x06, 0x07, 0x0E, 0x0C, 0x07, 0xFE, 0x1C, 0x03,
  0xFC, 0x18, 0x01, 0xF0, 0x00, 0x7C, 0x00, 0x7F, 0x80, 0x3F, 0xF0, 0x0E,
  0x3C, 0x07, 0x07, 0x01, 0xC1, 0xC0, 0x70, 0xE0, 0x1E, 0x78, 0x03, 0xB8,
  0x00, 0xFC, 0x00, 0x7C, 0x00, 0x7F, 0x87, 0x3C, 0x71, 0xDC, 0x1C, 0xE6,
  0x03, 0xF3, 0x80, 0x78, 0xE0, 0x1C, 0x38, 0x0F, 0x8F, 0x0F, 0xF1, 0xFF,
  0x9C, 0x7F, 0xC7, 0x87, 0xC0, 0xE0, 0x7F, 0xED, 0xA4, 0x00, 0x60, 0x18,
  0x06, 0x01, 0x80, 0x70, 0x0C, 0x03, 0x80, 0x60, 0x1C, 0x07, 0x00, 0xE0,
  0x18, 0x07, 0x00, 0xE0, 0x1C, 0x07, 0x00, 0xE0, 0x1C, 0x03, 0x80, 0x70,
  0x0E, 0x01, 0xC0, 0x38, 0x07, 0x00, 0x60, 0x0E, 0x01, 0xC0, 0x18, 0x01,
  0x00, 0x01, 0x00, 0x30, 0x07, 0x00, 0xE0, 0x0C, 0x01, 0xC0, 0x38, 0x07,
  0x00, 0xE0, 0x1C, 0x03, 0x80, 0x70, 0x0E, 0x01, 0xC0, 0x70, 0x0E, 0x01,
  0xC0, 0x30, 0x0E, 0x01, 0xC0, 0x70, 0x0C, 0x03, 0x80, 0x60, 0x1C, 0x03,
  0x00, 0xC0, 0x30, 0x0C, 0x00, 0x06, 0x01, 0x84, 0x45, 0xF7, 0xFF, 0xC7,
  0xC1, 0xE0, 0xD8, 0x67, 0x00, 0x80, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x38,
  0x00, 0x1C, 0x00, 0x1E, 0x03, 0xFF, 0xFD, 0xFF, 0xFE, 0xFF, 0xFE, 0x01,
  0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1C, 0x00,
  0x3B, 0xDE, 0xE1, 0x18, 0x98, 0xFF, 0xFF, 0xFF, 0x7F, 0xE0, 0x00, 0x18,
  0x00, 0xC0, 0x0C, 0x00, 0x60, 0x06, 0x00, 0x30, 0x03, 0x00, 0x18, 0x01,
  0x80, 0x08, 0x00, 0xC0, 0x04, 0x00, 0x60, 0x02, 0x00, 0x30, 0x01, 0x00,
  0x18, 0x00, 0x80, 0x0C, 0x00, 0xC0, 0x06, 0x00, 0x60, 0x03, 0x00, 0x00,
  0x01, 0xF8, 0x03, 0xFC, 0x0F, 0xFE, 0x0F, 0x0F, 0x1E, 0x07, 0x3C, 0x07,
  0x38, 0x07, 0x78, 0x07, 0x70, 0x07, 0x70, 0x07, 0x70, 0x0E, 0xE0, 0x0E,
  0xE0, 0x0E, 0xE0, 0x0E, 0xE0, 0x0C, 0xE0, 0x1C, 0xE0, 0x1C, 0xE0, 0x38,
  0xF0, 0xF0, 0x7F, 0xF0, 0x3F, 0xC0, 0x1F, 0x80, 0x01, 0x81, 0xC3, 0xDF,
  0xEF, 0xF7, 0xF8, 0x18, 0x0C, 0x0E, 0x07, 0x03, 0x01, 0x81, 0xC0, 0xE0,
  0x70, 0x30, 0x38, 0x1C, 0x0E, 0x06, 0x07, 0x03, 0x80, 0x00, 0xFE, 0x00,
  0xFF, 0xC0, 0x7F, 0xF8, 0x3E, 0x1F, 0x0E, 0x01, 0xC3, 0x00, 0x71, 0xC0,
  0x1C, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xE0, 0x00, 0xF0, 0x00, 0xF0,
  0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x78, 0x00, 0x38, 0x00, 0x1C,
  0x00, 0x06, 0x00, 0x03, 0xFF, 0xF8, 0xFF, 0xFC, 0x3F, 0xFF, 0x00, 0x00,
  0xF8, 0x03, 0xFE, 0x07, 0xFF, 0x0F, 0x0F, 0x1C, 0x07, 0x1C, 0x07, 0x18,
  0x0F, 0x00, 0x1E, 0x01, 0xFC, 0x01, 0xF8, 0x01, 0xFC, 0x00, 0x1E, 0x00,
  0x0E, 0x00, 0x0E, 0x00, 0x0E, 0xE0, 0x0E, 0xE0, 0x1C, 0xE0, 0x3C, 0xF0,
  0x78, 0x7F, 0xF8, 0x7F, 0xE0, 0x1F, 0x80, 0x00, 0x06, 0x00, 0x0E, 0x00,
  0x1E, 0x00, 0x3E, 0x00, 0x7E, 0x00, 0xEC, 0x01, 0xDC, 0x03, 0x9C, 0x07,
  0x1C, 0x0E, 0x18, 0x1C, 0x18, 0x18, 0x38, 0x30, 0x38, 0x60, 0x38, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x70, 0x00, 0x70, 0x00, 0x60, 0x00,
  0xE0, 0x00, 0xE0, 0x03, 0xFF, 0xC0, 0xFF, 0xE0, 0x7F, 0xF8, 0x1C, 0x00,
  0x0E, 0x00, 0x03, 0x80, 0x00, 0xC0, 0x00, 0x73, 0xE0, 0x1F, 0xFC, 0x07,
  0xFF, 0x83, 0xC1, 0xF0, 0xE0, 0x1C, 0x00, 0x07, 0x00, 0x01, 0xC0, 0x00,
  0x70, 0x00, 0x18, 0xE0, 0x0E, 0x38, 0x07, 0x8F, 0x03, 0xC1, 0xFF, 0xE0,
  0x3F, 0xF0, 0x07, 0xF0, 0x00, 0x00, 0xFC, 0x01, 0xFF, 0x01, 0xFF, 0xC1,
  0xE0, 0xF1, 0xE0, 0x38, 0xE0, 0x1C, 0xE0, 0x00, 0x73, 0xE0, 0x77, 0xF8,
  0x3F, 0xFE, 0x1F, 0x07, 0x9F, 0x01, 0xCF, 0x00, 0xE7, 0x00, 0x73, 0x80,
  0x39, 0xC0, 0x18, 0xE0, 0x1C, 0x78, 0x1E, 0x3E, 0x1E, 0x0F, 0xFE, 0x03,
  0xFE, 0x00, 0xFC, 0x00, 0x3F, 0xFF, 0x9F, 0xFF, 0xCF, 0xFF, 0xC0, 0x00,
  0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0x60, 0x00,
  0x60, 0x00, 0x70, 0x00, 0x70, 0x00, 0x30, 0x00, 0x38, 0x00, 0x38, 0x00,
  0x18, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x07, 0x00,
  0x07, 0x00, 0x00, 0x00, 0xFC, 0x01, 0xFF, 0x81, 0xFF, 0xC1, 0xE0, 0xF1,
  0xE0, 0x38, 0xE0, 0x1C, 0x70, 0x1C, 0x3C, 0x1E, 0x0F, 0xFC, 0x03, 0xFC,
  0x07, 0xFF, 0x87, 0x83, 0xC7, 0x80, 0xF3, 0x80, 0x3B, 0x80, 0x1D, 0xC0,
  0x0E, 0xE0, 0x0E, 0x70, 0x0F, 0x3E, 0x0F, 0x0F, 0xFF, 0x03, 0xFF, 0x00,
  0x7E, 0x00, 0x01, 0xF0, 0x07, 0xFC, 0x0F, 0xFE, 0x1E, 0x1E, 0x3C, 0x0F,
  0x38, 0x07, 0x70, 0x07, 0x70, 0x07, 0x70, 0x07, 0x70, 0x0F, 0x70, 0x1F,
  0x78, 0x3E, 0x3F, 0xFE, 0x1F, 0xCE, 0x0F, 0x9C, 0x00, 0x1C, 0x00, 0x3C,
  0xE0, 0x78, 0xF0, 0xF0, 0xFF, 0xE0, 0x7F, 0xC0, 0x1F, 0x00, 0x0E, 0x3C,
  0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x3C, 0x70,
  0x0E, 0x3C, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  0x1E, 0x3C, 0x70, 0x20, 0xC1, 0x0C, 0x00, 0x00, 0x01, 0x80, 0x03, 0x80,
  0x0F, 0xC0, 0x1F, 0x80, 0x7E, 0x00, 0xF8, 0x03, 0xF0, 0x01, 0xC0, 0x00,
  0xF8, 0x00, 0x1F, 0x00, 0x03, 0xE0, 0x00, 0x7E, 0x00, 0x0F, 0xC0, 0x01,
  0xE0, 0x00, 0x30, 0x3F, 0xFF, 0x9F, 0xFF, 0xCF, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xFC, 0xFF, 0xFE, 0xFF, 0xFE, 0x00, 0x18,
  0x00, 0x0F, 0x00, 0x07, 0xE0, 0x00, 0xFC, 0x00, 0x0F, 0x80, 0x01, 0xF0,
  0x00, 0x3E, 0x00, 0x07, 0x00, 0x1F, 0x80, 0x3E, 0x00, 0xFC, 0x03, 0xF0,
  0x07, 0xE0, 0x03, 0x80, 0x03, 0x00, 0x00, 0x07, 0xE0, 0x7F, 0xE3, 0xFF,
  0x9E, 0x0F, 0x70, 0x1F, 0xC0, 0x7E, 0x01, 0xC0, 0x0F, 0x00, 0x38, 0x01,
  0xC0, 0x1E, 0x00, 0xF0, 0x07, 0x00, 0x38, 0x01, 0xC0, 0x07, 0x00, 0x1C,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0xE0, 0x03, 0x00, 0x00,
  0x00, 0x01, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0xFF, 0xFF, 0x80,
  0x07, 0xF0, 0x1F, 0x80, 0x1F, 0x00, 0x0F, 0x80, 0xF8, 0x00, 0x07, 0x83,
  0xE0, 0x00, 0x07, 0x07, 0x80, 0xF8, 0x0F, 0x1E, 0x07, 0xFB, 0x8E, 0x78,
  0x1F, 0xF6, 0x1C, 0xE0, 0x78, 0x78, 0x3B, 0x81, 0xE0, 0x70, 0x77, 0x07,
  0x81, 0xC0, 0xFC, 0x0E, 0x03, 0x83, 0xF8, 0x38, 0x0E, 0x07, 0x70, 0x70,
  0x18, 0x1E, 0xE0, 0xE0, 0x70, 0x79, 0xC1, 0xE3, 0xE3, 0xE3, 0x83, 0xFD,
  0xFF, 0x87, 0x83, 0xF3, 0xFE, 0x07, 0x03, 0xC3, 0xF0, 0x0F, 0x00, 0x00,
  0x00, 0x0F, 0x80, 0x00, 0x00, 0x0F, 0xC0, 0x18, 0x00, 0x0F, 0xFF, 0xF0,
  0x00, 0x07, 0xFF, 0xE0, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x07, 0x80,
  0x00, 0x78, 0x00, 0x0F, 0x80, 0x01, 0xFC, 0x00, 0x1D, 0xC0, 0x03, 0x9C,
  0x00, 0x39, 0xC0, 0x07, 0x1C, 0x00, 0x71, 0xC0, 0x0E, 0x1C, 0x01, 0xC1,
  0xC0, 0x1C, 0x1E, 0x03, 0x80, 0xE0, 0x38, 0x0E, 0x07, 0xFF, 0xE0, 0x7F,
  0xFE, 0x0F, 0xFF, 0xE0, 0xE0, 0x0E, 0x1C, 0x00, 0xF3, 0xC0, 0x07, 0x38,
  0x00, 0x77, 0x80, 0x07, 0x70, 0x00, 0x70, 0x07, 0xFF, 0x80, 0x7F, 0xFE,
  0x07, 0xFF, 0xE0, 0x70, 0x0F, 0x0E, 0x00, 0x70, 0xE0, 0x07, 0x0E, 0x00,
  0x70, 0xE0, 0x0E, 0x1E, 0x01, 0xE1, 0xFF, 0xF8, 0x1F, 0xFF, 0x81, 0xFF,
  0xFC, 0x1C, 0x01, 0xE3, 0xC0, 0x0E, 0x38, 0x00, 0xE3, 0x80, 0x0E, 0x38,
  0x00, 0xE3, 0x80, 0x1C, 0x78, 0x01, 0xC7, 0x00, 0x78, 0x7F, 0xFF, 0x87,
  0xFF, 0xF0, 0x7F, 0xFC, 0x00, 0x00, 0x3F, 0x80, 0x0F, 0xFF, 0x00, 0xFF,
  0xFC, 0x0F, 0x81, 0xE0, 0xF0, 0x07, 0x8F, 0x00, 0x1C, 0xF0, 0x00, 0xE7,
  0x00, 0x00, 0x78, 0x00, 0x03, 0x80, 0x00, 0x1C, 0x00, 0x01, 0xC0, 0x00,
  0x0E, 0x00, 0x00, 0x70, 0x00, 0x03, 0x80, 0x00, 0x1C, 0x00, 0x1E, 0xE0,
  0x00, 0xE7, 0x80, 0x0E, 0x1E, 0x00, 0xF0, 0xF8, 0x1F, 0x03, 0xFF, 0xF0,
  0x0F, 0xFE, 0x00, 0x1F, 0xC0, 0x00, 0x07, 0xFF, 0x80, 0x3F, 0xFE, 0x01,
  0xFF, 0xF8, 0x0E, 0x03, 0xE0, 0xE0, 0x07, 0x07, 0x00, 0x3C, 0x38, 0x00,
  0xE1, 0xC0, 0x07, 0x0C, 0x00, 0x38, 0xE0, 0x01, 0xC7, 0x00, 0x0E, 0x38,
  0x00, 0x71, 0xC0, 0x07, 0x0C, 0x00, 0x38, 0xE0, 0x01, 0xC7, 0x00, 0x1C,
  0x38, 0x00, 0xE1, 0xC0, 0x0E, 0x1C, 0x00, 0xF0, 0xE0, 0x1F, 0x07, 0xFF,
  0xF0, 0x3F, 0xFE, 0x01, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xF8, 0x3F, 0xFF,
  0xC1, 0xFF, 0xFE, 0x0E, 0x00, 0x00, 0xE0, 0x00, 0x07, 0x00, 0x00, 0x38,
  0x00, 0x01, 0xC0, 0x00, 0x0C, 0x00, 0x00, 0xE0, 0x00, 0x07, 0xFF, 0xF0,
  0x3F, 0xFF, 0x81, 0xFF, 0xFC, 0x0C, 0x00, 0x00, 0xE0, 0x00, 0x07, 0x00,
  0x00, 0x38, 0x00, 0x01, 0xC0, 0x00, 0x1C, 0x00, 0x00, 0xE0, 0x00, 0x07,
  0xFF, 0xF8, 0x3F, 0xFF, 0xC1, 0xFF, 0xFE, 0x00, 0x07, 0xFF, 0xF0, 0x7F,
  0xFF, 0x07, 0xFF, 0xF0, 0x70, 0x00, 0x0E, 0x00, 0x00, 0xE0, 0x00, 0x0E,
  0x00, 0x00, 0xE0, 0x00, 0x0C, 0x00, 0x01, 0xC0, 0x00, 0x1F, 0xFF, 0x81,
  0xFF, 0xF8, 0x1F, 0xFF, 0x01, 0x80, 0x00, 0x38, 0x00, 0x03, 0x80, 0x00,
  0x38, 0x00, 0x03, 0x80, 0x00, 0x70, 0x00, 0x07, 0x00, 0x00, 0x70, 0x00,
  0x07, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x03, 0xFF, 0xC0,
  0x3F, 0xFF, 0x81, 0xF0, 0x3E, 0x0F, 0x00, 0x3C, 0x78, 0x00, 0x71, 0xC0,
  0x01, 0xCE, 0x00, 0x00, 0x78, 0x00, 0x01, 0xC0, 0x00, 0x07, 0x00, 0x00,
  0x38, 0x03, 0xFE, 0xE0, 0x0F, 0xFB, 0x80, 0x7F, 0xEE, 0x00, 0x03, 0xB8,
  0x00, 0x0E, 0xE0, 0x00, 0x73, 0xC0, 0x03, 0xC7, 0x80, 0x1F, 0x1F, 0x01,
  0xFC, 0x3F, 0xFE, 0x70, 0x7F, 0xF1, 0x80, 0x7F, 0x06, 0x00, 0x07, 0x00,
  0x0E, 0x0E, 0x00, 0x38, 0x1C, 0x00, 0x70, 0x30, 0x00, 0xE0, 0xE0, 0x01,
  0xC1, 0xC0, 0x03, 0x83, 0x80, 0x0E, 0x07, 0x00, 0x1C, 0x0C, 0x00, 0x38,
  0x38, 0x00, 0x70, 0x7F, 0xFF, 0xC0, 0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0x07,
  0x00, 0x0E, 0x0E, 0x00, 0x1C, 0x1C, 0x00, 0x30, 0x38, 0x00, 0xE0, 0x70,
  0x01, 0xC1, 0xC0, 0x03, 0x83, 0x80, 0x07, 0x07, 0x00, 0x1C, 0x0E, 0x00,
  0x38, 0x18, 0x00, 0x70, 0x00, 0x0E, 0x1C, 0x38, 0xE1, 0xC3, 0x87, 0x0E,
  0x18, 0x70, 0xE1, 0xC3, 0x87, 0x0C, 0x38, 0x70, 0xE1, 0xC3, 0x8E, 0x1C,
  0x38, 0x00, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0xE0, 0x00,
  0x70, 0x00, 0x38, 0x00, 0x1C, 0x00, 0x1E, 0x00, 0x0E, 0x00, 0x07, 0x00,
  0x03, 0x80, 0x01, 0xC0, 0x01, 0xE0, 0x00, 0xE0, 0x00, 0x71, 0xC0, 0x38,
  0xE0, 0x1C, 0x70, 0x1C, 0x38, 0x0E, 0x1E, 0x1F, 0x07, 0xFF, 0x03, 0xFF,
  0x00, 0x7E, 0x00, 0x07, 0x00, 0x1E, 0x0E, 0x00, 0x70, 0x1C, 0x01, 0xC0,
  0x30, 0x0F, 0x00, 0xE0, 0x3C, 0x01, 0xC0, 0xF0, 0x03, 0x83, 0x80, 0x07,
  0x0E, 0x00, 0x0C, 0x38, 0x00, 0x39, 0xE0, 0x00, 0x77, 0xE0, 0x00, 0xFD,
  0xC0, 0x01, 0xF3, 0x80, 0x07, 0xC3, 0x80, 0x0F, 0x07, 0x00, 0x1C, 0x07,
  0x00, 0x38, 0x0E, 0x00, 0x70, 0x0E, 0x01, 0xC0, 0x1C, 0x03, 0x80, 0x3C,
  0x07, 0x00, 0x38, 0x0E, 0x00, 0x78, 0x18, 0x00, 0x70, 0x00, 0x07, 0x00,
  0x0E, 0x00, 0x1C, 0x00, 0x30, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x07,
  0x00, 0x0C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x07, 0x00,
  0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x01, 0xC0, 0x03, 0x80, 0x07,
  0xFF, 0xEF, 0xFF, 0xDF, 0xFF, 0x80, 0x07, 0xC0, 0x03, 0xC0, 0xF8, 0x00,
  0x78, 0x1F, 0x00, 0x1F, 0x03, 0xE0, 0x03, 0xE0, 0xFC, 0x00, 0xFC, 0x1F,
  0x80, 0x1B, 0x03, 0xB8, 0x07, 0xE0, 0x77, 0x00, 0xDC, 0x0C, 0xE0, 0x3B,
  0x83, 0x9C, 0x06, 0x70, 0x73, 0x81, 0x8C, 0x0E, 0x70, 0x33, 0x81, 0xCE,
  0x0C, 0x70, 0x71, 0xC1, 0x8E, 0x0E, 0x1C, 0x61, 0xC1, 0xC3, 0x9C, 0x30,
  0x38, 0x73, 0x0E, 0x06, 0x0E, 0xE1, 0xC1, 0xC1, 0xD8, 0x38, 0x38, 0x3F,
  0x06, 0x07, 0x07, 0xC1, 0xC0, 0xE0, 0xF0, 0x38, 0x18, 0x0E, 0x07, 0x00,
  0x07, 0x80, 0x0E, 0x0F, 0x00, 0x1C, 0x1F, 0x00, 0x30, 0x3E, 0x00, 0xE0,
  0xFC, 0x01, 0xC1, 0xFC, 0x03, 0x83, 0xB8, 0x07, 0x07, 0x78, 0x0C, 0x0C,
  0x70, 0x38, 0x38, 0xE0, 0x70, 0x70, 0xE0, 0xE0, 0xE1, 0xC1, 0xC1, 0x83,
  0xC3, 0x07, 0x03, 0x8E, 0x0E, 0x07, 0x1C, 0x1C, 0x07, 0x38, 0x38, 0x0E,
  0x70, 0x60, 0x0E, 0xC1, 0xC0, 0x1F, 0x83, 0x80, 0x3F, 0x07, 0x00, 0x3E,
  0x0E, 0x00, 0x78, 0x18, 0x00, 0x70, 0x00, 0x00, 0x3F, 0x80, 0x01, 0xFF,
  0xE0, 0x0F, 0xFF, 0xE0, 0x3E, 0x07, 0xE0, 0xF0, 0x03, 0xC3, 0xC0, 0x03,
  0xCF, 0x00, 0x03, 0x9C, 0x00, 0x07, 0x70, 0x00, 0x0E, 0xE0, 0x00, 0x1F,
  0xC0, 0x00, 0x3F, 0x00, 0x00, 0x7E, 0x00, 0x01, 0xFC, 0x00, 0x03, 0xB8,
  0x00, 0x07, 0x70, 0x00, 0x1E, 0xE0, 0x00, 0x39, 0xE0, 0x00, 0xE1, 0xE0,
  0x07, 0xC3, 0xF0, 0x3F, 0x03, 0xFF, 0xFC, 0x03, 0xFF, 0xE0, 0x00, 0xFE,
  0x00, 0x00, 0x07, 0xFF, 0x80, 0x7F, 0xFE, 0x07, 0xFF, 0xE0, 0x70, 0x0F,
  0x0E, 0x00, 0x70, 0xE0, 0x07, 0x0E, 0x00, 0x70, 0xE0, 0x07, 0x0E, 0x00,
  0xF1, 0xC0, 0x0E, 0x1C, 0x03, 0xE1, 0xFF, 0xFC, 0x1F, 0xFF, 0x81, 0xFF,
  0xE0, 0x38, 0x00, 0x03, 0x80, 0x00, 0x38, 0x00, 0x03, 0x80, 0x00, 0x70,
  0x00, 0x07, 0x00, 0x00, 0x70, 0x00, 0x07, 0x00, 0x00, 0x60, 0x00, 0x00,
  0x00, 0x3F, 0x80, 0x01, 0xFF, 0xC0, 0x0F, 0xFF, 0xE0, 0x3E, 0x07, 0xE0,
  0xF0, 0x03, 0xC3, 0xC0, 0x03, 0xCF, 0x00, 0x03, 0x9C, 0x00, 0x07, 0x70,
  0x00, 0x0E, 0xE0, 0x00, 0x1F, 0xC0, 0x00, 0x3F, 0x00, 0x00, 0x7E, 0x00,
  0x01, 0xDC, 0x00, 0x03, 0xB8, 0x00, 0x07, 0x70, 0x00, 0x1C, 0xE0, 0x04,
  0x71, 0xE0, 0x1D, 0xE1, 0xE0, 0x1F, 0x83, 0xF0, 0x3E, 0x03, 0xFF, 0xFC,
  0x03, 0xFF, 0xDC, 0x00, 0xFE, 0x3C, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xE0, 0x1F, 0xFF, 0xE0, 0x7F, 0xFF, 0xC1, 0xC0, 0x0F, 0x0E,
  0x00, 0x1C, 0x38, 0x00, 0x70, 0xE0, 0x01, 0xC3, 0x80, 0x0E, 0x0C, 0x00,
  0x38, 0x70, 0x03, 0xC1, 0xFF, 0xFE, 0x07, 0xFF, 0xE0, 0x1F, 0xFF, 0xC0,
  0x60, 0x07, 0x83, 0x80, 0x0E, 0x0E, 0x00, 0x38, 0x38, 0x00, 0xE0, 0xE0,
  0x03, 0x87, 0x00, 0x1C, 0x1C, 0x00, 0x70, 0x70, 0x01, 0xC1, 0xC0, 0x07,
  0x06, 0x00, 0x1E, 0x00, 0x00, 0x7E, 0x00, 0x3F, 0xF0, 0x1F, 0xFF, 0x07,
  0xC1, 0xF0, 0xE0, 0x0E, 0x38, 0x01, 0xC7, 0x00, 0x38, 0xE0, 0x00, 0x1C,
  0x00, 0x03, 0xE0, 0x00, 0x3F, 0x80, 0x03, 0xFF, 0x00, 0x0F, 0xF8, 0x00,
  0x3F, 0x80, 0x00, 0xF7, 0x00, 0x0E, 0xE0, 0x01, 0xDC, 0x00, 0x33, 0xC0,
  0x0E, 0x3C, 0x07, 0x87, 0xFF, 0xE0, 0x7F, 0xF8, 0x03, 0xF8, 0x00, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x07, 0x00, 0x01, 0xC0, 0x00, 0x70,
  0x00, 0x1C, 0x00, 0x0E, 0x00, 0x03, 0x80, 0x00, 0xE0, 0x00, 0x38, 0x00,
  0x0C, 0x00, 0x07, 0x00, 0x01, 0xC0, 0x00, 0x70, 0x00, 0x1C, 0x00, 0x0E,
  0x00, 0x03, 0x80, 0x00, 0xE0, 0x00, 0x38, 0x00, 0x0E, 0x00, 0x07, 0x00,
  0x01, 0xC0, 0x00, 0x1C, 0x00, 0x38, 0xE0, 0x03, 0x87, 0x00, 0x1C, 0x30,
  0x00, 0xE3, 0x80, 0x07, 0x1C, 0x00, 0x30, 0xE0, 0x03, 0x87, 0x00, 0x1C,
  0x70, 0x00, 0xE3, 0x80, 0x07, 0x1C, 0x00, 0x30, 0xE0, 0x03, 0x87, 0x00,
  0x1C, 0x70, 0x00, 0xE3, 0x80, 0x07, 0x1C, 0x00, 0x70, 0xE0, 0x03, 0x87,
  0x00, 0x1C, 0x38, 0x01, 0xC1, 0xF0, 0x3E, 0x07, 0xFF, 0xE0, 0x1F, 0xFC,
  0x00, 0x3F, 0x80, 0x00, 0xE0, 0x00, 0xFC, 0x00, 0x3D, 0xC0, 0x07, 0x38,
  0x01, 0xC7, 0x00, 0x38, 0xE0, 0x0E, 0x1C, 0x01, 0xC3, 0x80, 0x70, 0x70,
  0x0E, 0x06, 0x03, 0x80, 0xE0, 0x70, 0x1C, 0x1C, 0x03, 0x83, 0x00, 0x70,
  0xE0, 0x0E, 0x18, 0x01, 0xC7, 0x00, 0x39, 0xC0, 0x03, 0xB8, 0x00, 0x7E,
  0x00, 0x0F, 0xC0, 0x01, 0xF0, 0x00, 0x3E, 0x00, 0x07, 0x80, 0x00, 0xE0,
  0x0F, 0x00, 0x7E, 0x00, 0xF0, 0x07, 0xE0, 0x1F, 0x00, 0xEE, 0x01, 0xF0,
  0x0E, 0xE0, 0x3F, 0x01, 0xCE, 0x03, 0xF0, 0x1C, 0xE0, 0x73, 0x03, 0x8E,
  0x07, 0x30, 0x38, 0xE0, 0xE3, 0x07, 0x8E, 0x0E, 0x30, 0x70, 0xE1, 0xC3,
  0x07, 0x0E, 0x1C, 0x38, 0xE0, 0x61, 0x83, 0x8E, 0x06, 0x38, 0x39, 0xC0,
  0x63, 0x03, 0x9C, 0x06, 0x70, 0x3B, 0x80, 0x66, 0x03, 0xB8, 0x06, 0xE0,
  0x3B, 0x00, 0x6C, 0x03, 0xF0, 0x07, 0xC0, 0x3E, 0x00, 0x78, 0x01, 0xE0,
  0x07, 0x80, 0x1E, 0x00, 0x70, 0x01, 0xC0, 0x00, 0x07, 0x80, 0x0E, 0x03,
  0x80, 0x1C, 0x03, 0xC0, 0x38, 0x01, 0xC0, 0x70, 0x01, 0xC0, 0xF0, 0x01,
  0xE1, 0xE0, 0x00, 0xE3, 0xC0, 0x00, 0xF3, 0x80, 0x00, 0x77, 0x00, 0x00,
  0x7E, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0xFE, 0x00, 0x01, 0xCE, 0x00, 0x03, 0xCF, 0x00, 0x07, 0x87, 0x00, 0x0F,
  0x07, 0x80, 0x0E, 0x03, 0x80, 0x1C, 0x03, 0x80, 0x38, 0x03, 0xC0, 0x70,
  0x01, 0xC0, 0xF0, 0x01, 0xE0, 0xF0, 0x00, 0xF7, 0x00, 0x0E, 0x78, 0x01,
  0xC3, 0x80, 0x38, 0x38, 0x07, 0x83, 0xC0, 0xF0, 0x1C, 0x0E, 0x01, 0xE1,
  0xC0, 0x0E, 0x38, 0x00, 0xE7, 0x80, 0x07, 0x70, 0x00, 0x7E, 0x00, 0x07,
  0xC0, 0x00, 0x38, 0x00, 0x03, 0x80, 0x00, 0x38, 0x00, 0x03, 0x00, 0x00,
  0x70, 0x00, 0x07, 0x00, 0x00, 0x70, 0x00, 0x07, 0x00, 0x00, 0xE0, 0x00,
  0x0E, 0x00, 0x00, 0x03, 0xFF, 0xFC, 0x1F, 0xFF, 0xF0, 0x7F, 0xFF, 0x80,
  0x00, 0x1E, 0x00, 0x00, 0xF0, 0x00, 0x07, 0x80, 0x00, 0x3C, 0x00, 0x01,
  0xE0, 0x00, 0x0F, 0x00, 0x00, 0x78, 0x00, 0x03, 0xC0, 0x00, 0x1E, 0x00,
  0x00, 0xF0, 0x00, 0x07, 0x80, 0x00, 0x3C, 0x00, 0x01, 0xE0, 0x00, 0x0F,
  0x00, 0x00, 0x78, 0x00, 0x03, 0xC0, 0x00, 0x1E, 0x00, 0x00, 0xFF, 0xFF,
  0xC3, 0xFF, 0xFE, 0x0F, 0xFF, 0xF8, 0x00, 0x07, 0xE0, 0x7E, 0x07, 0xE0,
  0x70, 0x07, 0x00, 0xE0, 0x0E, 0x00, 0xE0, 0x0E, 0x00, 0xE0, 0x1C, 0x01,
  0xC0, 0x1C, 0x01, 0xC0, 0x1C, 0x03, 0xC0, 0x38, 0x03, 0x80, 0x38, 0x03,
  0x80, 0x78, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70, 0x0F, 0x00, 0xE0, 0x0F,
  0xC0, 0xFC, 0x0F, 0xC0, 0xCC, 0xCC, 0xC4, 0x44, 0x66, 0x66, 0x66, 0x62,
  0x22, 0x33, 0x33, 0x30, 0x03, 0xF0, 0x3F, 0x03, 0xF0, 0x07, 0x00, 0xF0,
  0x0E, 0x00, 0xE0, 0x0E, 0x00, 0xE0, 0x1E, 0x01, 0xC0, 0x1C, 0x01, 0xC0,
  0x1C, 0x03, 0xC0, 0x38, 0x03, 0x80, 0x38, 0x03, 0x80, 0x38, 0x07, 0x00,
  0x70, 0x07, 0x00, 0x70, 0x07, 0x00, 0xE0, 0x0E, 0x07, 0xE0, 0x7E, 0x07,
  0xE0, 0x01, 0xC0, 0x3C, 0x07, 0xE0, 0x6E, 0x0C, 0xE0, 0xCE, 0x18, 0xE3,
  0x8F, 0x30, 0x76, 0x07, 0x60, 0x7C, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC,
  0xE3, 0x8C, 0x61, 0x80, 0x01, 0xF8, 0x07, 0xFE, 0x0F, 0xFF, 0x1E, 0x0F,
  0x1C, 0x07, 0x00, 0x06, 0x00, 0x1E, 0x0F, 0xFE, 0x3F, 0x8E, 0x78, 0x0E,
  0xE0, 0x1C, 0xE0, 0x1C, 0xF0, 0x7C, 0xFF, 0xDE, 0x7F, 0x9E, 0x3F, 0x0E,
  0x0E, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x01, 0xC0, 0x00, 0xE0,
  0x00, 0x70, 0x00, 0x39, 0xF8, 0x1F, 0xFE, 0x1F, 0xFF, 0x8F, 0xC3, 0xE7,
  0xC0, 0x73, 0xC0, 0x39, 0xC0, 0x1D, 0xE0, 0x0E, 0xE0, 0x07, 0x70, 0x07,
  0x38, 0x03, 0x9E, 0x03, 0x8F, 0x87, 0xCF, 0xFF, 0xC7, 0x7F, 0xC3, 0x9F,
  0x80, 0x01, 0xF8, 0x07, 0xFE, 0x1F, 0xFE, 0x3E, 0x0F, 0x38, 0x07, 0x78,
  0x07, 0x70, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x0E, 0xE0,
  0x1C, 0xF8, 0x7C, 0x7F, 0xF8, 0x3F, 0xF0, 0x1F, 0xC0, 0x00, 0x01, 0xC0,
  0x00, 0x70, 0x00, 0x1C, 0x00, 0x07, 0x00, 0x03, 0x80, 0x00, 0xE0, 0x00,
  0x38, 0x0F, 0xCE, 0x0F, 0xFB, 0x87, 0xFF, 0xE3, 0xE1, 0xF1, 0xE0, 0x3C,
  0x70, 0x07, 0x1C, 0x01, 0xCE, 0x00, 0xF3, 0x80, 0x38, 0xE0, 0x0E, 0x38,
  0x07, 0x8E, 0x03, 0xE3, 0xC1, 0xF8, 0x7F, 0xFC, 0x0F, 0xF7, 0x01, 0xF9,
  0xC0, 0x01, 0xF8, 0x07, 0xFC, 0x1F, 0xFE, 0x3E, 0x0F, 0x38, 0x07, 0x70,
  0x07, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0xE0, 0x00, 0xE0,
  0x1C, 0xF0, 0x3C, 0x7F, 0xF8, 0x3F, 0xF0, 0x0F, 0xC0, 0x03, 0xC1, 0xF0,
  0xFC, 0x38, 0x0E, 0x03, 0x81, 0xE1, 0xFE, 0x7F, 0x1F, 0xC1, 0xC0, 0xF0,
  0x38, 0x0E, 0x03, 0x80, 0xE0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x38,
  0x0E, 0x00, 0x01, 0xF1, 0x83, 0xFC, 0xC3, 0xFF, 0x63, 0xE1, 0xF1, 0xC0,
  0x71, 0xC0, 0x38, 0xE0, 0x1C, 0xE0, 0x0E, 0x70, 0x07, 0x38, 0x03, 0x1C,
  0x03, 0x8E, 0x03, 0xC7, 0x83, 0xE1, 0xFF, 0xE0, 0x7F, 0xB0, 0x1F, 0x18,
  0x00, 0x1C, 0x00, 0x0C, 0x00, 0x0E, 0x1C, 0x0E, 0x0F, 0xFF, 0x03, 0xFF,
  0x00, 0xFE, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x1C,
  0x00, 0x1C, 0x00, 0x1C, 0x00, 0x1C, 0xFC, 0x1F, 0xFE, 0x3F, 0xFF, 0x3F,
  0x0F, 0x3C, 0x07, 0x38, 0x07, 0x38, 0x07, 0x78, 0x0E, 0x70, 0x0E, 0x70,
  0x0E, 0x70, 0x0E, 0x70, 0x1E, 0x70, 0x1C, 0xE0, 0x1C, 0xE0, 0x1C, 0xE0,
  0x1C, 0x0E, 0x1C, 0x38, 0x00, 0x00, 0x00, 0x0E, 0x3C, 0x70, 0xE1, 0xC3,
  0x87, 0x1E, 0x38, 0x70, 0xE1, 0xC3, 0x8F, 0x1C, 0x38, 0x00, 0x00, 0xF0,
  0x0E, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x01, 0xC0,
  0x1C, 0x03, 0x80, 0x38, 0x03, 0x80, 0x38, 0x07, 0x80, 0x70, 0x07, 0x00,
  0x70, 0x07, 0x00, 0xF0, 0x0E, 0x00, 0xE0, 0x0E, 0x00, 0xE0, 0x1C, 0x01,
  0xC0, 0x1C, 0x0F, 0xC0, 0xF8, 0x0F, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0E,
  0x00, 0x0E, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x1C, 0x00, 0x1C, 0x0F, 0x1C,
  0x1E, 0x3C, 0x38, 0x38, 0xF0, 0x39, 0xE0, 0x3B, 0xC0, 0x3F, 0xC0, 0x7E,
  0xC0, 0x7C, 0xE0, 0x70, 0xE0, 0x70, 0x70, 0x70, 0x70, 0x70, 0x30, 0xE0,
  0x38, 0xE0, 0x38, 0xE0, 0x1C, 0x0E, 0x1C, 0x78, 0xE1, 0xC3, 0x87, 0x0E,
  0x3C, 0x70, 0xE1, 0xC3, 0x87, 0x1E, 0x38, 0x70, 0xE1, 0xC3, 0x8F, 0x1C,
  0x38, 0x00, 0x3C, 0xF8, 0x3C, 0x3B, 0xFC, 0xFE, 0x3F, 0xFD, 0xFF, 0x3E,
  0x1F, 0x87, 0x3C, 0x0E, 0x07, 0x38, 0x0E, 0x07, 0x78, 0x1C, 0x07, 0x70,
  0x1C, 0x07, 0x70, 0x1C, 0x0F, 0x70, 0x1C, 0x0E, 0x70, 0x1C, 0x0E, 0x70,
  0x38, 0x0E, 0xF0, 0x38, 0x0E, 0xE0, 0x38, 0x1C, 0xE0, 0x38, 0x1C, 0xE0,
  0x78, 0x1C, 0x3C, 0xFC, 0x3B, 0xFE, 0x3F, 0xFF, 0x3F, 0x0F, 0x3C, 0x07,
  0x38, 0x07, 0x78, 0x07, 0x70, 0x0E, 0x70, 0x0E, 0x70, 0x0E, 0x70, 0x0E,
  0x70, 0x1E, 0xF0, 0x1C, 0xE0, 0x1C, 0xE0, 0x1C, 0xE0, 0x1C, 0x01, 0xF8,
  0x0F, 0xFC, 0x1F, 0xFE, 0x3E, 0x0F, 0x38, 0x07, 0x70, 0x07, 0x70, 0x07,
  0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x0E, 0xE0, 0x0E, 0xE0, 0x1C, 0xF0, 0x7C,
  0x7F, 0xF8, 0x3F, 0xF0, 0x1F, 0x80, 0x07, 0x1F, 0x00, 0xEF, 0xF0, 0x1F,
  0xFF, 0x03, 0xE1, 0xF0, 0xF8, 0x0E, 0x1E, 0x01, 0xC3, 0x80, 0x38, 0x70,
  0x07, 0x1E, 0x00, 0xE3, 0x80, 0x38, 0x70, 0x07, 0x0F, 0x01, 0xE1, 0xF0,
  0xF8, 0x7F, 0xFE, 0x0E, 0xFF, 0x81, 0xCF, 0xC0, 0x38, 0x00, 0x07, 0x00,
  0x01, 0xE0, 0x00, 0x38, 0x00, 0x07, 0x00, 0x00, 0xE0, 0x00, 0x3C, 0x00,
  0x00, 0x03, 0xF3, 0x83, 0xFE, 0xE1, 0xFF, 0xF8, 0xF8, 0x7E, 0x38, 0x0F,
  0x9C, 0x01, 0xC7, 0x00, 0x73, 0x80, 0x1C, 0xE0, 0x0F, 0x38, 0x03, 0xCE,
  0x01, 0xE3, 0x80, 0xF8, 0xF8, 0x7E, 0x1F, 0xFF, 0x83, 0xFD, 0xC0, 0x7C,
  0x70, 0x00, 0x1C, 0x00, 0x07, 0x00, 0x03, 0xC0, 0x00, 0xE0, 0x00, 0x38,
  0x00, 0x0E, 0x00, 0x07, 0x80, 0x3C, 0xE7, 0x7C, 0xFF, 0x9F, 0x83, 0xC0,
  0x70, 0x1E, 0x03, 0x80, 0x70, 0x0E, 0x01, 0xC0, 0x38, 0x0F, 0x01, 0xC0,
  0x38, 0x07, 0x00, 0x03, 0xF0, 0x1F, 0xF8, 0x7F, 0xF8, 0xE0, 0xF3, 0x80,
  0xE7, 0x00, 0x0F, 0x80, 0x0F, 0xF0, 0x0F, 0xF8, 0x01, 0xFB, 0x80, 0x77,
  0x00, 0xEF, 0x07, 0x9F, 0xFF, 0x1F, 0xFC, 0x0F, 0xE0, 0x1E, 0x0E, 0x07,
  0x0F, 0xF7, 0xFF, 0xF8, 0xE0, 0x70, 0x38, 0x1C, 0x1C, 0x0E, 0x07, 0x03,
  0x83, 0xC1, 0xC0, 0xF8, 0x7C, 0x1E, 0x00, 0x1C, 0x0E, 0x70, 0x1C, 0xE0,
  0x39, 0xC0, 0x73, 0x81, 0xE7, 0x03, 0x9C, 0x07, 0x38, 0x0E, 0x70, 0x1C,
  0xE0, 0x7B, 0xC0, 0xE7, 0x03, 0xCE, 0x0F, 0x9F, 0xFF, 0x1F, 0xEE, 0x1F,
  0x1C, 0xE0, 0x0F, 0xC0, 0x3B, 0x80, 0x63, 0x01, 0xC7, 0x07, 0x0E, 0x0E,
  0x1C, 0x38, 0x38, 0x60, 0x71, 0xC0, 0xE7, 0x00, 0xCE, 0x01, 0xB8, 0x03,
  0x60, 0x07, 0xC0, 0x0F, 0x00, 0x1E, 0x00, 0xE0, 0x70, 0x3F, 0x07, 0x83,
  0xB8, 0x3C, 0x1D, 0xC3, 0xE1, 0xCE, 0x1B, 0x0E, 0x70, 0xD8, 0xE1, 0x8E,
  0xC7, 0x0C, 0x66, 0x70, 0x67, 0x33, 0x83, 0x31, 0xB8, 0x1B, 0x8D, 0xC0,
  0xD8, 0x7C, 0x07, 0xC3, 0xE0, 0x3C, 0x1E, 0x01, 0xE0, 0xF0, 0x0F, 0x07,
  0x00, 0x0C, 0x03, 0x87, 0x03, 0x83, 0x83, 0x80, 0xE3, 0x80, 0x73, 0x80,
  0x1F, 0x80, 0x0F, 0x80, 0x03, 0x80, 0x03, 0xC0, 0x03, 0xF0, 0x01, 0xB8,
  0x01, 0xCE, 0x01, 0xC7, 0x01, 0xC1, 0x81, 0xC0, 0xE1, 0xC0, 0x30, 0x0E,
  0x01, 0xC3, 0x80, 0xE0, 0xE0, 0x38, 0x38, 0x1C, 0x0E, 0x06, 0x03, 0x83,
  0x80, 0x61, 0xC0, 0x18, 0x70, 0x07, 0x38, 0x01, 0xCC, 0x00, 0x77, 0x00,
  0x1F, 0x80, 0x07, 0xE0, 0x00, 0xF0, 0x00, 0x3C, 0x00, 0x0E, 0x00, 0x03,
  0x00, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x78, 0x00, 0xFC, 0x00, 0x3E, 0x00,
  0x0F, 0x00, 0x00, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x00, 0x0E, 0x00,
  0x1C, 0x00, 0x38, 0x00, 0xF0, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x0E,
  0x00, 0x38, 0x00, 0x70, 0x00, 0xFF, 0xFC, 0xFF, 0xF8, 0xFF, 0xF8, 0x01,
  0xE0, 0x7C, 0x1F, 0x83, 0x80, 0x70, 0x1E, 0x03, 0x80, 0x70, 0x0E, 0x01,
  0xC0, 0x70, 0x0E, 0x03, 0xC1, 0xF0, 0x38, 0x07, 0x80, 0x78, 0x07, 0x00,
  0xE0, 0x1C, 0x07, 0x00, 0xE0, 0x1C, 0x03, 0x80, 0xF0, 0x1C, 0x03, 0x80,
  0x7C, 0x0F, 0x80, 0xF0, 0x00, 0x03, 0x03, 0x02, 0x06, 0x06, 0x06, 0x06,
  0x04, 0x0C, 0x0C, 0x0C, 0x0C, 0x08, 0x18, 0x18, 0x18, 0x10, 0x30, 0x30,
  0x30, 0x30, 0x20, 0x60, 0x60, 0x60, 0x60, 0x40, 0xC0, 0xC0, 0x40, 0x03,
  0xC0, 0x7C, 0x0F, 0x80, 0x70, 0x0E, 0x03, 0xC0, 0x70, 0x0E, 0x01, 0xC0,
  0x38, 0x0E, 0x01, 0xC0, 0x38, 0x07, 0x80, 0x78, 0x07, 0x03, 0xE0, 0xF0,
  0x1C, 0x03, 0x80, 0xE0, 0x1C, 0x03, 0x80, 0x70, 0x1E, 0x03, 0x80, 0x70,
  0x7E, 0x0F, 0x81, 0xE0, 0x00, 0x38, 0x01, 0xF8, 0x07, 0xF0, 0x31, 0xE1,
  0x03, 0xFC, 0x07, 0xE0, 0x0F, 0x00 };

const GFXglyph FreeSansOblique16pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   9,    0,    0 },   // 0x20 ' '
  {     1,   7,  23,   9,    4,  -22 },   // 0x21 '!'
  {    22,   8,   8,  11,    5,  -21 },   // 0x22 '"'
  {    30,  18,  23,  17,    2,  -22 },   // 0x23 '#'
  {    82,  17,  28,  17,    2,  -23 },   // 0x24 '$'
  {   142,  24,  22,  28,    4,  -21 },   // 0x25 '%'
  {   208,  18,  22,  21,    3,  -21 },   // 0x26 '&'
  {   258,   3,   8,   6,    5,  -21 },   // 0x27 '''
  {   261,  11,  29,  10,    4,  -22 },   // 0x28 '('
  {   301,  11,  29,  10,   -1,  -21 },   // 0x29 ')'
  {   341,  10,  10,  12,    5,  -22 },   // 0x2A '*'
  {   354,  17,  14,  18,    2,  -13 },   // 0x2B '+'
  {   384,   5,   8,   9,    2,   -2 },   // 0x2C ','
  {   389,   8,   3,  10,    3,   -9 },   // 0x2D '-'
  {   392,   4,   3,   9,    3,   -2 },   // 0x2E '.'
  {   394,  13,  23,   9,    0,  -22 },   // 0x2F '/'
  {   432,  16,  22,  17,    3,  -21 },   // 0x30 '0'
  {   476,   9,  22,  17,    7,  -21 },   // 0x31 '1'
  {   501,  18,  22,  17,    1,  -21 },   // 0x32 '2'
  {   551,  16,  22,  17,    2,  -21 },   // 0x33 '3'
  {   595,  16,  22,  17,    2,  -21 },   // 0x34 '4'
  {   639,  18,  22,  17,    2,  -21 },   // 0x35 '5'
  {   689,  17,  22,  17,    3,  -21 },   // 0x36 '6'
  {   736,  17,  22,  17,    4,  -21 },   // 0x37 '7'
  {   783,  17,  22,  17,    2,  -21 },   // 0x38 '8'
  {   830,  16,  22,  17,    3,  -21 },   // 0x39 '9'
  {   874,   7,  16,   9,    4,  -15 },   // 0x3A ':'
  {   888,   7,  21,   9,    3,  -15 },   // 0x3B ';'
  {   907,  17,  15,  18,    3,  -14 },   // 0x3C '<'
  {   939,  17,   9,  18,    2,  -11 },   // 0x3D '='
  {   959,  17,  15,  18,    1,  -13 },   // 0x3E '>'
  {   991,  14,  23,  17,    6,  -22 },   // 0x3F '?'
  {  1032,  31,  27,  31,    2,  -22 },   // 0x40 '@'
  {  1137,  20,  23,  21,    0,  -22 },   // 0x41 'A'
  {  1195,  20,  23,  21,    2,  -22 },   // 0x42 'B'
  {  1253,  21,  23,  22,    3,  -22 },   // 0x43 'C'
  {  1314,  21,  23,  22,    2,  -22 },   // 0x44 'D'
  {  1375,  21,  23,  20,    2,  -22 },   // 0x45 'E'
  {  1436,  20,  23,  19,    2,  -22 },   // 0x46 'F'
  {  1494,  22,  23,  24,    3,  -22 },   // 0x47 'G'
  {  1558,  23,  23,  22,    2,  -22 },   // 0x48 'H'
  {  1625,   7,  23,   9,    3,  -22 },   // 0x49 'I'
  {  1646,  17,  23,  16,    1,  -22 },   // 0x4A 'J'
  {  1695,  23,  23,  21,    2,  -22 },   // 0x4B 'K'
  {  1762,  15,  23,  17,    2,  -22 },   // 0x4C 'L'
  {  1806,  27,  23,  26,    2,  -22 },   // 0x4D 'M'
  {  1884,  23,  23,  23,    2,  -22 },   // 0x4E 'N'
  {  1951,  23,  23,  24,    3,  -22 },   // 0x4F 'O'
  {  2018,  20,  23,  20,    2,  -22 },   // 0x50 'P'
  {  2076,  23,  25,  24,    3,  -22 },   // 0x51 'Q'
  {  2148,  22,  23,  22,    2,  -22 },   // 0x52 'R'
  {  2212,  19,  23,  20,    3,  -22 },   // 0x53 'S'
  {  2267,  18,  23,  19,    5,  -22 },   // 0x54 'T'
  {  2319,  21,  23,  22,    4,  -22 },   // 0x55 'U'
  {  2380,  19,  23,  20,    5,  -22 },   // 0x56 'V'
  {  2435,  28,  23,  29,    5,  -22 },   // 0x57 'W'
  {  2516,  24,  23,  21,    1,  -22 },   // 0x58 'X'
  {  2585,  20,  23,  21,    5,  -22 },   // 0x59 'Y'
  {  2643,  22,  23,  19,    1,  -22 },   // 0x5A 'Z'
  {  2707,  12,  30,   9,    1,  -22 },   // 0x5B '['
  {  2752,   4,  23,   9,    5,  -22 },   // 0x5C '\'
  {  2764,  12,  30,   9,   -1,  -22 },   // 0x5D ']'
  {  2809,  12,  12,  15,    3,  -21 },   // 0x5E '^'
  {  2827,  19,   2,  17,   -2,    4 },   // 0x5F '_'
  {  2832,   5,   5,  10,    6,  -22 },   // 0x60 '`'
  {  2836,  16,  16,  17,    2,  -15 },   // 0x61 'a'
  {  2868,  17,  23,  17,    2,  -22 },   // 0x62 'b'
  {  2917,  16,  16,  16,    2,  -15 },   // 0x63 'c'
  {  2949,  18,  23,  17,    2,  -22 },   // 0x64 'd'
  {  3001,  16,  16,  17,    2,  -15 },   // 0x65 'e'
  {  3033,  10,  23,   8,    2,  -22 },   // 0x66 'f'
  {  3062,  17,  23,  17,    1,  -15 },   // 0x67 'g'
  {  3111,  16,  23,  17,    2,  -22 },   // 0x68 'h'
  {  3157,   7,  23,   7,    2,  -22 },   // 0x69 'i'
  {  3178,  12,  30,   7,   -1,  -22 },   // 0x6A 'j'
  {  3223,  16,  23,  16,    2,  -22 },   // 0x6B 'k'
  {  3269,   7,  23,   7,    2,  -22 },   // 0x6C 'l'
  {  3290,  24,  16,  25,    2,  -15 },   // 0x6D 'm'
  {  3338,  16,  16,  17,    2,  -15 },   // 0x6E 'n'
  {  3370,  16,  16,  17,    2,  -15 },   // 0x6F 'o'
  {  3402,  19,  23,  17,    0,  -15 },   // 0x70 'p'
  {  3457,  18,  23,  17,    2,  -15 },   // 0x71 'q'
  {  3509,  11,  16,  10,    2,  -15 },   // 0x72 'r'
  {  3531,  15,  16,  15,    2,  -15 },   // 0x73 's'
  {  3561,   9,  19,   8,    3,  -18 },   // 0x74 't'
  {  3583,  15,  16,  17,    3,  -15 },   // 0x75 'u'
  {  3613,  15,  16,  15,    4,  -15 },   // 0x76 'v'
  {  3643,  21,  16,  22,    4,  -15 },   // 0x77 'w'
  {  3685,  17,  16,  15,    1,  -15 },   // 0x78 'x'
  {  3719,  18,  23,  15,    0,  -15 },   // 0x79 'y'
  {  3771,  16,  16,  15,    1,  -15 },   // 0x7A 'z'
  {  3803,  11,  30,  10,    3,  -22 },   // 0x7B '{'
  {  3845,   8,  30,   8,    2,  -22 },   // 0x7C '|'
  {  3875,  11,  30,  10,   -1,  -22 },   // 0x7D '}'
  {  3917,  14,   7,  18,    4,  -14 } }; // 0x7E '~'

const GFXfont FreeSansOblique16pt7b PROGMEM = {
  (uint8_t  *)FreeSansOblique16pt7bBitmaps,
  (GFXglyph *)FreeSansOblique16pt7bGlyphs,
  0x20, 0x7E, 38 };

// Approx. 4602 bytes

#endif // FreeSansOblique16pt7b_H
