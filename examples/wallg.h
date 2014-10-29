// Generated by Daniel McKinnon's z88dk Sprite Editor

#if (spritesize == 2)
#if (spritesizeh == 3)
char brick_l[] = { 2, 3, 0xC0, 0x80 , 0xC0  };
char brick_r[] = { 2, 3, 0xC0, 0x40 , 0xC0  };
char paddle[] = { 6, 2, 0xFC, 0x84 };
//char paddle[] = { 6, 1, 0xFC };
char ball[] = { 2, 2, 0x80 , 0x0  };
char bounce[] = { 2, 2, 0xC0 , 0x0  };
char blank[] = { 2, 3, 0xC0 , 0xC0 , 0xC0};
#else
char brick_l[] = { 2, 2, 0x80 , 0xC0  };
char brick_r[] = { 2, 2, 0x40 , 0xC0  };
//char paddle[] = { 6, 2, 0xFC, 0x84 };
char paddle[] = { 6, 1, 0xFC };
char ball[] = { 2, 2, 0x80 , 0x0  };
char bounce[] = { 2, 2, 0xC0 , 0x0  };
char blank[] = { 2, 2, 0xC0 , 0xC0 };
#endif
#endif

#if (spritesize == 3)
char brick_l[] = { 3, 3, 0xE0 , 0x80 , 0xE0  };
char brick_r[] = { 3, 3, 0xE0 , 0x20 , 0xE0  };
char paddle[] = { 9, 2, 0xFF, 0x80 , 0x80 , 0x80};
char ball[] = { 3, 3, 0x00 , 0x60 , 0x60  };
char bounce[] = { 3, 3, 0x00 , 0x60  };
char blank[] = { 3, 3, 0xE0 , 0xE0 , 0xE0 };
#endif

#if (spritesize == 4)
char brick_l[] = { 4, 4, 0xF0 , 0x80 , 0x80 , 0xF0  };
char brick_r[] = { 4, 4, 0xF0 , 0x10 , 0x10 , 0xF0  };
char paddle[] = { 12, 3, 0xFF , 0xF0 , 0xFF , 0xF0 , 0xC0 , 0x30};
char ball[] = { 4, 4, 0x00 , 0x60 , 0x60 , 0x00  };
char bounce[] = { 4, 4, 0x00 , 0x00 , 0x60 , 0x00  };
char blank[] = { 4, 4, 0xF0 , 0xF0 , 0xF0 , 0xF0  };
#endif

#if (spritesize == 8)||(spritesize == 7)

#if (spritesize == 8)
char brick_l[] = { 8, 8, 0xFF , 0x80 , 0x80 , 0xC0 , 0xA0 , 0xD4 , 0xAA , 0xFF  };
char brick_r[] = { 8, 8, 0xFF , 0x01 , 0x01 , 0x01 , 0x01 , 0x01 , 0x81 , 0xFF  };
char paddle[] = { 24, 6, 0x7F , 0xFF, 0xFE , 0xFF , 0xFF , 0xFF , 0xFF , 0xFF , 0xFF , 
                         0xE0 , 0x00 , 0x07 , 0xE0 , 0x00 , 0x07 , 0xE0 , 0x00 , 0x07 };
char ball[] = { 8, 8, 0x00 , 0x18 , 0x3C , 0x7E , 0x7E , 0x3C , 0x18 , 0x00  };
char bounce[] = { 8, 8, 0x00 , 0x00 , 0x00 , 0x3C , 0x7E , 0x7E , 0x3C , 0x00  };
char blank[] = { 8, 8, 0xFF , 0xFF , 0xFF , 0xFF , 0xFF , 0xFF , 0xFF , 0xFF  };
#else
char brick_l[] = { 7, 7, 0xFE , 0x80 ,  0xC0 , 0xA0 , 0xD4 , 0xAA , 0xFE  };
char brick_r[] = { 7, 7, 0xFE , 0x02 ,  0x02 , 0x02 , 0x02 , 0x82 , 0xFE  };
char paddle[] = { 21, 6, 0x7F , 0xFF, 0xF0 , 0xFF , 0xFF , 0xF8 , 0xFF , 0xFF , 0xF8 , 
                         0xE0 , 0x00 , 0x38 , 0xE0 , 0x00 , 0x38 , 0xE0 , 0x00 , 0x38 };
char ball[] = { 7, 7, 0x00 , 0x18 , 0x3C , 0x7E , 0x7E , 0x3C , 0x18  };
char bounce[] = { 7, 7, 0x00 , 0x00 , 0x00 , 0x3C , 0x7E , 0x7E , 0x3C  };
char blank[] = { 7, 7, 0xFE , 0xFE , 0xFE , 0xFE , 0xFE , 0xFE , 0xFE  };
#endif

