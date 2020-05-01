const uint8_t FreeSerifItalic12pt7bBitmaps[] PROGMEM = {
  0x07, 0x81, 0x98, 0x61, 0x18, 0x33, 0x06, 0xC0, 0xD8, 0x1F, 0x03, 0xE0,
  0xF8, 0x1F, 0x03, 0x60, 0x6C, 0x19, 0x83, 0x10, 0xC3, 0x30, 0x3C, 0x00,
  0x01, 0x87, 0xC0, 0xC0, 0x60, 0x30, 0x18, 0x18, 0x0C, 0x06, 0x07, 0x03,
  0x01, 0x80, 0xC0, 0xC0, 0x60, 0x30, 0xFE, 0x00, 0x07, 0x83, 0x18, 0x81,
  0x80, 0x30, 0x06, 0x00, 0x80, 0x30, 0x0C, 0x01, 0x00, 0x40, 0x10, 0x04,
  0x01, 0x00, 0x40, 0x9F, 0xE0, 0x07, 0x86, 0x30, 0x0C, 0x03, 0x01, 0x81,
  0x81, 0xF0, 0x1E, 0x03, 0x80, 0x60, 0x18, 0x06, 0x01, 0x00, 0xCC, 0x63,
  0xE0, 0x00, 0x20, 0x0C, 0x03, 0x80, 0xA0, 0x2C, 0x09, 0x82, 0x30, 0x84,
  0x31, 0x8C, 0x33, 0x06, 0x7F, 0xE0, 0x30, 0x06, 0x00, 0x80, 0x30, 0x03,
  0xE1, 0x80, 0x20, 0x06, 0x00, 0xF0, 0x0F, 0x00, 0x60, 0x06, 0x00, 0xC0,
  0x18, 0x03, 0x00, 0x40, 0x18, 0x02, 0x30, 0x87, 0xE0, 0x00, 0x70, 0x3C,
  0x07, 0x00, 0xE0, 0x1C, 0x03, 0x80, 0x7F, 0x07, 0x18, 0x60, 0xCE, 0x0C,
  0xC0, 0xCC, 0x0C, 0xC0, 0xCC, 0x18, 0x41, 0x86, 0x30, 0x3C, 0x00, 0x7F,
  0xF0, 0x18, 0x03, 0x00, 0xC0, 0x10, 0x06, 0x01, 0x80, 0x30, 0x0C, 0x01,
  0x00, 0x60, 0x08, 0x03, 0x00, 0xC0, 0x10, 0x06, 0x00, 0x0F, 0x83, 0x18,
  0xC1, 0x98, 0x33, 0x06, 0x71, 0x87, 0x60, 0x70, 0x17, 0x0C, 0x71, 0x07,
  0x60, 0x6C, 0x0D, 0x81, 0xB0, 0x63, 0x1C, 0x3E, 0x00, 0x07, 0x83, 0x18,
  0xC1, 0x18, 0x36, 0x06, 0xC0, 0xD8, 0x1B, 0x07, 0x60, 0xE6, 0x38, 0x7F,
  0x00, 0xC0, 0x30, 0x0C, 0x07, 0x03, 0xC0, 0xC0, 0x00, 0x33, 0x30, 0x00,
  0x00, 0xCC, 0xC0 };

const GFXglyph FreeSerifItalic12pt7bGlyphs[] PROGMEM = {
  {     0,  11,  17,  12,    1,  -16 },   // 0x30 '0'
  {    24,   9,  17,  12,    1,  -16 },   // 0x31 '1'
  {    44,  11,  15,  12,    0,  -14 },   // 0x32 '2'
  {    65,  10,  16,  12,    1,  -15 },   // 0x33 '3'
  {    85,  11,  16,  12,    0,  -15 },   // 0x34 '4'
  {   107,  11,  16,  12,    0,  -15 },   // 0x35 '5'
  {   129,  12,  17,  12,    1,  -16 },   // 0x36 '6'
  {   155,  11,  16,  12,    2,  -15 },   // 0x37 '7'
  {   177,  11,  17,  12,    1,  -16 },   // 0x38 '8'
  {   201,  11,  17,  12,    1,  -16 },   // 0x39 '9'
  {   225,   4,  11,   6,    1,  -10 } }; // 0x3A ':'

const GFXfont FreeSerifItalic12pt7b PROGMEM = {
  (uint8_t  *)FreeSerifItalic12pt7bBitmaps,
  (GFXglyph *)FreeSerifItalic12pt7bGlyphs,
  0x30, 0x3A, 28 };

// Approx. 315 bytes