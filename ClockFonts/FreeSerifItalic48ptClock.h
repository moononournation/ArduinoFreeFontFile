#ifndef FreeSerifItalic48pt7b_H
#define FreeSerifItalic48pt7b_H

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

const uint8_t FreeSerifItalic48pt7bBitmaps[] PROGMEM = {
  0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xF8, 0x00, 0x00,
  0x00, 0x3F, 0xFF, 0xC0, 0x00, 0x00, 0x1F, 0xC0, 0xFC, 0x00, 0x00, 0x07,
  0xE0, 0x0F, 0xC0, 0x00, 0x01, 0xF8, 0x00, 0xFC, 0x00, 0x00, 0x7E, 0x00,
  0x0F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0xF8, 0x00, 0x07, 0xE0, 0x00, 0x1F,
  0x00, 0x01, 0xF8, 0x00, 0x03, 0xF0, 0x00, 0x7F, 0x00, 0x00, 0x3E, 0x00,
  0x1F, 0xC0, 0x00, 0x07, 0xC0, 0x07, 0xF0, 0x00, 0x00, 0xFC, 0x00, 0xFE,
  0x00, 0x00, 0x1F, 0x80, 0x3F, 0x80, 0x00, 0x03, 0xF0, 0x07, 0xF0, 0x00,
  0x00, 0x7E, 0x01, 0xFC, 0x00, 0x00, 0x0F, 0xC0, 0x7F, 0x80, 0x00, 0x01,
  0xFC, 0x0F, 0xF0, 0x00, 0x00, 0x3F, 0x83, 0xFC, 0x00, 0x00, 0x07, 0xF0,
  0x7F, 0x80, 0x00, 0x00, 0xFE, 0x0F, 0xF0, 0x00, 0x00, 0x1F, 0xC3, 0xFC,
  0x00, 0x00, 0x03, 0xF8, 0x7F, 0x80, 0x00, 0x00, 0xFF, 0x1F, 0xF0, 0x00,
  0x00, 0x1F, 0xE3, 0xFC, 0x00, 0x00, 0x03, 0xFC, 0x7F, 0x80, 0x00, 0x00,
  0x7F, 0x9F, 0xF0, 0x00, 0x00, 0x0F, 0xF3, 0xFE, 0x00, 0x00, 0x01, 0xFE,
  0x7F, 0x80, 0x00, 0x00, 0x3F, 0xCF, 0xF0, 0x00, 0x00, 0x0F, 0xFB, 0xFE,
  0x00, 0x00, 0x01, 0xFE, 0x7F, 0xC0, 0x00, 0x00, 0x3F, 0xCF, 0xF0, 0x00,
  0x00, 0x07, 0xF9, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0x3F, 0xC0, 0x00, 0x00,
  0x3F, 0xEF, 0xF8, 0x00, 0x00, 0x07, 0xF9, 0xFE, 0x00, 0x00, 0x00, 0xFF,
  0x3F, 0xC0, 0x00, 0x00, 0x3F, 0xE7, 0xF8, 0x00, 0x00, 0x07, 0xF8, 0xFF,
  0x00, 0x00, 0x00, 0xFF, 0x1F, 0xE0, 0x00, 0x00, 0x1F, 0xE3, 0xFC, 0x00,
  0x00, 0x07, 0xF8, 0x7F, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0xE0, 0x00, 0x00,
  0x1F, 0xE1, 0xFC, 0x00, 0x00, 0x07, 0xF8, 0x3F, 0x80, 0x00, 0x00, 0xFF,
  0x07, 0xF0, 0x00, 0x00, 0x3F, 0xC0, 0xFE, 0x00, 0x00, 0x07, 0xF8, 0x1F,
  0xC0, 0x00, 0x01, 0xFE, 0x01, 0xF8, 0x00, 0x00, 0x3F, 0x80, 0x3F, 0x00,
  0x00, 0x0F, 0xF0, 0x07, 0xE0, 0x00, 0x01, 0xFC, 0x00, 0xFC, 0x00, 0x00,
  0x7F, 0x00, 0x0F, 0x80, 0x00, 0x0F, 0xE0, 0x01, 0xF8, 0x00, 0x03, 0xF8,
  0x00, 0x3F, 0x00, 0x00, 0xFE, 0x00, 0x03, 0xE0, 0x00, 0x3F, 0x80, 0x00,
  0x3E, 0x00, 0x0F, 0xE0, 0x00, 0x07, 0xE0, 0x03, 0xF8, 0x00, 0x00, 0x7E,
  0x00, 0xFE, 0x00, 0x00, 0x07, 0xE0, 0x7F, 0x80, 0x00, 0x00, 0x7F, 0xFF,
  0xC0, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00,
  0x00, 0x3F, 0xF8, 0x00, 0x01, 0xFF, 0xFE, 0x00, 0x01, 0xFF, 0xFF, 0x80,
  0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x03, 0xFC,
  0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x1F,
  0xE0, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00,
  0x03, 0xF8, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00,
  0x00, 0x1F, 0xE0, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x03, 0xFC, 0x00,
  0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x1F, 0xE0,
  0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x7F,
  0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x03,
  0xFC, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00,
  0x1F, 0xE0, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00,
  0x00, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x1F, 0xE0, 0x00,
  0x00, 0x07, 0xF8, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x80,
  0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x03, 0xFC,
  0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x1F,
  0xE0, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00,
  0x07, 0xF8, 0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00,
  0x00, 0x3F, 0xC0, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x03, 0xFC, 0x00,
  0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x7F, 0xF0,
  0x00, 0x00, 0xFF, 0xFF, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
  0x07, 0xFC, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xC0, 0x00, 0x00, 0x3F, 0xFF,
  0xF0, 0x00, 0x00, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x80,
  0x00, 0x7F, 0xFF, 0xFF, 0xE0, 0x00, 0x7F, 0x01, 0xFF, 0xF0, 0x00, 0x7C,
  0x00, 0x3F, 0xFC, 0x00, 0x7C, 0x00, 0x07, 0xFF, 0x00, 0x38, 0x00, 0x01,
  0xFF, 0x80, 0x38, 0x00, 0x00, 0x7F, 0xC0, 0x38, 0x00, 0x00, 0x3F, 0xF0,
  0x1C, 0x00, 0x00, 0x0F, 0xF8, 0x1C, 0x00, 0x00, 0x07, 0xFC, 0x0C, 0x00,
  0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0x80, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0xE0,
  0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00,
  0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0x00, 0x01,
  0xFC, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
  0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80,
  0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00,
  0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x0F,
  0x80, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00,
  0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00,
  0x0F, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x80,
  0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00, 0x01,
  0x80, 0x0F, 0x80, 0x00, 0x01, 0x80, 0x0F, 0x80, 0x00, 0x00, 0xC0, 0x0F,
  0x80, 0x00, 0x00, 0xE0, 0x0F, 0x80, 0x00, 0x00, 0xE0, 0x07, 0x80, 0x00,
  0x01, 0xF0, 0x07, 0xFF, 0xFF, 0xFF, 0xF0, 0x07, 0xFF, 0xFF, 0xFF, 0xF8,
  0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x07, 0xFF, 0xFF, 0xFF, 0xFC, 0x07, 0xFF,
  0xFF, 0xFF, 0xFE, 0x03, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0x80, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0xFF, 0xFF,
  0x80, 0x00, 0x00, 0x7F, 0xFF, 0xF0, 0x00, 0x00, 0x3E, 0x07, 0xFE, 0x00,
  0x00, 0x1C, 0x00, 0x7F, 0xC0, 0x00, 0x0E, 0x00, 0x0F, 0xF8, 0x00, 0x07,
  0x00, 0x01, 0xFE, 0x00, 0x03, 0x80, 0x00, 0x7F, 0xC0, 0x00, 0xC0, 0x00,
  0x0F, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00,
  0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x00, 0x00, 0x0F,
  0xF0, 0x00, 0x00, 0x00, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00,
  0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00,
  0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFC,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xF0, 0x00,
  0x00, 0x0F, 0xFF, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00,
  0x07, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0xC0, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00,
  0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
  0x00, 0x3F, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x01,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00,
  0x07, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x80, 0x00,
  0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00,
  0x00, 0xF8, 0x00, 0x7C, 0x00, 0x00, 0x3C, 0x00, 0x3F, 0xE0, 0x00, 0x1E,
  0x00, 0x0F, 0xFC, 0x00, 0x0F, 0x00, 0x03, 0xFF, 0xC0, 0x0F, 0x80, 0x00,
  0xFF, 0xFC, 0x0F, 0xC0, 0x00, 0x3F, 0xFF, 0xFF, 0xC0, 0x00, 0x07, 0xFF,
  0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x07, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00,
  0x00, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00,
  0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x07, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x07, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0xF0, 0x00, 0x00, 0x00, 0x07, 0xBF, 0x80, 0x00,
  0x00, 0x00, 0x79, 0xF8, 0x00, 0x00, 0x00, 0x07, 0x9F, 0xC0, 0x00, 0x00,
  0x00, 0x78, 0xFE, 0x00, 0x00, 0x00, 0x07, 0x87, 0xF0, 0x00, 0x00, 0x00,
  0x7C, 0x7F, 0x00, 0x00, 0x00, 0x07, 0xC3, 0xF8, 0x00, 0x00, 0x00, 0x3C,
  0x1F, 0xC0, 0x00, 0x00, 0x03, 0xC0, 0xFE, 0x00, 0x00, 0x00, 0x3C, 0x0F,
  0xE0, 0x00, 0x00, 0x03, 0xC0, 0x7F, 0x00, 0x00, 0x00, 0x3C, 0x03, 0xF8,
  0x00, 0x00, 0x03, 0xC0, 0x3F, 0x80, 0x00, 0x00, 0x3C, 0x01, 0xFC, 0x00,
  0x00, 0x03, 0xC0, 0x0F, 0xE0, 0x00, 0x00, 0x3C, 0x00, 0x7F, 0x00, 0x00,
  0x03, 0xC0, 0x07, 0xF0, 0x00, 0x00, 0x3C, 0x00, 0x3F, 0x80, 0x00, 0x03,
  0xC0, 0x01, 0xFC, 0x00, 0x00, 0x3C, 0x00, 0x0F, 0xE0, 0x00, 0x03, 0xC0,
  0x00, 0xFE, 0x00, 0x00, 0x3C, 0x00, 0x07, 0xF0, 0x00, 0x03, 0xC0, 0x00,
  0x3F, 0x80, 0x00, 0x3C, 0x00, 0x03, 0xF8, 0x00, 0x03, 0xE0, 0x00, 0x1F,
  0xC0, 0x00, 0x3E, 0x00, 0x00, 0xFE, 0x00, 0x03, 0xE0, 0x00, 0x07, 0xF0,
  0x00, 0x3E, 0x00, 0x00, 0x7F, 0x00, 0x03, 0xE0, 0x00, 0x03, 0xF8, 0x00,
  0x3E, 0x00, 0x00, 0x1F, 0xC0, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFC, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE3, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0x80, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0,
  0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00,
  0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xC0, 0x00, 0x00, 0x00, 0x01,
  0xFC, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x7F,
  0xFF, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x3F, 0xFF,
  0xFF, 0xE0, 0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0xFF, 0xFF,
  0xF0, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00,
  0x1C, 0x00, 0x00, 0x00, 0x00, 0x01, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x07, 0xFF,
  0x80, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFE,
  0x00, 0x00, 0x00, 0x3F, 0xFF, 0xF8, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xE0,
  0x00, 0x00, 0x07, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x03, 0xFF, 0xFE, 0x00,
  0x00, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xE0, 0x00,
  0x00, 0x00, 0x07, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0x80, 0x00, 0x00, 0x00, 0x01, 0xFC, 0x00, 0x00, 0x00, 0x00,
  0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7E,
  0x00, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80,
  0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00,
  0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00,
  0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0,
  0x00, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0xF0, 0x00, 0x00, 0xF8, 0x00,
  0x0F, 0xE0, 0x00, 0x0F, 0x80, 0x00, 0x7F, 0xC0, 0x00, 0xF0, 0x00, 0x07,
  0xFF, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0xFE, 0x07, 0xF0, 0x00, 0x00, 0xFF,
  0xFF, 0xFE, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x0F, 0xFF,
  0xF8, 0x00, 0x00, 0x00, 0x0F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00,
  0x00, 0x07, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00,
  0x0F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x0F,
  0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x07, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x03, 0xFF, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x00,
  0x00, 0x00, 0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xE0, 0x00, 0x00,
  0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x03,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x7F, 0x00, 0x00, 0x00, 0x7F,
  0xCF, 0xFF, 0x80, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x1F, 0xFF,
  0xFF, 0xFF, 0x00, 0x00, 0x7F, 0xFC, 0x07, 0xFE, 0x00, 0x03, 0xFF, 0xC0,
  0x07, 0xFC, 0x00, 0x0F, 0xFE, 0x00, 0x0F, 0xF8, 0x00, 0x7F, 0xE0, 0x00,
  0x1F, 0xE0, 0x01, 0xFF, 0x80, 0x00, 0x3F, 0xC0, 0x07, 0xFC, 0x00, 0x00,
  0x7F, 0x00, 0x3F, 0xE0, 0x00, 0x01, 0xFE, 0x00, 0xFF, 0x80, 0x00, 0x07,
  0xF8, 0x03, 0xFC, 0x00, 0x00, 0x0F, 0xE0, 0x1F, 0xF0, 0x00, 0x00, 0x3F,
  0xC0, 0x7F, 0x80, 0x00, 0x00, 0xFF, 0x01, 0xFE, 0x00, 0x00, 0x03, 0xFC,
  0x07, 0xF8, 0x00, 0x00, 0x0F, 0xF0, 0x1F, 0xE0, 0x00, 0x00, 0x3F, 0xC0,
  0xFF, 0x00, 0x00, 0x00, 0xFF, 0x03, 0xFC, 0x00, 0x00, 0x03, 0xFC, 0x0F,
  0xF0, 0x00, 0x00, 0x0F, 0xF0, 0x3F, 0xC0, 0x00, 0x00, 0x7F, 0xC0, 0xFF,
  0x00, 0x00, 0x01, 0xFF, 0x03, 0xF8, 0x00, 0x00, 0x07, 0xF8, 0x0F, 0xE0,
  0x00, 0x00, 0x1F, 0xE0, 0x3F, 0x80, 0x00, 0x00, 0x7F, 0x80, 0xFE, 0x00,
  0x00, 0x03, 0xFE, 0x03, 0xF8, 0x00, 0x00, 0x0F, 0xF0, 0x0F, 0xE0, 0x00,
  0x00, 0x3F, 0xC0, 0x3F, 0x80, 0x00, 0x01, 0xFE, 0x00, 0x7E, 0x00, 0x00,
  0x07, 0xF8, 0x01, 0xF8, 0x00, 0x00, 0x1F, 0xC0, 0x07, 0xE0, 0x00, 0x00,
  0xFF, 0x00, 0x0F, 0x80, 0x00, 0x03, 0xF8, 0x00, 0x3F, 0x00, 0x00, 0x1F,
  0xC0, 0x00, 0x7C, 0x00, 0x00, 0x7F, 0x00, 0x01, 0xF0, 0x00, 0x03, 0xF8,
  0x00, 0x03, 0xE0, 0x00, 0x1F, 0xC0, 0x00, 0x07, 0x80, 0x00, 0xFE, 0x00,
  0x00, 0x1F, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x1E, 0x00, 0x3F, 0x00, 0x00,
  0x00, 0x3E, 0x07, 0xF8, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0,
  0x3F, 0xFF, 0xFF, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0xFF,
  0xFF, 0xFF, 0xFF, 0xE0, 0x7F, 0xFF, 0xFF, 0xFF, 0xF8, 0x1F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x03, 0xF0, 0x00, 0x00, 0x07, 0xC0, 0xF0, 0x00, 0x00, 0x01,
  0xF8, 0x3C, 0x00, 0x00, 0x00, 0x3E, 0x06, 0x00, 0x00, 0x00, 0x0F, 0x81,
  0x80, 0x00, 0x00, 0x03, 0xF0, 0x60, 0x00, 0x00, 0x00, 0x7C, 0x04, 0x00,
  0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x03, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x07,
  0xC0, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00,
  0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00,
  0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00,
  0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F,
  0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00,
  0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00,
  0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00,
  0x1F, 0x80, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFC,
  0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00,
  0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00,
  0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x07, 0xE0,
  0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00,
  0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x01, 0xF8, 0x00, 0x00, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xC0, 0x00, 0x00, 0x00, 0x03,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x1F, 0x80,
  0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
  0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00,
  0x01, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x0F,
  0xC0, 0x00, 0x00, 0x00, 0x03, 0xF0, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00,
  0x00, 0x00, 0x00, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
  0xFF, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFC, 0x00, 0x00, 0x01, 0xF8, 0x0F,
  0xE0, 0x00, 0x00, 0xFC, 0x00, 0x7E, 0x00, 0x00, 0x3F, 0x00, 0x03, 0xE0,
  0x00, 0x0F, 0xC0, 0x00, 0x3E, 0x00, 0x03, 0xF0, 0x00, 0x07, 0xE0, 0x00,
  0x7E, 0x00, 0x00, 0x7E, 0x00, 0x1F, 0xC0, 0x00, 0x0F, 0xC0, 0x03, 0xF0,
  0x00, 0x00, 0xF8, 0x00, 0xFE, 0x00, 0x00, 0x1F, 0x80, 0x1F, 0xC0, 0x00,
  0x03, 0xF0, 0x03, 0xF8, 0x00, 0x00, 0x7E, 0x00, 0x7F, 0x00, 0x00, 0x0F,
  0xC0, 0x0F, 0xE0, 0x00, 0x01, 0xF8, 0x01, 0xFC, 0x00, 0x00, 0x3F, 0x00,
  0x3F, 0xC0, 0x00, 0x07, 0xE0, 0x07, 0xF8, 0x00, 0x01, 0xF8, 0x00, 0x7F,
  0x80, 0x00, 0x3F, 0x00, 0x0F, 0xF8, 0x00, 0x0F, 0xC0, 0x01, 0xFF, 0x80,
  0x03, 0xF0, 0x00, 0x1F, 0xF8, 0x00, 0xFC, 0x00, 0x03, 0xFF, 0x80, 0x3F,
  0x00, 0x00, 0x3F, 0xF8, 0x0F, 0xC0, 0x00, 0x03, 0xFF, 0x87, 0xE0, 0x00,
  0x00, 0x3F, 0xFB, 0xF0, 0x00, 0x00, 0x07, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x7F, 0xF8, 0x00, 0x00, 0x00, 0x07, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x7F,
  0xF8, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0x7F, 0xF8,
  0x00, 0x00, 0x1F, 0x87, 0xFF, 0x80, 0x00, 0x0F, 0xC0, 0x7F, 0xF0, 0x00,
  0x03, 0xF0, 0x07, 0xFF, 0x00, 0x01, 0xFC, 0x00, 0x7F, 0xF0, 0x00, 0x7E,
  0x00, 0x07, 0xFF, 0x00, 0x1F, 0x80, 0x00, 0x7F, 0xE0, 0x07, 0xF0, 0x00,
  0x07, 0xFE, 0x00, 0xFC, 0x00, 0x00, 0x7F, 0xC0, 0x3F, 0x00, 0x00, 0x07,
  0xFC, 0x07, 0xE0, 0x00, 0x00, 0x7F, 0x81, 0xF8, 0x00, 0x00, 0x0F, 0xF0,
  0x3F, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0xE0, 0x00, 0x00, 0x1F, 0xE1, 0xF8,
  0x00, 0x00, 0x01, 0xFC, 0x3F, 0x00, 0x00, 0x00, 0x3F, 0x87, 0xE0, 0x00,
  0x00, 0x07, 0xF0, 0xFC, 0x00, 0x00, 0x00, 0xFE, 0x1F, 0x80, 0x00, 0x00,
  0x1F, 0xC3, 0xF0, 0x00, 0x00, 0x03, 0xF8, 0x7E, 0x00, 0x00, 0x00, 0x7E,
  0x07, 0xC0, 0x00, 0x00, 0x0F, 0xC0, 0xFC, 0x00, 0x00, 0x03, 0xF8, 0x1F,
  0x80, 0x00, 0x00, 0x7E, 0x01, 0xF8, 0x00, 0x00, 0x1F, 0x80, 0x3F, 0x00,
  0x00, 0x03, 0xF0, 0x03, 0xF0, 0x00, 0x00, 0xFC, 0x00, 0x3F, 0x00, 0x00,
  0x3F, 0x00, 0x03, 0xF0, 0x00, 0x0F, 0xC0, 0x00, 0x3F, 0x80, 0x07, 0xE0,
  0x00, 0x01, 0xFC, 0x03, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xF8, 0x00, 0x00,
  0x00, 0x3F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00,
  0x01, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x7F, 0x01, 0xF0, 0x00, 0x00, 0x1F,
  0xC0, 0x07, 0x80, 0x00, 0x03, 0xF0, 0x00, 0x3C, 0x00, 0x00, 0x7E, 0x00,
  0x01, 0xE0, 0x00, 0x0F, 0xC0, 0x00, 0x1F, 0x00, 0x01, 0xF8, 0x00, 0x00,
  0xF8, 0x00, 0x3F, 0x00, 0x00, 0x0F, 0x80, 0x07, 0xF0, 0x00, 0x00, 0xFC,
  0x00, 0xFE, 0x00, 0x00, 0x07, 0xC0, 0x0F, 0xE0, 0x00, 0x00, 0x7E, 0x01,
  0xFC, 0x00, 0x00, 0x07, 0xE0, 0x1F, 0xC0, 0x00, 0x00, 0x7E, 0x03, 0xFC,
  0x00, 0x00, 0x07, 0xE0, 0x3F, 0x80, 0x00, 0x00, 0x7F, 0x07, 0xF8, 0x00,
  0x00, 0x07, 0xF0, 0x7F, 0x80, 0x00, 0x00, 0x7F, 0x07, 0xF8, 0x00, 0x00,
  0x07, 0xF0, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0x0F, 0xF0, 0x00, 0x00, 0x0F,
  0xF0, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0xF0, 0x00, 0x00, 0x0F, 0xF0,
  0xFF, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0xF0, 0x00, 0x00, 0x0F, 0xF0, 0xFF,
  0x00, 0x00, 0x01, 0xFF, 0x0F, 0xF0, 0x00, 0x00, 0x1F, 0xE0, 0xFF, 0x00,
  0x00, 0x01, 0xFE, 0x0F, 0xF0, 0x00, 0x00, 0x3F, 0xE0, 0x7F, 0x80, 0x00,
  0x03, 0xFE, 0x07, 0xF8, 0x00, 0x00, 0x7F, 0xE0, 0x7F, 0x80, 0x00, 0x07,
  0xFC, 0x07, 0xFC, 0x00, 0x00, 0xFF, 0xC0, 0x3F, 0xC0, 0x00, 0x1F, 0xFC,
  0x01, 0xFE, 0x00, 0x03, 0xFF, 0x80, 0x1F, 0xF0, 0x00, 0xFF, 0xF8, 0x00,
  0xFF, 0xC0, 0x3F, 0xFF, 0x00, 0x07, 0xFF, 0xFF, 0xDF, 0xF0, 0x00, 0x3F,
  0xFF, 0xF3, 0xFE, 0x00, 0x00, 0xFF, 0xF8, 0x3F, 0xE0, 0x00, 0x03, 0xFC,
  0x07, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x0F,
  0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF0,
  0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00,
  0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00,
  0x00, 0x3F, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFE, 0x00, 0x00, 0x00, 0x00,
  0x7F, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x00, 0x00, 0x03, 0xFE,
  0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00,
  0x00, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00,
  0x00, 0x1F, 0xF0, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x01,
  0xFF, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xC0, 0x00, 0x00, 0x00, 0x3F, 0xE0,
  0x00, 0x00, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x07, 0xF0, 0x00, 0xFF, 0x00, 0x3F,
  0xF0, 0x07, 0xFE, 0x00, 0xFF, 0xC0, 0x1F, 0xF8, 0x01, 0xFE, 0x00, 0x3F,
  0xC0, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x07, 0xF0, 0x01,
  0xFE, 0x00, 0x7F, 0xE0, 0x0F, 0xFC, 0x01, 0xFF, 0x80, 0x3F, 0xF0, 0x03,
  0xFC, 0x00, 0x7F, 0x80, 0x03, 0xC0, 0x00 };

