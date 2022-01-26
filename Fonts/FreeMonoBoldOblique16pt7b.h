#ifndef FreeMonoBoldOblique16pt7b_H
#define FreeMonoBoldOblique16pt7b_H

#ifdef __AVR__
#include <avr/io.h>
#include <avr/pgmspace.h>
#elif defined(ESP8266)
#include <pgmspace.h>
#elif defined(__IMXRT1052__) || defined(__IMXRT1062__)
// PROGMEM is defefind for T4 to place data in specific memory section
#undef PROGMEM
#define PROGMEM
#else
#define PROGMEM
#endif

const uint8_t FreeMonoBoldOblique16pt7bBitmaps[] PROGMEM = {
  0x00, 0x06, 0x0F, 0x1F, 0x1F, 0x1E, 0x1E, 0x1E, 0x1E, 0x3C, 0x3C, 0x3C,
  0x38, 0x38, 0x38, 0x00, 0x00, 0x78, 0xF8, 0xF8, 0xF0, 0xF1, 0xDE, 0x3B,
  0x8F, 0x71, 0xCE, 0x39, 0x87, 0x30, 0xC6, 0x18, 0x83, 0x00, 0x00, 0xC6,
  0x01, 0xCE, 0x01, 0xCE, 0x03, 0xCE, 0x03, 0x9E, 0x03, 0x9C, 0x03, 0x9C,
  0x1F, 0xFF, 0x3F, 0xFF, 0x3F, 0xFF, 0x0F, 0x38, 0x0E, 0x78, 0x0E, 0x70,
  0x0E, 0x70, 0x7F, 0xFC, 0xFF, 0xFC, 0xFF, 0xFC, 0x3C, 0xE0, 0x39, 0xE0,
  0x39, 0xC0, 0x39, 0xC0, 0x71, 0xC0, 0x73, 0x80, 0x71, 0x80, 0x00, 0x70,
  0x00, 0xE0, 0x01, 0xC0, 0x1F, 0xF0, 0x7F, 0xE1, 0xFF, 0xC7, 0x83, 0x8E,
  0x07, 0x1C, 0x00, 0x3F, 0x00, 0x7F, 0xC0, 0x3F, 0xC0, 0x0F, 0xC0, 0x03,
  0x9C, 0x07, 0x38, 0x0E, 0xF8, 0x79, 0xFF, 0xF3, 0xFF, 0xC6, 0xFE, 0x00,
  0x70, 0x00, 0xE0, 0x03, 0xC0, 0x07, 0x00, 0x0E, 0x00, 0x07, 0x80, 0x1F,
  0x80, 0x63, 0x81, 0x83, 0x03, 0x06, 0x06, 0x1C, 0x0E, 0x70, 0x0F, 0xCF,
  0x0F, 0xFC, 0x0F, 0xC1, 0xFC, 0x07, 0x8F, 0x80, 0x3F, 0x80, 0xC7, 0x03,
  0x06, 0x06, 0x0C, 0x0E, 0x30, 0x1F, 0xC0, 0x0F, 0x00, 0x01, 0xF8, 0x0F,
  0xF0, 0x7F, 0x83, 0xCC, 0x0E, 0x00, 0x38, 0x00, 0xF0, 0x03, 0xC0, 0x1F,
  0x80, 0xFE, 0x77, 0xBB, 0xFC, 0xFE, 0xE1, 0xF3, 0x87, 0xCF, 0xFF, 0x9F,
  0xFE, 0x3F, 0xF0, 0x7F, 0xEE, 0xEC, 0xCC, 0x80, 0x01, 0x01, 0xC1, 0xE0,
  0xE0, 0xE0, 0xE0, 0x70, 0x70, 0x38, 0x38, 0x1C, 0x0E, 0x0E, 0x07, 0x03,
  0x81, 0xC0, 0xE0, 0x70, 0x38, 0x1E, 0x07, 0x03, 0xC1, 0xE0, 0x70, 0x30,
  0x00, 0x00, 0x07, 0x03, 0xC1, 0xE0, 0x70, 0x3C, 0x0E, 0x07, 0x03, 0x81,
  0xC0, 0xE0, 0x70, 0x38, 0x38, 0x1C, 0x0E, 0x0E, 0x07, 0x07, 0x03, 0x83,
  0x83, 0xC3, 0xC1, 0xC0, 0x40, 0x00, 0x03, 0x80, 0x3C, 0x01, 0xC0, 0x8E,
  0x2F, 0xFF, 0xFF, 0xFD, 0xFF, 0x83, 0xE0, 0x3F, 0x83, 0xFC, 0x1C, 0xF1,
  0xC7, 0x84, 0x00, 0x00, 0x00, 0x60, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0,
  0x01, 0xC0, 0x01, 0xC0, 0x01, 0xC0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
  0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x07, 0x00, 0x07, 0x00,
  0x07, 0x00, 0x0F, 0x1E, 0x1C, 0x38, 0x38, 0x70, 0x60, 0xE0, 0xC0, 0x7F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00,
  0x70, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x80, 0x01, 0xC0, 0x00, 0xE0,
  0x00, 0x78, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x80, 0x01, 0xC0, 0x00,
  0xE0, 0x00, 0x78, 0x00, 0x3C, 0x00, 0x0E, 0x00, 0x07, 0x80, 0x03, 0xC0,
  0x00, 0xE0, 0x00, 0x70, 0x00, 0x3C, 0x00, 0x0E, 0x00, 0x07, 0x00, 0x03,
  0xC0, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xF0, 0x0F, 0xF8, 0x3F,
  0xF0, 0xF0, 0xF1, 0xC0, 0xE7, 0x01, 0xCE, 0x03, 0xB8, 0x07, 0x70, 0x1C,
  0xE0, 0x39, 0xC0, 0x77, 0x00, 0xEE, 0x03, 0xDC, 0x07, 0x38, 0x0E, 0x70,
  0x38, 0xF0, 0xF0, 0xFF, 0xC1, 0xFF, 0x00, 0xF8, 0x00, 0x00, 0x70, 0x0F,
  0x81, 0xFC, 0x1F, 0xC1, 0xEE, 0x0C, 0x70, 0x03, 0x80, 0x3C, 0x01, 0xC0,
  0x0E, 0x00, 0x70, 0x03, 0x80, 0x38, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0x03,
  0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x7C, 0x00, 0xFF, 0x80, 0xFF,
  0xC0, 0xF0, 0xF0, 0xF0, 0x38, 0x70, 0x1C, 0x10, 0x0E, 0x00, 0x0E, 0x00,
  0x0F, 0x00, 0x0F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1E, 0x00, 0x3E, 0x00,
  0x3E, 0x00, 0x3C, 0x1C, 0x7C, 0x0E, 0x3F, 0xFF, 0x3F, 0xFF, 0x9F, 0xFF,
  0x80, 0x01, 0xFC, 0x07, 0xFE, 0x0F, 0xFF, 0x0E, 0x0F, 0x00, 0x07, 0x00,
  0x07, 0x00, 0x0F, 0x00, 0x0E, 0x00, 0xFC, 0x01, 0xF8, 0x01, 0xFC, 0x00,
  0x1E, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x1C, 0x60, 0x3C, 0xFF,
  0xF8, 0xFF, 0xF0, 0x3F, 0xC0, 0x00, 0x3E, 0x00, 0x7C, 0x01, 0xF0, 0x07,
  0xE0, 0x1F, 0xC0, 0x7B, 0x80, 0xEF, 0x03, 0x9C, 0x0E, 0x38, 0x3C, 0x70,
  0xF0, 0xE1, 0xC3, 0x87, 0xFF, 0xCF, 0xFF, 0xBF, 0xFE, 0x00, 0x38, 0x07,
  0xF8, 0x0F, 0xF0, 0x1F, 0xC0, 0x07, 0xFF, 0x07, 0xFF, 0x0F, 0xFE, 0x0E,
  0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0F, 0xF0, 0x1F, 0xFC, 0x1F, 0xFC, 0x1C,
  0x1E, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x1C, 0x60,
  0x7C, 0xFF, 0xF8, 0xFF, 0xF0, 0x3F, 0x80, 0x00, 0x7E, 0x01, 0xFF, 0x03,
  0xFE, 0x07, 0x80, 0x0F, 0x00, 0x1E, 0x00, 0x3C, 0x00, 0x38, 0x00, 0x73,
  0xE0, 0x7F, 0xF0, 0xFF, 0xF8, 0xFC, 0x78, 0xF0, 0x38, 0xE0, 0x38, 0xE0,
  0x38, 0xE0, 0x70, 0xF0, 0xF0, 0x7F, 0xE0, 0x7F, 0xC0, 0x3F, 0x00, 0x7F,
  0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x0E, 0xC0, 0x78, 0x01, 0xC0, 0x0E, 0x00,
  0x38, 0x01, 0xC0, 0x0F, 0x00, 0x38, 0x01, 0xE0, 0x07, 0x00, 0x3C, 0x00,
  0xE0, 0x07, 0x00, 0x1C, 0x00, 0xE0, 0x03, 0x80, 0x00, 0x01, 0xF0, 0x0F,
  0xF8, 0x3F, 0xF0, 0xF0, 0xF1, 0xC0, 0xE7, 0x01, 0xCE, 0x03, 0x9C, 0x0E,
  0x3C, 0x38, 0x3F, 0xE0, 0x3F, 0x81, 0xFF, 0x87, 0x87, 0x8E, 0x07, 0x38,
  0x0E, 0x70, 0x3C, 0xF0, 0xF1, 0xFF, 0xE1, 0xFF, 0x00, 0xF8, 0x00, 0x00,
  0xF8, 0x03, 0xFE, 0x07, 0xFE, 0x0F, 0x0F, 0x0E, 0x07, 0x1C, 0x07, 0x1C,
  0x07, 0x1C, 0x07, 0x1C, 0x0F, 0x1E, 0x3F, 0x0F, 0xFE, 0x0F, 0xFE, 0x03,
  0xCE, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x78, 0x01, 0xF0, 0x7F, 0xC0, 0xFF,
  0x80, 0x7E, 0x00, 0x1E, 0x7C, 0xF9, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x01,
  0xE7, 0xCF, 0x9E, 0x00, 0x03, 0xC1, 0xF0, 0x7C, 0x1E, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x78, 0x1C, 0x0F, 0x03, 0x81, 0xC0,
  0x60, 0x38, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x07, 0xE0, 0x0F,
  0xC0, 0x3F, 0x80, 0x7F, 0x00, 0xFC, 0x01, 0xFC, 0x00, 0x3F, 0x80, 0x07,
  0xE0, 0x00, 0xFC, 0x00, 0x1F, 0x80, 0x07, 0xE0, 0x00, 0xE0, 0x7F, 0xFF,
  0xBF, 0xFF, 0xDF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF,
  0xF9, 0xFF, 0xFE, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x07, 0xC0,
  0x01, 0xF8, 0x00, 0x3F, 0x00, 0x0F, 0xE0, 0x01, 0xF8, 0x00, 0x3F, 0x00,
  0xFE, 0x01, 0xFC, 0x03, 0xF0, 0x07, 0xE0, 0x07, 0xC0, 0x07, 0x80, 0x00,
  0x0F, 0xC7, 0xFE, 0xFF, 0xFF, 0x0F, 0xE0, 0x7C, 0x07, 0x00, 0x70, 0x0E,
  0x03, 0xE0, 0xF8, 0x3F, 0x03, 0x80, 0x38, 0x00, 0x00, 0x78, 0x0F, 0x80,
  0xF8, 0x0F, 0x00, 0x00, 0xFC, 0x03, 0xFE, 0x07, 0x0F, 0x0E, 0x07, 0x1C,
  0x07, 0x18, 0x06, 0x38, 0x3E, 0x30, 0xFE, 0x31, 0xFC, 0x73, 0xCC, 0x77,
  0x9C, 0x67, 0x1C, 0x67, 0x18, 0xE7, 0x98, 0xE7, 0xF8, 0xE3, 0xFC, 0xE1,
  0xFC, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xF0, 0x00, 0x78, 0x60, 0x7F,
  0xE0, 0x1F, 0x80, 0x03, 0xFE, 0x00, 0x3F, 0xE0, 0x03, 0xFE, 0x00, 0x07,
  0xF0, 0x00, 0xFF, 0x00, 0x0E, 0xF0, 0x01, 0xE7, 0x00, 0x1C, 0x70, 0x03,
  0x87, 0x80, 0x78, 0x78, 0x07, 0xFF, 0x80, 0xFF, 0xF8, 0x0F, 0xFF, 0x81,
  0xC0, 0x3C, 0x3C, 0x03, 0xCF, 0xF0, 0xFE, 0xFF, 0x1F, 0xFF, 0xE1, 0xFE,
  0x0F, 0xFF, 0x07, 0xFF, 0xE1, 0xFF, 0xFC, 0x1C, 0x0F, 0x07, 0x01, 0xC1,
  0xC0, 0x70, 0xE0, 0x3C, 0x38, 0x1E, 0x0F, 0xFF, 0x03, 0xFF, 0xC0, 0xFF,
  0xF8, 0x70, 0x0F, 0x1C, 0x01, 0xC7, 0x00, 0x71, 0xC0, 0x3B, 0xFF, 0xFE,
  0xFF, 0xFF, 0x3F, 0xFF, 0x00, 0x00, 0xFD, 0xC0, 0xFF, 0xF0, 0xFF, 0xFC,
  0x7C, 0x1E, 0x3C, 0x03, 0x8E, 0x00, 0xE7, 0x00, 0x31, 0xC0, 0x00, 0x70,
  0x00, 0x38, 0x00, 0x0E, 0x00, 0x03, 0x80, 0x00, 0xE0, 0x00, 0x3C, 0x01,
  0x87, 0x81, 0xE1, 0xFF, 0xF8, 0x3F, 0xF8, 0x03, 0xF8, 0x00, 0x0F, 0xFC,
  0x07, 0xFF, 0xC1, 0xFF, 0xF8, 0x38, 0x1E, 0x0E, 0x03, 0xC3, 0x80, 0x70,
  0xE0, 0x1C, 0x38, 0x07, 0x1C, 0x01, 0xC7, 0x00, 0x71, 0xC0, 0x38, 0x70,
  0x0E, 0x3C, 0x03, 0x8E, 0x01, 0xC3, 0x81, 0xE3, 0xFF, 0xF0, 0xFF, 0xF8,
  0x3F, 0xF8, 0x00, 0x0F, 0xFF, 0xF0, 0xFF, 0xFF, 0x0F, 0xFF, 0xE0, 0x38,
  0x0E, 0x07, 0x80, 0xE0, 0x70, 0xCE, 0x07, 0x1C, 0xC0, 0x7F, 0xC0, 0x07,
  0xFC, 0x00, 0xFF, 0x80, 0x0E, 0x38, 0x00, 0xE3, 0x80, 0x0E, 0x01, 0xC0,
  0xE0, 0x1C, 0x1C, 0x03, 0xC7, 0xFF, 0xF8, 0xFF, 0xFF, 0x87, 0xFF, 0xF8,
  0x0F, 0xFF, 0xF1, 0xFF, 0xFF, 0x0F, 0xFF, 0xF0, 0x70, 0x0F, 0x07, 0x00,
  0xE0, 0x71, 0x8E, 0x07, 0x3C, 0xE0, 0x7F, 0x80, 0x0F, 0xF8, 0x00, 0xFF,
  0x80, 0x0E, 0x38, 0x00, 0xE3, 0x00, 0x1E, 0x00, 0x01, 0xC0, 0x00, 0x1C,
  0x00, 0x07, 0xFE, 0x00, 0xFF, 0xE0, 0x0F, 0xFC, 0x00, 0x00, 0xFC, 0xC0,
  0xFF, 0xF0, 0xFF, 0xFC, 0x7C, 0x1F, 0x3C, 0x03, 0x8E, 0x00, 0xE7, 0x00,
  0x01, 0xC0, 0x00, 0x70, 0x00, 0x38, 0x3F, 0xEE, 0x0F, 0xFB, 0x83, 0xFE,
  0xE0, 0x0F, 0x3C, 0x03, 0x8F, 0x81, 0xE1, 0xFF, 0xF8, 0x3F, 0xFC, 0x03,
  0xF8, 0x00, 0x07, 0xE3, 0xF0, 0xFE, 0x7F, 0x0F, 0xE7, 0xF0, 0x70, 0x1C,
  0x07, 0x01, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x7F, 0xF8, 0x0F, 0xFF,
  0x80, 0xFF, 0xF8, 0x0E, 0x03, 0x80, 0xE0, 0x78, 0x1E, 0x07, 0x01, 0xC0,
  0x70, 0x1C, 0x07, 0x07, 0xF3, 0xF8, 0xFF, 0x3F, 0xC7, 0xF3, 0xF8, 0x0F,
  0xFF, 0x0F, 0xFF, 0xC7, 0xFF, 0xC0, 0x1C, 0x00, 0x0E, 0x00, 0x07, 0x00,
  0x07, 0x00, 0x03, 0x80, 0x01, 0xC0, 0x00, 0xE0, 0x00, 0xF0, 0x00, 0x70,
  0x00, 0x38, 0x00, 0x1C, 0x00, 0x0E, 0x00, 0xFF, 0xF0, 0xFF, 0xF8, 0x7F,
  0xFC, 0x00, 0x00, 0x7F, 0xF0, 0x07, 0xFF, 0xC0, 0x3F, 0xFC, 0x00, 0x0E,
  0x00, 0x00, 0x70, 0x00, 0x03, 0x80, 0x00, 0x1C, 0x00, 0x01, 0xE0, 0x00,
  0x0E, 0x01, 0x80, 0x70, 0x1C, 0x03, 0x80, 0xE0, 0x1C, 0x07, 0x01, 0xC0,
  0x38, 0x0E, 0x01, 0xC1, 0xF0, 0x1F, 0xFF, 0x00, 0xFF, 0xE0, 0x00, 0xFC,
  0x00, 0x00, 0x0F, 0xF3, 0xF8, 0xFF, 0x9F, 0xC3, 0xF8, 0xFE, 0x0E, 0x07,
  0x80, 0x70, 0xF8, 0x03, 0x8F, 0x80, 0x1D, 0xF0, 0x00, 0xFF, 0x00, 0x0F,
  0xF8, 0x00, 0x7F, 0xE0, 0x03, 0xCF, 0x80, 0x1C, 0x3C, 0x01, 0xE1, 0xF0,
  0x0E, 0x07, 0x80, 0x70, 0x3C, 0x0F, 0xF0, 0xFC, 0xFF, 0x87, 0xE7, 0xF8,
  0x3E, 0x00, 0x0F, 0xF8, 0x0F, 0xFE, 0x07, 0xFE, 0x00, 0x70, 0x00, 0x38,
  0x00, 0x1C, 0x00, 0x0E, 0x00, 0x0F, 0x00, 0x07, 0x00, 0x03, 0x80, 0x01,
  0xC0, 0x60, 0xE0, 0x70, 0xE0, 0x38, 0x70, 0x1C, 0x38, 0x0F, 0xFF, 0xFF,
  0xFF, 0xFF, 0x7F, 0xFF, 0x80, 0x0F, 0x80, 0x7C, 0x3F, 0x01, 0xFC, 0x7F,
  0x03, 0xF0, 0x7E, 0x0F, 0x80, 0xFC, 0x3F, 0x01, 0xF8, 0x7E, 0x03, 0xF9,
  0xFC, 0x07, 0xF7, 0xB8, 0x1C, 0xEE, 0xE0, 0x39, 0xFD, 0xC0, 0x73, 0xF3,
  0x80, 0xE7, 0xC7, 0x03, 0xC7, 0x9E, 0x07, 0x0E, 0x38, 0x0E, 0x00, 0x70,
  0x7F, 0x87, 0xF0, 0xFF, 0x1F, 0xF1, 0xFC, 0x1F, 0xC0, 0x1F, 0x07, 0xF9,
  0xFC, 0x3F, 0xCF, 0xE1, 0xFC, 0x1F, 0x83, 0x80, 0xFC, 0x1C, 0x07, 0xF0,
  0xE0, 0x3F, 0x87, 0x03, 0xDE, 0x38, 0x1C, 0xF3, 0x80, 0xE3, 0x9C, 0x07,
  0x1E, 0xE0, 0x38, 0xF7, 0x03, 0xC3, 0xF8, 0x1C, 0x1F, 0x80, 0xE0, 0x7C,
  0x1F, 0xE3, 0xE0, 0xFF, 0x0F, 0x07, 0xF0, 0x78, 0x00, 0x00, 0xF8, 0x01,
  0xFF, 0x03, 0xFF, 0xC3, 0xE1, 0xE3, 0xC0, 0x79, 0xC0, 0x1D, 0xC0, 0x0E,
  0xE0, 0x07, 0xE0, 0x03, 0xF0, 0x01, 0xF8, 0x01, 0xDC, 0x00, 0xEE, 0x00,
  0xE7, 0x80, 0xF1, 0xE1, 0xF0, 0xFF, 0xF0, 0x3F, 0xE0, 0x07, 0xC0, 0x00,
  0x0F, 0xFE, 0x07, 0xFF, 0xE1, 0xFF, 0xFC, 0x1C, 0x0F, 0x07, 0x01, 0xC1,
  0xC0, 0x70, 0xE0, 0x1C, 0x38, 0x0E, 0x0E, 0x07, 0x83, 0xFF, 0xC0, 0xFF,
  0xE0, 0x7F, 0xE0, 0x1C, 0x00, 0x07, 0x00, 0x01, 0xC0, 0x03, 0xFF, 0x00,
  0xFF, 0xC0, 0x3F, 0xF0, 0x00, 0x00, 0xF8, 0x01, 0xFF, 0x03, 0xFF, 0xC3,
  0xE1, 0xE3, 0xC0, 0x79, 0xC0, 0x1D, 0xC0, 0x0E, 0xE0, 0x07, 0xE0, 0x03,
  0xF0, 0x01, 0xF8, 0x01, 0xDC, 0x00, 0xEE, 0x00, 0xE7, 0x80, 0xF1, 0xE1,
  0xF0, 0xFF, 0xF0, 0x3F, 0xE0, 0x07, 0xC0, 0x07, 0x00, 0x07, 0xF1, 0x87,
  0xFF, 0xE3, 0xFF, 0xE1, 0xC3, 0xC0, 0x0F, 0xFE, 0x03, 0xFF, 0xF0, 0x3F,
  0xFF, 0x03, 0x81, 0xE0, 0x70, 0x1C, 0x0E, 0x03, 0x81, 0xC0, 0xF0, 0x38,
  0x3C, 0x0F, 0xFF, 0x01, 0xFF, 0xC0, 0x3F, 0xF0, 0x07, 0x0F, 0x01, 0xE1,
  0xE0, 0x38, 0x1E, 0x07, 0x01, 0xC3, 0xFC, 0x3F, 0xFF, 0x83, 0xFF, 0xE0,
  0x78, 0x01, 0xF3, 0x07, 0xFF, 0x0F, 0xFF, 0x1E, 0x1E, 0x38, 0x0E, 0x38,
  0x0C, 0x3C, 0x00, 0x3F, 0x80, 0x1F, 0xF0, 0x0F, 0xF8, 0x00, 0xFC, 0x00,
  0x1C, 0xE0, 0x1C, 0xE0, 0x1C, 0xF0, 0x78, 0xFF, 0xF8, 0xFF, 0xE0, 0x0F,
  0xC0, 0x7F, 0xFF, 0xBF, 0xFF, 0xFF, 0xFF, 0xDC, 0x38, 0xEE, 0x38, 0x77,
  0x1C, 0x3B, 0x8E, 0x39, 0x87, 0x0C, 0x03, 0x80, 0x03, 0x80, 0x01, 0xC0,
  0x00, 0xE0, 0x00, 0x70, 0x00, 0x78, 0x00, 0x38, 0x01, 0xFF, 0xC0, 0xFF,
  0xE0, 0x7F, 0xE0, 0x00, 0x7F, 0x1F, 0xFF, 0xF3, 0xFD, 0xFC, 0x7F, 0x1C,
  0x03, 0xC3, 0x80, 0x70, 0xF0, 0x0E, 0x1C, 0x01, 0xC3, 0x80, 0x38, 0x70,
  0x0E, 0x0E, 0x01, 0xC3, 0x80, 0x38, 0x70, 0x07, 0x0E, 0x01, 0xE1, 0xC0,
  0x38, 0x3C, 0x1E, 0x03, 0xFF, 0xC0, 0x3F, 0xE0, 0x03, 0xF0, 0x00, 0x7F,
  0x07, 0xFF, 0xF0, 0xFF, 0x7F, 0x0F, 0xF3, 0xC0, 0x38, 0x3C, 0x03, 0x81,
  0xC0, 0x70, 0x1C, 0x0F, 0x01, 0xC0, 0xE0, 0x1E, 0x1C, 0x01, 0xE3, 0xC0,
  0x0E, 0x38, 0x00, 0xE7, 0x00, 0x0F, 0xF0, 0x00, 0xFE, 0x00, 0x07, 0xC0,
  0x00, 0x7C, 0x00, 0x07, 0x80, 0x00, 0x78, 0x00, 0x7F, 0x0F, 0xFF, 0xE3,
  0xFF, 0xFC, 0x7F, 0x38, 0x01, 0xC7, 0x1E, 0x38, 0xE3, 0xCF, 0x1C, 0xF9,
  0xC3, 0x9F, 0x38, 0x77, 0xEF, 0x0E, 0xFD, 0xC3, 0xFB, 0xB8, 0x7F, 0x7E,
  0x0F, 0xCF, 0xC1, 0xF9, 0xF8, 0x3E, 0x3E, 0x07, 0x83, 0xC0, 0xF0, 0x78,
  0x1C, 0x0E, 0x00, 0x0F, 0xC3, 0xF8, 0xFE, 0x1F, 0xC3, 0xF0, 0xFC, 0x0F,
  0x07, 0x80, 0x3C, 0x78, 0x00, 0xF7, 0x80, 0x07, 0xF8, 0x00, 0x1F, 0x80,
  0x00, 0xF8, 0x00, 0x07, 0xC0, 0x00, 0x7F, 0x00, 0x07, 0xF8, 0x00, 0x79,
  0xE0, 0x07, 0x87, 0x80, 0x78, 0x3C, 0x0F, 0xC3, 0xF8, 0xFF, 0x3F, 0xC7,
  0xF0, 0xFC, 0x00, 0x7E, 0x0F, 0xDF, 0xC7, 0xF7, 0xE1, 0xF8, 0x70, 0x78,
  0x1E, 0x3C, 0x07, 0x8E, 0x00, 0xF7, 0x00, 0x3F, 0xC0, 0x07, 0xE0, 0x01,
  0xF0, 0x00, 0x38, 0x00, 0x0E, 0x00, 0x07, 0x80, 0x01, 0xC0, 0x00, 0x70,
  0x01, 0xFF, 0xC0, 0xFF, 0xF0, 0x1F, 0xF8, 0x00, 0x0F, 0xFF, 0x87, 0xFF,
  0xC3, 0xFF, 0xC3, 0xC1, 0xE1, 0xC1, 0xE0, 0xE1, 0xE0, 0x61, 0xE0, 0x01,
  0xE0, 0x01, 0xE0, 0x01, 0xE0, 0x01, 0xE0, 0x01, 0xE1, 0xC1, 0xE0, 0xE1,
  0xE0, 0x71, 0xE0, 0x79, 0xFF, 0xF8, 0xFF, 0xFC, 0x7F, 0xFE, 0x00, 0x07,
  0xE0, 0x7F, 0x0F, 0xE0, 0xE0, 0x0E, 0x00, 0xE0, 0x1E, 0x01, 0xC0, 0x1C,
  0x01, 0xC0, 0x1C, 0x03, 0xC0, 0x38, 0x03, 0x80, 0x38, 0x03, 0x80, 0x70,
  0x07, 0x00, 0x70, 0x07, 0x00, 0x70, 0x0F, 0xE0, 0xFE, 0x0F, 0xC0, 0x00,
  0x70, 0x38, 0x1C, 0x0F, 0x03, 0x81, 0xC0, 0xE0, 0x78, 0x1C, 0x0E, 0x07,
  0x03, 0xC0, 0xE0, 0x70, 0x38, 0x1E, 0x07, 0x03, 0x81, 0xE0, 0xF0, 0x38,
  0x1C, 0x0F, 0x03, 0x80, 0x00, 0x07, 0xF0, 0x7F, 0x07, 0xE0, 0x0E, 0x00,
  0xE0, 0x0E, 0x00, 0xE0, 0x1C, 0x01, 0xC0, 0x1C, 0x01, 0xC0, 0x3C, 0x03,
  0x80, 0x38, 0x03, 0x80, 0x38, 0x07, 0x00, 0x70, 0x07, 0x00, 0x70, 0x07,
  0x07, 0xE0, 0xFE, 0x0F, 0xE0, 0x00, 0x80, 0x07, 0x00, 0x3C, 0x01, 0xF8,
  0x0F, 0xE0, 0x7B, 0xC3, 0xC7, 0x9E, 0x1E, 0xF0, 0x3F, 0x00, 0x60, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xC7, 0x1C, 0x71, 0x80, 0x07,
  0xF8, 0x1F, 0xFC, 0x1F, 0xFE, 0x00, 0x0E, 0x00, 0x0E, 0x07, 0xFE, 0x1F,
  0xFE, 0x3F, 0xFC, 0x78, 0x1C, 0xE0, 0x1C, 0xE0, 0x7C, 0xFF, 0xFF, 0x7F,
  0xFF, 0x3F, 0xBE, 0x0F, 0x80, 0x03, 0xF0, 0x00, 0x7E, 0x00, 0x03, 0x80,
  0x00, 0x70, 0x00, 0x0E, 0x7E, 0x01, 0xFF, 0xE0, 0x7F, 0xFE, 0x0F, 0xC3,
  0xE1, 0xE0, 0x3C, 0x3C, 0x03, 0x87, 0x00, 0x71, 0xE0, 0x0E, 0x3C, 0x03,
  0x87, 0x80, 0xF0, 0xF8, 0x3C, 0xFF, 0xFF, 0x1F, 0xFF, 0xC3, 0xE7, 0xE0,
  0x00, 0x03, 0xFB, 0x0F, 0xFF, 0x1F, 0xFF, 0x3C, 0x0F, 0x78, 0x0F, 0x70,
  0x06, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xE0, 0x00, 0xF8, 0x0E, 0x7F,
  0xFE, 0x3F, 0xFC, 0x1F, 0xE0, 0x00, 0x07, 0xC0, 0x03, 0xF0, 0x00, 0xFC,
  0x00, 0x0F, 0x00, 0x03, 0x80, 0xFC, 0xE0, 0xFF, 0xF8, 0x7F, 0xFE, 0x3C,
  0x1F, 0x1E, 0x03, 0xC7, 0x00, 0xF3, 0x80, 0x3C, 0xE0, 0x0F, 0x38, 0x03,
  0x8E, 0x01, 0xE3, 0xC1, 0xF8, 0x7F, 0xFF, 0x8F, 0xFF, 0xE1, 0xFD, 0xF0,
  0x03, 0xF0, 0x0F, 0xFC, 0x1F, 0xFE, 0x3E, 0x0F, 0x78, 0x07, 0x70, 0x07,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0xF0, 0x1E, 0x7F, 0xFE,
  0x3F, 0xFE, 0x1F, 0xF0, 0x00, 0x3F, 0xC0, 0x3F, 0xF0, 0x1F, 0xFC, 0x07,
  0x00, 0x03, 0x80, 0x07, 0xFF, 0x83, 0xFF, 0xF0, 0xFF, 0xF8, 0x07, 0x00,
  0x01, 0xC0, 0x00, 0x70, 0x00, 0x1C, 0x00, 0x07, 0x00, 0x03, 0x80, 0x00,
  0xE0, 0x00, 0x38, 0x00, 0xFF, 0xF8, 0x3F, 0xFE, 0x0F, 0xFF, 0x00, 0x03,
  0xF7, 0xC1, 0xFF, 0xFC, 0x7F, 0xFF, 0x1E, 0x1F, 0x87, 0x81, 0xE0, 0xE0,
  0x1C, 0x38, 0x03, 0x87, 0x00, 0xF0, 0xE0, 0x1E, 0x1E, 0x07, 0x83, 0xE1,
  0xF0, 0x3F, 0xFE, 0x03, 0xFF, 0xC0, 0x3F, 0x78, 0x00, 0x0E, 0x00, 0x01,
  0xC0, 0x00, 0x70, 0x07, 0xFE, 0x01, 0xFF, 0x80, 0x3F, 0xC0, 0x00, 0x0F,
  0x80, 0x07, 0xE0, 0x01, 0xF8, 0x00, 0x1C, 0x00, 0x07, 0x00, 0x01, 0xCF,
  0x80, 0x7F, 0xF0, 0x3F, 0xFE, 0x0F, 0x87, 0x83, 0xC0, 0xE0, 0xE0, 0x38,
  0x38, 0x0E, 0x1C, 0x07, 0x87, 0x01, 0xC1, 0xC0, 0x70, 0x70, 0x1C, 0x7E,
  0x1F, 0xFF, 0xCF, 0xFF, 0xE3, 0xF8, 0x00, 0x70, 0x00, 0xE0, 0x03, 0xC0,
  0x00, 0x00, 0x00, 0x01, 0xFE, 0x03, 0xF8, 0x07, 0xF0, 0x00, 0xE0, 0x01,
  0xC0, 0x03, 0x80, 0x0E, 0x00, 0x1C, 0x00, 0x38, 0x00, 0x70, 0x00, 0xE0,
  0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x1E, 0x00, 0x38, 0x00, 0x70,
  0x00, 0x00, 0x00, 0x01, 0xFF, 0xC3, 0xFF, 0x87, 0xFF, 0x00, 0x0E, 0x00,
  0x38, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x07, 0x80, 0x0E, 0x00, 0x1C,
  0x00, 0x38, 0x00, 0x70, 0x01, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x1C, 0x1F,
  0xF8, 0x7F, 0xE0, 0xFF, 0x00, 0x0F, 0xC0, 0x03, 0xE0, 0x00, 0xF8, 0x00,
  0x0E, 0x00, 0x03, 0x80, 0x00, 0xE7, 0xF0, 0x73, 0xFC, 0x1C, 0xFE, 0x07,
  0x7C, 0x01, 0xFE, 0x00, 0xFE, 0x00, 0x3F, 0x00, 0x0F, 0xE0, 0x03, 0xFC,
  0x00, 0xEF, 0x80, 0x71, 0xF0, 0x7C, 0x3F, 0xBF, 0x1F, 0xE7, 0xC7, 0xF0,
  0x03, 0xF8, 0x0F, 0xF0, 0x1F, 0xC0, 0x03, 0x80, 0x07, 0x00, 0x0E, 0x00,
  0x3C, 0x00, 0x70, 0x00, 0xE0, 0x01, 0xC0, 0x03, 0x80, 0x0E, 0x00, 0x1C,
  0x00, 0x38, 0x00, 0x70, 0x00, 0xE0, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
  0x1E, 0xF3, 0xC7, 0xFF, 0xFC, 0xFF, 0xFF, 0x8F, 0x9E, 0x71, 0xC3, 0x8E,
  0x38, 0x71, 0xC7, 0x1C, 0x38, 0xE3, 0x8E, 0x3C, 0x71, 0xC7, 0x0E, 0x38,
  0xE1, 0xC7, 0x7E, 0x7C, 0xFF, 0xEF, 0xBF, 0xF9, 0xE7, 0x80, 0x1F, 0x3E,
  0x07, 0xFF, 0xC1, 0xFF, 0xF8, 0x3E, 0x1E, 0x0F, 0x03, 0x83, 0x80, 0xE0,
  0xE0, 0x38, 0x70, 0x1E, 0x1C, 0x07, 0x07, 0x01, 0xC1, 0xC0, 0x71, 0xF8,
  0x7F, 0xFF, 0x1F, 0xFF, 0x87, 0xE0, 0x03, 0xF0, 0x0F, 0xFC, 0x1F, 0xFE,
  0x3C, 0x1F, 0x78, 0x0F, 0x70, 0x07, 0xE0, 0x07, 0xE0, 0x07, 0xE0, 0x0E,
  0xF0, 0x1E, 0xF8, 0x3C, 0x7F, 0xF8, 0x3F, 0xF0, 0x1F, 0xC0, 0x07, 0xCF,
  0xC0, 0x7F, 0xFF, 0x03, 0xFF, 0xFC, 0x07, 0xE1, 0xF0, 0x3C, 0x03, 0x81,
  0xC0, 0x1C, 0x1E, 0x00, 0xE0, 0xF0, 0x07, 0x07, 0x80, 0x70, 0x3C, 0x07,
  0x81, 0xF0, 0x78, 0x1F, 0xFF, 0x80, 0xEF, 0xF8, 0x07, 0x3F, 0x00, 0x38,
  0x00, 0x01, 0xC0, 0x00, 0x1E, 0x00, 0x03, 0xFE, 0x00, 0x3F, 0xF0, 0x00,
  0xFF, 0x00, 0x00, 0x03, 0xF3, 0xE1, 0xFF, 0xFC, 0x7F, 0xFF, 0x9E, 0x0F,
  0x87, 0x00, 0xF0, 0xE0, 0x1E, 0x38, 0x03, 0xC7, 0x00, 0x70, 0xE0, 0x0E,
  0x1E, 0x03, 0xC3, 0xE1, 0xF8, 0x3F, 0xFF, 0x03, 0xFF, 0xC0, 0x3F, 0x38,
  0x00, 0x07, 0x00, 0x00, 0xE0, 0x00, 0x3C, 0x00, 0x3F, 0xE0, 0x0F, 0xFC,
  0x01, 0xFF, 0x00, 0x0F, 0xC7, 0x81, 0xFB, 0xF8, 0x3F, 0xFF, 0x81, 0xFC,
  0x60, 0x3E, 0x00, 0x07, 0x80, 0x00, 0xE0, 0x00, 0x38, 0x00, 0x07, 0x00,
  0x00, 0xE0, 0x00, 0x1C, 0x00, 0x3F, 0xFE, 0x0F, 0xFF, 0xC0, 0xFF, 0xF0,
  0x00, 0x03, 0xF6, 0x1F, 0xFC, 0x7F, 0xF9, 0xE0, 0xF3, 0x80, 0xC7, 0xF8,
  0x0F, 0xFE, 0x07, 0xFE, 0x00, 0x7C, 0xC0, 0x3B, 0xC0, 0xF7, 0xFF, 0xCF,
  0xFF, 0x03, 0xF8, 0x00, 0x0E, 0x00, 0x70, 0x03, 0x80, 0x38, 0x07, 0xFF,
  0xFF, 0xFF, 0xFF, 0xC3, 0x80, 0x38, 0x01, 0xC0, 0x0E, 0x00, 0x70, 0x07,
  0x80, 0x38, 0x01, 0xC0, 0xEF, 0xFF, 0x3F, 0xF0, 0xFE, 0x00, 0x7C, 0x3F,
  0xFC, 0x7E, 0xF8, 0x7E, 0x38, 0x0E, 0x38, 0x0E, 0x38, 0x1E, 0x38, 0x1C,
  0x70, 0x1C, 0x70, 0x1C, 0x70, 0x3C, 0x70, 0x7C, 0x7F, 0xFE, 0x3F, 0xFE,
  0x1F, 0x3C, 0x7F, 0x1F, 0xDF, 0xE7, 0xFF, 0xFC, 0xFF, 0x1E, 0x07, 0x03,
  0xC1, 0xE0, 0x38, 0x38, 0x07, 0x8E, 0x00, 0xF3, 0xC0, 0x0E, 0x70, 0x01,
  0xDC, 0x00, 0x3F, 0x80, 0x07, 0xE0, 0x00, 0x78, 0x00, 0x0F, 0x00, 0x00,
  0x7C, 0x1F, 0xFF, 0x07, 0xFF, 0x81, 0xF9, 0xCF, 0x1C, 0x73, 0xCE, 0x1D,
  0xF3, 0x87, 0x7D, 0xC1, 0xFF, 0x70, 0x7F, 0xF8, 0x1F, 0x7E, 0x07, 0xCF,
  0x81, 0xE3, 0xC0, 0x78, 0xF0, 0x1C, 0x38, 0x00, 0x1F, 0xCF, 0xE3, 0xF9,
  0xFC, 0x7E, 0x3F, 0x07, 0xCF, 0x80, 0x7F, 0xE0, 0x07, 0xF8, 0x00, 0x7C,
  0x00, 0x1F, 0xC0, 0x07, 0xFC, 0x01, 0xE7, 0xC0, 0xF8, 0x7C, 0x7F, 0x1F,
  0xCF, 0xE3, 0xF9, 0xFC, 0x7F, 0x00, 0x0F, 0xE1, 0xF8, 0x7F, 0x1F, 0xC3,
  0xF0, 0x7E, 0x0F, 0x01, 0xC0, 0x38, 0x1C, 0x01, 0xC1, 0xE0, 0x0F, 0x0E,
  0x00, 0x78, 0xE0, 0x01, 0xCE, 0x00, 0x0F, 0x70, 0x00, 0x7F, 0x00, 0x01,
  0xF0, 0x00, 0x0F, 0x80, 0x00, 0x78, 0x00, 0x03, 0x80, 0x00, 0x38, 0x00,
  0x03, 0xC0, 0x03, 0xFF, 0x00, 0x3F, 0xF8, 0x00, 0xFF, 0xC0, 0x00, 0x1F,
  0xFF, 0x1F, 0xFE, 0x1F, 0xFE, 0x3C, 0x3C, 0x18, 0x78, 0x01, 0xF0, 0x03,
  0xE0, 0x07, 0xC0, 0x0F, 0x00, 0x1E, 0x0C, 0x3C, 0x1C, 0x7F, 0xFC, 0xFF,
  0xFC, 0xFF, 0xF8, 0x00, 0xF0, 0x1F, 0x03, 0xE0, 0x38, 0x07, 0x00, 0x70,
  0x07, 0x00, 0x70, 0x0E, 0x00, 0xE0, 0x7C, 0x0F, 0x80, 0xFC, 0x03, 0xC0,
  0x1C, 0x01, 0xC0, 0x1C, 0x03, 0x80, 0x38, 0x03, 0x80, 0x38, 0x03, 0xE0,
  0x3E, 0x01, 0xC0, 0x0E, 0x1C, 0x38, 0x71, 0xC3, 0x87, 0x0E, 0x1C, 0x30,
  0xE1, 0xC3, 0x87, 0x0C, 0x38, 0x70, 0xE1, 0xC3, 0x0E, 0x1C, 0x38, 0x20,
  0x03, 0x80, 0x78, 0x07, 0xC0, 0x1C, 0x01, 0xC0, 0x1C, 0x03, 0xC0, 0x38,
  0x03, 0x80, 0x38, 0x03, 0xF0, 0x1F, 0x03, 0xE0, 0x78, 0x07, 0x00, 0x70,
  0x0E, 0x00, 0xE0, 0x0E, 0x00, 0xE0, 0x1C, 0x07, 0xC0, 0xF8, 0x0F, 0x00,
  0x1E, 0x00, 0xFE, 0x1F, 0xFE, 0x7F, 0x3F, 0xEC, 0x3F, 0x80, 0x1C, 0x00 };

