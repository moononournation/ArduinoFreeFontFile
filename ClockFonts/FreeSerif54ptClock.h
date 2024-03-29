#ifndef FreeSerif54pt7b_H
#define FreeSerif54pt7b_H

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

const uint8_t FreeSerif54pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xC1, 0xFF, 0x00, 0x00,
  0x01, 0xFC, 0x00, 0xFF, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x7F, 0x00, 0x00,
  0x1F, 0xC0, 0x00, 0x7F, 0x00, 0x00, 0x7F, 0x00, 0x00, 0xFF, 0x00, 0x00,
  0xFE, 0x00, 0x00, 0xFE, 0x00, 0x03, 0xF8, 0x00, 0x00, 0xFE, 0x00, 0x0F,
  0xF0, 0x00, 0x01, 0xFE, 0x00, 0x1F, 0xC0, 0x00, 0x03, 0xFC, 0x00, 0x7F,
  0x80, 0x00, 0x03, 0xFC, 0x00, 0xFF, 0x00, 0x00, 0x07, 0xF8, 0x03, 0xFC,
  0x00, 0x00, 0x07, 0xF8, 0x07, 0xF8, 0x00, 0x00, 0x0F, 0xF0, 0x1F, 0xF0,
  0x00, 0x00, 0x1F, 0xF0, 0x3F, 0xE0, 0x00, 0x00, 0x3F, 0xE0, 0x7F, 0x80,
  0x00, 0x00, 0x7F, 0xC1, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xC3, 0xFE, 0x00,
  0x00, 0x00, 0xFF, 0x87, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0x1F, 0xF8, 0x00,
  0x00, 0x03, 0xFF, 0x3F, 0xF0, 0x00, 0x00, 0x07, 0xFE, 0x7F, 0xE0, 0x00,
  0x00, 0x0F, 0xFC, 0xFF, 0x80, 0x00, 0x00, 0x1F, 0xF9, 0xFF, 0x00, 0x00,
  0x00, 0x1F, 0xF3, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xEF, 0xFC, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
  0x01, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00,
  0x7F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07,
  0xFF, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F,
  0xFF, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F,
  0xEF, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0x9F, 0xF0, 0x00, 0x00, 0x01, 0xFF,
  0x3F, 0xE0, 0x00, 0x00, 0x03, 0xFE, 0x7F, 0xC0, 0x00, 0x00, 0x0F, 0xFC,
  0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xF8, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xF1,
  0xFF, 0x00, 0x00, 0x00, 0x7F, 0xC3, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0x87,
  0xFC, 0x00, 0x00, 0x01, 0xFF, 0x07, 0xF8, 0x00, 0x00, 0x03, 0xFC, 0x0F,
  0xF8, 0x00, 0x00, 0x0F, 0xF8, 0x1F, 0xF0, 0x00, 0x00, 0x1F, 0xF0, 0x1F,
  0xE0, 0x00, 0x00, 0x3F, 0xC0, 0x3F, 0xC0, 0x00, 0x00, 0x7F, 0x80, 0x3F,
  0xC0, 0x00, 0x01, 0xFE, 0x00, 0x7F, 0x80, 0x00, 0x03, 0xFC, 0x00, 0x7F,
  0x00, 0x00, 0x07, 0xF0, 0x00, 0xFF, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0xFE,
  0x00, 0x00, 0x3F, 0x80, 0x00, 0xFE, 0x00, 0x00, 0xFE, 0x00, 0x01, 0xFC,
  0x00, 0x01, 0xFC, 0x00, 0x01, 0xFC, 0x00, 0x07, 0xF0, 0x00, 0x01, 0xFC,
  0x00, 0x1F, 0xC0, 0x00, 0x01, 0xFC, 0x00, 0x7F, 0x00, 0x00, 0x00, 0xFE,
  0x03, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x7F,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x30,
  0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x03, 0xFC, 0x00,
  0x00, 0x3F, 0xF0, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0x00, 0x03,
  0xFF, 0xFC, 0x00, 0x3F, 0xFF, 0xF0, 0x03, 0xC0, 0xFF, 0xC0, 0x0C, 0x03,
  0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x7F,
  0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00,
  0x00, 0x1F, 0xF0, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00,
  0x07, 0xFC, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01,
  0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x7F,
  0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00,
  0x00, 0x1F, 0xF0, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00,
  0x07, 0xFC, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01,
  0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x7F,
  0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00,
  0x00, 0x1F, 0xF0, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00,
  0x07, 0xFC, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01,
  0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x7F,
  0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x00, 0x7F, 0xC0, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x0F, 0xFE, 0x00,
  0x00, 0x7F, 0xFC, 0x00, 0x0F, 0xFF, 0xFC, 0x07, 0xFF, 0xFF, 0xFF, 0xC0,
  0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x07,
  0xFC, 0x03, 0xFF, 0xFE, 0x00, 0x0F, 0xC0, 0x00, 0xFF, 0xFE, 0x00, 0x3E,
  0x00, 0x00, 0x7F, 0xFC, 0x00, 0xF8, 0x00, 0x00, 0x7F, 0xFC, 0x01, 0xE0,
  0x00, 0x00, 0x7F, 0xF8, 0x07, 0x80, 0x00, 0x00, 0x7F, 0xF0, 0x0F, 0x00,
  0x00, 0x00, 0x7F, 0xE0, 0x1C, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x78, 0x00,
  0x00, 0x00, 0xFF, 0xC0, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0x81, 0xC0, 0x00,
  0x00, 0x03, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x0E, 0x00, 0x00,
  0x00, 0x07, 0xFC, 0x08, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0x00, 0x00, 0x00, 0x04, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x18, 0x00,
  0xF0, 0x00, 0x00, 0x00, 0x70, 0x03, 0xC0, 0x00, 0x00, 0x00, 0xC0, 0x0F,
  0x00, 0x00, 0x00, 0x03, 0x80, 0x3C, 0x00, 0x00, 0x00, 0x0E, 0x00, 0xF0,
  0x00, 0x00, 0x00, 0x7C, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFC, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0xFF,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFE, 0x00,
  0x00, 0x7F, 0xFF, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0x1F,
  0xC0, 0x3F, 0xFF, 0x00, 0x0F, 0xC0, 0x01, 0xFF, 0xC0, 0x07, 0xC0, 0x00,
  0x3F, 0xF8, 0x01, 0xE0, 0x00, 0x07, 0xFE, 0x00, 0xE0, 0x00, 0x00, 0xFF,
  0xC0, 0x78, 0x00, 0x00, 0x1F, 0xF0, 0x1C, 0x00, 0x00, 0x07, 0xFC, 0x0E,
  0x00, 0x00, 0x01, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x3F, 0xC1, 0xC0, 0x00,
  0x00, 0x0F, 0xF0, 0x60, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x0F, 0xE0,
  0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00,
  0x1F, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x3F, 0xFF,
  0xFC, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xFF, 0xF0,
  0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xC0, 0x00,
  0x00, 0x03, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x1F,
  0xFC, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00,
  0x0F, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00,
  0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x07,
  0xE0, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0xF8, 0x00,
  0x00, 0x0F, 0xC0, 0x7F, 0xC0, 0x00, 0x07, 0xE0, 0x3F, 0xFC, 0x00, 0x03,
  0xE0, 0x0F, 0xFF, 0xC0, 0x03, 0xF0, 0x01, 0xFF, 0xFE, 0x03, 0xF0, 0x00,
  0x7F, 0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0xFF,
  0xFF, 0xF0, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x77, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0xF7, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xE7, 0xF8, 0x00, 0x00, 0x00, 0x03,
  0xC7, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xC7, 0xF8, 0x00, 0x00, 0x00, 0x07,
  0x87, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x0F,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x1E, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x3C,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x38, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x78,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0xF0, 0x07, 0xF8, 0x00, 0x00, 0x00, 0xE0,
  0x07, 0xF8, 0x00, 0x00, 0x01, 0xE0, 0x07, 0xF8, 0x00, 0x00, 0x03, 0xC0,
  0x07, 0xF8, 0x00, 0x00, 0x07, 0x80, 0x07, 0xF8, 0x00, 0x00, 0x07, 0x80,
  0x07, 0xF8, 0x00, 0x00, 0x0F, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x1E, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x1C, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x3C, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x78, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x70, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0xF0, 0x00, 0x07, 0xF8, 0x00, 0x01, 0xE0, 0x00,
  0x07, 0xF8, 0x00, 0x01, 0xC0, 0x00, 0x07, 0xF8, 0x00, 0x03, 0xC0, 0x00,
  0x07, 0xF8, 0x00, 0x07, 0x80, 0x00, 0x07, 0xF8, 0x00, 0x0F, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x0E, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x1E, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x3C, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x38, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x78, 0x00, 0x00, 0x07, 0xF8, 0x00, 0xF0, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00,
  0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x0F, 0xFF, 0xFF, 0xFE,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x80, 0x01, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x7F, 0xFF, 0xFF, 0xF0, 0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0x0F, 0xFF,
  0xFF, 0xFE, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF,
  0xC0, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00,
  0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x7F,
  0xFF, 0x80, 0x00, 0x00, 0x1F, 0xFF, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0xFF,
  0xC0, 0x00, 0x03, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0,
  0x00, 0x7F, 0xFF, 0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
  0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3F, 0xFF, 0xFE, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0xFF, 0xF8,
  0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x0F,
  0xF8, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80,
  0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00,
  0x0F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00,
  0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x07,
  0xE0, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00,
  0x00, 0x07, 0xC0, 0x7E, 0x00, 0x00, 0x03, 0xF0, 0x3F, 0xE0, 0x00, 0x01,
  0xF8, 0x0F, 0xFE, 0x00, 0x00, 0xFC, 0x03, 0xFF, 0xE0, 0x00, 0x7E, 0x00,
  0xFF, 0xFC, 0x00, 0x7E, 0x00, 0x3F, 0xFF, 0xE0, 0x7F, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xFE,
  0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xC0, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80,
  0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00,
  0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00,
  0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x01, 0xFF, 0x80,
  0x00, 0x3F, 0xF8, 0x1F, 0xFF, 0xC0, 0x00, 0xFF, 0xE1, 0xFF, 0xFF, 0xC0,
  0x03, 0xFF, 0x9F, 0xFF, 0xFF, 0xC0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
  0x7F, 0xFF, 0x80, 0x3F, 0xFF, 0x01, 0xFF, 0xF0, 0x00, 0x3F, 0xFE, 0x07,
  0xFF, 0x80, 0x00, 0x3F, 0xFC, 0x1F, 0xFC, 0x00, 0x00, 0x7F, 0xF8, 0xFF,
  0xF0, 0x00, 0x00, 0xFF, 0xE3, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xCF, 0xFE,
  0x00, 0x00, 0x07, 0xFF, 0x3F, 0xF0, 0x00, 0x00, 0x0F, 0xFE, 0xFF, 0xC0,
  0x00, 0x00, 0x3F, 0xFB, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xEF, 0xFC, 0x00,
  0x00, 0x01, 0xFF, 0xBF, 0xF0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0x1F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xF7, 0xFC, 0x00, 0x00, 0x00,
  0xFF, 0xDF, 0xF0, 0x00, 0x00, 0x03, 0xFF, 0x7F, 0xE0, 0x00, 0x00, 0x0F,
  0xFD, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xF7, 0xFE, 0x00, 0x00, 0x00, 0xFF,
  0xCF, 0xF8, 0x00, 0x00, 0x03, 0xFE, 0x3F, 0xE0, 0x00, 0x00, 0x0F, 0xF8,
  0xFF, 0xC0, 0x00, 0x00, 0x3F, 0xE1, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x07,
  0xFC, 0x00, 0x00, 0x07, 0xFC, 0x0F, 0xF8, 0x00, 0x00, 0x1F, 0xF0, 0x3F,
  0xE0, 0x00, 0x00, 0x7F, 0x80, 0x7F, 0xC0, 0x00, 0x03, 0xFE, 0x00, 0xFF,
  0x00, 0x00, 0x0F, 0xF0, 0x03, 0xFE, 0x00, 0x00, 0x3F, 0x80, 0x07, 0xFC,
  0x00, 0x01, 0xFC, 0x00, 0x0F, 0xF0, 0x00, 0x0F, 0xF0, 0x00, 0x1F, 0xF0,
  0x00, 0x7F, 0x00, 0x00, 0x3F, 0xE0, 0x03, 0xF8, 0x00, 0x00, 0x3F, 0xE0,
  0x3F, 0xC0, 0x00, 0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF8, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFE, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC3,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x1F, 0xC0, 0x00, 0x00, 0x07, 0xE1, 0xF8,
  0x00, 0x00, 0x00, 0x3F, 0x0F, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x70, 0x00,
  0x00, 0x00, 0x1F, 0x87, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x38, 0x00, 0x00,
  0x00, 0x0F, 0xE3, 0x80, 0x00, 0x00, 0x00, 0x7E, 0x18, 0x00, 0x00, 0x00,
  0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x01,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
  0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80,
  0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0x80, 0x00, 0x1F, 0xE0, 0x1F, 0xF0, 0x00, 0x1F, 0xC0, 0x03,
  0xFC, 0x00, 0x1F, 0x80, 0x00, 0x7F, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0xC0,
  0x1F, 0x80, 0x00, 0x07, 0xF0, 0x1F, 0xC0, 0x00, 0x03, 0xF8, 0x1F, 0xC0,
  0x00, 0x00, 0xFE, 0x0F, 0xE0, 0x00, 0x00, 0x7F, 0x0F, 0xF0, 0x00, 0x00,
  0x1F, 0xC7, 0xF0, 0x00, 0x00, 0x0F, 0xE3, 0xF8, 0x00, 0x00, 0x07, 0xF1,
  0xFC, 0x00, 0x00, 0x03, 0xF8, 0xFF, 0x00, 0x00, 0x01, 0xFC, 0x7F, 0x80,
  0x00, 0x00, 0xFE, 0x3F, 0xC0, 0x00, 0x00, 0x7F, 0x1F, 0xF0, 0x00, 0x00,
  0x3F, 0x8F, 0xF8, 0x00, 0x00, 0x3F, 0x87, 0xFE, 0x00, 0x00, 0x1F, 0xC3,
  0xFF, 0x00, 0x00, 0x0F, 0xE0, 0xFF, 0xC0, 0x00, 0x0F, 0xE0, 0x7F, 0xF0,
  0x00, 0x0F, 0xE0, 0x3F, 0xFC, 0x00, 0x07, 0xF0, 0x0F, 0xFF, 0x00, 0x07,
  0xF0, 0x03, 0xFF, 0xC0, 0x07, 0xF0, 0x00, 0xFF, 0xF8, 0x07, 0xE0, 0x00,
  0x7F, 0xFE, 0x07, 0xE0, 0x00, 0x1F, 0xFF, 0xCF, 0xE0, 0x00, 0x07, 0xFF,
  0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xFF, 0x80,
  0x00, 0x00, 0x0F, 0xFF, 0xF0, 0x00, 0x00, 0x03, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x7F,
  0xFF, 0xF0, 0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x7C, 0x7F, 0xFF,
  0x80, 0x00, 0x7C, 0x1F, 0xFF, 0xE0, 0x00, 0xFC, 0x03, 0xFF, 0xF8, 0x00,
  0xFC, 0x00, 0xFF, 0xFC, 0x00, 0xFC, 0x00, 0x1F, 0xFF, 0x00, 0xFE, 0x00,
  0x07, 0xFF, 0xC0, 0xFE, 0x00, 0x01, 0xFF, 0xE0, 0x7F, 0x00, 0x00, 0x7F,
  0xF8, 0x7F, 0x00, 0x00, 0x1F, 0xFC, 0x7F, 0x80, 0x00, 0x07, 0xFF, 0x3F,
  0xC0, 0x00, 0x01, 0xFF, 0x9F, 0xC0, 0x00, 0x00, 0x7F, 0xDF, 0xE0, 0x00,
  0x00, 0x3F, 0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x07,
  0xFF, 0xFC, 0x00, 0x00, 0x03, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x7F, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00,
  0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xF7, 0xF8, 0x00, 0x00, 0x07,
  0xF3, 0xFC, 0x00, 0x00, 0x03, 0xF9, 0xFF, 0x00, 0x00, 0x03, 0xFC, 0x7F,
  0x80, 0x00, 0x01, 0xFC, 0x3F, 0xE0, 0x00, 0x00, 0xFC, 0x0F, 0xF8, 0x00,
  0x00, 0xFE, 0x03, 0xFC, 0x00, 0x00, 0xFE, 0x00, 0xFF, 0x80, 0x00, 0xFE,
  0x00, 0x3F, 0xE0, 0x00, 0xFE, 0x00, 0x0F, 0xFE, 0x03, 0xFE, 0x00, 0x01,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x01, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xF0, 0x1F,
  0xF0, 0x00, 0x00, 0x7F, 0x00, 0x1F, 0xE0, 0x00, 0x03, 0xF8, 0x00, 0x3F,
  0xE0, 0x00, 0x1F, 0xC0, 0x00, 0x7F, 0xC0, 0x00, 0xFE, 0x00, 0x00, 0xFF,
  0x80, 0x07, 0xF8, 0x00, 0x01, 0xFE, 0x00, 0x3F, 0xC0, 0x00, 0x07, 0xFC,
  0x00, 0xFF, 0x00, 0x00, 0x0F, 0xF8, 0x07, 0xF8, 0x00, 0x00, 0x3F, 0xE0,
  0x1F, 0xE0, 0x00, 0x00, 0x7F, 0xC0, 0xFF, 0x80, 0x00, 0x01, 0xFF, 0x83,
  0xFE, 0x00, 0x00, 0x07, 0xFE, 0x1F, 0xF0, 0x00, 0x00, 0x0F, 0xF8, 0x7F,
  0xC0, 0x00, 0x00, 0x3F, 0xF1, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xC7, 0xFC,
  0x00, 0x00, 0x03, 0xFF, 0x3F, 0xF0, 0x00, 0x00, 0x0F, 0xFE, 0xFF, 0xC0,
  0x00, 0x00, 0x3F, 0xFB, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xEF, 0xFC, 0x00,
  0x00, 0x01, 0xFF, 0xBF, 0xF0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0x1F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x00,
  0x01, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x1F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x01,
  0xFF, 0xDF, 0xF8, 0x00, 0x00, 0x07, 0xFF, 0x7F, 0xF0, 0x00, 0x00, 0x1F,
  0xFD, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xF7, 0xFF, 0x00, 0x00, 0x01, 0xFF,
  0xCF, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0x3F, 0xFC, 0x00, 0x00, 0x3F, 0xFC,
  0x7F, 0xF0, 0x00, 0x00, 0xFF, 0xE1, 0xFF, 0xE0, 0x00, 0x07, 0xFF, 0x83,
  0xFF, 0xC0, 0x00, 0x3F, 0xFE, 0x07, 0xFF, 0x80, 0x03, 0xFF, 0xF8, 0x0F,
  0xFF, 0xC0, 0x7F, 0x7F, 0xE0, 0x1F, 0xFF, 0xFF, 0xF3, 0xFF, 0x00, 0x3F,
  0xFF, 0xFF, 0x8F, 0xFC, 0x00, 0x7F, 0xFF, 0xF8, 0x3F, 0xF0, 0x00, 0x7F,
  0xFF, 0x81, 0xFF, 0x80, 0x00, 0x1F, 0xF0, 0x07, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00,
  0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x03,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFC,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x07, 0xF1,
  0xFF, 0x3F, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xF8, 0xFE,
  0x0F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xC1, 0xFC, 0x7F, 0xCF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFB, 0xFE, 0x3F, 0x83, 0xE0 };

