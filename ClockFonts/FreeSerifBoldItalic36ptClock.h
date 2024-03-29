#ifndef FreeSerifBoldItalic36pt7b_H
#define FreeSerifBoldItalic36pt7b_H

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

const uint8_t FreeSerifBoldItalic36pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0xFE, 0x3C,
  0x00, 0x00, 0xFC, 0x0F, 0x00, 0x00, 0xFC, 0x03, 0xC0, 0x00, 0xFE, 0x01,
  0xF0, 0x00, 0xFE, 0x00, 0xF8, 0x00, 0xFF, 0x00, 0x7C, 0x00, 0xFF, 0x00,
  0x3F, 0x00, 0x7F, 0x80, 0x1F, 0x80, 0x7F, 0x80, 0x0F, 0xC0, 0x7F, 0xC0,
  0x0F, 0xF0, 0x3F, 0xE0, 0x07, 0xF8, 0x3F, 0xE0, 0x03, 0xFC, 0x1F, 0xF0,
  0x01, 0xFE, 0x1F, 0xF8, 0x00, 0xFF, 0x0F, 0xF8, 0x00, 0xFF, 0x8F, 0xFC,
  0x00, 0x7F, 0xC7, 0xFE, 0x00, 0x3F, 0xE3, 0xFE, 0x00, 0x1F, 0xF3, 0xFF,
  0x00, 0x1F, 0xF9, 0xFF, 0x80, 0x0F, 0xFC, 0xFF, 0x80, 0x07, 0xFE, 0xFF,
  0xC0, 0x03, 0xFE, 0x7F, 0xE0, 0x03, 0xFF, 0x3F, 0xF0, 0x01, 0xFF, 0x9F,
  0xF0, 0x00, 0xFF, 0xCF, 0xF8, 0x00, 0x7F, 0xEF, 0xFC, 0x00, 0x7F, 0xE7,
  0xFE, 0x00, 0x3F, 0xF3, 0xFE, 0x00, 0x1F, 0xF9, 0xFF, 0x00, 0x0F, 0xF8,
  0xFF, 0x80, 0x0F, 0xFC, 0x7F, 0xC0, 0x07, 0xFE, 0x3F, 0xC0, 0x03, 0xFE,
  0x1F, 0xE0, 0x03, 0xFF, 0x0F, 0xF0, 0x01, 0xFF, 0x07, 0xF8, 0x00, 0xFF,
  0x83, 0xFC, 0x00, 0xFF, 0x81, 0xFC, 0x00, 0x7F, 0xC0, 0x7E, 0x00, 0x3F,
  0xC0, 0x3F, 0x00, 0x3F, 0xC0, 0x1F, 0x80, 0x1F, 0xC0, 0x07, 0xC0, 0x1F,
  0xE0, 0x03, 0xE0, 0x0F, 0xE0, 0x00, 0xF0, 0x0F, 0xE0, 0x00, 0x3C, 0x0F,
  0xC0, 0x00, 0x0F, 0x0F, 0xC0, 0x00, 0x03, 0xFF, 0x80, 0x00, 0x00, 0x7F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x03, 0xE0, 0x00,
  0x01, 0xFF, 0x80, 0x01, 0xFF, 0xFE, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0xFF,
  0xFF, 0xC0, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x3F,
  0xE0, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x1F, 0xF8,
  0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x0F, 0xFC, 0x00,
  0x00, 0x3F, 0xE0, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x07, 0xFE, 0x00, 0x00,
  0x1F, 0xF8, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x07, 0xFE,
  0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x01, 0xFF, 0x00,
  0x00, 0x0F, 0xFC, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0xFF, 0x80, 0x00,
  0x03, 0xFE, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x01,
  0xFF, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0xFF,
  0x80, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x7F, 0xE0,
  0x00, 0x01, 0xFF, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x3F, 0xF0, 0x00,
  0x01, 0xFF, 0xC0, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x3F,
  0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00,
  0x00, 0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF, 0x80,
  0x01, 0xFF, 0xFF, 0xE0, 0x01, 0xFF, 0xFF, 0xF0, 0x00, 0xF8, 0x3F, 0xFC,
  0x00, 0xF0, 0x07, 0xFE, 0x00, 0xE0, 0x01, 0xFF, 0x80, 0xE0, 0x00, 0xFF,
  0xC0, 0x60, 0x00, 0x3F, 0xE0, 0x30, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x0F,
  0xF8, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x01,
  0xFE, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00,
  0x7F, 0x80, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00,
  0x1F, 0xE0, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00,
  0x0F, 0xE0, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00,
  0x07, 0xF0, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
  0x03, 0xE0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00,
  0x03, 0xE0, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x03, 0xC0, 0x00, 0xC0,
  0x03, 0xC0, 0x00, 0x60, 0x03, 0xC0, 0x00, 0x60, 0x03, 0xC0, 0x00, 0x70,
  0x01, 0xC0, 0x00, 0x78, 0x01, 0xC0, 0x00, 0xF8, 0x01, 0xFF, 0xFF, 0xFC,
  0x01, 0xFF, 0xFF, 0xFC, 0x01, 0xFF, 0xFF, 0xFE, 0x01, 0xFF, 0xFF, 0xFF,
  0x01, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0xFF,
  0x80, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00,
  0x7F, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00,
  0xFF, 0xFF, 0xF0, 0x00, 0xF0, 0x7F, 0xF8, 0x00, 0xE0, 0x0F, 0xFE, 0x00,
  0xE0, 0x03, 0xFF, 0x00, 0xE0, 0x01, 0xFF, 0x80, 0x60, 0x00, 0x7F, 0xC0,
  0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x0F, 0xF8,
  0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x03, 0xFC,
  0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x03, 0xFC,
  0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x7F, 0xFE,
  0x00, 0x00, 0xFF, 0xFF, 0x80, 0x00, 0x7F, 0xFF, 0xC0, 0x00, 0x07, 0xFF,
  0xF0, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00, 0x0F, 0xFE, 0x00, 0x00, 0x03,
  0xFF, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00,
  0x3F, 0xE0, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00,
  0x03, 0xFC, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x1F, 0xC0, 0x00, 0x00, 0x0F, 0xC0, 0x1E, 0x00, 0x07, 0xE0, 0x3F,
  0xC0, 0x07, 0xE0, 0x1F, 0xE0, 0x03, 0xE0, 0x0F, 0xF8, 0x03, 0xE0, 0x07,
  0xFE, 0x03, 0xE0, 0x03, 0xFF, 0x83, 0xE0, 0x00, 0xFF, 0xFF, 0xC0, 0x00,
  0x3F, 0xFF, 0x80, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0xFC, 0x00,
  0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x0F,
  0xF8, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00,
  0x00, 0xFF, 0xE0, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xF0,
  0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x77, 0xFC, 0x00, 0x00, 0x07,
  0x7F, 0xE0, 0x00, 0x00, 0x73, 0xFE, 0x00, 0x00, 0x07, 0x1F, 0xF0, 0x00,
  0x00, 0x71, 0xFF, 0x80, 0x00, 0x07, 0x0F, 0xF8, 0x00, 0x00, 0x70, 0x7F,
  0xC0, 0x00, 0x07, 0x03, 0xFE, 0x00, 0x00, 0x70, 0x3F, 0xF0, 0x00, 0x07,
  0x01, 0xFF, 0x00, 0x00, 0x70, 0x0F, 0xF8, 0x00, 0x07, 0x00, 0x7F, 0xC0,
  0x00, 0x70, 0x07, 0xFE, 0x00, 0x07, 0x00, 0x3F, 0xE0, 0x00, 0x70, 0x01,
  0xFF, 0x00, 0x07, 0x00, 0x1F, 0xF8, 0x00, 0x70, 0x00, 0xFF, 0x80, 0x07,
  0x00, 0x07, 0xFC, 0x00, 0x70, 0x00, 0x3F, 0xE0, 0x07, 0x00, 0x03, 0xFF,
  0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0xFF, 0xFC, 0x1F, 0xFF,
  0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFF, 0xFF, 0xF0,
  0x3F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x0F,
  0xF8, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00,
  0x00, 0x3F, 0xF0, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0xF8,
  0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00,
  0x3F, 0xE0, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF,
  0xE0, 0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x01, 0xFF,
  0xFF, 0xE0, 0x00, 0x3F, 0xFF, 0xFC, 0x00, 0x0F, 0xFF, 0xFF, 0x80, 0x01,
  0xFF, 0xFF, 0xE0, 0x00, 0x7F, 0xFF, 0xFC, 0x00, 0x0E, 0x00, 0x00, 0x00,
  0x01, 0xC0, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00,
  0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x00, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x1F,
  0xFF, 0xE0, 0x00, 0x03, 0xFF, 0xFE, 0x00, 0x00, 0xFF, 0xFF, 0xE0, 0x00,
  0x1F, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xFC,
  0x00, 0x00, 0x07, 0xFF, 0xC0, 0x00, 0x00, 0x3F, 0xF8, 0x00, 0x00, 0x03,
  0xFF, 0x00, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00,
  0x00, 0x7F, 0xC0, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0xFF, 0x00,
  0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x3F,
  0x80, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00,
  0x1F, 0x80, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x3E, 0x00, 0x07, 0xE0, 0x0F, 0xE0, 0x00, 0xF8, 0x01,
  0xFE, 0x00, 0x3E, 0x00, 0x7F, 0xE0, 0x0F, 0x80, 0x0F, 0xFE, 0x03, 0xE0,
  0x00, 0xFF, 0xE1, 0xF8, 0x00, 0x0F, 0xFF, 0xFC, 0x00, 0x00, 0xFF, 0xFE,
  0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
  0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x01, 0xFF,
  0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x3F,
  0xF0, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x07, 0xFE, 0x00, 0x00, 0x01,
  0xFF, 0x80, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00,
  0x07, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xF0, 0x00,
  0x00, 0x0F, 0xFC, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xE0,
  0x00, 0x00, 0x1F, 0xFB, 0xF8, 0x00, 0x07, 0xFF, 0xFF, 0xC0, 0x01, 0xFF,
  0xFF, 0xFC, 0x00, 0x3F, 0xF8, 0x3F, 0xC0, 0x0F, 0xFE, 0x03, 0xFC, 0x01,
  0xFF, 0xC0, 0x3F, 0xC0, 0x3F, 0xF0, 0x07, 0xF8, 0x0F, 0xFE, 0x00, 0xFF,
  0x01, 0xFF, 0x80, 0x1F, 0xF0, 0x3F, 0xF0, 0x03, 0xFE, 0x07, 0xFE, 0x00,
  0x7F, 0xC1, 0xFF, 0x80, 0x0F, 0xF8, 0x3F, 0xF0, 0x03, 0xFF, 0x07, 0xFE,
  0x00, 0x7F, 0xE0, 0xFF, 0x80, 0x0F, 0xFC, 0x1F, 0xF0, 0x01, 0xFF, 0x83,
  0xFE, 0x00, 0x3F, 0xF0, 0x7F, 0xC0, 0x0F, 0xFC, 0x0F, 0xF0, 0x01, 0xFF,
  0x81, 0xFE, 0x00, 0x3F, 0xF0, 0x3F, 0xC0, 0x0F, 0xFE, 0x07, 0xF8, 0x01,
  0xFF, 0x80, 0x7F, 0x00, 0x3F, 0xF0, 0x0F, 0xE0, 0x0F, 0xFC, 0x01, 0xFC,
  0x01, 0xFF, 0x00, 0x1F, 0x80, 0x3F, 0xE0, 0x03, 0xF0, 0x0F, 0xF8, 0x00,
  0x3F, 0x03, 0xFE, 0x00, 0x03, 0xF0, 0xFF, 0x00, 0x00, 0x3F, 0xFF, 0xC0,
  0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x03, 0xFF,
  0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFF, 0xE0, 0x7F, 0xFF, 0xFF, 0xF0, 0x1F,
  0xFF, 0xFF, 0xFC, 0x07, 0xFF, 0xFF, 0xFE, 0x03, 0xFF, 0xFF, 0xFF, 0x80,
  0xFF, 0xFF, 0xFF, 0xC0, 0x7F, 0xFF, 0xFF, 0xE0, 0x1F, 0x00, 0x01, 0xF8,
  0x0F, 0x00, 0x00, 0x7C, 0x03, 0x00, 0x00, 0x3F, 0x01, 0xC0, 0x00, 0x0F,
  0x80, 0x60, 0x00, 0x07, 0xE0, 0x30, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00,
  0xFC, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00,
  0x0F, 0xC0, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00,
  0x00, 0xFC, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00,
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x01, 0xF8, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x0F, 0xC0,
  0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0xFC,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x0F,
  0xC0, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00,
  0xFE, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00,
  0x07, 0xE0, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00,
  0x00, 0x7E, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x0F, 0xC0, 0x00,
  0x00, 0x07, 0xF0, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0x80, 0x00, 0x01, 0xFF, 0xF0, 0x00, 0x03, 0xFF, 0xFE, 0x00, 0x03,
  0xF8, 0x3F, 0x80, 0x03, 0xF8, 0x07, 0xE0, 0x03, 0xF8, 0x01, 0xF8, 0x01,
  0xFC, 0x00, 0xFC, 0x01, 0xFC, 0x00, 0x3E, 0x00, 0xFE, 0x00, 0x1F, 0x80,
  0x7F, 0x00, 0x0F, 0xC0, 0x7F, 0x80, 0x07, 0xE0, 0x3F, 0xC0, 0x03, 0xF0,
  0x1F, 0xE0, 0x01, 0xF8, 0x0F, 0xF8, 0x00, 0xFC, 0x07, 0xFC, 0x00, 0xFC,
  0x03, 0xFF, 0x00, 0x7E, 0x01, 0xFF, 0xC0, 0x7E, 0x00, 0xFF, 0xE0, 0x7E,
  0x00, 0x3F, 0xF8, 0x7E, 0x00, 0x1F, 0xFE, 0x7E, 0x00, 0x07, 0xFF, 0xFC,
  0x00, 0x01, 0xFF, 0xFC, 0x00, 0x00, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFE,
  0x00, 0x00, 0x0F, 0xFF, 0x80, 0x00, 0x0F, 0xFF, 0xC0, 0x00, 0x1F, 0xFF,
  0xF0, 0x00, 0x3F, 0x3F, 0xFC, 0x00, 0x7F, 0x0F, 0xFE, 0x00, 0x7F, 0x03,
  0xFF, 0x80, 0x7F, 0x01, 0xFF, 0xC0, 0x7F, 0x00, 0x7F, 0xE0, 0x3F, 0x80,
  0x1F, 0xF8, 0x3F, 0x80, 0x07, 0xFC, 0x1F, 0xC0, 0x03, 0xFE, 0x1F, 0xC0,
  0x00, 0xFF, 0x0F, 0xE0, 0x00, 0x7F, 0x87, 0xF0, 0x00, 0x3F, 0xC3, 0xF8,
  0x00, 0x1F, 0xE1, 0xFC, 0x00, 0x0F, 0xE0, 0xFE, 0x00, 0x07, 0xF0, 0x7F,
  0x00, 0x03, 0xF8, 0x1F, 0x80, 0x03, 0xF8, 0x0F, 0xE0, 0x01, 0xFC, 0x03,
  0xF0, 0x01, 0xFC, 0x01, 0xF8, 0x00, 0xFC, 0x00, 0x7E, 0x00, 0xFC, 0x00,
  0x0F, 0xC1, 0xF8, 0x00, 0x03, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x0F,
  0xFF, 0xF0, 0x00, 0x07, 0xFE, 0x3F, 0x00, 0x01, 0xFF, 0x03, 0xF0, 0x00,
  0x7F, 0xC0, 0x3F, 0x00, 0x1F, 0xF8, 0x07, 0xE0, 0x03, 0xFE, 0x00, 0xFE,
  0x00, 0xFF, 0x80, 0x1F, 0xC0, 0x3F, 0xF0, 0x03, 0xF8, 0x07, 0xFE, 0x00,
  0x7F, 0x81, 0xFF, 0x80, 0x0F, 0xF0, 0x3F, 0xF0, 0x01, 0xFE, 0x07, 0xFE,
  0x00, 0x7F, 0xC1, 0xFF, 0x80, 0x0F, 0xF8, 0x3F, 0xF0, 0x01, 0xFF, 0x07,
  0xFE, 0x00, 0x3F, 0xE0, 0xFF, 0xC0, 0x0F, 0xFC, 0x1F, 0xF0, 0x01, 0xFF,
  0x83, 0xFE, 0x00, 0x3F, 0xF0, 0x7F, 0xC0, 0x0F, 0xFC, 0x0F, 0xF8, 0x01,
  0xFF, 0x81, 0xFF, 0x00, 0x3F, 0xF0, 0x1F, 0xE0, 0x0F, 0xFE, 0x03, 0xFC,
  0x01, 0xFF, 0x80, 0x7F, 0x80, 0x3F, 0xF0, 0x07, 0xF8, 0x0F, 0xFE, 0x00,
  0x7F, 0x83, 0xFF, 0x80, 0x07, 0xFF, 0xFF, 0xF0, 0x00, 0x7F, 0xFF, 0xFC,
  0x00, 0x03, 0xFB, 0xFF, 0x80, 0x00, 0x00, 0xFF, 0xE0, 0x00, 0x00, 0x1F,
  0xF8, 0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00,
  0x3F, 0xF0, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x03, 0xFF, 0x00, 0x00,
  0x00, 0xFF, 0xC0, 0x00, 0x00, 0x3F, 0xF0, 0x00, 0x00, 0x0F, 0xFC, 0x00,
  0x00, 0x03, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xC0,
  0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x0F, 0xF8,
  0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x1F, 0x00, 0x03, 0xFC, 0x00, 0x7F, 0xE0, 0x0F, 0xFF, 0x00, 0xFF,
  0xF0, 0x0F, 0xFF, 0x00, 0xFF, 0xF0, 0x0F, 0xFF, 0x00, 0x7F, 0xE0, 0x03,
  0xFC, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00,
  0x3F, 0xC0, 0x07, 0xFE, 0x00, 0xFF, 0xF0, 0x0F, 0xFF, 0x00, 0xFF, 0xF0,
  0x0F, 0xFF, 0x00, 0xFF, 0xF0, 0x07, 0xFE, 0x00, 0x3F, 0xC0, 0x01, 0xF8,
  0x00 };

