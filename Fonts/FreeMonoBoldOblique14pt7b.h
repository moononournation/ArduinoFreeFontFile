#ifndef FreeMonoBoldOblique14pt7b_H
#define FreeMonoBoldOblique14pt7b_H

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

const uint8_t FreeMonoBoldOblique14pt7bBitmaps[] PROGMEM = {
  0x00, 0x0E, 0x3C, 0x78, 0xE1, 0xC7, 0x8E, 0x1C, 0x38, 0xE1, 0xC3, 0x80,
  0x0E, 0x3C, 0x78, 0xE0, 0xE7, 0xE7, 0xE6, 0xC6, 0xC6, 0xC4, 0x84, 0x84,
  0x03, 0x38, 0x1C, 0xE0, 0x73, 0x01, 0x9C, 0x0E, 0x70, 0xFF, 0xF7, 0xFF,
  0xCF, 0xFE, 0x1C, 0xE0, 0x73, 0x0F, 0xFF, 0x3F, 0xFC, 0xFF, 0xF0, 0xE6,
  0x03, 0x38, 0x1C, 0xE0, 0x73, 0x01, 0x9C, 0x00, 0x00, 0x60, 0x03, 0x80,
  0x1F, 0x01, 0xFF, 0x0F, 0xFC, 0x78, 0x71, 0xC1, 0x87, 0x80, 0x1F, 0xE0,
  0x3F, 0xC0, 0x1F, 0x88, 0x0E, 0x70, 0x39, 0xC1, 0xE7, 0xFF, 0x3F, 0xF8,
  0x5F, 0xC0, 0x1C, 0x00, 0x60, 0x03, 0x80, 0x0E, 0x00, 0x0F, 0x03, 0xF8,
  0x31, 0x86, 0x18, 0x61, 0x86, 0x30, 0x7F, 0x13, 0xCF, 0x0F, 0xC7, 0xC0,
  0xE3, 0xC0, 0xFE, 0x1C, 0x61, 0x86, 0x18, 0xE1, 0xFC, 0x0F, 0x00, 0x03,
  0xE0, 0x7F, 0x0F, 0xF1, 0xE4, 0x1C, 0x01, 0xC0, 0x1E, 0x03, 0xE0, 0x7F,
  0x77, 0x7F, 0xE7, 0xEE, 0x3C, 0xFF, 0xEF, 0xFE, 0x3F, 0xE0, 0x7F, 0xEE,
  0xEC, 0xC8, 0x03, 0x07, 0x0E, 0x1E, 0x1C, 0x38, 0x38, 0x70, 0x70, 0x60,
  0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xF0, 0x70, 0x78, 0x78, 0x30, 0x0C,
  0x1E, 0x1E, 0x0E, 0x0F, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0E, 0x0E,
  0x0E, 0x1C, 0x1C, 0x38, 0x38, 0x70, 0xE0, 0xC0, 0x02, 0x00, 0x70, 0x07,
  0x04, 0x62, 0xFF, 0xFF, 0xFE, 0x3F, 0x81, 0xF0, 0x3F, 0x07, 0x78, 0xE3,
  0x80, 0x01, 0x80, 0x0E, 0x00, 0x38, 0x00, 0xE0, 0x03, 0x03, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFE, 0x07, 0x00, 0x18, 0x00, 0x60, 0x03, 0x80, 0x0E, 0x00,
  0x30, 0x00, 0x1E, 0x38, 0xE1, 0x87, 0x0C, 0x30, 0x60, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0x80, 0x7F, 0xFE, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0E, 0x00,
  0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0x70, 0x00, 0xE0, 0x01,
  0xC0, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x07, 0x00, 0x0E, 0x00, 0x1C,
  0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0x70, 0x00, 0xE0, 0x00, 0xC0,
  0x00, 0x03, 0xE0, 0x7F, 0x87, 0xFC, 0x78, 0xF3, 0x83, 0xB8, 0x1D, 0x80,
  0xFC, 0x06, 0xE0, 0x77, 0x03, 0xB8, 0x19, 0xC0, 0xCE, 0x0E, 0x70, 0x73,
  0xC7, 0x0F, 0xF0, 0x7F, 0x01, 0xF0, 0x00, 0x01, 0xE0, 0x7E, 0x0F, 0xC1,
  0xCC, 0x01, 0xC0, 0x1C, 0x01, 0xC0, 0x18, 0x03, 0x80, 0x38, 0x03, 0x80,
  0x38, 0x03, 0x00, 0x70, 0x7F, 0xFF, 0xFF, 0x7F, 0xF0, 0x00, 0xF8, 0x07,
  0xF8, 0x1F, 0xF8, 0x38, 0xF0, 0xE0, 0xE1, 0x81, 0xC0, 0x03, 0x80, 0x0E,
  0x00, 0x78, 0x01, 0xE0, 0x07, 0x80, 0x3E, 0x00, 0xF8, 0x07, 0xC0, 0x1F,
  0x0E, 0x7F, 0xFC, 0xFF, 0xF9, 0xFF, 0xE0, 0x01, 0xF0, 0x1F, 0xE0, 0xFF,
  0xC3, 0x0F, 0x00, 0x1C, 0x00, 0x70, 0x03, 0x80, 0xFC, 0x03, 0xE0, 0x0F,
  0xC0, 0x07, 0x80, 0x0E, 0x00, 0x38, 0x00, 0xE0, 0x0F, 0x3F, 0xF8, 0xFF,
  0xC1, 0xFE, 0x00, 0x00, 0x78, 0x07, 0x80, 0x7C, 0x07, 0xE0, 0x7F, 0x07,
  0xB0, 0x39, 0x83, 0x9C, 0x38, 0xE3, 0x87, 0x3F, 0xFD, 0xFF, 0xEF, 0xFE,
  0x00, 0xE0, 0x3F, 0x81, 0xFC, 0x0F, 0xC0, 0x0F, 0xFC, 0x3F, 0xF1, 0xFF,
  0x87, 0x00, 0x1C, 0x00, 0x7F, 0x03, 0xFF, 0x0F, 0xFE, 0x38, 0x78, 0x00,
  0xE0, 0x03, 0x80, 0x0E, 0x00, 0x73, 0x83, 0xCF, 0xFE, 0x3F, 0xF0, 0x3F,
  0x00, 0x00, 0xF8, 0x0F, 0xF0, 0x7F, 0xC3, 0xC0, 0x1E, 0x00, 0xE0, 0x07,
  0x3C, 0x1F, 0xF8, 0xFF, 0xF3, 0xE3, 0xCF, 0x07, 0x38, 0x1C, 0xE0, 0xF3,
  0xC7, 0x8F, 0xFC, 0x1F, 0xE0, 0x3F, 0x00, 0x7F, 0xF7, 0xFF, 0xBF, 0xFD,
  0xC0, 0xE0, 0x0E, 0x00, 0x70, 0x07, 0x00, 0x30, 0x03, 0x80, 0x38, 0x01,
  0xC0, 0x1C, 0x00, 0xE0, 0x0E, 0x00, 0x70, 0x07, 0x00, 0x30, 0x00, 0x01,
  0xF0, 0x1F, 0xE0, 0xFF, 0xC7, 0x8F, 0x38, 0x1C, 0xE0, 0x73, 0x81, 0xCF,
  0x0E, 0x1F, 0xF0, 0x3F, 0x83, 0xFF, 0x1E, 0x1E, 0xE0, 0x3B, 0x80, 0xEF,
  0x0F, 0x3F, 0xFC, 0x7F, 0xE0, 0xFE, 0x00, 0x03, 0xF0, 0x1F, 0xE0, 0xFF,
  0x87, 0x8F, 0x1C, 0x1C, 0xE0, 0x73, 0x81, 0xCE, 0x0F, 0x3C, 0x7C, 0xFF,
  0xE1, 0xFF, 0x83, 0xCE, 0x00, 0x70, 0x07, 0x80, 0x3C, 0x3F, 0xE0, 0xFF,
  0x01, 0xF0, 0x00, 0x1C, 0xF3, 0xCE, 0x00, 0x00, 0x00, 0x73, 0xCF, 0x38,
  0x07, 0x0F, 0x0F, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x1C, 0x38, 0x30,
  0x70, 0x60, 0xC0, 0x80, 0x00, 0x04, 0x00, 0x70, 0x07, 0xC0, 0xFC, 0x0F,
  0xC0, 0xFC, 0x0F, 0x80, 0x0F, 0x80, 0x1F, 0x80, 0x1F, 0x80, 0x1F, 0x00,
  0x1C, 0x00, 0x00, 0x3F, 0xFE, 0xFF, 0xFD, 0xFF, 0xF8, 0x00, 0x00, 0x00,
  0x0F, 0xFF, 0xBF, 0xFF, 0x7F, 0xFE, 0x00, 0x00, 0x78, 0x00, 0xF8, 0x00,
  0x7C, 0x00, 0x7E, 0x00, 0x3F, 0x00, 0x1F, 0x00, 0xFC, 0x07, 0xC0, 0x3E,
  0x01, 0xF0, 0x07, 0x80, 0x00, 0x00, 0x00, 0x1F, 0x8F, 0xFB, 0xFF, 0xF0,
  0xFC, 0x0E, 0x01, 0xC0, 0xF0, 0xFC, 0x7E, 0x0F, 0x01, 0xC0, 0x00, 0x07,
  0x01, 0xE0, 0x3C, 0x07, 0x00, 0x01, 0xF0, 0x1F, 0xE0, 0xE3, 0xC7, 0x07,
  0x38, 0x1C, 0xC3, 0xE7, 0x3F, 0x19, 0xFC, 0x67, 0x31, 0xB9, 0xCE, 0xE6,
  0x33, 0x98, 0xCF, 0xE3, 0x9F, 0xCE, 0x3F, 0x38, 0x00, 0xE0, 0x03, 0x80,
  0x07, 0x18, 0x1F, 0xE0, 0x3E, 0x00, 0x03, 0xF8, 0x03, 0xFC, 0x01, 0xFE,
  0x00, 0x1F, 0x80, 0x1D, 0xC0, 0x0E, 0xE0, 0x0E, 0x70, 0x0E, 0x38, 0x07,
  0x0E, 0x07, 0xFF, 0x03, 0xFF, 0x83, 0xFF, 0xC3, 0x80, 0xE7, 0xF1, 0xFF,
  0xF8, 0xFF, 0xF8, 0x7F, 0x1F, 0xFC, 0x3F, 0xFE, 0x1F, 0xFF, 0x0E, 0x07,
  0x0E, 0x07, 0x0C, 0x0E, 0x0F, 0xFC, 0x1F, 0xFC, 0x1F, 0xFE, 0x1C, 0x0F,
  0x18, 0x07, 0x38, 0x07, 0x38, 0x0F, 0xFF, 0xFE, 0xFF, 0xFC, 0xFF, 0xF0,
  0x03, 0xF7, 0x07, 0xFF, 0x1F, 0xFF, 0x3E, 0x1E, 0x38, 0x0E, 0x70, 0x0C,
  0x70, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x18,
  0xF8, 0x38, 0x7F, 0xF8, 0x3F, 0xF0, 0x1F, 0xC0, 0x1F, 0xF8, 0x3F, 0xFC,
  0x1F, 0xFE, 0x0C, 0x1F, 0x1C, 0x0F, 0x1C, 0x07, 0x1C, 0x07, 0x1C, 0x07,
  0x18, 0x07, 0x38, 0x0E, 0x38, 0x0E, 0x38, 0x1E, 0x30, 0x3C, 0xFF, 0xF8,
  0xFF, 0xF0, 0xFF, 0xC0, 0x0F, 0xFF, 0x8F, 0xFF, 0xC7, 0xFF, 0xE0, 0xE0,
  0x70, 0x60, 0x30, 0x73, 0x98, 0x3F, 0xC0, 0x1F, 0xE0, 0x0F, 0xE0, 0x06,
  0x70, 0x07, 0x00, 0x03, 0x80, 0xC1, 0xC0, 0x63, 0xFF, 0xF3, 0xFF, 0xF8,
  0xFF, 0xFC, 0x1F, 0xFF, 0xC7, 0xFF, 0xE1, 0xFF, 0xF8, 0x18, 0x0E, 0x0E,
  0x03, 0x83, 0x9C, 0xC0, 0xFF, 0x00, 0x3F, 0x80, 0x0F, 0xE0, 0x07, 0x38,
  0x01, 0xC0, 0x00, 0x70, 0x00, 0x18, 0x00, 0x1F, 0xE0, 0x0F, 0xF8, 0x03,
  0xFE, 0x00, 0x01, 0xFB, 0x07, 0xFF, 0x0F, 0xFF, 0x1E, 0x0F, 0x38, 0x06,
  0x70, 0x00, 0x70, 0x00, 0x70, 0x00, 0xE0, 0xFE, 0xE1, 0xFE, 0xE1, 0xFE,
  0xE0, 0x1C, 0xF8, 0x1C, 0x7F, 0xF8, 0x3F, 0xF8, 0x0F, 0xC0, 0x0F, 0xCF,
  0xC3, 0xF7, 0xF0, 0xF8, 0xF8, 0x18, 0x1C, 0x0E, 0x07, 0x03, 0x81, 0x80,
  0xE0, 0xE0, 0x3F, 0xF8, 0x0F, 0xFE, 0x07, 0xFF, 0x81, 0xC0, 0xC0, 0x70,
  0x70, 0x18, 0x1C, 0x1F, 0x9F, 0x8F, 0xE7, 0xE1, 0xF9, 0xF8, 0x1F, 0xFC,
  0xFF, 0xF1, 0xFF, 0xC0, 0x60, 0x03, 0x80, 0x0E, 0x00, 0x38, 0x00, 0xC0,
  0x03, 0x00, 0x1C, 0x00, 0x70, 0x01, 0xC0, 0x06, 0x03, 0xFF, 0x8F, 0xFE,
  0x3F, 0xF8, 0x01, 0xFF, 0xC0, 0x7F, 0xF0, 0x1F, 0xF8, 0x00, 0x30, 0x00,
  0x1C, 0x00, 0x07, 0x00, 0x01, 0xC0, 0x00, 0x60, 0x00, 0x38, 0x1C, 0x0E,
  0x07, 0x03, 0x81, 0x80, 0xE0, 0x60, 0xF0, 0x3F, 0xF8, 0x0F, 0xFC, 0x00,
  0x7C, 0x00, 0x1F, 0xCF, 0xC7, 0xF3, 0xF1, 0xFC, 0xF8, 0x18, 0x78, 0x0E,
  0x3C, 0x03, 0x9C, 0x00, 0xFE, 0x00, 0x3F, 0x80, 0x0F, 0xF0, 0x07, 0x9C,
  0x01, 0xC7, 0x80, 0x70, 0xE0, 0x18, 0x3C, 0x1F, 0xC7, 0xCF, 0xF1, 0xF3,
  0xF8, 0x78, 0x1F, 0xF0, 0x7F, 0xE0, 0x7F, 0x80, 0x38, 0x00, 0x70, 0x00,
  0xE0, 0x01, 0x80, 0x07, 0x00, 0x0E, 0x00, 0x1C, 0x0C, 0x30, 0x38, 0x60,
  0x71, 0xC0, 0xFF, 0xFF, 0xBF, 0xFF, 0x7F, 0xFE, 0x1F, 0x01, 0xE1, 0xF0,
  0x3F, 0x1F, 0x07, 0xE0, 0xF8, 0x7C, 0x1F, 0x8F, 0xC1, 0xF9, 0xF8, 0x1F,
  0x9F, 0x81, 0xDF, 0xB8, 0x19, 0xFB, 0x83, 0x9F, 0x30, 0x39, 0xE3, 0x03,
  0x8E, 0x70, 0x38, 0x07, 0x0F, 0xE1, 0xF8, 0xFE, 0x3F, 0x8F, 0xC3, 0xF8,
  0x3E, 0x1F, 0xCF, 0xC7, 0xF3, 0xF1, 0xF8, 0x3E, 0x1C, 0x1F, 0x87, 0x07,
  0xE1, 0xC1, 0xFC, 0x60, 0x67, 0x38, 0x19, 0xEE, 0x0E, 0x3B, 0x83, 0x8F,
  0xC0, 0xE1, 0xF0, 0x30, 0x7C, 0x3F, 0x8F, 0x0F, 0xE3, 0xC3, 0xF0, 0xE0,
  0x01, 0xF0, 0x07, 0xFC, 0x0F, 0xFE, 0x3E, 0x1E, 0x38, 0x0F, 0x70, 0x07,
  0x70, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x0E, 0xE0, 0x0E, 0xF0, 0x1C,
  0x78, 0x7C, 0x7F, 0xF0, 0x3F, 0xE0, 0x0F, 0x80, 0x1F, 0xFC, 0x3F, 0xFE,
  0x1F, 0xFF, 0x0E, 0x0F, 0x0E, 0x07, 0x0C, 0x07, 0x0C, 0x07, 0x1C, 0x1E,
  0x1F, 0xFC, 0x1F, 0xF8, 0x1F, 0xF0, 0x38, 0x00, 0x38, 0x00, 0xFF, 0x80,
  0xFF, 0x80, 0xFF, 0x00, 0x01, 0xF0, 0x07, 0xFC, 0x1F, 0xFE, 0x3E, 0x1E,
  0x38, 0x0F, 0x70, 0x07, 0x70, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x0E,
  0xE0, 0x0E, 0xF0, 0x1C, 0x78, 0x78, 0x7F, 0xF0, 0x3F, 0xE0, 0x0F, 0x80,
  0x3F, 0x98, 0x7F, 0xFC, 0x7F, 0xF8, 0x70, 0xE0, 0x1F, 0xFC, 0x0F, 0xFF,
  0x07, 0xFF, 0xC0, 0xC1, 0xE0, 0xE0, 0x70, 0x70, 0x38, 0x38, 0x78, 0x1F,
  0xF8, 0x0F, 0xF8, 0x0F, 0xF8, 0x07, 0x1E, 0x03, 0x87, 0x81, 0x81, 0xC3,
  0xF8, 0xFF, 0xFC, 0x3F, 0xFC, 0x1E, 0x03, 0xE6, 0x1F, 0xFC, 0x7F, 0xF0,
  0xE0, 0xE3, 0x81, 0x87, 0x00, 0x0F, 0x80, 0x0F, 0xF0, 0x0F, 0xF0, 0x03,
  0xF1, 0x80, 0xE7, 0x01, 0xCF, 0x07, 0x9F, 0xFE, 0x3F, 0xF8, 0x0F, 0xC0,
  0x7F, 0xFE, 0xFF, 0xFD, 0xFF, 0xFB, 0x1C, 0x7E, 0x38, 0xDC, 0x73, 0xB0,
  0xC3, 0x03, 0x80, 0x07, 0x00, 0x0E, 0x00, 0x18, 0x00, 0x30, 0x00, 0xE0,
  0x0F, 0xF8, 0x3F, 0xF0, 0x3F, 0xE0, 0x7E, 0x3F, 0xFE, 0x7F, 0x7E, 0x7F,
  0x30, 0x1C, 0x70, 0x1C, 0x70, 0x1C, 0x70, 0x1C, 0x60, 0x18, 0x60, 0x38,
  0xE0, 0x38, 0xE0, 0x38, 0xE0, 0x70, 0xF0, 0xF0, 0x7F, 0xE0, 0x7F, 0xC0,
  0x1F, 0x00, 0x7E, 0x1F, 0xBF, 0x8F, 0xEF, 0xE3, 0xF8, 0xE0, 0x38, 0x38,
  0x0C, 0x0E, 0x07, 0x03, 0x83, 0x80, 0x70, 0xC0, 0x1C, 0x70, 0x07, 0x38,
  0x01, 0xCE, 0x00, 0x7F, 0x00, 0x0F, 0x80, 0x03, 0xE0, 0x00, 0xF0, 0x00,
  0x38, 0x00, 0xFE, 0x3F, 0xFE, 0x7F, 0xFC, 0x7F, 0x60, 0x0E, 0x63, 0x8C,
  0xE7, 0x9C, 0xE7, 0x9C, 0xEF, 0x98, 0xED, 0xB8, 0xFD, 0xF8, 0xF9, 0xF0,
  0xF9, 0xF0, 0xF1, 0xF0, 0xF1, 0xE0, 0xE1, 0xE0, 0xE1, 0xE0, 0x0F, 0x87,
  0xC7, 0xE3, 0xF1, 0xF0, 0xFC, 0x1C, 0x3C, 0x07, 0x9E, 0x00, 0xEF, 0x00,
  0x1F, 0x00, 0x07, 0x80, 0x01, 0xE0, 0x00, 0xFC, 0x00, 0x77, 0x80, 0x78,
  0xE0, 0x3C, 0x1C, 0x1F, 0x0F, 0x8F, 0xE7, 0xF3, 0xF1, 0xF8, 0x7C, 0x3F,
  0xF8, 0xFF, 0xF1, 0xF9, 0xC1, 0xC3, 0xC7, 0x03, 0x9C, 0x07, 0xF0, 0x07,
  0xC0, 0x0F, 0x00, 0x0C, 0x00, 0x18, 0x00, 0x70, 0x00, 0xE0, 0x0F, 0xF8,
  0x3F, 0xF0, 0x7F, 0xC0, 0x0F, 0xFE, 0x1F, 0xFC, 0x3F, 0xF8, 0x60, 0xE1,
  0xC3, 0x83, 0x8E, 0x00, 0x38, 0x00, 0xE0, 0x03, 0x80, 0x0E, 0x00, 0x38,
  0x70, 0xE0, 0xE3, 0x81, 0xCF, 0xFF, 0x1F, 0xFE, 0x3F, 0xFC, 0x0F, 0xC3,
  0xF0, 0xFC, 0x30, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x18, 0x0E, 0x03, 0x80,
  0xE0, 0x30, 0x0C, 0x07, 0x01, 0xC0, 0x70, 0x18, 0x0F, 0xC3, 0xF0, 0xFC,
  0x00, 0x41, 0xC3, 0x87, 0x06, 0x0E, 0x1C, 0x38, 0x38, 0x70, 0xE1, 0xC1,
  0xC3, 0x87, 0x0E, 0x0E, 0x1C, 0x38, 0x70, 0x60, 0xC0, 0x0F, 0xC3, 0xF0,
  0xFC, 0x06, 0x03, 0x80, 0xE0, 0x38, 0x0C, 0x03, 0x01, 0xC0, 0x70, 0x1C,
  0x06, 0x03, 0x80, 0xE0, 0x38, 0x0E, 0x03, 0x0F, 0xC3, 0xF0, 0xFC, 0x00,
  0x01, 0x00, 0x38, 0x07, 0x80, 0xFC, 0x1F, 0xE3, 0xCE, 0x78, 0xFF, 0x07,
  0x60, 0x30, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xC0, 0xCE, 0x67, 0x30,
  0x07, 0xE0, 0x7F, 0xC1, 0xFF, 0x80, 0x0E, 0x0F, 0xF8, 0xFF, 0xE7, 0xFF,
  0x3C, 0x1C, 0xE0, 0xF3, 0xFF, 0xFF, 0xFF, 0xCF, 0xFE, 0x0F, 0x00, 0x0F,
  0x80, 0x07, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x00, 0x33, 0xE0, 0x3F, 0xFC,
  0x1F, 0xFE, 0x0F, 0x07, 0x87, 0x01, 0xC3, 0x00, 0xE3, 0x80, 0x71, 0xC0,
  0x70, 0xF0, 0x79, 0xFF, 0xF9, 0xFF, 0xF8, 0xFB, 0xF0, 0x00, 0x03, 0xF4,
  0x3F, 0xFC, 0xFF, 0xF3, 0xE0, 0xE7, 0x01, 0xDC, 0x00, 0x38, 0x00, 0x70,
  0x00, 0xF0, 0x39, 0xFF, 0xF1, 0xFF, 0xC0, 0xFE, 0x00, 0x00, 0x1F, 0x00,
  0x1F, 0x00, 0x1E, 0x00, 0x06, 0x00, 0x0E, 0x07, 0xEE, 0x1F, 0xFE, 0x3F,
  0xFC, 0x78, 0x3C, 0x70, 0x1C, 0xE0, 0x1C, 0xE0, 0x18, 0xE0, 0x38, 0xF0,
  0x78, 0x7F, 0xFE, 0x7F, 0xFE, 0x1F, 0x3C, 0x03, 0xE0, 0x3F, 0xE3, 0xFF,
  0x8E, 0x0F, 0x70, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x3B, 0xFF,
  0xE7, 0xFF, 0x87, 0xF0, 0x00, 0x7F, 0x00, 0x7F, 0xC0, 0x7F, 0xC0, 0x70,
  0x00, 0x38, 0x00, 0xFF, 0xE0, 0xFF, 0xF0, 0x3F, 0xF8, 0x07, 0x00, 0x03,
  0x80, 0x01, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0x70, 0x01, 0xFF, 0xC1,
  0xFF, 0xE0, 0xFF, 0xE0, 0x00, 0x07, 0xCF, 0x1F, 0xFF, 0x3F, 0xFF, 0x78,
  0x3C, 0x70, 0x38, 0xE0, 0x18, 0xE0, 0x38, 0xE0, 0x38, 0xF0, 0xF8, 0x7F,
  0xF0, 0x7F, 0xF0, 0x1F, 0x70, 0x00, 0x70, 0x00, 0xE0, 0x3F, 0xE0, 0x7F,
  0xC0, 0x7F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1E, 0x00, 0x0E, 0x00, 0x0E,
  0x00, 0x0E, 0xF8, 0x0F, 0xFC, 0x0F, 0xFE, 0x1E, 0x0E, 0x1C, 0x0E, 0x1C,
  0x0C, 0x18, 0x0C, 0x38, 0x1C, 0x38, 0x1C, 0xFC, 0x7F, 0xFE, 0x7F, 0xFC,
  0x7E, 0x01, 0xE0, 0x0E, 0x00, 0x70, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x7F,
  0x03, 0xF0, 0x01, 0x80, 0x1C, 0x00, 0xE0, 0x07, 0x00, 0x30, 0x03, 0x83,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x78, 0x03, 0x80, 0x1C, 0x00, 0x00,
  0x00, 0x0F, 0xFC, 0x7F, 0xE3, 0xFF, 0x00, 0x30, 0x01, 0x80, 0x1C, 0x00,
  0xE0, 0x07, 0x00, 0x30, 0x03, 0x80, 0x1C, 0x00, 0xE0, 0x07, 0x00, 0x71,
  0xFF, 0x8F, 0xF8, 0x7F, 0x00, 0x0F, 0x00, 0x3E, 0x00, 0x7C, 0x00, 0x38,
  0x00, 0x60, 0x00, 0xCF, 0xC3, 0x9F, 0x87, 0x3F, 0x0F, 0xF0, 0x1F, 0x80,
  0x7E, 0x00, 0xFE, 0x01, 0xDE, 0x03, 0x1E, 0x1E, 0x3F, 0xFC, 0x7F, 0xF8,
  0xFC, 0x07, 0xE0, 0x7F, 0x03, 0xF8, 0x01, 0x80, 0x1C, 0x00, 0xE0, 0x07,
  0x00, 0x30, 0x01, 0x80, 0x1C, 0x00, 0xE0, 0x07, 0x00, 0x30, 0x03, 0x83,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x3D, 0xCF, 0x1F, 0xFF, 0xCF, 0xFF, 0xE3,
  0x8E, 0x71, 0x8E, 0x39, 0xC7, 0x1C, 0xE3, 0x8E, 0x71, 0x87, 0x38, 0xC3,
  0x7E, 0xF1, 0xFF, 0x79, 0xFF, 0x3C, 0xF0, 0x1E, 0xF8, 0x3F, 0xFC, 0x3F,
  0xFE, 0x1E, 0x0E, 0x1C, 0x0E, 0x1C, 0x0C, 0x18, 0x1C, 0x38, 0x1C, 0x38,
  0x1C, 0xFC, 0x3F, 0xFE, 0x3F, 0xFC, 0x3E, 0x07, 0xE0, 0x7F, 0xE3, 0xFF,
  0x9E, 0x0F, 0x70, 0x1F, 0x80, 0x7E, 0x01, 0xF8, 0x0E, 0xF0, 0x79, 0xFF,
  0xC7, 0xFE, 0x07, 0xE0, 0x0F, 0x3E, 0x07, 0xFF, 0xE1, 0xFF, 0xF8, 0x1E,
  0x0F, 0x07, 0x01, 0xC1, 0x80, 0x70, 0xE0, 0x1C, 0x38, 0x0E, 0x0F, 0x07,
  0x83, 0xFF, 0xC1, 0xFF, 0xE0, 0x73, 0xE0, 0x1C, 0x00, 0x06, 0x00, 0x07,
  0xF0, 0x03, 0xFC, 0x00, 0xFF, 0x00, 0x00, 0x07, 0xCF, 0x8F, 0xFF, 0xCF,
  0xFF, 0xCF, 0x07, 0x87, 0x01, 0xC7, 0x00, 0xE3, 0x80, 0x61, 0xC0, 0x70,
  0xF0, 0x78, 0x3F, 0xFC, 0x1F, 0xFE, 0x03, 0xE6, 0x00, 0x07, 0x00, 0x03,
  0x80, 0x0F, 0xF0, 0x0F, 0xF8, 0x03, 0xF8, 0x00, 0x1F, 0x1E, 0x1F, 0x7F,
  0x1F, 0xFF, 0x07, 0xE0, 0x07, 0x80, 0x06, 0x00, 0x0E, 0x00, 0x0E, 0x00,
  0x0E, 0x00, 0x7F, 0xF0, 0xFF, 0xF0, 0xFF, 0xE0, 0x0F, 0xF3, 0xFF, 0x3F,
  0xF7, 0x06, 0x7C, 0x07, 0xFE, 0x1F, 0xF0, 0x07, 0x60, 0xFF, 0xFE, 0xFF,
  0xC1, 0xF8, 0x0C, 0x01, 0xC0, 0x1C, 0x01, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF,
  0xE3, 0x80, 0x38, 0x03, 0x00, 0x30, 0x07, 0x00, 0x70, 0x07, 0xFF, 0x3F,
  0xF1, 0xFC, 0x78, 0x7F, 0xE1, 0xFF, 0x07, 0xDC, 0x07, 0x70, 0x19, 0xC0,
  0xE7, 0x03, 0x9C, 0x0E, 0x70, 0xF1, 0xFF, 0xF3, 0xFF, 0xC7, 0x9E, 0xFE,
  0x7F, 0xFE, 0x7F, 0xFC, 0x7E, 0x38, 0x38, 0x38, 0x70, 0x38, 0x70, 0x1C,
  0xE0, 0x1D, 0xC0, 0x1F, 0x80, 0x1F, 0x80, 0x0F, 0x00, 0x0E, 0x00, 0xF8,
  0x3F, 0xF8, 0x3F, 0xF8, 0x3E, 0x73, 0x9C, 0x73, 0x9C, 0x77, 0xB8, 0x7F,
  0xF8, 0x7F, 0xF0, 0x7D, 0xF0, 0x79, 0xE0, 0x79, 0xE0, 0x70, 0xC0, 0x1F,
  0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x0F, 0x3C, 0x07, 0xF0, 0x03, 0xE0, 0x07,
  0xE0, 0x0F, 0xF0, 0x1E, 0x78, 0x7C, 0x7C, 0xFC, 0xFE, 0xFC, 0xFC, 0x0F,
  0x87, 0xC3, 0xF9, 0xFC, 0x3E, 0x1F, 0x03, 0x81, 0x80, 0x70, 0x70, 0x0E,
  0x1C, 0x00, 0xE7, 0x00, 0x1D, 0xC0, 0x03, 0xB8, 0x00, 0x3E, 0x00, 0x07,
  0x80, 0x00, 0xE0, 0x00, 0x18, 0x00, 0x07, 0x00, 0x1F, 0xF0, 0x07, 0xFE,
  0x00, 0x7F, 0x80, 0x00, 0x1F, 0xFC, 0x7F, 0xF1, 0xFF, 0xC6, 0x1E, 0x19,
  0xE0, 0x0F, 0x00, 0x78, 0x07, 0x80, 0x3C, 0x39, 0xFF, 0xE7, 0xFF, 0xBF,
  0xFC, 0x01, 0xC1, 0xF0, 0x78, 0x38, 0x0E, 0x03, 0x01, 0xC0, 0x70, 0x1C,
  0x3E, 0x0F, 0x03, 0xE0, 0x38, 0x0E, 0x03, 0x01, 0xC0, 0x70, 0x1C, 0x07,
  0xC1, 0xF0, 0x38, 0x00, 0x0C, 0x31, 0xC7, 0x18, 0x61, 0x8E, 0x38, 0xC3,
  0x0C, 0x71, 0xC7, 0x18, 0x63, 0x8E, 0x38, 0xC0, 0x03, 0x80, 0xF8, 0x1F,
  0x00, 0xE0, 0x38, 0x07, 0x00, 0xE0, 0x18, 0x03, 0x80, 0x7C, 0x07, 0x81,
  0xF0, 0x70, 0x0C, 0x03, 0x80, 0x70, 0x0E, 0x03, 0x81, 0xF0, 0x7C, 0x07,
  0x00, 0x1E, 0x03, 0xF8, 0xFF, 0xCF, 0xCF, 0xF0, 0x3F, 0x00, 0xE0 };

