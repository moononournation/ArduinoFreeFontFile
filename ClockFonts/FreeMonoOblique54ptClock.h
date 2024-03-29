#ifndef FreeMonoOblique54pt7b_H
#define FreeMonoOblique54pt7b_H

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

const uint8_t FreeMonoOblique54pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x0F,
  0xF0, 0x1F, 0xE0, 0x00, 0x03, 0xF0, 0x00, 0x7E, 0x00, 0x00, 0xFC, 0x00,
  0x07, 0xC0, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x0F, 0x80, 0x00, 0x07,
  0x80, 0x01, 0xE0, 0x00, 0x00, 0xF8, 0x00, 0x78, 0x00, 0x00, 0x0F, 0x00,
  0x1E, 0x00, 0x00, 0x01, 0xE0, 0x07, 0xC0, 0x00, 0x00, 0x3C, 0x00, 0xF0,
  0x00, 0x00, 0x07, 0xC0, 0x3C, 0x00, 0x00, 0x00, 0x78, 0x07, 0x80, 0x00,
  0x00, 0x0F, 0x01, 0xE0, 0x00, 0x00, 0x01, 0xE0, 0x3C, 0x00, 0x00, 0x00,
  0x3C, 0x0F, 0x00, 0x00, 0x00, 0x07, 0x81, 0xE0, 0x00, 0x00, 0x00, 0xF0,
  0x7C, 0x00, 0x00, 0x00, 0x1E, 0x0F, 0x00, 0x00, 0x00, 0x03, 0xC1, 0xE0,
  0x00, 0x00, 0x00, 0x78, 0x78, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00,
  0x00, 0x03, 0xC1, 0xE0, 0x00, 0x00, 0x00, 0x78, 0x38, 0x00, 0x00, 0x00,
  0x0F, 0x0F, 0x00, 0x00, 0x00, 0x01, 0xE1, 0xE0, 0x00, 0x00, 0x00, 0x78,
  0x3C, 0x00, 0x00, 0x00, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x01, 0xE0, 0xE0,
  0x00, 0x00, 0x00, 0x3C, 0x3C, 0x00, 0x00, 0x00, 0x0F, 0x87, 0x80, 0x00,
  0x00, 0x01, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x3C, 0x1C, 0x00, 0x00, 0x00,
  0x07, 0x83, 0x80, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x3C,
  0x1E, 0x00, 0x00, 0x00, 0x07, 0x83, 0xC0, 0x00, 0x00, 0x00, 0xF0, 0x70,
  0x00, 0x00, 0x00, 0x1E, 0x0E, 0x00, 0x00, 0x00, 0x07, 0x83, 0xC0, 0x00,
  0x00, 0x00, 0xF0, 0x78, 0x00, 0x00, 0x00, 0x1E, 0x0F, 0x00, 0x00, 0x00,
  0x07, 0xC1, 0xE0, 0x00, 0x00, 0x00, 0xF0, 0x3C, 0x00, 0x00, 0x00, 0x1E,
  0x07, 0x80, 0x00, 0x00, 0x07, 0xC0, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0x1E,
  0x00, 0x00, 0x00, 0x3E, 0x03, 0xC0, 0x00, 0x00, 0x07, 0x80, 0x78, 0x00,
  0x00, 0x01, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x3C, 0x01, 0xF0, 0x00, 0x00,
  0x0F, 0x80, 0x1E, 0x00, 0x00, 0x03, 0xE0, 0x03, 0xC0, 0x00, 0x00, 0x7C,
  0x00, 0x78, 0x00, 0x00, 0x1F, 0x00, 0x0F, 0x80, 0x00, 0x07, 0xC0, 0x00,
  0xF0, 0x00, 0x01, 0xF0, 0x00, 0x1F, 0x00, 0x00, 0x7E, 0x00, 0x01, 0xF0,
  0x00, 0x3F, 0x80, 0x00, 0x3F, 0x00, 0x0F, 0xE0, 0x00, 0x03, 0xFC, 0x0F,
  0xF0, 0x00, 0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x00,
  0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00,
  0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00,
  0x7F, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0xC0,
  0x00, 0x00, 0x03, 0xF3, 0xC0, 0x00, 0x00, 0x0F, 0xE3, 0xC0, 0x00, 0x00,
  0x1F, 0xC3, 0xC0, 0x00, 0x00, 0x3F, 0x87, 0x80, 0x00, 0x00, 0x7F, 0x07,
  0x80, 0x00, 0x00, 0xFE, 0x07, 0x80, 0x00, 0x01, 0xF8, 0x07, 0x80, 0x00,
  0x07, 0xF0, 0x07, 0x80, 0x00, 0x0F, 0xE0, 0x0F, 0x00, 0x00, 0x0F, 0xC0,
  0x0F, 0x00, 0x00, 0x0F, 0x80, 0x0F, 0x00, 0x00, 0x0E, 0x00, 0x0F, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,
  0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x1E,
  0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00,
  0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00,
  0x3C, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x01,
  0xE0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00,
  0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00,
  0x03, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xC0,
  0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00,
  0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x0F,
  0x80, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFE, 0x01, 0xFF, 0x00, 0x00,
  0x00, 0x7F, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x1F, 0x80,
  0x00, 0x03, 0xF0, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x07,
  0xE0, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x3E, 0x00, 0x00, 0xF8, 0x00, 0x00,
  0x01, 0xE0, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x03, 0xE0, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x07, 0xC0,
  0x00, 0x00, 0x00, 0xF0, 0x00, 0x78, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x07,
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x70, 0x00,
  0x3F, 0x80, 0x00, 0x00, 0x0F, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0xF0,
  0x00, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x01,
  0xE0, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x7C, 0x00, 0x00, 0x00,
  0x01, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xE0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x7F, 0xC0,
  0x00, 0x07, 0xF8, 0x00, 0x07, 0xF0, 0x00, 0x07, 0xF0, 0x00, 0x01, 0xF8,
  0x00, 0x07, 0xE0, 0x00, 0x00, 0x7E, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x1F,
  0x00, 0x03, 0xE0, 0x00, 0x00, 0x07, 0xC0, 0x01, 0xC0, 0x00, 0x00, 0x03,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x1F, 0x80,
  0x3F, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x1F, 0xC0, 0x00, 0x00, 0x1F, 0x80,
  0x07, 0xF8, 0x00, 0x00, 0x3F, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x7F, 0x00,
  0x00, 0x7F, 0xF8, 0x01, 0xFF, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFE, 0x00,
  0x00, 0x01, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3E, 0x3C, 0x00,
  0x00, 0x00, 0x07, 0x87, 0x80, 0x00, 0x00, 0x01, 0xE1, 0xE0, 0x00, 0x00,
  0x00, 0x7C, 0x3C, 0x00, 0x00, 0x00, 0x1F, 0x07, 0x80, 0x00, 0x00, 0x07,
  0xC0, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0x3E, 0x00, 0x00, 0x00, 0x3C, 0x07,
  0x80, 0x00, 0x00, 0x0F, 0x80, 0xF0, 0x00, 0x00, 0x03, 0xE0, 0x1E, 0x00,
  0x00, 0x00, 0xF8, 0x03, 0xC0, 0x00, 0x00, 0x1E, 0x00, 0xF0, 0x00, 0x00,
  0x07, 0x80, 0x1E, 0x00, 0x00, 0x01, 0xF0, 0x03, 0xC0, 0x00, 0x00, 0x7C,
  0x00, 0x78, 0x00, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x00, 0x03, 0xC0, 0x03,
  0xC0, 0x00, 0x00, 0xF0, 0x00, 0x78, 0x00, 0x00, 0x3E, 0x00, 0x0F, 0x00,
  0x00, 0x0F, 0x80, 0x01, 0xE0, 0x00, 0x01, 0xE0, 0x00, 0x7C, 0x00, 0x00,
  0x78, 0x00, 0x0F, 0x00, 0x00, 0x1F, 0x00, 0x01, 0xE0, 0x00, 0x07, 0xC0,
  0x00, 0x3C, 0x00, 0x01, 0xF0, 0x00, 0x07, 0x80, 0x00, 0x3C, 0x00, 0x01,
  0xE0, 0x00, 0x0F, 0x00, 0x00, 0x3C, 0x00, 0x03, 0xE0, 0x00, 0x07, 0x80,
  0x00, 0xF8, 0x00, 0x00, 0xF0, 0x00, 0x3E, 0x00, 0x00, 0x3E, 0x00, 0x07,
  0x80, 0x00, 0x07, 0x80, 0x01, 0xE0, 0x00, 0x00, 0xF0, 0x00, 0x7C, 0x00,
  0x00, 0x1E, 0x00, 0x1F, 0x00, 0x00, 0x03, 0xC0, 0x07, 0xC0, 0x00, 0x00,
  0xF8, 0x00, 0xF0, 0x00, 0x00, 0x1E, 0x00, 0x3C, 0x00, 0x00, 0x03, 0xC0,
  0x0F, 0x80, 0x00, 0x00, 0x78, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF1, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00,
  0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x00,
  0x00, 0x03, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFC, 0x00, 0x00,
  0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
  0x1F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
  0x01, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x0F,
  0x8F, 0xFF, 0xFC, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0xFF, 0x00, 0x00,
  0x1F, 0xF8, 0x00, 0x0F, 0xE0, 0x00, 0x07, 0xF0, 0x00, 0x00, 0xFC, 0x00,
  0x00, 0xE0, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x01,
  0xE0, 0x00, 0x00, 0x00, 0x7C, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x3E, 0x00,
  0x1F, 0x80, 0x00, 0x00, 0x1F, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x0F, 0x80,
  0x00, 0xFF, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x1F, 0xF0, 0x00, 0x0F, 0xE0,
  0x00, 0x01, 0xFF, 0x80, 0x1F, 0xF0, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF0,
  0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0xFF,
  0x80, 0x38, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7C,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x03, 0xFC,
  0x00, 0x00, 0x1E, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x78, 0x07, 0xFF, 0xFC,
  0x00, 0x03, 0xE0, 0x3F, 0xFF, 0xFC, 0x00, 0x0F, 0x03, 0xFC, 0x07, 0xF0,
  0x00, 0x3C, 0x1F, 0x80, 0x07, 0xE0, 0x00, 0xF0, 0xFC, 0x00, 0x0F, 0xC0,
  0x07, 0xC7, 0xC0, 0x00, 0x1F, 0x00, 0x1E, 0x3E, 0x00, 0x00, 0x3E, 0x00,
  0x79, 0xF0, 0x00, 0x00, 0xF8, 0x01, 0xEF, 0x80, 0x00, 0x01, 0xE0, 0x07,
  0xBC, 0x00, 0x00, 0x07, 0xC0, 0x3F, 0xE0, 0x00, 0x00, 0x0F, 0x00, 0xFF,
  0x00, 0x00, 0x00, 0x3C, 0x03, 0xF8, 0x00, 0x00, 0x00, 0xF0, 0x0F, 0xC0,
  0x00, 0x00, 0x03, 0xC0, 0x3F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0xF8, 0x00,
  0x00, 0x00, 0x3C, 0x03, 0xC0, 0x00, 0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00,
  0x00, 0x03, 0xC0, 0x3C, 0x00, 0x00, 0x00, 0x1E, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x78, 0x03, 0xC0, 0x00, 0x00, 0x01, 0xE0, 0x0F, 0x00, 0x00, 0x00,
  0x07, 0x80, 0x3E, 0x00, 0x00, 0x00, 0x3C, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0xF0, 0x01, 0xE0, 0x00, 0x00, 0x07, 0x80, 0x07, 0x80, 0x00, 0x00, 0x3E,
  0x00, 0x1F, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x3C, 0x00, 0x00, 0x07, 0x80,
  0x00, 0xF8, 0x00, 0x00, 0x3E, 0x00, 0x03, 0xE0, 0x00, 0x01, 0xF0, 0x00,
  0x07, 0xC0, 0x00, 0x0F, 0x80, 0x00, 0x0F, 0x80, 0x00, 0x7C, 0x00, 0x00,
  0x3F, 0x80, 0x07, 0xE0, 0x00, 0x00, 0x7F, 0x80, 0xFF, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x01,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0x80, 0x00, 0x00, 0x00,
  0xF3, 0xC0, 0x00, 0x00, 0x00, 0x7B, 0xE0, 0x00, 0x00, 0x00, 0x7D, 0xE0,
  0x00, 0x00, 0x00, 0x3C, 0xF0, 0x00, 0x00, 0x00, 0x3E, 0x78, 0x00, 0x00,
  0x00, 0x1E, 0x38, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00,
  0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00,
  0x03, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x07,
  0x80, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00,
  0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00,
  0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00,
  0x3E, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00,
  0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x03,
  0xC0, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00,
  0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x7C,
  0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00,
  0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xF0, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xC0, 0x3F, 0xC0, 0x00, 0x03, 0xF8, 0x00,
  0x3F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x3F, 0x00, 0x00, 0xF8, 0x00, 0x00,
  0x7C, 0x00, 0x07, 0xC0, 0x00, 0x00, 0xF8, 0x00, 0x3E, 0x00, 0x00, 0x01,
  0xE0, 0x01, 0xF0, 0x00, 0x00, 0x07, 0xC0, 0x07, 0x80, 0x00, 0x00, 0x1F,
  0x00, 0x3C, 0x00, 0x00, 0x00, 0x3C, 0x01, 0xF0, 0x00, 0x00, 0x00, 0xF0,
  0x07, 0x80, 0x00, 0x00, 0x03, 0xC0, 0x1E, 0x00, 0x00, 0x00, 0x0F, 0x00,
  0xF0, 0x00, 0x00, 0x00, 0x3C, 0x03, 0xC0, 0x00, 0x00, 0x00, 0xF0, 0x0F,
  0x00, 0x00, 0x00, 0x07, 0x80, 0x3C, 0x00, 0x00, 0x00, 0x1E, 0x00, 0xF0,
  0x00, 0x00, 0x00, 0x78, 0x03, 0xC0, 0x00, 0x00, 0x03, 0xC0, 0x0F, 0x00,
  0x00, 0x00, 0x1F, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x78, 0x00, 0x78, 0x00,
  0x00, 0x03, 0xC0, 0x01, 0xF0, 0x00, 0x00, 0x1E, 0x00, 0x03, 0xE0, 0x00,
  0x01, 0xF0, 0x00, 0x0F, 0xC0, 0x00, 0x0F, 0x80, 0x00, 0x1F, 0xC0, 0x00,
  0xFC, 0x00, 0x00, 0x3F, 0xC0, 0x1F, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFE,
  0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0xFE, 0x01, 0xFE, 0x00,
  0x00, 0x1F, 0xC0, 0x00, 0xFC, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00,
  0x07, 0xC0, 0x00, 0x01, 0xF0, 0x00, 0x3E, 0x00, 0x00, 0x03, 0xE0, 0x01,
  0xE0, 0x00, 0x00, 0x0F, 0x80, 0x0F, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x78,
  0x00, 0x00, 0x00, 0x7C, 0x01, 0xE0, 0x00, 0x00, 0x00, 0xF0, 0x0F, 0x00,
  0x00, 0x00, 0x03, 0xC0, 0x3C, 0x00, 0x00, 0x00, 0x0F, 0x01, 0xE0, 0x00,
  0x00, 0x00, 0x3C, 0x07, 0x80, 0x00, 0x00, 0x00, 0xF0, 0x1C, 0x00, 0x00,
  0x00, 0x03, 0xC0, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0x03, 0xC0, 0x00, 0x00,
  0x00, 0x78, 0x0F, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x3C, 0x00, 0x00, 0x00,
  0x07, 0x80, 0xF0, 0x00, 0x00, 0x00, 0x3C, 0x03, 0xC0, 0x00, 0x00, 0x00,
  0xF0, 0x0F, 0x00, 0x00, 0x00, 0x07, 0x80, 0x3E, 0x00, 0x00, 0x00, 0x3E,
  0x00, 0x78, 0x00, 0x00, 0x01, 0xF0, 0x01, 0xF0, 0x00, 0x00, 0x0F, 0x80,
  0x07, 0xE0, 0x00, 0x00, 0x7C, 0x00, 0x0F, 0x80, 0x00, 0x03, 0xE0, 0x00,
  0x1F, 0x80, 0x00, 0x3F, 0x00, 0x00, 0x7F, 0x00, 0x03, 0xF8, 0x00, 0x00,
  0xFF, 0x80, 0x7F, 0xC0, 0x00, 0x01, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x00, 0x03, 0xFC, 0x03, 0xFC, 0x00, 0x00,
  0x0F, 0xC0, 0x01, 0xFC, 0x00, 0x00, 0x3F, 0x00, 0x00, 0xF8, 0x00, 0x00,
  0xF8, 0x00, 0x00, 0xF8, 0x00, 0x03, 0xE0, 0x00, 0x00, 0xF8, 0x00, 0x0F,
  0x80, 0x00, 0x01, 0xF0, 0x00, 0x1E, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x78,
  0x00, 0x00, 0x03, 0xE0, 0x01, 0xF0, 0x00, 0x00, 0x03, 0xC0, 0x03, 0xC0,
  0x00, 0x00, 0x07, 0x80, 0x0F, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x1F, 0x00, 0x78, 0x00, 0x00, 0x00, 0x1E, 0x00, 0xF0, 0x00,
  0x00, 0x00, 0x3C, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x78, 0x03, 0x80, 0x00,
  0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x1E, 0x00, 0x00,
  0x00, 0x03, 0xC0, 0x3C, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x78, 0x00, 0x00,
  0x00, 0x3F, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x7E, 0x01, 0xE0, 0x00, 0x00,
  0x01, 0xFC, 0x03, 0xC0, 0x00, 0x00, 0x07, 0xF8, 0x07, 0x80, 0x00, 0x00,
  0x1F, 0xF0, 0x0F, 0x80, 0x00, 0x00, 0x7B, 0xC0, 0x0F, 0x00, 0x00, 0x01,
  0xF7, 0x80, 0x1F, 0x00, 0x00, 0x07, 0xCF, 0x00, 0x3E, 0x00, 0x00, 0x1F,
  0x1E, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x7C, 0x00, 0x7E, 0x00, 0x03, 0xF0,
  0xF0, 0x00, 0x7E, 0x00, 0x1F, 0xC1, 0xE0, 0x00, 0x7F, 0x00, 0xFE, 0x03,
  0xC0, 0x00, 0x7F, 0xFF, 0xF8, 0x0F, 0x80, 0x00, 0x7F, 0xFF, 0xC0, 0x1E,
  0x00, 0x00, 0x7F, 0xFE, 0x00, 0x7C, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x01,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x1C, 0x01, 0xFF,
  0xC0, 0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF0,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x3F, 0xF0, 0x00, 0xFF, 0xF0,
  0x03, 0xFF, 0xF0, 0x0F, 0xFF, 0xE0, 0x1F, 0xFF, 0xC0, 0x7F, 0xFF, 0x80,
  0xFF, 0xFF, 0x01, 0xFF, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xE0, 0x07,
  0xFF, 0x80, 0x07, 0xFE, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xF8, 0x00, 0x1F, 0xF8, 0x00, 0x7F, 0xF8, 0x01, 0xFF, 0xF8, 0x07, 0xFF,
  0xF0, 0x0F, 0xFF, 0xE0, 0x3F, 0xFF, 0xC0, 0x7F, 0xFF, 0x80, 0xFF, 0xFE,
  0x01, 0xFF, 0xFC, 0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xC0, 0x03, 0xFF, 0x00,
  0x03, 0xF8, 0x00, 0x00 };