const GFXglyph FreeSerifItalic48pt7bGlyphs[] PROGMEM = {
  {     0,  43,  65,  47,    3,  -63 },   // 0x30 '0'
  {   350,  34,  64,  47,    5,  -63 },   // 0x31 '1'
  {   622,  41,  63,  47,    1,  -62 },   // 0x32 '2'
  {   945,  42,  65,  47,    2,  -63 },   // 0x33 '3'
  {  1287,  45,  64,  47,    0,  -63 },   // 0x34 '4'
  {  1647,  45,  63,  47,    1,  -61 },   // 0x35 '5'
  {  2002,  46,  66,  47,    3,  -64 },   // 0x36 '6'
  {  2382,  43,  63,  47,    7,  -61 },   // 0x37 '7'
  {  2721,  43,  64,  47,    3,  -62 },   // 0x38 '8'
  {  3065,  44,  65,  47,    2,  -62 },   // 0x39 '9'
  {  3423,  19,  42,  23,    5,  -40 } }; // 0x3A ':'

const GFXfont FreeSerifItalic48pt7b PROGMEM = {
  (uint8_t  *)FreeSerifItalic48pt7bBitmaps,
  (GFXglyph *)FreeSerifItalic48pt7bGlyphs,
  0x30, 0x3A, 113 };

// Approx. 3607 bytes

#endif // FreeSerifItalic48pt7b_H