const GFXglyph FreeMonoBoldOblique16pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,  19,    0,    0 },   // 0x20 ' '
  {     1,   8,  20,  19,    7,  -19 },   // 0x21 '!'
  {    21,  11,   9,  19,    8,  -18 },   // 0x22 '"'
  {    34,  16,  24,  19,    3,  -20 },   // 0x23 '#'
  {    82,  15,  25,  19,    3,  -20 },   // 0x24 '$'
  {   129,  15,  19,  19,    4,  -18 },   // 0x25 '%'
  {   165,  14,  17,  19,    3,  -16 },   // 0x26 '&'
  {   195,   4,   9,  19,   11,  -18 },   // 0x27 '''
  {   200,   9,  25,  19,    9,  -19 },   // 0x28 '('
  {   229,   9,  25,  19,    3,  -19 },   // 0x29 ')'
  {   258,  13,  13,  19,    6,  -18 },   // 0x2A '*'
  {   280,  16,  17,  19,    3,  -16 },   // 0x2B '+'
  {   314,   8,   9,  19,    4,   -3 },   // 0x2C ','
  {   323,  16,   3,  19,    3,   -9 },   // 0x2D '-'
  {   329,   5,   4,  19,    7,   -3 },   // 0x2E '.'
  {   332,  18,  26,  19,    2,  -21 },   // 0x2F '/'
  {   391,  15,  20,  19,    4,  -19 },   // 0x30 '0'
  {   429,  13,  20,  19,    3,  -19 },   // 0x31 '1'
  {   462,  17,  20,  19,    2,  -19 },   // 0x32 '2'
  {   505,  16,  20,  19,    3,  -19 },   // 0x33 '3'
  {   545,  15,  19,  19,    3,  -18 },   // 0x34 '4'
  {   581,  16,  19,  19,    3,  -18 },   // 0x35 '5'
  {   619,  16,  20,  19,    5,  -19 },   // 0x36 '6'
  {   659,  14,  19,  19,    6,  -18 },   // 0x37 '7'
  {   693,  15,  20,  19,    4,  -19 },   // 0x38 '8'
  {   731,  16,  20,  19,    3,  -19 },   // 0x39 '9'
  {   771,   7,  14,  19,    7,  -13 },   // 0x3A ':'
  {   784,  10,  19,  19,    4,  -13 },   // 0x3B ';'
  {   808,  17,  14,  19,    3,  -15 },   // 0x3C '<'
  {   838,  17,   9,  19,    3,  -12 },   // 0x3D '='
  {   858,  17,  14,  19,    2,  -15 },   // 0x3E '>'
  {   888,  12,  18,  19,    7,  -17 },   // 0x3F '?'
  {   915,  16,  24,  19,    3,  -18 },   // 0x40 '@'
  {   963,  20,  18,  19,    0,  -17 },   // 0x41 'A'
  {  1008,  18,  18,  19,    1,  -17 },   // 0x42 'B'
  {  1049,  18,  18,  19,    2,  -17 },   // 0x43 'C'
  {  1090,  18,  18,  19,    1,  -17 },   // 0x44 'D'
  {  1131,  20,  18,  19,    0,  -17 },   // 0x45 'E'
  {  1176,  20,  18,  19,    0,  -17 },   // 0x46 'F'
  {  1221,  18,  18,  19,    2,  -17 },   // 0x47 'G'
  {  1262,  20,  18,  19,    0,  -17 },   // 0x48 'H'
  {  1307,  17,  18,  19,    2,  -17 },   // 0x49 'I'
  {  1346,  21,  18,  19,    0,  -17 },   // 0x4A 'J'
  {  1394,  21,  18,  19,    0,  -17 },   // 0x4B 'K'
  {  1442,  17,  18,  19,    1,  -17 },   // 0x4C 'L'
  {  1481,  23,  18,  19,    0,  -17 },   // 0x4D 'M'
  {  1533,  21,  18,  19,    1,  -17 },   // 0x4E 'N'
  {  1581,  17,  18,  19,    2,  -17 },   // 0x4F 'O'
  {  1620,  18,  18,  19,    1,  -17 },   // 0x50 'P'
  {  1661,  17,  23,  19,    2,  -17 },   // 0x51 'Q'
  {  1710,  19,  18,  19,    0,  -17 },   // 0x52 'R'
  {  1753,  16,  18,  19,    3,  -17 },   // 0x53 'S'
  {  1789,  17,  18,  19,    3,  -17 },   // 0x54 'T'
  {  1828,  19,  18,  19,    2,  -17 },   // 0x55 'U'
  {  1871,  20,  18,  19,    1,  -17 },   // 0x56 'V'
  {  1916,  19,  18,  19,    2,  -17 },   // 0x57 'W'
  {  1959,  21,  18,  19,    0,  -17 },   // 0x58 'X'
  {  2007,  18,  18,  19,    2,  -17 },   // 0x59 'Y'
  {  2048,  17,  18,  19,    2,  -17 },   // 0x5A 'Z'
  {  2087,  12,  24,  19,    7,  -18 },   // 0x5B '['
  {  2123,   9,  26,  19,    7,  -21 },   // 0x5C '\'
  {  2153,  12,  24,  19,    3,  -18 },   // 0x5D ']'
  {  2189,  14,  10,  19,    5,  -19 },   // 0x5E '^'
  {  2207,  19,   3,  19,   -1,    4 },   // 0x5F '_'
  {  2215,   5,   5,  19,    8,  -19 },   // 0x60 '`'
  {  2219,  16,  14,  19,    2,  -13 },   // 0x61 'a'
  {  2247,  19,  19,  19,    0,  -18 },   // 0x62 'b'
  {  2293,  16,  14,  19,    2,  -13 },   // 0x63 'c'
  {  2321,  18,  19,  19,    2,  -18 },   // 0x64 'd'
  {  2364,  16,  14,  19,    2,  -13 },   // 0x65 'e'
  {  2392,  18,  19,  19,    3,  -18 },   // 0x66 'f'
  {  2435,  19,  20,  19,    2,  -13 },   // 0x67 'g'
  {  2483,  18,  19,  19,    1,  -18 },   // 0x68 'h'
  {  2526,  15,  19,  19,    2,  -18 },   // 0x69 'i'
  {  2562,  15,  25,  19,    2,  -18 },   // 0x6A 'j'
  {  2609,  18,  19,  19,    1,  -18 },   // 0x6B 'k'
  {  2652,  15,  19,  19,    2,  -18 },   // 0x6C 'l'
  {  2688,  19,  14,  19,    0,  -13 },   // 0x6D 'm'
  {  2722,  18,  14,  19,    1,  -13 },   // 0x6E 'n'
  {  2754,  16,  14,  19,    2,  -13 },   // 0x6F 'o'
  {  2782,  21,  20,  19,   -2,  -13 },   // 0x70 'p'
  {  2835,  19,  20,  19,    1,  -13 },   // 0x71 'q'
  {  2883,  19,  14,  19,    1,  -13 },   // 0x72 'r'
  {  2917,  15,  14,  19,    3,  -13 },   // 0x73 's'
  {  2944,  13,  18,  19,    3,  -17 },   // 0x74 't'
  {  2974,  16,  14,  19,    3,  -13 },   // 0x75 'u'
  {  3002,  19,  14,  19,    2,  -13 },   // 0x76 'v'
  {  3036,  18,  14,  19,    2,  -13 },   // 0x77 'w'
  {  3068,  19,  14,  19,    1,  -13 },   // 0x78 'x'
  {  3102,  21,  20,  19,   -1,  -13 },   // 0x79 'y'
  {  3155,  16,  14,  19,    3,  -13 },   // 0x7A 'z'
  {  3183,  12,  24,  19,    6,  -18 },   // 0x7B '{'
  {  3219,   7,  24,  19,    7,  -18 },   // 0x7C '|'
  {  3240,  12,  24,  19,    4,  -18 },   // 0x7D '}'
  {  3276,  15,   6,  19,    4,  -11 } }; // 0x7E '~'

const GFXfont FreeMonoBoldOblique16pt7b PROGMEM = {
  (uint8_t  *)FreeMonoBoldOblique16pt7bBitmaps,
  (GFXglyph *)FreeMonoBoldOblique16pt7bGlyphs,
  0x20, 0x7E, 31 };

// Approx. 3960 bytes

#endif // FreeMonoBoldOblique16pt7b_H