const GFXglyph FreeMonoOblique54pt7bGlyphs[] PROGMEM = {
  {     0,  43,  67,  64,   17,  -64 },   // 0x30 '0'
  {   361,  40,  65,  64,   12,  -64 },   // 0x31 '1'
  {   686,  52,  65,  64,    8,  -64 },   // 0x32 '2'
  {  1109,  49,  67,  64,   12,  -64 },   // 0x33 '3'
  {  1520,  43,  64,  64,   15,  -63 },   // 0x34 '4'
  {  1864,  50,  66,  64,   12,  -63 },   // 0x35 '5'
  {  2277,  46,  67,  64,   20,  -64 },   // 0x36 '6'
  {  2663,  41,  64,  64,   23,  -63 },   // 0x37 '7'
  {  2991,  46,  67,  64,   15,  -64 },   // 0x38 '8'
  {  3377,  47,  67,  64,   15,  -64 },   // 0x39 '9'
  {  3771,  23,  46,  64,   25,  -43 } }; // 0x3A ':'

const GFXfont FreeMonoOblique54pt7b PROGMEM = {
  (uint8_t  *)FreeMonoOblique54pt7bBitmaps,
  (GFXglyph *)FreeMonoOblique54pt7bGlyphs,
  0x30, 0x3A, 106 };

// Approx. 3988 bytes

#endif // FreeMonoOblique54pt7b_H
