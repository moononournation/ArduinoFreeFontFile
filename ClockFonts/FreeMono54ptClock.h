#ifndef FreeMono54pt7b_H
#define FreeMono54pt7b_H

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

const uint8_t FreeMono54pt7bBitmaps[] PROGMEM = {
  0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x7F,
  0xFF, 0xC0, 0x00, 0x03, 0xFF, 0xFF, 0xE0, 0x00, 0x0F, 0xF0, 0x1F, 0xE0,
  0x00, 0x3F, 0x80, 0x0F, 0xE0, 0x00, 0xFC, 0x00, 0x07, 0xE0, 0x01, 0xF0,
  0x00, 0x07, 0xC0, 0x07, 0xC0, 0x00, 0x07, 0xC0, 0x1F, 0x00, 0x00, 0x07,
  0xC0, 0x3E, 0x00, 0x00, 0x0F, 0x80, 0xF8, 0x00, 0x00, 0x0F, 0x81, 0xF0,
  0x00, 0x00, 0x1F, 0x07, 0xC0, 0x00, 0x00, 0x1F, 0x0F, 0x80, 0x00, 0x00,
  0x3E, 0x1E, 0x00, 0x00, 0x00, 0x3C, 0x7C, 0x00, 0x00, 0x00, 0x7C, 0xF8,
  0x00, 0x00, 0x00, 0xF9, 0xE0, 0x00, 0x00, 0x00, 0xF3, 0xC0, 0x00, 0x00,
  0x01, 0xE7, 0x80, 0x00, 0x00, 0x03, 0xDF, 0x00, 0x00, 0x00, 0x07, 0xFC,
  0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00,
  0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x7F,
  0x80, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00,
  0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x0F,
  0xF0, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00,
  0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x01,
  0xFE, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00,
  0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00,
  0x3F, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0xFF, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x07, 0xDE, 0x00, 0x00, 0x00,
  0x0F, 0x3C, 0x00, 0x00, 0x00, 0x1E, 0x78, 0x00, 0x00, 0x00, 0x3C, 0xF0,
  0x00, 0x00, 0x00, 0xF9, 0xF0, 0x00, 0x00, 0x01, 0xF1, 0xE0, 0x00, 0x00,
  0x03, 0xC3, 0xE0, 0x00, 0x00, 0x0F, 0x87, 0xC0, 0x00, 0x00, 0x1F, 0x07,
  0xC0, 0x00, 0x00, 0x7C, 0x0F, 0x80, 0x00, 0x00, 0xF8, 0x0F, 0x80, 0x00,
  0x03, 0xE0, 0x1F, 0x00, 0x00, 0x07, 0xC0, 0x1F, 0x00, 0x00, 0x1F, 0x00,
  0x1F, 0x00, 0x00, 0x7C, 0x00, 0x3F, 0x00, 0x01, 0xF8, 0x00, 0x3F, 0x80,
  0x0F, 0xE0, 0x00, 0x3F, 0xC0, 0x7F, 0x80, 0x00, 0x3F, 0xFF, 0xFE, 0x00,
  0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x07,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00,
  0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFF, 0x00,
  0x00, 0x00, 0x1F, 0xDE, 0x00, 0x00, 0x00, 0x7F, 0x3C, 0x00, 0x00, 0x01,
  0xFC, 0x78, 0x00, 0x00, 0x07, 0xF0, 0xF0, 0x00, 0x00, 0x1F, 0xC1, 0xE0,
  0x00, 0x00, 0x7F, 0x03, 0xC0, 0x00, 0x01, 0xFC, 0x07, 0x80, 0x00, 0x07,
  0xF0, 0x0F, 0x00, 0x00, 0x1F, 0xC0, 0x1E, 0x00, 0x00, 0x3F, 0x00, 0x3C,
  0x00, 0x00, 0x7C, 0x00, 0x78, 0x00, 0x00, 0x70, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x07,
  0x80, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00,
  0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00,
  0xF0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00,
  0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
  0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00,
  0x03, 0xC0, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x00,
  0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00,
  0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xE0,
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00,
  0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x3C,
  0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x07,
  0x80, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00,
  0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00,
  0xF0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x7F, 0xC0,
  0x00, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x80, 0x00,
  0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x07, 0xF8, 0x07, 0xFC, 0x00, 0x07, 0xE0,
  0x00, 0x7F, 0x00, 0x07, 0xE0, 0x00, 0x0F, 0xC0, 0x07, 0xC0, 0x00, 0x03,
  0xF0, 0x07, 0xC0, 0x00, 0x00, 0xFC, 0x07, 0xC0, 0x00, 0x00, 0x3E, 0x07,
  0xC0, 0x00, 0x00, 0x0F, 0x83, 0xE0, 0x00, 0x00, 0x03, 0xC3, 0xE0, 0x00,
  0x00, 0x01, 0xF1, 0xF0, 0x00, 0x00, 0x00, 0x78, 0xF0, 0x00, 0x00, 0x00,
  0x3C, 0x78, 0x00, 0x00, 0x00, 0x1E, 0x38, 0x00, 0x00, 0x00, 0x0F, 0x80,
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00,
  0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x78, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00,
  0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80,
  0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00,
  0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F,
  0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00,
  0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80,
  0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00,
  0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F,
  0x80, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00,
  0x00, 0x0C, 0x1F, 0x00, 0x00, 0x00, 0x0F, 0x3F, 0x00, 0x00, 0x00, 0x07,
  0xBF, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00,
  0x01, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF0, 0x00, 0x01, 0xFF,
  0xFF, 0xFE, 0x00, 0x01, 0xFF, 0x00, 0x3F, 0xE0, 0x00, 0xFE, 0x00, 0x01,
  0xFC, 0x00, 0x7E, 0x00, 0x00, 0x3F, 0x80, 0x3F, 0x00, 0x00, 0x03, 0xE0,
  0x1F, 0x80, 0x00, 0x00, 0x7C, 0x07, 0xC0, 0x00, 0x00, 0x0F, 0x80, 0xE0,
  0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x80, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x3F,
  0xFF, 0x80, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7C,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x3C, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00,
  0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7C,
  0x40, 0x00, 0x00, 0x00, 0x1F, 0x3C, 0x00, 0x00, 0x00, 0x0F, 0x8F, 0x80,
  0x00, 0x00, 0x07, 0xC3, 0xF8, 0x00, 0x00, 0x07, 0xE0, 0x7F, 0x80, 0x00,
  0x03, 0xF8, 0x0F, 0xF8, 0x00, 0x03, 0xF8, 0x00, 0xFF, 0xE0, 0x07, 0xFC,
  0x00, 0x0F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0x07, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0x80, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x07, 0xFE,
  0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x7C, 0x78, 0x00, 0x00,
  0x00, 0xF8, 0xF0, 0x00, 0x00, 0x03, 0xE1, 0xE0, 0x00, 0x00, 0x07, 0x83,
  0xC0, 0x00, 0x00, 0x1F, 0x07, 0x80, 0x00, 0x00, 0x3C, 0x0F, 0x00, 0x00,
  0x00, 0xF8, 0x1E, 0x00, 0x00, 0x03, 0xE0, 0x3C, 0x00, 0x00, 0x07, 0xC0,
  0x78, 0x00, 0x00, 0x1F, 0x00, 0xF0, 0x00, 0x00, 0x3C, 0x01, 0xE0, 0x00,
  0x00, 0xF8, 0x03, 0xC0, 0x00, 0x03, 0xE0, 0x07, 0x80, 0x00, 0x07, 0xC0,
  0x0F, 0x00, 0x00, 0x1F, 0x00, 0x1E, 0x00, 0x00, 0x3C, 0x00, 0x3C, 0x00,
  0x00, 0xF8, 0x00, 0x78, 0x00, 0x01, 0xE0, 0x00, 0xF0, 0x00, 0x07, 0xC0,
  0x01, 0xE0, 0x00, 0x1F, 0x00, 0x03, 0xC0, 0x00, 0x3E, 0x00, 0x07, 0x80,
  0x00, 0xF8, 0x00, 0x0F, 0x00, 0x01, 0xE0, 0x00, 0x1E, 0x00, 0x07, 0xC0,
  0x00, 0x3C, 0x00, 0x1F, 0x00, 0x00, 0x78, 0x00, 0x3E, 0x00, 0x00, 0xF0,
  0x00, 0xF8, 0x00, 0x01, 0xE0, 0x01, 0xF0, 0x00, 0x03, 0xC0, 0x07, 0xC0,
  0x00, 0x07, 0x80, 0x0F, 0x00, 0x00, 0x0F, 0x00, 0x3E, 0x00, 0x00, 0x1E,
  0x00, 0xF8, 0x00, 0x00, 0x3C, 0x01, 0xF0, 0x00, 0x00, 0x78, 0x07, 0xC0,
  0x00, 0x00, 0xF0, 0x0F, 0x00, 0x00, 0x01, 0xE0, 0x3E, 0x00, 0x00, 0x03,
  0xC0, 0xF8, 0x00, 0x00, 0x07, 0x81, 0xF0, 0x00, 0x00, 0x0F, 0x03, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x01, 0xE0, 0x00,
  0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00,
  0x0F, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00,
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00,
  0x01, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x07, 0x80,
  0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,
  0x00, 0x3C, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xFF,
  0xC0, 0x00, 0x0F, 0xFF, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xFE, 0x03, 0xFF,
  0xFF, 0xFF, 0xF8, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF,
  0xFF, 0xF0, 0x01, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x3C, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x78,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00,
  0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x1E, 0x00, 0xFF, 0xC0, 0x00, 0x03, 0xC3, 0xFF, 0xFF, 0x00,
  0x00, 0x7B, 0xFF, 0xFF, 0xF8, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0x80, 0x01,
  0xFF, 0xE0, 0x07, 0xF8, 0x00, 0x3F, 0xE0, 0x00, 0x1F, 0x80, 0x07, 0xE0,
  0x00, 0x01, 0xF8, 0x00, 0x70, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00,
  0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00,
  0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1E,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0x1C, 0x00, 0x00, 0x00, 0x03, 0xE7, 0xC0, 0x00, 0x00, 0x00, 0xF8, 0xFC,
  0x00, 0x00, 0x00, 0x3E, 0x0F, 0xC0, 0x00, 0x00, 0x0F, 0xC0, 0xFE, 0x00,
  0x00, 0x03, 0xF0, 0x0F, 0xF0, 0x00, 0x00, 0xFC, 0x00, 0xFF, 0x80, 0x00,
  0x7F, 0x00, 0x07, 0xFE, 0x00, 0x7F, 0xC0, 0x00, 0x7F, 0xFF, 0xFF, 0xF0,
  0x00, 0x01, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00,
  0x03, 0xFF, 0xFC, 0x00, 0x00, 0x1F, 0xFF, 0xFE, 0x00, 0x00, 0x7F, 0xFF,
  0xFF, 0x00, 0x01, 0xFF, 0xE0, 0x0E, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xC0,
  0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
  0x00, 0xFC, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xF0,
  0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00,
  0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x1F,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00,
  0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00,
  0x3C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00,
  0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x3F, 0xC0,
  0x00, 0xF8, 0x01, 0xFF, 0xF8, 0x00, 0xF0, 0x07, 0xFF, 0xFE, 0x00, 0xF0,
  0x0F, 0xFF, 0xFF, 0x00, 0xF0, 0x3F, 0xE0, 0x3F, 0x80, 0xF0, 0x7F, 0x00,
  0x0F, 0xC0, 0xF0, 0xFE, 0x00, 0x03, 0xE0, 0xF0, 0xF8, 0x00, 0x01, 0xF0,
  0xF1, 0xF0, 0x00, 0x00, 0xF8, 0xF3, 0xE0, 0x00, 0x00, 0x78, 0xF7, 0xC0,
  0x00, 0x00, 0x7C, 0xF7, 0x80, 0x00, 0x00, 0x3C, 0xFF, 0x80, 0x00, 0x00,
  0x3E, 0xFF, 0x00, 0x00, 0x00, 0x1E, 0xFE, 0x00, 0x00, 0x00, 0x1E, 0xFE,
  0x00, 0x00, 0x00, 0x1F, 0x7C, 0x00, 0x00, 0x00, 0x0F, 0x78, 0x00, 0x00,
  0x00, 0x0F, 0x78, 0x00, 0x00, 0x00, 0x0F, 0x78, 0x00, 0x00, 0x00, 0x0F,
  0x78, 0x00, 0x00, 0x00, 0x0F, 0x3C, 0x00, 0x00, 0x00, 0x0F, 0x3C, 0x00,
  0x00, 0x00, 0x0F, 0x3C, 0x00, 0x00, 0x00, 0x0F, 0x1E, 0x00, 0x00, 0x00,
  0x1F, 0x1E, 0x00, 0x00, 0x00, 0x1E, 0x1F, 0x00, 0x00, 0x00, 0x1E, 0x0F,
  0x00, 0x00, 0x00, 0x3E, 0x0F, 0x80, 0x00, 0x00, 0x3C, 0x07, 0xC0, 0x00,
  0x00, 0x7C, 0x03, 0xC0, 0x00, 0x00, 0x78, 0x03, 0xE0, 0x00, 0x00, 0xF8,
  0x01, 0xF0, 0x00, 0x01, 0xF0, 0x00, 0xF8, 0x00, 0x03, 0xE0, 0x00, 0x7E,
  0x00, 0x0F, 0xC0, 0x00, 0x3F, 0xC0, 0x7F, 0x80, 0x00, 0x1F, 0xFF, 0xFF,
  0x00, 0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x7F, 0xC0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00,
  0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x3D,
  0xE0, 0x00, 0x00, 0x00, 0x79, 0x80, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00,
  0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x0F,
  0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00,
  0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x07,
  0x80, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00,
  0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x01,
  0xE0, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00,
  0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00,
  0xF0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00,
  0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00,
  0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00,
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00,
  0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00,
  0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00,
  0x03, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x1E, 0x00,
  0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x01, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x07, 0x80,
  0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00,
  0x00, 0x78, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xC0,
  0x00, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00,
  0x00, 0x0C, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xFF,
  0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00,
  0x1F, 0xE0, 0x1F, 0xF0, 0x00, 0x7F, 0x00, 0x07, 0xF0, 0x01, 0xF8, 0x00,
  0x03, 0xF0, 0x07, 0xE0, 0x00, 0x03, 0xF0, 0x0F, 0x80, 0x00, 0x03, 0xE0,
  0x3E, 0x00, 0x00, 0x03, 0xE0, 0xF8, 0x00, 0x00, 0x03, 0xE1, 0xE0, 0x00,
  0x00, 0x03, 0xC3, 0xC0, 0x00, 0x00, 0x07, 0x8F, 0x80, 0x00, 0x00, 0x0F,
  0x9E, 0x00, 0x00, 0x00, 0x0F, 0x3C, 0x00, 0x00, 0x00, 0x1E, 0x78, 0x00,
  0x00, 0x00, 0x3C, 0xF0, 0x00, 0x00, 0x00, 0x79, 0xE0, 0x00, 0x00, 0x00,
  0xF3, 0xC0, 0x00, 0x00, 0x01, 0xE7, 0x80, 0x00, 0x00, 0x03, 0xC7, 0x80,
  0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x1E, 0x1F, 0x00, 0x00, 0x00,
  0x7C, 0x1E, 0x00, 0x00, 0x00, 0xF0, 0x1E, 0x00, 0x00, 0x03, 0xC0, 0x3E,
  0x00, 0x00, 0x0F, 0x80, 0x3F, 0x00, 0x00, 0x7E, 0x00, 0x3F, 0x80, 0x03,
  0xF8, 0x00, 0x3F, 0xC0, 0x1F, 0xC0, 0x00, 0x1F, 0xFF, 0xFF, 0x00, 0x00,
  0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xFF,
  0xF8, 0x00, 0x07, 0xF8, 0x03, 0xFC, 0x00, 0x1F, 0x80, 0x00, 0xFC, 0x00,
  0x7E, 0x00, 0x00, 0xFC, 0x01, 0xF0, 0x00, 0x00, 0x7C, 0x07, 0xC0, 0x00,
  0x00, 0x7C, 0x1F, 0x00, 0x00, 0x00, 0x7C, 0x3C, 0x00, 0x00, 0x00, 0x78,
  0xF8, 0x00, 0x00, 0x00, 0xF9, 0xE0, 0x00, 0x00, 0x00, 0xF3, 0xC0, 0x00,
  0x00, 0x01, 0xEF, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x03,
  0xFC, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00,
  0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00,
  0x7F, 0x80, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x03, 0xEF, 0x00,
  0x00, 0x00, 0x07, 0x9E, 0x00, 0x00, 0x00, 0x0F, 0x3E, 0x00, 0x00, 0x00,
  0x3E, 0x3E, 0x00, 0x00, 0x00, 0xF8, 0x7C, 0x00, 0x00, 0x01, 0xF0, 0x7C,
  0x00, 0x00, 0x07, 0xC0, 0x7C, 0x00, 0x00, 0x1F, 0x00, 0x7E, 0x00, 0x00,
  0xFC, 0x00, 0x7F, 0x00, 0x07, 0xF0, 0x00, 0x7F, 0x80, 0x3F, 0xC0, 0x00,
  0x7F, 0xFF, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x1F, 0xFF,
  0xC0, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00,
  0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xFF, 0xF0, 0x00, 0x00, 0xFF,
  0xFF, 0xF8, 0x00, 0x01, 0xFE, 0x03, 0xFC, 0x00, 0x03, 0xF0, 0x00, 0x7E,
  0x00, 0x07, 0xE0, 0x00, 0x1F, 0x00, 0x0F, 0x80, 0x00, 0x0F, 0x80, 0x1F,
  0x00, 0x00, 0x07, 0xC0, 0x1E, 0x00, 0x00, 0x03, 0xC0, 0x3E, 0x00, 0x00,
  0x03, 0xE0, 0x3C, 0x00, 0x00, 0x01, 0xF0, 0x7C, 0x00, 0x00, 0x00, 0xF0,
  0x78, 0x00, 0x00, 0x00, 0xF8, 0x78, 0x00, 0x00, 0x00, 0x78, 0xF8, 0x00,
  0x00, 0x00, 0x78, 0xF0, 0x00, 0x00, 0x00, 0x3C, 0xF0, 0x00, 0x00, 0x00,
  0x3C, 0xF0, 0x00, 0x00, 0x00, 0x3C, 0xF0, 0x00, 0x00, 0x00, 0x1E, 0xF0,
  0x00, 0x00, 0x00, 0x1E, 0xF0, 0x00, 0x00, 0x00, 0x1E, 0xF0, 0x00, 0x00,
  0x00, 0x1E, 0xF0, 0x00, 0x00, 0x00, 0x3E, 0xF0, 0x00, 0x00, 0x00, 0x7F,
  0x78, 0x00, 0x00, 0x00, 0x7F, 0x78, 0x00, 0x00, 0x00, 0xFF, 0x7C, 0x00,
  0x00, 0x01, 0xFF, 0x3C, 0x00, 0x00, 0x01, 0xEF, 0x3E, 0x00, 0x00, 0x03,
  0xCF, 0x1E, 0x00, 0x00, 0x07, 0xCF, 0x1F, 0x00, 0x00, 0x0F, 0x8F, 0x0F,
  0x80, 0x00, 0x1F, 0x0F, 0x07, 0xC0, 0x00, 0x7F, 0x0F, 0x03, 0xF0, 0x00,
  0xFE, 0x0F, 0x03, 0xFC, 0x07, 0xFC, 0x0F, 0x00, 0xFF, 0xFF, 0xF0, 0x0F,
  0x00, 0x7F, 0xFF, 0xE0, 0x0F, 0x00, 0x1F, 0xFF, 0x80, 0x1F, 0x00, 0x03,
  0xFC, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00,
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00,
  0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00,
  0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8,
  0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00,
  0x00, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x0F,
  0xC0, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x01,
  0xFC, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00,
  0x00, 0x00, 0x7F, 0xC0, 0x00, 0x70, 0x07, 0xFF, 0x00, 0x00, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00,
  0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x3F, 0xE0, 0xFF, 0xE3,
  0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFD, 0xFF, 0xF1, 0xFF, 0xC1, 0xFF, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x3F, 0xE0, 0xFF, 0xE3,
  0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFD, 0xFF, 0xF1, 0xFF, 0xC1, 0xFF, 0x01, 0xFC, 0x00 };

