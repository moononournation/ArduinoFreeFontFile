#ifndef FreeSansBoldOblique18pt7b_H
#define FreeSansBoldOblique18pt7b_H

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

const uint8_t FreeSansBoldOblique18pt7bBitmaps[] PROGMEM = {
  0x00, 0x06, 0x01, 0xC0, 0x7C, 0x1F, 0x0F, 0xC3, 0xE0, 0xF8, 0x3E, 0x0F,
  0x83, 0xC0, 0xF0, 0x7C, 0x1E, 0x07, 0x81, 0xE0, 0x78, 0x1C, 0x07, 0x01,
  0xC0, 0x60, 0x7C, 0x1F, 0x07, 0xC3, 0xF0, 0xF8, 0x00, 0x78, 0x7B, 0xC3,
  0xFE, 0x3F, 0xE1, 0xEF, 0x0F, 0x78, 0x7B, 0x83, 0x9C, 0x1C, 0xC0, 0xC0,
  0x00, 0x3C, 0x38, 0x00, 0xF1, 0xE0, 0x07, 0x87, 0x00, 0x1E, 0x3C, 0x00,
  0xF0, 0xE0, 0x3F, 0xFF, 0xF0, 0xFF, 0xFF, 0xC7, 0xFF, 0xFF, 0x1F, 0xFF,
  0xF8, 0x0F, 0x0E, 0x00, 0x3C, 0x78, 0x00, 0xE1, 0xE0, 0x07, 0x8F, 0x00,
  0x1C, 0x3C, 0x07, 0xFF, 0xFE, 0x1F, 0xFF, 0xF8, 0x7F, 0xFF, 0xE3, 0xFF,
  0xFF, 0x01, 0xE3, 0xC0, 0x0F, 0x0E, 0x00, 0x3C, 0x78, 0x01, 0xE1, 0xC0,
  0x07, 0x8F, 0x00, 0x3C, 0x38, 0x00, 0x00, 0x0C, 0x00, 0x01, 0x80, 0x00,
  0xFC, 0x00, 0xFF, 0xC0, 0x3F, 0xFC, 0x0F, 0xFF, 0xC3, 0xE6, 0x78, 0x78,
  0xCF, 0x1E, 0x39, 0xE3, 0xC7, 0x3C, 0x78, 0xC0, 0x0F, 0x98, 0x01, 0xFF,
  0x00, 0x1F, 0xF8, 0x01, 0xFF, 0x80, 0x1F, 0xF8, 0x00, 0x7F, 0x80, 0x0F,
  0xF0, 0x03, 0xBE, 0x00, 0x67, 0xCF, 0x8C, 0xF9, 0xF1, 0x9F, 0x3E, 0x77,
  0xC7, 0xEF, 0xF8, 0x7F, 0xFE, 0x0F, 0xFF, 0x80, 0xFF, 0xE0, 0x03, 0xE0,
  0x00, 0x38, 0x00, 0x06, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x07, 0x01,
  0xE0, 0x03, 0x81, 0xFE, 0x00, 0xC0, 0xFF, 0x80, 0x70, 0x7F, 0xF0, 0x38,
  0x1E, 0x3C, 0x1C, 0x0F, 0x07, 0x06, 0x03, 0x81, 0xC3, 0x80, 0xE0, 0xF1,
  0xC0, 0x3C, 0x78, 0xE0, 0x0F, 0xFE, 0x30, 0x01, 0xFF, 0x1C, 0x00, 0x7F,
  0x8E, 0x00, 0x07, 0x83, 0x00, 0x00, 0x01, 0x83, 0xE0, 0x00, 0xE3, 0xFE,
  0x00, 0x71, 0xFF, 0x80, 0x18, 0xFF, 0xF0, 0x0C, 0x3C, 0x3C, 0x07, 0x1C,
  0x07, 0x03, 0x87, 0x01, 0xC0, 0xC1, 0xE1, 0xE0, 0x60, 0x7F, 0xF8, 0x38,
  0x0F, 0xFC, 0x1C, 0x03, 0xFE, 0x06, 0x00, 0x3E, 0x00, 0x00, 0x1F, 0x00,
  0x03, 0xFC, 0x00, 0x3F, 0xF0, 0x03, 0xFF, 0x80, 0x3F, 0x3C, 0x01, 0xF1,
  0xE0, 0x0F, 0x8F, 0x00, 0x7C, 0xF0, 0x03, 0xFF, 0x80, 0x0F, 0xF8, 0x00,
  0x3F, 0x00, 0x03, 0xF0, 0x00, 0x7F, 0xC7, 0x8F, 0xFE, 0x3C, 0xFC, 0xFB,
  0xCF, 0x83, 0xFE, 0xF8, 0x1F, 0xE7, 0xC0, 0x7E, 0x3E, 0x03, 0xE1, 0xF0,
  0x1F, 0x0F, 0xE3, 0xFC, 0x7F, 0xFF, 0xE1, 0xFF, 0xFF, 0x87, 0xFE, 0x7C,
  0x0F, 0xE1, 0xF0, 0x7B, 0xFF, 0xEF, 0x7B, 0x9C, 0xC0, 0x00, 0x78, 0x07,
  0x80, 0x78, 0x03, 0x80, 0x3C, 0x03, 0xC0, 0x1E, 0x01, 0xE0, 0x1E, 0x00,
  0xF0, 0x0F, 0x00, 0x78, 0x03, 0xC0, 0x3C, 0x01, 0xE0, 0x0F, 0x00, 0xF0,
  0x07, 0x80, 0x3C, 0x01, 0xE0, 0x0F, 0x00, 0x78, 0x03, 0xC0, 0x1E, 0x00,
  0xF0, 0x07, 0x80, 0x1C, 0x00, 0xF0, 0x07, 0x80, 0x3C, 0x00, 0xE0, 0x07,
  0x80, 0x1C, 0x00, 0x01, 0xC0, 0x0F, 0x00, 0x38, 0x01, 0xE0, 0x0F, 0x00,
  0x78, 0x01, 0xC0, 0x0F, 0x00, 0x78, 0x03, 0xC0, 0x1E, 0x00, 0xF0, 0x07,
  0x80, 0x3C, 0x01, 0xE0, 0x0F, 0x00, 0xF8, 0x07, 0x80, 0x3C, 0x01, 0xE0,
  0x1E, 0x00, 0xF0, 0x07, 0x80, 0x78, 0x03, 0xC0, 0x3C, 0x03, 0xE0, 0x1E,
  0x01, 0xE0, 0x0E, 0x00, 0xF0, 0x0F, 0x00, 0xF0, 0x00, 0x03, 0x00, 0x70,
  0x07, 0x04, 0x63, 0xFF, 0xF7, 0xFF, 0x1F, 0x83, 0xF0, 0x3B, 0x87, 0x38,
  0x21, 0x00, 0x00, 0x78, 0x00, 0x3C, 0x00, 0x0F, 0x00, 0x03, 0xC0, 0x00,
  0xF0, 0x00, 0x7C, 0x07, 0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF,
  0xE0, 0x3C, 0x00, 0x0F, 0x00, 0x03, 0xC0, 0x00, 0xF0, 0x00, 0x7C, 0x00,
  0x1E, 0x00, 0x3E, 0x7C, 0xF3, 0xE7, 0xC1, 0x87, 0x0C, 0x39, 0xE3, 0x00,
  0x7F, 0xDF, 0xFF, 0xFB, 0xFE, 0x7D, 0xF7, 0xBE, 0xF8, 0x00, 0x0E, 0x00,
  0x18, 0x00, 0x70, 0x00, 0xC0, 0x03, 0x80, 0x06, 0x00, 0x1C, 0x00, 0x30,
  0x00, 0xE0, 0x01, 0x80, 0x07, 0x00, 0x0C, 0x00, 0x38, 0x00, 0x60, 0x01,
  0xC0, 0x03, 0x00, 0x0E, 0x00, 0x18, 0x00, 0x70, 0x00, 0xC0, 0x03, 0x80,
  0x06, 0x00, 0x1C, 0x00, 0x30, 0x00, 0xE0, 0x00, 0x00, 0xFC, 0x00, 0x7F,
  0xC0, 0x7F, 0xF8, 0x3F, 0xFE, 0x0F, 0x8F, 0xC7, 0xC1, 0xF1, 0xE0, 0x7C,
  0xF8, 0x1F, 0x3E, 0x07, 0xDF, 0x01, 0xF7, 0xC0, 0x7D, 0xF0, 0x3F, 0x7C,
  0x0F, 0xBF, 0x03, 0xEF, 0x80, 0xFB, 0xE0, 0x3E, 0xF8, 0x1F, 0x3E, 0x07,
  0xCF, 0x81, 0xE3, 0xE0, 0xF8, 0xFC, 0x7C, 0x1F, 0xFF, 0x07, 0xFF, 0x80,
  0xFF, 0xC0, 0x0F, 0xC0, 0x00, 0x00, 0x70, 0x03, 0x80, 0x3C, 0x03, 0xE0,
  0xFF, 0x3F, 0xF3, 0xFF, 0x9F, 0xFC, 0x03, 0xE0, 0x1F, 0x01, 0xF0, 0x0F,
  0x80, 0x7C, 0x03, 0xE0, 0x1E, 0x01, 0xF0, 0x0F, 0x80, 0x7C, 0x03, 0xE0,
  0x3E, 0x01, 0xF0, 0x0F, 0x80, 0x7C, 0x03, 0xE0, 0x3E, 0x00, 0x00, 0x1F,
  0x80, 0x07, 0xFF, 0x00, 0x7F, 0xFC, 0x07, 0xFF, 0xF0, 0x7E, 0x1F, 0x83,
  0xE0, 0x7C, 0x1F, 0x03, 0xE1, 0xF0, 0x1F, 0x0F, 0x80, 0xF8, 0x00, 0x0F,
  0x80, 0x00, 0x7C, 0x00, 0x07, 0xC0, 0x00, 0x7C, 0x00, 0x07, 0xC0, 0x00,
  0xFC, 0x00, 0x0F, 0xC0, 0x01, 0xF8, 0x00, 0x3F, 0x80, 0x03, 0xF8, 0x00,
  0x3F, 0x00, 0x03, 0xF0, 0x00, 0x1F, 0xFF, 0xE1, 0xFF, 0xFF, 0x0F, 0xFF,
  0xF0, 0x7F, 0xFF, 0x80, 0x00, 0x7F, 0x00, 0x1F, 0xFC, 0x03, 0xFF, 0xE0,
  0x7F, 0xFF, 0x0F, 0x83, 0xF0, 0xF0, 0x1F, 0x1F, 0x01, 0xF1, 0xE0, 0x1F,
  0x00, 0x03, 0xE0, 0x00, 0xFC, 0x00, 0xFF, 0x80, 0x0F, 0xF0, 0x00, 0xFF,
  0x80, 0x0F, 0xFC, 0x00, 0x0F, 0xC0, 0x00, 0x7C, 0x00, 0x07, 0xCF, 0x80,
  0x7C, 0xF8, 0x07, 0xCF, 0x80, 0xF8, 0xFC, 0x3F, 0x8F, 0xFF, 0xF0, 0x7F,
  0xFE, 0x03, 0xFF, 0xC0, 0x0F, 0xE0, 0x00, 0x00, 0x07, 0xE0, 0x01, 0xFC,
  0x00, 0x7F, 0x00, 0x1F, 0xE0, 0x03, 0xFC, 0x00, 0xEF, 0x80, 0x3D, 0xF0,
  0x0F, 0x7C, 0x03, 0xCF, 0x80, 0xF1, 0xF0, 0x1C, 0x3E, 0x07, 0x07, 0xC1,
  0xE1, 0xF0, 0x78, 0x3E, 0x1E, 0x07, 0xC3, 0xFF, 0xFE, 0x7F, 0xFF, 0xDF,
  0xFF, 0xFB, 0xFF, 0xFF, 0x00, 0x1F, 0x00, 0x03, 0xE0, 0x00, 0x78, 0x00,
  0x1F, 0x00, 0x03, 0xE0, 0x00, 0x7C, 0x00, 0x01, 0xFF, 0xF0, 0x3F, 0xFF,
  0x03, 0xFF, 0xF0, 0x3F, 0xFF, 0x07, 0x80, 0x00, 0x78, 0x00, 0x0F, 0x00,
  0x00, 0xF7, 0xE0, 0x0F, 0xFF, 0x01, 0xFF, 0xF8, 0x1F, 0xFF, 0xC3, 0xF0,
  0xFC, 0x3E, 0x07, 0xC0, 0x00, 0x7C, 0x00, 0x07, 0xC0, 0x00, 0x7C, 0x00,
  0x07, 0x8F, 0x80, 0xF8, 0xF8, 0x1F, 0x8F, 0xC3, 0xF0, 0xFF, 0xFE, 0x07,
  0xFF, 0xC0, 0x3F, 0xF8, 0x00, 0xFE, 0x00, 0x00, 0x7E, 0x00, 0x3F, 0xF0,
  0x0F, 0xFF, 0x03, 0xFF, 0xE0, 0xF8, 0x7E, 0x3E, 0x07, 0xC7, 0x80, 0x01,
  0xF0, 0x00, 0x3C, 0xFC, 0x07, 0xFF, 0xC1, 0xFF, 0xFC, 0x3F, 0xFF, 0xC7,
  0xE1, 0xF8, 0xF8, 0x1F, 0x3E, 0x03, 0xE7, 0x80, 0x7C, 0xF0, 0x0F, 0x9E,
  0x01, 0xE3, 0xC0, 0x7C, 0x78, 0x1F, 0x0F, 0x87, 0xE0, 0xFF, 0xF8, 0x1F,
  0xFE, 0x01, 0xFF, 0x80, 0x0F, 0xC0, 0x00, 0x7F, 0xFF, 0xEF, 0xFF, 0xF9,
  0xFF, 0xFF, 0x7F, 0xFF, 0xE0, 0x00, 0xF8, 0x00, 0x3E, 0x00, 0x0F, 0x80,
  0x03, 0xE0, 0x00, 0xF8, 0x00, 0x3E, 0x00, 0x07, 0x80, 0x01, 0xF0, 0x00,
  0x7C, 0x00, 0x1F, 0x00, 0x03, 0xE0, 0x00, 0xF8, 0x00, 0x1F, 0x00, 0x07,
  0xC0, 0x00, 0xF8, 0x00, 0x3E, 0x00, 0x07, 0xC0, 0x01, 0xF0, 0x00, 0x3E,
  0x00, 0x07, 0xC0, 0x00, 0x00, 0x7F, 0x00, 0x1F, 0xFC, 0x07, 0xFF, 0xE0,
  0xFF, 0xFF, 0x0F, 0x81, 0xF1, 0xF0, 0x0F, 0x1E, 0x00, 0xF1, 0xE0, 0x1E,
  0x1F, 0x07, 0xE0, 0xFF, 0xFC, 0x07, 0xFF, 0x00, 0xFF, 0xF8, 0x1F, 0xFF,
  0x83, 0xF0, 0xFC, 0x7C, 0x07, 0xC7, 0xC0, 0x7C, 0xF8, 0x07, 0xCF, 0x80,
  0x7C, 0xF8, 0x0F, 0x8F, 0x80, 0xF8, 0xFC, 0x3F, 0x0F, 0xFF, 0xF0, 0x7F,
  0xFE, 0x03, 0xFF, 0x80, 0x0F, 0xE0, 0x00, 0x00, 0x7E, 0x00, 0x3F, 0xF0,
  0x0F, 0xFF, 0x03, 0xFF, 0xE0, 0xFC, 0x3E, 0x3F, 0x03, 0xC7, 0xC0, 0x79,
  0xF0, 0x0F, 0x3E, 0x01, 0xE7, 0xC0, 0x3C, 0xF8, 0x0F, 0x9F, 0x03, 0xE3,
  0xF0, 0xFC, 0x7F, 0xFF, 0x87, 0xFF, 0xF0, 0x7F, 0xFC, 0x07, 0xE7, 0x80,
  0x00, 0xF0, 0x00, 0x3C, 0x7C, 0x0F, 0x8F, 0xC3, 0xE1, 0xFF, 0xF8, 0x1F,
  0xFE, 0x01, 0xFF, 0x80, 0x0F, 0xC0, 0x00, 0x0F, 0x87, 0xC3, 0xC3, 0xE1,
  0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xE1, 0xF0,
  0xF0, 0xF8, 0x7C, 0x00, 0x07, 0xC1, 0xF0, 0x78, 0x3E, 0x0F, 0x80, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x83, 0xE0, 0xF0,
  0x7C, 0x1F, 0x00, 0xC0, 0x70, 0x18, 0x0E, 0x0F, 0x03, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x3C, 0x00, 0x3F, 0x80, 0x3F, 0xE0, 0x3F, 0xFC, 0x3F, 0xFC,
  0x1F, 0xFC, 0x07, 0xFC, 0x00, 0xFC, 0x00, 0x1F, 0xF0, 0x03, 0xFF, 0x80,
  0x1F, 0xFE, 0x00, 0xFF, 0xF0, 0x03, 0xFE, 0x00, 0x1F, 0xC0, 0x00, 0x78,
  0x00, 0x03, 0x00, 0x1F, 0xFF, 0xF3, 0xFF, 0xFE, 0x3F, 0xFF, 0xE3, 0xFF,
  0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F,
  0xFF, 0xC7, 0xFF, 0xFC, 0xFF, 0xFF, 0x8F, 0xFF, 0xF8, 0x18, 0x00, 0x03,
  0xC0, 0x00, 0x7F, 0x00, 0x0F, 0xF8, 0x01, 0xFF, 0xE0, 0x0F, 0xFF, 0x00,
  0x3F, 0xF8, 0x01, 0xFF, 0x00, 0x07, 0xE0, 0x07, 0xFC, 0x07, 0xFF, 0x07,
  0xFF, 0x87, 0xFF, 0x80, 0xFF, 0x80, 0x3F, 0x80, 0x07, 0x80, 0x00, 0x80,
  0x00, 0x00, 0x03, 0xF8, 0x03, 0xFF, 0xC1, 0xFF, 0xF8, 0xFF, 0xFE, 0x7E,
  0x1F, 0xDF, 0x03, 0xFF, 0x80, 0x7F, 0xE0, 0x1F, 0xF0, 0x07, 0xC0, 0x03,
  0xE0, 0x01, 0xF8, 0x00, 0xFC, 0x00, 0xFE, 0x00, 0x7F, 0x00, 0x3F, 0x00,
  0x1F, 0x80, 0x07, 0x80, 0x03, 0xE0, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x07, 0xC0, 0x01, 0xF0, 0x00, 0xFC, 0x00, 0x3E, 0x00, 0x0F, 0x80,
  0x00, 0x00, 0x00, 0x7F, 0x80, 0x00, 0x01, 0xFF, 0xF8, 0x00, 0x03, 0xFF,
  0xFF, 0x00, 0x07, 0xF0, 0x1F, 0xC0, 0x0F, 0xC0, 0x03, 0xE0, 0x0F, 0x80,
  0x00, 0xF8, 0x0F, 0x00, 0x00, 0x3C, 0x0F, 0x01, 0xF1, 0xCF, 0x0F, 0x03,
  0xFD, 0xC3, 0x8F, 0x03, 0xFF, 0xE1, 0xC7, 0x03, 0xE3, 0xE0, 0xE7, 0x03,
  0xC0, 0xF0, 0x73, 0x83, 0xC0, 0x78, 0x3B, 0x81, 0xE0, 0x38, 0x1D, 0xC1,
  0xE0, 0x1C, 0x1C, 0xC0, 0xF0, 0x1C, 0x0E, 0xE0, 0x70, 0x0E, 0x0F, 0x70,
  0x78, 0x0E, 0x07, 0x38, 0x3C, 0x0F, 0x07, 0x1C, 0x1E, 0x0F, 0x87, 0x8E,
  0x0F, 0x8F, 0xCF, 0x87, 0x07, 0xFF, 0xFF, 0x83, 0xC1, 0xFE, 0x7F, 0x00,
  0xE0, 0x3C, 0x1F, 0x00, 0x78, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x00,
  0x0F, 0xC0, 0x01, 0x00, 0x03, 0xFC, 0x07, 0x80, 0x00, 0xFF, 0xFF, 0xC0,
  0x00, 0x1F, 0xFF, 0xE0, 0x00, 0x01, 0xFF, 0x80, 0x00, 0x00, 0x03, 0xF0,
  0x00, 0x0F, 0xE0, 0x00, 0x1F, 0xE0, 0x00, 0x7F, 0xC0, 0x00, 0xFF, 0x80,
  0x03, 0xFF, 0x00, 0x07, 0xFE, 0x00, 0x1F, 0x7C, 0x00, 0x7E, 0xF8, 0x00,
  0xF9, 0xF0, 0x03, 0xF3, 0xE0, 0x07, 0xC3, 0xE0, 0x1F, 0x87, 0xC0, 0x3E,
  0x0F, 0x80, 0xF8, 0x1F, 0x01, 0xF0, 0x3E, 0x07, 0xFF, 0xFC, 0x1F, 0xFF,
  0xF8, 0x3F, 0xFF, 0xF0, 0xFF, 0xFF, 0xF1, 0xF0, 0x03, 0xE7, 0xC0, 0x07,
  0xCF, 0x80, 0x0F, 0xBE, 0x00, 0x1F, 0x7C, 0x00, 0x3F, 0xF0, 0x00, 0x7C,
  0x07, 0xFF, 0xF0, 0x07, 0xFF, 0xFC, 0x07, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF,
  0x0F, 0xC0, 0x3F, 0x0F, 0x80, 0x1F, 0x0F, 0x80, 0x1F, 0x0F, 0x80, 0x1F,
  0x1F, 0x80, 0x1E, 0x1F, 0x80, 0x3E, 0x1F, 0x00, 0x7C, 0x1F, 0xFF, 0xF8,
  0x1F, 0xFF, 0xF0, 0x3F, 0xFF, 0xF8, 0x3F, 0xFF, 0xF8, 0x3E, 0x00, 0xFC,
  0x3E, 0x00, 0x7C, 0x3E, 0x00, 0x7C, 0x7E, 0x00, 0x7C, 0x7C, 0x00, 0x7C,
  0x7C, 0x00, 0xF8, 0x7C, 0x01, 0xF8, 0x7F, 0xFF, 0xF0, 0xFF, 0xFF, 0xE0,
  0xFF, 0xFF, 0xC0, 0xFF, 0xFE, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x7F, 0xF8,
  0x01, 0xFF, 0xFC, 0x03, 0xFF, 0xFE, 0x07, 0xE0, 0x7F, 0x0F, 0xC0, 0x3F,
  0x1F, 0x80, 0x1F, 0x3F, 0x00, 0x1F, 0x3E, 0x00, 0x1F, 0x7E, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x7C, 0x00, 0x00, 0xF8, 0x00, 0x00,
  0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x00, 0xF8, 0x00, 0x7C,
  0xF8, 0x00, 0x7C, 0xFC, 0x00, 0xF8, 0xFC, 0x01, 0xF8, 0x7F, 0x07, 0xF0,
  0x7F, 0xFF, 0xE0, 0x3F, 0xFF, 0xC0, 0x0F, 0xFF, 0x00, 0x03, 0xFC, 0x00,
  0x07, 0xFF, 0xE0, 0x07, 0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xFE,
  0x0F, 0x80, 0x7E, 0x0F, 0x80, 0x3F, 0x0F, 0x80, 0x1F, 0x1F, 0x80, 0x1F,
  0x1F, 0x80, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x00, 0x1F, 0x1F, 0x00, 0x1F,
  0x3F, 0x00, 0x1F, 0x3E, 0x00, 0x3E, 0x3E, 0x00, 0x3E, 0x3E, 0x00, 0x3E,
  0x3E, 0x00, 0x3E, 0x7E, 0x00, 0x7C, 0x7C, 0x00, 0x7C, 0x7C, 0x00, 0xF8,
  0x7C, 0x01, 0xF8, 0x7C, 0x07, 0xF0, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xC0,
  0xFF, 0xFF, 0x00, 0xFF, 0xF8, 0x00, 0x07, 0xFF, 0xFF, 0x07, 0xFF, 0xFE,
  0x07, 0xFF, 0xFE, 0x0F, 0xFF, 0xFE, 0x0F, 0x80, 0x00, 0x0F, 0x80, 0x00,
  0x0F, 0x80, 0x00, 0x0F, 0x80, 0x00, 0x1F, 0x80, 0x00, 0x1F, 0x00, 0x00,
  0x1F, 0x00, 0x00, 0x1F, 0xFF, 0xF0, 0x1F, 0xFF, 0xF0, 0x3F, 0xFF, 0xF0,
  0x3F, 0xFF, 0xF0, 0x3E, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x3E, 0x00, 0x00,
  0x7E, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0xFF, 0xFF, 0xF0, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xE0, 0xFF, 0xFF, 0xE0,
  0x07, 0xFF, 0xFE, 0x0F, 0xFF, 0xFC, 0x3F, 0xFF, 0xF0, 0x7F, 0xFF, 0xE0,
  0xF8, 0x00, 0x01, 0xF0, 0x00, 0x03, 0xE0, 0x00, 0x0F, 0xC0, 0x00, 0x1F,
  0x00, 0x00, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x00, 0xFF, 0xFF, 0x03, 0xFF,
  0xFE, 0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xF0, 0x1F, 0x00, 0x00, 0x3E, 0x00,
  0x00, 0xFC, 0x00, 0x01, 0xF0, 0x00, 0x03, 0xE0, 0x00, 0x07, 0xC0, 0x00,
  0x0F, 0x80, 0x00, 0x3F, 0x00, 0x00, 0x7C, 0x00, 0x00, 0xF8, 0x00, 0x01,
  0xF0, 0x00, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x7F, 0xF8, 0x01, 0xFF, 0xFC,
  0x03, 0xFF, 0xFE, 0x07, 0xE0, 0x7F, 0x0F, 0x80, 0x3F, 0x1F, 0x00, 0x1F,
  0x3E, 0x00, 0x1F, 0x3E, 0x00, 0x00, 0x7C, 0x00, 0x00, 0x7C, 0x00, 0x00,
  0x7C, 0x00, 0x00, 0xF8, 0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xF8, 0x07, 0xFE,
  0xF8, 0x07, 0xFE, 0xF8, 0x00, 0x3E, 0xF8, 0x00, 0x3E, 0xFC, 0x00, 0x7E,
  0xFC, 0x00, 0x7C, 0x7E, 0x00, 0xFC, 0x7F, 0x83, 0xFC, 0x3F, 0xFF, 0xFC,
  0x1F, 0xFF, 0xBC, 0x0F, 0xFF, 0x38, 0x03, 0xFC, 0x38, 0x03, 0xE0, 0x07,
  0xC0, 0xF8, 0x01, 0xF0, 0x7E, 0x00, 0x7C, 0x1F, 0x00, 0x3F, 0x07, 0xC0,
  0x0F, 0x81, 0xF0, 0x03, 0xE0, 0xFC, 0x00, 0xF8, 0x3E, 0x00, 0x3E, 0x0F,
  0x80, 0x1F, 0x83, 0xE0, 0x07, 0xC0, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFC,
  0x1F, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xC1, 0xF0, 0x03, 0xE0, 0x7C, 0x00,
  0xF8, 0x3F, 0x00, 0x3E, 0x0F, 0x80, 0x0F, 0x83, 0xE0, 0x07, 0xE0, 0xF8,
  0x01, 0xF0, 0x3E, 0x00, 0x7C, 0x1F, 0x80, 0x1F, 0x07, 0xC0, 0x0F, 0xC1,
  0xF0, 0x03, 0xF0, 0x7C, 0x00, 0xF8, 0x3F, 0x00, 0x3E, 0x00, 0x07, 0xC3,
  0xF0, 0xFC, 0x3E, 0x0F, 0x83, 0xE0, 0xF8, 0x7E, 0x1F, 0x07, 0xC1, 0xF0,
  0x7C, 0x3F, 0x0F, 0xC3, 0xE0, 0xF8, 0x3E, 0x0F, 0x87, 0xE1, 0xF0, 0x7C,
  0x1F, 0x07, 0xC3, 0xF0, 0xFC, 0x3E, 0x00, 0x00, 0x01, 0xF0, 0x00, 0x1F,
  0x00, 0x01, 0xF0, 0x00, 0x3F, 0x00, 0x03, 0xE0, 0x00, 0x3E, 0x00, 0x03,
  0xE0, 0x00, 0x3E, 0x00, 0x07, 0xE0, 0x00, 0x7C, 0x00, 0x07, 0xC0, 0x00,
  0x7C, 0x00, 0x0F, 0xC0, 0x00, 0xFC, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0x7C,
  0x0F, 0x8F, 0x81, 0xF8, 0xF8, 0x1F, 0x0F, 0x81, 0xF0, 0xF8, 0x1F, 0x0F,
  0xC3, 0xF0, 0xFF, 0xFE, 0x07, 0xFF, 0xC0, 0x3F, 0xF8, 0x01, 0xFC, 0x00,
  0x07, 0xC0, 0x0F, 0xC1, 0xF0, 0x07, 0xE0, 0x7C, 0x03, 0xF0, 0x3F, 0x03,
  0xF8, 0x0F, 0x81, 0xF8, 0x03, 0xE0, 0xFC, 0x00, 0xF8, 0x7E, 0x00, 0x7E,
  0x3F, 0x00, 0x1F, 0x1F, 0x80, 0x07, 0xCF, 0xC0, 0x01, 0xF7, 0xE0, 0x00,
  0x7F, 0xF0, 0x00, 0x3F, 0xFC, 0x00, 0x0F, 0xFF, 0x80, 0x03, 0xFF, 0xF0,
  0x00, 0xFE, 0xFC, 0x00, 0x3F, 0x1F, 0x80, 0x1F, 0x87, 0xE0, 0x07, 0xC0,
  0xFC, 0x01, 0xF0, 0x3F, 0x00, 0x7C, 0x07, 0xE0, 0x1F, 0x01, 0xFC, 0x0F,
  0xC0, 0x3F, 0x03, 0xE0, 0x0F, 0xE0, 0xF8, 0x01, 0xF8, 0x3E, 0x00, 0x3F,
  0x00, 0x07, 0xC0, 0x01, 0xF0, 0x00, 0x7C, 0x00, 0x1F, 0x00, 0x0F, 0xC0,
  0x03, 0xE0, 0x00, 0xF8, 0x00, 0x3E, 0x00, 0x1F, 0x80, 0x07, 0xC0, 0x01,
  0xF0, 0x00, 0x7C, 0x00, 0x1F, 0x00, 0x0F, 0xC0, 0x03, 0xE0, 0x00, 0xF8,
  0x00, 0x3E, 0x00, 0x0F, 0x80, 0x07, 0xE0, 0x01, 0xF0, 0x00, 0x7C, 0x00,
  0x1F, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xFF, 0xE0,
  0x03, 0xF8, 0x01, 0xFC, 0x07, 0xF0, 0x07, 0xF8, 0x1F, 0xE0, 0x0F, 0xF0,
  0x3F, 0xC0, 0x3F, 0xE0, 0x7F, 0x80, 0x7F, 0xC0, 0xFF, 0x01, 0xFF, 0x01,
  0xFE, 0x03, 0xFE, 0x07, 0xDC, 0x07, 0x7C, 0x0F, 0xB8, 0x1E, 0xF8, 0x1F,
  0x70, 0x3D, 0xF0, 0x3E, 0xF0, 0xF7, 0xC0, 0xF9, 0xE1, 0xEF, 0x81, 0xF3,
  0xC7, 0x9F, 0x03, 0xE7, 0x8F, 0x3E, 0x07, 0xCF, 0x3C, 0x7C, 0x0F, 0x9E,
  0x79, 0xF0, 0x3E, 0x3C, 0xE3, 0xE0, 0x7C, 0x7B, 0xC7, 0xC0, 0xF8, 0xF7,
  0x8F, 0x81, 0xF1, 0xFE, 0x1E, 0x07, 0xE3, 0xFC, 0x7C, 0x0F, 0x87, 0xF0,
  0xF8, 0x1F, 0x0F, 0xE1, 0xF0, 0x3E, 0x1F, 0x83, 0xE0, 0x7C, 0x3F, 0x0F,
  0x81, 0xF0, 0x7E, 0x1F, 0x00, 0x03, 0xE0, 0x07, 0xC0, 0x7E, 0x00, 0xF8,
  0x1F, 0xC0, 0x1F, 0x03, 0xF8, 0x03, 0xE0, 0x7F, 0x80, 0x7C, 0x0F, 0xF0,
  0x1F, 0x01, 0xFF, 0x03, 0xE0, 0x7F, 0xE0, 0x7C, 0x0F, 0xBC, 0x0F, 0x81,
  0xF7, 0xC1, 0xF0, 0x3E, 0xF8, 0x7C, 0x0F, 0x8F, 0x0F, 0x81, 0xF1, 0xF1,
  0xF0, 0x3E, 0x3E, 0x3E, 0x07, 0xC3, 0xC7, 0xC0, 0xF8, 0x7D, 0xF0, 0x3E,
  0x0F, 0xBE, 0x07, 0xC0, 0xF7, 0xC0, 0xF8, 0x1F, 0xF8, 0x1F, 0x01, 0xFE,
  0x03, 0xC0, 0x3F, 0xC0, 0xF8, 0x07, 0xF8, 0x1F, 0x00, 0x7F, 0x03, 0xE0,
  0x0F, 0xE0, 0x7C, 0x01, 0xF8, 0x1F, 0x00, 0x1F, 0x00, 0x00, 0x1F, 0xE0,
  0x00, 0x3F, 0xFC, 0x00, 0x7F, 0xFF, 0x00, 0x7F, 0xFF, 0xC0, 0x7E, 0x07,
  0xF0, 0x7E, 0x01, 0xF8, 0x7C, 0x00, 0x7E, 0x3E, 0x00, 0x1F, 0x3E, 0x00,
  0x0F, 0x9F, 0x00, 0x07, 0xDF, 0x00, 0x03, 0xEF, 0x80, 0x01, 0xFF, 0x80,
  0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7D, 0xF0, 0x00, 0x3E, 0xF8,
  0x00, 0x1F, 0x7C, 0x00, 0x1F, 0x3E, 0x00, 0x1F, 0x9F, 0x80, 0x0F, 0x87,
  0xE0, 0x0F, 0x83, 0xF8, 0x1F, 0x80, 0xFF, 0xFF, 0x80, 0x3F, 0xFF, 0x80,
  0x0F, 0xFF, 0x00, 0x01, 0xFE, 0x00, 0x00, 0x07, 0xFF, 0xE0, 0x0F, 0xFF,
  0xF0, 0x3F, 0xFF, 0xF0, 0x7F, 0xFF, 0xF0, 0xF8, 0x07, 0xE1, 0xF0, 0x07,
  0xC3, 0xE0, 0x0F, 0x8F, 0xC0, 0x1F, 0x1F, 0x00, 0x3E, 0x3E, 0x00, 0xF8,
  0x7C, 0x01, 0xF0, 0xF8, 0x07, 0xC3, 0xFF, 0xFF, 0x87, 0xFF, 0xFE, 0x0F,
  0xFF, 0xF8, 0x1F, 0xFF, 0xC0, 0x3E, 0x00, 0x00, 0xFC, 0x00, 0x01, 0xF0,
  0x00, 0x03, 0xE0, 0x00, 0x07, 0xC0, 0x00, 0x0F, 0x80, 0x00, 0x3F, 0x00,
  0x00, 0x7C, 0x00, 0x00, 0xF8, 0x00, 0x01, 0xF0, 0x00, 0x00, 0x00, 0x1F,
  0xE0, 0x00, 0x3F, 0xFC, 0x00, 0x7F, 0xFF, 0x00, 0x7F, 0xFF, 0xC0, 0x7F,
  0x07, 0xF0, 0x7E, 0x01, 0xF8, 0x7E, 0x00, 0x7E, 0x3E, 0x00, 0x1F, 0x3E,
  0x00, 0x0F, 0x9E, 0x00, 0x07, 0xDF, 0x00, 0x03, 0xEF, 0x80, 0x01, 0xFF,
  0x80, 0x00, 0xFF, 0xC0, 0x00, 0x7F, 0xE0, 0x00, 0x7D, 0xF0, 0x00, 0x3E,
  0xF8, 0x02, 0x1F, 0x7C, 0x03, 0x9F, 0x3E, 0x03, 0xFF, 0x9F, 0x81, 0xFF,
  0x87, 0xE0, 0x7F, 0x83, 0xF8, 0x3F, 0xC0, 0xFF, 0xFF, 0xE0, 0x3F, 0xFF,
  0xF0, 0x0F, 0xFF, 0xFC, 0x01, 0xFE, 0x1C, 0x00, 0x00, 0x0C, 0x00, 0x07,
  0xFF, 0xF8, 0x07, 0xFF, 0xFE, 0x07, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0x0F,
  0x80, 0x3F, 0x0F, 0x80, 0x1F, 0x0F, 0x80, 0x1F, 0x0F, 0x80, 0x1F, 0x1F,
  0x80, 0x1E, 0x1F, 0x00, 0x3E, 0x1F, 0x00, 0x7C, 0x1F, 0xFF, 0xF8, 0x1F,
  0xFF, 0xE0, 0x3F, 0xFF, 0xF0, 0x3F, 0xFF, 0xF8, 0x3E, 0x01, 0xF8, 0x3E,
  0x00, 0xF8, 0x3E, 0x00, 0xF8, 0x7E, 0x00, 0xF8, 0x7C, 0x00, 0xF8, 0x7C,
  0x01, 0xF0, 0x7C, 0x01, 0xF0, 0x7C, 0x01, 0xF0, 0xFC, 0x01, 0xF0, 0xF8,
  0x01, 0xF0, 0xF8, 0x01, 0xF0, 0x00, 0x3F, 0xC0, 0x07, 0xFF, 0xC0, 0x3F,
  0xFF, 0x81, 0xFF, 0xFF, 0x0F, 0xC0, 0xFC, 0x3E, 0x01, 0xF1, 0xF0, 0x07,
  0xC7, 0xC0, 0x1F, 0x1F, 0x00, 0x00, 0x7E, 0x00, 0x01, 0xFE, 0x00, 0x07,
  0xFF, 0x80, 0x0F, 0xFF, 0xC0, 0x1F, 0xFF, 0xC0, 0x1F, 0xFF, 0x80, 0x03,
  0xFE, 0x00, 0x01, 0xF8, 0x00, 0x03, 0xEF, 0x80, 0x0F, 0xBE, 0x00, 0x3C,
  0xFC, 0x01, 0xF3, 0xF8, 0x1F, 0x87, 0xFF, 0xFE, 0x0F, 0xFF, 0xF0, 0x1F,
  0xFF, 0x00, 0x1F, 0xF0, 0x00, 0x7F, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xF0, 0x0F, 0x80, 0x00, 0xFC, 0x00, 0x07, 0xC0, 0x00,
  0x3E, 0x00, 0x01, 0xF0, 0x00, 0x0F, 0x80, 0x00, 0xFC, 0x00, 0x07, 0xC0,
  0x00, 0x3E, 0x00, 0x01, 0xF0, 0x00, 0x0F, 0x80, 0x00, 0xFC, 0x00, 0x07,
  0xC0, 0x00, 0x3E, 0x00, 0x01, 0xF0, 0x00, 0x0F, 0x80, 0x00, 0xFC, 0x00,
  0x07, 0xC0, 0x00, 0x3E, 0x00, 0x01, 0xF0, 0x00, 0x0F, 0x80, 0x00, 0xFC,
  0x00, 0x00, 0x0F, 0x80, 0x1F, 0x1F, 0x80, 0x1F, 0x1F, 0x00, 0x1F, 0x1F,
  0x00, 0x3F, 0x1F, 0x00, 0x3E, 0x1F, 0x00, 0x3E, 0x3E, 0x00, 0x3E, 0x3E,
  0x00, 0x7E, 0x3E, 0x00, 0x7C, 0x3E, 0x00, 0x7C, 0x3E, 0x00, 0x7C, 0x7C,
  0x00, 0x7C, 0x7C, 0x00, 0xFC, 0x7C, 0x00, 0xF8, 0x7C, 0x00, 0xF8, 0x7C,
  0x00, 0xF8, 0xF8, 0x00, 0xF8, 0xF8, 0x01, 0xF8, 0xF8, 0x01, 0xF0, 0xF8,
  0x01, 0xF0, 0xF8, 0x03, 0xE0, 0xFE, 0x0F, 0xE0, 0x7F, 0xFF, 0xC0, 0x7F,
  0xFF, 0x80, 0x1F, 0xFE, 0x00, 0x07, 0xF8, 0x00, 0xFC, 0x00, 0x7F, 0xF0,
  0x03, 0xE7, 0xC0, 0x0F, 0x9F, 0x00, 0x7C, 0x7C, 0x01, 0xF1, 0xF0, 0x0F,
  0x87, 0xC0, 0x3E, 0x1F, 0x01, 0xF0, 0x7C, 0x07, 0x81, 0xF0, 0x3E, 0x03,
  0xC0, 0xF0, 0x0F, 0x07, 0xC0, 0x3E, 0x1E, 0x00, 0xF8, 0xF8, 0x03, 0xE3,
  0xC0, 0x0F, 0x9F, 0x00, 0x3E, 0x78, 0x00, 0xFB, 0xE0, 0x01, 0xEF, 0x00,
  0x07, 0xFC, 0x00, 0x1F, 0xE0, 0x00, 0x7F, 0x00, 0x01, 0xFC, 0x00, 0x07,
  0xE0, 0x00, 0x1F, 0x80, 0x00, 0x7C, 0x00, 0x00, 0xF8, 0x07, 0xE0, 0x1F,
  0xF8, 0x07, 0xE0, 0x3F, 0xF8, 0x0F, 0xE0, 0x3E, 0xF8, 0x0F, 0xE0, 0x7E,
  0xF8, 0x1F, 0xE0, 0x7C, 0xF8, 0x1F, 0xE0, 0x7C, 0xF8, 0x3F, 0xE0, 0xF8,
  0xF8, 0x3D, 0xE0, 0xF8, 0x78, 0x3D, 0xE1, 0xF0, 0x78, 0x79, 0xE1, 0xF0,
  0x78, 0x79, 0xE1, 0xE0, 0x78, 0xF9, 0xE3, 0xE0, 0x78, 0xF1, 0xE3, 0xC0,
  0x79, 0xF1, 0xE7, 0xC0, 0x79, 0xE1, 0xE7, 0x80, 0x79, 0xE1, 0xE7, 0x80,
  0x7B, 0xC1, 0xEF, 0x80, 0x7B, 0xC1, 0xEF, 0x00, 0x7F, 0x81, 0xFF, 0x00,
  0x7F, 0x81, 0xFE, 0x00, 0x7F, 0x01, 0xFE, 0x00, 0x7F, 0x01, 0xFC, 0x00,
  0x7F, 0x01, 0xFC, 0x00, 0x7E, 0x01, 0xF8, 0x00, 0x3E, 0x01, 0xF8, 0x00,
  0x3C, 0x01, 0xF0, 0x00, 0x03, 0xF0, 0x07, 0xE0, 0x7E, 0x01, 0xF8, 0x07,
  0xE0, 0x7E, 0x00, 0xFC, 0x1F, 0x80, 0x1F, 0x83, 0xE0, 0x01, 0xF8, 0xF8,
  0x00, 0x3F, 0x3F, 0x00, 0x03, 0xEF, 0xC0, 0x00, 0x7F, 0xF0, 0x00, 0x0F,
  0xFC, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x03, 0xF8, 0x00,
  0x00, 0x7F, 0x00, 0x00, 0x1F, 0xE0, 0x00, 0x07, 0xFE, 0x00, 0x00, 0xFF,
  0xC0, 0x00, 0x3E, 0xF8, 0x00, 0x0F, 0xDF, 0x80, 0x03, 0xF3, 0xF0, 0x00,
  0xFC, 0x3F, 0x00, 0x3F, 0x07, 0xE0, 0x07, 0xE0, 0xFC, 0x01, 0xF8, 0x0F,
  0xC0, 0x7E, 0x01, 0xF8, 0x1F, 0x80, 0x3F, 0x80, 0x7C, 0x00, 0xFD, 0xF8,
  0x07, 0xE7, 0xE0, 0x1F, 0x1F, 0x80, 0xFC, 0x3E, 0x07, 0xE0, 0xFC, 0x1F,
  0x03, 0xF0, 0xFC, 0x07, 0xC7, 0xE0, 0x1F, 0x1F, 0x00, 0x7E, 0xFC, 0x00,
  0xFB, 0xE0, 0x03, 0xFF, 0x00, 0x0F, 0xFC, 0x00, 0x1F, 0xE0, 0x00, 0x7F,
  0x00, 0x01, 0xF8, 0x00, 0x07, 0xE0, 0x00, 0x1F, 0x00, 0x00, 0x7C, 0x00,
  0x01, 0xF0, 0x00, 0x07, 0xC0, 0x00, 0x3F, 0x00, 0x00, 0xF8, 0x00, 0x03,
  0xE0, 0x00, 0x0F, 0x80, 0x00, 0x3E, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0x83,
  0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xE0, 0x00, 0x07, 0xE0,
  0x00, 0x07, 0xE0, 0x00, 0x07, 0xE0, 0x00, 0x07, 0xF0, 0x00, 0x07, 0xF0,
  0x00, 0x07, 0xF0, 0x00, 0x03, 0xF0, 0x00, 0x03, 0xF0, 0x00, 0x03, 0xF0,
  0x00, 0x03, 0xF0, 0x00, 0x03, 0xF0, 0x00, 0x03, 0xF0, 0x00, 0x03, 0xF0,
  0x00, 0x03, 0xF0, 0x00, 0x03, 0xF0, 0x00, 0x03, 0xF0, 0x00, 0x03, 0xF8,
  0x00, 0x03, 0xF8, 0x00, 0x01, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xE0, 0xFF,
  0xFF, 0xF0, 0x7F, 0xFF, 0xF0, 0x00, 0x01, 0xFE, 0x03, 0xFC, 0x07, 0xF8,
  0x1F, 0xF0, 0x3C, 0x00, 0x78, 0x00, 0xF0, 0x01, 0xE0, 0x07, 0x80, 0x0F,
  0x00, 0x1E, 0x00, 0x3C, 0x00, 0xF8, 0x01, 0xE0, 0x03, 0xC0, 0x07, 0x80,
  0x0F, 0x00, 0x3C, 0x00, 0x78, 0x00, 0xF0, 0x01, 0xE0, 0x07, 0x80, 0x0F,
  0x00, 0x1E, 0x00, 0x3C, 0x00, 0xF8, 0x01, 0xE0, 0x03, 0xC0, 0x07, 0x80,
  0x0F, 0xF0, 0x3F, 0xC0, 0x7F, 0x80, 0xFF, 0x00, 0xE7, 0x39, 0xCE, 0x31,
  0x8C, 0x63, 0x1C, 0xE7, 0x39, 0xC6, 0x31, 0x8C, 0x63, 0x9C, 0xE7, 0x38,
  0x01, 0xFE, 0x03, 0xFC, 0x07, 0xF8, 0x1F, 0xE0, 0x03, 0xC0, 0x07, 0x80,
  0x0F, 0x00, 0x3E, 0x00, 0x78, 0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC0, 0x0F,
  0x00, 0x1E, 0x00, 0x3C, 0x00, 0x78, 0x01, 0xE0, 0x03, 0xC0, 0x07, 0x80,
  0x0F, 0x00, 0x3E, 0x00, 0x78, 0x00, 0xF0, 0x01, 0xE0, 0x03, 0xC0, 0x0F,
  0x00, 0x1E, 0x00, 0x3C, 0x00, 0x78, 0x1F, 0xF0, 0x3F, 0xC0, 0x7F, 0x80,
  0xFF, 0x00, 0x00, 0x7C, 0x00, 0xFC, 0x01, 0xFC, 0x01, 0xFC, 0x03, 0xFC,
  0x03, 0x9E, 0x07, 0x9E, 0x0F, 0x1E, 0x0F, 0x1E, 0x1E, 0x1E, 0x1C, 0x0F,
  0x3C, 0x0F, 0x78, 0x0F, 0x78, 0x0F, 0xF0, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFE, 0xF3, 0x8C, 0x71, 0x80, 0x01, 0xFE, 0x01, 0xFF,
  0xE0, 0xFF, 0xFC, 0x7F, 0xFF, 0x1F, 0x0F, 0xC7, 0x81, 0xF0, 0x00, 0x7C,
  0x00, 0xFE, 0x07, 0xFF, 0x87, 0xFF, 0xE3, 0xFE, 0xF9, 0xF0, 0x7C, 0xF8,
  0x1F, 0x3E, 0x0F, 0xCF, 0x87, 0xF3, 0xFF, 0xF8, 0xFF, 0xFE, 0x1F, 0xEF,
  0x81, 0xE3, 0xF0, 0x07, 0xC0, 0x00, 0x7C, 0x00, 0x07, 0xC0, 0x00, 0x7C,
  0x00, 0x07, 0x80, 0x00, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0xF9, 0xF8, 0x0F,
  0xFF, 0xC1, 0xFF, 0xFE, 0x1F, 0xFF, 0xE1, 0xFC, 0x3F, 0x1F, 0x83, 0xF1,
  0xF0, 0x1F, 0x3E, 0x01, 0xF3, 0xE0, 0x1F, 0x3C, 0x01, 0xF3, 0xC0, 0x1F,
  0x3C, 0x03, 0xE7, 0xC0, 0x3E, 0x7E, 0x07, 0xC7, 0xF1, 0xFC, 0x7F, 0xFF,
  0x87, 0xFF, 0xF0, 0xFB, 0xFE, 0x0F, 0x9F, 0x80, 0x00, 0xFC, 0x01, 0xFF,
  0xC0, 0xFF, 0xF8, 0x7F, 0xFF, 0x3F, 0x0F, 0xCF, 0x81, 0xF7, 0xC0, 0x7D,
  0xF0, 0x00, 0x7C, 0x00, 0x3E, 0x00, 0x0F, 0x80, 0x03, 0xE0, 0x00, 0xF8,
  0x0F, 0xBE, 0x07, 0xCF, 0xC3, 0xF1, 0xFF, 0xF8, 0x7F, 0xFC, 0x0F, 0xFE,
  0x00, 0xFE, 0x00, 0x00, 0x00, 0xF8, 0x00, 0x03, 0xE0, 0x00, 0x0F, 0x80,
  0x00, 0x3E, 0x00, 0x00, 0xF8, 0x00, 0x07, 0xC0, 0x00, 0x1F, 0x00, 0x7E,
  0x7C, 0x07, 0xFD, 0xF0, 0x3F, 0xFF, 0xC1, 0xFF, 0xFE, 0x0F, 0xE3, 0xF8,
  0x3E, 0x07, 0xE1, 0xF0, 0x1F, 0x87, 0xC0, 0x3C, 0x3E, 0x00, 0xF0, 0xF8,
  0x07, 0xC3, 0xE0, 0x1F, 0x0F, 0x80, 0x7C, 0x3E, 0x03, 0xE0, 0xF8, 0x1F,
  0x83, 0xF0, 0xFE, 0x07, 0xFF, 0xF8, 0x1F, 0xFF, 0xE0, 0x3F, 0xFF, 0x00,
  0x7E, 0x7C, 0x00, 0x00, 0xFE, 0x00, 0x7F, 0xE0, 0x3F, 0xFE, 0x0F, 0xFF,
  0xE3, 0xF0, 0x7E, 0x7C, 0x07, 0xDF, 0x00, 0xFB, 0xE0, 0x1F, 0x7F, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x0F, 0x80, 0x01, 0xF0, 0x1F,
  0x3F, 0x07, 0xE3, 0xFF, 0xF8, 0x7F, 0xFE, 0x03, 0xFF, 0x00, 0x3F, 0x80,
  0x00, 0x00, 0xF8, 0x1F, 0xC1, 0xFE, 0x0F, 0xF0, 0x7C, 0x07, 0xC0, 0x3E,
  0x0F, 0xFE, 0x7F, 0xF3, 0xFF, 0x07, 0xC0, 0x3E, 0x01, 0xF0, 0x0F, 0x80,
  0x7C, 0x07, 0xC0, 0x3E, 0x01, 0xF0, 0x0F, 0x80, 0x78, 0x07, 0xC0, 0x3E,
  0x01, 0xF0, 0x0F, 0x80, 0xF8, 0x07, 0xC0, 0x00, 0x00, 0x7E, 0x7C, 0x07,
  0xFD, 0xF0, 0x3F, 0xF7, 0x81, 0xFF, 0xFE, 0x0F, 0xE3, 0xF8, 0x3E, 0x07,
  0xE1, 0xF8, 0x0F, 0x87, 0xC0, 0x3C, 0x1E, 0x00, 0xF0, 0xF8, 0x03, 0xC3,
  0xE0, 0x1F, 0x0F, 0x80, 0x78, 0x3E, 0x03, 0xE0, 0xF8, 0x1F, 0x83, 0xF0,
  0xFE, 0x07, 0xFF, 0xF8, 0x1F, 0xFF, 0xC0, 0x3F, 0xEF, 0x00, 0x7E, 0x7C,
  0x00, 0x01, 0xF0, 0x00, 0x07, 0xC3, 0xE0, 0x3E, 0x0F, 0x80, 0xF8, 0x3F,
  0x0F, 0xC0, 0x7F, 0xFE, 0x00, 0xFF, 0xF0, 0x00, 0xFE, 0x00, 0x00, 0x03,
  0xE0, 0x00, 0x7C, 0x00, 0x07, 0xC0, 0x00, 0x7C, 0x00, 0x07, 0xC0, 0x00,
  0x7C, 0x00, 0x0F, 0x80, 0x00, 0xF8, 0xFC, 0x0F, 0xBF, 0xE0, 0xFF, 0xFF,
  0x0F, 0xFF, 0xF1, 0xFC, 0x3F, 0x1F, 0x81, 0xF1, 0xF0, 0x1F, 0x1F, 0x01,
  0xF1, 0xE0, 0x1F, 0x3E, 0x03, 0xE3, 0xE0, 0x3E, 0x3E, 0x03, 0xE3, 0xE0,
  0x3E, 0x7C, 0x03, 0xE7, 0xC0, 0x7C, 0x7C, 0x07, 0xC7, 0xC0, 0x7C, 0x7C,
  0x07, 0xCF, 0x80, 0x78, 0x07, 0xC1, 0xF0, 0x7C, 0x3E, 0x00, 0x00, 0x00,
  0x00, 0x3E, 0x1F, 0x07, 0xC1, 0xF0, 0x7C, 0x1F, 0x0F, 0x83, 0xE0, 0xF8,
  0x3E, 0x0F, 0x87, 0xC1, 0xF0, 0x7C, 0x1F, 0x07, 0xC3, 0xE0, 0xF8, 0x3E,
  0x00, 0x00, 0x3E, 0x00, 0x78, 0x01, 0xF0, 0x03, 0xE0, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x7C, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x0F, 0x80,
  0x1F, 0x00, 0x3E, 0x00, 0x7C, 0x00, 0xF8, 0x03, 0xE0, 0x07, 0xC0, 0x0F,
  0x80, 0x1F, 0x00, 0x3C, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x07, 0xC0,
  0x1F, 0x00, 0x3E, 0x00, 0x7C, 0x00, 0xF8, 0x03, 0xF0, 0x1F, 0xC0, 0x3F,
  0x80, 0x7E, 0x01, 0xF0, 0x00, 0x07, 0xC0, 0x00, 0x3E, 0x00, 0x01, 0xF0,
  0x00, 0x0F, 0x80, 0x00, 0x78, 0x00, 0x07, 0xC0, 0x00, 0x3E, 0x00, 0x01,
  0xF0, 0x3E, 0x0F, 0x83, 0xE0, 0xF8, 0x3E, 0x07, 0xC7, 0xE0, 0x3E, 0x7E,
  0x01, 0xF7, 0xE0, 0x0F, 0xFE, 0x00, 0xFF, 0xE0, 0x07, 0xFF, 0x00, 0x3F,
  0xFC, 0x01, 0xFF, 0xE0, 0x0F, 0xDF, 0x00, 0xFC, 0xFC, 0x07, 0xC3, 0xE0,
  0x3E, 0x1F, 0x01, 0xF0, 0xFC, 0x0F, 0x83, 0xE0, 0xF8, 0x1F, 0x87, 0xC0,
  0xFC, 0x00, 0x07, 0xC1, 0xF0, 0x7C, 0x3E, 0x0F, 0x83, 0xE0, 0xF8, 0x3E,
  0x1F, 0x07, 0xC1, 0xF0, 0x7C, 0x1F, 0x0F, 0x83, 0xE0, 0xF8, 0x3E, 0x0F,
  0x87, 0xC1, 0xF0, 0x7C, 0x1F, 0x07, 0xC3, 0xE0, 0xF8, 0x3E, 0x00, 0x0F,
  0x8F, 0x83, 0xF0, 0x3E, 0xFF, 0x3F, 0xE0, 0xF7, 0xFF, 0xFF, 0xC7, 0xFF,
  0xFF, 0xFF, 0x1F, 0xC7, 0xF8, 0xFC, 0x7C, 0x0F, 0x81, 0xF1, 0xF0, 0x3E,
  0x07, 0xCF, 0x81, 0xF0, 0x3E, 0x3E, 0x07, 0xC0, 0xF8, 0xF8, 0x1F, 0x03,
  0xE3, 0xE0, 0x7C, 0x0F, 0x8F, 0x81, 0xF0, 0x3E, 0x7C, 0x0F, 0x81, 0xF1,
  0xF0, 0x3E, 0x07, 0xC7, 0xC0, 0xF8, 0x1F, 0x1F, 0x03, 0xE0, 0x7C, 0x7C,
  0x0F, 0x81, 0xE3, 0xE0, 0x7C, 0x0F, 0x8F, 0x81, 0xF0, 0x3E, 0x00, 0x0F,
  0x8F, 0xC0, 0xFB, 0xFE, 0x0F, 0xFF, 0xF1, 0xFF, 0xFF, 0x1F, 0xC3, 0xF1,
  0xF8, 0x1F, 0x1F, 0x01, 0xF1, 0xF0, 0x1F, 0x3E, 0x01, 0xF3, 0xE0, 0x3E,
  0x3E, 0x03, 0xE3, 0xE0, 0x3E, 0x3C, 0x03, 0xE7, 0xC0, 0x3E, 0x7C, 0x07,
  0xC7, 0xC0, 0x7C, 0x7C, 0x07, 0xC7, 0x80, 0x7C, 0xF8, 0x07, 0x80, 0x00,
  0xFE, 0x00, 0x7F, 0xF0, 0x3F, 0xFF, 0x0F, 0xFF, 0xE3, 0xF8, 0xFE, 0x7C,
  0x0F, 0xDF, 0x00, 0xFB, 0xE0, 0x1F, 0xF8, 0x03, 0xFF, 0x00, 0x7F, 0xE0,
  0x1F, 0xFC, 0x03, 0xEF, 0x80, 0x7D, 0xF8, 0x1F, 0x3F, 0x87, 0xE3, 0xFF,
  0xF8, 0x7F, 0xFE, 0x07, 0xFF, 0x00, 0x3F, 0x80, 0x00, 0x03, 0xE7, 0xE0,
  0x0F, 0xBF, 0xC0, 0x7D, 0xFF, 0x81, 0xFF, 0xFE, 0x07, 0xF0, 0xFC, 0x1F,
  0x81, 0xF0, 0x7C, 0x07, 0xC3, 0xE0, 0x1F, 0x0F, 0x80, 0x7C, 0x3C, 0x01,
  0xF0, 0xF0, 0x07, 0xC3, 0xC0, 0x3E, 0x1F, 0x00, 0xF8, 0x7E, 0x07, 0xC1,
  0xFC, 0x7F, 0x07, 0xFF, 0xF8, 0x1F, 0xFF, 0xC0, 0xFB, 0xFE, 0x03, 0xE7,
  0xE0, 0x0F, 0x80, 0x00, 0x3E, 0x00, 0x00, 0xF0, 0x00, 0x07, 0xC0, 0x00,
  0x1F, 0x00, 0x00, 0x7C, 0x00, 0x01, 0xF0, 0x00, 0x0F, 0x80, 0x00, 0x00,
  0x01, 0xF9, 0xF0, 0x7F, 0xDF, 0x0F, 0xFD, 0xF1, 0xFF, 0xFE, 0x3F, 0x8F,
  0xE3, 0xE0, 0x7E, 0x7C, 0x03, 0xE7, 0xC0, 0x3E, 0xF8, 0x03, 0xCF, 0x80,
  0x3C, 0xF8, 0x07, 0xCF, 0x80, 0x7C, 0xF8, 0x0F, 0x8F, 0x81, 0xF8, 0xFC,
  0x3F, 0x87, 0xFF, 0xF8, 0x7F, 0xFF, 0x83, 0xFF, 0xF0, 0x1F, 0x9F, 0x00,
  0x01, 0xF0, 0x00, 0x1F, 0x00, 0x01, 0xF0, 0x00, 0x3E, 0x00, 0x03, 0xE0,
  0x00, 0x3E, 0x00, 0x03, 0xE0, 0x00, 0x3E, 0x00, 0x0F, 0x8E, 0x1F, 0x7C,
  0x3F, 0xF0, 0xFF, 0xE1, 0xFC, 0x03, 0xF0, 0x07, 0xC0, 0x0F, 0x80, 0x3E,
  0x00, 0x7C, 0x00, 0xF8, 0x01, 0xF0, 0x03, 0xE0, 0x0F, 0x80, 0x1F, 0x00,
  0x3E, 0x00, 0x7C, 0x00, 0xF0, 0x03, 0xE0, 0x00, 0x01, 0xFC, 0x01, 0xFF,
  0xC0, 0xFF, 0xF8, 0x7F, 0xFF, 0x3F, 0x0F, 0xCF, 0x81, 0xF3, 0xF0, 0x00,
  0xFF, 0x80, 0x3F, 0xFC, 0x07, 0xFF, 0xC0, 0x7F, 0xF8, 0x03, 0xFE, 0x00,
  0x1F, 0xBE, 0x03, 0xEF, 0xC1, 0xF3, 0xFF, 0xFC, 0x7F, 0xFE, 0x0F, 0xFF,
  0x00, 0xFF, 0x00, 0x0F, 0x81, 0xF0, 0x7C, 0x0F, 0x81, 0xF0, 0xFF, 0xBF,
  0xF7, 0xFE, 0x3E, 0x07, 0xC0, 0xF8, 0x3E, 0x07, 0xC0, 0xF8, 0x1F, 0x03,
  0xE0, 0xF8, 0x1F, 0x03, 0xE0, 0x7F, 0x0F, 0xE1, 0xFC, 0x1F, 0x80, 0x1F,
  0x01, 0xF1, 0xF0, 0x1F, 0x3E, 0x03, 0xE3, 0xE0, 0x3E, 0x3E, 0x03, 0xE3,
  0xE0, 0x3E, 0x3E, 0x03, 0xE7, 0xC0, 0x7C, 0x7C, 0x07, 0xC7, 0xC0, 0x7C,
  0x7C, 0x07, 0xC7, 0xC0, 0x7C, 0xF8, 0x0F, 0x8F, 0x81, 0xF8, 0xF8, 0x3F,
  0x8F, 0xFF, 0xF8, 0xFF, 0xFF, 0x07, 0xFD, 0xF0, 0x3F, 0x1F, 0x00, 0xF8,
  0x0F, 0xFE, 0x03, 0xEF, 0x81, 0xF3, 0xE0, 0x7C, 0xF8, 0x3E, 0x3E, 0x0F,
  0x8F, 0x87, 0xC1, 0xE1, 0xF0, 0x78, 0xF8, 0x1E, 0x3E, 0x07, 0x9F, 0x01,
  0xF7, 0x80, 0x7F, 0xE0, 0x1F, 0xF0, 0x03, 0xFC, 0x00, 0xFE, 0x00, 0x3F,
  0x80, 0x0F, 0xC0, 0x03, 0xF0, 0x00, 0xF8, 0x1F, 0x07, 0xFF, 0x03, 0xE0,
  0xFB, 0xE0, 0xFC, 0x1F, 0x7C, 0x1F, 0x87, 0xCF, 0x87, 0xF0, 0xF9, 0xF0,
  0xFE, 0x3E, 0x3E, 0x3D, 0xC7, 0xC3, 0xC7, 0xB9, 0xF0, 0x79, 0xE7, 0x3E,
  0x0F, 0x3C, 0xE7, 0x81, 0xEF, 0x1D, 0xF0, 0x3D, 0xE3, 0xBC, 0x07, 0xBC,
  0x7F, 0x80, 0xFF, 0x0F, 0xE0, 0x1F, 0xE1, 0xFC, 0x03, 0xF8, 0x3F, 0x00,
  0x7F, 0x07, 0xE0, 0x0F, 0xC0, 0xF8, 0x01, 0xF8, 0x1F, 0x00, 0x00, 0x0F,
  0xC1, 0xF8, 0x3F, 0x07, 0xC0, 0x7C, 0x3E, 0x01, 0xF9, 0xF8, 0x03, 0xEF,
  0xC0, 0x0F, 0xBE, 0x00, 0x1F, 0xF0, 0x00, 0x7F, 0x80, 0x01, 0xFC, 0x00,
  0x03, 0xE0, 0x00, 0x1F, 0xC0, 0x00, 0xFF, 0x00, 0x07, 0xFE, 0x00, 0x3E,
  0xF8, 0x01, 0xFB, 0xF0, 0x07, 0xC7, 0xC0, 0x3E, 0x1F, 0x81, 0xF8, 0x7E,
  0x0F, 0xC0, 0xF8, 0x00, 0x1F, 0x80, 0x7C, 0x3E, 0x03, 0xE0, 0xF8, 0x0F,
  0x03, 0xE0, 0x7C, 0x0F, 0x81, 0xE0, 0x3E, 0x0F, 0x80, 0xF8, 0x3C, 0x03,
  0xE1, 0xF0, 0x07, 0x87, 0x80, 0x1F, 0x3E, 0x00, 0x7C, 0xF0, 0x01, 0xF7,
  0xC0, 0x07, 0xDE, 0x00, 0x1F, 0xF0, 0x00, 0x7F, 0xC0, 0x01, 0xFE, 0x00,
  0x03, 0xF8, 0x00, 0x0F, 0xC0, 0x00, 0x3F, 0x00, 0x00, 0xF8, 0x00, 0x03,
  0xE0, 0x00, 0x0F, 0x00, 0x00, 0xF8, 0x00, 0x1F, 0xE0, 0x00, 0x7F, 0x00,
  0x01, 0xF8, 0x00, 0x0F, 0x80, 0x00, 0x00, 0x0F, 0xFF, 0xE1, 0xFF, 0xFC,
  0x3F, 0xFF, 0x87, 0xFF, 0xE0, 0x00, 0xFC, 0x00, 0x3F, 0x00, 0x0F, 0xC0,
  0x03, 0xF0, 0x01, 0xFC, 0x00, 0x7E, 0x00, 0x1F, 0x80, 0x07, 0xE0, 0x01,
  0xF8, 0x00, 0x7E, 0x00, 0x1F, 0x80, 0x07, 0xFF, 0xF8, 0xFF, 0xFF, 0x1F,
  0xFF, 0xE3, 0xFF, 0xFC, 0x00, 0x00, 0x7C, 0x03, 0xF0, 0x1F, 0xC0, 0xFE,
  0x03, 0xC0, 0x0F, 0x00, 0x3C, 0x00, 0xF0, 0x07, 0x80, 0x1E, 0x00, 0x78,
  0x01, 0xE0, 0x0F, 0x80, 0x3C, 0x01, 0xF0, 0x1F, 0x80, 0x70, 0x01, 0xF8,
  0x01, 0xE0, 0x07, 0x80, 0x1E, 0x00, 0x78, 0x03, 0xC0, 0x0F, 0x00, 0x3C,
  0x00, 0xF0, 0x07, 0x80, 0x1E, 0x00, 0x78, 0x01, 0xFC, 0x07, 0xE0, 0x0F,
  0x80, 0x1E, 0x00, 0x03, 0x81, 0xC0, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0C,
  0x0E, 0x07, 0x03, 0x81, 0xC0, 0xC0, 0xE0, 0x70, 0x38, 0x18, 0x1C, 0x0E,
  0x07, 0x03, 0x81, 0x81, 0xC0, 0xE0, 0x70, 0x38, 0x18, 0x1C, 0x0E, 0x07,
  0x01, 0x80, 0x80, 0x00, 0x00, 0x01, 0xE0, 0x07, 0xC0, 0x1F, 0x80, 0xFE,
  0x00, 0x78, 0x01, 0xE0, 0x07, 0x80, 0x3C, 0x00, 0xF0, 0x03, 0xC0, 0x0F,
  0x00, 0x78, 0x01, 0xE0, 0x07, 0x80, 0x1E, 0x00, 0x7E, 0x00, 0x38, 0x07,
  0xE0, 0x3E, 0x00, 0xF0, 0x07, 0xC0, 0x1E, 0x00, 0x78, 0x01, 0xE0, 0x07,
  0x80, 0x3C, 0x00, 0xF0, 0x03, 0xC0, 0x1F, 0x01, 0xF8, 0x0F, 0xE0, 0x3F,
  0x00, 0xF8, 0x00, 0x0F, 0x00, 0x1F, 0xC1, 0xDF, 0xF0, 0xEE, 0x3F, 0xE6,
  0x07, 0xF0, 0x01, 0xE0 };

