/*======================================================================

LARGE_FONT texture coordinates

======================================================================*/

#ifndef LARGE_FONT__H
#define LARGE_FONT__H
#define LARGE_FONT_BITMAP_WIDTH  256
#define LARGE_FONT_BITMAP_HEIGHT  512
#define LARGE_FONT_NUM_IMAGES  0x21A

// U,V,Width,Height

#define TEXT_LY 17

static constexpr unsigned int large_font_texcoords[] = {
    0, 0, 5, TEXT_LY, // SPACE
    14, 0, 5, TEXT_LY, // EXCLAMATION MARK
    28, 0, 7, TEXT_LY, // QUOTATION MARK
    42, 0, 10, TEXT_LY, // NUMBER SIGN
    56, 0, 10, TEXT_LY, // DOLLAR SIGN
    70, 0, 13, TEXT_LY, // PERCENT SIGN
    84, 0, 11, TEXT_LY, // AMPERSAND
    98, 0, 5, TEXT_LY, // APOSTROPHE
    112, 0, 6, TEXT_LY, // LEFT PARENTHESIS
    126, 0, 6, TEXT_LY, // RIGHT PARENTHESIS
    140, 0, 10, TEXT_LY, // ASTERISK
    154, 0, 10, TEXT_LY, // PLUS SIGN
    168, 0, 5, TEXT_LY, // COMMA
    182, 0, 7, TEXT_LY, // HYPHEN-MINUS
    196, 0, 5, TEXT_LY, // FULL STOP
    210, 0, 6, TEXT_LY, // SOLIDUS
    224, 0, 11, TEXT_LY, // DIGIT ZERO
    238, 0, 11, TEXT_LY, // DIGIT ONE
    252, 0, 11, TEXT_LY, // DIGIT TWO
    266, 0, 11, TEXT_LY, // DIGIT THREE
    280, 0, 11, TEXT_LY, // DIGIT FOUR
    294, 0, 11, TEXT_LY, // DIGIT FIVE
    308, 0, 11, TEXT_LY, // DIGIT SIX
    322, 0, 11, TEXT_LY, // DIGIT SEVEN
    336, 0, 11, TEXT_LY, // DIGIT EIGHT
    350, 0, 11, TEXT_LY, // DIGIT NINE
    364, 0, 5, TEXT_LY, // COLON
    378, 0, 5, TEXT_LY, // SEMICOLON
    392, 0, 10, TEXT_LY, // LESS-THAN SIGN
    406, 0, 10, TEXT_LY, // EQUALS SIGN
    420, 0, 10, TEXT_LY, // GREATER-THAN SIGN
    434, 0, 10, TEXT_LY, // QUESTION MARK
    448, 0, 12, TEXT_LY, // COMMERCIAL AT
    462, 0, 11, TEXT_LY, // LATIN CAPITAL LETTER A
    476, 0, 9, TEXT_LY, // LATIN CAPITAL LETTER B
    490, 0, 10, TEXT_LY, // LATIN CAPITAL LETTER C
    0, 17, 10, TEXT_LY, // LATIN CAPITAL LETTER D
    14, 17, 8, TEXT_LY, // LATIN CAPITAL LETTER E
    28, 17, 8, TEXT_LY, // LATIN CAPITAL LETTER F
    42, 17, 11, TEXT_LY, // LATIN CAPITAL LETTER G
    56, 17, 10, TEXT_LY, // LATIN CAPITAL LETTER H
    70, 17, 3, TEXT_LY, // LATIN CAPITAL LETTER I
    84, 17, 6, TEXT_LY, // LATIN CAPITAL LETTER J
    98, 17, 9, TEXT_LY, // LATIN CAPITAL LETTER K
    112, 17, 8, TEXT_LY, // LATIN CAPITAL LETTER L
    126, 17, 12, TEXT_LY, // LATIN CAPITAL LETTER M
    140, 17, 9, TEXT_LY, // LATIN CAPITAL LETTER N
    154, 17, 11, TEXT_LY, // LATIN CAPITAL LETTER O
    168, 17, 9, TEXT_LY, // LATIN CAPITAL LETTER P
    182, 17, 11, TEXT_LY, // LATIN CAPITAL LETTER Q
    196, 17, 9, TEXT_LY, // LATIN CAPITAL LETTER R
    210, 17, 9, TEXT_LY, // LATIN CAPITAL LETTER S
    224, 17, 9, TEXT_LY, // LATIN CAPITAL LETTER T
    238, 17, 9, TEXT_LY, // LATIN CAPITAL LETTER U
    252, 17, 10, TEXT_LY, // LATIN CAPITAL LETTER V
    266, 17, 14, TEXT_LY, // LATIN CAPITAL LETTER W
    280, 17, 10, TEXT_LY, // LATIN CAPITAL LETTER X
    294, 17, 10, TEXT_LY, // LATIN CAPITAL LETTER Y
    308, 17, 9, TEXT_LY, // LATIN CAPITAL LETTER Z
    322, 17, 6, TEXT_LY, // LEFT SQUARE BRACKET
    336, 17, 6, TEXT_LY, // REVERSE SOLIDUS
    350, 17, 6, TEXT_LY, // RIGHT SQUARE BRACKET
    364, 17, 10, TEXT_LY, // CIRCUMFLEX ACCENT
    378, 17, 7, TEXT_LY, // LOW LINE
    392, 17, 6, TEXT_LY, // GRAVE ACCENT
    406, 17, 9, TEXT_LY, // LATIN SMALL LETTER A
    420, 17, 8, TEXT_LY, // LATIN SMALL LETTER B
    434, 17, 9, TEXT_LY, // LATIN SMALL LETTER C
    448, 17, 8, TEXT_LY, // LATIN SMALL LETTER D
    462, 17, 9, TEXT_LY, // LATIN SMALL LETTER E
    476, 17, 5, TEXT_LY, // LATIN SMALL LETTER F
    490, 17, 9, TEXT_LY, // LATIN SMALL LETTER G
    0, 34, 8, TEXT_LY, // LATIN SMALL LETTER H
    14, 34, 3, TEXT_LY, // LATIN SMALL LETTER I
    28, 34, 5, TEXT_LY, // LATIN SMALL LETTER J
    42, 34, 8, TEXT_LY, // LATIN SMALL LETTER K
    56, 34, 3, TEXT_LY, // LATIN SMALL LETTER L
    70, 34, 12, TEXT_LY, // LATIN SMALL LETTER M
    84, 34, 8, TEXT_LY, // LATIN SMALL LETTER N
    98, 34, 9, TEXT_LY, // LATIN SMALL LETTER O
    112, 34, 8, TEXT_LY, // LATIN SMALL LETTER P
    126, 34, 9, TEXT_LY, // LATIN SMALL LETTER Q
    140, 34, 5, TEXT_LY, // LATIN SMALL LETTER R
    154, 34, 8, TEXT_LY, // LATIN SMALL LETTER S
    168, 34, 5, TEXT_LY, // LATIN SMALL LETTER T
    182, 34, 8, TEXT_LY, // LATIN SMALL LETTER U
    196, 34, 9, TEXT_LY, // LATIN SMALL LETTER V
    210, 34, 12, TEXT_LY, // LATIN SMALL LETTER W
    224, 34, 8, TEXT_LY, // LATIN SMALL LETTER X
    238, 34, 8, TEXT_LY, // LATIN SMALL LETTER Y
    252, 34, 8, TEXT_LY, // LATIN SMALL LETTER Z
    266, 34, 6, TEXT_LY, // LEFT CURLY BRACKET
    280, 34, 5, TEXT_LY, // VERTICAL LINE
    294, 34, 6, TEXT_LY, // RIGHT CURLY BRACKET
    308, 34, 7, TEXT_LY, // TILDE
    322, 34, 8, TEXT_LY, // 
    336, 34, 6, TEXT_LY, // INVERTED EXCLAMATION MARK
    350, 34, 9, TEXT_LY, // CENT SIGN
    364, 34, 11, TEXT_LY, // POUND SIGN
    378, 34, 7, TEXT_LY, // DIAERESIS
    392, 34, 11, TEXT_LY, // COPYRIGHT SIGN
    406, 34, 11, TEXT_LY, // REGISTERED SIGN
    420, 34, 5, TEXT_LY, // DEGREE SIGN
    434, 34, 10, TEXT_LY, // PLUS-MINUS SIGN
    448, 34, 7, TEXT_LY, // ACUTE ACCENT
    462, 34, 5, TEXT_LY, // MIDDLE DOT
    476, 34, 10, TEXT_LY, // INVERTED QUESTION MARK
    490, 34, 11, TEXT_LY, // LATIN CAPITAL LETTER A WITH GRAVE
    0, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER A WITH ACUTE
    14, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER A WITH CIRCUMFLEX
    28, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER A WITH TILDE
    42, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER A WITH DIAERESIS
    56, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER A WITH RING ABOVE
    70, 51, 13, TEXT_LY, // LATIN CAPITAL LETTER AE
    84, 51, 10, TEXT_LY, // LATIN CAPITAL LETTER C WITH CEDILLA
    98, 51, 8, TEXT_LY, // LATIN CAPITAL LETTER E WITH GRAVE
    112, 51, 8, TEXT_LY, // LATIN CAPITAL LETTER E WITH ACUTE
    126, 51, 8, TEXT_LY, // LATIN CAPITAL LETTER E WITH CIRCUMFLEX
    140, 51, 8, TEXT_LY, // LATIN CAPITAL LETTER E WITH DIAERESIS
    154, 51, 5, TEXT_LY, // LATIN CAPITAL LETTER I WITH GRAVE
    168, 51, 5, TEXT_LY, // LATIN CAPITAL LETTER I WITH ACUTE
    182, 51, 5, TEXT_LY, // LATIN CAPITAL LETTER I WITH CIRCUMFLEX
    196, 51, 5, TEXT_LY, // LATIN CAPITAL LETTER I WITH DIAERESIS
    210, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER ETH
    224, 51, 9, TEXT_LY, // LATIN CAPITAL LETTER N WITH TILDE
    238, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER O WITH GRAVE
    252, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER O WITH ACUTE
    266, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER O WITH CIRCUMFLEX
    280, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER O WITH TILDE
    294, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER O WITH DIAERESIS
    308, 51, 9, TEXT_LY, // MULTIPLICATION SIGN
    322, 51, 11, TEXT_LY, // LATIN CAPITAL LETTER O WITH STROKE
    336, 51, 9, TEXT_LY, // LATIN CAPITAL LETTER U WITH GRAVE
    350, 51, 9, TEXT_LY, // LATIN CAPITAL LETTER U WITH ACUTE
    364, 51, 9, TEXT_LY, // LATIN CAPITAL LETTER U WITH CIRCUMFLEX
    378, 51, 9, TEXT_LY, // LATIN CAPITAL LETTER U WITH DIAERESIS
    392, 51, 10, TEXT_LY, // LATIN CAPITAL LETTER Y WITH ACUTE
    406, 51, 8, TEXT_LY, // LATIN SMALL LETTER SHARP S
    420, 51, 9, TEXT_LY, // LATIN SMALL LETTER A WITH GRAVE
    434, 51, 9, TEXT_LY, // LATIN SMALL LETTER A WITH ACUTE
    448, 51, 9, TEXT_LY, // LATIN SMALL LETTER A WITH CIRCUMFLEX
    462, 51, 9, TEXT_LY, // LATIN SMALL LETTER A WITH TILDE
    476, 51, 9, TEXT_LY, // LATIN SMALL LETTER A WITH DIAERESIS
    490, 51, 9, TEXT_LY, // LATIN SMALL LETTER A WITH RING ABOVE
    0, 68, 13, TEXT_LY, // LATIN SMALL LETTER AE
    14, 68, 8, TEXT_LY, // LATIN SMALL LETTER C WITH CEDILLA
    28, 68, 9, TEXT_LY, // LATIN SMALL LETTER E WITH GRAVE
    42, 68, 9, TEXT_LY, // LATIN SMALL LETTER E WITH ACUTE
    56, 68, 9, TEXT_LY, // LATIN SMALL LETTER E WITH CIRCUMFLEX
    70, 68, 9, TEXT_LY, // LATIN SMALL LETTER E WITH DIAERESIS
    84, 68, 4, TEXT_LY, // LATIN SMALL LETTER I WITH GRAVE
    98, 68, 4, TEXT_LY, // LATIN SMALL LETTER I WITH ACUTE
    112, 68, 5, TEXT_LY, // LATIN SMALL LETTER I WITH CIRCUMFLEX
    126, 68, 5, TEXT_LY, // LATIN SMALL LETTER I WITH DIAERESIS
    140, 68, 9, TEXT_LY, // LATIN SMALL LETTER ETH
    154, 68, 8, TEXT_LY, // LATIN SMALL LETTER N WITH TILDE
    168, 68, 9, TEXT_LY, // LATIN SMALL LETTER O WITH GRAVE
    182, 68, 9, TEXT_LY, // LATIN SMALL LETTER O WITH ACUTE
    196, 68, 9, TEXT_LY, // LATIN SMALL LETTER O WITH CIRCUMFLEX
    210, 68, 9, TEXT_LY, // LATIN SMALL LETTER O WITH TILDE
    224, 68, 9, TEXT_LY, // LATIN SMALL LETTER O WITH DIAERESIS
    238, 68, 10, TEXT_LY, // DIVISION SIGN
    252, 68, 9, TEXT_LY, // LATIN SMALL LETTER O WITH STROKE
    266, 68, 8, TEXT_LY, // LATIN SMALL LETTER U WITH GRAVE
    280, 68, 8, TEXT_LY, // LATIN SMALL LETTER U WITH ACUTE
    294, 68, 8, TEXT_LY, // LATIN SMALL LETTER U WITH CIRCUMFLEX
    308, 68, 8, TEXT_LY, // LATIN SMALL LETTER U WITH DIAERESIS
    322, 68, 7, TEXT_LY, // LATIN SMALL LETTER Y WITH ACUTE
    336, 68, 13, TEXT_LY, // LATIN CAPITAL LIGATURE OE
    350, 68, 14, TEXT_LY, // LATIN SMALL LIGATURE OE
    364, 68, 7, TEXT_LY, // MODIFIER LETTER CIRCUMFLEX ACCENT
    378, 68, 7, TEXT_LY, // SMALL TILDE
    392, 68, 14, TEXT_LY, // HYPHEN
    406, 68, 14, TEXT_LY, // HORIZONTAL BAR
    420, 68, 5, TEXT_LY, // LEFT SINGLE QUOTATION MARK
    434, 68, 5, TEXT_LY, // RIGHT SINGLE QUOTATION MARK
    448, 68, 5, TEXT_LY, // SINGLE LOW-9 QUOTATION MARK
    462, 68, 5, TEXT_LY, // LEFT DOUBLE QUOTATION MARK
    476, 68, 5, TEXT_LY, // RIGHT DOUBLE QUOTATION MARK
    490, 68, 5, TEXT_LY, // DOUBLE LOW-9 QUOTATION MARK
    0, 85, 6, TEXT_LY, // BULLET
    14, 85, 14, TEXT_LY, // HORIZONTAL ELLIPSIS
    28, 85, 14, TEXT_LY, // PRIME
    42, 85, 14, TEXT_LY, // DOUBLE PRIME
    56, 85, 9, TEXT_LY, // SINGLE RIGHT-POINTING ANGLE QUOTATION MARK
    70, 85, 14, TEXT_LY, // REFERENCE MARK
    84, 85, 11, TEXT_LY, // EURO SIGN
    98, 85, 11, TEXT_LY, // TRADE MARK SIGN
    112, 85, 14, TEXT_LY, // LEFTWARDS ARROW
    126, 85, 14, TEXT_LY, // UPWARDS ARROW
    140, 85, 14, TEXT_LY, // RIGHTWARDS ARROW
    154, 85, 14, TEXT_LY, // DOWNWARDS ARROW
    168, 85, 14, TEXT_LY, // INFINITY
    182, 85, 14, TEXT_LY, // THEREFORE
    196, 85, 14, TEXT_LY, // BLACK SQUARE
    210, 85, 14, TEXT_LY, // WHITE SQUARE
    224, 85, 14, TEXT_LY, // BLACK UP-POINTING TRIANGLE
    238, 85, 14, TEXT_LY, // WHITE UP-POINTING TRIANGLE
    252, 85, 14, TEXT_LY, // BLACK DOWN-POINTING TRIANGLE
    266, 85, 14, TEXT_LY, // WHITE DOWN-POINTING TRIANGLE
    280, 85, 14, TEXT_LY, // BLACK DIAMOND
    294, 85, 14, TEXT_LY, // WHITE DIAMOND
    308, 85, 14, TEXT_LY, // WHITE CIRCLE
    322, 85, 14, TEXT_LY, // BULLSEYE
    336, 85, 14, TEXT_LY, // BLACK CIRCLE
    350, 85, 14, TEXT_LY, // BLACK STAR
    364, 85, 14, TEXT_LY, // WHITE STAR
    378, 85, 14, TEXT_LY, // EIGHTH NOTE
    392, 85, 14, TEXT_LY, // MUSIC FLAT SIGN
    406, 85, 14, TEXT_LY, // MUSIC SHARP SIGN
    420, 85, 14, TEXT_LY, // IDEOGRAPHIC SPACE
    434, 85, 14, TEXT_LY, // IDEOGRAPHIC COMMA
    448, 85, 14, TEXT_LY, // IDEOGRAPHIC FULL STOP
    462, 85, 14, TEXT_LY, // IDEOGRAPHIC ITERATION MARK
    476, 85, 14, TEXT_LY, // LEFT ANGLE BRACKET
    490, 85, 14, TEXT_LY, // RIGHT ANGLE BRACKET
    0, 102, 14, TEXT_LY, // LEFT CORNER BRACKET
    14, 102, 14, TEXT_LY, // RIGHT CORNER BRACKET
    28, 102, 14, TEXT_LY, // POSTAL MARK
    42, 102, 14, TEXT_LY, // LEFT TORTOISE SHELL BRACKET
    56, 102, 14, TEXT_LY, // RIGHT TORTOISE SHELL BRACKET
    70, 102, 14, TEXT_LY, // HIRAGANA LETTER SMALL A
    84, 102, 14, TEXT_LY, // HIRAGANA LETTER A
    98, 102, 14, TEXT_LY, // HIRAGANA LETTER SMALL I
    112, 102, 14, TEXT_LY, // HIRAGANA LETTER I
    126, 102, 14, TEXT_LY, // HIRAGANA LETTER SMALL U
    140, 102, 14, TEXT_LY, // HIRAGANA LETTER U
    154, 102, 14, TEXT_LY, // HIRAGANA LETTER SMALL E
    168, 102, 14, TEXT_LY, // HIRAGANA LETTER E
    182, 102, 14, TEXT_LY, // HIRAGANA LETTER SMALL O
    196, 102, 14, TEXT_LY, // HIRAGANA LETTER O
    210, 102, 14, TEXT_LY, // HIRAGANA LETTER KA
    224, 102, 14, TEXT_LY, // HIRAGANA LETTER GA
    238, 102, 14, TEXT_LY, // HIRAGANA LETTER KI
    252, 102, 14, TEXT_LY, // HIRAGANA LETTER GI
    266, 102, 14, TEXT_LY, // HIRAGANA LETTER KU
    280, 102, 14, TEXT_LY, // HIRAGANA LETTER GU
    294, 102, 14, TEXT_LY, // HIRAGANA LETTER KE
    308, 102, 14, TEXT_LY, // HIRAGANA LETTER GE
    322, 102, 14, TEXT_LY, // HIRAGANA LETTER KO
    336, 102, 14, TEXT_LY, // HIRAGANA LETTER GO
    350, 102, 14, TEXT_LY, // HIRAGANA LETTER SA
    364, 102, 14, TEXT_LY, // HIRAGANA LETTER ZA
    378, 102, 14, TEXT_LY, // HIRAGANA LETTER SI
    392, 102, 14, TEXT_LY, // HIRAGANA LETTER ZI
    406, 102, 14, TEXT_LY, // HIRAGANA LETTER SU
    420, 102, 14, TEXT_LY, // HIRAGANA LETTER ZU
    434, 102, 14, TEXT_LY, // HIRAGANA LETTER SE
    448, 102, 14, TEXT_LY, // HIRAGANA LETTER ZE
    462, 102, 14, TEXT_LY, // HIRAGANA LETTER SO
    476, 102, 14, TEXT_LY, // HIRAGANA LETTER ZO
    490, 102, 14, TEXT_LY, // HIRAGANA LETTER TA
    0, 119, 14, TEXT_LY, // HIRAGANA LETTER DA
    14, 119, 14, TEXT_LY, // HIRAGANA LETTER TI
    28, 119, 14, TEXT_LY, // HIRAGANA LETTER DI
    42, 119, 14, TEXT_LY, // HIRAGANA LETTER SMALL TU
    56, 119, 14, TEXT_LY, // HIRAGANA LETTER TU
    70, 119, 14, TEXT_LY, // HIRAGANA LETTER DU
    84, 119, 14, TEXT_LY, // HIRAGANA LETTER TE
    98, 119, 14, TEXT_LY, // HIRAGANA LETTER DE
    112, 119, 14, TEXT_LY, // HIRAGANA LETTER TO
    126, 119, 14, TEXT_LY, // HIRAGANA LETTER DO
    140, 119, 14, TEXT_LY, // HIRAGANA LETTER NA
    154, 119, 14, TEXT_LY, // HIRAGANA LETTER NI
    168, 119, 14, TEXT_LY, // HIRAGANA LETTER NU
    182, 119, 14, TEXT_LY, // HIRAGANA LETTER NE
    196, 119, 14, TEXT_LY, // HIRAGANA LETTER NO
    210, 119, 14, TEXT_LY, // HIRAGANA LETTER HA
    224, 119, 14, TEXT_LY, // HIRAGANA LETTER BA
    238, 119, 14, TEXT_LY, // HIRAGANA LETTER PA
    252, 119, 14, TEXT_LY, // HIRAGANA LETTER HI
    266, 119, 14, TEXT_LY, // HIRAGANA LETTER BI
    280, 119, 14, TEXT_LY, // HIRAGANA LETTER PI
    294, 119, 14, TEXT_LY, // HIRAGANA LETTER HU
    308, 119, 14, TEXT_LY, // HIRAGANA LETTER BU
    322, 119, 14, TEXT_LY, // HIRAGANA LETTER PU
    336, 119, 14, TEXT_LY, // HIRAGANA LETTER HE
    350, 119, 14, TEXT_LY, // HIRAGANA LETTER BE
    364, 119, 14, TEXT_LY, // HIRAGANA LETTER PE
    378, 119, 14, TEXT_LY, // HIRAGANA LETTER HO
    392, 119, 14, TEXT_LY, // HIRAGANA LETTER BO
    406, 119, 14, TEXT_LY, // HIRAGANA LETTER PO
    420, 119, 14, TEXT_LY, // HIRAGANA LETTER MA
    434, 119, 14, TEXT_LY, // HIRAGANA LETTER MI
    448, 119, 14, TEXT_LY, // HIRAGANA LETTER MU
    462, 119, 14, TEXT_LY, // HIRAGANA LETTER ME
    476, 119, 14, TEXT_LY, // HIRAGANA LETTER MO
    490, 119, 14, TEXT_LY, // HIRAGANA LETTER SMALL YA
    0, 136, 14, TEXT_LY, // HIRAGANA LETTER YA
    14, 136, 14, TEXT_LY, // HIRAGANA LETTER SMALL YU
    28, 136, 14, TEXT_LY, // HIRAGANA LETTER YU
    42, 136, 14, TEXT_LY, // HIRAGANA LETTER SMALL YO
    56, 136, 14, TEXT_LY, // HIRAGANA LETTER YO
    70, 136, 14, TEXT_LY, // HIRAGANA LETTER RA
    84, 136, 14, TEXT_LY, // HIRAGANA LETTER RI
    98, 136, 14, TEXT_LY, // HIRAGANA LETTER RU
    112, 136, 14, TEXT_LY, // HIRAGANA LETTER RE
    126, 136, 14, TEXT_LY, // HIRAGANA LETTER RO
    140, 136, 14, TEXT_LY, // HIRAGANA LETTER SMALL WA
    154, 136, 14, TEXT_LY, // HIRAGANA LETTER WA
    168, 136, 14, TEXT_LY, // HIRAGANA LETTER WI
    182, 136, 14, TEXT_LY, // HIRAGANA LETTER WE
    196, 136, 14, TEXT_LY, // HIRAGANA LETTER WO
    210, 136, 14, TEXT_LY, // HIRAGANA LETTER N
    224, 136, 14, TEXT_LY, // KATAKANA-HIRAGANA VOICED SOUND MARK
    238, 136, 14, TEXT_LY, // KATAKANA-HIRAGANA SEMI-VOICED SOUND MARK
    252, 136, 14, TEXT_LY, // HIRAGANA ITERATION MARK
    266, 136, 14, TEXT_LY, // HIRAGANA VOICED ITERATION MARK
    280, 136, 14, TEXT_LY, // KATAKANA LETTER SMALL A
    294, 136, 14, TEXT_LY, // KATAKANA LETTER A
    308, 136, 14, TEXT_LY, // KATAKANA LETTER SMALL I
    322, 136, 14, TEXT_LY, // KATAKANA LETTER I
    336, 136, 14, TEXT_LY, // KATAKANA LETTER SMALL U
    350, 136, 14, TEXT_LY, // KATAKANA LETTER U
    364, 136, 14, TEXT_LY, // KATAKANA LETTER SMALL E
    378, 136, 14, TEXT_LY, // KATAKANA LETTER E
    392, 136, 14, TEXT_LY, // KATAKANA LETTER SMALL O
    406, 136, 14, TEXT_LY, // KATAKANA LETTER O
    420, 136, 14, TEXT_LY, // KATAKANA LETTER KA
    434, 136, 14, TEXT_LY, // KATAKANA LETTER GA
    448, 136, 14, TEXT_LY, // KATAKANA LETTER KI
    462, 136, 14, TEXT_LY, // KATAKANA LETTER GI
    476, 136, 14, TEXT_LY, // KATAKANA LETTER KU
    490, 136, 14, TEXT_LY, // KATAKANA LETTER GU
    0, 153, 14, TEXT_LY, // KATAKANA LETTER KE
    14, 153, 14, TEXT_LY, // KATAKANA LETTER GE
    28, 153, 14, TEXT_LY, // KATAKANA LETTER KO
    42, 153, 14, TEXT_LY, // KATAKANA LETTER GO
    56, 153, 14, TEXT_LY, // KATAKANA LETTER SA
    70, 153, 14, TEXT_LY, // KATAKANA LETTER ZA
    84, 153, 14, TEXT_LY, // KATAKANA LETTER SI
    98, 153, 14, TEXT_LY, // KATAKANA LETTER ZI
    112, 153, 14, TEXT_LY, // KATAKANA LETTER SU
    126, 153, 14, TEXT_LY, // KATAKANA LETTER ZU
    140, 153, 14, TEXT_LY, // KATAKANA LETTER SE
    154, 153, 14, TEXT_LY, // KATAKANA LETTER ZE
    168, 153, 14, TEXT_LY, // KATAKANA LETTER SO
    182, 153, 14, TEXT_LY, // KATAKANA LETTER ZO
    196, 153, 14, TEXT_LY, // KATAKANA LETTER TA
    210, 153, 14, TEXT_LY, // KATAKANA LETTER DA
    224, 153, 14, TEXT_LY, // KATAKANA LETTER TI
    238, 153, 14, TEXT_LY, // KATAKANA LETTER DI
    252, 153, 14, TEXT_LY, // KATAKANA LETTER SMALL TU
    266, 153, 14, TEXT_LY, // KATAKANA LETTER TU
    280, 153, 14, TEXT_LY, // KATAKANA LETTER DU
    294, 153, 14, TEXT_LY, // KATAKANA LETTER TE
    308, 153, 14, TEXT_LY, // KATAKANA LETTER DE
    322, 153, 14, TEXT_LY, // KATAKANA LETTER TO
    336, 153, 14, TEXT_LY, // KATAKANA LETTER DO
    350, 153, 14, TEXT_LY, // KATAKANA LETTER NA
    364, 153, 14, TEXT_LY, // KATAKANA LETTER NI
    378, 153, 14, TEXT_LY, // KATAKANA LETTER NU
    392, 153, 14, TEXT_LY, // KATAKANA LETTER NE
    406, 153, 14, TEXT_LY, // KATAKANA LETTER NO
    420, 153, 14, TEXT_LY, // KATAKANA LETTER HA
    434, 153, 14, TEXT_LY, // KATAKANA LETTER BA
    448, 153, 14, TEXT_LY, // KATAKANA LETTER PA
    462, 153, 14, TEXT_LY, // KATAKANA LETTER HI
    476, 153, 14, TEXT_LY, // KATAKANA LETTER BI
    490, 153, 14, TEXT_LY, // KATAKANA LETTER PI
    0, 170, 14, TEXT_LY, // KATAKANA LETTER HU
    14, 170, 14, TEXT_LY, // KATAKANA LETTER BU
    28, 170, 14, TEXT_LY, // KATAKANA LETTER PU
    42, 170, 14, TEXT_LY, // KATAKANA LETTER HE
    56, 170, 14, TEXT_LY, // KATAKANA LETTER BE
    70, 170, 14, TEXT_LY, // KATAKANA LETTER PE
    84, 170, 14, TEXT_LY, // KATAKANA LETTER HO
    98, 170, 14, TEXT_LY, // KATAKANA LETTER BO
    112, 170, 14, TEXT_LY, // KATAKANA LETTER PO
    126, 170, 14, TEXT_LY, // KATAKANA LETTER MA
    140, 170, 14, TEXT_LY, // KATAKANA LETTER MI
    154, 170, 14, TEXT_LY, // KATAKANA LETTER MU
    168, 170, 14, TEXT_LY, // KATAKANA LETTER ME
    182, 170, 14, TEXT_LY, // KATAKANA LETTER MO
    196, 170, 14, TEXT_LY, // KATAKANA LETTER SMALL YA
    210, 170, 14, TEXT_LY, // KATAKANA LETTER YA
    224, 170, 14, TEXT_LY, // KATAKANA LETTER SMALL YU
    238, 170, 14, TEXT_LY, // KATAKANA LETTER YU
    252, 170, 14, TEXT_LY, // KATAKANA LETTER SMALL YO
    266, 170, 14, TEXT_LY, // KATAKANA LETTER YO
    280, 170, 14, TEXT_LY, // KATAKANA LETTER RA
    294, 170, 14, TEXT_LY, // KATAKANA LETTER RI
    308, 170, 14, TEXT_LY, // KATAKANA LETTER RU
    322, 170, 14, TEXT_LY, // KATAKANA LETTER RE
    336, 170, 14, TEXT_LY, // KATAKANA LETTER RO
    350, 170, 14, TEXT_LY, // KATAKANA LETTER SMALL WA
    364, 170, 14, TEXT_LY, // KATAKANA LETTER WA
    378, 170, 14, TEXT_LY, // KATAKANA LETTER WI
    392, 170, 14, TEXT_LY, // KATAKANA LETTER WE
    406, 170, 14, TEXT_LY, // KATAKANA LETTER WO
    420, 170, 14, TEXT_LY, // KATAKANA LETTER N
    434, 170, 14, TEXT_LY, // KATAKANA LETTER VU
    448, 170, 14, TEXT_LY, // KATAKANA LETTER SMALL KA
    462, 170, 14, TEXT_LY, // KATAKANA LETTER SMALL KE
    476, 170, 14, TEXT_LY, // KATAKANA MIDDLE DOT
    490, 170, 14, TEXT_LY, // KATAKANA-HIRAGANA PROLONGED SOUND MARK
    0, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4E00
    14, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4E0A
    28, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4E0B
    42, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4E86
    56, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4ECA
    70, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4ED6
    84, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4ED8
    98, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4EE5
    112, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4F4D
    126, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4F53
    140, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4F55
    154, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4F7F
    168, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4FDD
    182, 187, 14, TEXT_LY, // CJK IDEOGRAPH-4FE1
    196, 187, 14, TEXT_LY, // CJK IDEOGRAPH-5065
    210, 187, 14, TEXT_LY, // CJK IDEOGRAPH-5165
    224, 187, 14, TEXT_LY, // CJK IDEOGRAPH-5168
    238, 187, 14, TEXT_LY, // CJK IDEOGRAPH-5185
    252, 187, 14, TEXT_LY, // CJK IDEOGRAPH-5206
    266, 187, 14, TEXT_LY, // CJK IDEOGRAPH-5207
    280, 187, 14, TEXT_LY, // CJK IDEOGRAPH-521D
    294, 187, 14, TEXT_LY, // CJK IDEOGRAPH-523B
    308, 187, 14, TEXT_LY, // CJK IDEOGRAPH-524D
    322, 187, 14, TEXT_LY, // CJK IDEOGRAPH-529B
    336, 187, 14, TEXT_LY, // CJK IDEOGRAPH-52A0
    350, 187, 14, TEXT_LY, // CJK IDEOGRAPH-52D5
    364, 187, 14, TEXT_LY, // CJK IDEOGRAPH-53BB
    378, 187, 14, TEXT_LY, // CJK IDEOGRAPH-53C2
    392, 187, 14, TEXT_LY, // CJK IDEOGRAPH-53D6
    406, 187, 14, TEXT_LY, // CJK IDEOGRAPH-5408
    420, 187, 14, TEXT_LY, // CJK IDEOGRAPH-540D
    434, 187, 14, TEXT_LY, // CJK IDEOGRAPH-54E1
    448, 187, 14, TEXT_LY, // CJK IDEOGRAPH-5728
    462, 187, 14, TEXT_LY, // CJK IDEOGRAPH-5831
    476, 187, 14, TEXT_LY, // CJK IDEOGRAPH-5916
    490, 187, 14, TEXT_LY, // CJK IDEOGRAPH-5927
    0, 204, 14, TEXT_LY, // CJK IDEOGRAPH-597D
    14, 204, 14, TEXT_LY, // CJK IDEOGRAPH-59CB
    28, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5B58
    42, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5B89
    56, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5B8C
    70, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5B9A
    84, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5BA4
    98, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5BB9
    112, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5DEE
    126, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5E74
    140, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5EA6
    154, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5EB7
    168, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5F8C
    182, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5FC5
    196, 204, 14, TEXT_LY, // CJK IDEOGRAPH-5FDC
    210, 204, 14, TEXT_LY, // CJK IDEOGRAPH-60C5
    224, 204, 14, TEXT_LY, // CJK IDEOGRAPH-614B
    238, 204, 14, TEXT_LY, // CJK IDEOGRAPH-6271
    252, 204, 14, TEXT_LY, // CJK IDEOGRAPH-629E
    266, 204, 14, TEXT_LY, // CJK IDEOGRAPH-62BC
    280, 204, 14, TEXT_LY, // CJK IDEOGRAPH-632F
    294, 204, 14, TEXT_LY, // CJK IDEOGRAPH-63A2
    308, 204, 14, TEXT_LY, // CJK IDEOGRAPH-6574
    322, 204, 14, TEXT_LY, // CJK IDEOGRAPH-65B9
    336, 204, 14, TEXT_LY, // CJK IDEOGRAPH-65E5
    350, 204, 14, TEXT_LY, // CJK IDEOGRAPH-660E
    364, 204, 14, TEXT_LY, // CJK IDEOGRAPH-6642
    378, 204, 14, TEXT_LY, // CJK IDEOGRAPH-66F8
    392, 204, 14, TEXT_LY, // CJK IDEOGRAPH-6708
    406, 204, 14, TEXT_LY, // CJK IDEOGRAPH-672C
    420, 204, 14, TEXT_LY, // CJK IDEOGRAPH-6A5F
    434, 204, 14, TEXT_LY, // CJK IDEOGRAPH-6B63
    448, 204, 14, TEXT_LY, // CJK IDEOGRAPH-6B8B
    462, 204, 14, TEXT_LY, // CJK IDEOGRAPH-6C7A
    476, 204, 14, TEXT_LY, // CJK IDEOGRAPH-6CD5
    490, 204, 14, TEXT_LY, // CJK IDEOGRAPH-6D88
    0, 221, 14, TEXT_LY, // CJK IDEOGRAPH-6E90
    14, 221, 14, TEXT_LY, // CJK IDEOGRAPH-72B6
    28, 221, 14, TEXT_LY, // CJK IDEOGRAPH-73FE
    42, 221, 14, TEXT_LY, // CJK IDEOGRAPH-751F
    56, 221, 14, TEXT_LY, // CJK IDEOGRAPH-7528
    70, 221, 14, TEXT_LY, // CJK IDEOGRAPH-753B
    84, 221, 14, TEXT_LY, // CJK IDEOGRAPH-767A
    98, 221, 14, TEXT_LY, // CJK IDEOGRAPH-767B
    112, 221, 14, TEXT_LY, // CJK IDEOGRAPH-78BA
    126, 221, 14, TEXT_LY, // CJK IDEOGRAPH-793A
    140, 221, 14, TEXT_LY, // CJK IDEOGRAPH-79FB
    154, 221, 14, TEXT_LY, // CJK IDEOGRAPH-7D42
    168, 221, 14, TEXT_LY, // CJK IDEOGRAPH-7D4C
    182, 221, 14, TEXT_LY, // CJK IDEOGRAPH-7D9A
    196, 221, 14, TEXT_LY, // CJK IDEOGRAPH-7F6E
    210, 221, 14, TEXT_LY, // CJK IDEOGRAPH-80FD
    224, 221, 14, TEXT_LY, // CJK IDEOGRAPH-81EA
    238, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8272
    252, 221, 14, TEXT_LY, // CJK IDEOGRAPH-884C
    266, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8868
    280, 221, 14, TEXT_LY, // CJK IDEOGRAPH-88DC
    294, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8981
    308, 221, 14, TEXT_LY, // CJK IDEOGRAPH-898B
    322, 221, 14, TEXT_LY, // CJK IDEOGRAPH-89E3
    336, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8A00
    350, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8A2D
    364, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8A8D
    378, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8A95
    392, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8A9E
    406, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8AAC
    420, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8AAD
    434, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8ABF
    448, 221, 14, TEXT_LY, // CJK IDEOGRAPH-8D77
    462, 221, 14, TEXT_LY, // CJK IDEOGRAPH-9000
    476, 221, 14, TEXT_LY, // CJK IDEOGRAPH-901A
    490, 221, 14, TEXT_LY, // CJK IDEOGRAPH-904A
    0, 238, 14, TEXT_LY, // CJK IDEOGRAPH-904E
    14, 238, 14, TEXT_LY, // CJK IDEOGRAPH-9078
    28, 238, 14, TEXT_LY, // CJK IDEOGRAPH-9332
    42, 238, 14, TEXT_LY, // CJK IDEOGRAPH-958B
    56, 238, 14, TEXT_LY, // CJK IDEOGRAPH-9593
    70, 238, 14, TEXT_LY, // CJK IDEOGRAPH-9664
    84, 238, 14, TEXT_LY, // CJK IDEOGRAPH-96FB
    98, 238, 14, TEXT_LY, // CJK IDEOGRAPH-9762
    112, 238, 14, TEXT_LY, // CJK IDEOGRAPH-9CF4
    126, 238, 15, TEXT_LY, // PRIVATE USE-E036
    140, 238, 14, TEXT_LY, // FULLWIDTH EXCLAMATION MARK
    154, 238, 14, TEXT_LY, // FULLWIDTH AMPERSAND
    168, 238, 14, TEXT_LY, // FULLWIDTH LEFT PARENTHESIS
    182, 238, 14, TEXT_LY, // FULLWIDTH RIGHT PARENTHESIS
    196, 238, 14, TEXT_LY, // FULLWIDTH PLUS SIGN
    210, 238, 14, TEXT_LY, // FULLWIDTH COMMA
    224, 238, 14, TEXT_LY, // FULLWIDTH HYPHEN-MINUS
    238, 238, 14, TEXT_LY, // FULLWIDTH FULL STOP
    252, 238, 14, TEXT_LY, // FULLWIDTH SOLIDUS
    266, 238, 14, TEXT_LY, // FULLWIDTH COLON
    280, 238, 14, TEXT_LY, // FULLWIDTH SEMICOLON
    294, 238, 14, TEXT_LY, // FULLWIDTH EQUALS SIGN
    308, 238, 14, TEXT_LY, // FULLWIDTH QUESTION MARK
    322, 238, 14, TEXT_LY, // FULLWIDTH LEFT SQUARE BRACKET
    336, 238, 14, TEXT_LY, // FULLWIDTH REVERSE SOLIDUS
    350, 238, 14, TEXT_LY, // FULLWIDTH RIGHT SQUARE BRACKET
    364, 238, 14, TEXT_LY, // FULLWIDTH CIRCUMFLEX ACCENT
    378, 238, 14, TEXT_LY, // FULLWIDTH LOW LINE
    392, 238, 14, TEXT_LY, // FULLWIDTH GRAVE ACCENT
    406, 238, 14, TEXT_LY, // FULLWIDTH LEFT CURLY BRACKET
    420, 238, 14, TEXT_LY, // FULLWIDTH VERTICAL LINE
    434, 238, 14, TEXT_LY, // FULLWIDTH RIGHT CURLY BRACKET
    448, 238, 14, TEXT_LY, // FULLWIDTH TILDE
    462, 238, 14, TEXT_LY, // FULLWIDTH MACRON

};

