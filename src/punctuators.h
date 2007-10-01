/**
 * @file punctuators.h
 * Automatically generated
 * $Id$
 */
static const lookup_entry_t punc_table[] =
{
   { '!', 25, 26, &symbols1[0]  },   //   0: '!'
   { '#', 24, 35, &symbols1[1]  },   //   1: '#'
   { '$', 23,  0, &symbols1[2]  },   //   2: '$'
   { '%', 22, 36, &symbols1[3]  },   //   3: '%'
   { '&', 21, 41, &symbols1[4]  },   //   4: '&'
   { '(', 20,  0, &symbols1[5]  },   //   5: '('
   { ')', 19,  0, &symbols1[6]  },   //   6: ')'
   { '*', 18, 43, &symbols1[7]  },   //   7: '*'
   { '+', 17, 44, &symbols1[8]  },   //   8: '+'
   { ',', 16,  0, &symbols1[9]  },   //   9: ','
   { '-', 15, 46, &symbols1[10] },   //  10: '-'
   { '.', 14, 50, &symbols1[11] },   //  11: '.'
   { '/', 13, 53, &symbols1[12] },   //  12: '/'
   { ':', 12, 54, &symbols1[13] },   //  13: ':'
   { ';', 11,  0, &symbols1[14] },   //  14: ';'
   { '<', 10, 56, &symbols1[15] },   //  15: '<'
   { '=',  9, 63, &symbols1[16] },   //  16: '='
   { '>',  8, 66, &symbols1[17] },   //  17: '>'
   { '?',  7,  0, &symbols1[18] },   //  18: '?'
   { '[',  6, 71, &symbols1[19] },   //  19: '['
   { ']',  5,  0, &symbols1[20] },   //  20: ']'
   { '^',  4, 72, &symbols1[21] },   //  21: '^'
   { '{',  3,  0, &symbols1[22] },   //  22: '{'
   { '|',  2, 73, &symbols1[23] },   //  23: '|'
   { '}',  1,  0, &symbols1[24] },   //  24: '}'
   { '~',  0, 75, &symbols1[25] },   //  25: '~'
   { '<',  3, 30, &symbols2[0]  },   //  26: '!<'
   { '=',  2, 33, &symbols2[1]  },   //  27: '!='
   { '>',  1, 34, &symbols2[2]  },   //  28: '!>'
   { '~',  0,  0, &symbols2[3]  },   //  29: '!~'
   { '=',  1,  0, &symbols3[0]  },   //  30: '!<='
   { '>',  0, 32, &symbols3[1]  },   //  31: '!<>'
   { '=',  0,  0, &symbols4[0]  },   //  32: '!<>='
   { '=',  0,  0, &symbols3[2]  },   //  33: '!=='
   { '=',  0,  0, &symbols3[3]  },   //  34: '!>='
   { '#',  0,  0, &symbols2[4]  },   //  35: '##'
   { ':',  2, 39, &symbols2[5]  },   //  36: '%:'
   { '=',  1,  0, &symbols2[6]  },   //  37: '%='
   { '>',  0,  0, &symbols2[7]  },   //  38: '%>'
   { '%',  0, 40, NULL          },   //  39: '%:%'
   { ':',  0,  0, &symbols4[1]  },   //  40: '%:%:'
   { '&',  1,  0, &symbols2[8]  },   //  41: '&&'
   { '=',  0,  0, &symbols2[9]  },   //  42: '&='
   { '=',  0,  0, &symbols2[10] },   //  43: '*='
   { '+',  1,  0, &symbols2[11] },   //  44: '++'
   { '=',  0,  0, &symbols2[12] },   //  45: '+='
   { '-',  2,  0, &symbols2[13] },   //  46: '--'
   { '=',  1,  0, &symbols2[14] },   //  47: '-='
   { '>',  0, 49, &symbols2[15] },   //  48: '->'
   { '*',  0,  0, &symbols3[4]  },   //  49: '->*'
   { '*',  1,  0, &symbols2[16] },   //  50: '.*'
   { '.',  0, 52, &symbols2[17] },   //  51: '..'
   { '.',  0,  0, &symbols3[5]  },   //  52: '...'
   { '=',  0,  0, &symbols2[18] },   //  53: '/='
   { ':',  1,  0, &symbols2[19] },   //  54: '::'
   { '>',  0,  0, &symbols2[20] },   //  55: ':>'
   { '%',  4,  0, &symbols2[21] },   //  56: '<%'
   { ':',  3,  0, &symbols2[22] },   //  57: '<:'
   { '<',  2, 61, &symbols2[23] },   //  58: '<<'
   { '=',  1,  0, &symbols2[24] },   //  59: '<='
   { '>',  0, 62, &symbols2[25] },   //  60: '<>'
   { '=',  0,  0, &symbols3[6]  },   //  61: '<<='
   { '=',  0,  0, &symbols3[7]  },   //  62: '<>='
   { '=',  1, 65, &symbols2[26] },   //  63: '=='
   { '>',  0,  0, &symbols2[35] },   //  64: '=>'
   { '=',  0,  0, &symbols3[8]  },   //  65: '==='
   { '=',  1,  0, &symbols2[27] },   //  66: '>='
   { '>',  0, 68, &symbols2[28] },   //  67: '>>'
   { '=',  1,  0, &symbols3[9]  },   //  68: '>>='
   { '>',  0, 70, &symbols3[10] },   //  69: '>>>'
   { '=',  0,  0, &symbols4[2]  },   //  70: '>>>='
   { ']',  0,  0, &symbols2[29] },   //  71: '[]'
   { '=',  0,  0, &symbols2[30] },   //  72: '^='
   { '=',  1,  0, &symbols2[31] },   //  73: '|='
   { '|',  0,  0, &symbols2[32] },   //  74: '||'
   { '=',  1,  0, &symbols2[33] },   //  75: '~='
   { '~',  0,  0, &symbols2[34] },   //  76: '~~'
};
