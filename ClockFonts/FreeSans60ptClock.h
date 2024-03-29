#ifndef FreeSans60pt7b_H
#define FreeSans60pt7b_H

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

const uint8_t FreeSans60pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFE, 0x00,
  0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF,
  0xFC, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x07, 0xFF, 0xFC,
  0x07, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xC0, 0x01, 0xFF, 0xF8, 0x00, 0x3F,
  0xFF, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x7F, 0xFC, 0x00, 0x01, 0xFF, 0xF0,
  0x01, 0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xC0, 0x00, 0x01,
  0xFF, 0xE0, 0x0F, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x1F, 0xFE, 0x00,
  0x00, 0x03, 0xFF, 0xC0, 0x3F, 0xF8, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0xFF,
  0xF0, 0x00, 0x00, 0x07, 0xFF, 0x81, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF,
  0x03, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFE, 0x0F, 0xFF, 0x00, 0x00, 0x00,
  0x1F, 0xFE, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x3F, 0xF8, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0xF1, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x7F, 0xF3, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF,
  0xE7, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xCF, 0xFE, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0x9F, 0xFC, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x3F, 0xF8, 0x00,
  0x00, 0x00, 0x0F, 0xFE, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFD, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x1F,
  0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFC, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xBF, 0xF8, 0x00, 0x00, 0x00, 0x0F,
  0xFE, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x3F, 0xF9, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0xF3, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0xFF, 0xE7, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC7,
  0xFF, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x0F,
  0xFE, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x3F, 0xF8, 0x00, 0x00,
  0x00, 0x3F, 0xF8, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x7F, 0xF0,
  0x00, 0x00, 0x01, 0xFF, 0xC0, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0x81,
  0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x1F,
  0xFC, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xF8, 0x03, 0xFF, 0x80, 0x00,
  0x00, 0xFF, 0xE0, 0x07, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xC0, 0x07, 0xFF,
  0x80, 0x00, 0x0F, 0xFF, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x3F, 0xFE, 0x00,
  0x0F, 0xFF, 0x80, 0x00, 0xFF, 0xF8, 0x00, 0x1F, 0xFF, 0x80, 0x03, 0xFF,
  0xF0, 0x00, 0x1F, 0xFF, 0xE0, 0x3F, 0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x1F,
  0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFC,
  0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xF0, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x03, 0xFF, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0x0F, 0xFF, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x3F, 0xFF,
  0x00, 0x1F, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
  0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07,
  0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0,
  0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF,
  0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00,
  0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F,
  0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00,
  0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07,
  0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0,
  0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF,
  0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00,
  0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F,
  0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00,
  0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07,
  0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0,
  0x00, 0x07, 0xFF, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00,
  0x7F, 0xF0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFF,
  0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xC0, 0x07, 0xFF, 0xFE, 0x00, 0xFF, 0xFF, 0xE0, 0x0F, 0xFF,
  0xF0, 0x00, 0x1F, 0xFF, 0xF0, 0x0F, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xF0,
  0x1F, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xF8, 0x1F, 0xFF, 0x00, 0x00, 0x01,
  0xFF, 0xF8, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x3F, 0xFC, 0x00,
  0x00, 0x00, 0x7F, 0xFC, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x7F,
  0xF8, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x1F,
  0xFE, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x7F, 0xF0, 0x00, 0x00,
  0x00, 0x1F, 0xFE, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFE, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF,
  0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF,
  0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00,
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x01, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0x00, 0x7F, 0xFF, 0xE0, 0x07, 0xFF,
  0xF0, 0x00, 0x0F, 0xFF, 0xE0, 0x07, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xF0,
  0x0F, 0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xF0, 0x0F, 0xFF, 0x80, 0x00, 0x00,
  0xFF, 0xF8, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x1F, 0xFE, 0x00,
  0x00, 0x00, 0x7F, 0xF8, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x1F,
  0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x1F,
  0xFC, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x3F, 0xFC, 0x00, 0x00,
  0x00, 0x1F, 0xFC, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x3F, 0xF8,
  0x00, 0x00, 0x00, 0x1F, 0xFC, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFC,
  0x3F, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x3F, 0xF8, 0x00, 0x00, 0x00,
  0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF,
  0xFC, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x7F,
  0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x0F,
  0xFE, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x3F, 0xF8, 0x00, 0x00,
  0x00, 0x1F, 0xFE, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x3F, 0xFE,
  0x00, 0x00, 0x00, 0x3F, 0xFC, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFC,
  0x1F, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xF8, 0x0F, 0xFF, 0xC0, 0x00, 0x03,
  0xFF, 0xF8, 0x0F, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xF0, 0x07, 0xFF, 0xFE,
  0x00, 0x7F, 0xFF, 0xE0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x03,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFC, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xBF, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xBF, 0xF8, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x3F, 0xF8, 0x00,
  0x00, 0x00, 0x07, 0xFC, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x3F,
  0xF8, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x1F,
  0xF0, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x3F, 0xF8, 0x00, 0x00,
  0x00, 0x7F, 0xE0, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x3F, 0xF8,
  0x00, 0x00, 0x00, 0xFF, 0x80, 0x3F, 0xF8, 0x00, 0x00, 0x01, 0xFF, 0x80,
  0x3F, 0xF8, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x03,
  0xFE, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x3F, 0xF8, 0x00,
  0x00, 0x07, 0xFC, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x3F,
  0xF8, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x3F, 0xF0,
  0x00, 0x3F, 0xF8, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x3F, 0xF8, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x3F, 0xF8,
  0x00, 0x00, 0xFF, 0x80, 0x00, 0x3F, 0xF8, 0x00, 0x01, 0xFF, 0x00, 0x00,
  0x3F, 0xF8, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x03, 0xFE,
  0x00, 0x00, 0x3F, 0xF8, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x3F, 0xF8, 0x00,
  0x0F, 0xF8, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x3F,
  0xF8, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x3F, 0xE0, 0x00,
  0x00, 0x3F, 0xF8, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x7F,
  0xC0, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xF8,
  0x00, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xF8, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC0, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF8, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0,
  0x07, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x3F, 0xFF, 0xF0, 0x00, 0x00,
  0x1F, 0xF8, 0x7F, 0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFC, 0x7F, 0xFF, 0xFF,
  0xE0, 0x00, 0x0F, 0xFC, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x07, 0xFE, 0xFF,
  0xFF, 0xFF, 0xFF, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x01,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFC, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x7F, 0xFF, 0xF0,
  0x03, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xC0, 0x00, 0x3F, 0xFF, 0xE0, 0x1F,
  0xFF, 0x80, 0x00, 0x07, 0xFF, 0xF8, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0xFF,
  0xFC, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x03, 0xFE, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xFE, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x7F, 0xE0, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xBF, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xDF,
  0xFC, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC7, 0xFF, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xE3, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xF1, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0xFF, 0xF0, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x3F,
  0xFE, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0xFF,
  0xFC, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFC, 0x01, 0xFF, 0xFC, 0x00,
  0x01, 0xFF, 0xFC, 0x00, 0xFF, 0xFF, 0xC0, 0x0F, 0xFF, 0xFE, 0x00, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0x80,
  0x7F, 0xFF, 0xC0, 0x00, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xE0, 0x01, 0xFF,
  0xF8, 0x00, 0x03, 0xFF, 0xE0, 0x01, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xF0,
  0x03, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xF0, 0x03, 0xFF, 0x80, 0x00, 0x00,
  0x7F, 0xF8, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x07, 0xFF, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x0F,
  0xFE, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x1F,
  0xFC, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x1F, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xE0, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x7F, 0xE0, 0x07, 0xFF, 0xFE, 0x00,
  0x00, 0x7F, 0xE0, 0x1F, 0xFF, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x7F, 0xFF,
  0xFF, 0xF0, 0x00, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0xE3,
  0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
  0xFF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xCF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF,
  0x00, 0x7F, 0xFF, 0xE0, 0xFF, 0xFF, 0xF8, 0x00, 0x0F, 0xFF, 0xF0, 0xFF,
  0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xF0, 0xFF, 0xFF, 0x80, 0x00, 0x01, 0xFF,
  0xF8, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0xFF, 0xFE, 0x00, 0x00,
  0x00, 0x7F, 0xFC, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0xFF, 0xFC,
  0x00, 0x00, 0x00, 0x3F, 0xFE, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFE,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x0F, 0xFE, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x7F, 0xE0, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x7F, 0xE0,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0x7F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x3F, 0xF0, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x3F, 0xF0, 0x00,
  0x00, 0x00, 0x0F, 0xFE, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x1F,
  0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x1F,
  0xFC, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x0F, 0xFE, 0x00, 0x00,
  0x00, 0x7F, 0xFC, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x07, 0xFF,
  0x80, 0x00, 0x00, 0xFF, 0xF8, 0x07, 0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xF0,
  0x03, 0xFF, 0xE0, 0x00, 0x07, 0xFF, 0xF0, 0x03, 0xFF, 0xF8, 0x00, 0x1F,
  0xFF, 0xE0, 0x01, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFC,
  0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x07, 0xFF, 0xFF,
  0xFF, 0xF0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0xFF, 0xFF, 0xC0, 0x1F, 0xFF,
  0xF8, 0x00, 0x7F, 0xFF, 0x00, 0x01, 0xFF, 0xFC, 0x00, 0x7F, 0xFE, 0x00,
  0x00, 0x3F, 0xFF, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x3F,
  0xFE, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0xFF,
  0xF0, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x0F, 0xFF, 0x00, 0x00,
  0x00, 0x1F, 0xFC, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFF, 0x03, 0xFF,
  0x80, 0x00, 0x00, 0x03, 0xFF, 0x81, 0xFF, 0xC0, 0x00, 0x00, 0x01, 0xFF,
  0xC0, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x7F, 0xF0, 0x00, 0x00,
  0x00, 0x7F, 0xF0, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x1F, 0xFC,
  0x00, 0x00, 0x00, 0x1F, 0xFC, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xFE,
  0x07, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFF, 0x01, 0xFF, 0xC0, 0x00, 0x00,
  0x07, 0xFF, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0x80, 0x7F, 0xF8,
  0x00, 0x00, 0x03, 0xFF, 0xC0, 0x1F, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0xC0,
  0x0F, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xE0, 0x03, 0xFF, 0xE0, 0x00, 0x03,
  0xFF, 0xE0, 0x00, 0xFF, 0xFC, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x3F, 0xFF,
  0xC0, 0x1F, 0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00,
  0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0xF8, 0x03, 0xFF, 0xFF, 0x00, 0x1F,
  0xFF, 0xE0, 0x00, 0x3F, 0xFF, 0xC0, 0x1F, 0xFF, 0x80, 0x00, 0x03, 0xFF,
  0xF0, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xF8, 0x0F, 0xFF, 0x80, 0x00,
  0x00, 0x3F, 0xFE, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFF, 0x87, 0xFF,
  0x80, 0x00, 0x00, 0x03, 0xFF, 0xC7, 0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF,
  0xE3, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0xF9, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x1F, 0xFC, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xDF, 0xFC, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xCF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE7,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xF3, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x7F, 0xF8, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x7F, 0xFC, 0x00,
  0x00, 0x00, 0x7F, 0xFC, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x0F,
  0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xFE, 0x03, 0xFF, 0xF0, 0x00, 0x00, 0xFF,
  0xFE, 0x01, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF, 0x00, 0x7F, 0xFF, 0xF0,
  0x07, 0xFF, 0xFF, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x07,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x00, 0x03, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0x80, 0x07, 0xFF, 0xF8, 0x00,
  0x1F, 0xFF, 0xC0, 0x0F, 0xFF, 0xE0, 0x00, 0x07, 0xFF, 0xC0, 0x0F, 0xFF,
  0x80, 0x00, 0x03, 0xFF, 0xE0, 0x1F, 0xFF, 0x00, 0x00, 0x01, 0xFF, 0xE0,
  0x1F, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x3F, 0xFE, 0x00, 0x00, 0x00,
  0x7F, 0xF0, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x3F, 0xF8, 0x00,
  0x00, 0x00, 0x3F, 0xF8, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x7F,
  0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFC, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x0F,
  0xFC, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x0F, 0xFC, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFC, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x07, 0xFE, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFE,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFE, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x07, 0xFE, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFE, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x07, 0xFE, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x0F,
  0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x7F, 0xF0, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x7F, 0xF8,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0xFF,
  0x3F, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x3F, 0xFE, 0x00, 0x00, 0x00,
  0x7F, 0xFF, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1F, 0xFF, 0x80,
  0x00, 0x03, 0xFF, 0xFF, 0x0F, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xFF, 0x0F,
  0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0xFF, 0x07, 0xFF, 0xFE, 0x00, 0xFF, 0xFF,
  0xFF, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0x01, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF3, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0x00, 0x7F,
  0xFF, 0xFF, 0xFF, 0xC7, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x87, 0xFF,
  0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0xFC,
  0x07, 0xFE, 0x00, 0x03, 0xFF, 0xFF, 0xF8, 0x07, 0xFE, 0x00, 0x00, 0x7F,
  0xFF, 0xC0, 0x07, 0xFE, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x07, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xF8, 0x3F, 0xF8, 0x00,
  0x00, 0x00, 0x3F, 0xF0, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x3F,
  0xF8, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0xFF,
  0xE0, 0x1F, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x1F, 0xFE, 0x00, 0x00,
  0x01, 0xFF, 0xC0, 0x0F, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x0F, 0xFF,
  0x80, 0x00, 0x07, 0xFF, 0x80, 0x0F, 0xFF, 0xC0, 0x00, 0x0F, 0xFF, 0x80,
  0x07, 0xFF, 0xF0, 0x00, 0x3F, 0xFF, 0x00, 0x03, 0xFF, 0xFE, 0x01, 0xFF,
  0xFE, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00,
  0x7F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xE0,
  0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFF, 0xFF,
  0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };

const GFXglyph FreeSans60pt7bGlyphs[] PROGMEM = {
  {     0,  55,  87,  66,    5,  -83 },   // 0x30 '0'
  {   599,  28,  84,  66,   14,  -83 },   // 0x31 '1'
  {   893,  56,  84,  66,    6,  -83 },   // 0x32 '2'
  {  1481,  56,  87,  66,    4,  -83 },   // 0x33 '3'
  {  2090,  56,  84,  66,    5,  -83 },   // 0x34 '4'
  {  2678,  57,  87,  66,    4,  -83 },   // 0x35 '5'
  {  3298,  56,  87,  66,    5,  -83 },   // 0x36 '6'
  {  3907,  56,  84,  66,    5,  -83 },   // 0x37 '7'
  {  4495,  57,  87,  66,    4,  -83 },   // 0x38 '8'
  {  5115,  56,  87,  66,    4,  -83 },   // 0x39 '9'
  {  5724,  12,  62,  30,    9,  -61 } }; // 0x3A ':'

const GFXfont FreeSans60pt7b PROGMEM = {
  (uint8_t  *)FreeSans60pt7bBitmaps,
  (GFXglyph *)FreeSans60pt7bGlyphs,
  0x30, 0x3A, 141 };

// Approx. 5901 bytes

#endif // FreeSans60pt7b_H