static constexpr unsigned short int large_utf16_lookup_table[] = {
0x0020,0x0021,0x0022,0x0023,0x0024,0x0025,0x0026,0x0027,0x0028,0x0029,0x002A,0x002B,0x002C,0x002D,0x002E,0x002F,0x0030,0x0031,0x0032,0x0033,0x0034,0x0035,0x0036,0x0037,0x0038,0x0039,0x003A,0x003B,0x003C,0x003D,0x003E,0x003F,0x0040,
0x0041,0x0042,0x0043,0x0044,0x0045,0x0046,0x0047,0x0048,0x0049,0x004A,0x004B,0x004C,0x004D,0x004E,0x004F,0x0050,0x0051,0x0052,0x0053,0x0054,0x0055,0x0056,0x0057,0x0058,0x0059,0x005A,0x005B,0x005C,0x005D,0x005E,0x005F,0x0060,0x0061,
0x0062,0x0063,0x0064,0x0065,0x0066,0x0067,0x0068,0x0069,0x006A,0x006B,0x006C,0x006D,0x006E,0x006F,0x0070,0x0071,0x0072,0x0073,0x0074,0x0075,0x0076,0x0077,0x0078,0x0079,0x007A,0x007B,0x007C,0x007D,0x007E,0x007F,0x00A1,0x00A2,0x00A3,
0x00A8,0x00A9,0x00AE,0x00B0,0x00B1,0x00B4,0x00B7,0x00BF,0x00C0,0x00C1,0x00C2,0x00C3,0x00C4,0x00C5,0x00C6,0x00C7,0x00C8,0x00C9,0x00CA,0x00CB,0x00CC,0x00CD,0x00CE,0x00CF,0x00D0,0x00D1,0x00D2,0x00D3,0x00D4,0x00D5,0x00D6,0x00D7,0x00D8,
0x00D9,0x00DA,0x00DB,0x00DC,0x00DD,0x00DF,0x00E0,0x00E1,0x00E2,0x00E3,0x00E4,0x00E5,0x00E6,0x00E7,0x00E8,0x00E9,0x00EA,0x00EB,0x00EC,0x00ED,0x00EE,0x00EF,0x00F0,0x00F1,0x00F2,0x00F3,0x00F4,0x00F5,0x00F6,0x00F7,0x00F8,0x00F9,0x00FA,
0x00FB,0x00FC,0x00FD,0x0152,0x0153,0x02C6,0x02DC,0x2010,0x2015,0x2018,0x2019,0x201A,0x201C,0x201D,0x201E,0x2022,0x2026,0x2032,0x2033,0x203A,0x203B,0x20AC,0x2122,0x2190,0x2191,0x2192,0x2193,0x221E,0x2234,0x25A0,0x25A1,0x25B2,0x25B3,
0x25BC,0x25BD,0x25C6,0x25C7,0x25CB,0x25CE,0x25CF,0x2605,0x2606,0x266A,0x266D,0x266F,0x3000,0x3001,0x3002,0x3005,0x3008,0x3009,0x300C,0x300D,0x3012,0x3014,0x3015,0x3041,0x3042,0x3043,0x3044,0x3045,0x3046,0x3047,0x3048,0x3049,0x304A,
0x304B,0x304C,0x304D,0x304E,0x304F,0x3050,0x3051,0x3052,0x3053,0x3054,0x3055,0x3056,0x3057,0x3058,0x3059,0x305A,0x305B,0x305C,0x305D,0x305E,0x305F,0x3060,0x3061,0x3062,0x3063,0x3064,0x3065,0x3066,0x3067,0x3068,0x3069,0x306A,0x306B,
0x306C,0x306D,0x306E,0x306F,0x3070,0x3071,0x3072,0x3073,0x3074,0x3075,0x3076,0x3077,0x3078,0x3079,0x307A,0x307B,0x307C,0x307D,0x307E,0x307F,0x3080,0x3081,0x3082,0x3083,0x3084,0x3085,0x3086,0x3087,0x3088,0x3089,0x308A,0x308B,0x308C,
0x308D,0x308E,0x308F,0x3090,0x3091,0x3092,0x3093,0x309B,0x309C,0x309D,0x309E,0x30A1,0x30A2,0x30A3,0x30A4,0x30A5,0x30A6,0x30A7,0x30A8,0x30A9,0x30AA,0x30AB,0x30AC,0x30AD,0x30AE,0x30AF,0x30B0,0x30B1,0x30B2,0x30B3,0x30B4,0x30B5,0x30B6,
0x30B7,0x30B8,0x30B9,0x30BA,0x30BB,0x30BC,0x30BD,0x30BE,0x30BF,0x30C0,0x30C1,0x30C2,0x30C3,0x30C4,0x30C5,0x30C6,0x30C7,0x30C8,0x30C9,0x30CA,0x30CB,0x30CC,0x30CD,0x30CE,0x30CF,0x30D0,0x30D1,0x30D2,0x30D3,0x30D4,0x30D5,0x30D6,0x30D7,
0x30D8,0x30D9,0x30DA,0x30DB,0x30DC,0x30DD,0x30DE,0x30DF,0x30E0,0x30E1,0x30E2,0x30E3,0x30E4,0x30E5,0x30E6,0x30E7,0x30E8,0x30E9,0x30EA,0x30EB,0x30EC,0x30ED,0x30EE,0x30EF,0x30F0,0x30F1,0x30F2,0x30F3,0x30F4,0x30F5,0x30F6,0x30FB,0x30FC,
0x4E00,0x4E0A,0x4E0B,0x4E86,0x4ECA,0x4ED6,0x4ED8,0x4EE5,0x4F4D,0x4F53,0x4F55,0x4F7F,0x4FDD,0x4FE1,0x5065,0x5165,0x5168,0x5185,0x5206,0x5207,0x521D,0x523B,0x524D,0x529B,0x52A0,0x52D5,0x53BB,0x53C2,0x53D6,0x5408,0x540D,0x54E1,0x5728,
0x5831,0x5916,0x5927,0x597D,0x59CB,0x5B58,0x5B89,0x5B8C,0x5B9A,0x5BA4,0x5BB9,0x5DEE,0x5E74,0x5EA6,0x5EB7,0x5F8C,0x5FC5,0x5FDC,0x60C5,0x614B,0x6271,0x629E,0x62BC,0x632F,0x63A2,0x6574,0x65B9,0x65E5,0x660E,0x6642,0x66F8,0x6708,0x672C,
0x6A5F,0x6B63,0x6B8B,0x6C7A,0x6CD5,0x6D88,0x6E90,0x72B6,0x73FE,0x751F,0x7528,0x753B,0x767A,0x767B,0x78BA,0x793A,0x79FB,0x7D42,0x7D4C,0x7D9A,0x7F6E,0x80FD,0x81EA,0x8272,0x884C,0x8868,0x88DC,0x8981,0x898B,0x89E3,0x8A00,0x8A2D,0x8A8D,
0x8A95,0x8A9E,0x8AAC,0x8AAD,0x8ABF,0x8D77,0x9000,0x901A,0x904A,0x904E,0x9078,0x9332,0x958B,0x9593,0x9664,0x96FB,0x9762,0x9CF4,0xE036,0xFF01,0xFF06,0xFF08,0xFF09,0xFF0B,0xFF0C,0xFF0D,0xFF0E,0xFF0F,0xFF1A,0xFF1B,0xFF1D,0xFF1F,0xFF3B,
0xFF3C,0xFF3D,0xFF3E,0xFF3F,0xFF40,0xFF5B,0xFF5C,0xFF5D,0xFF5E,0xFFE3,
};


#endif