const GFXglyph FreeMonoBoldOblique14pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,  16,    0,    0 },   // 0x20 ' '
  {     1,   7,  17,  16,    6,  -16 },   // 0x21 '!'
  {    16,   8,   8,  16,    7,  -15 },   // 0x22 '"'
  {    24,  14,  18,  16,    3,  -16 },   // 0x23 '#'
  {    56,  14,  21,  16,    2,  -17 },   // 0x24 '$'
  {    93,  12,  17,  16,    4,  -16 },   // 0x25 '%'
  {   119,  12,  15,  16,    3,  -14 },   // 0x26 '&'
  {   142,   4,   8,  16,    9,  -15 },   // 0x27 '''
  {   146,   8,  21,  16,    8,  -16 },   // 0x28 '('
  {   167,   8,  21,  16,    3,  -16 },   // 0x29 ')'
  {   188,  12,  11,  16,    5,  -16 },   // 0x2A '*'
  {   205,  14,  14,  16,    3,  -13 },   // 0x2B '+'
  {   230,   7,   8,  16,    3,   -3 },   // 0x2C ','
  {   237,  14,   3,  16,    3,   -8 },   // 0x2D '-'
  {   243,   4,   4,  16,    6,   -3 },   // 0x2E '.'
  {   245,  16,  22,  16,    2,  -18 },   // 0x2F '/'
  {   289,  13,  18,  16,    4,  -17 },   // 0x30 '0'
  {   319,  12,  17,  16,    2,  -16 },   // 0x31 '1'
  {   345,  15,  18,  16,    2,  -17 },   // 0x32 '2'
  {   379,  14,  18,  16,    3,  -17 },   // 0x33 '3'
  {   411,  13,  17,  16,    3,  -16 },   // 0x34 '4'
  {   439,  14,  17,  16,    3,  -16 },   // 0x35 '5'
  {   469,  14,  17,  16,    4,  -16 },   // 0x36 '6'
  {   499,  13,  17,  16,    5,  -16 },   // 0x37 '7'
  {   527,  14,  18,  16,    3,  -17 },   // 0x38 '8'
  {   559,  14,  18,  16,    3,  -17 },   // 0x39 '9'
  {   591,   6,  12,  16,    6,  -11 },   // 0x3A ':'
  {   600,   8,  16,  16,    4,  -11 },   // 0x3B ';'
  {   616,  14,  13,  16,    3,  -13 },   // 0x3C '<'
  {   639,  15,   8,  16,    2,  -11 },   // 0x3D '='
  {   654,  15,  13,  16,    2,  -13 },   // 0x3E '>'
  {   679,  11,  16,  16,    6,  -15 },   // 0x3F '?'
  {   701,  14,  21,  16,    3,  -16 },   // 0x40 '@'
  {   738,  17,  16,  16,    0,  -15 },   // 0x41 'A'
  {   772,  16,  16,  16,    1,  -15 },   // 0x42 'B'
  {   804,  16,  16,  16,    2,  -15 },   // 0x43 'C'
  {   836,  16,  16,  16,    1,  -15 },   // 0x44 'D'
  {   868,  17,  16,  16,    0,  -15 },   // 0x45 'E'
  {   902,  18,  16,  16,    0,  -15 },   // 0x46 'F'
  {   938,  16,  16,  16,    2,  -15 },   // 0x47 'G'
  {   970,  18,  16,  16,    0,  -15 },   // 0x48 'H'
  {  1006,  14,  16,  16,    2,  -15 },   // 0x49 'I'
  {  1034,  18,  16,  16,    0,  -15 },   // 0x4A 'J'
  {  1070,  18,  16,  16,    0,  -15 },   // 0x4B 'K'
  {  1106,  15,  16,  16,    1,  -15 },   // 0x4C 'L'
  {  1136,  20,  16,  16,    0,  -15 },   // 0x4D 'M'
  {  1176,  18,  16,  16,    1,  -15 },   // 0x4E 'N'
  {  1212,  16,  16,  16,    1,  -15 },   // 0x4F 'O'
  {  1244,  16,  16,  16,    1,  -15 },   // 0x50 'P'
  {  1276,  16,  20,  16,    1,  -15 },   // 0x51 'Q'
  {  1316,  17,  16,  16,    0,  -15 },   // 0x52 'R'
  {  1350,  15,  16,  16,    2,  -15 },   // 0x53 'S'
  {  1380,  15,  16,  16,    2,  -15 },   // 0x54 'T'
  {  1410,  16,  16,  16,    2,  -15 },   // 0x55 'U'
  {  1442,  18,  16,  16,    1,  -15 },   // 0x56 'V'
  {  1478,  16,  16,  16,    2,  -15 },   // 0x57 'W'
  {  1510,  18,  16,  16,    0,  -15 },   // 0x58 'X'
  {  1546,  15,  16,  16,    2,  -15 },   // 0x59 'Y'
  {  1576,  15,  16,  16,    1,  -15 },   // 0x5A 'Z'
  {  1606,  10,  21,  16,    6,  -16 },   // 0x5B '['
  {  1633,   7,  22,  16,    6,  -18 },   // 0x5C '\'
  {  1653,  10,  21,  16,    3,  -16 },   // 0x5D ']'
  {  1680,  12,   9,  16,    4,  -17 },   // 0x5E '^'
  {  1694,  17,   3,  16,   -1,    3 },   // 0x5F '_'
  {  1701,   4,   5,  16,    7,  -17 },   // 0x60 '`'
  {  1704,  14,  12,  16,    2,  -11 },   // 0x61 'a'
  {  1725,  17,  17,  16,    0,  -16 },   // 0x62 'b'
  {  1762,  15,  12,  16,    2,  -11 },   // 0x63 'c'
  {  1785,  16,  17,  16,    2,  -16 },   // 0x64 'd'
  {  1819,  14,  12,  16,    2,  -11 },   // 0x65 'e'
  {  1840,  17,  17,  16,    2,  -16 },   // 0x66 'f'
  {  1877,  16,  17,  16,    2,  -11 },   // 0x67 'g'
  {  1911,  16,  17,  16,    1,  -16 },   // 0x68 'h'
  {  1945,  13,  17,  16,    2,  -16 },   // 0x69 'i'
  {  1973,  13,  22,  16,    2,  -16 },   // 0x6A 'j'
  {  2009,  15,  17,  16,    1,  -16 },   // 0x6B 'k'
  {  2041,  13,  17,  16,    2,  -16 },   // 0x6C 'l'
  {  2069,  17,  12,  16,    0,  -11 },   // 0x6D 'm'
  {  2095,  16,  12,  16,    1,  -11 },   // 0x6E 'n'
  {  2119,  14,  12,  16,    2,  -11 },   // 0x6F 'o'
  {  2140,  18,  17,  16,   -1,  -11 },   // 0x70 'p'
  {  2179,  17,  17,  16,    1,  -11 },   // 0x71 'q'
  {  2216,  16,  12,  16,    1,  -11 },   // 0x72 'r'
  {  2240,  12,  12,  16,    3,  -11 },   // 0x73 's'
  {  2258,  12,  16,  16,    3,  -15 },   // 0x74 't'
  {  2282,  14,  12,  16,    2,  -11 },   // 0x75 'u'
  {  2303,  16,  12,  16,    2,  -11 },   // 0x76 'v'
  {  2327,  16,  12,  16,    2,  -11 },   // 0x77 'w'
  {  2351,  16,  12,  16,    1,  -11 },   // 0x78 'x'
  {  2375,  19,  17,  16,   -1,  -11 },   // 0x79 'y'
  {  2416,  14,  12,  16,    2,  -11 },   // 0x7A 'z'
  {  2437,  10,  21,  16,    5,  -16 },   // 0x7B '{'
  {  2464,   6,  21,  16,    6,  -16 },   // 0x7C '|'
  {  2480,  11,  21,  16,    3,  -16 },   // 0x7D '}'
  {  2509,  13,   6,  16,    3,  -10 } }; // 0x7E '~'

const GFXfont FreeMonoBoldOblique14pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBoldOblique14pt7bBitmaps,
  (GFXglyph *)FreeMonoBoldOblique14pt7bGlyphs,
  0x20, 0x7E, 27 };

// Approx. 3191 bytes

#endif // FreeMonoBoldOblique14pt7b_H
