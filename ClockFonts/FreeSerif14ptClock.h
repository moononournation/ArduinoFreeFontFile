const uint8_t FreeSerif14pt7bBitmaps[] PROGMEM = {
  0x0F, 0x01, 0x98, 0x30, 0xC7, 0x0E, 0x60, 0x6E, 0x07, 0xE0, 0x7E, 0x07,
  0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x76, 0x06, 0x60, 0x67, 0x0E,
  0x30, 0xC1, 0x98, 0x0F, 0x00, 0x04, 0x3B, 0xF0, 0xE1, 0xC3, 0x87, 0x0E,
  0x1C, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1C, 0x38, 0xF8, 0x1F, 0x02,
  0x3C, 0x41, 0xE8, 0x0E, 0x80, 0xE0, 0x0E, 0x00, 0xC0, 0x1C, 0x01, 0x80,
  0x38, 0x03, 0x00, 0x60, 0x0C, 0x01, 0x80, 0x30, 0x06, 0x01, 0xFF, 0xE0,
  0x1F, 0x04, 0x39, 0x03, 0x00, 0x60, 0x0C, 0x01, 0x00, 0xC0, 0x3C, 0x0F,
  0xC0, 0x3C, 0x03, 0x80, 0x30, 0x06, 0x00, 0xC0, 0x10, 0x06, 0xE1, 0x8F,
  0xC0, 0x00, 0x80, 0x30, 0x0E, 0x02, 0xC0, 0x58, 0x13, 0x04, 0x60, 0x8C,
  0x21, 0x88, 0x31, 0x06, 0x40, 0xCF, 0xFE, 0x03, 0x00, 0x60, 0x0C, 0x01,
  0x80, 0x30, 0x00, 0x01, 0xFC, 0x20, 0x08, 0x01, 0x00, 0x3C, 0x0F, 0xE0,
  0x3E, 0x01, 0xC0, 0x1C, 0x03, 0x80, 0x30, 0x06, 0x00, 0xC0, 0x18, 0x02,
  0x00, 0x9C, 0x21, 0xF8, 0x00, 0x00, 0xE0, 0x38, 0x0E, 0x01, 0xC0, 0x38,
  0x07, 0x00, 0x70, 0x0F, 0x78, 0xF9, 0xEE, 0x0E, 0xE0, 0x7E, 0x07, 0xE0,
  0x7E, 0x07, 0xE0, 0x77, 0x06, 0x70, 0xE3, 0x8C, 0x0F, 0x80, 0x7F, 0xF4,
  0x06, 0x80, 0x60, 0x06, 0x00, 0xC0, 0x0C, 0x00, 0xC0, 0x18, 0x01, 0x80,
  0x18, 0x03, 0x00, 0x30, 0x03, 0x00, 0x60, 0x06, 0x00, 0x60, 0x0C, 0x00,
  0xC0, 0x1F, 0x18, 0x64, 0x0F, 0x03, 0xC0, 0xF8, 0x37, 0x19, 0xEC, 0x3C,
  0x07, 0x83, 0x71, 0x8E, 0xC1, 0xF0, 0x3C, 0x0F, 0x03, 0xE0, 0xDC, 0x61,
  0xE0, 0x0F, 0x03, 0x1C, 0x70, 0xC6, 0x0E, 0xE0, 0x6E, 0x07, 0xE0, 0x7E,
  0x07, 0xE0, 0x7E, 0x07, 0x70, 0x73, 0x8F, 0x1F, 0x60, 0x0E, 0x00, 0xC0,
  0x1C, 0x03, 0x80, 0x70, 0x1C, 0x07, 0x00, 0xFF, 0x80, 0x00, 0x03, 0xFE };

const GFXglyph FreeSerif14pt7bGlyphs[] PROGMEM = {
  {     0,  12,  19,  14,    1,  -18 },   // 0x30 '0'
  {    29,   7,  19,  13,    3,  -18 },   // 0x31 '1'
  {    46,  12,  17,  14,    1,  -16 },   // 0x32 '2'
  {    72,  11,  18,  13,    1,  -17 },   // 0x33 '3'
  {    97,  11,  18,  13,    1,  -17 },   // 0x34 '4'
  {   122,  11,  19,  13,    1,  -18 },   // 0x35 '5'
  {   149,  12,  19,  14,    1,  -18 },   // 0x36 '6'
  {   178,  12,  18,  13,    1,  -17 },   // 0x37 '7'
  {   205,  10,  19,  13,    2,  -18 },   // 0x38 '8'
  {   229,  12,  20,  13,    1,  -18 },   // 0x39 '9'
  {   259,   3,  13,   7,    2,  -12 } }; // 0x3A ':'

const GFXfont FreeSerif14pt7b PROGMEM = {
  (uint8_t  *)FreeSerif14pt7bBitmaps,
  (GFXglyph *)FreeSerif14pt7bGlyphs,
  0x30, 0x3A, 33 };

// Approx. 348 bytes