const GFXglyph FreeMono54pt7bGlyphs[] PROGMEM = {
  {     0,  39,  67,  64,   12,  -64 },   // 0x30 '0'
  {   327,  39,  65,  64,   12,  -64 },   // 0x31 '1'
  {   644,  41,  65,  64,    9,  -64 },   // 0x32 '2'
  {   978,  42,  67,  64,   11,  -64 },   // 0x33 '3'
  {  1330,  39,  64,  64,   11,  -63 },   // 0x34 '4'
  {  1642,  43,  66,  64,   10,  -63 },   // 0x35 '5'
  {  1997,  40,  67,  64,   14,  -64 },   // 0x36 '6'
  {  2332,  39,  64,  64,   11,  -63 },   // 0x37 '7'
  {  2644,  39,  67,  64,   12,  -64 },   // 0x38 '8'
  {  2971,  40,  67,  64,   14,  -64 },   // 0x39 '9'
  {  3306,  15,  46,  64,   24,  -43 } }; // 0x3A ':'

const GFXfont FreeMono54pt7b PROGMEM = {
  (uint8_t  *)FreeMono54pt7bBitmaps,
  (GFXglyph *)FreeMono54pt7bGlyphs,
  0x30, 0x3A, 106 };

// Approx. 3477 bytes

#endif // FreeMono54pt7b_H