const GFXglyph FreeSerifBoldItalic36pt7bGlyphs[] PROGMEM = {
  {     0,  33,  50,  35,    1,  -48 },   // 0x30 '0'
  {   207,  30,  49,  35,    0,  -48 },   // 0x31 '1'
  {   391,  33,  49,  35,    1,  -48 },   // 0x32 '2'
  {   594,  33,  50,  35,    1,  -48 },   // 0x33 '3'
  {   801,  37,  49,  35,    0,  -48 },   // 0x34 '4'
  {  1028,  35,  49,  36,    0,  -47 },   // 0x35 '5'
  {  1243,  35,  50,  35,    2,  -48 },   // 0x36 '6'
  {  1462,  34,  48,  35,    5,  -47 },   // 0x37 '7'
  {  1666,  33,  50,  36,    1,  -48 },   // 0x38 '8'
  {  1873,  35,  49,  35,    0,  -48 },   // 0x39 '9'
  {  2088,  20,  34,  17,    0,  -32 } }; // 0x3A ':'

const GFXfont FreeSerifBoldItalic36pt7b PROGMEM = {
  (uint8_t  *)FreeSerifBoldItalic36pt7bBitmaps,
  (GFXglyph *)FreeSerifBoldItalic36pt7bGlyphs,
  0x30, 0x3A, 85 };

// Approx. 2257 bytes

#endif // FreeSerifBoldItalic36pt7b_H