const GFXglyph FreeSansBoldOblique18pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,  10,    0,    0 },   // 0x20 ' '
  {     1,  10,  25,  12,    4,  -24 },   // 0x21 '!'
  {    33,  13,   9,  17,    6,  -25 },   // 0x22 '"'
  {    48,  22,  24,  19,    1,  -23 },   // 0x23 '#'
  {   114,  19,  31,  19,    2,  -26 },   // 0x24 '$'
  {   188,  26,  26,  31,    5,  -25 },   // 0x25 '%'
  {   273,  21,  25,  25,    3,  -24 },   // 0x26 '&'
  {   339,   5,   9,   8,    6,  -25 },   // 0x27 '''
  {   345,  13,  33,  12,    3,  -25 },   // 0x28 '('
  {   399,  13,  33,  12,   -1,  -25 },   // 0x29 ')'
  {   453,  12,  11,  14,    5,  -25 },   // 0x2A '*'
  {   470,  18,  16,  20,    3,  -15 },   // 0x2B '+'
  {   506,   7,  11,  10,    1,   -4 },   // 0x2C ','
  {   516,  10,   4,  12,    2,  -10 },   // 0x2D '-'
  {   521,   6,   5,  10,    2,   -4 },   // 0x2E '.'
  {   525,  15,  25,  10,    0,  -24 },   // 0x2F '/'
  {   572,  18,  25,  19,    3,  -24 },   // 0x30 '0'
  {   629,  13,  25,  19,    6,  -24 },   // 0x31 '1'
  {   670,  21,  25,  19,    1,  -24 },   // 0x32 '2'
  {   736,  20,  25,  19,    2,  -24 },   // 0x33 '3'
  {   799,  19,  25,  19,    2,  -24 },   // 0x34 '4'
  {   859,  20,  24,  19,    2,  -23 },   // 0x35 '5'
  {   919,  19,  25,  19,    3,  -24 },   // 0x36 '6'
  {   979,  19,  24,  19,    5,  -23 },   // 0x37 '7'
  {  1036,  20,  25,  19,    2,  -24 },   // 0x38 '8'
  {  1099,  19,  25,  19,    2,  -24 },   // 0x39 '9'
  {  1159,   9,  18,  12,    4,  -17 },   // 0x3A ':'
  {  1180,  10,  24,  12,    3,  -17 },   // 0x3B ';'
  {  1210,  19,  17,  20,    3,  -16 },   // 0x3C '<'
  {  1251,  20,  12,  20,    2,  -13 },   // 0x3D '='
  {  1281,  19,  17,  20,    1,  -15 },   // 0x3E '>'
  {  1322,  18,  26,  21,    6,  -25 },   // 0x3F '?'
  {  1381,  33,  31,  34,    3,  -25 },   // 0x40 '@'
  {  1509,  23,  26,  25,    1,  -25 },   // 0x41 'A'
  {  1584,  24,  26,  25,    3,  -25 },   // 0x42 'B'
  {  1662,  24,  26,  25,    4,  -25 },   // 0x43 'C'
  {  1740,  24,  26,  25,    3,  -25 },   // 0x44 'D'
  {  1818,  24,  26,  23,    3,  -25 },   // 0x45 'E'
  {  1896,  23,  26,  21,    3,  -25 },   // 0x46 'F'
  {  1971,  24,  26,  27,    4,  -25 },   // 0x47 'G'
  {  2049,  26,  26,  25,    2,  -25 },   // 0x48 'H'
  {  2134,  10,  26,  10,    2,  -25 },   // 0x49 'I'
  {  2167,  20,  26,  19,    2,  -25 },   // 0x4A 'J'
  {  2232,  26,  26,  25,    3,  -25 },   // 0x4B 'K'
  {  2317,  18,  26,  21,    3,  -25 },   // 0x4C 'L'
  {  2376,  31,  26,  29,    2,  -25 },   // 0x4D 'M'
  {  2477,  27,  26,  25,    2,  -25 },   // 0x4E 'N'
  {  2565,  25,  26,  27,    4,  -25 },   // 0x4F 'O'
  {  2647,  23,  26,  23,    3,  -25 },   // 0x50 'P'
  {  2722,  25,  27,  27,    4,  -25 },   // 0x51 'Q'
  {  2807,  24,  26,  25,    3,  -25 },   // 0x52 'R'
  {  2885,  22,  26,  23,    3,  -25 },   // 0x53 'S'
  {  2957,  21,  26,  21,    5,  -25 },   // 0x54 'T'
  {  3026,  24,  26,  25,    4,  -25 },   // 0x55 'U'
  {  3104,  22,  26,  23,    6,  -25 },   // 0x56 'V'
  {  3176,  32,  26,  33,    6,  -25 },   // 0x57 'W'
  {  3280,  27,  26,  23,    1,  -25 },   // 0x58 'X'
  {  3368,  22,  26,  23,    6,  -25 },   // 0x59 'Y'
  {  3440,  25,  26,  21,    1,  -25 },   // 0x5A 'Z'
  {  3522,  15,  33,  12,    1,  -25 },   // 0x5B '['
  {  3584,   5,  25,  10,    5,  -24 },   // 0x5C '\'
  {  3600,  15,  33,  12,   -1,  -25 },   // 0x5D ']'
  {  3662,  16,  15,  20,    4,  -23 },   // 0x5E '^'
  {  3692,  21,   3,  19,   -2,    5 },   // 0x5F '_'
  {  3700,   5,   5,  12,    6,  -25 },   // 0x60 '`'
  {  3704,  18,  19,  19,    2,  -18 },   // 0x61 'a'
  {  3747,  20,  26,  21,    2,  -25 },   // 0x62 'b'
  {  3812,  18,  19,  19,    3,  -18 },   // 0x63 'c'
  {  3855,  22,  26,  21,    3,  -25 },   // 0x64 'd'
  {  3927,  19,  19,  19,    2,  -18 },   // 0x65 'e'
  {  3973,  13,  26,  12,    3,  -25 },   // 0x66 'f'
  {  4016,  22,  27,  21,    1,  -18 },   // 0x67 'g'
  {  4091,  20,  26,  21,    2,  -25 },   // 0x68 'h'
  {  4156,  10,  26,  10,    2,  -25 },   // 0x69 'i'
  {  4189,  15,  34,  10,   -2,  -25 },   // 0x6A 'j'
  {  4253,  21,  26,  19,    2,  -25 },   // 0x6B 'k'
  {  4322,  10,  26,  10,    2,  -25 },   // 0x6C 'l'
  {  4355,  30,  19,  31,    2,  -18 },   // 0x6D 'm'
  {  4427,  20,  19,  21,    2,  -18 },   // 0x6E 'n'
  {  4475,  19,  19,  21,    3,  -18 },   // 0x6F 'o'
  {  4521,  22,  27,  21,    0,  -18 },   // 0x70 'p'
  {  4596,  20,  27,  21,    3,  -18 },   // 0x71 'q'
  {  4664,  15,  19,  14,    2,  -18 },   // 0x72 'r'
  {  4700,  18,  19,  19,    2,  -18 },   // 0x73 's'
  {  4743,  11,  23,  12,    4,  -22 },   // 0x74 't'
  {  4775,  20,  19,  21,    3,  -18 },   // 0x75 'u'
  {  4823,  18,  19,  19,    5,  -18 },   // 0x76 'v'
  {  4866,  27,  19,  27,    4,  -18 },   // 0x77 'w'
  {  4931,  22,  19,  19,    1,  -18 },   // 0x78 'x'
  {  4984,  22,  27,  19,    1,  -18 },   // 0x79 'y'
  {  5059,  19,  19,  17,    1,  -18 },   // 0x7A 'z'
  {  5105,  14,  33,  14,    2,  -25 },   // 0x7B '{'
  {  5163,   9,  33,  10,    2,  -25 },   // 0x7C '|'
  {  5201,  14,  33,  14,    2,  -25 },   // 0x7D '}'
  {  5259,  17,   6,  20,    3,  -10 } }; // 0x7E '~'

const GFXfont FreeSansBoldOblique18pt7b PROGMEM = {
  (uint8_t  *)FreeSansBoldOblique18pt7bBitmaps,
  (GFXglyph *)FreeSansBoldOblique18pt7bGlyphs,
  0x20, 0x7E, 42 };

// Approx. 5944 bytes

#endif // FreeSansBoldOblique18pt7b_H