#ifdef BANNERS
char scorebanner[] = { 88, 26
, 0x03 , 0xF0 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 
, 0x1F , 0xF8 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 
, 0x3E , 0x30 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 
, 0x78 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 
, 0xF0 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 
, 0xF0 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 
, 0xF0 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 
, 0xF0 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0xE0 , 0x00 , 0x00 , 0x00 
, 0x78 , 0x00 , 0x03 , 0xF8 , 0x03 , 0xFE , 0x01 , 0xE0 , 0x00 , 0x7E , 0x00 
, 0x7C , 0x00 , 0x1F , 0xF8 , 0x1F , 0xFF , 0x83 , 0xC1 , 0xC3 , 0xFF , 0x00 
, 0x3F , 0x00 , 0x3C , 0x38 , 0x3F , 0x0F , 0xC1 , 0xC7 , 0xE7 , 0x87 , 0x80 
, 0x0F , 0xC0 , 0x70 , 0x00 , 0x78 , 0x03 , 0xC1 , 0xDF , 0x8E , 0x03 , 0xC7 
, 0x03 , 0xE0 , 0xE0 , 0x00 , 0xF0 , 0x01 , 0xE1 , 0xF8 , 0x1C , 0x03 , 0xC7 
, 0x01 , 0xF0 , 0xE0 , 0x00 , 0xE0 , 0x01 , 0xE1 , 0xF0 , 0x1F , 0xFF , 0xC6 
, 0x00 , 0xF9 , 0xC0 , 0x01 , 0xE0 , 0x00 , 0xE1 , 0xF0 , 0x3F , 0xFF , 0x80 
, 0x00 , 0x79 , 0xC0 , 0x01 , 0xC0 , 0x00 , 0xE1 , 0xE0 , 0x38 , 0x00 , 0x00 
, 0x00 , 0x3D , 0xC0 , 0x01 , 0xC0 , 0x00 , 0xE1 , 0xE0 , 0x38 , 0x00 , 0x00 
, 0x00 , 0x3D , 0xC0 , 0x01 , 0xC0 , 0x00 , 0xE1 , 0xC0 , 0x38 , 0x00 , 0x00 
, 0x00 , 0x3D , 0xC0 , 0x01 , 0xC0 , 0x01 , 0xE1 , 0xC0 , 0x38 , 0x00 , 0x00 
, 0x00 , 0x39 , 0xC0 , 0x01 , 0xE0 , 0x01 , 0xC1 , 0xC0 , 0x38 , 0x00 , 0x00 
, 0x00 , 0x78 , 0xE0 , 0x01 , 0xE0 , 0x03 , 0xC1 , 0xC0 , 0x3C , 0x00 , 0x00 
, 0x00 , 0x70 , 0xF0 , 0x01 , 0xF0 , 0x07 , 0x81 , 0xC0 , 0x1E , 0x00 , 0x00 
, 0x00 , 0xE0 , 0x7C , 0x00 , 0xFC , 0x1F , 0x01 , 0xC0 , 0x1F , 0x80 , 0x07 
, 0x07 , 0xC0 , 0x3F , 0xFC , 0x7F , 0xFE , 0x01 , 0xC0 , 0x07 , 0xFF , 0x87 
, 0xFF , 0x00 , 0x0F , 0xFC , 0x1F , 0xF0 , 0x03 , 0xE0 , 0x00 , 0xFF , 0x86 
, 0xF8 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 };


