#ifndef FreeMonoBold60pt7b_H
#define FreeMonoBold60pt7b_H

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

const uint8_t FreeMonoBold60pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFE,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0xFF,
  0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0xFE, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x03, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0xC0, 0x7F, 0xFF, 0xC0, 0x1F,
  0xFF, 0xE0, 0x03, 0xFF, 0xFC, 0x03, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0x80,
  0xFF, 0xFC, 0x00, 0x01, 0xFF, 0xF8, 0x1F, 0xFF, 0x00, 0x00, 0x1F, 0xFF,
  0x07, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xF0, 0xFF, 0xF8, 0x00, 0x00, 0x3F,
  0xFE, 0x1F, 0xFF, 0x00, 0x00, 0x07, 0xFF, 0xC7, 0xFF, 0xC0, 0x00, 0x00,
  0x7F, 0xF8, 0xFF, 0xF8, 0x00, 0x00, 0x0F, 0xFF, 0x9F, 0xFE, 0x00, 0x00,
  0x00, 0xFF, 0xF3, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xFE, 0x7F, 0xF8, 0x00,
  0x00, 0x03, 0xFF, 0xDF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFB, 0xFF, 0xC0,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0xFF,
  0xFC, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFF,
  0xFF, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x03, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF8,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF,
  0xE0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xFF,
  0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x01, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0xE7, 0xFF, 0x80, 0x00, 0x00,
  0x3F, 0xFC, 0xFF, 0xF0, 0x00, 0x00, 0x07, 0xFF, 0x9F, 0xFE, 0x00, 0x00,
  0x00, 0xFF, 0xF3, 0xFF, 0xE0, 0x00, 0x00, 0x3F, 0xFE, 0x3F, 0xFC, 0x00,
  0x00, 0x07, 0xFF, 0xC7, 0xFF, 0xC0, 0x00, 0x01, 0xFF, 0xF0, 0xFF, 0xF8,
  0x00, 0x00, 0x3F, 0xFE, 0x1F, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xC1, 0xFF,
  0xF0, 0x00, 0x01, 0xFF, 0xF0, 0x3F, 0xFF, 0x00, 0x00, 0x7F, 0xFE, 0x03,
  0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0x80, 0x7F, 0xFF, 0x80, 0x0F, 0xFF, 0xF0,
  0x07, 0xFF, 0xFC, 0x07, 0xFF, 0xFC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x80, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF8, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xFF,
  0xFF, 0xFC, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0xFF,
  0xFF, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xF8,
  0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFF, 0xF7, 0xFF,
  0x80, 0x00, 0x0F, 0xFF, 0xF9, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xF8, 0x7F,
  0xF8, 0x00, 0x00, 0xFF, 0xFC, 0x1F, 0xFE, 0x00, 0x00, 0x3F, 0xFC, 0x07,
  0xFF, 0x80, 0x00, 0x0F, 0xFE, 0x01, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0x00,
  0x7F, 0xF8, 0x00, 0x00, 0x3F, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x1F, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0xF0, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xC0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xC0, 0x1F,
  0xFF, 0xF8, 0x1F, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0xE0, 0xFF, 0xFE, 0x00,
  0x00, 0x7F, 0xFF, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFC, 0x7F, 0xFE,
  0x00, 0x00, 0x03, 0xFF, 0xE3, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFF, 0x1F,
  0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0xFF, 0xF0, 0x00, 0x00, 0x03, 0xFF,
  0xE7, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFF, 0x3F, 0xF8, 0x00, 0x00, 0x00,
  0x7F, 0xF8, 0xFF, 0xC0, 0x00, 0x00, 0x03, 0xFF, 0xC3, 0xFC, 0x00, 0x00,
  0x00, 0x1F, 0xFE, 0x0F, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x00, 0x7C,
  0x03, 0xFF, 0xFF, 0x00, 0x00, 0x0F, 0xF8, 0x3F, 0xFF, 0xF0, 0x00, 0x00,
  0x7F, 0xC3, 0xFF, 0xFF, 0x00, 0x00, 0x07, 0xFF, 0x3F, 0xFF, 0xF0, 0x00,
  0x00, 0x3F, 0xFB, 0xFF, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0xDF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xE0,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0xFF, 0x80, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x0F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
  0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xE0, 0x3F, 0xFF, 0xF0, 0x01, 0xFF, 0xFF, 0x80, 0xFF, 0xFE, 0x00,
  0x00, 0xFF, 0xFF, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0xFF, 0xFC, 0x07, 0xFF,
  0x00, 0x00, 0x01, 0xFF, 0xF0, 0x1F, 0xF8, 0x00, 0x00, 0x03, 0xFF, 0xE0,
  0x3F, 0xC0, 0x00, 0x00, 0x0F, 0xFF, 0x80, 0x3C, 0x00, 0x00, 0x00, 0x1F,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFC,
  0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8,
  0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8, 0x7C, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xE3, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x1F, 0xFC,
  0x00, 0x00, 0x0F, 0xFF, 0xFC, 0xFF, 0xFF, 0x00, 0x03, 0xFF, 0xFF, 0xE3,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFC, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x07, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x1F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
  0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFC,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x03, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF8,
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFF, 0x7F,
  0xF8, 0x00, 0x00, 0x07, 0xFF, 0xDF, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0xE7,
  0xFF, 0x80, 0x00, 0x01, 0xFF, 0xF9, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFC,
  0x7F, 0xF8, 0x00, 0x00, 0x3F, 0xFE, 0x1F, 0xFE, 0x00, 0x00, 0x0F, 0xFF,
  0x87, 0xFF, 0x80, 0x00, 0x07, 0xFF, 0xC1, 0xFF, 0xE0, 0x00, 0x01, 0xFF,
  0xE0, 0x7F, 0xF8, 0x00, 0x00, 0xFF, 0xF8, 0x1F, 0xFE, 0x00, 0x00, 0x7F,
  0xFC, 0x07, 0xFF, 0x80, 0x00, 0x1F, 0xFF, 0x01, 0xFF, 0xE0, 0x00, 0x0F,
  0xFF, 0x80, 0x7F, 0xF8, 0x00, 0x03, 0xFF, 0xC0, 0x1F, 0xFE, 0x00, 0x01,
  0xFF, 0xF0, 0x07, 0xFF, 0x80, 0x00, 0xFF, 0xF8, 0x01, 0xFF, 0xE0, 0x00,
  0x3F, 0xFC, 0x00, 0x7F, 0xF8, 0x00, 0x1F, 0xFF, 0x00, 0x1F, 0xFE, 0x00,
  0x07, 0xFF, 0x80, 0x07, 0xFF, 0x80, 0x03, 0xFF, 0xE0, 0x01, 0xFF, 0xE0,
  0x00, 0xFF, 0xF0, 0x00, 0x7F, 0xF8, 0x00, 0x7F, 0xF8, 0x00, 0x1F, 0xFE,
  0x00, 0x3F, 0xFE, 0x00, 0x07, 0xFF, 0x80, 0x0F, 0xFF, 0x00, 0x01, 0xFF,
  0xE0, 0x07, 0xFF, 0x80, 0x00, 0x7F, 0xF8, 0x01, 0xFF, 0xE0, 0x00, 0x1F,
  0xFE, 0x00, 0xFF, 0xF0, 0x00, 0x07, 0xFF, 0x80, 0x7F, 0xFC, 0x00, 0x01,
  0xFF, 0xE0, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF3, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xFF,
  0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x7F, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0xF0, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x1F,
  0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFC, 0x00, 0x03, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
  0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFC, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x7F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x01, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
  0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF8, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x3F, 0xFC, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0xFF, 0xE0,
  0x00, 0x00, 0x07, 0xFF, 0x9F, 0xFF, 0xFC, 0x00, 0x00, 0x0F, 0xFF, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x01, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x80, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x07, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0x80, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x1F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x1F, 0xFF, 0xF8, 0x03, 0xFF, 0xFF,
  0x00, 0x3F, 0xFE, 0x00, 0x01, 0xFF, 0xFE, 0x00, 0x3F, 0xE0, 0x00, 0x00,
  0xFF, 0xFE, 0x00, 0x3E, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xF8, 0x3C, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF1, 0xFC, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0xC7, 0xFE, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x9F, 0xFE, 0x00,
  0x00, 0x00, 0xFF, 0xFF, 0x3F, 0xFF, 0x00, 0x00, 0x07, 0xFF, 0xFC, 0x7F,
  0xFF, 0xE0, 0x00, 0xFF, 0xFF, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x07, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x03,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
  0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0xFE, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x07, 0xFF, 0xFF,
  0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xFF, 0xF0, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x07,
  0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
  0x1F, 0xFF, 0xFF, 0xC0, 0x3F, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0xFF, 0x80,
  0x00, 0x03, 0xFF, 0xC0, 0x7F, 0xFF, 0x00, 0x00, 0x7F, 0xFC, 0x1F, 0xFF,
  0xFE, 0x00, 0x07, 0xFF, 0xC3, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xF8, 0xFF,
  0xFF, 0xFF, 0xC0, 0x07, 0xFF, 0x9F, 0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFB,
  0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF0, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0xC0, 0x07,
  0xFF, 0xF8, 0xFF, 0xFF, 0xF0, 0x00, 0x3F, 0xFF, 0x8F, 0xFF, 0xFE, 0x00,
  0x00, 0xFF, 0xF8, 0xFF, 0xFF, 0xC0, 0x00, 0x0F, 0xFF, 0xCF, 0xFF, 0xF8,
  0x00, 0x00, 0x7F, 0xFC, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xCF, 0xFF,
  0xE0, 0x00, 0x00, 0x3F, 0xFE, 0x7F, 0xFC, 0x00, 0x00, 0x03, 0xFF, 0xE7,
  0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xFE, 0x7F, 0xF8, 0x00, 0x00, 0x01, 0xFF,
  0xE7, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xFE, 0x7F, 0xFC, 0x00, 0x00, 0x01,
  0xFF, 0xE7, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xFE, 0x3F, 0xFC, 0x00, 0x00,
  0x01, 0xFF, 0xE3, 0xFF, 0xE0, 0x00, 0x00, 0x1F, 0xFE, 0x3F, 0xFE, 0x00,
  0x00, 0x01, 0xFF, 0xE3, 0xFF, 0xE0, 0x00, 0x00, 0x3F, 0xFE, 0x1F, 0xFF,
  0x00, 0x00, 0x03, 0xFF, 0xC1, 0xFF, 0xF0, 0x00, 0x00, 0x7F, 0xFC, 0x0F,
  0xFF, 0x80, 0x00, 0x07, 0xFF, 0xC0, 0xFF, 0xFC, 0x00, 0x00, 0xFF, 0xFC,
  0x0F, 0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0x80, 0x7F, 0xFF, 0x80, 0x07, 0xFF,
  0xF8, 0x07, 0xFF, 0xFE, 0x01, 0xFF, 0xFF, 0x80, 0x3F, 0xFF, 0xFF, 0xFF,
  0xFF, 0xF0, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x1F, 0xFF, 0xFF,
  0xFF, 0xFF, 0xE0, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x01,
  0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00,
  0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x03, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x80,
  0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0xBF, 0xF8, 0x00, 0x00, 0x00,
  0xFF, 0xF3, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x3F, 0xC0, 0x00, 0x00,
  0x07, 0xFF, 0x83, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFF,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xE0,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF,
  0xF8, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x3F, 0xFF, 0xFF,
  0xFF, 0xF8, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x3F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF8, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xFF,
  0xFF, 0x80, 0x3F, 0xFF, 0xF0, 0x3F, 0xFF, 0xC0, 0x01, 0xFF, 0xFE, 0x0F,
  0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xE1, 0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xFC,
  0x3F, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0x8F, 0xFF, 0x80, 0x00, 0x00, 0xFF,
  0xF9, 0xFF, 0xF0, 0x00, 0x00, 0x1F, 0xFF, 0x3F, 0xFC, 0x00, 0x00, 0x01,
  0xFF, 0xE7, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFC, 0xFF, 0xF0, 0x00, 0x00,
  0x07, 0xFF, 0x9F, 0xFE, 0x00, 0x00, 0x00, 0xFF, 0xF3, 0xFF, 0xC0, 0x00,
  0x00, 0x1F, 0xFE, 0x7F, 0xF8, 0x00, 0x00, 0x03, 0xFF, 0xC7, 0xFF, 0x80,
  0x00, 0x00, 0xFF, 0xF0, 0xFF, 0xF0, 0x00, 0x00, 0x1F, 0xFE, 0x1F, 0xFF,
  0x00, 0x00, 0x07, 0xFF, 0xC1, 0xFF, 0xF0, 0x00, 0x01, 0xFF, 0xF0, 0x3F,
  0xFF, 0x00, 0x00, 0x7F, 0xFE, 0x03, 0xFF, 0xF8, 0x00, 0x3F, 0xFF, 0x80,
  0x3F, 0xFF, 0xC0, 0x1F, 0xFF, 0xE0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
  0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF,
  0x80, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xFF, 0xFF,
  0xF8, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xFF,
  0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x1F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF,
  0xFF, 0x80, 0x3F, 0xFF, 0xE0, 0x3F, 0xFF, 0xC0, 0x01, 0xFF, 0xFE, 0x0F,
  0xFF, 0xE0, 0x00, 0x0F, 0xFF, 0xE1, 0xFF, 0xF8, 0x00, 0x00, 0x7F, 0xFC,
  0x7F, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xCF, 0xFF, 0x80, 0x00, 0x00, 0xFF,
  0xF9, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF, 0x7F, 0xFC, 0x00, 0x00, 0x01,
  0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x03, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFC,
  0x00, 0x00, 0x01, 0xFF, 0xF7, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xFC, 0xFF,
  0xFC, 0x00, 0x00, 0x1F, 0xFF, 0x9F, 0xFF, 0xC0, 0x00, 0x07, 0xFF, 0xF3,
  0xFF, 0xFE, 0x00, 0x03, 0xFF, 0xFE, 0x3F, 0xFF, 0xF8, 0x03, 0xFF, 0xFF,
  0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFC, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xE0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFE, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x7F, 0xFF,
  0xFF, 0xFF, 0xC0, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x3F,
  0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF8, 0x00,
  0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
  0xFF, 0xE0, 0x00, 0x1F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x03, 0xFF, 0xFF,
  0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x0F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x1F,
  0xFF, 0xF8, 0x07, 0xFF, 0xFE, 0x01, 0xFF, 0xFC, 0x00, 0x1F, 0xFF, 0xE0,
  0x3F, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0x03, 0xFF, 0xF0, 0x00, 0x03, 0xFF,
  0xF0, 0x3F, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0x83, 0xFF, 0xE0, 0x00, 0x00,
  0xFF, 0xF8, 0x7F, 0xFC, 0x00, 0x00, 0x0F, 0xFF, 0x87, 0xFF, 0xC0, 0x00,
  0x00, 0x7F, 0xFC, 0x7F, 0xF8, 0x00, 0x00, 0x07, 0xFF, 0xC7, 0xFF, 0x80,
  0x00, 0x00, 0x7F, 0xFC, 0x7F, 0xF8, 0x00, 0x00, 0x03, 0xFF, 0xC7, 0xFF,
  0x80, 0x00, 0x00, 0x3F, 0xFE, 0x7F, 0xF8, 0x00, 0x00, 0x03, 0xFF, 0xE7,
  0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFE, 0x7F, 0xF8, 0x00, 0x00, 0x03, 0xFF,
  0xE7, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFE, 0x7F, 0xFC, 0x00, 0x00, 0x07,
  0xFF, 0xE3, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0x3F, 0xFE, 0x00, 0x00,
  0x1F, 0xFF, 0xF3, 0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xFF, 0x3F, 0xFF, 0x00,
  0x00, 0x7F, 0xFF, 0xF1, 0xFF, 0xF8, 0x00, 0x0F, 0xFF, 0xFF, 0x1F, 0xFF,
  0xE0, 0x03, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0x0F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF,
  0xDF, 0xFE, 0x00, 0x7F, 0xFF, 0xFF, 0xF9, 0xFF, 0xE0, 0x03, 0xFF, 0xFF,
  0xFE, 0x1F, 0xFE, 0x00, 0x0F, 0xFF, 0xFF, 0xC3, 0xFF, 0xE0, 0x00, 0x7F,
  0xFF, 0xF0, 0x3F, 0xFE, 0x00, 0x00, 0xFF, 0xFC, 0x03, 0xFF, 0xC0, 0x00,
  0x01, 0xFF, 0x00, 0x7F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xFF, 0x80, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00,
  0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x1F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFC,
  0x00, 0x0F, 0xC0, 0x3F, 0xFF, 0xFF, 0x80, 0x03, 0xFF, 0xFF, 0xFF, 0xFF,
  0xF0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x07, 0xFF, 0xFF, 0xFF,
  0xFF, 0xC0, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x0F, 0xFF, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x07, 0xFF,
  0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x03,
  0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
  0x00, 0x7F, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x07, 0xF0, 0x0F, 0xFE, 0x0F, 0xFF, 0x8F, 0xFF, 0xE7, 0xFF,
  0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xEF, 0xFF, 0xE7, 0xFF, 0xF1, 0xFF, 0xF0, 0x7F, 0xF0, 0x0F, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F,
  0xC0, 0x3F, 0xF8, 0x3F, 0xFE, 0x3F, 0xFF, 0x9F, 0xFF, 0xDF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF,
  0x9F, 0xFF, 0xC7, 0xFF, 0xC1, 0xFF, 0xC0, 0x3F, 0x80 };