const GFXglyph FreeSerif54pt7bGlyphs[] PROGMEM = {
  {     0,  47,  73,  53,    3,  -71 },   // 0x30 '0'
  {   429,  30,  71,  53,   12,  -70 },   // 0x31 '1'
  {   696,  47,  72,  53,    3,  -71 },   // 0x32 '2'
  {  1119,  42,  72,  53,    4,  -70 },   // 0x33 '3'
  {  1497,  48,  71,  53,    2,  -70 },   // 0x34 '4'
  {  1923,  42,  74,  53,    4,  -72 },   // 0x35 '5'
  {  2312,  46,  73,  53,    4,  -71 },   // 0x36 '6'
  {  2732,  45,  71,  53,    2,  -69 },   // 0x37 '7'
  {  3132,  41,  73,  53,    6,  -71 },   // 0x38 '8'
  {  3507,  46,  74,  53,    3,  -71 },   // 0x39 '9'
  {  3933,  11,  50,  27,    8,  -48 } }; // 0x3A ':'

const GFXfont FreeSerif54pt7b PROGMEM = {
  (uint8_t  *)FreeSerif54pt7bBitmaps,
  (GFXglyph *)FreeSerif54pt7bGlyphs,
  0x30, 0x3A, 127 };

// Approx. 4086 bytes

#endif // FreeSerif54pt7b_H