char bigdigit[] = { 16, 18, 0x01 , 0xFE , 0x00 , 0x78 , 0x02 , 0x01 , 0x07 , 0x03 , 0x06 , 0x03 , 0x0E 
, 0x07 , 0x0C , 0x0E , 0x08 , 0x0C , 0x00 , 0x08 , 0x10 , 0x00 , 0x18 , 0x10 
, 0x38 , 0x18 , 0x70 , 0x38 , 0x60 , 0x70 , 0xE0 , 0x70 , 0x80 , 0x60 , 0x3F 
, 0x20 , 0x7F , 0x80,
16, 18, 0x00 , 0x00 , 0x01 , 0x00 , 0x03 , 0x00 , 0x07 , 0x00 , 0x06 , 0x00 , 0x0E 
, 0x00 , 0x1C , 0x00 , 0x18 , 0x00 , 0x10 , 0x00 , 0x00 , 0x00 , 0x10 , 0x00 
, 0x30 , 0x00 , 0x70 , 0x00 , 0x60 , 0x00 , 0xE0 , 0x00 , 0xC0 , 0x00 , 0x80 
, 0x00 , 0x00 , 0x00,
16, 18, 0x01 , 0xFE , 0x00 , 0xFC , 0x00 , 0x01 , 0x00 , 0x03 , 0x00 , 0x03 , 0x00 
, 0x07 , 0x00 , 0x0E , 0x00 , 0x1C , 0x03 , 0xC0 , 0x1F , 0xF0 , 0x07 , 0x80 
, 0x30 , 0x00 , 0x70 , 0x00 , 0x60 , 0x00 , 0xE0 , 0x00 , 0xC0 , 0x00 , 0x1F 
, 0x00 , 0x7F , 0xC0,
16, 18, 0x01 , 0xFE , 0x00 , 0x78 , 0x00 , 0x01 , 0x00 , 0x03 , 0x00 , 0x07 , 0x00 
, 0x07 , 0x00 , 0x0E , 0x00 , 0x0C , 0x03 , 0xC0 , 0x1F , 0xF0 , 0x07 , 0x80 
, 0x00 , 0x18 , 0x00 , 0x38 , 0x00 , 0x70 , 0x00 , 0x70 , 0x00 , 0x60 , 0x3F 
, 0x20 , 0x7F , 0x80,
16, 18, 0x00 , 0x00 , 0x00 , 0x00 , 0x02 , 0x01 , 0x07 , 0x03 , 0x06 , 0x03 , 0x0E 
, 0x07 , 0x0C , 0x0E , 0x08 , 0x0C , 0x03 , 0xE0 , 0x1F , 0xF0 , 0x07 , 0xC0 
, 0x00 , 0x08 , 0x00 , 0x38 , 0x00 , 0x70 , 0x00 , 0x60 , 0x00 , 0xE0 , 0x00 
, 0xC0 , 0x00 , 0x00,
16, 18, 0x01 , 0xFE , 0x00 , 0xF8 , 0x02 , 0x00 , 0x07 , 0x00 , 0x06 , 0x00 , 0x0E 
, 0x00 , 0x0C , 0x00 , 0x08 , 0x00 , 0x03 , 0xC0 , 0x1F , 0xF0 , 0x07 , 0x80 
, 0x00 , 0x08 , 0x00 , 0x38 , 0x00 , 0x70 , 0x00 , 0x70 , 0x00 , 0x20 , 0x3F 
, 0x20 , 0x7F , 0x80,
16, 18, 0x01 , 0xFE , 0x00 , 0xF8 , 0x02 , 0x00 , 0x07 , 0x00 , 0x06 , 0x00 , 0x0E 
, 0x00 , 0x0C , 0x00 , 0x08 , 0x00 , 0x03 , 0xC0 , 0x1F , 0xF0 , 0x07 , 0x80 
, 0x30 , 0x18 , 0x70 , 0x38 , 0x60 , 0x70 , 0xE0 , 0x70 , 0x80 , 0x20 , 0x3F 
, 0x20 , 0x7F , 0x80,
16, 18, 0x01 , 0xFE , 0x00 , 0x78 , 0x00 , 0x01 , 0x00 , 0x03 , 0x00 , 0x03 , 0x00 
, 0x07 , 0x00 , 0x0E , 0x00 , 0x0C , 0x00 , 0x00 , 0x00 , 0x00 , 0x00 , 0x08 
, 0x00 , 0x18 , 0x00 , 0x38 , 0x00 , 0x70 , 0x00 , 0x70 , 0x00 , 0x60 , 0x00 
, 0x60 , 0x00 , 0x00,
16, 18, 0x01 , 0xFE , 0x00 , 0x78 , 0x02 , 0x01 , 0x07 , 0x03 , 0x06 , 0x03 , 0x0E 
, 0x07 , 0x0C , 0x0E , 0x08 , 0x0C , 0x03 , 0xC0 , 0x1F , 0xF0 , 0x07 , 0x80 
, 0x30 , 0x18 , 0x70 , 0x38 , 0x60 , 0x70 , 0xE0 , 0x70 , 0x80 , 0x60 , 0x3F 
, 0x20 , 0x7F , 0x80,
 16, 18, 0x01 , 0xFE , 0x00 , 0x78 , 0x02 , 0x01 , 0x07 , 0x03 , 0x06 , 0x03 , 0x0E 
, 0x07 , 0x0C , 0x0E , 0x08 , 0x0C , 0x03 , 0xE0 , 0x1F , 0xF0 , 0x07 , 0x80 
, 0x00 , 0x18 , 0x00 , 0x38 , 0x00 , 0x70 , 0x00 , 0x70 , 0x00 , 0x60 , 0x3F 
, 0x20 , 0x7F , 0x80  };
#endif

#endif

char numbers[] = { 
        4,5,
        0x70,0x90,0,0x90,0xE0,
        4,5,
        0x20,0x20,0,0x40,0x40,
        4,5,
        0x70,0x10,0x60,0x80,0xE0,
        4,5,
        0x70,0x10,0x60,0x10,0xE0,
        4,5,
        0x90,0x90,0x60,0x10,0x10,
        4,5,
        0x70,0x80,0x60,0x10,0xE0,
        4,5,
        0x70,0x80,0x60,0x90,0xE0,
        4,5,
        0x70,0x90,0,0x20,0x20,
        4,5,
        0x70,0x90,0x60,0x90,0xE0,
        4,5,
        0x70,0x90,0x60,0x10,0xE0
};

char numblank[] = { 
        4,5,
		0xf0,0xf0,0xf0,0xf0,0xf0
}