const GFXglyph FreeMonoBold60pt7bGlyphs[] PROGMEM = {
  {     0,  51,  77,  71,   10,  -74 },   // 0x30 '0'
  {   491,  50,  75,  71,   11,  -74 },   // 0x31 '1'
  {   960,  53,  75,  71,    8,  -74 },   // 0x32 '2'
  {  1457,  54,  77,  71,    9,  -74 },   // 0x33 '3'
  {  1977,  50,  73,  71,   10,  -72 },   // 0x34 '4'
  {  2434,  55,  76,  71,    8,  -73 },   // 0x35 '5'
  {  2957,  52,  77,  71,   12,  -74 },   // 0x36 '6'
  {  3458,  51,  74,  71,    9,  -73 },   // 0x37 '7'
  {  3930,  51,  77,  71,   10,  -74 },   // 0x38 '8'
  {  4421,  52,  77,  71,   12,  -74 },   // 0x39 '9'
  {  4922,  17,  54,  71,   27,  -51 } }; // 0x3A ':'

const GFXfont FreeMonoBold60pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBold60pt7bBitmaps,
  (GFXglyph *)FreeMonoBold60pt7bGlyphs,
  0x30, 0x3A, 118 };

// Approx. 5121 bytes

#endif // FreeMonoBold60pt7b_H
