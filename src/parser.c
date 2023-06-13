#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 25
#define SYMBOL_COUNT 206
#define ALIAS_COUNT 0
#define TOKEN_COUNT 191
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  aux_sym_comment_token2 = 2,
  sym_string = 3,
  aux_sym_number_token1 = 4,
  aux_sym_core_token1 = 5,
  aux_sym_core_token2 = 6,
  aux_sym_core_token3 = 7,
  aux_sym_core_token4 = 8,
  aux_sym_core_token5 = 9,
  aux_sym_core_token6 = 10,
  aux_sym_core_token7 = 11,
  aux_sym_core_token8 = 12,
  aux_sym_core_token9 = 13,
  aux_sym_core_token10 = 14,
  aux_sym_core_token11 = 15,
  aux_sym_core_token12 = 16,
  aux_sym_core_token13 = 17,
  aux_sym_core_token14 = 18,
  aux_sym_core_token15 = 19,
  aux_sym_core_token16 = 20,
  aux_sym_core_token17 = 21,
  aux_sym_core_token18 = 22,
  aux_sym_core_token19 = 23,
  aux_sym_core_token20 = 24,
  aux_sym_core_token21 = 25,
  aux_sym_core_token22 = 26,
  aux_sym_core_token23 = 27,
  aux_sym_core_token24 = 28,
  aux_sym_core_token25 = 29,
  aux_sym_core_token26 = 30,
  aux_sym_core_token27 = 31,
  aux_sym_core_token28 = 32,
  aux_sym_core_token29 = 33,
  aux_sym_core_token30 = 34,
  aux_sym_core_token31 = 35,
  aux_sym_core_token32 = 36,
  aux_sym_core_token33 = 37,
  aux_sym_core_token34 = 38,
  aux_sym_core_token35 = 39,
  aux_sym_core_token36 = 40,
  aux_sym_core_token37 = 41,
  aux_sym_core_token38 = 42,
  aux_sym_core_token39 = 43,
  aux_sym_core_token40 = 44,
  aux_sym_core_token41 = 45,
  aux_sym_core_token42 = 46,
  aux_sym_core_token43 = 47,
  aux_sym_core_token44 = 48,
  aux_sym_core_token45 = 49,
  aux_sym_core_token46 = 50,
  aux_sym_core_token47 = 51,
  aux_sym_core_token48 = 52,
  aux_sym_core_token49 = 53,
  aux_sym_core_token50 = 54,
  aux_sym_core_token51 = 55,
  aux_sym_core_token52 = 56,
  aux_sym_core_token53 = 57,
  aux_sym_core_token54 = 58,
  aux_sym_core_token55 = 59,
  aux_sym_core_token56 = 60,
  aux_sym_core_token57 = 61,
  aux_sym_core_token58 = 62,
  aux_sym_core_token59 = 63,
  aux_sym_core_token60 = 64,
  aux_sym_core_token61 = 65,
  aux_sym_core_token62 = 66,
  aux_sym_core_token63 = 67,
  aux_sym_core_token64 = 68,
  aux_sym_core_token65 = 69,
  aux_sym_core_token66 = 70,
  aux_sym_core_token67 = 71,
  aux_sym_core_token68 = 72,
  aux_sym_core_token69 = 73,
  aux_sym_core_token70 = 74,
  aux_sym_core_token71 = 75,
  aux_sym_core_token72 = 76,
  aux_sym_core_token73 = 77,
  aux_sym_core_token74 = 78,
  aux_sym_core_token75 = 79,
  aux_sym_core_token76 = 80,
  aux_sym_core_token77 = 81,
  aux_sym_core_token78 = 82,
  aux_sym_core_token79 = 83,
  aux_sym_core_token80 = 84,
  aux_sym_core_token81 = 85,
  aux_sym_core_token82 = 86,
  aux_sym_core_token83 = 87,
  aux_sym_core_token84 = 88,
  aux_sym_core_token85 = 89,
  aux_sym_core_token86 = 90,
  aux_sym_core_token87 = 91,
  aux_sym_core_token88 = 92,
  aux_sym_core_token89 = 93,
  aux_sym_core_token90 = 94,
  aux_sym_core_token91 = 95,
  aux_sym_core_token92 = 96,
  aux_sym_core_token93 = 97,
  aux_sym_core_token94 = 98,
  aux_sym_core_token95 = 99,
  aux_sym_core_token96 = 100,
  aux_sym_core_token97 = 101,
  aux_sym_core_token98 = 102,
  aux_sym_core_token99 = 103,
  aux_sym_core_token100 = 104,
  aux_sym_core_token101 = 105,
  aux_sym_core_token102 = 106,
  aux_sym_core_token103 = 107,
  aux_sym_core_token104 = 108,
  aux_sym_core_token105 = 109,
  aux_sym_core_token106 = 110,
  aux_sym_core_token107 = 111,
  aux_sym_core_token108 = 112,
  aux_sym_core_token109 = 113,
  aux_sym_core_token110 = 114,
  aux_sym_core_token111 = 115,
  aux_sym_core_token112 = 116,
  aux_sym_core_token113 = 117,
  aux_sym_core_token114 = 118,
  aux_sym_core_token115 = 119,
  aux_sym_core_token116 = 120,
  aux_sym_core_token117 = 121,
  aux_sym_core_token118 = 122,
  aux_sym_core_token119 = 123,
  aux_sym_core_token120 = 124,
  aux_sym_core_token121 = 125,
  aux_sym_core_token122 = 126,
  aux_sym_core_token123 = 127,
  aux_sym_core_token124 = 128,
  aux_sym_core_token125 = 129,
  aux_sym_core_token126 = 130,
  aux_sym_core_token127 = 131,
  aux_sym_core_token128 = 132,
  aux_sym_core_token129 = 133,
  aux_sym_core_token130 = 134,
  aux_sym_core_token131 = 135,
  aux_sym_core_token132 = 136,
  aux_sym_core_token133 = 137,
  aux_sym_core_token134 = 138,
  aux_sym_core_token135 = 139,
  aux_sym_core_token136 = 140,
  aux_sym_core_token137 = 141,
  aux_sym_core_token138 = 142,
  aux_sym_core_token139 = 143,
  aux_sym_core_token140 = 144,
  aux_sym_core_token141 = 145,
  aux_sym_core_token142 = 146,
  aux_sym_core_token143 = 147,
  aux_sym_core_token144 = 148,
  aux_sym_core_token145 = 149,
  aux_sym_core_token146 = 150,
  aux_sym_core_token147 = 151,
  aux_sym_core_token148 = 152,
  aux_sym_core_token149 = 153,
  aux_sym_core_token150 = 154,
  aux_sym_core_token151 = 155,
  aux_sym_core_token152 = 156,
  aux_sym_core_token153 = 157,
  aux_sym_core_token154 = 158,
  aux_sym_core_token155 = 159,
  aux_sym_core_token156 = 160,
  aux_sym_core_token157 = 161,
  aux_sym_core_token158 = 162,
  aux_sym_core_token159 = 163,
  aux_sym_core_token160 = 164,
  aux_sym_core_token161 = 165,
  aux_sym_core_token162 = 166,
  aux_sym_core_token163 = 167,
  aux_sym_core_token164 = 168,
  aux_sym_core_token165 = 169,
  aux_sym_core_token166 = 170,
  aux_sym_core_token167 = 171,
  aux_sym_core_token168 = 172,
  aux_sym_core_token169 = 173,
  aux_sym_core_token170 = 174,
  aux_sym_core_token171 = 175,
  aux_sym_core_token172 = 176,
  anon_sym_EQ = 177,
  anon_sym_PLUS = 178,
  anon_sym_DASH = 179,
  anon_sym_SLASH = 180,
  anon_sym_STAR = 181,
  anon_sym_STAR_SLASH = 182,
  anon_sym_GT = 183,
  anon_sym_LT = 184,
  sym_word = 185,
  sym_lparen = 186,
  sym_rparen = 187,
  anon_sym_DASH_DASH = 188,
  anon_sym_COLON = 189,
  anon_sym_SEMI = 190,
  sym_source_file = 191,
  sym__definition = 192,
  sym_comment = 193,
  sym_word_definition = 194,
  sym_number = 195,
  sym_builtin = 196,
  sym_core = 197,
  sym_operator = 198,
  sym_stack_effects = 199,
  sym_stack_effect_sep = 200,
  sym_start_definition = 201,
  sym_end_definition = 202,
  aux_sym_source_file_repeat1 = 203,
  aux_sym_word_definition_repeat1 = 204,
  aux_sym_stack_effects_repeat1 = 205,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_string] = "string",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_core_token1] = "core_token1",
  [aux_sym_core_token2] = "core_token2",
  [aux_sym_core_token3] = "core_token3",
  [aux_sym_core_token4] = "core_token4",
  [aux_sym_core_token5] = "core_token5",
  [aux_sym_core_token6] = "core_token6",
  [aux_sym_core_token7] = "core_token7",
  [aux_sym_core_token8] = "core_token8",
  [aux_sym_core_token9] = "core_token9",
  [aux_sym_core_token10] = "core_token10",
  [aux_sym_core_token11] = "core_token11",
  [aux_sym_core_token12] = "core_token12",
  [aux_sym_core_token13] = "core_token13",
  [aux_sym_core_token14] = "core_token14",
  [aux_sym_core_token15] = "core_token15",
  [aux_sym_core_token16] = "core_token16",
  [aux_sym_core_token17] = "core_token17",
  [aux_sym_core_token18] = "core_token18",
  [aux_sym_core_token19] = "core_token19",
  [aux_sym_core_token20] = "core_token20",
  [aux_sym_core_token21] = "core_token21",
  [aux_sym_core_token22] = "core_token22",
  [aux_sym_core_token23] = "core_token23",
  [aux_sym_core_token24] = "core_token24",
  [aux_sym_core_token25] = "core_token25",
  [aux_sym_core_token26] = "core_token26",
  [aux_sym_core_token27] = "core_token27",
  [aux_sym_core_token28] = "core_token28",
  [aux_sym_core_token29] = "core_token29",
  [aux_sym_core_token30] = "core_token30",
  [aux_sym_core_token31] = "core_token31",
  [aux_sym_core_token32] = "core_token32",
  [aux_sym_core_token33] = "core_token33",
  [aux_sym_core_token34] = "core_token34",
  [aux_sym_core_token35] = "core_token35",
  [aux_sym_core_token36] = "core_token36",
  [aux_sym_core_token37] = "core_token37",
  [aux_sym_core_token38] = "core_token38",
  [aux_sym_core_token39] = "core_token39",
  [aux_sym_core_token40] = "core_token40",
  [aux_sym_core_token41] = "core_token41",
  [aux_sym_core_token42] = "core_token42",
  [aux_sym_core_token43] = "core_token43",
  [aux_sym_core_token44] = "core_token44",
  [aux_sym_core_token45] = "core_token45",
  [aux_sym_core_token46] = "core_token46",
  [aux_sym_core_token47] = "core_token47",
  [aux_sym_core_token48] = "core_token48",
  [aux_sym_core_token49] = "core_token49",
  [aux_sym_core_token50] = "core_token50",
  [aux_sym_core_token51] = "core_token51",
  [aux_sym_core_token52] = "core_token52",
  [aux_sym_core_token53] = "core_token53",
  [aux_sym_core_token54] = "core_token54",
  [aux_sym_core_token55] = "core_token55",
  [aux_sym_core_token56] = "core_token56",
  [aux_sym_core_token57] = "core_token57",
  [aux_sym_core_token58] = "core_token58",
  [aux_sym_core_token59] = "core_token59",
  [aux_sym_core_token60] = "core_token60",
  [aux_sym_core_token61] = "core_token61",
  [aux_sym_core_token62] = "core_token62",
  [aux_sym_core_token63] = "core_token63",
  [aux_sym_core_token64] = "core_token64",
  [aux_sym_core_token65] = "core_token65",
  [aux_sym_core_token66] = "core_token66",
  [aux_sym_core_token67] = "core_token67",
  [aux_sym_core_token68] = "core_token68",
  [aux_sym_core_token69] = "core_token69",
  [aux_sym_core_token70] = "core_token70",
  [aux_sym_core_token71] = "core_token71",
  [aux_sym_core_token72] = "core_token72",
  [aux_sym_core_token73] = "core_token73",
  [aux_sym_core_token74] = "core_token74",
  [aux_sym_core_token75] = "core_token75",
  [aux_sym_core_token76] = "core_token76",
  [aux_sym_core_token77] = "core_token77",
  [aux_sym_core_token78] = "core_token78",
  [aux_sym_core_token79] = "core_token79",
  [aux_sym_core_token80] = "core_token80",
  [aux_sym_core_token81] = "core_token81",
  [aux_sym_core_token82] = "core_token82",
  [aux_sym_core_token83] = "core_token83",
  [aux_sym_core_token84] = "core_token84",
  [aux_sym_core_token85] = "core_token85",
  [aux_sym_core_token86] = "core_token86",
  [aux_sym_core_token87] = "core_token87",
  [aux_sym_core_token88] = "core_token88",
  [aux_sym_core_token89] = "core_token89",
  [aux_sym_core_token90] = "core_token90",
  [aux_sym_core_token91] = "core_token91",
  [aux_sym_core_token92] = "core_token92",
  [aux_sym_core_token93] = "core_token93",
  [aux_sym_core_token94] = "core_token94",
  [aux_sym_core_token95] = "core_token95",
  [aux_sym_core_token96] = "core_token96",
  [aux_sym_core_token97] = "core_token97",
  [aux_sym_core_token98] = "core_token98",
  [aux_sym_core_token99] = "core_token99",
  [aux_sym_core_token100] = "core_token100",
  [aux_sym_core_token101] = "core_token101",
  [aux_sym_core_token102] = "core_token102",
  [aux_sym_core_token103] = "core_token103",
  [aux_sym_core_token104] = "core_token104",
  [aux_sym_core_token105] = "core_token105",
  [aux_sym_core_token106] = "core_token106",
  [aux_sym_core_token107] = "core_token107",
  [aux_sym_core_token108] = "core_token108",
  [aux_sym_core_token109] = "core_token109",
  [aux_sym_core_token110] = "core_token110",
  [aux_sym_core_token111] = "core_token111",
  [aux_sym_core_token112] = "core_token112",
  [aux_sym_core_token113] = "core_token113",
  [aux_sym_core_token114] = "core_token114",
  [aux_sym_core_token115] = "core_token115",
  [aux_sym_core_token116] = "core_token116",
  [aux_sym_core_token117] = "core_token117",
  [aux_sym_core_token118] = "core_token118",
  [aux_sym_core_token119] = "core_token119",
  [aux_sym_core_token120] = "core_token120",
  [aux_sym_core_token121] = "core_token121",
  [aux_sym_core_token122] = "core_token122",
  [aux_sym_core_token123] = "core_token123",
  [aux_sym_core_token124] = "core_token124",
  [aux_sym_core_token125] = "core_token125",
  [aux_sym_core_token126] = "core_token126",
  [aux_sym_core_token127] = "core_token127",
  [aux_sym_core_token128] = "core_token128",
  [aux_sym_core_token129] = "core_token129",
  [aux_sym_core_token130] = "core_token130",
  [aux_sym_core_token131] = "core_token131",
  [aux_sym_core_token132] = "core_token132",
  [aux_sym_core_token133] = "core_token133",
  [aux_sym_core_token134] = "core_token134",
  [aux_sym_core_token135] = "core_token135",
  [aux_sym_core_token136] = "core_token136",
  [aux_sym_core_token137] = "core_token137",
  [aux_sym_core_token138] = "core_token138",
  [aux_sym_core_token139] = "core_token139",
  [aux_sym_core_token140] = "core_token140",
  [aux_sym_core_token141] = "core_token141",
  [aux_sym_core_token142] = "core_token142",
  [aux_sym_core_token143] = "core_token143",
  [aux_sym_core_token144] = "core_token144",
  [aux_sym_core_token145] = "core_token145",
  [aux_sym_core_token146] = "core_token146",
  [aux_sym_core_token147] = "core_token147",
  [aux_sym_core_token148] = "core_token148",
  [aux_sym_core_token149] = "core_token149",
  [aux_sym_core_token150] = "core_token150",
  [aux_sym_core_token151] = "core_token151",
  [aux_sym_core_token152] = "core_token152",
  [aux_sym_core_token153] = "core_token153",
  [aux_sym_core_token154] = "core_token154",
  [aux_sym_core_token155] = "core_token155",
  [aux_sym_core_token156] = "core_token156",
  [aux_sym_core_token157] = "core_token157",
  [aux_sym_core_token158] = "core_token158",
  [aux_sym_core_token159] = "core_token159",
  [aux_sym_core_token160] = "core_token160",
  [aux_sym_core_token161] = "core_token161",
  [aux_sym_core_token162] = "core_token162",
  [aux_sym_core_token163] = "core_token163",
  [aux_sym_core_token164] = "core_token164",
  [aux_sym_core_token165] = "core_token165",
  [aux_sym_core_token166] = "core_token166",
  [aux_sym_core_token167] = "core_token167",
  [aux_sym_core_token168] = "core_token168",
  [aux_sym_core_token169] = "core_token169",
  [aux_sym_core_token170] = "core_token170",
  [aux_sym_core_token171] = "core_token171",
  [aux_sym_core_token172] = "core_token172",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [sym_word] = "word",
  [sym_lparen] = "lparen",
  [sym_rparen] = "rparen",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_comment] = "comment",
  [sym_word_definition] = "word_definition",
  [sym_number] = "number",
  [sym_builtin] = "builtin",
  [sym_core] = "core",
  [sym_operator] = "operator",
  [sym_stack_effects] = "stack_effects",
  [sym_stack_effect_sep] = "stack_effect_sep",
  [sym_start_definition] = "start_definition",
  [sym_end_definition] = "end_definition",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_word_definition_repeat1] = "word_definition_repeat1",
  [aux_sym_stack_effects_repeat1] = "stack_effects_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_string] = sym_string,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_core_token1] = aux_sym_core_token1,
  [aux_sym_core_token2] = aux_sym_core_token2,
  [aux_sym_core_token3] = aux_sym_core_token3,
  [aux_sym_core_token4] = aux_sym_core_token4,
  [aux_sym_core_token5] = aux_sym_core_token5,
  [aux_sym_core_token6] = aux_sym_core_token6,
  [aux_sym_core_token7] = aux_sym_core_token7,
  [aux_sym_core_token8] = aux_sym_core_token8,
  [aux_sym_core_token9] = aux_sym_core_token9,
  [aux_sym_core_token10] = aux_sym_core_token10,
  [aux_sym_core_token11] = aux_sym_core_token11,
  [aux_sym_core_token12] = aux_sym_core_token12,
  [aux_sym_core_token13] = aux_sym_core_token13,
  [aux_sym_core_token14] = aux_sym_core_token14,
  [aux_sym_core_token15] = aux_sym_core_token15,
  [aux_sym_core_token16] = aux_sym_core_token16,
  [aux_sym_core_token17] = aux_sym_core_token17,
  [aux_sym_core_token18] = aux_sym_core_token18,
  [aux_sym_core_token19] = aux_sym_core_token19,
  [aux_sym_core_token20] = aux_sym_core_token20,
  [aux_sym_core_token21] = aux_sym_core_token21,
  [aux_sym_core_token22] = aux_sym_core_token22,
  [aux_sym_core_token23] = aux_sym_core_token23,
  [aux_sym_core_token24] = aux_sym_core_token24,
  [aux_sym_core_token25] = aux_sym_core_token25,
  [aux_sym_core_token26] = aux_sym_core_token26,
  [aux_sym_core_token27] = aux_sym_core_token27,
  [aux_sym_core_token28] = aux_sym_core_token28,
  [aux_sym_core_token29] = aux_sym_core_token29,
  [aux_sym_core_token30] = aux_sym_core_token30,
  [aux_sym_core_token31] = aux_sym_core_token31,
  [aux_sym_core_token32] = aux_sym_core_token32,
  [aux_sym_core_token33] = aux_sym_core_token33,
  [aux_sym_core_token34] = aux_sym_core_token34,
  [aux_sym_core_token35] = aux_sym_core_token35,
  [aux_sym_core_token36] = aux_sym_core_token36,
  [aux_sym_core_token37] = aux_sym_core_token37,
  [aux_sym_core_token38] = aux_sym_core_token38,
  [aux_sym_core_token39] = aux_sym_core_token39,
  [aux_sym_core_token40] = aux_sym_core_token40,
  [aux_sym_core_token41] = aux_sym_core_token41,
  [aux_sym_core_token42] = aux_sym_core_token42,
  [aux_sym_core_token43] = aux_sym_core_token43,
  [aux_sym_core_token44] = aux_sym_core_token44,
  [aux_sym_core_token45] = aux_sym_core_token45,
  [aux_sym_core_token46] = aux_sym_core_token46,
  [aux_sym_core_token47] = aux_sym_core_token47,
  [aux_sym_core_token48] = aux_sym_core_token48,
  [aux_sym_core_token49] = aux_sym_core_token49,
  [aux_sym_core_token50] = aux_sym_core_token50,
  [aux_sym_core_token51] = aux_sym_core_token51,
  [aux_sym_core_token52] = aux_sym_core_token52,
  [aux_sym_core_token53] = aux_sym_core_token53,
  [aux_sym_core_token54] = aux_sym_core_token54,
  [aux_sym_core_token55] = aux_sym_core_token55,
  [aux_sym_core_token56] = aux_sym_core_token56,
  [aux_sym_core_token57] = aux_sym_core_token57,
  [aux_sym_core_token58] = aux_sym_core_token58,
  [aux_sym_core_token59] = aux_sym_core_token59,
  [aux_sym_core_token60] = aux_sym_core_token60,
  [aux_sym_core_token61] = aux_sym_core_token61,
  [aux_sym_core_token62] = aux_sym_core_token62,
  [aux_sym_core_token63] = aux_sym_core_token63,
  [aux_sym_core_token64] = aux_sym_core_token64,
  [aux_sym_core_token65] = aux_sym_core_token65,
  [aux_sym_core_token66] = aux_sym_core_token66,
  [aux_sym_core_token67] = aux_sym_core_token67,
  [aux_sym_core_token68] = aux_sym_core_token68,
  [aux_sym_core_token69] = aux_sym_core_token69,
  [aux_sym_core_token70] = aux_sym_core_token70,
  [aux_sym_core_token71] = aux_sym_core_token71,
  [aux_sym_core_token72] = aux_sym_core_token72,
  [aux_sym_core_token73] = aux_sym_core_token73,
  [aux_sym_core_token74] = aux_sym_core_token74,
  [aux_sym_core_token75] = aux_sym_core_token75,
  [aux_sym_core_token76] = aux_sym_core_token76,
  [aux_sym_core_token77] = aux_sym_core_token77,
  [aux_sym_core_token78] = aux_sym_core_token78,
  [aux_sym_core_token79] = aux_sym_core_token79,
  [aux_sym_core_token80] = aux_sym_core_token80,
  [aux_sym_core_token81] = aux_sym_core_token81,
  [aux_sym_core_token82] = aux_sym_core_token82,
  [aux_sym_core_token83] = aux_sym_core_token83,
  [aux_sym_core_token84] = aux_sym_core_token84,
  [aux_sym_core_token85] = aux_sym_core_token85,
  [aux_sym_core_token86] = aux_sym_core_token86,
  [aux_sym_core_token87] = aux_sym_core_token87,
  [aux_sym_core_token88] = aux_sym_core_token88,
  [aux_sym_core_token89] = aux_sym_core_token89,
  [aux_sym_core_token90] = aux_sym_core_token90,
  [aux_sym_core_token91] = aux_sym_core_token91,
  [aux_sym_core_token92] = aux_sym_core_token92,
  [aux_sym_core_token93] = aux_sym_core_token93,
  [aux_sym_core_token94] = aux_sym_core_token94,
  [aux_sym_core_token95] = aux_sym_core_token95,
  [aux_sym_core_token96] = aux_sym_core_token96,
  [aux_sym_core_token97] = aux_sym_core_token97,
  [aux_sym_core_token98] = aux_sym_core_token98,
  [aux_sym_core_token99] = aux_sym_core_token99,
  [aux_sym_core_token100] = aux_sym_core_token100,
  [aux_sym_core_token101] = aux_sym_core_token101,
  [aux_sym_core_token102] = aux_sym_core_token102,
  [aux_sym_core_token103] = aux_sym_core_token103,
  [aux_sym_core_token104] = aux_sym_core_token104,
  [aux_sym_core_token105] = aux_sym_core_token105,
  [aux_sym_core_token106] = aux_sym_core_token106,
  [aux_sym_core_token107] = aux_sym_core_token107,
  [aux_sym_core_token108] = aux_sym_core_token108,
  [aux_sym_core_token109] = aux_sym_core_token109,
  [aux_sym_core_token110] = aux_sym_core_token110,
  [aux_sym_core_token111] = aux_sym_core_token111,
  [aux_sym_core_token112] = aux_sym_core_token112,
  [aux_sym_core_token113] = aux_sym_core_token113,
  [aux_sym_core_token114] = aux_sym_core_token114,
  [aux_sym_core_token115] = aux_sym_core_token115,
  [aux_sym_core_token116] = aux_sym_core_token116,
  [aux_sym_core_token117] = aux_sym_core_token117,
  [aux_sym_core_token118] = aux_sym_core_token118,
  [aux_sym_core_token119] = aux_sym_core_token119,
  [aux_sym_core_token120] = aux_sym_core_token120,
  [aux_sym_core_token121] = aux_sym_core_token121,
  [aux_sym_core_token122] = aux_sym_core_token122,
  [aux_sym_core_token123] = aux_sym_core_token123,
  [aux_sym_core_token124] = aux_sym_core_token124,
  [aux_sym_core_token125] = aux_sym_core_token125,
  [aux_sym_core_token126] = aux_sym_core_token126,
  [aux_sym_core_token127] = aux_sym_core_token127,
  [aux_sym_core_token128] = aux_sym_core_token128,
  [aux_sym_core_token129] = aux_sym_core_token129,
  [aux_sym_core_token130] = aux_sym_core_token130,
  [aux_sym_core_token131] = aux_sym_core_token131,
  [aux_sym_core_token132] = aux_sym_core_token132,
  [aux_sym_core_token133] = aux_sym_core_token133,
  [aux_sym_core_token134] = aux_sym_core_token134,
  [aux_sym_core_token135] = aux_sym_core_token135,
  [aux_sym_core_token136] = aux_sym_core_token136,
  [aux_sym_core_token137] = aux_sym_core_token137,
  [aux_sym_core_token138] = aux_sym_core_token138,
  [aux_sym_core_token139] = aux_sym_core_token139,
  [aux_sym_core_token140] = aux_sym_core_token140,
  [aux_sym_core_token141] = aux_sym_core_token141,
  [aux_sym_core_token142] = aux_sym_core_token142,
  [aux_sym_core_token143] = aux_sym_core_token143,
  [aux_sym_core_token144] = aux_sym_core_token144,
  [aux_sym_core_token145] = aux_sym_core_token145,
  [aux_sym_core_token146] = aux_sym_core_token146,
  [aux_sym_core_token147] = aux_sym_core_token147,
  [aux_sym_core_token148] = aux_sym_core_token148,
  [aux_sym_core_token149] = aux_sym_core_token149,
  [aux_sym_core_token150] = aux_sym_core_token150,
  [aux_sym_core_token151] = aux_sym_core_token151,
  [aux_sym_core_token152] = aux_sym_core_token152,
  [aux_sym_core_token153] = aux_sym_core_token153,
  [aux_sym_core_token154] = aux_sym_core_token154,
  [aux_sym_core_token155] = aux_sym_core_token155,
  [aux_sym_core_token156] = aux_sym_core_token156,
  [aux_sym_core_token157] = aux_sym_core_token157,
  [aux_sym_core_token158] = aux_sym_core_token158,
  [aux_sym_core_token159] = aux_sym_core_token159,
  [aux_sym_core_token160] = aux_sym_core_token160,
  [aux_sym_core_token161] = aux_sym_core_token161,
  [aux_sym_core_token162] = aux_sym_core_token162,
  [aux_sym_core_token163] = aux_sym_core_token163,
  [aux_sym_core_token164] = aux_sym_core_token164,
  [aux_sym_core_token165] = aux_sym_core_token165,
  [aux_sym_core_token166] = aux_sym_core_token166,
  [aux_sym_core_token167] = aux_sym_core_token167,
  [aux_sym_core_token168] = aux_sym_core_token168,
  [aux_sym_core_token169] = aux_sym_core_token169,
  [aux_sym_core_token170] = aux_sym_core_token170,
  [aux_sym_core_token171] = aux_sym_core_token171,
  [aux_sym_core_token172] = aux_sym_core_token172,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [sym_word] = sym_word,
  [sym_lparen] = sym_lparen,
  [sym_rparen] = sym_rparen,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_comment] = sym_comment,
  [sym_word_definition] = sym_word_definition,
  [sym_number] = sym_number,
  [sym_builtin] = sym_builtin,
  [sym_core] = sym_core,
  [sym_operator] = sym_operator,
  [sym_stack_effects] = sym_stack_effects,
  [sym_stack_effect_sep] = sym_stack_effect_sep,
  [sym_start_definition] = sym_start_definition,
  [sym_end_definition] = sym_end_definition,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_word_definition_repeat1] = aux_sym_word_definition_repeat1,
  [aux_sym_stack_effects_repeat1] = aux_sym_stack_effects_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token38] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token39] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token40] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token41] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token42] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token43] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token44] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token45] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token46] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token47] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token48] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token49] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token50] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token51] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token52] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token53] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token54] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token55] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token56] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token57] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token58] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token59] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token60] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token61] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token62] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token63] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token64] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token65] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token66] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token67] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token68] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token69] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token70] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token71] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token72] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token73] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token74] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token75] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token76] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token77] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token78] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token79] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token80] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token81] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token82] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token83] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token84] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token85] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token86] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token87] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token88] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token89] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token90] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token91] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token92] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token93] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token94] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token95] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token96] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token97] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token98] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token99] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token100] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token101] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token102] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token103] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token104] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token105] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token106] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token107] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token108] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token109] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token110] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token111] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token112] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token113] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token114] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token115] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token116] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token117] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token118] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token119] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token120] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token121] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token122] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token123] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token124] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token125] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token126] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token127] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token128] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token129] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token130] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token131] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token132] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token133] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token134] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token135] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token136] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token137] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token138] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token139] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token140] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token141] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token142] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token143] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token144] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token145] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token146] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token147] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token148] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token149] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token150] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token151] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token152] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token153] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token154] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token155] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token156] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token157] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token158] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token159] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token160] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token161] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token162] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token163] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token164] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token165] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token166] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token167] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token168] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token169] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token170] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token171] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_token172] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_lparen] = {
    .visible = true,
    .named = true,
  },
  [sym_rparen] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_word_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_core] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_effects] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_effect_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_start_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_end_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stack_effects_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 10,
  [18] = 11,
  [19] = 15,
  [20] = 12,
  [21] = 9,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 27,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '!') ADVANCE(391);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '#') ADVANCE(393);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%') ADVANCE(1259);
      if (lookahead == '&') ADVANCE(1260);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(575);
      if (lookahead == ')') ADVANCE(1262);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(378);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == ':') ADVANCE(1265);
      if (lookahead == ';') ADVANCE(1266);
      if (lookahead == '<') ADVANCE(389);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead == '>') ADVANCE(387);
      if (lookahead == '?') ADVANCE(647);
      if (lookahead == '@') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == 'F') ADVANCE(610);
      if (lookahead == 'H') ADVANCE(667);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'J') ADVANCE(399);
      if (lookahead == 'K') ADVANCE(668);
      if (lookahead == 'L') ADVANCE(678);
      if (lookahead == 'M') ADVANCE(578);
      if (lookahead == 'N') ADVANCE(672);
      if (lookahead == 'O') ADVANCE(720);
      if (lookahead == 'P') ADVANCE(608);
      if (lookahead == 'Q') ADVANCE(924);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(731);
      if (lookahead == 'U') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(609);
      if (lookahead == 'W') ADVANCE(730);
      if (lookahead == 'X') ADVANCE(821);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(390);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '!') ADVANCE(391);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '#') ADVANCE(393);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%') ADVANCE(1259);
      if (lookahead == '&') ADVANCE(1260);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(575);
      if (lookahead == ')') ADVANCE(1262);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(378);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == ':') ADVANCE(1265);
      if (lookahead == ';') ADVANCE(1266);
      if (lookahead == '<') ADVANCE(389);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead == '>') ADVANCE(387);
      if (lookahead == '?') ADVANCE(647);
      if (lookahead == '@') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == 'F') ADVANCE(610);
      if (lookahead == 'H') ADVANCE(667);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'J') ADVANCE(399);
      if (lookahead == 'K') ADVANCE(668);
      if (lookahead == 'L') ADVANCE(678);
      if (lookahead == 'M') ADVANCE(578);
      if (lookahead == 'N') ADVANCE(672);
      if (lookahead == 'O') ADVANCE(720);
      if (lookahead == 'P') ADVANCE(608);
      if (lookahead == 'Q') ADVANCE(924);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(731);
      if (lookahead == 'U') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(609);
      if (lookahead == 'W') ADVANCE(730);
      if (lookahead == 'X') ADVANCE(821);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(390);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(3);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%') ADVANCE(1259);
      if (lookahead == '&') ADVANCE(1260);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(575);
      if (lookahead == ')') ADVANCE(1262);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead == '+') ADVANCE(377);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == ':') ADVANCE(1264);
      if (lookahead == ';') ADVANCE(1266);
      if (lookahead == '<') ADVANCE(388);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead == '>') ADVANCE(386);
      if (lookahead == '?') ADVANCE(646);
      if (lookahead == '@') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == 'F') ADVANCE(610);
      if (lookahead == 'H') ADVANCE(667);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'J') ADVANCE(399);
      if (lookahead == 'K') ADVANCE(668);
      if (lookahead == 'L') ADVANCE(678);
      if (lookahead == 'M') ADVANCE(578);
      if (lookahead == 'N') ADVANCE(672);
      if (lookahead == 'O') ADVANCE(720);
      if (lookahead == 'P') ADVANCE(608);
      if (lookahead == 'Q') ADVANCE(924);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(731);
      if (lookahead == 'U') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(609);
      if (lookahead == 'W') ADVANCE(730);
      if (lookahead == 'X') ADVANCE(821);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(390);
      if (lookahead == 'a') ADVANCE(965);
      if (lookahead == 'b') ADVANCE(939);
      if (lookahead == 'c') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'e') ADVANCE(1110);
      if (lookahead == 'f') ADVANCE(942);
      if (lookahead == 'h') ADVANCE(997);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'j') ADVANCE(184);
      if (lookahead == 'k') ADVANCE(998);
      if (lookahead == 'l') ADVANCE(1033);
      if (lookahead == 'm') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(1027);
      if (lookahead == 'o') ADVANCE(1049);
      if (lookahead == 'p') ADVANCE(940);
      if (lookahead == 'q') ADVANCE(1250);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == 't') ADVANCE(1062);
      if (lookahead == 'u') ADVANCE(592);
      if (lookahead == 'v') ADVANCE(941);
      if (lookahead == 'w') ADVANCE(1061);
      if (lookahead == 'x') ADVANCE(1143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '!') ADVANCE(391);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '#') ADVANCE(393);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%') ADVANCE(1259);
      if (lookahead == '&') ADVANCE(1260);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(575);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(378);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == ':') ADVANCE(1265);
      if (lookahead == '<') ADVANCE(389);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead == '>') ADVANCE(387);
      if (lookahead == '?') ADVANCE(647);
      if (lookahead == '@') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == 'F') ADVANCE(610);
      if (lookahead == 'H') ADVANCE(667);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'J') ADVANCE(399);
      if (lookahead == 'K') ADVANCE(668);
      if (lookahead == 'L') ADVANCE(678);
      if (lookahead == 'M') ADVANCE(578);
      if (lookahead == 'N') ADVANCE(672);
      if (lookahead == 'O') ADVANCE(720);
      if (lookahead == 'P') ADVANCE(608);
      if (lookahead == 'Q') ADVANCE(924);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(731);
      if (lookahead == 'U') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(609);
      if (lookahead == 'W') ADVANCE(730);
      if (lookahead == 'X') ADVANCE(821);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(390);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%') ADVANCE(1259);
      if (lookahead == '&') ADVANCE(1260);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(575);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead == '+') ADVANCE(377);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == ':') ADVANCE(1264);
      if (lookahead == '<') ADVANCE(388);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead == '>') ADVANCE(386);
      if (lookahead == '?') ADVANCE(646);
      if (lookahead == '@') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == 'F') ADVANCE(610);
      if (lookahead == 'H') ADVANCE(667);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'J') ADVANCE(399);
      if (lookahead == 'K') ADVANCE(668);
      if (lookahead == 'L') ADVANCE(678);
      if (lookahead == 'M') ADVANCE(578);
      if (lookahead == 'N') ADVANCE(672);
      if (lookahead == 'O') ADVANCE(720);
      if (lookahead == 'P') ADVANCE(608);
      if (lookahead == 'Q') ADVANCE(924);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(731);
      if (lookahead == 'U') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(609);
      if (lookahead == 'W') ADVANCE(730);
      if (lookahead == 'X') ADVANCE(821);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(390);
      if (lookahead == 'a') ADVANCE(965);
      if (lookahead == 'b') ADVANCE(939);
      if (lookahead == 'c') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'e') ADVANCE(1110);
      if (lookahead == 'f') ADVANCE(942);
      if (lookahead == 'h') ADVANCE(997);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'j') ADVANCE(184);
      if (lookahead == 'k') ADVANCE(998);
      if (lookahead == 'l') ADVANCE(1033);
      if (lookahead == 'm') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(1027);
      if (lookahead == 'o') ADVANCE(1049);
      if (lookahead == 'p') ADVANCE(940);
      if (lookahead == 'q') ADVANCE(1250);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == 't') ADVANCE(1062);
      if (lookahead == 'u') ADVANCE(592);
      if (lookahead == 'v') ADVANCE(941);
      if (lookahead == 'w') ADVANCE(1061);
      if (lookahead == 'x') ADVANCE(1143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '!') ADVANCE(391);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '#') ADVANCE(393);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%') ADVANCE(1259);
      if (lookahead == '&') ADVANCE(1260);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(575);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(378);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == ':') ADVANCE(797);
      if (lookahead == ';') ADVANCE(1266);
      if (lookahead == '<') ADVANCE(389);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead == '>') ADVANCE(387);
      if (lookahead == '?') ADVANCE(647);
      if (lookahead == '@') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == 'F') ADVANCE(610);
      if (lookahead == 'H') ADVANCE(667);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'J') ADVANCE(399);
      if (lookahead == 'K') ADVANCE(668);
      if (lookahead == 'L') ADVANCE(678);
      if (lookahead == 'M') ADVANCE(578);
      if (lookahead == 'N') ADVANCE(672);
      if (lookahead == 'O') ADVANCE(720);
      if (lookahead == 'P') ADVANCE(608);
      if (lookahead == 'Q') ADVANCE(924);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(731);
      if (lookahead == 'U') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(609);
      if (lookahead == 'W') ADVANCE(730);
      if (lookahead == 'X') ADVANCE(821);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%') ADVANCE(1259);
      if (lookahead == '&') ADVANCE(1260);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(575);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead == '+') ADVANCE(377);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == ':') ADVANCE(796);
      if (lookahead == ';') ADVANCE(1266);
      if (lookahead == '<') ADVANCE(388);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead == '>') ADVANCE(386);
      if (lookahead == '?') ADVANCE(646);
      if (lookahead == '@') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == 'F') ADVANCE(610);
      if (lookahead == 'H') ADVANCE(667);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'J') ADVANCE(399);
      if (lookahead == 'K') ADVANCE(668);
      if (lookahead == 'L') ADVANCE(678);
      if (lookahead == 'M') ADVANCE(578);
      if (lookahead == 'N') ADVANCE(672);
      if (lookahead == 'O') ADVANCE(720);
      if (lookahead == 'P') ADVANCE(608);
      if (lookahead == 'Q') ADVANCE(924);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(731);
      if (lookahead == 'U') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(609);
      if (lookahead == 'W') ADVANCE(730);
      if (lookahead == 'X') ADVANCE(821);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(390);
      if (lookahead == 'a') ADVANCE(965);
      if (lookahead == 'b') ADVANCE(939);
      if (lookahead == 'c') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'e') ADVANCE(1110);
      if (lookahead == 'f') ADVANCE(942);
      if (lookahead == 'h') ADVANCE(997);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'j') ADVANCE(184);
      if (lookahead == 'k') ADVANCE(998);
      if (lookahead == 'l') ADVANCE(1033);
      if (lookahead == 'm') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(1027);
      if (lookahead == 'o') ADVANCE(1049);
      if (lookahead == 'p') ADVANCE(940);
      if (lookahead == 'q') ADVANCE(1250);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 't') ADVANCE(1062);
      if (lookahead == 'u') ADVANCE(592);
      if (lookahead == 'v') ADVANCE(941);
      if (lookahead == 'w') ADVANCE(1061);
      if (lookahead == 'x') ADVANCE(1143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '!') ADVANCE(391);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '#') ADVANCE(393);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%') ADVANCE(1259);
      if (lookahead == '&') ADVANCE(1260);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(575);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(378);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == ':') ADVANCE(797);
      if (lookahead == '<') ADVANCE(389);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead == '>') ADVANCE(387);
      if (lookahead == '?') ADVANCE(647);
      if (lookahead == '@') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == 'F') ADVANCE(610);
      if (lookahead == 'H') ADVANCE(667);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'J') ADVANCE(399);
      if (lookahead == 'K') ADVANCE(668);
      if (lookahead == 'L') ADVANCE(678);
      if (lookahead == 'M') ADVANCE(578);
      if (lookahead == 'N') ADVANCE(672);
      if (lookahead == 'O') ADVANCE(720);
      if (lookahead == 'P') ADVANCE(608);
      if (lookahead == 'Q') ADVANCE(924);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(731);
      if (lookahead == 'U') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(609);
      if (lookahead == 'W') ADVANCE(730);
      if (lookahead == 'X') ADVANCE(821);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(390);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '!') ADVANCE(34);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%') ADVANCE(1259);
      if (lookahead == '&') ADVANCE(1260);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '(') ADVANCE(575);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead == '+') ADVANCE(377);
      if (lookahead == ',') ADVANCE(50);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(52);
      if (lookahead == '/') ADVANCE(380);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == ':') ADVANCE(796);
      if (lookahead == '<') ADVANCE(388);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead == '>') ADVANCE(386);
      if (lookahead == '?') ADVANCE(646);
      if (lookahead == '@') ADVANCE(94);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == 'F') ADVANCE(610);
      if (lookahead == 'H') ADVANCE(667);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'J') ADVANCE(399);
      if (lookahead == 'K') ADVANCE(668);
      if (lookahead == 'L') ADVANCE(678);
      if (lookahead == 'M') ADVANCE(578);
      if (lookahead == 'N') ADVANCE(672);
      if (lookahead == 'O') ADVANCE(720);
      if (lookahead == 'P') ADVANCE(608);
      if (lookahead == 'Q') ADVANCE(924);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(731);
      if (lookahead == 'U') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(609);
      if (lookahead == 'W') ADVANCE(730);
      if (lookahead == 'X') ADVANCE(821);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '\\') ADVANCE(390);
      if (lookahead == 'a') ADVANCE(965);
      if (lookahead == 'b') ADVANCE(939);
      if (lookahead == 'c') ADVANCE(564);
      if (lookahead == 'd') ADVANCE(996);
      if (lookahead == 'e') ADVANCE(1110);
      if (lookahead == 'f') ADVANCE(942);
      if (lookahead == 'h') ADVANCE(997);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'j') ADVANCE(184);
      if (lookahead == 'k') ADVANCE(998);
      if (lookahead == 'l') ADVANCE(1033);
      if (lookahead == 'm') ADVANCE(576);
      if (lookahead == 'n') ADVANCE(1027);
      if (lookahead == 'o') ADVANCE(1049);
      if (lookahead == 'p') ADVANCE(940);
      if (lookahead == 'q') ADVANCE(1250);
      if (lookahead == 'r') ADVANCE(599);
      if (lookahead == 's') ADVANCE(569);
      if (lookahead == 't') ADVANCE(1062);
      if (lookahead == 'u') ADVANCE(592);
      if (lookahead == 'v') ADVANCE(941);
      if (lookahead == 'w') ADVANCE(1061);
      if (lookahead == 'x') ADVANCE(1143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(1262);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(584);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == ' ') ADVANCE(6);
      if (lookahead == '!') ADVANCE(391);
      if (lookahead == '"') ADVANCE(392);
      if (lookahead == '#') ADVANCE(393);
      if (lookahead == '$') ADVANCE(1261);
      if (lookahead == '%') ADVANCE(1259);
      if (lookahead == '&') ADVANCE(1260);
      if (lookahead == '\'') ADVANCE(394);
      if (lookahead == '(') ADVANCE(575);
      if (lookahead == '*') ADVANCE(382);
      if (lookahead == '+') ADVANCE(378);
      if (lookahead == ',') ADVANCE(395);
      if (lookahead == '-') ADVANCE(379);
      if (lookahead == '.') ADVANCE(396);
      if (lookahead == '/') ADVANCE(381);
      if (lookahead == '0') ADVANCE(25);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '2') ADVANCE(22);
      if (lookahead == ':') ADVANCE(1265);
      if (lookahead == '<') ADVANCE(389);
      if (lookahead == '=') ADVANCE(376);
      if (lookahead == '>') ADVANCE(387);
      if (lookahead == '?') ADVANCE(647);
      if (lookahead == '@') ADVANCE(397);
      if (lookahead == 'A') ADVANCE(633);
      if (lookahead == 'B') ADVANCE(607);
      if (lookahead == 'C') ADVANCE(565);
      if (lookahead == 'D') ADVANCE(666);
      if (lookahead == 'E') ADVANCE(780);
      if (lookahead == 'F') ADVANCE(610);
      if (lookahead == 'H') ADVANCE(667);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'J') ADVANCE(399);
      if (lookahead == 'K') ADVANCE(668);
      if (lookahead == 'L') ADVANCE(678);
      if (lookahead == 'M') ADVANCE(578);
      if (lookahead == 'N') ADVANCE(672);
      if (lookahead == 'O') ADVANCE(720);
      if (lookahead == 'P') ADVANCE(608);
      if (lookahead == 'Q') ADVANCE(924);
      if (lookahead == 'R') ADVANCE(602);
      if (lookahead == 'S') ADVANCE(570);
      if (lookahead == 'T') ADVANCE(731);
      if (lookahead == 'U') ADVANCE(591);
      if (lookahead == 'V') ADVANCE(609);
      if (lookahead == 'W') ADVANCE(730);
      if (lookahead == 'X') ADVANCE(821);
      if (lookahead == '[') ADVANCE(400);
      if (lookahead == '\\') ADVANCE(390);
      if (lookahead == 's') ADVANCE(571);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(1262);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(575);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '>') ADVANCE(861);
      if (lookahead == '@') ADVANCE(72);
      if (lookahead == 'D') ADVANCE(874);
      if (lookahead == 'O') ADVANCE(929);
      if (lookahead == 'R') ADVANCE(603);
      if (lookahead == 'S') ADVANCE(930);
      if (lookahead == 'd') ADVANCE(1200);
      if (lookahead == 'o') ADVANCE(1255);
      if (lookahead == 'r') ADVANCE(600);
      if (lookahead == 's') ADVANCE(1256);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '!') ADVANCE(412);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead == '/') ADVANCE(414);
      if (lookahead == '>') ADVANCE(862);
      if (lookahead == '@') ADVANCE(415);
      if (lookahead == 'D') ADVANCE(874);
      if (lookahead == 'O') ADVANCE(929);
      if (lookahead == 'R') ADVANCE(603);
      if (lookahead == 'S') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(62);
      if (lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '+') ADVANCE(410);
      if (lookahead == '-') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '<') ADVANCE(407);
      if (lookahead == '=') ADVANCE(408);
      if (lookahead == '>') ADVANCE(409);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(60);
      if (lookahead == '>') ADVANCE(285);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_core_token1);
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_core_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_core_token2);
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_core_token2);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_core_token3);
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_core_token3);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(402);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_core_token4);
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_core_token4);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_core_token5);
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_core_token5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_core_token6);
      if (lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_core_token6);
      if (lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_core_token7);
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_core_token7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_core_token8);
      if (lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_core_token8);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_core_token9);
      if (lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_core_token9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_core_token10);
      if (lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_core_token10);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_core_token11);
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_core_token11);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '(') ADVANCE(567);
      if (lookahead == 'R') ADVANCE(405);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_core_token12);
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_core_token12);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_core_token13);
      if (lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_core_token13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_core_token14);
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_core_token14);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '>') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_core_token15);
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_core_token15);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_core_token16);
      if (lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_core_token16);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_core_token17);
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_core_token17);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_core_token18);
      if (lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_core_token18);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_core_token19);
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_core_token19);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_core_token20);
      if (lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_core_token20);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_core_token21);
      if (lookahead == ' ') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_core_token21);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_core_token22);
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_core_token22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_core_token23);
      if (lookahead == ' ') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_core_token23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_core_token24);
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_core_token24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_core_token25);
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_core_token25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_core_token26);
      if (lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_core_token26);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_core_token27);
      if (lookahead == ' ') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_core_token27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_core_token28);
      if (lookahead == ' ') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_core_token28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_core_token29);
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_core_token29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_core_token30);
      if (lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_core_token30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_core_token31);
      if (lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_core_token31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_core_token32);
      if (lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_core_token32);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_core_token33);
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_core_token33);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_core_token34);
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_core_token34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_core_token35);
      if (lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_core_token35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_core_token36);
      if (lookahead == ' ') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_core_token36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_core_token37);
      if (lookahead == ' ') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_core_token37);
      if (lookahead == 'e') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_core_token38);
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_core_token38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_core_token39);
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_core_token39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_core_token40);
      if (lookahead == ' ') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_core_token40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_core_token41);
      if (lookahead == ' ') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_core_token41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_core_token42);
      if (lookahead == ' ') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_core_token42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_core_token43);
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_core_token43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_core_token44);
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_core_token44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_core_token45);
      if (lookahead == ' ') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_core_token45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_core_token46);
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_core_token46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_core_token47);
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_core_token47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_core_token48);
      if (lookahead == ' ') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_core_token48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_core_token49);
      if (lookahead == ' ') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_core_token49);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_core_token50);
      if (lookahead == ' ') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_core_token50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_core_token51);
      if (lookahead == ' ') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_core_token51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_core_token52);
      if (lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_core_token52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_core_token53);
      if (lookahead == ' ') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_core_token53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_core_token54);
      if (lookahead == ' ') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_core_token54);
      if (lookahead == 'e') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_core_token55);
      if (lookahead == ' ') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_core_token55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_core_token56);
      if (lookahead == ' ') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_core_token56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_core_token57);
      if (lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_core_token57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_core_token58);
      if (lookahead == ' ') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_core_token58);
      if (lookahead == 'e') ADVANCE(1203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_core_token59);
      if (lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_core_token59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_core_token60);
      if (lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_core_token60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_core_token61);
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_core_token61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_core_token62);
      if (lookahead == ' ') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_core_token62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_core_token63);
      if (lookahead == ' ') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_core_token63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_core_token64);
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_core_token64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_core_token65);
      if (lookahead == ' ') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_core_token65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_core_token66);
      if (lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_core_token66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_core_token67);
      if (lookahead == ' ') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_core_token67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_core_token68);
      if (lookahead == ' ') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_core_token68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_core_token69);
      if (lookahead == ' ') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_core_token69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_core_token70);
      if (lookahead == ' ') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_core_token70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_core_token71);
      if (lookahead == ' ') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_core_token71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_core_token72);
      if (lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_core_token72);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_core_token73);
      if (lookahead == ' ') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_core_token73);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'm') ADVANCE(1116);
      if (lookahead == 'n') ADVANCE(973);
      if (lookahead == 's') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_core_token74);
      if (lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_core_token74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_core_token75);
      if (lookahead == ' ') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_core_token75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_core_token76);
      if (lookahead == ' ') ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_core_token76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_core_token77);
      if (lookahead == ' ') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_core_token77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_core_token78);
      if (lookahead == ' ') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_core_token78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_core_token79);
      if (lookahead == ' ') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_core_token79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_core_token80);
      if (lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_core_token80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_core_token81);
      if (lookahead == ' ') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_core_token81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_core_token82);
      if (lookahead == ' ') ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_core_token82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_core_token83);
      if (lookahead == ' ') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_core_token83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_core_token84);
      if (lookahead == ' ') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_core_token84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_core_token85);
      if (lookahead == ' ') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_core_token85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_core_token86);
      if (lookahead == ' ') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_core_token86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_core_token87);
      if (lookahead == ' ') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_core_token87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_core_token88);
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_core_token88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_core_token89);
      if (lookahead == ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_core_token89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_core_token90);
      if (lookahead == ' ') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_core_token90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_core_token91);
      if (lookahead == ' ') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_core_token91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_core_token92);
      if (lookahead == ' ') ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_core_token92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_core_token93);
      if (lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_core_token93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_core_token94);
      if (lookahead == ' ') ADVANCE(217);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_core_token94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_core_token95);
      if (lookahead == ' ') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_core_token95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_core_token96);
      if (lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_core_token96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_core_token97);
      if (lookahead == ' ') ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_core_token97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_core_token98);
      if (lookahead == ' ') ADVANCE(225);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_core_token98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_core_token99);
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_core_token99);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_core_token99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_core_token100);
      if (lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_core_token100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_core_token101);
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_core_token101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_core_token102);
      if (lookahead == ' ') ADVANCE(234);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_core_token102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_core_token103);
      if (lookahead == ' ') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_core_token103);
      if (lookahead == '-') ADVANCE(1080);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_core_token104);
      if (lookahead == ' ') ADVANCE(238);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_core_token104);
      if (lookahead == 's') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_core_token105);
      if (lookahead == ' ') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_core_token105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_core_token106);
      if (lookahead == ' ') ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_core_token106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_core_token107);
      if (lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_core_token107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_core_token108);
      if (lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_core_token108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_core_token109);
      if (lookahead == ' ') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_core_token109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_core_token110);
      if (lookahead == ' ') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_core_token110);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_core_token111);
      if (lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_core_token111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_core_token112);
      if (lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_core_token112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_core_token113);
      if (lookahead == ' ') ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_core_token113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_core_token114);
      if (lookahead == ' ') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_core_token114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_core_token115);
      if (lookahead == ' ') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_core_token115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_core_token116);
      if (lookahead == ' ') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_core_token116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_core_token117);
      if (lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_core_token117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_core_token118);
      if (lookahead == ' ') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_core_token118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_core_token119);
      if (lookahead == ' ') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_core_token119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_core_token120);
      if (lookahead == ' ') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_core_token120);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(933);
      if (lookahead == 'C') ADVANCE(734);
      if (lookahead == 'c') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_core_token121);
      if (lookahead == ' ') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_core_token121);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_core_token122);
      if (lookahead == ' ') ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_core_token122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_core_token123);
      if (lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_core_token123);
      if (lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_core_token124);
      if (lookahead == ' ') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_core_token124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_core_token125);
      if (lookahead == ' ') ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_core_token125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_core_token126);
      if (lookahead == ' ') ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_core_token126);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_core_token127);
      if (lookahead == ' ') ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_core_token127);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_core_token128);
      if (lookahead == ' ') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_core_token128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_core_token129);
      if (lookahead == ' ') ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_core_token129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_core_token130);
      if (lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_core_token130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_core_token131);
      if (lookahead == ' ') ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_core_token131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_core_token132);
      if (lookahead == ' ') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_core_token132);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_core_token133);
      if (lookahead == ' ') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_core_token133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_core_token134);
      if (lookahead == ' ') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_core_token134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_core_token135);
      if (lookahead == ' ') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_core_token135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_core_token136);
      if (lookahead == ' ') ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_core_token136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_core_token137);
      if (lookahead == ' ') ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_core_token137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_core_token138);
      if (lookahead == ' ') ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_core_token138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_core_token139);
      if (lookahead == ' ') ADVANCE(308);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_core_token139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_core_token140);
      if (lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_core_token140);
      if (lookahead == '!') ADVANCE(313);
      if (lookahead == '@') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_core_token141);
      if (lookahead == ' ') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_core_token141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_core_token142);
      if (lookahead == ' ') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_core_token142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_core_token143);
      if (lookahead == ' ') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_core_token143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_core_token144);
      if (lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_core_token144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_core_token145);
      if (lookahead == ' ') ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_core_token145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_core_token146);
      if (lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_core_token146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_core_token147);
      if (lookahead == ' ') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_core_token147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_core_token148);
      if (lookahead == ' ') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_core_token148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_core_token149);
      if (lookahead == ' ') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_core_token149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_core_token150);
      if (lookahead == ' ') ADVANCE(330);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_core_token150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_core_token151);
      if (lookahead == ' ') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_core_token151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_core_token152);
      if (lookahead == ' ') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_core_token152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_core_token153);
      if (lookahead == ' ') ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_core_token153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_core_token154);
      if (lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_core_token154);
      if (lookahead == '-') ADVANCE(1141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_core_token155);
      if (lookahead == ' ') ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_core_token155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_core_token156);
      if (lookahead == ' ') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_core_token156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_core_token157);
      if (lookahead == ' ') ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_core_token157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_core_token158);
      if (lookahead == ' ') ADVANCE(346);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_core_token158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_core_token159);
      if (lookahead == ' ') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_core_token159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_core_token160);
      if (lookahead == ' ') ADVANCE(350);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_core_token160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_core_token161);
      if (lookahead == ' ') ADVANCE(352);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_core_token161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_core_token162);
      if (lookahead == ' ') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_core_token162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_core_token163);
      if (lookahead == ' ') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_core_token163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_core_token164);
      if (lookahead == ' ') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_core_token164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_core_token165);
      if (lookahead == ' ') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_core_token165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_core_token166);
      if (lookahead == ' ') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_core_token166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_core_token167);
      if (lookahead == ' ') ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_core_token167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_core_token168);
      if (lookahead == ' ') ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_core_token168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_core_token169);
      if (lookahead == ' ') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_core_token169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_core_token170);
      if (lookahead == ' ') ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_core_token170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_core_token171);
      if (lookahead == ' ') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_core_token171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_core_token172);
      if (lookahead == ' ') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_core_token172);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '!') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(834);
      if (lookahead == 'l') ADVANCE(1162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '!') ADVANCE(403);
      if (lookahead == 'L') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == 'M') ADVANCE(824);
      if (lookahead == 'm') ADVANCE(1145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == 'M') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead == 'M') ADVANCE(828);
      if (lookahead == 'm') ADVANCE(1150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead == 'M') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == 'B') ADVANCE(815);
      if (lookahead == 'I') ADVANCE(801);
      if (lookahead == 'N') ADVANCE(916);
      if (lookahead == 'R') ADVANCE(418);
      if (lookahead == 'b') ADVANCE(1147);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'n') ADVANCE(1242);
      if (lookahead == 'r') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == 'B') ADVANCE(815);
      if (lookahead == 'I') ADVANCE(801);
      if (lookahead == 'N') ADVANCE(916);
      if (lookahead == 'R') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '>') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '#') ADVANCE(416);
      if (lookahead == '>') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '>') ADVANCE(401);
      if (lookahead == 'S') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '"') ADVANCE(404);
      if (lookahead == '(') ADVANCE(572);
      if (lookahead == 'R') ADVANCE(405);
      if (lookahead == 'S') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(175);
      if (lookahead == 'F') ADVANCE(426);
      if (lookahead == 'M') ADVANCE(785);
      if (lookahead == 'N') ADVANCE(640);
      if (lookahead == 'S') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(936);
      if (lookahead == 'C') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '>') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead == 'E') ADVANCE(877);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == 'R') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(127);
      if (lookahead == '+') ADVANCE(503);
      if (lookahead == 'S') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(173);
      if (lookahead == 'S') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '"') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(103);
      if (lookahead == 'E') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(310);
      if (lookahead == '!') ADVANCE(523);
      if (lookahead == '@') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(338);
      if (lookahead == '-') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(238);
      if (lookahead == 'S') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(236);
      if (lookahead == '-') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ' ') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(1262);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(118);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(1205);
      if (lookahead == 'e') ADVANCE(1098);
      if (lookahead == 'h') ADVANCE(946);
      if (lookahead == 'o') ADVANCE(1115);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(420);
      if (lookahead == '"') ADVANCE(421);
      if (lookahead == ',') ADVANCE(422);
      if (lookahead == '@') ADVANCE(423);
      if (lookahead == 'A') ADVANCE(883);
      if (lookahead == 'E') ADVANCE(763);
      if (lookahead == 'H') ADVANCE(613);
      if (lookahead == 'O') ADVANCE(784);
      if (lookahead == 'R') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(228);
      if (lookahead == '>') ADVANCE(982);
      if (lookahead == '\\') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(1253);
      if (lookahead == 'i') ADVANCE(1056);
      if (lookahead == 'm') ADVANCE(596);
      if (lookahead == 'o') ADVANCE(1243);
      if (lookahead == 'p') ADVANCE(944);
      if (lookahead == 't') ADVANCE(955);
      if (lookahead == 'w') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(229);
      if (lookahead == '>') ADVANCE(982);
      if (lookahead == '\\') ADVANCE(568);
      if (lookahead == 'a') ADVANCE(1253);
      if (lookahead == 'i') ADVANCE(1056);
      if (lookahead == 'm') ADVANCE(596);
      if (lookahead == 'o') ADVANCE(1243);
      if (lookahead == 'p') ADVANCE(944);
      if (lookahead == 't') ADVANCE(955);
      if (lookahead == 'w') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(433);
      if (lookahead == '>') ADVANCE(654);
      if (lookahead == 'A') ADVANCE(927);
      if (lookahead == 'I') ADVANCE(727);
      if (lookahead == 'M') ADVANCE(595);
      if (lookahead == 'O') ADVANCE(918);
      if (lookahead == 'P') ADVANCE(612);
      if (lookahead == 'T') ADVANCE(618);
      if (lookahead == 'W') ADVANCE(622);
      if (lookahead == '\\') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ')') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == 'a') ADVANCE(1182);
      if (lookahead == 'i') ADVANCE(1125);
      if (lookahead == 'o') ADVANCE(980);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead == '/') ADVANCE(1122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(428);
      if (lookahead == 'A') ADVANCE(854);
      if (lookahead == 'I') ADVANCE(802);
      if (lookahead == 'O') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(460);
      if (lookahead == '/') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(124);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(501);
      if (lookahead == 'S') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(1263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(1148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(1079);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(435);
      if (lookahead == '<') ADVANCE(436);
      if (lookahead == '>') ADVANCE(437);
      if (lookahead == 'M') ADVANCE(579);
      if (lookahead == 'N') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '<') ADVANCE(253);
      if (lookahead == '>') ADVANCE(365);
      if (lookahead == 'm') ADVANCE(577);
      if (lookahead == 'n') ADVANCE(1112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(1196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(216);
      if (lookahead == '@') ADVANCE(218);
      if (lookahead == 'e') ADVANCE(976);
      if (lookahead == 'o') ADVANCE(1103);
      if (lookahead == 's') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(289);
      if (lookahead == '@') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(431);
      if (lookahead == '@') ADVANCE(432);
      if (lookahead == 'E') ADVANCE(644);
      if (lookahead == 'O') ADVANCE(775);
      if (lookahead == 'S') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(442);
      if (lookahead == '@') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '?') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '?') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(878);
      if (lookahead == 'E') ADVANCE(728);
      if (lookahead == 'L') ADVANCE(419);
      if (lookahead == 'U') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(653);
      if (lookahead == 'I') ADVANCE(636);
      if (lookahead == 'O') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(781);
      if (lookahead == 'I') ADVANCE(765);
      if (lookahead == 'M') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(912);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(816);
      if (lookahead == 'C') ADVANCE(637);
      if (lookahead == 'G') ADVANCE(614);
      if (lookahead == 'L') ADVANCE(737);
      if (lookahead == 'N') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(676);
      if (lookahead == 'T') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(740);
      if (lookahead == 'F') ADVANCE(680);
      if (lookahead == 'P') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(766);
      if (lookahead == 'V') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(919);
      if (lookahead == 'F') ADVANCE(747);
      if (lookahead == 'P') ADVANCE(682);
      if (lookahead == 'S') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(631);
      if (lookahead == 'O') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(820);
      if (lookahead == 'd') ADVANCE(1142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(645);
      if (lookahead == 'V') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(453);
      if (lookahead == 'V') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(455);
      if (lookahead == 'R') ADVANCE(881);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(638);
      if (lookahead == 'O') ADVANCE(425);
      if (lookahead == 'R') ADVANCE(826);
      if (lookahead == 'U') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(870);
      if (lookahead == 'O') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(729);
      if (lookahead == 'I') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(639);
      if (lookahead == 'I') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(619);
      if (lookahead == 'I') ADVANCE(909);
      if (lookahead == 'O') ADVANCE(827);
      if (lookahead == 'S') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(866);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(867);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(429);
      if (lookahead == 'R') ADVANCE(430);
      if (lookahead == 'V') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(744);
      if (lookahead == 'I') ADVANCE(908);
      if (lookahead == 'O') ADVANCE(871);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(714);
      if (lookahead == 'O') ADVANCE(434);
      if (lookahead == 'R') ADVANCE(920);
      if (lookahead == 'U') ADVANCE(643);
      if (lookahead == 'Y') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(616);
      if (lookahead == 'O') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(726);
      if (lookahead == 'L') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'K') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'K') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'K') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(769);
      if (lookahead == 'N') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(770);
      if (lookahead == 'T') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(922);
      if (lookahead == 'R') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(884);
      if (lookahead == 'M') ADVANCE(739);
      if (lookahead == 'N') ADVANCE(648);
      if (lookahead == 'R') ADVANCE(629);
      if (lookahead == 'V') ADVANCE(615);
      if (lookahead == 'X') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(835);
      if (lookahead == 'T') ADVANCE(750);
      if (lookahead == 'U') ADVANCE(882);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(849);
      if (lookahead == 'N') ADVANCE(880);
      if (lookahead == 'U') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(858);
      if (lookahead == 'S') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(445);
      if (lookahead == 'U') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(876);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(923);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(760);
      if (lookahead == 'X') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(441);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(937);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(687);
      if (lookahead == 'X') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(832);
      if (lookahead == 'U') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'V') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'V') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'V') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'W') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1204);
      if (lookahead == 'e') ADVANCE(1058);
      if (lookahead == 'l') ADVANCE(116);
      if (lookahead == 'u') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(981);
      if (lookahead == 'i') ADVANCE(968);
      if (lookahead == 'o') ADVANCE(1206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1111);
      if (lookahead == 'i') ADVANCE(1101);
      if (lookahead == 'm') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1071);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1184);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1234);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(1212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(1146);
      if (lookahead == 'c') ADVANCE(970);
      if (lookahead == 'g') ADVANCE(945);
      if (lookahead == 'l') ADVANCE(1082);
      if (lookahead == 'n') ADVANCE(978);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1042);
      if (lookahead == 't') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1069);
      if (lookahead == 'f') ADVANCE(1038);
      if (lookahead == 'p') ADVANCE(1229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1251);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1102);
      if (lookahead == 'v') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1016);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(1246);
      if (lookahead == 'f') ADVANCE(1081);
      if (lookahead == 'p') ADVANCE(1039);
      if (lookahead == 's') ADVANCE(1239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(964);
      if (lookahead == 'o') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(977);
      if (lookahead == 'v') ADVANCE(1077);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(202);
      if (lookahead == 'v') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(337);
      if (lookahead == 'r') ADVANCE(1211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(1258);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(971);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(1149);
      if (lookahead == 'u') ADVANCE(1164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1193);
      if (lookahead == 'o') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1059);
      if (lookahead == 'i') ADVANCE(1165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(972);
      if (lookahead == 'i') ADVANCE(1216);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(957);
      if (lookahead == 'i') ADVANCE(1241);
      if (lookahead == 'o') ADVANCE(1151);
      if (lookahead == 's') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1199);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1195);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(1137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == 'v') ADVANCE(1032);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(1055);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(1223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(1225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(1043);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(1126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(1129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(1074);
      if (lookahead == 'i') ADVANCE(1240);
      if (lookahead == 'o') ADVANCE(1192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(1034);
      if (lookahead == 'o') ADVANCE(357);
      if (lookahead == 'r') ADVANCE(1245);
      if (lookahead == 'u') ADVANCE(969);
      if (lookahead == 'y') ADVANCE(1177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(949);
      if (lookahead == 'o') ADVANCE(1123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1215);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(943);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1057);
      if (lookahead == 'l') ADVANCE(1155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1054);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(1139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(963);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1092);
      if (lookahead == 'n') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1093);
      if (lookahead == 't') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1031);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1249);
      if (lookahead == 'r') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1207);
      if (lookahead == 'm') ADVANCE(1068);
      if (lookahead == 'n') ADVANCE(979);
      if (lookahead == 'r') ADVANCE(959);
      if (lookahead == 'v') ADVANCE(947);
      if (lookahead == 'x') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(1163);
      if (lookahead == 't') ADVANCE(1075);
      if (lookahead == 'u') ADVANCE(1214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(1180);
      if (lookahead == 'n') ADVANCE(1208);
      if (lookahead == 'u') ADVANCE(1134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(1153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(1158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(1181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1220);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == 'u') ADVANCE(1167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1194);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1219);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(1160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1247);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1221);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1090);
      if (lookahead == 'x') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(597);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(934);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1002);
      if (lookahead == 'x') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1156);
      if (lookahead == 'u') ADVANCE(1166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1213);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1007);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1019);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(1197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(1201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(1227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(1228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(1236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(1008);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'N') ADVANCE(814);
      if (lookahead == 'n') ADVANCE(1144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == 'N') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(1262);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_core_token1] = ACTIONS(1),
    [aux_sym_core_token2] = ACTIONS(1),
    [aux_sym_core_token3] = ACTIONS(1),
    [aux_sym_core_token4] = ACTIONS(1),
    [aux_sym_core_token5] = ACTIONS(1),
    [aux_sym_core_token6] = ACTIONS(1),
    [aux_sym_core_token7] = ACTIONS(1),
    [aux_sym_core_token8] = ACTIONS(1),
    [aux_sym_core_token9] = ACTIONS(1),
    [aux_sym_core_token10] = ACTIONS(1),
    [aux_sym_core_token11] = ACTIONS(1),
    [aux_sym_core_token12] = ACTIONS(1),
    [aux_sym_core_token13] = ACTIONS(1),
    [aux_sym_core_token14] = ACTIONS(1),
    [aux_sym_core_token15] = ACTIONS(1),
    [aux_sym_core_token16] = ACTIONS(1),
    [aux_sym_core_token17] = ACTIONS(1),
    [aux_sym_core_token18] = ACTIONS(1),
    [aux_sym_core_token19] = ACTIONS(1),
    [aux_sym_core_token20] = ACTIONS(1),
    [aux_sym_core_token21] = ACTIONS(1),
    [aux_sym_core_token22] = ACTIONS(1),
    [aux_sym_core_token23] = ACTIONS(1),
    [aux_sym_core_token24] = ACTIONS(1),
    [aux_sym_core_token25] = ACTIONS(1),
    [aux_sym_core_token26] = ACTIONS(1),
    [aux_sym_core_token27] = ACTIONS(1),
    [aux_sym_core_token28] = ACTIONS(1),
    [aux_sym_core_token29] = ACTIONS(1),
    [aux_sym_core_token30] = ACTIONS(1),
    [aux_sym_core_token31] = ACTIONS(1),
    [aux_sym_core_token32] = ACTIONS(1),
    [aux_sym_core_token33] = ACTIONS(1),
    [aux_sym_core_token34] = ACTIONS(1),
    [aux_sym_core_token35] = ACTIONS(1),
    [aux_sym_core_token36] = ACTIONS(1),
    [aux_sym_core_token37] = ACTIONS(1),
    [aux_sym_core_token38] = ACTIONS(1),
    [aux_sym_core_token39] = ACTIONS(1),
    [aux_sym_core_token40] = ACTIONS(1),
    [aux_sym_core_token41] = ACTIONS(1),
    [aux_sym_core_token42] = ACTIONS(1),
    [aux_sym_core_token43] = ACTIONS(1),
    [aux_sym_core_token44] = ACTIONS(1),
    [aux_sym_core_token45] = ACTIONS(1),
    [aux_sym_core_token46] = ACTIONS(1),
    [aux_sym_core_token47] = ACTIONS(1),
    [aux_sym_core_token48] = ACTIONS(1),
    [aux_sym_core_token49] = ACTIONS(1),
    [aux_sym_core_token50] = ACTIONS(1),
    [aux_sym_core_token51] = ACTIONS(1),
    [aux_sym_core_token52] = ACTIONS(1),
    [aux_sym_core_token53] = ACTIONS(1),
    [aux_sym_core_token54] = ACTIONS(1),
    [aux_sym_core_token55] = ACTIONS(1),
    [aux_sym_core_token56] = ACTIONS(1),
    [aux_sym_core_token57] = ACTIONS(1),
    [aux_sym_core_token58] = ACTIONS(1),
    [aux_sym_core_token59] = ACTIONS(1),
    [aux_sym_core_token60] = ACTIONS(1),
    [aux_sym_core_token61] = ACTIONS(1),
    [aux_sym_core_token62] = ACTIONS(1),
    [aux_sym_core_token63] = ACTIONS(1),
    [aux_sym_core_token64] = ACTIONS(1),
    [aux_sym_core_token65] = ACTIONS(1),
    [aux_sym_core_token66] = ACTIONS(1),
    [aux_sym_core_token67] = ACTIONS(1),
    [aux_sym_core_token68] = ACTIONS(1),
    [aux_sym_core_token69] = ACTIONS(1),
    [aux_sym_core_token70] = ACTIONS(1),
    [aux_sym_core_token71] = ACTIONS(1),
    [aux_sym_core_token72] = ACTIONS(1),
    [aux_sym_core_token73] = ACTIONS(1),
    [aux_sym_core_token74] = ACTIONS(1),
    [aux_sym_core_token75] = ACTIONS(1),
    [aux_sym_core_token76] = ACTIONS(1),
    [aux_sym_core_token77] = ACTIONS(1),
    [aux_sym_core_token78] = ACTIONS(1),
    [aux_sym_core_token79] = ACTIONS(1),
    [aux_sym_core_token80] = ACTIONS(1),
    [aux_sym_core_token81] = ACTIONS(1),
    [aux_sym_core_token82] = ACTIONS(1),
    [aux_sym_core_token83] = ACTIONS(1),
    [aux_sym_core_token84] = ACTIONS(1),
    [aux_sym_core_token85] = ACTIONS(1),
    [aux_sym_core_token86] = ACTIONS(1),
    [aux_sym_core_token87] = ACTIONS(1),
    [aux_sym_core_token88] = ACTIONS(1),
    [aux_sym_core_token89] = ACTIONS(1),
    [aux_sym_core_token90] = ACTIONS(1),
    [aux_sym_core_token91] = ACTIONS(1),
    [aux_sym_core_token92] = ACTIONS(1),
    [aux_sym_core_token93] = ACTIONS(1),
    [aux_sym_core_token94] = ACTIONS(1),
    [aux_sym_core_token95] = ACTIONS(1),
    [aux_sym_core_token96] = ACTIONS(1),
    [aux_sym_core_token97] = ACTIONS(1),
    [aux_sym_core_token98] = ACTIONS(1),
    [aux_sym_core_token99] = ACTIONS(1),
    [aux_sym_core_token100] = ACTIONS(1),
    [aux_sym_core_token101] = ACTIONS(1),
    [aux_sym_core_token102] = ACTIONS(1),
    [aux_sym_core_token103] = ACTIONS(1),
    [aux_sym_core_token104] = ACTIONS(1),
    [aux_sym_core_token105] = ACTIONS(1),
    [aux_sym_core_token106] = ACTIONS(1),
    [aux_sym_core_token107] = ACTIONS(1),
    [aux_sym_core_token108] = ACTIONS(1),
    [aux_sym_core_token109] = ACTIONS(1),
    [aux_sym_core_token110] = ACTIONS(1),
    [aux_sym_core_token111] = ACTIONS(1),
    [aux_sym_core_token112] = ACTIONS(1),
    [aux_sym_core_token113] = ACTIONS(1),
    [aux_sym_core_token114] = ACTIONS(1),
    [aux_sym_core_token115] = ACTIONS(1),
    [aux_sym_core_token116] = ACTIONS(1),
    [aux_sym_core_token117] = ACTIONS(1),
    [aux_sym_core_token118] = ACTIONS(1),
    [aux_sym_core_token119] = ACTIONS(1),
    [aux_sym_core_token120] = ACTIONS(1),
    [aux_sym_core_token121] = ACTIONS(1),
    [aux_sym_core_token122] = ACTIONS(1),
    [aux_sym_core_token123] = ACTIONS(1),
    [aux_sym_core_token124] = ACTIONS(1),
    [aux_sym_core_token125] = ACTIONS(1),
    [aux_sym_core_token126] = ACTIONS(1),
    [aux_sym_core_token127] = ACTIONS(1),
    [aux_sym_core_token128] = ACTIONS(1),
    [aux_sym_core_token129] = ACTIONS(1),
    [aux_sym_core_token130] = ACTIONS(1),
    [aux_sym_core_token131] = ACTIONS(1),
    [aux_sym_core_token132] = ACTIONS(1),
    [aux_sym_core_token133] = ACTIONS(1),
    [aux_sym_core_token134] = ACTIONS(1),
    [aux_sym_core_token135] = ACTIONS(1),
    [aux_sym_core_token136] = ACTIONS(1),
    [aux_sym_core_token137] = ACTIONS(1),
    [aux_sym_core_token138] = ACTIONS(1),
    [aux_sym_core_token139] = ACTIONS(1),
    [aux_sym_core_token140] = ACTIONS(1),
    [aux_sym_core_token141] = ACTIONS(1),
    [aux_sym_core_token142] = ACTIONS(1),
    [aux_sym_core_token143] = ACTIONS(1),
    [aux_sym_core_token144] = ACTIONS(1),
    [aux_sym_core_token145] = ACTIONS(1),
    [aux_sym_core_token146] = ACTIONS(1),
    [aux_sym_core_token147] = ACTIONS(1),
    [aux_sym_core_token148] = ACTIONS(1),
    [aux_sym_core_token149] = ACTIONS(1),
    [aux_sym_core_token150] = ACTIONS(1),
    [aux_sym_core_token151] = ACTIONS(1),
    [aux_sym_core_token152] = ACTIONS(1),
    [aux_sym_core_token153] = ACTIONS(1),
    [aux_sym_core_token154] = ACTIONS(1),
    [aux_sym_core_token155] = ACTIONS(1),
    [aux_sym_core_token156] = ACTIONS(1),
    [aux_sym_core_token157] = ACTIONS(1),
    [aux_sym_core_token158] = ACTIONS(1),
    [aux_sym_core_token159] = ACTIONS(1),
    [aux_sym_core_token160] = ACTIONS(1),
    [aux_sym_core_token161] = ACTIONS(1),
    [aux_sym_core_token162] = ACTIONS(1),
    [aux_sym_core_token163] = ACTIONS(1),
    [aux_sym_core_token164] = ACTIONS(1),
    [aux_sym_core_token165] = ACTIONS(1),
    [aux_sym_core_token166] = ACTIONS(1),
    [aux_sym_core_token167] = ACTIONS(1),
    [aux_sym_core_token168] = ACTIONS(1),
    [aux_sym_core_token169] = ACTIONS(1),
    [aux_sym_core_token170] = ACTIONS(1),
    [aux_sym_core_token171] = ACTIONS(1),
    [aux_sym_core_token172] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [sym_lparen] = ACTIONS(1),
    [sym_rparen] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym__definition] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_word_definition] = STATE(3),
    [sym_number] = STATE(3),
    [sym_builtin] = STATE(3),
    [sym_core] = STATE(9),
    [sym_operator] = STATE(9),
    [sym_start_definition] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(5),
    [sym_string] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_core_token1] = ACTIONS(11),
    [aux_sym_core_token2] = ACTIONS(11),
    [aux_sym_core_token3] = ACTIONS(11),
    [aux_sym_core_token4] = ACTIONS(11),
    [aux_sym_core_token5] = ACTIONS(11),
    [aux_sym_core_token6] = ACTIONS(11),
    [aux_sym_core_token7] = ACTIONS(11),
    [aux_sym_core_token8] = ACTIONS(11),
    [aux_sym_core_token9] = ACTIONS(11),
    [aux_sym_core_token10] = ACTIONS(11),
    [aux_sym_core_token11] = ACTIONS(11),
    [aux_sym_core_token12] = ACTIONS(11),
    [aux_sym_core_token13] = ACTIONS(11),
    [aux_sym_core_token14] = ACTIONS(11),
    [aux_sym_core_token15] = ACTIONS(11),
    [aux_sym_core_token16] = ACTIONS(11),
    [aux_sym_core_token17] = ACTIONS(11),
    [aux_sym_core_token18] = ACTIONS(11),
    [aux_sym_core_token19] = ACTIONS(11),
    [aux_sym_core_token20] = ACTIONS(11),
    [aux_sym_core_token21] = ACTIONS(11),
    [aux_sym_core_token22] = ACTIONS(11),
    [aux_sym_core_token23] = ACTIONS(11),
    [aux_sym_core_token24] = ACTIONS(11),
    [aux_sym_core_token25] = ACTIONS(11),
    [aux_sym_core_token26] = ACTIONS(11),
    [aux_sym_core_token27] = ACTIONS(11),
    [aux_sym_core_token28] = ACTIONS(11),
    [aux_sym_core_token29] = ACTIONS(11),
    [aux_sym_core_token30] = ACTIONS(11),
    [aux_sym_core_token31] = ACTIONS(11),
    [aux_sym_core_token32] = ACTIONS(11),
    [aux_sym_core_token33] = ACTIONS(11),
    [aux_sym_core_token34] = ACTIONS(11),
    [aux_sym_core_token35] = ACTIONS(11),
    [aux_sym_core_token36] = ACTIONS(11),
    [aux_sym_core_token37] = ACTIONS(11),
    [aux_sym_core_token38] = ACTIONS(11),
    [aux_sym_core_token39] = ACTIONS(11),
    [aux_sym_core_token40] = ACTIONS(11),
    [aux_sym_core_token41] = ACTIONS(11),
    [aux_sym_core_token42] = ACTIONS(11),
    [aux_sym_core_token43] = ACTIONS(11),
    [aux_sym_core_token44] = ACTIONS(11),
    [aux_sym_core_token45] = ACTIONS(11),
    [aux_sym_core_token46] = ACTIONS(11),
    [aux_sym_core_token47] = ACTIONS(11),
    [aux_sym_core_token48] = ACTIONS(11),
    [aux_sym_core_token49] = ACTIONS(11),
    [aux_sym_core_token50] = ACTIONS(11),
    [aux_sym_core_token51] = ACTIONS(11),
    [aux_sym_core_token52] = ACTIONS(11),
    [aux_sym_core_token53] = ACTIONS(11),
    [aux_sym_core_token54] = ACTIONS(11),
    [aux_sym_core_token55] = ACTIONS(11),
    [aux_sym_core_token56] = ACTIONS(11),
    [aux_sym_core_token57] = ACTIONS(11),
    [aux_sym_core_token58] = ACTIONS(11),
    [aux_sym_core_token59] = ACTIONS(11),
    [aux_sym_core_token60] = ACTIONS(11),
    [aux_sym_core_token61] = ACTIONS(11),
    [aux_sym_core_token62] = ACTIONS(11),
    [aux_sym_core_token63] = ACTIONS(11),
    [aux_sym_core_token64] = ACTIONS(11),
    [aux_sym_core_token65] = ACTIONS(11),
    [aux_sym_core_token66] = ACTIONS(11),
    [aux_sym_core_token67] = ACTIONS(11),
    [aux_sym_core_token68] = ACTIONS(11),
    [aux_sym_core_token69] = ACTIONS(11),
    [aux_sym_core_token70] = ACTIONS(11),
    [aux_sym_core_token71] = ACTIONS(11),
    [aux_sym_core_token72] = ACTIONS(11),
    [aux_sym_core_token73] = ACTIONS(11),
    [aux_sym_core_token74] = ACTIONS(11),
    [aux_sym_core_token75] = ACTIONS(11),
    [aux_sym_core_token76] = ACTIONS(11),
    [aux_sym_core_token77] = ACTIONS(11),
    [aux_sym_core_token78] = ACTIONS(11),
    [aux_sym_core_token79] = ACTIONS(11),
    [aux_sym_core_token80] = ACTIONS(11),
    [aux_sym_core_token81] = ACTIONS(11),
    [aux_sym_core_token82] = ACTIONS(11),
    [aux_sym_core_token83] = ACTIONS(11),
    [aux_sym_core_token84] = ACTIONS(11),
    [aux_sym_core_token85] = ACTIONS(11),
    [aux_sym_core_token86] = ACTIONS(11),
    [aux_sym_core_token87] = ACTIONS(11),
    [aux_sym_core_token88] = ACTIONS(11),
    [aux_sym_core_token89] = ACTIONS(11),
    [aux_sym_core_token90] = ACTIONS(11),
    [aux_sym_core_token91] = ACTIONS(11),
    [aux_sym_core_token92] = ACTIONS(11),
    [aux_sym_core_token93] = ACTIONS(11),
    [aux_sym_core_token94] = ACTIONS(11),
    [aux_sym_core_token95] = ACTIONS(11),
    [aux_sym_core_token96] = ACTIONS(11),
    [aux_sym_core_token97] = ACTIONS(11),
    [aux_sym_core_token98] = ACTIONS(11),
    [aux_sym_core_token99] = ACTIONS(11),
    [aux_sym_core_token100] = ACTIONS(11),
    [aux_sym_core_token101] = ACTIONS(11),
    [aux_sym_core_token102] = ACTIONS(11),
    [aux_sym_core_token103] = ACTIONS(11),
    [aux_sym_core_token104] = ACTIONS(11),
    [aux_sym_core_token105] = ACTIONS(11),
    [aux_sym_core_token106] = ACTIONS(11),
    [aux_sym_core_token107] = ACTIONS(11),
    [aux_sym_core_token108] = ACTIONS(11),
    [aux_sym_core_token109] = ACTIONS(11),
    [aux_sym_core_token110] = ACTIONS(11),
    [aux_sym_core_token111] = ACTIONS(11),
    [aux_sym_core_token112] = ACTIONS(11),
    [aux_sym_core_token113] = ACTIONS(11),
    [aux_sym_core_token114] = ACTIONS(11),
    [aux_sym_core_token115] = ACTIONS(11),
    [aux_sym_core_token116] = ACTIONS(11),
    [aux_sym_core_token117] = ACTIONS(11),
    [aux_sym_core_token118] = ACTIONS(11),
    [aux_sym_core_token119] = ACTIONS(11),
    [aux_sym_core_token120] = ACTIONS(11),
    [aux_sym_core_token121] = ACTIONS(11),
    [aux_sym_core_token122] = ACTIONS(11),
    [aux_sym_core_token123] = ACTIONS(11),
    [aux_sym_core_token124] = ACTIONS(11),
    [aux_sym_core_token125] = ACTIONS(11),
    [aux_sym_core_token126] = ACTIONS(11),
    [aux_sym_core_token127] = ACTIONS(11),
    [aux_sym_core_token128] = ACTIONS(11),
    [aux_sym_core_token129] = ACTIONS(11),
    [aux_sym_core_token130] = ACTIONS(11),
    [aux_sym_core_token131] = ACTIONS(11),
    [aux_sym_core_token132] = ACTIONS(11),
    [aux_sym_core_token133] = ACTIONS(11),
    [aux_sym_core_token134] = ACTIONS(11),
    [aux_sym_core_token135] = ACTIONS(11),
    [aux_sym_core_token136] = ACTIONS(11),
    [aux_sym_core_token137] = ACTIONS(11),
    [aux_sym_core_token138] = ACTIONS(11),
    [aux_sym_core_token139] = ACTIONS(11),
    [aux_sym_core_token140] = ACTIONS(11),
    [aux_sym_core_token141] = ACTIONS(11),
    [aux_sym_core_token142] = ACTIONS(11),
    [aux_sym_core_token143] = ACTIONS(11),
    [aux_sym_core_token144] = ACTIONS(11),
    [aux_sym_core_token145] = ACTIONS(11),
    [aux_sym_core_token146] = ACTIONS(11),
    [aux_sym_core_token147] = ACTIONS(11),
    [aux_sym_core_token148] = ACTIONS(11),
    [aux_sym_core_token149] = ACTIONS(11),
    [aux_sym_core_token150] = ACTIONS(11),
    [aux_sym_core_token151] = ACTIONS(11),
    [aux_sym_core_token152] = ACTIONS(11),
    [aux_sym_core_token153] = ACTIONS(11),
    [aux_sym_core_token154] = ACTIONS(11),
    [aux_sym_core_token155] = ACTIONS(11),
    [aux_sym_core_token156] = ACTIONS(11),
    [aux_sym_core_token157] = ACTIONS(11),
    [aux_sym_core_token158] = ACTIONS(11),
    [aux_sym_core_token159] = ACTIONS(11),
    [aux_sym_core_token160] = ACTIONS(11),
    [aux_sym_core_token161] = ACTIONS(11),
    [aux_sym_core_token162] = ACTIONS(11),
    [aux_sym_core_token163] = ACTIONS(11),
    [aux_sym_core_token164] = ACTIONS(11),
    [aux_sym_core_token165] = ACTIONS(11),
    [aux_sym_core_token166] = ACTIONS(11),
    [aux_sym_core_token167] = ACTIONS(11),
    [aux_sym_core_token168] = ACTIONS(11),
    [aux_sym_core_token169] = ACTIONS(11),
    [aux_sym_core_token170] = ACTIONS(11),
    [aux_sym_core_token171] = ACTIONS(11),
    [aux_sym_core_token172] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_STAR_SLASH] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [sym_word] = ACTIONS(15),
    [anon_sym_COLON] = ACTIONS(17),
  },
  [2] = {
    [sym__definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_word_definition] = STATE(2),
    [sym_number] = STATE(2),
    [sym_builtin] = STATE(2),
    [sym_core] = STATE(9),
    [sym_operator] = STATE(9),
    [sym_start_definition] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [aux_sym_comment_token1] = ACTIONS(21),
    [aux_sym_comment_token2] = ACTIONS(21),
    [sym_string] = ACTIONS(24),
    [aux_sym_number_token1] = ACTIONS(27),
    [aux_sym_core_token1] = ACTIONS(30),
    [aux_sym_core_token2] = ACTIONS(30),
    [aux_sym_core_token3] = ACTIONS(30),
    [aux_sym_core_token4] = ACTIONS(30),
    [aux_sym_core_token5] = ACTIONS(30),
    [aux_sym_core_token6] = ACTIONS(30),
    [aux_sym_core_token7] = ACTIONS(30),
    [aux_sym_core_token8] = ACTIONS(30),
    [aux_sym_core_token9] = ACTIONS(30),
    [aux_sym_core_token10] = ACTIONS(30),
    [aux_sym_core_token11] = ACTIONS(30),
    [aux_sym_core_token12] = ACTIONS(30),
    [aux_sym_core_token13] = ACTIONS(30),
    [aux_sym_core_token14] = ACTIONS(30),
    [aux_sym_core_token15] = ACTIONS(30),
    [aux_sym_core_token16] = ACTIONS(30),
    [aux_sym_core_token17] = ACTIONS(30),
    [aux_sym_core_token18] = ACTIONS(30),
    [aux_sym_core_token19] = ACTIONS(30),
    [aux_sym_core_token20] = ACTIONS(30),
    [aux_sym_core_token21] = ACTIONS(30),
    [aux_sym_core_token22] = ACTIONS(30),
    [aux_sym_core_token23] = ACTIONS(30),
    [aux_sym_core_token24] = ACTIONS(30),
    [aux_sym_core_token25] = ACTIONS(30),
    [aux_sym_core_token26] = ACTIONS(30),
    [aux_sym_core_token27] = ACTIONS(30),
    [aux_sym_core_token28] = ACTIONS(30),
    [aux_sym_core_token29] = ACTIONS(30),
    [aux_sym_core_token30] = ACTIONS(30),
    [aux_sym_core_token31] = ACTIONS(30),
    [aux_sym_core_token32] = ACTIONS(30),
    [aux_sym_core_token33] = ACTIONS(30),
    [aux_sym_core_token34] = ACTIONS(30),
    [aux_sym_core_token35] = ACTIONS(30),
    [aux_sym_core_token36] = ACTIONS(30),
    [aux_sym_core_token37] = ACTIONS(30),
    [aux_sym_core_token38] = ACTIONS(30),
    [aux_sym_core_token39] = ACTIONS(30),
    [aux_sym_core_token40] = ACTIONS(30),
    [aux_sym_core_token41] = ACTIONS(30),
    [aux_sym_core_token42] = ACTIONS(30),
    [aux_sym_core_token43] = ACTIONS(30),
    [aux_sym_core_token44] = ACTIONS(30),
    [aux_sym_core_token45] = ACTIONS(30),
    [aux_sym_core_token46] = ACTIONS(30),
    [aux_sym_core_token47] = ACTIONS(30),
    [aux_sym_core_token48] = ACTIONS(30),
    [aux_sym_core_token49] = ACTIONS(30),
    [aux_sym_core_token50] = ACTIONS(30),
    [aux_sym_core_token51] = ACTIONS(30),
    [aux_sym_core_token52] = ACTIONS(30),
    [aux_sym_core_token53] = ACTIONS(30),
    [aux_sym_core_token54] = ACTIONS(30),
    [aux_sym_core_token55] = ACTIONS(30),
    [aux_sym_core_token56] = ACTIONS(30),
    [aux_sym_core_token57] = ACTIONS(30),
    [aux_sym_core_token58] = ACTIONS(30),
    [aux_sym_core_token59] = ACTIONS(30),
    [aux_sym_core_token60] = ACTIONS(30),
    [aux_sym_core_token61] = ACTIONS(30),
    [aux_sym_core_token62] = ACTIONS(30),
    [aux_sym_core_token63] = ACTIONS(30),
    [aux_sym_core_token64] = ACTIONS(30),
    [aux_sym_core_token65] = ACTIONS(30),
    [aux_sym_core_token66] = ACTIONS(30),
    [aux_sym_core_token67] = ACTIONS(30),
    [aux_sym_core_token68] = ACTIONS(30),
    [aux_sym_core_token69] = ACTIONS(30),
    [aux_sym_core_token70] = ACTIONS(30),
    [aux_sym_core_token71] = ACTIONS(30),
    [aux_sym_core_token72] = ACTIONS(30),
    [aux_sym_core_token73] = ACTIONS(30),
    [aux_sym_core_token74] = ACTIONS(30),
    [aux_sym_core_token75] = ACTIONS(30),
    [aux_sym_core_token76] = ACTIONS(30),
    [aux_sym_core_token77] = ACTIONS(30),
    [aux_sym_core_token78] = ACTIONS(30),
    [aux_sym_core_token79] = ACTIONS(30),
    [aux_sym_core_token80] = ACTIONS(30),
    [aux_sym_core_token81] = ACTIONS(30),
    [aux_sym_core_token82] = ACTIONS(30),
    [aux_sym_core_token83] = ACTIONS(30),
    [aux_sym_core_token84] = ACTIONS(30),
    [aux_sym_core_token85] = ACTIONS(30),
    [aux_sym_core_token86] = ACTIONS(30),
    [aux_sym_core_token87] = ACTIONS(30),
    [aux_sym_core_token88] = ACTIONS(30),
    [aux_sym_core_token89] = ACTIONS(30),
    [aux_sym_core_token90] = ACTIONS(30),
    [aux_sym_core_token91] = ACTIONS(30),
    [aux_sym_core_token92] = ACTIONS(30),
    [aux_sym_core_token93] = ACTIONS(30),
    [aux_sym_core_token94] = ACTIONS(30),
    [aux_sym_core_token95] = ACTIONS(30),
    [aux_sym_core_token96] = ACTIONS(30),
    [aux_sym_core_token97] = ACTIONS(30),
    [aux_sym_core_token98] = ACTIONS(30),
    [aux_sym_core_token99] = ACTIONS(30),
    [aux_sym_core_token100] = ACTIONS(30),
    [aux_sym_core_token101] = ACTIONS(30),
    [aux_sym_core_token102] = ACTIONS(30),
    [aux_sym_core_token103] = ACTIONS(30),
    [aux_sym_core_token104] = ACTIONS(30),
    [aux_sym_core_token105] = ACTIONS(30),
    [aux_sym_core_token106] = ACTIONS(30),
    [aux_sym_core_token107] = ACTIONS(30),
    [aux_sym_core_token108] = ACTIONS(30),
    [aux_sym_core_token109] = ACTIONS(30),
    [aux_sym_core_token110] = ACTIONS(30),
    [aux_sym_core_token111] = ACTIONS(30),
    [aux_sym_core_token112] = ACTIONS(30),
    [aux_sym_core_token113] = ACTIONS(30),
    [aux_sym_core_token114] = ACTIONS(30),
    [aux_sym_core_token115] = ACTIONS(30),
    [aux_sym_core_token116] = ACTIONS(30),
    [aux_sym_core_token117] = ACTIONS(30),
    [aux_sym_core_token118] = ACTIONS(30),
    [aux_sym_core_token119] = ACTIONS(30),
    [aux_sym_core_token120] = ACTIONS(30),
    [aux_sym_core_token121] = ACTIONS(30),
    [aux_sym_core_token122] = ACTIONS(30),
    [aux_sym_core_token123] = ACTIONS(30),
    [aux_sym_core_token124] = ACTIONS(30),
    [aux_sym_core_token125] = ACTIONS(30),
    [aux_sym_core_token126] = ACTIONS(30),
    [aux_sym_core_token127] = ACTIONS(30),
    [aux_sym_core_token128] = ACTIONS(30),
    [aux_sym_core_token129] = ACTIONS(30),
    [aux_sym_core_token130] = ACTIONS(30),
    [aux_sym_core_token131] = ACTIONS(30),
    [aux_sym_core_token132] = ACTIONS(30),
    [aux_sym_core_token133] = ACTIONS(30),
    [aux_sym_core_token134] = ACTIONS(30),
    [aux_sym_core_token135] = ACTIONS(30),
    [aux_sym_core_token136] = ACTIONS(30),
    [aux_sym_core_token137] = ACTIONS(30),
    [aux_sym_core_token138] = ACTIONS(30),
    [aux_sym_core_token139] = ACTIONS(30),
    [aux_sym_core_token140] = ACTIONS(30),
    [aux_sym_core_token141] = ACTIONS(30),
    [aux_sym_core_token142] = ACTIONS(30),
    [aux_sym_core_token143] = ACTIONS(30),
    [aux_sym_core_token144] = ACTIONS(30),
    [aux_sym_core_token145] = ACTIONS(30),
    [aux_sym_core_token146] = ACTIONS(30),
    [aux_sym_core_token147] = ACTIONS(30),
    [aux_sym_core_token148] = ACTIONS(30),
    [aux_sym_core_token149] = ACTIONS(30),
    [aux_sym_core_token150] = ACTIONS(30),
    [aux_sym_core_token151] = ACTIONS(30),
    [aux_sym_core_token152] = ACTIONS(30),
    [aux_sym_core_token153] = ACTIONS(30),
    [aux_sym_core_token154] = ACTIONS(30),
    [aux_sym_core_token155] = ACTIONS(30),
    [aux_sym_core_token156] = ACTIONS(30),
    [aux_sym_core_token157] = ACTIONS(30),
    [aux_sym_core_token158] = ACTIONS(30),
    [aux_sym_core_token159] = ACTIONS(30),
    [aux_sym_core_token160] = ACTIONS(30),
    [aux_sym_core_token161] = ACTIONS(30),
    [aux_sym_core_token162] = ACTIONS(30),
    [aux_sym_core_token163] = ACTIONS(30),
    [aux_sym_core_token164] = ACTIONS(30),
    [aux_sym_core_token165] = ACTIONS(30),
    [aux_sym_core_token166] = ACTIONS(30),
    [aux_sym_core_token167] = ACTIONS(30),
    [aux_sym_core_token168] = ACTIONS(30),
    [aux_sym_core_token169] = ACTIONS(30),
    [aux_sym_core_token170] = ACTIONS(30),
    [aux_sym_core_token171] = ACTIONS(30),
    [aux_sym_core_token172] = ACTIONS(30),
    [anon_sym_EQ] = ACTIONS(33),
    [anon_sym_PLUS] = ACTIONS(33),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_SLASH] = ACTIONS(33),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_STAR_SLASH] = ACTIONS(33),
    [anon_sym_GT] = ACTIONS(33),
    [anon_sym_LT] = ACTIONS(33),
    [sym_word] = ACTIONS(36),
    [anon_sym_COLON] = ACTIONS(39),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_word_definition] = STATE(2),
    [sym_number] = STATE(2),
    [sym_builtin] = STATE(2),
    [sym_core] = STATE(9),
    [sym_operator] = STATE(9),
    [sym_start_definition] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
    [aux_sym_comment_token1] = ACTIONS(5),
    [aux_sym_comment_token2] = ACTIONS(5),
    [sym_string] = ACTIONS(44),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_core_token1] = ACTIONS(11),
    [aux_sym_core_token2] = ACTIONS(11),
    [aux_sym_core_token3] = ACTIONS(11),
    [aux_sym_core_token4] = ACTIONS(11),
    [aux_sym_core_token5] = ACTIONS(11),
    [aux_sym_core_token6] = ACTIONS(11),
    [aux_sym_core_token7] = ACTIONS(11),
    [aux_sym_core_token8] = ACTIONS(11),
    [aux_sym_core_token9] = ACTIONS(11),
    [aux_sym_core_token10] = ACTIONS(11),
    [aux_sym_core_token11] = ACTIONS(11),
    [aux_sym_core_token12] = ACTIONS(11),
    [aux_sym_core_token13] = ACTIONS(11),
    [aux_sym_core_token14] = ACTIONS(11),
    [aux_sym_core_token15] = ACTIONS(11),
    [aux_sym_core_token16] = ACTIONS(11),
    [aux_sym_core_token17] = ACTIONS(11),
    [aux_sym_core_token18] = ACTIONS(11),
    [aux_sym_core_token19] = ACTIONS(11),
    [aux_sym_core_token20] = ACTIONS(11),
    [aux_sym_core_token21] = ACTIONS(11),
    [aux_sym_core_token22] = ACTIONS(11),
    [aux_sym_core_token23] = ACTIONS(11),
    [aux_sym_core_token24] = ACTIONS(11),
    [aux_sym_core_token25] = ACTIONS(11),
    [aux_sym_core_token26] = ACTIONS(11),
    [aux_sym_core_token27] = ACTIONS(11),
    [aux_sym_core_token28] = ACTIONS(11),
    [aux_sym_core_token29] = ACTIONS(11),
    [aux_sym_core_token30] = ACTIONS(11),
    [aux_sym_core_token31] = ACTIONS(11),
    [aux_sym_core_token32] = ACTIONS(11),
    [aux_sym_core_token33] = ACTIONS(11),
    [aux_sym_core_token34] = ACTIONS(11),
    [aux_sym_core_token35] = ACTIONS(11),
    [aux_sym_core_token36] = ACTIONS(11),
    [aux_sym_core_token37] = ACTIONS(11),
    [aux_sym_core_token38] = ACTIONS(11),
    [aux_sym_core_token39] = ACTIONS(11),
    [aux_sym_core_token40] = ACTIONS(11),
    [aux_sym_core_token41] = ACTIONS(11),
    [aux_sym_core_token42] = ACTIONS(11),
    [aux_sym_core_token43] = ACTIONS(11),
    [aux_sym_core_token44] = ACTIONS(11),
    [aux_sym_core_token45] = ACTIONS(11),
    [aux_sym_core_token46] = ACTIONS(11),
    [aux_sym_core_token47] = ACTIONS(11),
    [aux_sym_core_token48] = ACTIONS(11),
    [aux_sym_core_token49] = ACTIONS(11),
    [aux_sym_core_token50] = ACTIONS(11),
    [aux_sym_core_token51] = ACTIONS(11),
    [aux_sym_core_token52] = ACTIONS(11),
    [aux_sym_core_token53] = ACTIONS(11),
    [aux_sym_core_token54] = ACTIONS(11),
    [aux_sym_core_token55] = ACTIONS(11),
    [aux_sym_core_token56] = ACTIONS(11),
    [aux_sym_core_token57] = ACTIONS(11),
    [aux_sym_core_token58] = ACTIONS(11),
    [aux_sym_core_token59] = ACTIONS(11),
    [aux_sym_core_token60] = ACTIONS(11),
    [aux_sym_core_token61] = ACTIONS(11),
    [aux_sym_core_token62] = ACTIONS(11),
    [aux_sym_core_token63] = ACTIONS(11),
    [aux_sym_core_token64] = ACTIONS(11),
    [aux_sym_core_token65] = ACTIONS(11),
    [aux_sym_core_token66] = ACTIONS(11),
    [aux_sym_core_token67] = ACTIONS(11),
    [aux_sym_core_token68] = ACTIONS(11),
    [aux_sym_core_token69] = ACTIONS(11),
    [aux_sym_core_token70] = ACTIONS(11),
    [aux_sym_core_token71] = ACTIONS(11),
    [aux_sym_core_token72] = ACTIONS(11),
    [aux_sym_core_token73] = ACTIONS(11),
    [aux_sym_core_token74] = ACTIONS(11),
    [aux_sym_core_token75] = ACTIONS(11),
    [aux_sym_core_token76] = ACTIONS(11),
    [aux_sym_core_token77] = ACTIONS(11),
    [aux_sym_core_token78] = ACTIONS(11),
    [aux_sym_core_token79] = ACTIONS(11),
    [aux_sym_core_token80] = ACTIONS(11),
    [aux_sym_core_token81] = ACTIONS(11),
    [aux_sym_core_token82] = ACTIONS(11),
    [aux_sym_core_token83] = ACTIONS(11),
    [aux_sym_core_token84] = ACTIONS(11),
    [aux_sym_core_token85] = ACTIONS(11),
    [aux_sym_core_token86] = ACTIONS(11),
    [aux_sym_core_token87] = ACTIONS(11),
    [aux_sym_core_token88] = ACTIONS(11),
    [aux_sym_core_token89] = ACTIONS(11),
    [aux_sym_core_token90] = ACTIONS(11),
    [aux_sym_core_token91] = ACTIONS(11),
    [aux_sym_core_token92] = ACTIONS(11),
    [aux_sym_core_token93] = ACTIONS(11),
    [aux_sym_core_token94] = ACTIONS(11),
    [aux_sym_core_token95] = ACTIONS(11),
    [aux_sym_core_token96] = ACTIONS(11),
    [aux_sym_core_token97] = ACTIONS(11),
    [aux_sym_core_token98] = ACTIONS(11),
    [aux_sym_core_token99] = ACTIONS(11),
    [aux_sym_core_token100] = ACTIONS(11),
    [aux_sym_core_token101] = ACTIONS(11),
    [aux_sym_core_token102] = ACTIONS(11),
    [aux_sym_core_token103] = ACTIONS(11),
    [aux_sym_core_token104] = ACTIONS(11),
    [aux_sym_core_token105] = ACTIONS(11),
    [aux_sym_core_token106] = ACTIONS(11),
    [aux_sym_core_token107] = ACTIONS(11),
    [aux_sym_core_token108] = ACTIONS(11),
    [aux_sym_core_token109] = ACTIONS(11),
    [aux_sym_core_token110] = ACTIONS(11),
    [aux_sym_core_token111] = ACTIONS(11),
    [aux_sym_core_token112] = ACTIONS(11),
    [aux_sym_core_token113] = ACTIONS(11),
    [aux_sym_core_token114] = ACTIONS(11),
    [aux_sym_core_token115] = ACTIONS(11),
    [aux_sym_core_token116] = ACTIONS(11),
    [aux_sym_core_token117] = ACTIONS(11),
    [aux_sym_core_token118] = ACTIONS(11),
    [aux_sym_core_token119] = ACTIONS(11),
    [aux_sym_core_token120] = ACTIONS(11),
    [aux_sym_core_token121] = ACTIONS(11),
    [aux_sym_core_token122] = ACTIONS(11),
    [aux_sym_core_token123] = ACTIONS(11),
    [aux_sym_core_token124] = ACTIONS(11),
    [aux_sym_core_token125] = ACTIONS(11),
    [aux_sym_core_token126] = ACTIONS(11),
    [aux_sym_core_token127] = ACTIONS(11),
    [aux_sym_core_token128] = ACTIONS(11),
    [aux_sym_core_token129] = ACTIONS(11),
    [aux_sym_core_token130] = ACTIONS(11),
    [aux_sym_core_token131] = ACTIONS(11),
    [aux_sym_core_token132] = ACTIONS(11),
    [aux_sym_core_token133] = ACTIONS(11),
    [aux_sym_core_token134] = ACTIONS(11),
    [aux_sym_core_token135] = ACTIONS(11),
    [aux_sym_core_token136] = ACTIONS(11),
    [aux_sym_core_token137] = ACTIONS(11),
    [aux_sym_core_token138] = ACTIONS(11),
    [aux_sym_core_token139] = ACTIONS(11),
    [aux_sym_core_token140] = ACTIONS(11),
    [aux_sym_core_token141] = ACTIONS(11),
    [aux_sym_core_token142] = ACTIONS(11),
    [aux_sym_core_token143] = ACTIONS(11),
    [aux_sym_core_token144] = ACTIONS(11),
    [aux_sym_core_token145] = ACTIONS(11),
    [aux_sym_core_token146] = ACTIONS(11),
    [aux_sym_core_token147] = ACTIONS(11),
    [aux_sym_core_token148] = ACTIONS(11),
    [aux_sym_core_token149] = ACTIONS(11),
    [aux_sym_core_token150] = ACTIONS(11),
    [aux_sym_core_token151] = ACTIONS(11),
    [aux_sym_core_token152] = ACTIONS(11),
    [aux_sym_core_token153] = ACTIONS(11),
    [aux_sym_core_token154] = ACTIONS(11),
    [aux_sym_core_token155] = ACTIONS(11),
    [aux_sym_core_token156] = ACTIONS(11),
    [aux_sym_core_token157] = ACTIONS(11),
    [aux_sym_core_token158] = ACTIONS(11),
    [aux_sym_core_token159] = ACTIONS(11),
    [aux_sym_core_token160] = ACTIONS(11),
    [aux_sym_core_token161] = ACTIONS(11),
    [aux_sym_core_token162] = ACTIONS(11),
    [aux_sym_core_token163] = ACTIONS(11),
    [aux_sym_core_token164] = ACTIONS(11),
    [aux_sym_core_token165] = ACTIONS(11),
    [aux_sym_core_token166] = ACTIONS(11),
    [aux_sym_core_token167] = ACTIONS(11),
    [aux_sym_core_token168] = ACTIONS(11),
    [aux_sym_core_token169] = ACTIONS(11),
    [aux_sym_core_token170] = ACTIONS(11),
    [aux_sym_core_token171] = ACTIONS(11),
    [aux_sym_core_token172] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_STAR_SLASH] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT] = ACTIONS(13),
    [sym_word] = ACTIONS(46),
    [anon_sym_COLON] = ACTIONS(17),
  },
  [4] = {
    [sym_comment] = STATE(7),
    [sym_number] = STATE(7),
    [sym_builtin] = STATE(7),
    [sym_core] = STATE(21),
    [sym_operator] = STATE(21),
    [sym_end_definition] = STATE(16),
    [aux_sym_word_definition_repeat1] = STATE(7),
    [aux_sym_comment_token1] = ACTIONS(48),
    [aux_sym_comment_token2] = ACTIONS(48),
    [aux_sym_number_token1] = ACTIONS(50),
    [aux_sym_core_token1] = ACTIONS(52),
    [aux_sym_core_token2] = ACTIONS(52),
    [aux_sym_core_token3] = ACTIONS(52),
    [aux_sym_core_token4] = ACTIONS(52),
    [aux_sym_core_token5] = ACTIONS(52),
    [aux_sym_core_token6] = ACTIONS(52),
    [aux_sym_core_token7] = ACTIONS(52),
    [aux_sym_core_token8] = ACTIONS(52),
    [aux_sym_core_token9] = ACTIONS(52),
    [aux_sym_core_token10] = ACTIONS(52),
    [aux_sym_core_token11] = ACTIONS(52),
    [aux_sym_core_token12] = ACTIONS(52),
    [aux_sym_core_token13] = ACTIONS(52),
    [aux_sym_core_token14] = ACTIONS(52),
    [aux_sym_core_token15] = ACTIONS(52),
    [aux_sym_core_token16] = ACTIONS(52),
    [aux_sym_core_token17] = ACTIONS(52),
    [aux_sym_core_token18] = ACTIONS(52),
    [aux_sym_core_token19] = ACTIONS(52),
    [aux_sym_core_token20] = ACTIONS(52),
    [aux_sym_core_token21] = ACTIONS(52),
    [aux_sym_core_token22] = ACTIONS(52),
    [aux_sym_core_token23] = ACTIONS(52),
    [aux_sym_core_token24] = ACTIONS(52),
    [aux_sym_core_token25] = ACTIONS(52),
    [aux_sym_core_token26] = ACTIONS(52),
    [aux_sym_core_token27] = ACTIONS(52),
    [aux_sym_core_token28] = ACTIONS(52),
    [aux_sym_core_token29] = ACTIONS(52),
    [aux_sym_core_token30] = ACTIONS(52),
    [aux_sym_core_token31] = ACTIONS(52),
    [aux_sym_core_token32] = ACTIONS(52),
    [aux_sym_core_token33] = ACTIONS(52),
    [aux_sym_core_token34] = ACTIONS(52),
    [aux_sym_core_token35] = ACTIONS(52),
    [aux_sym_core_token36] = ACTIONS(52),
    [aux_sym_core_token37] = ACTIONS(52),
    [aux_sym_core_token38] = ACTIONS(52),
    [aux_sym_core_token39] = ACTIONS(52),
    [aux_sym_core_token40] = ACTIONS(52),
    [aux_sym_core_token41] = ACTIONS(52),
    [aux_sym_core_token42] = ACTIONS(52),
    [aux_sym_core_token43] = ACTIONS(52),
    [aux_sym_core_token44] = ACTIONS(52),
    [aux_sym_core_token45] = ACTIONS(52),
    [aux_sym_core_token46] = ACTIONS(52),
    [aux_sym_core_token47] = ACTIONS(52),
    [aux_sym_core_token48] = ACTIONS(52),
    [aux_sym_core_token49] = ACTIONS(52),
    [aux_sym_core_token50] = ACTIONS(52),
    [aux_sym_core_token51] = ACTIONS(52),
    [aux_sym_core_token52] = ACTIONS(52),
    [aux_sym_core_token53] = ACTIONS(52),
    [aux_sym_core_token54] = ACTIONS(52),
    [aux_sym_core_token55] = ACTIONS(52),
    [aux_sym_core_token56] = ACTIONS(52),
    [aux_sym_core_token57] = ACTIONS(52),
    [aux_sym_core_token58] = ACTIONS(52),
    [aux_sym_core_token59] = ACTIONS(52),
    [aux_sym_core_token60] = ACTIONS(52),
    [aux_sym_core_token61] = ACTIONS(52),
    [aux_sym_core_token62] = ACTIONS(52),
    [aux_sym_core_token63] = ACTIONS(52),
    [aux_sym_core_token64] = ACTIONS(52),
    [aux_sym_core_token65] = ACTIONS(52),
    [aux_sym_core_token66] = ACTIONS(52),
    [aux_sym_core_token67] = ACTIONS(52),
    [aux_sym_core_token68] = ACTIONS(52),
    [aux_sym_core_token69] = ACTIONS(52),
    [aux_sym_core_token70] = ACTIONS(52),
    [aux_sym_core_token71] = ACTIONS(52),
    [aux_sym_core_token72] = ACTIONS(52),
    [aux_sym_core_token73] = ACTIONS(52),
    [aux_sym_core_token74] = ACTIONS(52),
    [aux_sym_core_token75] = ACTIONS(52),
    [aux_sym_core_token76] = ACTIONS(52),
    [aux_sym_core_token77] = ACTIONS(52),
    [aux_sym_core_token78] = ACTIONS(52),
    [aux_sym_core_token79] = ACTIONS(52),
    [aux_sym_core_token80] = ACTIONS(52),
    [aux_sym_core_token81] = ACTIONS(52),
    [aux_sym_core_token82] = ACTIONS(52),
    [aux_sym_core_token83] = ACTIONS(52),
    [aux_sym_core_token84] = ACTIONS(52),
    [aux_sym_core_token85] = ACTIONS(52),
    [aux_sym_core_token86] = ACTIONS(52),
    [aux_sym_core_token87] = ACTIONS(52),
    [aux_sym_core_token88] = ACTIONS(52),
    [aux_sym_core_token89] = ACTIONS(52),
    [aux_sym_core_token90] = ACTIONS(52),
    [aux_sym_core_token91] = ACTIONS(52),
    [aux_sym_core_token92] = ACTIONS(52),
    [aux_sym_core_token93] = ACTIONS(52),
    [aux_sym_core_token94] = ACTIONS(52),
    [aux_sym_core_token95] = ACTIONS(52),
    [aux_sym_core_token96] = ACTIONS(52),
    [aux_sym_core_token97] = ACTIONS(52),
    [aux_sym_core_token98] = ACTIONS(52),
    [aux_sym_core_token99] = ACTIONS(52),
    [aux_sym_core_token100] = ACTIONS(52),
    [aux_sym_core_token101] = ACTIONS(52),
    [aux_sym_core_token102] = ACTIONS(52),
    [aux_sym_core_token103] = ACTIONS(52),
    [aux_sym_core_token104] = ACTIONS(52),
    [aux_sym_core_token105] = ACTIONS(52),
    [aux_sym_core_token106] = ACTIONS(52),
    [aux_sym_core_token107] = ACTIONS(52),
    [aux_sym_core_token108] = ACTIONS(52),
    [aux_sym_core_token109] = ACTIONS(52),
    [aux_sym_core_token110] = ACTIONS(52),
    [aux_sym_core_token111] = ACTIONS(52),
    [aux_sym_core_token112] = ACTIONS(52),
    [aux_sym_core_token113] = ACTIONS(52),
    [aux_sym_core_token114] = ACTIONS(52),
    [aux_sym_core_token115] = ACTIONS(52),
    [aux_sym_core_token116] = ACTIONS(52),
    [aux_sym_core_token117] = ACTIONS(52),
    [aux_sym_core_token118] = ACTIONS(52),
    [aux_sym_core_token119] = ACTIONS(52),
    [aux_sym_core_token120] = ACTIONS(52),
    [aux_sym_core_token121] = ACTIONS(52),
    [aux_sym_core_token122] = ACTIONS(52),
    [aux_sym_core_token123] = ACTIONS(52),
    [aux_sym_core_token124] = ACTIONS(52),
    [aux_sym_core_token125] = ACTIONS(52),
    [aux_sym_core_token126] = ACTIONS(52),
    [aux_sym_core_token127] = ACTIONS(52),
    [aux_sym_core_token128] = ACTIONS(52),
    [aux_sym_core_token129] = ACTIONS(52),
    [aux_sym_core_token130] = ACTIONS(52),
    [aux_sym_core_token131] = ACTIONS(52),
    [aux_sym_core_token132] = ACTIONS(52),
    [aux_sym_core_token133] = ACTIONS(52),
    [aux_sym_core_token134] = ACTIONS(52),
    [aux_sym_core_token135] = ACTIONS(52),
    [aux_sym_core_token136] = ACTIONS(52),
    [aux_sym_core_token137] = ACTIONS(52),
    [aux_sym_core_token138] = ACTIONS(52),
    [aux_sym_core_token139] = ACTIONS(52),
    [aux_sym_core_token140] = ACTIONS(52),
    [aux_sym_core_token141] = ACTIONS(52),
    [aux_sym_core_token142] = ACTIONS(52),
    [aux_sym_core_token143] = ACTIONS(52),
    [aux_sym_core_token144] = ACTIONS(52),
    [aux_sym_core_token145] = ACTIONS(52),
    [aux_sym_core_token146] = ACTIONS(52),
    [aux_sym_core_token147] = ACTIONS(52),
    [aux_sym_core_token148] = ACTIONS(52),
    [aux_sym_core_token149] = ACTIONS(52),
    [aux_sym_core_token150] = ACTIONS(52),
    [aux_sym_core_token151] = ACTIONS(52),
    [aux_sym_core_token152] = ACTIONS(52),
    [aux_sym_core_token153] = ACTIONS(52),
    [aux_sym_core_token154] = ACTIONS(52),
    [aux_sym_core_token155] = ACTIONS(52),
    [aux_sym_core_token156] = ACTIONS(52),
    [aux_sym_core_token157] = ACTIONS(52),
    [aux_sym_core_token158] = ACTIONS(52),
    [aux_sym_core_token159] = ACTIONS(52),
    [aux_sym_core_token160] = ACTIONS(52),
    [aux_sym_core_token161] = ACTIONS(52),
    [aux_sym_core_token162] = ACTIONS(52),
    [aux_sym_core_token163] = ACTIONS(52),
    [aux_sym_core_token164] = ACTIONS(52),
    [aux_sym_core_token165] = ACTIONS(52),
    [aux_sym_core_token166] = ACTIONS(52),
    [aux_sym_core_token167] = ACTIONS(52),
    [aux_sym_core_token168] = ACTIONS(52),
    [aux_sym_core_token169] = ACTIONS(52),
    [aux_sym_core_token170] = ACTIONS(52),
    [aux_sym_core_token171] = ACTIONS(52),
    [aux_sym_core_token172] = ACTIONS(52),
    [anon_sym_EQ] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_STAR_SLASH] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [sym_word] = ACTIONS(56),
    [anon_sym_SEMI] = ACTIONS(58),
  },
  [5] = {
    [sym_comment] = STATE(7),
    [sym_number] = STATE(7),
    [sym_builtin] = STATE(7),
    [sym_core] = STATE(21),
    [sym_operator] = STATE(21),
    [sym_end_definition] = STATE(14),
    [aux_sym_word_definition_repeat1] = STATE(7),
    [aux_sym_comment_token1] = ACTIONS(48),
    [aux_sym_comment_token2] = ACTIONS(48),
    [aux_sym_number_token1] = ACTIONS(50),
    [aux_sym_core_token1] = ACTIONS(52),
    [aux_sym_core_token2] = ACTIONS(52),
    [aux_sym_core_token3] = ACTIONS(52),
    [aux_sym_core_token4] = ACTIONS(52),
    [aux_sym_core_token5] = ACTIONS(52),
    [aux_sym_core_token6] = ACTIONS(52),
    [aux_sym_core_token7] = ACTIONS(52),
    [aux_sym_core_token8] = ACTIONS(52),
    [aux_sym_core_token9] = ACTIONS(52),
    [aux_sym_core_token10] = ACTIONS(52),
    [aux_sym_core_token11] = ACTIONS(52),
    [aux_sym_core_token12] = ACTIONS(52),
    [aux_sym_core_token13] = ACTIONS(52),
    [aux_sym_core_token14] = ACTIONS(52),
    [aux_sym_core_token15] = ACTIONS(52),
    [aux_sym_core_token16] = ACTIONS(52),
    [aux_sym_core_token17] = ACTIONS(52),
    [aux_sym_core_token18] = ACTIONS(52),
    [aux_sym_core_token19] = ACTIONS(52),
    [aux_sym_core_token20] = ACTIONS(52),
    [aux_sym_core_token21] = ACTIONS(52),
    [aux_sym_core_token22] = ACTIONS(52),
    [aux_sym_core_token23] = ACTIONS(52),
    [aux_sym_core_token24] = ACTIONS(52),
    [aux_sym_core_token25] = ACTIONS(52),
    [aux_sym_core_token26] = ACTIONS(52),
    [aux_sym_core_token27] = ACTIONS(52),
    [aux_sym_core_token28] = ACTIONS(52),
    [aux_sym_core_token29] = ACTIONS(52),
    [aux_sym_core_token30] = ACTIONS(52),
    [aux_sym_core_token31] = ACTIONS(52),
    [aux_sym_core_token32] = ACTIONS(52),
    [aux_sym_core_token33] = ACTIONS(52),
    [aux_sym_core_token34] = ACTIONS(52),
    [aux_sym_core_token35] = ACTIONS(52),
    [aux_sym_core_token36] = ACTIONS(52),
    [aux_sym_core_token37] = ACTIONS(52),
    [aux_sym_core_token38] = ACTIONS(52),
    [aux_sym_core_token39] = ACTIONS(52),
    [aux_sym_core_token40] = ACTIONS(52),
    [aux_sym_core_token41] = ACTIONS(52),
    [aux_sym_core_token42] = ACTIONS(52),
    [aux_sym_core_token43] = ACTIONS(52),
    [aux_sym_core_token44] = ACTIONS(52),
    [aux_sym_core_token45] = ACTIONS(52),
    [aux_sym_core_token46] = ACTIONS(52),
    [aux_sym_core_token47] = ACTIONS(52),
    [aux_sym_core_token48] = ACTIONS(52),
    [aux_sym_core_token49] = ACTIONS(52),
    [aux_sym_core_token50] = ACTIONS(52),
    [aux_sym_core_token51] = ACTIONS(52),
    [aux_sym_core_token52] = ACTIONS(52),
    [aux_sym_core_token53] = ACTIONS(52),
    [aux_sym_core_token54] = ACTIONS(52),
    [aux_sym_core_token55] = ACTIONS(52),
    [aux_sym_core_token56] = ACTIONS(52),
    [aux_sym_core_token57] = ACTIONS(52),
    [aux_sym_core_token58] = ACTIONS(52),
    [aux_sym_core_token59] = ACTIONS(52),
    [aux_sym_core_token60] = ACTIONS(52),
    [aux_sym_core_token61] = ACTIONS(52),
    [aux_sym_core_token62] = ACTIONS(52),
    [aux_sym_core_token63] = ACTIONS(52),
    [aux_sym_core_token64] = ACTIONS(52),
    [aux_sym_core_token65] = ACTIONS(52),
    [aux_sym_core_token66] = ACTIONS(52),
    [aux_sym_core_token67] = ACTIONS(52),
    [aux_sym_core_token68] = ACTIONS(52),
    [aux_sym_core_token69] = ACTIONS(52),
    [aux_sym_core_token70] = ACTIONS(52),
    [aux_sym_core_token71] = ACTIONS(52),
    [aux_sym_core_token72] = ACTIONS(52),
    [aux_sym_core_token73] = ACTIONS(52),
    [aux_sym_core_token74] = ACTIONS(52),
    [aux_sym_core_token75] = ACTIONS(52),
    [aux_sym_core_token76] = ACTIONS(52),
    [aux_sym_core_token77] = ACTIONS(52),
    [aux_sym_core_token78] = ACTIONS(52),
    [aux_sym_core_token79] = ACTIONS(52),
    [aux_sym_core_token80] = ACTIONS(52),
    [aux_sym_core_token81] = ACTIONS(52),
    [aux_sym_core_token82] = ACTIONS(52),
    [aux_sym_core_token83] = ACTIONS(52),
    [aux_sym_core_token84] = ACTIONS(52),
    [aux_sym_core_token85] = ACTIONS(52),
    [aux_sym_core_token86] = ACTIONS(52),
    [aux_sym_core_token87] = ACTIONS(52),
    [aux_sym_core_token88] = ACTIONS(52),
    [aux_sym_core_token89] = ACTIONS(52),
    [aux_sym_core_token90] = ACTIONS(52),
    [aux_sym_core_token91] = ACTIONS(52),
    [aux_sym_core_token92] = ACTIONS(52),
    [aux_sym_core_token93] = ACTIONS(52),
    [aux_sym_core_token94] = ACTIONS(52),
    [aux_sym_core_token95] = ACTIONS(52),
    [aux_sym_core_token96] = ACTIONS(52),
    [aux_sym_core_token97] = ACTIONS(52),
    [aux_sym_core_token98] = ACTIONS(52),
    [aux_sym_core_token99] = ACTIONS(52),
    [aux_sym_core_token100] = ACTIONS(52),
    [aux_sym_core_token101] = ACTIONS(52),
    [aux_sym_core_token102] = ACTIONS(52),
    [aux_sym_core_token103] = ACTIONS(52),
    [aux_sym_core_token104] = ACTIONS(52),
    [aux_sym_core_token105] = ACTIONS(52),
    [aux_sym_core_token106] = ACTIONS(52),
    [aux_sym_core_token107] = ACTIONS(52),
    [aux_sym_core_token108] = ACTIONS(52),
    [aux_sym_core_token109] = ACTIONS(52),
    [aux_sym_core_token110] = ACTIONS(52),
    [aux_sym_core_token111] = ACTIONS(52),
    [aux_sym_core_token112] = ACTIONS(52),
    [aux_sym_core_token113] = ACTIONS(52),
    [aux_sym_core_token114] = ACTIONS(52),
    [aux_sym_core_token115] = ACTIONS(52),
    [aux_sym_core_token116] = ACTIONS(52),
    [aux_sym_core_token117] = ACTIONS(52),
    [aux_sym_core_token118] = ACTIONS(52),
    [aux_sym_core_token119] = ACTIONS(52),
    [aux_sym_core_token120] = ACTIONS(52),
    [aux_sym_core_token121] = ACTIONS(52),
    [aux_sym_core_token122] = ACTIONS(52),
    [aux_sym_core_token123] = ACTIONS(52),
    [aux_sym_core_token124] = ACTIONS(52),
    [aux_sym_core_token125] = ACTIONS(52),
    [aux_sym_core_token126] = ACTIONS(52),
    [aux_sym_core_token127] = ACTIONS(52),
    [aux_sym_core_token128] = ACTIONS(52),
    [aux_sym_core_token129] = ACTIONS(52),
    [aux_sym_core_token130] = ACTIONS(52),
    [aux_sym_core_token131] = ACTIONS(52),
    [aux_sym_core_token132] = ACTIONS(52),
    [aux_sym_core_token133] = ACTIONS(52),
    [aux_sym_core_token134] = ACTIONS(52),
    [aux_sym_core_token135] = ACTIONS(52),
    [aux_sym_core_token136] = ACTIONS(52),
    [aux_sym_core_token137] = ACTIONS(52),
    [aux_sym_core_token138] = ACTIONS(52),
    [aux_sym_core_token139] = ACTIONS(52),
    [aux_sym_core_token140] = ACTIONS(52),
    [aux_sym_core_token141] = ACTIONS(52),
    [aux_sym_core_token142] = ACTIONS(52),
    [aux_sym_core_token143] = ACTIONS(52),
    [aux_sym_core_token144] = ACTIONS(52),
    [aux_sym_core_token145] = ACTIONS(52),
    [aux_sym_core_token146] = ACTIONS(52),
    [aux_sym_core_token147] = ACTIONS(52),
    [aux_sym_core_token148] = ACTIONS(52),
    [aux_sym_core_token149] = ACTIONS(52),
    [aux_sym_core_token150] = ACTIONS(52),
    [aux_sym_core_token151] = ACTIONS(52),
    [aux_sym_core_token152] = ACTIONS(52),
    [aux_sym_core_token153] = ACTIONS(52),
    [aux_sym_core_token154] = ACTIONS(52),
    [aux_sym_core_token155] = ACTIONS(52),
    [aux_sym_core_token156] = ACTIONS(52),
    [aux_sym_core_token157] = ACTIONS(52),
    [aux_sym_core_token158] = ACTIONS(52),
    [aux_sym_core_token159] = ACTIONS(52),
    [aux_sym_core_token160] = ACTIONS(52),
    [aux_sym_core_token161] = ACTIONS(52),
    [aux_sym_core_token162] = ACTIONS(52),
    [aux_sym_core_token163] = ACTIONS(52),
    [aux_sym_core_token164] = ACTIONS(52),
    [aux_sym_core_token165] = ACTIONS(52),
    [aux_sym_core_token166] = ACTIONS(52),
    [aux_sym_core_token167] = ACTIONS(52),
    [aux_sym_core_token168] = ACTIONS(52),
    [aux_sym_core_token169] = ACTIONS(52),
    [aux_sym_core_token170] = ACTIONS(52),
    [aux_sym_core_token171] = ACTIONS(52),
    [aux_sym_core_token172] = ACTIONS(52),
    [anon_sym_EQ] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_STAR_SLASH] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [sym_word] = ACTIONS(56),
    [anon_sym_SEMI] = ACTIONS(58),
  },
  [6] = {
    [sym_comment] = STATE(5),
    [sym_number] = STATE(5),
    [sym_builtin] = STATE(5),
    [sym_core] = STATE(21),
    [sym_operator] = STATE(21),
    [sym_stack_effects] = STATE(8),
    [aux_sym_word_definition_repeat1] = STATE(5),
    [aux_sym_comment_token1] = ACTIONS(48),
    [aux_sym_comment_token2] = ACTIONS(48),
    [aux_sym_number_token1] = ACTIONS(50),
    [aux_sym_core_token1] = ACTIONS(52),
    [aux_sym_core_token2] = ACTIONS(52),
    [aux_sym_core_token3] = ACTIONS(52),
    [aux_sym_core_token4] = ACTIONS(52),
    [aux_sym_core_token5] = ACTIONS(52),
    [aux_sym_core_token6] = ACTIONS(52),
    [aux_sym_core_token7] = ACTIONS(52),
    [aux_sym_core_token8] = ACTIONS(52),
    [aux_sym_core_token9] = ACTIONS(52),
    [aux_sym_core_token10] = ACTIONS(52),
    [aux_sym_core_token11] = ACTIONS(52),
    [aux_sym_core_token12] = ACTIONS(52),
    [aux_sym_core_token13] = ACTIONS(52),
    [aux_sym_core_token14] = ACTIONS(52),
    [aux_sym_core_token15] = ACTIONS(52),
    [aux_sym_core_token16] = ACTIONS(52),
    [aux_sym_core_token17] = ACTIONS(52),
    [aux_sym_core_token18] = ACTIONS(52),
    [aux_sym_core_token19] = ACTIONS(52),
    [aux_sym_core_token20] = ACTIONS(52),
    [aux_sym_core_token21] = ACTIONS(52),
    [aux_sym_core_token22] = ACTIONS(52),
    [aux_sym_core_token23] = ACTIONS(52),
    [aux_sym_core_token24] = ACTIONS(52),
    [aux_sym_core_token25] = ACTIONS(52),
    [aux_sym_core_token26] = ACTIONS(52),
    [aux_sym_core_token27] = ACTIONS(52),
    [aux_sym_core_token28] = ACTIONS(52),
    [aux_sym_core_token29] = ACTIONS(52),
    [aux_sym_core_token30] = ACTIONS(52),
    [aux_sym_core_token31] = ACTIONS(52),
    [aux_sym_core_token32] = ACTIONS(52),
    [aux_sym_core_token33] = ACTIONS(52),
    [aux_sym_core_token34] = ACTIONS(52),
    [aux_sym_core_token35] = ACTIONS(52),
    [aux_sym_core_token36] = ACTIONS(52),
    [aux_sym_core_token37] = ACTIONS(52),
    [aux_sym_core_token38] = ACTIONS(52),
    [aux_sym_core_token39] = ACTIONS(52),
    [aux_sym_core_token40] = ACTIONS(52),
    [aux_sym_core_token41] = ACTIONS(52),
    [aux_sym_core_token42] = ACTIONS(52),
    [aux_sym_core_token43] = ACTIONS(52),
    [aux_sym_core_token44] = ACTIONS(52),
    [aux_sym_core_token45] = ACTIONS(52),
    [aux_sym_core_token46] = ACTIONS(52),
    [aux_sym_core_token47] = ACTIONS(52),
    [aux_sym_core_token48] = ACTIONS(52),
    [aux_sym_core_token49] = ACTIONS(52),
    [aux_sym_core_token50] = ACTIONS(52),
    [aux_sym_core_token51] = ACTIONS(52),
    [aux_sym_core_token52] = ACTIONS(52),
    [aux_sym_core_token53] = ACTIONS(52),
    [aux_sym_core_token54] = ACTIONS(52),
    [aux_sym_core_token55] = ACTIONS(52),
    [aux_sym_core_token56] = ACTIONS(52),
    [aux_sym_core_token57] = ACTIONS(52),
    [aux_sym_core_token58] = ACTIONS(52),
    [aux_sym_core_token59] = ACTIONS(52),
    [aux_sym_core_token60] = ACTIONS(52),
    [aux_sym_core_token61] = ACTIONS(52),
    [aux_sym_core_token62] = ACTIONS(52),
    [aux_sym_core_token63] = ACTIONS(52),
    [aux_sym_core_token64] = ACTIONS(52),
    [aux_sym_core_token65] = ACTIONS(52),
    [aux_sym_core_token66] = ACTIONS(52),
    [aux_sym_core_token67] = ACTIONS(52),
    [aux_sym_core_token68] = ACTIONS(52),
    [aux_sym_core_token69] = ACTIONS(52),
    [aux_sym_core_token70] = ACTIONS(52),
    [aux_sym_core_token71] = ACTIONS(52),
    [aux_sym_core_token72] = ACTIONS(52),
    [aux_sym_core_token73] = ACTIONS(52),
    [aux_sym_core_token74] = ACTIONS(52),
    [aux_sym_core_token75] = ACTIONS(52),
    [aux_sym_core_token76] = ACTIONS(52),
    [aux_sym_core_token77] = ACTIONS(52),
    [aux_sym_core_token78] = ACTIONS(52),
    [aux_sym_core_token79] = ACTIONS(52),
    [aux_sym_core_token80] = ACTIONS(52),
    [aux_sym_core_token81] = ACTIONS(52),
    [aux_sym_core_token82] = ACTIONS(52),
    [aux_sym_core_token83] = ACTIONS(52),
    [aux_sym_core_token84] = ACTIONS(52),
    [aux_sym_core_token85] = ACTIONS(52),
    [aux_sym_core_token86] = ACTIONS(52),
    [aux_sym_core_token87] = ACTIONS(52),
    [aux_sym_core_token88] = ACTIONS(52),
    [aux_sym_core_token89] = ACTIONS(52),
    [aux_sym_core_token90] = ACTIONS(52),
    [aux_sym_core_token91] = ACTIONS(52),
    [aux_sym_core_token92] = ACTIONS(52),
    [aux_sym_core_token93] = ACTIONS(52),
    [aux_sym_core_token94] = ACTIONS(52),
    [aux_sym_core_token95] = ACTIONS(52),
    [aux_sym_core_token96] = ACTIONS(52),
    [aux_sym_core_token97] = ACTIONS(52),
    [aux_sym_core_token98] = ACTIONS(52),
    [aux_sym_core_token99] = ACTIONS(52),
    [aux_sym_core_token100] = ACTIONS(52),
    [aux_sym_core_token101] = ACTIONS(52),
    [aux_sym_core_token102] = ACTIONS(52),
    [aux_sym_core_token103] = ACTIONS(52),
    [aux_sym_core_token104] = ACTIONS(52),
    [aux_sym_core_token105] = ACTIONS(52),
    [aux_sym_core_token106] = ACTIONS(52),
    [aux_sym_core_token107] = ACTIONS(52),
    [aux_sym_core_token108] = ACTIONS(52),
    [aux_sym_core_token109] = ACTIONS(52),
    [aux_sym_core_token110] = ACTIONS(52),
    [aux_sym_core_token111] = ACTIONS(52),
    [aux_sym_core_token112] = ACTIONS(52),
    [aux_sym_core_token113] = ACTIONS(52),
    [aux_sym_core_token114] = ACTIONS(52),
    [aux_sym_core_token115] = ACTIONS(52),
    [aux_sym_core_token116] = ACTIONS(52),
    [aux_sym_core_token117] = ACTIONS(52),
    [aux_sym_core_token118] = ACTIONS(52),
    [aux_sym_core_token119] = ACTIONS(52),
    [aux_sym_core_token120] = ACTIONS(52),
    [aux_sym_core_token121] = ACTIONS(52),
    [aux_sym_core_token122] = ACTIONS(52),
    [aux_sym_core_token123] = ACTIONS(52),
    [aux_sym_core_token124] = ACTIONS(52),
    [aux_sym_core_token125] = ACTIONS(52),
    [aux_sym_core_token126] = ACTIONS(52),
    [aux_sym_core_token127] = ACTIONS(52),
    [aux_sym_core_token128] = ACTIONS(52),
    [aux_sym_core_token129] = ACTIONS(52),
    [aux_sym_core_token130] = ACTIONS(52),
    [aux_sym_core_token131] = ACTIONS(52),
    [aux_sym_core_token132] = ACTIONS(52),
    [aux_sym_core_token133] = ACTIONS(52),
    [aux_sym_core_token134] = ACTIONS(52),
    [aux_sym_core_token135] = ACTIONS(52),
    [aux_sym_core_token136] = ACTIONS(52),
    [aux_sym_core_token137] = ACTIONS(52),
    [aux_sym_core_token138] = ACTIONS(52),
    [aux_sym_core_token139] = ACTIONS(52),
    [aux_sym_core_token140] = ACTIONS(52),
    [aux_sym_core_token141] = ACTIONS(52),
    [aux_sym_core_token142] = ACTIONS(52),
    [aux_sym_core_token143] = ACTIONS(52),
    [aux_sym_core_token144] = ACTIONS(52),
    [aux_sym_core_token145] = ACTIONS(52),
    [aux_sym_core_token146] = ACTIONS(52),
    [aux_sym_core_token147] = ACTIONS(52),
    [aux_sym_core_token148] = ACTIONS(52),
    [aux_sym_core_token149] = ACTIONS(52),
    [aux_sym_core_token150] = ACTIONS(52),
    [aux_sym_core_token151] = ACTIONS(52),
    [aux_sym_core_token152] = ACTIONS(52),
    [aux_sym_core_token153] = ACTIONS(52),
    [aux_sym_core_token154] = ACTIONS(52),
    [aux_sym_core_token155] = ACTIONS(52),
    [aux_sym_core_token156] = ACTIONS(52),
    [aux_sym_core_token157] = ACTIONS(52),
    [aux_sym_core_token158] = ACTIONS(52),
    [aux_sym_core_token159] = ACTIONS(52),
    [aux_sym_core_token160] = ACTIONS(52),
    [aux_sym_core_token161] = ACTIONS(52),
    [aux_sym_core_token162] = ACTIONS(52),
    [aux_sym_core_token163] = ACTIONS(52),
    [aux_sym_core_token164] = ACTIONS(52),
    [aux_sym_core_token165] = ACTIONS(52),
    [aux_sym_core_token166] = ACTIONS(52),
    [aux_sym_core_token167] = ACTIONS(52),
    [aux_sym_core_token168] = ACTIONS(52),
    [aux_sym_core_token169] = ACTIONS(52),
    [aux_sym_core_token170] = ACTIONS(52),
    [aux_sym_core_token171] = ACTIONS(52),
    [aux_sym_core_token172] = ACTIONS(52),
    [anon_sym_EQ] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_STAR_SLASH] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [sym_word] = ACTIONS(60),
    [sym_lparen] = ACTIONS(62),
  },
  [7] = {
    [sym_comment] = STATE(7),
    [sym_number] = STATE(7),
    [sym_builtin] = STATE(7),
    [sym_core] = STATE(21),
    [sym_operator] = STATE(21),
    [aux_sym_word_definition_repeat1] = STATE(7),
    [aux_sym_comment_token1] = ACTIONS(64),
    [aux_sym_comment_token2] = ACTIONS(64),
    [aux_sym_number_token1] = ACTIONS(67),
    [aux_sym_core_token1] = ACTIONS(70),
    [aux_sym_core_token2] = ACTIONS(70),
    [aux_sym_core_token3] = ACTIONS(70),
    [aux_sym_core_token4] = ACTIONS(70),
    [aux_sym_core_token5] = ACTIONS(70),
    [aux_sym_core_token6] = ACTIONS(70),
    [aux_sym_core_token7] = ACTIONS(70),
    [aux_sym_core_token8] = ACTIONS(70),
    [aux_sym_core_token9] = ACTIONS(70),
    [aux_sym_core_token10] = ACTIONS(70),
    [aux_sym_core_token11] = ACTIONS(70),
    [aux_sym_core_token12] = ACTIONS(70),
    [aux_sym_core_token13] = ACTIONS(70),
    [aux_sym_core_token14] = ACTIONS(70),
    [aux_sym_core_token15] = ACTIONS(70),
    [aux_sym_core_token16] = ACTIONS(70),
    [aux_sym_core_token17] = ACTIONS(70),
    [aux_sym_core_token18] = ACTIONS(70),
    [aux_sym_core_token19] = ACTIONS(70),
    [aux_sym_core_token20] = ACTIONS(70),
    [aux_sym_core_token21] = ACTIONS(70),
    [aux_sym_core_token22] = ACTIONS(70),
    [aux_sym_core_token23] = ACTIONS(70),
    [aux_sym_core_token24] = ACTIONS(70),
    [aux_sym_core_token25] = ACTIONS(70),
    [aux_sym_core_token26] = ACTIONS(70),
    [aux_sym_core_token27] = ACTIONS(70),
    [aux_sym_core_token28] = ACTIONS(70),
    [aux_sym_core_token29] = ACTIONS(70),
    [aux_sym_core_token30] = ACTIONS(70),
    [aux_sym_core_token31] = ACTIONS(70),
    [aux_sym_core_token32] = ACTIONS(70),
    [aux_sym_core_token33] = ACTIONS(70),
    [aux_sym_core_token34] = ACTIONS(70),
    [aux_sym_core_token35] = ACTIONS(70),
    [aux_sym_core_token36] = ACTIONS(70),
    [aux_sym_core_token37] = ACTIONS(70),
    [aux_sym_core_token38] = ACTIONS(70),
    [aux_sym_core_token39] = ACTIONS(70),
    [aux_sym_core_token40] = ACTIONS(70),
    [aux_sym_core_token41] = ACTIONS(70),
    [aux_sym_core_token42] = ACTIONS(70),
    [aux_sym_core_token43] = ACTIONS(70),
    [aux_sym_core_token44] = ACTIONS(70),
    [aux_sym_core_token45] = ACTIONS(70),
    [aux_sym_core_token46] = ACTIONS(70),
    [aux_sym_core_token47] = ACTIONS(70),
    [aux_sym_core_token48] = ACTIONS(70),
    [aux_sym_core_token49] = ACTIONS(70),
    [aux_sym_core_token50] = ACTIONS(70),
    [aux_sym_core_token51] = ACTIONS(70),
    [aux_sym_core_token52] = ACTIONS(70),
    [aux_sym_core_token53] = ACTIONS(70),
    [aux_sym_core_token54] = ACTIONS(70),
    [aux_sym_core_token55] = ACTIONS(70),
    [aux_sym_core_token56] = ACTIONS(70),
    [aux_sym_core_token57] = ACTIONS(70),
    [aux_sym_core_token58] = ACTIONS(70),
    [aux_sym_core_token59] = ACTIONS(70),
    [aux_sym_core_token60] = ACTIONS(70),
    [aux_sym_core_token61] = ACTIONS(70),
    [aux_sym_core_token62] = ACTIONS(70),
    [aux_sym_core_token63] = ACTIONS(70),
    [aux_sym_core_token64] = ACTIONS(70),
    [aux_sym_core_token65] = ACTIONS(70),
    [aux_sym_core_token66] = ACTIONS(70),
    [aux_sym_core_token67] = ACTIONS(70),
    [aux_sym_core_token68] = ACTIONS(70),
    [aux_sym_core_token69] = ACTIONS(70),
    [aux_sym_core_token70] = ACTIONS(70),
    [aux_sym_core_token71] = ACTIONS(70),
    [aux_sym_core_token72] = ACTIONS(70),
    [aux_sym_core_token73] = ACTIONS(70),
    [aux_sym_core_token74] = ACTIONS(70),
    [aux_sym_core_token75] = ACTIONS(70),
    [aux_sym_core_token76] = ACTIONS(70),
    [aux_sym_core_token77] = ACTIONS(70),
    [aux_sym_core_token78] = ACTIONS(70),
    [aux_sym_core_token79] = ACTIONS(70),
    [aux_sym_core_token80] = ACTIONS(70),
    [aux_sym_core_token81] = ACTIONS(70),
    [aux_sym_core_token82] = ACTIONS(70),
    [aux_sym_core_token83] = ACTIONS(70),
    [aux_sym_core_token84] = ACTIONS(70),
    [aux_sym_core_token85] = ACTIONS(70),
    [aux_sym_core_token86] = ACTIONS(70),
    [aux_sym_core_token87] = ACTIONS(70),
    [aux_sym_core_token88] = ACTIONS(70),
    [aux_sym_core_token89] = ACTIONS(70),
    [aux_sym_core_token90] = ACTIONS(70),
    [aux_sym_core_token91] = ACTIONS(70),
    [aux_sym_core_token92] = ACTIONS(70),
    [aux_sym_core_token93] = ACTIONS(70),
    [aux_sym_core_token94] = ACTIONS(70),
    [aux_sym_core_token95] = ACTIONS(70),
    [aux_sym_core_token96] = ACTIONS(70),
    [aux_sym_core_token97] = ACTIONS(70),
    [aux_sym_core_token98] = ACTIONS(70),
    [aux_sym_core_token99] = ACTIONS(70),
    [aux_sym_core_token100] = ACTIONS(70),
    [aux_sym_core_token101] = ACTIONS(70),
    [aux_sym_core_token102] = ACTIONS(70),
    [aux_sym_core_token103] = ACTIONS(70),
    [aux_sym_core_token104] = ACTIONS(70),
    [aux_sym_core_token105] = ACTIONS(70),
    [aux_sym_core_token106] = ACTIONS(70),
    [aux_sym_core_token107] = ACTIONS(70),
    [aux_sym_core_token108] = ACTIONS(70),
    [aux_sym_core_token109] = ACTIONS(70),
    [aux_sym_core_token110] = ACTIONS(70),
    [aux_sym_core_token111] = ACTIONS(70),
    [aux_sym_core_token112] = ACTIONS(70),
    [aux_sym_core_token113] = ACTIONS(70),
    [aux_sym_core_token114] = ACTIONS(70),
    [aux_sym_core_token115] = ACTIONS(70),
    [aux_sym_core_token116] = ACTIONS(70),
    [aux_sym_core_token117] = ACTIONS(70),
    [aux_sym_core_token118] = ACTIONS(70),
    [aux_sym_core_token119] = ACTIONS(70),
    [aux_sym_core_token120] = ACTIONS(70),
    [aux_sym_core_token121] = ACTIONS(70),
    [aux_sym_core_token122] = ACTIONS(70),
    [aux_sym_core_token123] = ACTIONS(70),
    [aux_sym_core_token124] = ACTIONS(70),
    [aux_sym_core_token125] = ACTIONS(70),
    [aux_sym_core_token126] = ACTIONS(70),
    [aux_sym_core_token127] = ACTIONS(70),
    [aux_sym_core_token128] = ACTIONS(70),
    [aux_sym_core_token129] = ACTIONS(70),
    [aux_sym_core_token130] = ACTIONS(70),
    [aux_sym_core_token131] = ACTIONS(70),
    [aux_sym_core_token132] = ACTIONS(70),
    [aux_sym_core_token133] = ACTIONS(70),
    [aux_sym_core_token134] = ACTIONS(70),
    [aux_sym_core_token135] = ACTIONS(70),
    [aux_sym_core_token136] = ACTIONS(70),
    [aux_sym_core_token137] = ACTIONS(70),
    [aux_sym_core_token138] = ACTIONS(70),
    [aux_sym_core_token139] = ACTIONS(70),
    [aux_sym_core_token140] = ACTIONS(70),
    [aux_sym_core_token141] = ACTIONS(70),
    [aux_sym_core_token142] = ACTIONS(70),
    [aux_sym_core_token143] = ACTIONS(70),
    [aux_sym_core_token144] = ACTIONS(70),
    [aux_sym_core_token145] = ACTIONS(70),
    [aux_sym_core_token146] = ACTIONS(70),
    [aux_sym_core_token147] = ACTIONS(70),
    [aux_sym_core_token148] = ACTIONS(70),
    [aux_sym_core_token149] = ACTIONS(70),
    [aux_sym_core_token150] = ACTIONS(70),
    [aux_sym_core_token151] = ACTIONS(70),
    [aux_sym_core_token152] = ACTIONS(70),
    [aux_sym_core_token153] = ACTIONS(70),
    [aux_sym_core_token154] = ACTIONS(70),
    [aux_sym_core_token155] = ACTIONS(70),
    [aux_sym_core_token156] = ACTIONS(70),
    [aux_sym_core_token157] = ACTIONS(70),
    [aux_sym_core_token158] = ACTIONS(70),
    [aux_sym_core_token159] = ACTIONS(70),
    [aux_sym_core_token160] = ACTIONS(70),
    [aux_sym_core_token161] = ACTIONS(70),
    [aux_sym_core_token162] = ACTIONS(70),
    [aux_sym_core_token163] = ACTIONS(70),
    [aux_sym_core_token164] = ACTIONS(70),
    [aux_sym_core_token165] = ACTIONS(70),
    [aux_sym_core_token166] = ACTIONS(70),
    [aux_sym_core_token167] = ACTIONS(70),
    [aux_sym_core_token168] = ACTIONS(70),
    [aux_sym_core_token169] = ACTIONS(70),
    [aux_sym_core_token170] = ACTIONS(70),
    [aux_sym_core_token171] = ACTIONS(70),
    [aux_sym_core_token172] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_STAR] = ACTIONS(73),
    [anon_sym_STAR_SLASH] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(73),
    [sym_word] = ACTIONS(76),
    [anon_sym_SEMI] = ACTIONS(79),
  },
  [8] = {
    [sym_comment] = STATE(4),
    [sym_number] = STATE(4),
    [sym_builtin] = STATE(4),
    [sym_core] = STATE(21),
    [sym_operator] = STATE(21),
    [aux_sym_word_definition_repeat1] = STATE(4),
    [aux_sym_comment_token1] = ACTIONS(48),
    [aux_sym_comment_token2] = ACTIONS(48),
    [aux_sym_number_token1] = ACTIONS(50),
    [aux_sym_core_token1] = ACTIONS(52),
    [aux_sym_core_token2] = ACTIONS(52),
    [aux_sym_core_token3] = ACTIONS(52),
    [aux_sym_core_token4] = ACTIONS(52),
    [aux_sym_core_token5] = ACTIONS(52),
    [aux_sym_core_token6] = ACTIONS(52),
    [aux_sym_core_token7] = ACTIONS(52),
    [aux_sym_core_token8] = ACTIONS(52),
    [aux_sym_core_token9] = ACTIONS(52),
    [aux_sym_core_token10] = ACTIONS(52),
    [aux_sym_core_token11] = ACTIONS(52),
    [aux_sym_core_token12] = ACTIONS(52),
    [aux_sym_core_token13] = ACTIONS(52),
    [aux_sym_core_token14] = ACTIONS(52),
    [aux_sym_core_token15] = ACTIONS(52),
    [aux_sym_core_token16] = ACTIONS(52),
    [aux_sym_core_token17] = ACTIONS(52),
    [aux_sym_core_token18] = ACTIONS(52),
    [aux_sym_core_token19] = ACTIONS(52),
    [aux_sym_core_token20] = ACTIONS(52),
    [aux_sym_core_token21] = ACTIONS(52),
    [aux_sym_core_token22] = ACTIONS(52),
    [aux_sym_core_token23] = ACTIONS(52),
    [aux_sym_core_token24] = ACTIONS(52),
    [aux_sym_core_token25] = ACTIONS(52),
    [aux_sym_core_token26] = ACTIONS(52),
    [aux_sym_core_token27] = ACTIONS(52),
    [aux_sym_core_token28] = ACTIONS(52),
    [aux_sym_core_token29] = ACTIONS(52),
    [aux_sym_core_token30] = ACTIONS(52),
    [aux_sym_core_token31] = ACTIONS(52),
    [aux_sym_core_token32] = ACTIONS(52),
    [aux_sym_core_token33] = ACTIONS(52),
    [aux_sym_core_token34] = ACTIONS(52),
    [aux_sym_core_token35] = ACTIONS(52),
    [aux_sym_core_token36] = ACTIONS(52),
    [aux_sym_core_token37] = ACTIONS(52),
    [aux_sym_core_token38] = ACTIONS(52),
    [aux_sym_core_token39] = ACTIONS(52),
    [aux_sym_core_token40] = ACTIONS(52),
    [aux_sym_core_token41] = ACTIONS(52),
    [aux_sym_core_token42] = ACTIONS(52),
    [aux_sym_core_token43] = ACTIONS(52),
    [aux_sym_core_token44] = ACTIONS(52),
    [aux_sym_core_token45] = ACTIONS(52),
    [aux_sym_core_token46] = ACTIONS(52),
    [aux_sym_core_token47] = ACTIONS(52),
    [aux_sym_core_token48] = ACTIONS(52),
    [aux_sym_core_token49] = ACTIONS(52),
    [aux_sym_core_token50] = ACTIONS(52),
    [aux_sym_core_token51] = ACTIONS(52),
    [aux_sym_core_token52] = ACTIONS(52),
    [aux_sym_core_token53] = ACTIONS(52),
    [aux_sym_core_token54] = ACTIONS(52),
    [aux_sym_core_token55] = ACTIONS(52),
    [aux_sym_core_token56] = ACTIONS(52),
    [aux_sym_core_token57] = ACTIONS(52),
    [aux_sym_core_token58] = ACTIONS(52),
    [aux_sym_core_token59] = ACTIONS(52),
    [aux_sym_core_token60] = ACTIONS(52),
    [aux_sym_core_token61] = ACTIONS(52),
    [aux_sym_core_token62] = ACTIONS(52),
    [aux_sym_core_token63] = ACTIONS(52),
    [aux_sym_core_token64] = ACTIONS(52),
    [aux_sym_core_token65] = ACTIONS(52),
    [aux_sym_core_token66] = ACTIONS(52),
    [aux_sym_core_token67] = ACTIONS(52),
    [aux_sym_core_token68] = ACTIONS(52),
    [aux_sym_core_token69] = ACTIONS(52),
    [aux_sym_core_token70] = ACTIONS(52),
    [aux_sym_core_token71] = ACTIONS(52),
    [aux_sym_core_token72] = ACTIONS(52),
    [aux_sym_core_token73] = ACTIONS(52),
    [aux_sym_core_token74] = ACTIONS(52),
    [aux_sym_core_token75] = ACTIONS(52),
    [aux_sym_core_token76] = ACTIONS(52),
    [aux_sym_core_token77] = ACTIONS(52),
    [aux_sym_core_token78] = ACTIONS(52),
    [aux_sym_core_token79] = ACTIONS(52),
    [aux_sym_core_token80] = ACTIONS(52),
    [aux_sym_core_token81] = ACTIONS(52),
    [aux_sym_core_token82] = ACTIONS(52),
    [aux_sym_core_token83] = ACTIONS(52),
    [aux_sym_core_token84] = ACTIONS(52),
    [aux_sym_core_token85] = ACTIONS(52),
    [aux_sym_core_token86] = ACTIONS(52),
    [aux_sym_core_token87] = ACTIONS(52),
    [aux_sym_core_token88] = ACTIONS(52),
    [aux_sym_core_token89] = ACTIONS(52),
    [aux_sym_core_token90] = ACTIONS(52),
    [aux_sym_core_token91] = ACTIONS(52),
    [aux_sym_core_token92] = ACTIONS(52),
    [aux_sym_core_token93] = ACTIONS(52),
    [aux_sym_core_token94] = ACTIONS(52),
    [aux_sym_core_token95] = ACTIONS(52),
    [aux_sym_core_token96] = ACTIONS(52),
    [aux_sym_core_token97] = ACTIONS(52),
    [aux_sym_core_token98] = ACTIONS(52),
    [aux_sym_core_token99] = ACTIONS(52),
    [aux_sym_core_token100] = ACTIONS(52),
    [aux_sym_core_token101] = ACTIONS(52),
    [aux_sym_core_token102] = ACTIONS(52),
    [aux_sym_core_token103] = ACTIONS(52),
    [aux_sym_core_token104] = ACTIONS(52),
    [aux_sym_core_token105] = ACTIONS(52),
    [aux_sym_core_token106] = ACTIONS(52),
    [aux_sym_core_token107] = ACTIONS(52),
    [aux_sym_core_token108] = ACTIONS(52),
    [aux_sym_core_token109] = ACTIONS(52),
    [aux_sym_core_token110] = ACTIONS(52),
    [aux_sym_core_token111] = ACTIONS(52),
    [aux_sym_core_token112] = ACTIONS(52),
    [aux_sym_core_token113] = ACTIONS(52),
    [aux_sym_core_token114] = ACTIONS(52),
    [aux_sym_core_token115] = ACTIONS(52),
    [aux_sym_core_token116] = ACTIONS(52),
    [aux_sym_core_token117] = ACTIONS(52),
    [aux_sym_core_token118] = ACTIONS(52),
    [aux_sym_core_token119] = ACTIONS(52),
    [aux_sym_core_token120] = ACTIONS(52),
    [aux_sym_core_token121] = ACTIONS(52),
    [aux_sym_core_token122] = ACTIONS(52),
    [aux_sym_core_token123] = ACTIONS(52),
    [aux_sym_core_token124] = ACTIONS(52),
    [aux_sym_core_token125] = ACTIONS(52),
    [aux_sym_core_token126] = ACTIONS(52),
    [aux_sym_core_token127] = ACTIONS(52),
    [aux_sym_core_token128] = ACTIONS(52),
    [aux_sym_core_token129] = ACTIONS(52),
    [aux_sym_core_token130] = ACTIONS(52),
    [aux_sym_core_token131] = ACTIONS(52),
    [aux_sym_core_token132] = ACTIONS(52),
    [aux_sym_core_token133] = ACTIONS(52),
    [aux_sym_core_token134] = ACTIONS(52),
    [aux_sym_core_token135] = ACTIONS(52),
    [aux_sym_core_token136] = ACTIONS(52),
    [aux_sym_core_token137] = ACTIONS(52),
    [aux_sym_core_token138] = ACTIONS(52),
    [aux_sym_core_token139] = ACTIONS(52),
    [aux_sym_core_token140] = ACTIONS(52),
    [aux_sym_core_token141] = ACTIONS(52),
    [aux_sym_core_token142] = ACTIONS(52),
    [aux_sym_core_token143] = ACTIONS(52),
    [aux_sym_core_token144] = ACTIONS(52),
    [aux_sym_core_token145] = ACTIONS(52),
    [aux_sym_core_token146] = ACTIONS(52),
    [aux_sym_core_token147] = ACTIONS(52),
    [aux_sym_core_token148] = ACTIONS(52),
    [aux_sym_core_token149] = ACTIONS(52),
    [aux_sym_core_token150] = ACTIONS(52),
    [aux_sym_core_token151] = ACTIONS(52),
    [aux_sym_core_token152] = ACTIONS(52),
    [aux_sym_core_token153] = ACTIONS(52),
    [aux_sym_core_token154] = ACTIONS(52),
    [aux_sym_core_token155] = ACTIONS(52),
    [aux_sym_core_token156] = ACTIONS(52),
    [aux_sym_core_token157] = ACTIONS(52),
    [aux_sym_core_token158] = ACTIONS(52),
    [aux_sym_core_token159] = ACTIONS(52),
    [aux_sym_core_token160] = ACTIONS(52),
    [aux_sym_core_token161] = ACTIONS(52),
    [aux_sym_core_token162] = ACTIONS(52),
    [aux_sym_core_token163] = ACTIONS(52),
    [aux_sym_core_token164] = ACTIONS(52),
    [aux_sym_core_token165] = ACTIONS(52),
    [aux_sym_core_token166] = ACTIONS(52),
    [aux_sym_core_token167] = ACTIONS(52),
    [aux_sym_core_token168] = ACTIONS(52),
    [aux_sym_core_token169] = ACTIONS(52),
    [aux_sym_core_token170] = ACTIONS(52),
    [aux_sym_core_token171] = ACTIONS(52),
    [aux_sym_core_token172] = ACTIONS(52),
    [anon_sym_EQ] = ACTIONS(54),
    [anon_sym_PLUS] = ACTIONS(54),
    [anon_sym_DASH] = ACTIONS(54),
    [anon_sym_SLASH] = ACTIONS(54),
    [anon_sym_STAR] = ACTIONS(54),
    [anon_sym_STAR_SLASH] = ACTIONS(54),
    [anon_sym_GT] = ACTIONS(54),
    [anon_sym_LT] = ACTIONS(54),
    [sym_word] = ACTIONS(81),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [aux_sym_comment_token1] = ACTIONS(83),
    [aux_sym_comment_token2] = ACTIONS(83),
    [sym_string] = ACTIONS(83),
    [aux_sym_number_token1] = ACTIONS(85),
    [aux_sym_core_token1] = ACTIONS(85),
    [aux_sym_core_token2] = ACTIONS(85),
    [aux_sym_core_token3] = ACTIONS(85),
    [aux_sym_core_token4] = ACTIONS(85),
    [aux_sym_core_token5] = ACTIONS(85),
    [aux_sym_core_token6] = ACTIONS(85),
    [aux_sym_core_token7] = ACTIONS(85),
    [aux_sym_core_token8] = ACTIONS(85),
    [aux_sym_core_token9] = ACTIONS(85),
    [aux_sym_core_token10] = ACTIONS(85),
    [aux_sym_core_token11] = ACTIONS(85),
    [aux_sym_core_token12] = ACTIONS(85),
    [aux_sym_core_token13] = ACTIONS(85),
    [aux_sym_core_token14] = ACTIONS(85),
    [aux_sym_core_token15] = ACTIONS(85),
    [aux_sym_core_token16] = ACTIONS(85),
    [aux_sym_core_token17] = ACTIONS(85),
    [aux_sym_core_token18] = ACTIONS(85),
    [aux_sym_core_token19] = ACTIONS(85),
    [aux_sym_core_token20] = ACTIONS(85),
    [aux_sym_core_token21] = ACTIONS(85),
    [aux_sym_core_token22] = ACTIONS(85),
    [aux_sym_core_token23] = ACTIONS(85),
    [aux_sym_core_token24] = ACTIONS(85),
    [aux_sym_core_token25] = ACTIONS(85),
    [aux_sym_core_token26] = ACTIONS(85),
    [aux_sym_core_token27] = ACTIONS(85),
    [aux_sym_core_token28] = ACTIONS(85),
    [aux_sym_core_token29] = ACTIONS(85),
    [aux_sym_core_token30] = ACTIONS(85),
    [aux_sym_core_token31] = ACTIONS(85),
    [aux_sym_core_token32] = ACTIONS(85),
    [aux_sym_core_token33] = ACTIONS(85),
    [aux_sym_core_token34] = ACTIONS(85),
    [aux_sym_core_token35] = ACTIONS(85),
    [aux_sym_core_token36] = ACTIONS(85),
    [aux_sym_core_token37] = ACTIONS(85),
    [aux_sym_core_token38] = ACTIONS(85),
    [aux_sym_core_token39] = ACTIONS(85),
    [aux_sym_core_token40] = ACTIONS(85),
    [aux_sym_core_token41] = ACTIONS(85),
    [aux_sym_core_token42] = ACTIONS(85),
    [aux_sym_core_token43] = ACTIONS(85),
    [aux_sym_core_token44] = ACTIONS(85),
    [aux_sym_core_token45] = ACTIONS(85),
    [aux_sym_core_token46] = ACTIONS(85),
    [aux_sym_core_token47] = ACTIONS(85),
    [aux_sym_core_token48] = ACTIONS(85),
    [aux_sym_core_token49] = ACTIONS(85),
    [aux_sym_core_token50] = ACTIONS(85),
    [aux_sym_core_token51] = ACTIONS(85),
    [aux_sym_core_token52] = ACTIONS(85),
    [aux_sym_core_token53] = ACTIONS(85),
    [aux_sym_core_token54] = ACTIONS(85),
    [aux_sym_core_token55] = ACTIONS(85),
    [aux_sym_core_token56] = ACTIONS(85),
    [aux_sym_core_token57] = ACTIONS(85),
    [aux_sym_core_token58] = ACTIONS(85),
    [aux_sym_core_token59] = ACTIONS(85),
    [aux_sym_core_token60] = ACTIONS(85),
    [aux_sym_core_token61] = ACTIONS(85),
    [aux_sym_core_token62] = ACTIONS(85),
    [aux_sym_core_token63] = ACTIONS(85),
    [aux_sym_core_token64] = ACTIONS(85),
    [aux_sym_core_token65] = ACTIONS(85),
    [aux_sym_core_token66] = ACTIONS(85),
    [aux_sym_core_token67] = ACTIONS(85),
    [aux_sym_core_token68] = ACTIONS(85),
    [aux_sym_core_token69] = ACTIONS(85),
    [aux_sym_core_token70] = ACTIONS(85),
    [aux_sym_core_token71] = ACTIONS(85),
    [aux_sym_core_token72] = ACTIONS(85),
    [aux_sym_core_token73] = ACTIONS(85),
    [aux_sym_core_token74] = ACTIONS(85),
    [aux_sym_core_token75] = ACTIONS(85),
    [aux_sym_core_token76] = ACTIONS(85),
    [aux_sym_core_token77] = ACTIONS(85),
    [aux_sym_core_token78] = ACTIONS(85),
    [aux_sym_core_token79] = ACTIONS(85),
    [aux_sym_core_token80] = ACTIONS(85),
    [aux_sym_core_token81] = ACTIONS(85),
    [aux_sym_core_token82] = ACTIONS(85),
    [aux_sym_core_token83] = ACTIONS(85),
    [aux_sym_core_token84] = ACTIONS(85),
    [aux_sym_core_token85] = ACTIONS(85),
    [aux_sym_core_token86] = ACTIONS(85),
    [aux_sym_core_token87] = ACTIONS(85),
    [aux_sym_core_token88] = ACTIONS(85),
    [aux_sym_core_token89] = ACTIONS(85),
    [aux_sym_core_token90] = ACTIONS(85),
    [aux_sym_core_token91] = ACTIONS(85),
    [aux_sym_core_token92] = ACTIONS(85),
    [aux_sym_core_token93] = ACTIONS(85),
    [aux_sym_core_token94] = ACTIONS(85),
    [aux_sym_core_token95] = ACTIONS(85),
    [aux_sym_core_token96] = ACTIONS(85),
    [aux_sym_core_token97] = ACTIONS(85),
    [aux_sym_core_token98] = ACTIONS(85),
    [aux_sym_core_token99] = ACTIONS(85),
    [aux_sym_core_token100] = ACTIONS(85),
    [aux_sym_core_token101] = ACTIONS(85),
    [aux_sym_core_token102] = ACTIONS(85),
    [aux_sym_core_token103] = ACTIONS(85),
    [aux_sym_core_token104] = ACTIONS(85),
    [aux_sym_core_token105] = ACTIONS(85),
    [aux_sym_core_token106] = ACTIONS(85),
    [aux_sym_core_token107] = ACTIONS(85),
    [aux_sym_core_token108] = ACTIONS(85),
    [aux_sym_core_token109] = ACTIONS(85),
    [aux_sym_core_token110] = ACTIONS(85),
    [aux_sym_core_token111] = ACTIONS(85),
    [aux_sym_core_token112] = ACTIONS(85),
    [aux_sym_core_token113] = ACTIONS(85),
    [aux_sym_core_token114] = ACTIONS(85),
    [aux_sym_core_token115] = ACTIONS(85),
    [aux_sym_core_token116] = ACTIONS(85),
    [aux_sym_core_token117] = ACTIONS(85),
    [aux_sym_core_token118] = ACTIONS(85),
    [aux_sym_core_token119] = ACTIONS(85),
    [aux_sym_core_token120] = ACTIONS(85),
    [aux_sym_core_token121] = ACTIONS(85),
    [aux_sym_core_token122] = ACTIONS(85),
    [aux_sym_core_token123] = ACTIONS(85),
    [aux_sym_core_token124] = ACTIONS(85),
    [aux_sym_core_token125] = ACTIONS(85),
    [aux_sym_core_token126] = ACTIONS(85),
    [aux_sym_core_token127] = ACTIONS(85),
    [aux_sym_core_token128] = ACTIONS(85),
    [aux_sym_core_token129] = ACTIONS(85),
    [aux_sym_core_token130] = ACTIONS(85),
    [aux_sym_core_token131] = ACTIONS(85),
    [aux_sym_core_token132] = ACTIONS(85),
    [aux_sym_core_token133] = ACTIONS(85),
    [aux_sym_core_token134] = ACTIONS(85),
    [aux_sym_core_token135] = ACTIONS(85),
    [aux_sym_core_token136] = ACTIONS(85),
    [aux_sym_core_token137] = ACTIONS(85),
    [aux_sym_core_token138] = ACTIONS(85),
    [aux_sym_core_token139] = ACTIONS(85),
    [aux_sym_core_token140] = ACTIONS(85),
    [aux_sym_core_token141] = ACTIONS(85),
    [aux_sym_core_token142] = ACTIONS(85),
    [aux_sym_core_token143] = ACTIONS(85),
    [aux_sym_core_token144] = ACTIONS(85),
    [aux_sym_core_token145] = ACTIONS(85),
    [aux_sym_core_token146] = ACTIONS(85),
    [aux_sym_core_token147] = ACTIONS(85),
    [aux_sym_core_token148] = ACTIONS(85),
    [aux_sym_core_token149] = ACTIONS(85),
    [aux_sym_core_token150] = ACTIONS(85),
    [aux_sym_core_token151] = ACTIONS(85),
    [aux_sym_core_token152] = ACTIONS(85),
    [aux_sym_core_token153] = ACTIONS(85),
    [aux_sym_core_token154] = ACTIONS(85),
    [aux_sym_core_token155] = ACTIONS(85),
    [aux_sym_core_token156] = ACTIONS(85),
    [aux_sym_core_token157] = ACTIONS(85),
    [aux_sym_core_token158] = ACTIONS(85),
    [aux_sym_core_token159] = ACTIONS(85),
    [aux_sym_core_token160] = ACTIONS(85),
    [aux_sym_core_token161] = ACTIONS(85),
    [aux_sym_core_token162] = ACTIONS(85),
    [aux_sym_core_token163] = ACTIONS(85),
    [aux_sym_core_token164] = ACTIONS(85),
    [aux_sym_core_token165] = ACTIONS(85),
    [aux_sym_core_token166] = ACTIONS(85),
    [aux_sym_core_token167] = ACTIONS(85),
    [aux_sym_core_token168] = ACTIONS(85),
    [aux_sym_core_token169] = ACTIONS(85),
    [aux_sym_core_token170] = ACTIONS(85),
    [aux_sym_core_token171] = ACTIONS(85),
    [aux_sym_core_token172] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_STAR_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [sym_word] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [aux_sym_comment_token1] = ACTIONS(87),
    [aux_sym_comment_token2] = ACTIONS(87),
    [sym_string] = ACTIONS(87),
    [aux_sym_number_token1] = ACTIONS(89),
    [aux_sym_core_token1] = ACTIONS(89),
    [aux_sym_core_token2] = ACTIONS(89),
    [aux_sym_core_token3] = ACTIONS(89),
    [aux_sym_core_token4] = ACTIONS(89),
    [aux_sym_core_token5] = ACTIONS(89),
    [aux_sym_core_token6] = ACTIONS(89),
    [aux_sym_core_token7] = ACTIONS(89),
    [aux_sym_core_token8] = ACTIONS(89),
    [aux_sym_core_token9] = ACTIONS(89),
    [aux_sym_core_token10] = ACTIONS(89),
    [aux_sym_core_token11] = ACTIONS(89),
    [aux_sym_core_token12] = ACTIONS(89),
    [aux_sym_core_token13] = ACTIONS(89),
    [aux_sym_core_token14] = ACTIONS(89),
    [aux_sym_core_token15] = ACTIONS(89),
    [aux_sym_core_token16] = ACTIONS(89),
    [aux_sym_core_token17] = ACTIONS(89),
    [aux_sym_core_token18] = ACTIONS(89),
    [aux_sym_core_token19] = ACTIONS(89),
    [aux_sym_core_token20] = ACTIONS(89),
    [aux_sym_core_token21] = ACTIONS(89),
    [aux_sym_core_token22] = ACTIONS(89),
    [aux_sym_core_token23] = ACTIONS(89),
    [aux_sym_core_token24] = ACTIONS(89),
    [aux_sym_core_token25] = ACTIONS(89),
    [aux_sym_core_token26] = ACTIONS(89),
    [aux_sym_core_token27] = ACTIONS(89),
    [aux_sym_core_token28] = ACTIONS(89),
    [aux_sym_core_token29] = ACTIONS(89),
    [aux_sym_core_token30] = ACTIONS(89),
    [aux_sym_core_token31] = ACTIONS(89),
    [aux_sym_core_token32] = ACTIONS(89),
    [aux_sym_core_token33] = ACTIONS(89),
    [aux_sym_core_token34] = ACTIONS(89),
    [aux_sym_core_token35] = ACTIONS(89),
    [aux_sym_core_token36] = ACTIONS(89),
    [aux_sym_core_token37] = ACTIONS(89),
    [aux_sym_core_token38] = ACTIONS(89),
    [aux_sym_core_token39] = ACTIONS(89),
    [aux_sym_core_token40] = ACTIONS(89),
    [aux_sym_core_token41] = ACTIONS(89),
    [aux_sym_core_token42] = ACTIONS(89),
    [aux_sym_core_token43] = ACTIONS(89),
    [aux_sym_core_token44] = ACTIONS(89),
    [aux_sym_core_token45] = ACTIONS(89),
    [aux_sym_core_token46] = ACTIONS(89),
    [aux_sym_core_token47] = ACTIONS(89),
    [aux_sym_core_token48] = ACTIONS(89),
    [aux_sym_core_token49] = ACTIONS(89),
    [aux_sym_core_token50] = ACTIONS(89),
    [aux_sym_core_token51] = ACTIONS(89),
    [aux_sym_core_token52] = ACTIONS(89),
    [aux_sym_core_token53] = ACTIONS(89),
    [aux_sym_core_token54] = ACTIONS(89),
    [aux_sym_core_token55] = ACTIONS(89),
    [aux_sym_core_token56] = ACTIONS(89),
    [aux_sym_core_token57] = ACTIONS(89),
    [aux_sym_core_token58] = ACTIONS(89),
    [aux_sym_core_token59] = ACTIONS(89),
    [aux_sym_core_token60] = ACTIONS(89),
    [aux_sym_core_token61] = ACTIONS(89),
    [aux_sym_core_token62] = ACTIONS(89),
    [aux_sym_core_token63] = ACTIONS(89),
    [aux_sym_core_token64] = ACTIONS(89),
    [aux_sym_core_token65] = ACTIONS(89),
    [aux_sym_core_token66] = ACTIONS(89),
    [aux_sym_core_token67] = ACTIONS(89),
    [aux_sym_core_token68] = ACTIONS(89),
    [aux_sym_core_token69] = ACTIONS(89),
    [aux_sym_core_token70] = ACTIONS(89),
    [aux_sym_core_token71] = ACTIONS(89),
    [aux_sym_core_token72] = ACTIONS(89),
    [aux_sym_core_token73] = ACTIONS(89),
    [aux_sym_core_token74] = ACTIONS(89),
    [aux_sym_core_token75] = ACTIONS(89),
    [aux_sym_core_token76] = ACTIONS(89),
    [aux_sym_core_token77] = ACTIONS(89),
    [aux_sym_core_token78] = ACTIONS(89),
    [aux_sym_core_token79] = ACTIONS(89),
    [aux_sym_core_token80] = ACTIONS(89),
    [aux_sym_core_token81] = ACTIONS(89),
    [aux_sym_core_token82] = ACTIONS(89),
    [aux_sym_core_token83] = ACTIONS(89),
    [aux_sym_core_token84] = ACTIONS(89),
    [aux_sym_core_token85] = ACTIONS(89),
    [aux_sym_core_token86] = ACTIONS(89),
    [aux_sym_core_token87] = ACTIONS(89),
    [aux_sym_core_token88] = ACTIONS(89),
    [aux_sym_core_token89] = ACTIONS(89),
    [aux_sym_core_token90] = ACTIONS(89),
    [aux_sym_core_token91] = ACTIONS(89),
    [aux_sym_core_token92] = ACTIONS(89),
    [aux_sym_core_token93] = ACTIONS(89),
    [aux_sym_core_token94] = ACTIONS(89),
    [aux_sym_core_token95] = ACTIONS(89),
    [aux_sym_core_token96] = ACTIONS(89),
    [aux_sym_core_token97] = ACTIONS(89),
    [aux_sym_core_token98] = ACTIONS(89),
    [aux_sym_core_token99] = ACTIONS(89),
    [aux_sym_core_token100] = ACTIONS(89),
    [aux_sym_core_token101] = ACTIONS(89),
    [aux_sym_core_token102] = ACTIONS(89),
    [aux_sym_core_token103] = ACTIONS(89),
    [aux_sym_core_token104] = ACTIONS(89),
    [aux_sym_core_token105] = ACTIONS(89),
    [aux_sym_core_token106] = ACTIONS(89),
    [aux_sym_core_token107] = ACTIONS(89),
    [aux_sym_core_token108] = ACTIONS(89),
    [aux_sym_core_token109] = ACTIONS(89),
    [aux_sym_core_token110] = ACTIONS(89),
    [aux_sym_core_token111] = ACTIONS(89),
    [aux_sym_core_token112] = ACTIONS(89),
    [aux_sym_core_token113] = ACTIONS(89),
    [aux_sym_core_token114] = ACTIONS(89),
    [aux_sym_core_token115] = ACTIONS(89),
    [aux_sym_core_token116] = ACTIONS(89),
    [aux_sym_core_token117] = ACTIONS(89),
    [aux_sym_core_token118] = ACTIONS(89),
    [aux_sym_core_token119] = ACTIONS(89),
    [aux_sym_core_token120] = ACTIONS(89),
    [aux_sym_core_token121] = ACTIONS(89),
    [aux_sym_core_token122] = ACTIONS(89),
    [aux_sym_core_token123] = ACTIONS(89),
    [aux_sym_core_token124] = ACTIONS(89),
    [aux_sym_core_token125] = ACTIONS(89),
    [aux_sym_core_token126] = ACTIONS(89),
    [aux_sym_core_token127] = ACTIONS(89),
    [aux_sym_core_token128] = ACTIONS(89),
    [aux_sym_core_token129] = ACTIONS(89),
    [aux_sym_core_token130] = ACTIONS(89),
    [aux_sym_core_token131] = ACTIONS(89),
    [aux_sym_core_token132] = ACTIONS(89),
    [aux_sym_core_token133] = ACTIONS(89),
    [aux_sym_core_token134] = ACTIONS(89),
    [aux_sym_core_token135] = ACTIONS(89),
    [aux_sym_core_token136] = ACTIONS(89),
    [aux_sym_core_token137] = ACTIONS(89),
    [aux_sym_core_token138] = ACTIONS(89),
    [aux_sym_core_token139] = ACTIONS(89),
    [aux_sym_core_token140] = ACTIONS(89),
    [aux_sym_core_token141] = ACTIONS(89),
    [aux_sym_core_token142] = ACTIONS(89),
    [aux_sym_core_token143] = ACTIONS(89),
    [aux_sym_core_token144] = ACTIONS(89),
    [aux_sym_core_token145] = ACTIONS(89),
    [aux_sym_core_token146] = ACTIONS(89),
    [aux_sym_core_token147] = ACTIONS(89),
    [aux_sym_core_token148] = ACTIONS(89),
    [aux_sym_core_token149] = ACTIONS(89),
    [aux_sym_core_token150] = ACTIONS(89),
    [aux_sym_core_token151] = ACTIONS(89),
    [aux_sym_core_token152] = ACTIONS(89),
    [aux_sym_core_token153] = ACTIONS(89),
    [aux_sym_core_token154] = ACTIONS(89),
    [aux_sym_core_token155] = ACTIONS(89),
    [aux_sym_core_token156] = ACTIONS(89),
    [aux_sym_core_token157] = ACTIONS(89),
    [aux_sym_core_token158] = ACTIONS(89),
    [aux_sym_core_token159] = ACTIONS(89),
    [aux_sym_core_token160] = ACTIONS(89),
    [aux_sym_core_token161] = ACTIONS(89),
    [aux_sym_core_token162] = ACTIONS(89),
    [aux_sym_core_token163] = ACTIONS(89),
    [aux_sym_core_token164] = ACTIONS(89),
    [aux_sym_core_token165] = ACTIONS(89),
    [aux_sym_core_token166] = ACTIONS(89),
    [aux_sym_core_token167] = ACTIONS(89),
    [aux_sym_core_token168] = ACTIONS(89),
    [aux_sym_core_token169] = ACTIONS(89),
    [aux_sym_core_token170] = ACTIONS(89),
    [aux_sym_core_token171] = ACTIONS(89),
    [aux_sym_core_token172] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_STAR_SLASH] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(89),
    [sym_word] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [aux_sym_comment_token1] = ACTIONS(91),
    [aux_sym_comment_token2] = ACTIONS(91),
    [sym_string] = ACTIONS(91),
    [aux_sym_number_token1] = ACTIONS(93),
    [aux_sym_core_token1] = ACTIONS(93),
    [aux_sym_core_token2] = ACTIONS(93),
    [aux_sym_core_token3] = ACTIONS(93),
    [aux_sym_core_token4] = ACTIONS(93),
    [aux_sym_core_token5] = ACTIONS(93),
    [aux_sym_core_token6] = ACTIONS(93),
    [aux_sym_core_token7] = ACTIONS(93),
    [aux_sym_core_token8] = ACTIONS(93),
    [aux_sym_core_token9] = ACTIONS(93),
    [aux_sym_core_token10] = ACTIONS(93),
    [aux_sym_core_token11] = ACTIONS(93),
    [aux_sym_core_token12] = ACTIONS(93),
    [aux_sym_core_token13] = ACTIONS(93),
    [aux_sym_core_token14] = ACTIONS(93),
    [aux_sym_core_token15] = ACTIONS(93),
    [aux_sym_core_token16] = ACTIONS(93),
    [aux_sym_core_token17] = ACTIONS(93),
    [aux_sym_core_token18] = ACTIONS(93),
    [aux_sym_core_token19] = ACTIONS(93),
    [aux_sym_core_token20] = ACTIONS(93),
    [aux_sym_core_token21] = ACTIONS(93),
    [aux_sym_core_token22] = ACTIONS(93),
    [aux_sym_core_token23] = ACTIONS(93),
    [aux_sym_core_token24] = ACTIONS(93),
    [aux_sym_core_token25] = ACTIONS(93),
    [aux_sym_core_token26] = ACTIONS(93),
    [aux_sym_core_token27] = ACTIONS(93),
    [aux_sym_core_token28] = ACTIONS(93),
    [aux_sym_core_token29] = ACTIONS(93),
    [aux_sym_core_token30] = ACTIONS(93),
    [aux_sym_core_token31] = ACTIONS(93),
    [aux_sym_core_token32] = ACTIONS(93),
    [aux_sym_core_token33] = ACTIONS(93),
    [aux_sym_core_token34] = ACTIONS(93),
    [aux_sym_core_token35] = ACTIONS(93),
    [aux_sym_core_token36] = ACTIONS(93),
    [aux_sym_core_token37] = ACTIONS(93),
    [aux_sym_core_token38] = ACTIONS(93),
    [aux_sym_core_token39] = ACTIONS(93),
    [aux_sym_core_token40] = ACTIONS(93),
    [aux_sym_core_token41] = ACTIONS(93),
    [aux_sym_core_token42] = ACTIONS(93),
    [aux_sym_core_token43] = ACTIONS(93),
    [aux_sym_core_token44] = ACTIONS(93),
    [aux_sym_core_token45] = ACTIONS(93),
    [aux_sym_core_token46] = ACTIONS(93),
    [aux_sym_core_token47] = ACTIONS(93),
    [aux_sym_core_token48] = ACTIONS(93),
    [aux_sym_core_token49] = ACTIONS(93),
    [aux_sym_core_token50] = ACTIONS(93),
    [aux_sym_core_token51] = ACTIONS(93),
    [aux_sym_core_token52] = ACTIONS(93),
    [aux_sym_core_token53] = ACTIONS(93),
    [aux_sym_core_token54] = ACTIONS(93),
    [aux_sym_core_token55] = ACTIONS(93),
    [aux_sym_core_token56] = ACTIONS(93),
    [aux_sym_core_token57] = ACTIONS(93),
    [aux_sym_core_token58] = ACTIONS(93),
    [aux_sym_core_token59] = ACTIONS(93),
    [aux_sym_core_token60] = ACTIONS(93),
    [aux_sym_core_token61] = ACTIONS(93),
    [aux_sym_core_token62] = ACTIONS(93),
    [aux_sym_core_token63] = ACTIONS(93),
    [aux_sym_core_token64] = ACTIONS(93),
    [aux_sym_core_token65] = ACTIONS(93),
    [aux_sym_core_token66] = ACTIONS(93),
    [aux_sym_core_token67] = ACTIONS(93),
    [aux_sym_core_token68] = ACTIONS(93),
    [aux_sym_core_token69] = ACTIONS(93),
    [aux_sym_core_token70] = ACTIONS(93),
    [aux_sym_core_token71] = ACTIONS(93),
    [aux_sym_core_token72] = ACTIONS(93),
    [aux_sym_core_token73] = ACTIONS(93),
    [aux_sym_core_token74] = ACTIONS(93),
    [aux_sym_core_token75] = ACTIONS(93),
    [aux_sym_core_token76] = ACTIONS(93),
    [aux_sym_core_token77] = ACTIONS(93),
    [aux_sym_core_token78] = ACTIONS(93),
    [aux_sym_core_token79] = ACTIONS(93),
    [aux_sym_core_token80] = ACTIONS(93),
    [aux_sym_core_token81] = ACTIONS(93),
    [aux_sym_core_token82] = ACTIONS(93),
    [aux_sym_core_token83] = ACTIONS(93),
    [aux_sym_core_token84] = ACTIONS(93),
    [aux_sym_core_token85] = ACTIONS(93),
    [aux_sym_core_token86] = ACTIONS(93),
    [aux_sym_core_token87] = ACTIONS(93),
    [aux_sym_core_token88] = ACTIONS(93),
    [aux_sym_core_token89] = ACTIONS(93),
    [aux_sym_core_token90] = ACTIONS(93),
    [aux_sym_core_token91] = ACTIONS(93),
    [aux_sym_core_token92] = ACTIONS(93),
    [aux_sym_core_token93] = ACTIONS(93),
    [aux_sym_core_token94] = ACTIONS(93),
    [aux_sym_core_token95] = ACTIONS(93),
    [aux_sym_core_token96] = ACTIONS(93),
    [aux_sym_core_token97] = ACTIONS(93),
    [aux_sym_core_token98] = ACTIONS(93),
    [aux_sym_core_token99] = ACTIONS(93),
    [aux_sym_core_token100] = ACTIONS(93),
    [aux_sym_core_token101] = ACTIONS(93),
    [aux_sym_core_token102] = ACTIONS(93),
    [aux_sym_core_token103] = ACTIONS(93),
    [aux_sym_core_token104] = ACTIONS(93),
    [aux_sym_core_token105] = ACTIONS(93),
    [aux_sym_core_token106] = ACTIONS(93),
    [aux_sym_core_token107] = ACTIONS(93),
    [aux_sym_core_token108] = ACTIONS(93),
    [aux_sym_core_token109] = ACTIONS(93),
    [aux_sym_core_token110] = ACTIONS(93),
    [aux_sym_core_token111] = ACTIONS(93),
    [aux_sym_core_token112] = ACTIONS(93),
    [aux_sym_core_token113] = ACTIONS(93),
    [aux_sym_core_token114] = ACTIONS(93),
    [aux_sym_core_token115] = ACTIONS(93),
    [aux_sym_core_token116] = ACTIONS(93),
    [aux_sym_core_token117] = ACTIONS(93),
    [aux_sym_core_token118] = ACTIONS(93),
    [aux_sym_core_token119] = ACTIONS(93),
    [aux_sym_core_token120] = ACTIONS(93),
    [aux_sym_core_token121] = ACTIONS(93),
    [aux_sym_core_token122] = ACTIONS(93),
    [aux_sym_core_token123] = ACTIONS(93),
    [aux_sym_core_token124] = ACTIONS(93),
    [aux_sym_core_token125] = ACTIONS(93),
    [aux_sym_core_token126] = ACTIONS(93),
    [aux_sym_core_token127] = ACTIONS(93),
    [aux_sym_core_token128] = ACTIONS(93),
    [aux_sym_core_token129] = ACTIONS(93),
    [aux_sym_core_token130] = ACTIONS(93),
    [aux_sym_core_token131] = ACTIONS(93),
    [aux_sym_core_token132] = ACTIONS(93),
    [aux_sym_core_token133] = ACTIONS(93),
    [aux_sym_core_token134] = ACTIONS(93),
    [aux_sym_core_token135] = ACTIONS(93),
    [aux_sym_core_token136] = ACTIONS(93),
    [aux_sym_core_token137] = ACTIONS(93),
    [aux_sym_core_token138] = ACTIONS(93),
    [aux_sym_core_token139] = ACTIONS(93),
    [aux_sym_core_token140] = ACTIONS(93),
    [aux_sym_core_token141] = ACTIONS(93),
    [aux_sym_core_token142] = ACTIONS(93),
    [aux_sym_core_token143] = ACTIONS(93),
    [aux_sym_core_token144] = ACTIONS(93),
    [aux_sym_core_token145] = ACTIONS(93),
    [aux_sym_core_token146] = ACTIONS(93),
    [aux_sym_core_token147] = ACTIONS(93),
    [aux_sym_core_token148] = ACTIONS(93),
    [aux_sym_core_token149] = ACTIONS(93),
    [aux_sym_core_token150] = ACTIONS(93),
    [aux_sym_core_token151] = ACTIONS(93),
    [aux_sym_core_token152] = ACTIONS(93),
    [aux_sym_core_token153] = ACTIONS(93),
    [aux_sym_core_token154] = ACTIONS(93),
    [aux_sym_core_token155] = ACTIONS(93),
    [aux_sym_core_token156] = ACTIONS(93),
    [aux_sym_core_token157] = ACTIONS(93),
    [aux_sym_core_token158] = ACTIONS(93),
    [aux_sym_core_token159] = ACTIONS(93),
    [aux_sym_core_token160] = ACTIONS(93),
    [aux_sym_core_token161] = ACTIONS(93),
    [aux_sym_core_token162] = ACTIONS(93),
    [aux_sym_core_token163] = ACTIONS(93),
    [aux_sym_core_token164] = ACTIONS(93),
    [aux_sym_core_token165] = ACTIONS(93),
    [aux_sym_core_token166] = ACTIONS(93),
    [aux_sym_core_token167] = ACTIONS(93),
    [aux_sym_core_token168] = ACTIONS(93),
    [aux_sym_core_token169] = ACTIONS(93),
    [aux_sym_core_token170] = ACTIONS(93),
    [aux_sym_core_token171] = ACTIONS(93),
    [aux_sym_core_token172] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_STAR_SLASH] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [sym_word] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(93),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [aux_sym_comment_token1] = ACTIONS(95),
    [aux_sym_comment_token2] = ACTIONS(95),
    [sym_string] = ACTIONS(95),
    [aux_sym_number_token1] = ACTIONS(97),
    [aux_sym_core_token1] = ACTIONS(97),
    [aux_sym_core_token2] = ACTIONS(97),
    [aux_sym_core_token3] = ACTIONS(97),
    [aux_sym_core_token4] = ACTIONS(97),
    [aux_sym_core_token5] = ACTIONS(97),
    [aux_sym_core_token6] = ACTIONS(97),
    [aux_sym_core_token7] = ACTIONS(97),
    [aux_sym_core_token8] = ACTIONS(97),
    [aux_sym_core_token9] = ACTIONS(97),
    [aux_sym_core_token10] = ACTIONS(97),
    [aux_sym_core_token11] = ACTIONS(97),
    [aux_sym_core_token12] = ACTIONS(97),
    [aux_sym_core_token13] = ACTIONS(97),
    [aux_sym_core_token14] = ACTIONS(97),
    [aux_sym_core_token15] = ACTIONS(97),
    [aux_sym_core_token16] = ACTIONS(97),
    [aux_sym_core_token17] = ACTIONS(97),
    [aux_sym_core_token18] = ACTIONS(97),
    [aux_sym_core_token19] = ACTIONS(97),
    [aux_sym_core_token20] = ACTIONS(97),
    [aux_sym_core_token21] = ACTIONS(97),
    [aux_sym_core_token22] = ACTIONS(97),
    [aux_sym_core_token23] = ACTIONS(97),
    [aux_sym_core_token24] = ACTIONS(97),
    [aux_sym_core_token25] = ACTIONS(97),
    [aux_sym_core_token26] = ACTIONS(97),
    [aux_sym_core_token27] = ACTIONS(97),
    [aux_sym_core_token28] = ACTIONS(97),
    [aux_sym_core_token29] = ACTIONS(97),
    [aux_sym_core_token30] = ACTIONS(97),
    [aux_sym_core_token31] = ACTIONS(97),
    [aux_sym_core_token32] = ACTIONS(97),
    [aux_sym_core_token33] = ACTIONS(97),
    [aux_sym_core_token34] = ACTIONS(97),
    [aux_sym_core_token35] = ACTIONS(97),
    [aux_sym_core_token36] = ACTIONS(97),
    [aux_sym_core_token37] = ACTIONS(97),
    [aux_sym_core_token38] = ACTIONS(97),
    [aux_sym_core_token39] = ACTIONS(97),
    [aux_sym_core_token40] = ACTIONS(97),
    [aux_sym_core_token41] = ACTIONS(97),
    [aux_sym_core_token42] = ACTIONS(97),
    [aux_sym_core_token43] = ACTIONS(97),
    [aux_sym_core_token44] = ACTIONS(97),
    [aux_sym_core_token45] = ACTIONS(97),
    [aux_sym_core_token46] = ACTIONS(97),
    [aux_sym_core_token47] = ACTIONS(97),
    [aux_sym_core_token48] = ACTIONS(97),
    [aux_sym_core_token49] = ACTIONS(97),
    [aux_sym_core_token50] = ACTIONS(97),
    [aux_sym_core_token51] = ACTIONS(97),
    [aux_sym_core_token52] = ACTIONS(97),
    [aux_sym_core_token53] = ACTIONS(97),
    [aux_sym_core_token54] = ACTIONS(97),
    [aux_sym_core_token55] = ACTIONS(97),
    [aux_sym_core_token56] = ACTIONS(97),
    [aux_sym_core_token57] = ACTIONS(97),
    [aux_sym_core_token58] = ACTIONS(97),
    [aux_sym_core_token59] = ACTIONS(97),
    [aux_sym_core_token60] = ACTIONS(97),
    [aux_sym_core_token61] = ACTIONS(97),
    [aux_sym_core_token62] = ACTIONS(97),
    [aux_sym_core_token63] = ACTIONS(97),
    [aux_sym_core_token64] = ACTIONS(97),
    [aux_sym_core_token65] = ACTIONS(97),
    [aux_sym_core_token66] = ACTIONS(97),
    [aux_sym_core_token67] = ACTIONS(97),
    [aux_sym_core_token68] = ACTIONS(97),
    [aux_sym_core_token69] = ACTIONS(97),
    [aux_sym_core_token70] = ACTIONS(97),
    [aux_sym_core_token71] = ACTIONS(97),
    [aux_sym_core_token72] = ACTIONS(97),
    [aux_sym_core_token73] = ACTIONS(97),
    [aux_sym_core_token74] = ACTIONS(97),
    [aux_sym_core_token75] = ACTIONS(97),
    [aux_sym_core_token76] = ACTIONS(97),
    [aux_sym_core_token77] = ACTIONS(97),
    [aux_sym_core_token78] = ACTIONS(97),
    [aux_sym_core_token79] = ACTIONS(97),
    [aux_sym_core_token80] = ACTIONS(97),
    [aux_sym_core_token81] = ACTIONS(97),
    [aux_sym_core_token82] = ACTIONS(97),
    [aux_sym_core_token83] = ACTIONS(97),
    [aux_sym_core_token84] = ACTIONS(97),
    [aux_sym_core_token85] = ACTIONS(97),
    [aux_sym_core_token86] = ACTIONS(97),
    [aux_sym_core_token87] = ACTIONS(97),
    [aux_sym_core_token88] = ACTIONS(97),
    [aux_sym_core_token89] = ACTIONS(97),
    [aux_sym_core_token90] = ACTIONS(97),
    [aux_sym_core_token91] = ACTIONS(97),
    [aux_sym_core_token92] = ACTIONS(97),
    [aux_sym_core_token93] = ACTIONS(97),
    [aux_sym_core_token94] = ACTIONS(97),
    [aux_sym_core_token95] = ACTIONS(97),
    [aux_sym_core_token96] = ACTIONS(97),
    [aux_sym_core_token97] = ACTIONS(97),
    [aux_sym_core_token98] = ACTIONS(97),
    [aux_sym_core_token99] = ACTIONS(97),
    [aux_sym_core_token100] = ACTIONS(97),
    [aux_sym_core_token101] = ACTIONS(97),
    [aux_sym_core_token102] = ACTIONS(97),
    [aux_sym_core_token103] = ACTIONS(97),
    [aux_sym_core_token104] = ACTIONS(97),
    [aux_sym_core_token105] = ACTIONS(97),
    [aux_sym_core_token106] = ACTIONS(97),
    [aux_sym_core_token107] = ACTIONS(97),
    [aux_sym_core_token108] = ACTIONS(97),
    [aux_sym_core_token109] = ACTIONS(97),
    [aux_sym_core_token110] = ACTIONS(97),
    [aux_sym_core_token111] = ACTIONS(97),
    [aux_sym_core_token112] = ACTIONS(97),
    [aux_sym_core_token113] = ACTIONS(97),
    [aux_sym_core_token114] = ACTIONS(97),
    [aux_sym_core_token115] = ACTIONS(97),
    [aux_sym_core_token116] = ACTIONS(97),
    [aux_sym_core_token117] = ACTIONS(97),
    [aux_sym_core_token118] = ACTIONS(97),
    [aux_sym_core_token119] = ACTIONS(97),
    [aux_sym_core_token120] = ACTIONS(97),
    [aux_sym_core_token121] = ACTIONS(97),
    [aux_sym_core_token122] = ACTIONS(97),
    [aux_sym_core_token123] = ACTIONS(97),
    [aux_sym_core_token124] = ACTIONS(97),
    [aux_sym_core_token125] = ACTIONS(97),
    [aux_sym_core_token126] = ACTIONS(97),
    [aux_sym_core_token127] = ACTIONS(97),
    [aux_sym_core_token128] = ACTIONS(97),
    [aux_sym_core_token129] = ACTIONS(97),
    [aux_sym_core_token130] = ACTIONS(97),
    [aux_sym_core_token131] = ACTIONS(97),
    [aux_sym_core_token132] = ACTIONS(97),
    [aux_sym_core_token133] = ACTIONS(97),
    [aux_sym_core_token134] = ACTIONS(97),
    [aux_sym_core_token135] = ACTIONS(97),
    [aux_sym_core_token136] = ACTIONS(97),
    [aux_sym_core_token137] = ACTIONS(97),
    [aux_sym_core_token138] = ACTIONS(97),
    [aux_sym_core_token139] = ACTIONS(97),
    [aux_sym_core_token140] = ACTIONS(97),
    [aux_sym_core_token141] = ACTIONS(97),
    [aux_sym_core_token142] = ACTIONS(97),
    [aux_sym_core_token143] = ACTIONS(97),
    [aux_sym_core_token144] = ACTIONS(97),
    [aux_sym_core_token145] = ACTIONS(97),
    [aux_sym_core_token146] = ACTIONS(97),
    [aux_sym_core_token147] = ACTIONS(97),
    [aux_sym_core_token148] = ACTIONS(97),
    [aux_sym_core_token149] = ACTIONS(97),
    [aux_sym_core_token150] = ACTIONS(97),
    [aux_sym_core_token151] = ACTIONS(97),
    [aux_sym_core_token152] = ACTIONS(97),
    [aux_sym_core_token153] = ACTIONS(97),
    [aux_sym_core_token154] = ACTIONS(97),
    [aux_sym_core_token155] = ACTIONS(97),
    [aux_sym_core_token156] = ACTIONS(97),
    [aux_sym_core_token157] = ACTIONS(97),
    [aux_sym_core_token158] = ACTIONS(97),
    [aux_sym_core_token159] = ACTIONS(97),
    [aux_sym_core_token160] = ACTIONS(97),
    [aux_sym_core_token161] = ACTIONS(97),
    [aux_sym_core_token162] = ACTIONS(97),
    [aux_sym_core_token163] = ACTIONS(97),
    [aux_sym_core_token164] = ACTIONS(97),
    [aux_sym_core_token165] = ACTIONS(97),
    [aux_sym_core_token166] = ACTIONS(97),
    [aux_sym_core_token167] = ACTIONS(97),
    [aux_sym_core_token168] = ACTIONS(97),
    [aux_sym_core_token169] = ACTIONS(97),
    [aux_sym_core_token170] = ACTIONS(97),
    [aux_sym_core_token171] = ACTIONS(97),
    [aux_sym_core_token172] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_STAR_SLASH] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [sym_word] = ACTIONS(97),
    [anon_sym_COLON] = ACTIONS(97),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [aux_sym_comment_token1] = ACTIONS(99),
    [aux_sym_comment_token2] = ACTIONS(99),
    [sym_string] = ACTIONS(99),
    [aux_sym_number_token1] = ACTIONS(101),
    [aux_sym_core_token1] = ACTIONS(101),
    [aux_sym_core_token2] = ACTIONS(101),
    [aux_sym_core_token3] = ACTIONS(101),
    [aux_sym_core_token4] = ACTIONS(101),
    [aux_sym_core_token5] = ACTIONS(101),
    [aux_sym_core_token6] = ACTIONS(101),
    [aux_sym_core_token7] = ACTIONS(101),
    [aux_sym_core_token8] = ACTIONS(101),
    [aux_sym_core_token9] = ACTIONS(101),
    [aux_sym_core_token10] = ACTIONS(101),
    [aux_sym_core_token11] = ACTIONS(101),
    [aux_sym_core_token12] = ACTIONS(101),
    [aux_sym_core_token13] = ACTIONS(101),
    [aux_sym_core_token14] = ACTIONS(101),
    [aux_sym_core_token15] = ACTIONS(101),
    [aux_sym_core_token16] = ACTIONS(101),
    [aux_sym_core_token17] = ACTIONS(101),
    [aux_sym_core_token18] = ACTIONS(101),
    [aux_sym_core_token19] = ACTIONS(101),
    [aux_sym_core_token20] = ACTIONS(101),
    [aux_sym_core_token21] = ACTIONS(101),
    [aux_sym_core_token22] = ACTIONS(101),
    [aux_sym_core_token23] = ACTIONS(101),
    [aux_sym_core_token24] = ACTIONS(101),
    [aux_sym_core_token25] = ACTIONS(101),
    [aux_sym_core_token26] = ACTIONS(101),
    [aux_sym_core_token27] = ACTIONS(101),
    [aux_sym_core_token28] = ACTIONS(101),
    [aux_sym_core_token29] = ACTIONS(101),
    [aux_sym_core_token30] = ACTIONS(101),
    [aux_sym_core_token31] = ACTIONS(101),
    [aux_sym_core_token32] = ACTIONS(101),
    [aux_sym_core_token33] = ACTIONS(101),
    [aux_sym_core_token34] = ACTIONS(101),
    [aux_sym_core_token35] = ACTIONS(101),
    [aux_sym_core_token36] = ACTIONS(101),
    [aux_sym_core_token37] = ACTIONS(101),
    [aux_sym_core_token38] = ACTIONS(101),
    [aux_sym_core_token39] = ACTIONS(101),
    [aux_sym_core_token40] = ACTIONS(101),
    [aux_sym_core_token41] = ACTIONS(101),
    [aux_sym_core_token42] = ACTIONS(101),
    [aux_sym_core_token43] = ACTIONS(101),
    [aux_sym_core_token44] = ACTIONS(101),
    [aux_sym_core_token45] = ACTIONS(101),
    [aux_sym_core_token46] = ACTIONS(101),
    [aux_sym_core_token47] = ACTIONS(101),
    [aux_sym_core_token48] = ACTIONS(101),
    [aux_sym_core_token49] = ACTIONS(101),
    [aux_sym_core_token50] = ACTIONS(101),
    [aux_sym_core_token51] = ACTIONS(101),
    [aux_sym_core_token52] = ACTIONS(101),
    [aux_sym_core_token53] = ACTIONS(101),
    [aux_sym_core_token54] = ACTIONS(101),
    [aux_sym_core_token55] = ACTIONS(101),
    [aux_sym_core_token56] = ACTIONS(101),
    [aux_sym_core_token57] = ACTIONS(101),
    [aux_sym_core_token58] = ACTIONS(101),
    [aux_sym_core_token59] = ACTIONS(101),
    [aux_sym_core_token60] = ACTIONS(101),
    [aux_sym_core_token61] = ACTIONS(101),
    [aux_sym_core_token62] = ACTIONS(101),
    [aux_sym_core_token63] = ACTIONS(101),
    [aux_sym_core_token64] = ACTIONS(101),
    [aux_sym_core_token65] = ACTIONS(101),
    [aux_sym_core_token66] = ACTIONS(101),
    [aux_sym_core_token67] = ACTIONS(101),
    [aux_sym_core_token68] = ACTIONS(101),
    [aux_sym_core_token69] = ACTIONS(101),
    [aux_sym_core_token70] = ACTIONS(101),
    [aux_sym_core_token71] = ACTIONS(101),
    [aux_sym_core_token72] = ACTIONS(101),
    [aux_sym_core_token73] = ACTIONS(101),
    [aux_sym_core_token74] = ACTIONS(101),
    [aux_sym_core_token75] = ACTIONS(101),
    [aux_sym_core_token76] = ACTIONS(101),
    [aux_sym_core_token77] = ACTIONS(101),
    [aux_sym_core_token78] = ACTIONS(101),
    [aux_sym_core_token79] = ACTIONS(101),
    [aux_sym_core_token80] = ACTIONS(101),
    [aux_sym_core_token81] = ACTIONS(101),
    [aux_sym_core_token82] = ACTIONS(101),
    [aux_sym_core_token83] = ACTIONS(101),
    [aux_sym_core_token84] = ACTIONS(101),
    [aux_sym_core_token85] = ACTIONS(101),
    [aux_sym_core_token86] = ACTIONS(101),
    [aux_sym_core_token87] = ACTIONS(101),
    [aux_sym_core_token88] = ACTIONS(101),
    [aux_sym_core_token89] = ACTIONS(101),
    [aux_sym_core_token90] = ACTIONS(101),
    [aux_sym_core_token91] = ACTIONS(101),
    [aux_sym_core_token92] = ACTIONS(101),
    [aux_sym_core_token93] = ACTIONS(101),
    [aux_sym_core_token94] = ACTIONS(101),
    [aux_sym_core_token95] = ACTIONS(101),
    [aux_sym_core_token96] = ACTIONS(101),
    [aux_sym_core_token97] = ACTIONS(101),
    [aux_sym_core_token98] = ACTIONS(101),
    [aux_sym_core_token99] = ACTIONS(101),
    [aux_sym_core_token100] = ACTIONS(101),
    [aux_sym_core_token101] = ACTIONS(101),
    [aux_sym_core_token102] = ACTIONS(101),
    [aux_sym_core_token103] = ACTIONS(101),
    [aux_sym_core_token104] = ACTIONS(101),
    [aux_sym_core_token105] = ACTIONS(101),
    [aux_sym_core_token106] = ACTIONS(101),
    [aux_sym_core_token107] = ACTIONS(101),
    [aux_sym_core_token108] = ACTIONS(101),
    [aux_sym_core_token109] = ACTIONS(101),
    [aux_sym_core_token110] = ACTIONS(101),
    [aux_sym_core_token111] = ACTIONS(101),
    [aux_sym_core_token112] = ACTIONS(101),
    [aux_sym_core_token113] = ACTIONS(101),
    [aux_sym_core_token114] = ACTIONS(101),
    [aux_sym_core_token115] = ACTIONS(101),
    [aux_sym_core_token116] = ACTIONS(101),
    [aux_sym_core_token117] = ACTIONS(101),
    [aux_sym_core_token118] = ACTIONS(101),
    [aux_sym_core_token119] = ACTIONS(101),
    [aux_sym_core_token120] = ACTIONS(101),
    [aux_sym_core_token121] = ACTIONS(101),
    [aux_sym_core_token122] = ACTIONS(101),
    [aux_sym_core_token123] = ACTIONS(101),
    [aux_sym_core_token124] = ACTIONS(101),
    [aux_sym_core_token125] = ACTIONS(101),
    [aux_sym_core_token126] = ACTIONS(101),
    [aux_sym_core_token127] = ACTIONS(101),
    [aux_sym_core_token128] = ACTIONS(101),
    [aux_sym_core_token129] = ACTIONS(101),
    [aux_sym_core_token130] = ACTIONS(101),
    [aux_sym_core_token131] = ACTIONS(101),
    [aux_sym_core_token132] = ACTIONS(101),
    [aux_sym_core_token133] = ACTIONS(101),
    [aux_sym_core_token134] = ACTIONS(101),
    [aux_sym_core_token135] = ACTIONS(101),
    [aux_sym_core_token136] = ACTIONS(101),
    [aux_sym_core_token137] = ACTIONS(101),
    [aux_sym_core_token138] = ACTIONS(101),
    [aux_sym_core_token139] = ACTIONS(101),
    [aux_sym_core_token140] = ACTIONS(101),
    [aux_sym_core_token141] = ACTIONS(101),
    [aux_sym_core_token142] = ACTIONS(101),
    [aux_sym_core_token143] = ACTIONS(101),
    [aux_sym_core_token144] = ACTIONS(101),
    [aux_sym_core_token145] = ACTIONS(101),
    [aux_sym_core_token146] = ACTIONS(101),
    [aux_sym_core_token147] = ACTIONS(101),
    [aux_sym_core_token148] = ACTIONS(101),
    [aux_sym_core_token149] = ACTIONS(101),
    [aux_sym_core_token150] = ACTIONS(101),
    [aux_sym_core_token151] = ACTIONS(101),
    [aux_sym_core_token152] = ACTIONS(101),
    [aux_sym_core_token153] = ACTIONS(101),
    [aux_sym_core_token154] = ACTIONS(101),
    [aux_sym_core_token155] = ACTIONS(101),
    [aux_sym_core_token156] = ACTIONS(101),
    [aux_sym_core_token157] = ACTIONS(101),
    [aux_sym_core_token158] = ACTIONS(101),
    [aux_sym_core_token159] = ACTIONS(101),
    [aux_sym_core_token160] = ACTIONS(101),
    [aux_sym_core_token161] = ACTIONS(101),
    [aux_sym_core_token162] = ACTIONS(101),
    [aux_sym_core_token163] = ACTIONS(101),
    [aux_sym_core_token164] = ACTIONS(101),
    [aux_sym_core_token165] = ACTIONS(101),
    [aux_sym_core_token166] = ACTIONS(101),
    [aux_sym_core_token167] = ACTIONS(101),
    [aux_sym_core_token168] = ACTIONS(101),
    [aux_sym_core_token169] = ACTIONS(101),
    [aux_sym_core_token170] = ACTIONS(101),
    [aux_sym_core_token171] = ACTIONS(101),
    [aux_sym_core_token172] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(101),
    [anon_sym_DASH] = ACTIONS(101),
    [anon_sym_SLASH] = ACTIONS(101),
    [anon_sym_STAR] = ACTIONS(101),
    [anon_sym_STAR_SLASH] = ACTIONS(101),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(101),
    [sym_word] = ACTIONS(101),
    [anon_sym_COLON] = ACTIONS(101),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [aux_sym_comment_token1] = ACTIONS(103),
    [aux_sym_comment_token2] = ACTIONS(103),
    [sym_string] = ACTIONS(103),
    [aux_sym_number_token1] = ACTIONS(105),
    [aux_sym_core_token1] = ACTIONS(105),
    [aux_sym_core_token2] = ACTIONS(105),
    [aux_sym_core_token3] = ACTIONS(105),
    [aux_sym_core_token4] = ACTIONS(105),
    [aux_sym_core_token5] = ACTIONS(105),
    [aux_sym_core_token6] = ACTIONS(105),
    [aux_sym_core_token7] = ACTIONS(105),
    [aux_sym_core_token8] = ACTIONS(105),
    [aux_sym_core_token9] = ACTIONS(105),
    [aux_sym_core_token10] = ACTIONS(105),
    [aux_sym_core_token11] = ACTIONS(105),
    [aux_sym_core_token12] = ACTIONS(105),
    [aux_sym_core_token13] = ACTIONS(105),
    [aux_sym_core_token14] = ACTIONS(105),
    [aux_sym_core_token15] = ACTIONS(105),
    [aux_sym_core_token16] = ACTIONS(105),
    [aux_sym_core_token17] = ACTIONS(105),
    [aux_sym_core_token18] = ACTIONS(105),
    [aux_sym_core_token19] = ACTIONS(105),
    [aux_sym_core_token20] = ACTIONS(105),
    [aux_sym_core_token21] = ACTIONS(105),
    [aux_sym_core_token22] = ACTIONS(105),
    [aux_sym_core_token23] = ACTIONS(105),
    [aux_sym_core_token24] = ACTIONS(105),
    [aux_sym_core_token25] = ACTIONS(105),
    [aux_sym_core_token26] = ACTIONS(105),
    [aux_sym_core_token27] = ACTIONS(105),
    [aux_sym_core_token28] = ACTIONS(105),
    [aux_sym_core_token29] = ACTIONS(105),
    [aux_sym_core_token30] = ACTIONS(105),
    [aux_sym_core_token31] = ACTIONS(105),
    [aux_sym_core_token32] = ACTIONS(105),
    [aux_sym_core_token33] = ACTIONS(105),
    [aux_sym_core_token34] = ACTIONS(105),
    [aux_sym_core_token35] = ACTIONS(105),
    [aux_sym_core_token36] = ACTIONS(105),
    [aux_sym_core_token37] = ACTIONS(105),
    [aux_sym_core_token38] = ACTIONS(105),
    [aux_sym_core_token39] = ACTIONS(105),
    [aux_sym_core_token40] = ACTIONS(105),
    [aux_sym_core_token41] = ACTIONS(105),
    [aux_sym_core_token42] = ACTIONS(105),
    [aux_sym_core_token43] = ACTIONS(105),
    [aux_sym_core_token44] = ACTIONS(105),
    [aux_sym_core_token45] = ACTIONS(105),
    [aux_sym_core_token46] = ACTIONS(105),
    [aux_sym_core_token47] = ACTIONS(105),
    [aux_sym_core_token48] = ACTIONS(105),
    [aux_sym_core_token49] = ACTIONS(105),
    [aux_sym_core_token50] = ACTIONS(105),
    [aux_sym_core_token51] = ACTIONS(105),
    [aux_sym_core_token52] = ACTIONS(105),
    [aux_sym_core_token53] = ACTIONS(105),
    [aux_sym_core_token54] = ACTIONS(105),
    [aux_sym_core_token55] = ACTIONS(105),
    [aux_sym_core_token56] = ACTIONS(105),
    [aux_sym_core_token57] = ACTIONS(105),
    [aux_sym_core_token58] = ACTIONS(105),
    [aux_sym_core_token59] = ACTIONS(105),
    [aux_sym_core_token60] = ACTIONS(105),
    [aux_sym_core_token61] = ACTIONS(105),
    [aux_sym_core_token62] = ACTIONS(105),
    [aux_sym_core_token63] = ACTIONS(105),
    [aux_sym_core_token64] = ACTIONS(105),
    [aux_sym_core_token65] = ACTIONS(105),
    [aux_sym_core_token66] = ACTIONS(105),
    [aux_sym_core_token67] = ACTIONS(105),
    [aux_sym_core_token68] = ACTIONS(105),
    [aux_sym_core_token69] = ACTIONS(105),
    [aux_sym_core_token70] = ACTIONS(105),
    [aux_sym_core_token71] = ACTIONS(105),
    [aux_sym_core_token72] = ACTIONS(105),
    [aux_sym_core_token73] = ACTIONS(105),
    [aux_sym_core_token74] = ACTIONS(105),
    [aux_sym_core_token75] = ACTIONS(105),
    [aux_sym_core_token76] = ACTIONS(105),
    [aux_sym_core_token77] = ACTIONS(105),
    [aux_sym_core_token78] = ACTIONS(105),
    [aux_sym_core_token79] = ACTIONS(105),
    [aux_sym_core_token80] = ACTIONS(105),
    [aux_sym_core_token81] = ACTIONS(105),
    [aux_sym_core_token82] = ACTIONS(105),
    [aux_sym_core_token83] = ACTIONS(105),
    [aux_sym_core_token84] = ACTIONS(105),
    [aux_sym_core_token85] = ACTIONS(105),
    [aux_sym_core_token86] = ACTIONS(105),
    [aux_sym_core_token87] = ACTIONS(105),
    [aux_sym_core_token88] = ACTIONS(105),
    [aux_sym_core_token89] = ACTIONS(105),
    [aux_sym_core_token90] = ACTIONS(105),
    [aux_sym_core_token91] = ACTIONS(105),
    [aux_sym_core_token92] = ACTIONS(105),
    [aux_sym_core_token93] = ACTIONS(105),
    [aux_sym_core_token94] = ACTIONS(105),
    [aux_sym_core_token95] = ACTIONS(105),
    [aux_sym_core_token96] = ACTIONS(105),
    [aux_sym_core_token97] = ACTIONS(105),
    [aux_sym_core_token98] = ACTIONS(105),
    [aux_sym_core_token99] = ACTIONS(105),
    [aux_sym_core_token100] = ACTIONS(105),
    [aux_sym_core_token101] = ACTIONS(105),
    [aux_sym_core_token102] = ACTIONS(105),
    [aux_sym_core_token103] = ACTIONS(105),
    [aux_sym_core_token104] = ACTIONS(105),
    [aux_sym_core_token105] = ACTIONS(105),
    [aux_sym_core_token106] = ACTIONS(105),
    [aux_sym_core_token107] = ACTIONS(105),
    [aux_sym_core_token108] = ACTIONS(105),
    [aux_sym_core_token109] = ACTIONS(105),
    [aux_sym_core_token110] = ACTIONS(105),
    [aux_sym_core_token111] = ACTIONS(105),
    [aux_sym_core_token112] = ACTIONS(105),
    [aux_sym_core_token113] = ACTIONS(105),
    [aux_sym_core_token114] = ACTIONS(105),
    [aux_sym_core_token115] = ACTIONS(105),
    [aux_sym_core_token116] = ACTIONS(105),
    [aux_sym_core_token117] = ACTIONS(105),
    [aux_sym_core_token118] = ACTIONS(105),
    [aux_sym_core_token119] = ACTIONS(105),
    [aux_sym_core_token120] = ACTIONS(105),
    [aux_sym_core_token121] = ACTIONS(105),
    [aux_sym_core_token122] = ACTIONS(105),
    [aux_sym_core_token123] = ACTIONS(105),
    [aux_sym_core_token124] = ACTIONS(105),
    [aux_sym_core_token125] = ACTIONS(105),
    [aux_sym_core_token126] = ACTIONS(105),
    [aux_sym_core_token127] = ACTIONS(105),
    [aux_sym_core_token128] = ACTIONS(105),
    [aux_sym_core_token129] = ACTIONS(105),
    [aux_sym_core_token130] = ACTIONS(105),
    [aux_sym_core_token131] = ACTIONS(105),
    [aux_sym_core_token132] = ACTIONS(105),
    [aux_sym_core_token133] = ACTIONS(105),
    [aux_sym_core_token134] = ACTIONS(105),
    [aux_sym_core_token135] = ACTIONS(105),
    [aux_sym_core_token136] = ACTIONS(105),
    [aux_sym_core_token137] = ACTIONS(105),
    [aux_sym_core_token138] = ACTIONS(105),
    [aux_sym_core_token139] = ACTIONS(105),
    [aux_sym_core_token140] = ACTIONS(105),
    [aux_sym_core_token141] = ACTIONS(105),
    [aux_sym_core_token142] = ACTIONS(105),
    [aux_sym_core_token143] = ACTIONS(105),
    [aux_sym_core_token144] = ACTIONS(105),
    [aux_sym_core_token145] = ACTIONS(105),
    [aux_sym_core_token146] = ACTIONS(105),
    [aux_sym_core_token147] = ACTIONS(105),
    [aux_sym_core_token148] = ACTIONS(105),
    [aux_sym_core_token149] = ACTIONS(105),
    [aux_sym_core_token150] = ACTIONS(105),
    [aux_sym_core_token151] = ACTIONS(105),
    [aux_sym_core_token152] = ACTIONS(105),
    [aux_sym_core_token153] = ACTIONS(105),
    [aux_sym_core_token154] = ACTIONS(105),
    [aux_sym_core_token155] = ACTIONS(105),
    [aux_sym_core_token156] = ACTIONS(105),
    [aux_sym_core_token157] = ACTIONS(105),
    [aux_sym_core_token158] = ACTIONS(105),
    [aux_sym_core_token159] = ACTIONS(105),
    [aux_sym_core_token160] = ACTIONS(105),
    [aux_sym_core_token161] = ACTIONS(105),
    [aux_sym_core_token162] = ACTIONS(105),
    [aux_sym_core_token163] = ACTIONS(105),
    [aux_sym_core_token164] = ACTIONS(105),
    [aux_sym_core_token165] = ACTIONS(105),
    [aux_sym_core_token166] = ACTIONS(105),
    [aux_sym_core_token167] = ACTIONS(105),
    [aux_sym_core_token168] = ACTIONS(105),
    [aux_sym_core_token169] = ACTIONS(105),
    [aux_sym_core_token170] = ACTIONS(105),
    [aux_sym_core_token171] = ACTIONS(105),
    [aux_sym_core_token172] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_SLASH] = ACTIONS(105),
    [anon_sym_STAR] = ACTIONS(105),
    [anon_sym_STAR_SLASH] = ACTIONS(105),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(105),
    [sym_word] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(105),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [aux_sym_comment_token1] = ACTIONS(107),
    [aux_sym_comment_token2] = ACTIONS(107),
    [sym_string] = ACTIONS(107),
    [aux_sym_number_token1] = ACTIONS(109),
    [aux_sym_core_token1] = ACTIONS(109),
    [aux_sym_core_token2] = ACTIONS(109),
    [aux_sym_core_token3] = ACTIONS(109),
    [aux_sym_core_token4] = ACTIONS(109),
    [aux_sym_core_token5] = ACTIONS(109),
    [aux_sym_core_token6] = ACTIONS(109),
    [aux_sym_core_token7] = ACTIONS(109),
    [aux_sym_core_token8] = ACTIONS(109),
    [aux_sym_core_token9] = ACTIONS(109),
    [aux_sym_core_token10] = ACTIONS(109),
    [aux_sym_core_token11] = ACTIONS(109),
    [aux_sym_core_token12] = ACTIONS(109),
    [aux_sym_core_token13] = ACTIONS(109),
    [aux_sym_core_token14] = ACTIONS(109),
    [aux_sym_core_token15] = ACTIONS(109),
    [aux_sym_core_token16] = ACTIONS(109),
    [aux_sym_core_token17] = ACTIONS(109),
    [aux_sym_core_token18] = ACTIONS(109),
    [aux_sym_core_token19] = ACTIONS(109),
    [aux_sym_core_token20] = ACTIONS(109),
    [aux_sym_core_token21] = ACTIONS(109),
    [aux_sym_core_token22] = ACTIONS(109),
    [aux_sym_core_token23] = ACTIONS(109),
    [aux_sym_core_token24] = ACTIONS(109),
    [aux_sym_core_token25] = ACTIONS(109),
    [aux_sym_core_token26] = ACTIONS(109),
    [aux_sym_core_token27] = ACTIONS(109),
    [aux_sym_core_token28] = ACTIONS(109),
    [aux_sym_core_token29] = ACTIONS(109),
    [aux_sym_core_token30] = ACTIONS(109),
    [aux_sym_core_token31] = ACTIONS(109),
    [aux_sym_core_token32] = ACTIONS(109),
    [aux_sym_core_token33] = ACTIONS(109),
    [aux_sym_core_token34] = ACTIONS(109),
    [aux_sym_core_token35] = ACTIONS(109),
    [aux_sym_core_token36] = ACTIONS(109),
    [aux_sym_core_token37] = ACTIONS(109),
    [aux_sym_core_token38] = ACTIONS(109),
    [aux_sym_core_token39] = ACTIONS(109),
    [aux_sym_core_token40] = ACTIONS(109),
    [aux_sym_core_token41] = ACTIONS(109),
    [aux_sym_core_token42] = ACTIONS(109),
    [aux_sym_core_token43] = ACTIONS(109),
    [aux_sym_core_token44] = ACTIONS(109),
    [aux_sym_core_token45] = ACTIONS(109),
    [aux_sym_core_token46] = ACTIONS(109),
    [aux_sym_core_token47] = ACTIONS(109),
    [aux_sym_core_token48] = ACTIONS(109),
    [aux_sym_core_token49] = ACTIONS(109),
    [aux_sym_core_token50] = ACTIONS(109),
    [aux_sym_core_token51] = ACTIONS(109),
    [aux_sym_core_token52] = ACTIONS(109),
    [aux_sym_core_token53] = ACTIONS(109),
    [aux_sym_core_token54] = ACTIONS(109),
    [aux_sym_core_token55] = ACTIONS(109),
    [aux_sym_core_token56] = ACTIONS(109),
    [aux_sym_core_token57] = ACTIONS(109),
    [aux_sym_core_token58] = ACTIONS(109),
    [aux_sym_core_token59] = ACTIONS(109),
    [aux_sym_core_token60] = ACTIONS(109),
    [aux_sym_core_token61] = ACTIONS(109),
    [aux_sym_core_token62] = ACTIONS(109),
    [aux_sym_core_token63] = ACTIONS(109),
    [aux_sym_core_token64] = ACTIONS(109),
    [aux_sym_core_token65] = ACTIONS(109),
    [aux_sym_core_token66] = ACTIONS(109),
    [aux_sym_core_token67] = ACTIONS(109),
    [aux_sym_core_token68] = ACTIONS(109),
    [aux_sym_core_token69] = ACTIONS(109),
    [aux_sym_core_token70] = ACTIONS(109),
    [aux_sym_core_token71] = ACTIONS(109),
    [aux_sym_core_token72] = ACTIONS(109),
    [aux_sym_core_token73] = ACTIONS(109),
    [aux_sym_core_token74] = ACTIONS(109),
    [aux_sym_core_token75] = ACTIONS(109),
    [aux_sym_core_token76] = ACTIONS(109),
    [aux_sym_core_token77] = ACTIONS(109),
    [aux_sym_core_token78] = ACTIONS(109),
    [aux_sym_core_token79] = ACTIONS(109),
    [aux_sym_core_token80] = ACTIONS(109),
    [aux_sym_core_token81] = ACTIONS(109),
    [aux_sym_core_token82] = ACTIONS(109),
    [aux_sym_core_token83] = ACTIONS(109),
    [aux_sym_core_token84] = ACTIONS(109),
    [aux_sym_core_token85] = ACTIONS(109),
    [aux_sym_core_token86] = ACTIONS(109),
    [aux_sym_core_token87] = ACTIONS(109),
    [aux_sym_core_token88] = ACTIONS(109),
    [aux_sym_core_token89] = ACTIONS(109),
    [aux_sym_core_token90] = ACTIONS(109),
    [aux_sym_core_token91] = ACTIONS(109),
    [aux_sym_core_token92] = ACTIONS(109),
    [aux_sym_core_token93] = ACTIONS(109),
    [aux_sym_core_token94] = ACTIONS(109),
    [aux_sym_core_token95] = ACTIONS(109),
    [aux_sym_core_token96] = ACTIONS(109),
    [aux_sym_core_token97] = ACTIONS(109),
    [aux_sym_core_token98] = ACTIONS(109),
    [aux_sym_core_token99] = ACTIONS(109),
    [aux_sym_core_token100] = ACTIONS(109),
    [aux_sym_core_token101] = ACTIONS(109),
    [aux_sym_core_token102] = ACTIONS(109),
    [aux_sym_core_token103] = ACTIONS(109),
    [aux_sym_core_token104] = ACTIONS(109),
    [aux_sym_core_token105] = ACTIONS(109),
    [aux_sym_core_token106] = ACTIONS(109),
    [aux_sym_core_token107] = ACTIONS(109),
    [aux_sym_core_token108] = ACTIONS(109),
    [aux_sym_core_token109] = ACTIONS(109),
    [aux_sym_core_token110] = ACTIONS(109),
    [aux_sym_core_token111] = ACTIONS(109),
    [aux_sym_core_token112] = ACTIONS(109),
    [aux_sym_core_token113] = ACTIONS(109),
    [aux_sym_core_token114] = ACTIONS(109),
    [aux_sym_core_token115] = ACTIONS(109),
    [aux_sym_core_token116] = ACTIONS(109),
    [aux_sym_core_token117] = ACTIONS(109),
    [aux_sym_core_token118] = ACTIONS(109),
    [aux_sym_core_token119] = ACTIONS(109),
    [aux_sym_core_token120] = ACTIONS(109),
    [aux_sym_core_token121] = ACTIONS(109),
    [aux_sym_core_token122] = ACTIONS(109),
    [aux_sym_core_token123] = ACTIONS(109),
    [aux_sym_core_token124] = ACTIONS(109),
    [aux_sym_core_token125] = ACTIONS(109),
    [aux_sym_core_token126] = ACTIONS(109),
    [aux_sym_core_token127] = ACTIONS(109),
    [aux_sym_core_token128] = ACTIONS(109),
    [aux_sym_core_token129] = ACTIONS(109),
    [aux_sym_core_token130] = ACTIONS(109),
    [aux_sym_core_token131] = ACTIONS(109),
    [aux_sym_core_token132] = ACTIONS(109),
    [aux_sym_core_token133] = ACTIONS(109),
    [aux_sym_core_token134] = ACTIONS(109),
    [aux_sym_core_token135] = ACTIONS(109),
    [aux_sym_core_token136] = ACTIONS(109),
    [aux_sym_core_token137] = ACTIONS(109),
    [aux_sym_core_token138] = ACTIONS(109),
    [aux_sym_core_token139] = ACTIONS(109),
    [aux_sym_core_token140] = ACTIONS(109),
    [aux_sym_core_token141] = ACTIONS(109),
    [aux_sym_core_token142] = ACTIONS(109),
    [aux_sym_core_token143] = ACTIONS(109),
    [aux_sym_core_token144] = ACTIONS(109),
    [aux_sym_core_token145] = ACTIONS(109),
    [aux_sym_core_token146] = ACTIONS(109),
    [aux_sym_core_token147] = ACTIONS(109),
    [aux_sym_core_token148] = ACTIONS(109),
    [aux_sym_core_token149] = ACTIONS(109),
    [aux_sym_core_token150] = ACTIONS(109),
    [aux_sym_core_token151] = ACTIONS(109),
    [aux_sym_core_token152] = ACTIONS(109),
    [aux_sym_core_token153] = ACTIONS(109),
    [aux_sym_core_token154] = ACTIONS(109),
    [aux_sym_core_token155] = ACTIONS(109),
    [aux_sym_core_token156] = ACTIONS(109),
    [aux_sym_core_token157] = ACTIONS(109),
    [aux_sym_core_token158] = ACTIONS(109),
    [aux_sym_core_token159] = ACTIONS(109),
    [aux_sym_core_token160] = ACTIONS(109),
    [aux_sym_core_token161] = ACTIONS(109),
    [aux_sym_core_token162] = ACTIONS(109),
    [aux_sym_core_token163] = ACTIONS(109),
    [aux_sym_core_token164] = ACTIONS(109),
    [aux_sym_core_token165] = ACTIONS(109),
    [aux_sym_core_token166] = ACTIONS(109),
    [aux_sym_core_token167] = ACTIONS(109),
    [aux_sym_core_token168] = ACTIONS(109),
    [aux_sym_core_token169] = ACTIONS(109),
    [aux_sym_core_token170] = ACTIONS(109),
    [aux_sym_core_token171] = ACTIONS(109),
    [aux_sym_core_token172] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_STAR_SLASH] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [sym_word] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(109),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [aux_sym_comment_token1] = ACTIONS(111),
    [aux_sym_comment_token2] = ACTIONS(111),
    [sym_string] = ACTIONS(111),
    [aux_sym_number_token1] = ACTIONS(113),
    [aux_sym_core_token1] = ACTIONS(113),
    [aux_sym_core_token2] = ACTIONS(113),
    [aux_sym_core_token3] = ACTIONS(113),
    [aux_sym_core_token4] = ACTIONS(113),
    [aux_sym_core_token5] = ACTIONS(113),
    [aux_sym_core_token6] = ACTIONS(113),
    [aux_sym_core_token7] = ACTIONS(113),
    [aux_sym_core_token8] = ACTIONS(113),
    [aux_sym_core_token9] = ACTIONS(113),
    [aux_sym_core_token10] = ACTIONS(113),
    [aux_sym_core_token11] = ACTIONS(113),
    [aux_sym_core_token12] = ACTIONS(113),
    [aux_sym_core_token13] = ACTIONS(113),
    [aux_sym_core_token14] = ACTIONS(113),
    [aux_sym_core_token15] = ACTIONS(113),
    [aux_sym_core_token16] = ACTIONS(113),
    [aux_sym_core_token17] = ACTIONS(113),
    [aux_sym_core_token18] = ACTIONS(113),
    [aux_sym_core_token19] = ACTIONS(113),
    [aux_sym_core_token20] = ACTIONS(113),
    [aux_sym_core_token21] = ACTIONS(113),
    [aux_sym_core_token22] = ACTIONS(113),
    [aux_sym_core_token23] = ACTIONS(113),
    [aux_sym_core_token24] = ACTIONS(113),
    [aux_sym_core_token25] = ACTIONS(113),
    [aux_sym_core_token26] = ACTIONS(113),
    [aux_sym_core_token27] = ACTIONS(113),
    [aux_sym_core_token28] = ACTIONS(113),
    [aux_sym_core_token29] = ACTIONS(113),
    [aux_sym_core_token30] = ACTIONS(113),
    [aux_sym_core_token31] = ACTIONS(113),
    [aux_sym_core_token32] = ACTIONS(113),
    [aux_sym_core_token33] = ACTIONS(113),
    [aux_sym_core_token34] = ACTIONS(113),
    [aux_sym_core_token35] = ACTIONS(113),
    [aux_sym_core_token36] = ACTIONS(113),
    [aux_sym_core_token37] = ACTIONS(113),
    [aux_sym_core_token38] = ACTIONS(113),
    [aux_sym_core_token39] = ACTIONS(113),
    [aux_sym_core_token40] = ACTIONS(113),
    [aux_sym_core_token41] = ACTIONS(113),
    [aux_sym_core_token42] = ACTIONS(113),
    [aux_sym_core_token43] = ACTIONS(113),
    [aux_sym_core_token44] = ACTIONS(113),
    [aux_sym_core_token45] = ACTIONS(113),
    [aux_sym_core_token46] = ACTIONS(113),
    [aux_sym_core_token47] = ACTIONS(113),
    [aux_sym_core_token48] = ACTIONS(113),
    [aux_sym_core_token49] = ACTIONS(113),
    [aux_sym_core_token50] = ACTIONS(113),
    [aux_sym_core_token51] = ACTIONS(113),
    [aux_sym_core_token52] = ACTIONS(113),
    [aux_sym_core_token53] = ACTIONS(113),
    [aux_sym_core_token54] = ACTIONS(113),
    [aux_sym_core_token55] = ACTIONS(113),
    [aux_sym_core_token56] = ACTIONS(113),
    [aux_sym_core_token57] = ACTIONS(113),
    [aux_sym_core_token58] = ACTIONS(113),
    [aux_sym_core_token59] = ACTIONS(113),
    [aux_sym_core_token60] = ACTIONS(113),
    [aux_sym_core_token61] = ACTIONS(113),
    [aux_sym_core_token62] = ACTIONS(113),
    [aux_sym_core_token63] = ACTIONS(113),
    [aux_sym_core_token64] = ACTIONS(113),
    [aux_sym_core_token65] = ACTIONS(113),
    [aux_sym_core_token66] = ACTIONS(113),
    [aux_sym_core_token67] = ACTIONS(113),
    [aux_sym_core_token68] = ACTIONS(113),
    [aux_sym_core_token69] = ACTIONS(113),
    [aux_sym_core_token70] = ACTIONS(113),
    [aux_sym_core_token71] = ACTIONS(113),
    [aux_sym_core_token72] = ACTIONS(113),
    [aux_sym_core_token73] = ACTIONS(113),
    [aux_sym_core_token74] = ACTIONS(113),
    [aux_sym_core_token75] = ACTIONS(113),
    [aux_sym_core_token76] = ACTIONS(113),
    [aux_sym_core_token77] = ACTIONS(113),
    [aux_sym_core_token78] = ACTIONS(113),
    [aux_sym_core_token79] = ACTIONS(113),
    [aux_sym_core_token80] = ACTIONS(113),
    [aux_sym_core_token81] = ACTIONS(113),
    [aux_sym_core_token82] = ACTIONS(113),
    [aux_sym_core_token83] = ACTIONS(113),
    [aux_sym_core_token84] = ACTIONS(113),
    [aux_sym_core_token85] = ACTIONS(113),
    [aux_sym_core_token86] = ACTIONS(113),
    [aux_sym_core_token87] = ACTIONS(113),
    [aux_sym_core_token88] = ACTIONS(113),
    [aux_sym_core_token89] = ACTIONS(113),
    [aux_sym_core_token90] = ACTIONS(113),
    [aux_sym_core_token91] = ACTIONS(113),
    [aux_sym_core_token92] = ACTIONS(113),
    [aux_sym_core_token93] = ACTIONS(113),
    [aux_sym_core_token94] = ACTIONS(113),
    [aux_sym_core_token95] = ACTIONS(113),
    [aux_sym_core_token96] = ACTIONS(113),
    [aux_sym_core_token97] = ACTIONS(113),
    [aux_sym_core_token98] = ACTIONS(113),
    [aux_sym_core_token99] = ACTIONS(113),
    [aux_sym_core_token100] = ACTIONS(113),
    [aux_sym_core_token101] = ACTIONS(113),
    [aux_sym_core_token102] = ACTIONS(113),
    [aux_sym_core_token103] = ACTIONS(113),
    [aux_sym_core_token104] = ACTIONS(113),
    [aux_sym_core_token105] = ACTIONS(113),
    [aux_sym_core_token106] = ACTIONS(113),
    [aux_sym_core_token107] = ACTIONS(113),
    [aux_sym_core_token108] = ACTIONS(113),
    [aux_sym_core_token109] = ACTIONS(113),
    [aux_sym_core_token110] = ACTIONS(113),
    [aux_sym_core_token111] = ACTIONS(113),
    [aux_sym_core_token112] = ACTIONS(113),
    [aux_sym_core_token113] = ACTIONS(113),
    [aux_sym_core_token114] = ACTIONS(113),
    [aux_sym_core_token115] = ACTIONS(113),
    [aux_sym_core_token116] = ACTIONS(113),
    [aux_sym_core_token117] = ACTIONS(113),
    [aux_sym_core_token118] = ACTIONS(113),
    [aux_sym_core_token119] = ACTIONS(113),
    [aux_sym_core_token120] = ACTIONS(113),
    [aux_sym_core_token121] = ACTIONS(113),
    [aux_sym_core_token122] = ACTIONS(113),
    [aux_sym_core_token123] = ACTIONS(113),
    [aux_sym_core_token124] = ACTIONS(113),
    [aux_sym_core_token125] = ACTIONS(113),
    [aux_sym_core_token126] = ACTIONS(113),
    [aux_sym_core_token127] = ACTIONS(113),
    [aux_sym_core_token128] = ACTIONS(113),
    [aux_sym_core_token129] = ACTIONS(113),
    [aux_sym_core_token130] = ACTIONS(113),
    [aux_sym_core_token131] = ACTIONS(113),
    [aux_sym_core_token132] = ACTIONS(113),
    [aux_sym_core_token133] = ACTIONS(113),
    [aux_sym_core_token134] = ACTIONS(113),
    [aux_sym_core_token135] = ACTIONS(113),
    [aux_sym_core_token136] = ACTIONS(113),
    [aux_sym_core_token137] = ACTIONS(113),
    [aux_sym_core_token138] = ACTIONS(113),
    [aux_sym_core_token139] = ACTIONS(113),
    [aux_sym_core_token140] = ACTIONS(113),
    [aux_sym_core_token141] = ACTIONS(113),
    [aux_sym_core_token142] = ACTIONS(113),
    [aux_sym_core_token143] = ACTIONS(113),
    [aux_sym_core_token144] = ACTIONS(113),
    [aux_sym_core_token145] = ACTIONS(113),
    [aux_sym_core_token146] = ACTIONS(113),
    [aux_sym_core_token147] = ACTIONS(113),
    [aux_sym_core_token148] = ACTIONS(113),
    [aux_sym_core_token149] = ACTIONS(113),
    [aux_sym_core_token150] = ACTIONS(113),
    [aux_sym_core_token151] = ACTIONS(113),
    [aux_sym_core_token152] = ACTIONS(113),
    [aux_sym_core_token153] = ACTIONS(113),
    [aux_sym_core_token154] = ACTIONS(113),
    [aux_sym_core_token155] = ACTIONS(113),
    [aux_sym_core_token156] = ACTIONS(113),
    [aux_sym_core_token157] = ACTIONS(113),
    [aux_sym_core_token158] = ACTIONS(113),
    [aux_sym_core_token159] = ACTIONS(113),
    [aux_sym_core_token160] = ACTIONS(113),
    [aux_sym_core_token161] = ACTIONS(113),
    [aux_sym_core_token162] = ACTIONS(113),
    [aux_sym_core_token163] = ACTIONS(113),
    [aux_sym_core_token164] = ACTIONS(113),
    [aux_sym_core_token165] = ACTIONS(113),
    [aux_sym_core_token166] = ACTIONS(113),
    [aux_sym_core_token167] = ACTIONS(113),
    [aux_sym_core_token168] = ACTIONS(113),
    [aux_sym_core_token169] = ACTIONS(113),
    [aux_sym_core_token170] = ACTIONS(113),
    [aux_sym_core_token171] = ACTIONS(113),
    [aux_sym_core_token172] = ACTIONS(113),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(113),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_SLASH] = ACTIONS(113),
    [anon_sym_STAR] = ACTIONS(113),
    [anon_sym_STAR_SLASH] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [sym_word] = ACTIONS(113),
    [anon_sym_COLON] = ACTIONS(113),
  },
  [17] = {
    [aux_sym_comment_token1] = ACTIONS(87),
    [aux_sym_comment_token2] = ACTIONS(87),
    [aux_sym_number_token1] = ACTIONS(89),
    [aux_sym_core_token1] = ACTIONS(89),
    [aux_sym_core_token2] = ACTIONS(89),
    [aux_sym_core_token3] = ACTIONS(89),
    [aux_sym_core_token4] = ACTIONS(89),
    [aux_sym_core_token5] = ACTIONS(89),
    [aux_sym_core_token6] = ACTIONS(89),
    [aux_sym_core_token7] = ACTIONS(89),
    [aux_sym_core_token8] = ACTIONS(89),
    [aux_sym_core_token9] = ACTIONS(89),
    [aux_sym_core_token10] = ACTIONS(89),
    [aux_sym_core_token11] = ACTIONS(89),
    [aux_sym_core_token12] = ACTIONS(89),
    [aux_sym_core_token13] = ACTIONS(89),
    [aux_sym_core_token14] = ACTIONS(89),
    [aux_sym_core_token15] = ACTIONS(89),
    [aux_sym_core_token16] = ACTIONS(89),
    [aux_sym_core_token17] = ACTIONS(89),
    [aux_sym_core_token18] = ACTIONS(89),
    [aux_sym_core_token19] = ACTIONS(89),
    [aux_sym_core_token20] = ACTIONS(89),
    [aux_sym_core_token21] = ACTIONS(89),
    [aux_sym_core_token22] = ACTIONS(89),
    [aux_sym_core_token23] = ACTIONS(89),
    [aux_sym_core_token24] = ACTIONS(89),
    [aux_sym_core_token25] = ACTIONS(89),
    [aux_sym_core_token26] = ACTIONS(89),
    [aux_sym_core_token27] = ACTIONS(89),
    [aux_sym_core_token28] = ACTIONS(89),
    [aux_sym_core_token29] = ACTIONS(89),
    [aux_sym_core_token30] = ACTIONS(89),
    [aux_sym_core_token31] = ACTIONS(89),
    [aux_sym_core_token32] = ACTIONS(89),
    [aux_sym_core_token33] = ACTIONS(89),
    [aux_sym_core_token34] = ACTIONS(89),
    [aux_sym_core_token35] = ACTIONS(89),
    [aux_sym_core_token36] = ACTIONS(89),
    [aux_sym_core_token37] = ACTIONS(89),
    [aux_sym_core_token38] = ACTIONS(89),
    [aux_sym_core_token39] = ACTIONS(89),
    [aux_sym_core_token40] = ACTIONS(89),
    [aux_sym_core_token41] = ACTIONS(89),
    [aux_sym_core_token42] = ACTIONS(89),
    [aux_sym_core_token43] = ACTIONS(89),
    [aux_sym_core_token44] = ACTIONS(89),
    [aux_sym_core_token45] = ACTIONS(89),
    [aux_sym_core_token46] = ACTIONS(89),
    [aux_sym_core_token47] = ACTIONS(89),
    [aux_sym_core_token48] = ACTIONS(89),
    [aux_sym_core_token49] = ACTIONS(89),
    [aux_sym_core_token50] = ACTIONS(89),
    [aux_sym_core_token51] = ACTIONS(89),
    [aux_sym_core_token52] = ACTIONS(89),
    [aux_sym_core_token53] = ACTIONS(89),
    [aux_sym_core_token54] = ACTIONS(89),
    [aux_sym_core_token55] = ACTIONS(89),
    [aux_sym_core_token56] = ACTIONS(89),
    [aux_sym_core_token57] = ACTIONS(89),
    [aux_sym_core_token58] = ACTIONS(89),
    [aux_sym_core_token59] = ACTIONS(89),
    [aux_sym_core_token60] = ACTIONS(89),
    [aux_sym_core_token61] = ACTIONS(89),
    [aux_sym_core_token62] = ACTIONS(89),
    [aux_sym_core_token63] = ACTIONS(89),
    [aux_sym_core_token64] = ACTIONS(89),
    [aux_sym_core_token65] = ACTIONS(89),
    [aux_sym_core_token66] = ACTIONS(89),
    [aux_sym_core_token67] = ACTIONS(89),
    [aux_sym_core_token68] = ACTIONS(89),
    [aux_sym_core_token69] = ACTIONS(89),
    [aux_sym_core_token70] = ACTIONS(89),
    [aux_sym_core_token71] = ACTIONS(89),
    [aux_sym_core_token72] = ACTIONS(89),
    [aux_sym_core_token73] = ACTIONS(89),
    [aux_sym_core_token74] = ACTIONS(89),
    [aux_sym_core_token75] = ACTIONS(89),
    [aux_sym_core_token76] = ACTIONS(89),
    [aux_sym_core_token77] = ACTIONS(89),
    [aux_sym_core_token78] = ACTIONS(89),
    [aux_sym_core_token79] = ACTIONS(89),
    [aux_sym_core_token80] = ACTIONS(89),
    [aux_sym_core_token81] = ACTIONS(89),
    [aux_sym_core_token82] = ACTIONS(89),
    [aux_sym_core_token83] = ACTIONS(89),
    [aux_sym_core_token84] = ACTIONS(89),
    [aux_sym_core_token85] = ACTIONS(89),
    [aux_sym_core_token86] = ACTIONS(89),
    [aux_sym_core_token87] = ACTIONS(89),
    [aux_sym_core_token88] = ACTIONS(89),
    [aux_sym_core_token89] = ACTIONS(89),
    [aux_sym_core_token90] = ACTIONS(89),
    [aux_sym_core_token91] = ACTIONS(89),
    [aux_sym_core_token92] = ACTIONS(89),
    [aux_sym_core_token93] = ACTIONS(89),
    [aux_sym_core_token94] = ACTIONS(89),
    [aux_sym_core_token95] = ACTIONS(89),
    [aux_sym_core_token96] = ACTIONS(89),
    [aux_sym_core_token97] = ACTIONS(89),
    [aux_sym_core_token98] = ACTIONS(89),
    [aux_sym_core_token99] = ACTIONS(89),
    [aux_sym_core_token100] = ACTIONS(89),
    [aux_sym_core_token101] = ACTIONS(89),
    [aux_sym_core_token102] = ACTIONS(89),
    [aux_sym_core_token103] = ACTIONS(89),
    [aux_sym_core_token104] = ACTIONS(89),
    [aux_sym_core_token105] = ACTIONS(89),
    [aux_sym_core_token106] = ACTIONS(89),
    [aux_sym_core_token107] = ACTIONS(89),
    [aux_sym_core_token108] = ACTIONS(89),
    [aux_sym_core_token109] = ACTIONS(89),
    [aux_sym_core_token110] = ACTIONS(89),
    [aux_sym_core_token111] = ACTIONS(89),
    [aux_sym_core_token112] = ACTIONS(89),
    [aux_sym_core_token113] = ACTIONS(89),
    [aux_sym_core_token114] = ACTIONS(89),
    [aux_sym_core_token115] = ACTIONS(89),
    [aux_sym_core_token116] = ACTIONS(89),
    [aux_sym_core_token117] = ACTIONS(89),
    [aux_sym_core_token118] = ACTIONS(89),
    [aux_sym_core_token119] = ACTIONS(89),
    [aux_sym_core_token120] = ACTIONS(89),
    [aux_sym_core_token121] = ACTIONS(89),
    [aux_sym_core_token122] = ACTIONS(89),
    [aux_sym_core_token123] = ACTIONS(89),
    [aux_sym_core_token124] = ACTIONS(89),
    [aux_sym_core_token125] = ACTIONS(89),
    [aux_sym_core_token126] = ACTIONS(89),
    [aux_sym_core_token127] = ACTIONS(89),
    [aux_sym_core_token128] = ACTIONS(89),
    [aux_sym_core_token129] = ACTIONS(89),
    [aux_sym_core_token130] = ACTIONS(89),
    [aux_sym_core_token131] = ACTIONS(89),
    [aux_sym_core_token132] = ACTIONS(89),
    [aux_sym_core_token133] = ACTIONS(89),
    [aux_sym_core_token134] = ACTIONS(89),
    [aux_sym_core_token135] = ACTIONS(89),
    [aux_sym_core_token136] = ACTIONS(89),
    [aux_sym_core_token137] = ACTIONS(89),
    [aux_sym_core_token138] = ACTIONS(89),
    [aux_sym_core_token139] = ACTIONS(89),
    [aux_sym_core_token140] = ACTIONS(89),
    [aux_sym_core_token141] = ACTIONS(89),
    [aux_sym_core_token142] = ACTIONS(89),
    [aux_sym_core_token143] = ACTIONS(89),
    [aux_sym_core_token144] = ACTIONS(89),
    [aux_sym_core_token145] = ACTIONS(89),
    [aux_sym_core_token146] = ACTIONS(89),
    [aux_sym_core_token147] = ACTIONS(89),
    [aux_sym_core_token148] = ACTIONS(89),
    [aux_sym_core_token149] = ACTIONS(89),
    [aux_sym_core_token150] = ACTIONS(89),
    [aux_sym_core_token151] = ACTIONS(89),
    [aux_sym_core_token152] = ACTIONS(89),
    [aux_sym_core_token153] = ACTIONS(89),
    [aux_sym_core_token154] = ACTIONS(89),
    [aux_sym_core_token155] = ACTIONS(89),
    [aux_sym_core_token156] = ACTIONS(89),
    [aux_sym_core_token157] = ACTIONS(89),
    [aux_sym_core_token158] = ACTIONS(89),
    [aux_sym_core_token159] = ACTIONS(89),
    [aux_sym_core_token160] = ACTIONS(89),
    [aux_sym_core_token161] = ACTIONS(89),
    [aux_sym_core_token162] = ACTIONS(89),
    [aux_sym_core_token163] = ACTIONS(89),
    [aux_sym_core_token164] = ACTIONS(89),
    [aux_sym_core_token165] = ACTIONS(89),
    [aux_sym_core_token166] = ACTIONS(89),
    [aux_sym_core_token167] = ACTIONS(89),
    [aux_sym_core_token168] = ACTIONS(89),
    [aux_sym_core_token169] = ACTIONS(89),
    [aux_sym_core_token170] = ACTIONS(89),
    [aux_sym_core_token171] = ACTIONS(89),
    [aux_sym_core_token172] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_SLASH] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(89),
    [anon_sym_STAR_SLASH] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(89),
    [sym_word] = ACTIONS(89),
    [anon_sym_SEMI] = ACTIONS(89),
  },
  [18] = {
    [aux_sym_comment_token1] = ACTIONS(91),
    [aux_sym_comment_token2] = ACTIONS(91),
    [aux_sym_number_token1] = ACTIONS(93),
    [aux_sym_core_token1] = ACTIONS(93),
    [aux_sym_core_token2] = ACTIONS(93),
    [aux_sym_core_token3] = ACTIONS(93),
    [aux_sym_core_token4] = ACTIONS(93),
    [aux_sym_core_token5] = ACTIONS(93),
    [aux_sym_core_token6] = ACTIONS(93),
    [aux_sym_core_token7] = ACTIONS(93),
    [aux_sym_core_token8] = ACTIONS(93),
    [aux_sym_core_token9] = ACTIONS(93),
    [aux_sym_core_token10] = ACTIONS(93),
    [aux_sym_core_token11] = ACTIONS(93),
    [aux_sym_core_token12] = ACTIONS(93),
    [aux_sym_core_token13] = ACTIONS(93),
    [aux_sym_core_token14] = ACTIONS(93),
    [aux_sym_core_token15] = ACTIONS(93),
    [aux_sym_core_token16] = ACTIONS(93),
    [aux_sym_core_token17] = ACTIONS(93),
    [aux_sym_core_token18] = ACTIONS(93),
    [aux_sym_core_token19] = ACTIONS(93),
    [aux_sym_core_token20] = ACTIONS(93),
    [aux_sym_core_token21] = ACTIONS(93),
    [aux_sym_core_token22] = ACTIONS(93),
    [aux_sym_core_token23] = ACTIONS(93),
    [aux_sym_core_token24] = ACTIONS(93),
    [aux_sym_core_token25] = ACTIONS(93),
    [aux_sym_core_token26] = ACTIONS(93),
    [aux_sym_core_token27] = ACTIONS(93),
    [aux_sym_core_token28] = ACTIONS(93),
    [aux_sym_core_token29] = ACTIONS(93),
    [aux_sym_core_token30] = ACTIONS(93),
    [aux_sym_core_token31] = ACTIONS(93),
    [aux_sym_core_token32] = ACTIONS(93),
    [aux_sym_core_token33] = ACTIONS(93),
    [aux_sym_core_token34] = ACTIONS(93),
    [aux_sym_core_token35] = ACTIONS(93),
    [aux_sym_core_token36] = ACTIONS(93),
    [aux_sym_core_token37] = ACTIONS(93),
    [aux_sym_core_token38] = ACTIONS(93),
    [aux_sym_core_token39] = ACTIONS(93),
    [aux_sym_core_token40] = ACTIONS(93),
    [aux_sym_core_token41] = ACTIONS(93),
    [aux_sym_core_token42] = ACTIONS(93),
    [aux_sym_core_token43] = ACTIONS(93),
    [aux_sym_core_token44] = ACTIONS(93),
    [aux_sym_core_token45] = ACTIONS(93),
    [aux_sym_core_token46] = ACTIONS(93),
    [aux_sym_core_token47] = ACTIONS(93),
    [aux_sym_core_token48] = ACTIONS(93),
    [aux_sym_core_token49] = ACTIONS(93),
    [aux_sym_core_token50] = ACTIONS(93),
    [aux_sym_core_token51] = ACTIONS(93),
    [aux_sym_core_token52] = ACTIONS(93),
    [aux_sym_core_token53] = ACTIONS(93),
    [aux_sym_core_token54] = ACTIONS(93),
    [aux_sym_core_token55] = ACTIONS(93),
    [aux_sym_core_token56] = ACTIONS(93),
    [aux_sym_core_token57] = ACTIONS(93),
    [aux_sym_core_token58] = ACTIONS(93),
    [aux_sym_core_token59] = ACTIONS(93),
    [aux_sym_core_token60] = ACTIONS(93),
    [aux_sym_core_token61] = ACTIONS(93),
    [aux_sym_core_token62] = ACTIONS(93),
    [aux_sym_core_token63] = ACTIONS(93),
    [aux_sym_core_token64] = ACTIONS(93),
    [aux_sym_core_token65] = ACTIONS(93),
    [aux_sym_core_token66] = ACTIONS(93),
    [aux_sym_core_token67] = ACTIONS(93),
    [aux_sym_core_token68] = ACTIONS(93),
    [aux_sym_core_token69] = ACTIONS(93),
    [aux_sym_core_token70] = ACTIONS(93),
    [aux_sym_core_token71] = ACTIONS(93),
    [aux_sym_core_token72] = ACTIONS(93),
    [aux_sym_core_token73] = ACTIONS(93),
    [aux_sym_core_token74] = ACTIONS(93),
    [aux_sym_core_token75] = ACTIONS(93),
    [aux_sym_core_token76] = ACTIONS(93),
    [aux_sym_core_token77] = ACTIONS(93),
    [aux_sym_core_token78] = ACTIONS(93),
    [aux_sym_core_token79] = ACTIONS(93),
    [aux_sym_core_token80] = ACTIONS(93),
    [aux_sym_core_token81] = ACTIONS(93),
    [aux_sym_core_token82] = ACTIONS(93),
    [aux_sym_core_token83] = ACTIONS(93),
    [aux_sym_core_token84] = ACTIONS(93),
    [aux_sym_core_token85] = ACTIONS(93),
    [aux_sym_core_token86] = ACTIONS(93),
    [aux_sym_core_token87] = ACTIONS(93),
    [aux_sym_core_token88] = ACTIONS(93),
    [aux_sym_core_token89] = ACTIONS(93),
    [aux_sym_core_token90] = ACTIONS(93),
    [aux_sym_core_token91] = ACTIONS(93),
    [aux_sym_core_token92] = ACTIONS(93),
    [aux_sym_core_token93] = ACTIONS(93),
    [aux_sym_core_token94] = ACTIONS(93),
    [aux_sym_core_token95] = ACTIONS(93),
    [aux_sym_core_token96] = ACTIONS(93),
    [aux_sym_core_token97] = ACTIONS(93),
    [aux_sym_core_token98] = ACTIONS(93),
    [aux_sym_core_token99] = ACTIONS(93),
    [aux_sym_core_token100] = ACTIONS(93),
    [aux_sym_core_token101] = ACTIONS(93),
    [aux_sym_core_token102] = ACTIONS(93),
    [aux_sym_core_token103] = ACTIONS(93),
    [aux_sym_core_token104] = ACTIONS(93),
    [aux_sym_core_token105] = ACTIONS(93),
    [aux_sym_core_token106] = ACTIONS(93),
    [aux_sym_core_token107] = ACTIONS(93),
    [aux_sym_core_token108] = ACTIONS(93),
    [aux_sym_core_token109] = ACTIONS(93),
    [aux_sym_core_token110] = ACTIONS(93),
    [aux_sym_core_token111] = ACTIONS(93),
    [aux_sym_core_token112] = ACTIONS(93),
    [aux_sym_core_token113] = ACTIONS(93),
    [aux_sym_core_token114] = ACTIONS(93),
    [aux_sym_core_token115] = ACTIONS(93),
    [aux_sym_core_token116] = ACTIONS(93),
    [aux_sym_core_token117] = ACTIONS(93),
    [aux_sym_core_token118] = ACTIONS(93),
    [aux_sym_core_token119] = ACTIONS(93),
    [aux_sym_core_token120] = ACTIONS(93),
    [aux_sym_core_token121] = ACTIONS(93),
    [aux_sym_core_token122] = ACTIONS(93),
    [aux_sym_core_token123] = ACTIONS(93),
    [aux_sym_core_token124] = ACTIONS(93),
    [aux_sym_core_token125] = ACTIONS(93),
    [aux_sym_core_token126] = ACTIONS(93),
    [aux_sym_core_token127] = ACTIONS(93),
    [aux_sym_core_token128] = ACTIONS(93),
    [aux_sym_core_token129] = ACTIONS(93),
    [aux_sym_core_token130] = ACTIONS(93),
    [aux_sym_core_token131] = ACTIONS(93),
    [aux_sym_core_token132] = ACTIONS(93),
    [aux_sym_core_token133] = ACTIONS(93),
    [aux_sym_core_token134] = ACTIONS(93),
    [aux_sym_core_token135] = ACTIONS(93),
    [aux_sym_core_token136] = ACTIONS(93),
    [aux_sym_core_token137] = ACTIONS(93),
    [aux_sym_core_token138] = ACTIONS(93),
    [aux_sym_core_token139] = ACTIONS(93),
    [aux_sym_core_token140] = ACTIONS(93),
    [aux_sym_core_token141] = ACTIONS(93),
    [aux_sym_core_token142] = ACTIONS(93),
    [aux_sym_core_token143] = ACTIONS(93),
    [aux_sym_core_token144] = ACTIONS(93),
    [aux_sym_core_token145] = ACTIONS(93),
    [aux_sym_core_token146] = ACTIONS(93),
    [aux_sym_core_token147] = ACTIONS(93),
    [aux_sym_core_token148] = ACTIONS(93),
    [aux_sym_core_token149] = ACTIONS(93),
    [aux_sym_core_token150] = ACTIONS(93),
    [aux_sym_core_token151] = ACTIONS(93),
    [aux_sym_core_token152] = ACTIONS(93),
    [aux_sym_core_token153] = ACTIONS(93),
    [aux_sym_core_token154] = ACTIONS(93),
    [aux_sym_core_token155] = ACTIONS(93),
    [aux_sym_core_token156] = ACTIONS(93),
    [aux_sym_core_token157] = ACTIONS(93),
    [aux_sym_core_token158] = ACTIONS(93),
    [aux_sym_core_token159] = ACTIONS(93),
    [aux_sym_core_token160] = ACTIONS(93),
    [aux_sym_core_token161] = ACTIONS(93),
    [aux_sym_core_token162] = ACTIONS(93),
    [aux_sym_core_token163] = ACTIONS(93),
    [aux_sym_core_token164] = ACTIONS(93),
    [aux_sym_core_token165] = ACTIONS(93),
    [aux_sym_core_token166] = ACTIONS(93),
    [aux_sym_core_token167] = ACTIONS(93),
    [aux_sym_core_token168] = ACTIONS(93),
    [aux_sym_core_token169] = ACTIONS(93),
    [aux_sym_core_token170] = ACTIONS(93),
    [aux_sym_core_token171] = ACTIONS(93),
    [aux_sym_core_token172] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_STAR] = ACTIONS(93),
    [anon_sym_STAR_SLASH] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [sym_word] = ACTIONS(93),
    [anon_sym_SEMI] = ACTIONS(93),
  },
  [19] = {
    [aux_sym_comment_token1] = ACTIONS(107),
    [aux_sym_comment_token2] = ACTIONS(107),
    [aux_sym_number_token1] = ACTIONS(109),
    [aux_sym_core_token1] = ACTIONS(109),
    [aux_sym_core_token2] = ACTIONS(109),
    [aux_sym_core_token3] = ACTIONS(109),
    [aux_sym_core_token4] = ACTIONS(109),
    [aux_sym_core_token5] = ACTIONS(109),
    [aux_sym_core_token6] = ACTIONS(109),
    [aux_sym_core_token7] = ACTIONS(109),
    [aux_sym_core_token8] = ACTIONS(109),
    [aux_sym_core_token9] = ACTIONS(109),
    [aux_sym_core_token10] = ACTIONS(109),
    [aux_sym_core_token11] = ACTIONS(109),
    [aux_sym_core_token12] = ACTIONS(109),
    [aux_sym_core_token13] = ACTIONS(109),
    [aux_sym_core_token14] = ACTIONS(109),
    [aux_sym_core_token15] = ACTIONS(109),
    [aux_sym_core_token16] = ACTIONS(109),
    [aux_sym_core_token17] = ACTIONS(109),
    [aux_sym_core_token18] = ACTIONS(109),
    [aux_sym_core_token19] = ACTIONS(109),
    [aux_sym_core_token20] = ACTIONS(109),
    [aux_sym_core_token21] = ACTIONS(109),
    [aux_sym_core_token22] = ACTIONS(109),
    [aux_sym_core_token23] = ACTIONS(109),
    [aux_sym_core_token24] = ACTIONS(109),
    [aux_sym_core_token25] = ACTIONS(109),
    [aux_sym_core_token26] = ACTIONS(109),
    [aux_sym_core_token27] = ACTIONS(109),
    [aux_sym_core_token28] = ACTIONS(109),
    [aux_sym_core_token29] = ACTIONS(109),
    [aux_sym_core_token30] = ACTIONS(109),
    [aux_sym_core_token31] = ACTIONS(109),
    [aux_sym_core_token32] = ACTIONS(109),
    [aux_sym_core_token33] = ACTIONS(109),
    [aux_sym_core_token34] = ACTIONS(109),
    [aux_sym_core_token35] = ACTIONS(109),
    [aux_sym_core_token36] = ACTIONS(109),
    [aux_sym_core_token37] = ACTIONS(109),
    [aux_sym_core_token38] = ACTIONS(109),
    [aux_sym_core_token39] = ACTIONS(109),
    [aux_sym_core_token40] = ACTIONS(109),
    [aux_sym_core_token41] = ACTIONS(109),
    [aux_sym_core_token42] = ACTIONS(109),
    [aux_sym_core_token43] = ACTIONS(109),
    [aux_sym_core_token44] = ACTIONS(109),
    [aux_sym_core_token45] = ACTIONS(109),
    [aux_sym_core_token46] = ACTIONS(109),
    [aux_sym_core_token47] = ACTIONS(109),
    [aux_sym_core_token48] = ACTIONS(109),
    [aux_sym_core_token49] = ACTIONS(109),
    [aux_sym_core_token50] = ACTIONS(109),
    [aux_sym_core_token51] = ACTIONS(109),
    [aux_sym_core_token52] = ACTIONS(109),
    [aux_sym_core_token53] = ACTIONS(109),
    [aux_sym_core_token54] = ACTIONS(109),
    [aux_sym_core_token55] = ACTIONS(109),
    [aux_sym_core_token56] = ACTIONS(109),
    [aux_sym_core_token57] = ACTIONS(109),
    [aux_sym_core_token58] = ACTIONS(109),
    [aux_sym_core_token59] = ACTIONS(109),
    [aux_sym_core_token60] = ACTIONS(109),
    [aux_sym_core_token61] = ACTIONS(109),
    [aux_sym_core_token62] = ACTIONS(109),
    [aux_sym_core_token63] = ACTIONS(109),
    [aux_sym_core_token64] = ACTIONS(109),
    [aux_sym_core_token65] = ACTIONS(109),
    [aux_sym_core_token66] = ACTIONS(109),
    [aux_sym_core_token67] = ACTIONS(109),
    [aux_sym_core_token68] = ACTIONS(109),
    [aux_sym_core_token69] = ACTIONS(109),
    [aux_sym_core_token70] = ACTIONS(109),
    [aux_sym_core_token71] = ACTIONS(109),
    [aux_sym_core_token72] = ACTIONS(109),
    [aux_sym_core_token73] = ACTIONS(109),
    [aux_sym_core_token74] = ACTIONS(109),
    [aux_sym_core_token75] = ACTIONS(109),
    [aux_sym_core_token76] = ACTIONS(109),
    [aux_sym_core_token77] = ACTIONS(109),
    [aux_sym_core_token78] = ACTIONS(109),
    [aux_sym_core_token79] = ACTIONS(109),
    [aux_sym_core_token80] = ACTIONS(109),
    [aux_sym_core_token81] = ACTIONS(109),
    [aux_sym_core_token82] = ACTIONS(109),
    [aux_sym_core_token83] = ACTIONS(109),
    [aux_sym_core_token84] = ACTIONS(109),
    [aux_sym_core_token85] = ACTIONS(109),
    [aux_sym_core_token86] = ACTIONS(109),
    [aux_sym_core_token87] = ACTIONS(109),
    [aux_sym_core_token88] = ACTIONS(109),
    [aux_sym_core_token89] = ACTIONS(109),
    [aux_sym_core_token90] = ACTIONS(109),
    [aux_sym_core_token91] = ACTIONS(109),
    [aux_sym_core_token92] = ACTIONS(109),
    [aux_sym_core_token93] = ACTIONS(109),
    [aux_sym_core_token94] = ACTIONS(109),
    [aux_sym_core_token95] = ACTIONS(109),
    [aux_sym_core_token96] = ACTIONS(109),
    [aux_sym_core_token97] = ACTIONS(109),
    [aux_sym_core_token98] = ACTIONS(109),
    [aux_sym_core_token99] = ACTIONS(109),
    [aux_sym_core_token100] = ACTIONS(109),
    [aux_sym_core_token101] = ACTIONS(109),
    [aux_sym_core_token102] = ACTIONS(109),
    [aux_sym_core_token103] = ACTIONS(109),
    [aux_sym_core_token104] = ACTIONS(109),
    [aux_sym_core_token105] = ACTIONS(109),
    [aux_sym_core_token106] = ACTIONS(109),
    [aux_sym_core_token107] = ACTIONS(109),
    [aux_sym_core_token108] = ACTIONS(109),
    [aux_sym_core_token109] = ACTIONS(109),
    [aux_sym_core_token110] = ACTIONS(109),
    [aux_sym_core_token111] = ACTIONS(109),
    [aux_sym_core_token112] = ACTIONS(109),
    [aux_sym_core_token113] = ACTIONS(109),
    [aux_sym_core_token114] = ACTIONS(109),
    [aux_sym_core_token115] = ACTIONS(109),
    [aux_sym_core_token116] = ACTIONS(109),
    [aux_sym_core_token117] = ACTIONS(109),
    [aux_sym_core_token118] = ACTIONS(109),
    [aux_sym_core_token119] = ACTIONS(109),
    [aux_sym_core_token120] = ACTIONS(109),
    [aux_sym_core_token121] = ACTIONS(109),
    [aux_sym_core_token122] = ACTIONS(109),
    [aux_sym_core_token123] = ACTIONS(109),
    [aux_sym_core_token124] = ACTIONS(109),
    [aux_sym_core_token125] = ACTIONS(109),
    [aux_sym_core_token126] = ACTIONS(109),
    [aux_sym_core_token127] = ACTIONS(109),
    [aux_sym_core_token128] = ACTIONS(109),
    [aux_sym_core_token129] = ACTIONS(109),
    [aux_sym_core_token130] = ACTIONS(109),
    [aux_sym_core_token131] = ACTIONS(109),
    [aux_sym_core_token132] = ACTIONS(109),
    [aux_sym_core_token133] = ACTIONS(109),
    [aux_sym_core_token134] = ACTIONS(109),
    [aux_sym_core_token135] = ACTIONS(109),
    [aux_sym_core_token136] = ACTIONS(109),
    [aux_sym_core_token137] = ACTIONS(109),
    [aux_sym_core_token138] = ACTIONS(109),
    [aux_sym_core_token139] = ACTIONS(109),
    [aux_sym_core_token140] = ACTIONS(109),
    [aux_sym_core_token141] = ACTIONS(109),
    [aux_sym_core_token142] = ACTIONS(109),
    [aux_sym_core_token143] = ACTIONS(109),
    [aux_sym_core_token144] = ACTIONS(109),
    [aux_sym_core_token145] = ACTIONS(109),
    [aux_sym_core_token146] = ACTIONS(109),
    [aux_sym_core_token147] = ACTIONS(109),
    [aux_sym_core_token148] = ACTIONS(109),
    [aux_sym_core_token149] = ACTIONS(109),
    [aux_sym_core_token150] = ACTIONS(109),
    [aux_sym_core_token151] = ACTIONS(109),
    [aux_sym_core_token152] = ACTIONS(109),
    [aux_sym_core_token153] = ACTIONS(109),
    [aux_sym_core_token154] = ACTIONS(109),
    [aux_sym_core_token155] = ACTIONS(109),
    [aux_sym_core_token156] = ACTIONS(109),
    [aux_sym_core_token157] = ACTIONS(109),
    [aux_sym_core_token158] = ACTIONS(109),
    [aux_sym_core_token159] = ACTIONS(109),
    [aux_sym_core_token160] = ACTIONS(109),
    [aux_sym_core_token161] = ACTIONS(109),
    [aux_sym_core_token162] = ACTIONS(109),
    [aux_sym_core_token163] = ACTIONS(109),
    [aux_sym_core_token164] = ACTIONS(109),
    [aux_sym_core_token165] = ACTIONS(109),
    [aux_sym_core_token166] = ACTIONS(109),
    [aux_sym_core_token167] = ACTIONS(109),
    [aux_sym_core_token168] = ACTIONS(109),
    [aux_sym_core_token169] = ACTIONS(109),
    [aux_sym_core_token170] = ACTIONS(109),
    [aux_sym_core_token171] = ACTIONS(109),
    [aux_sym_core_token172] = ACTIONS(109),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_STAR] = ACTIONS(109),
    [anon_sym_STAR_SLASH] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [sym_word] = ACTIONS(109),
    [anon_sym_SEMI] = ACTIONS(109),
  },
  [20] = {
    [aux_sym_comment_token1] = ACTIONS(95),
    [aux_sym_comment_token2] = ACTIONS(95),
    [aux_sym_number_token1] = ACTIONS(97),
    [aux_sym_core_token1] = ACTIONS(97),
    [aux_sym_core_token2] = ACTIONS(97),
    [aux_sym_core_token3] = ACTIONS(97),
    [aux_sym_core_token4] = ACTIONS(97),
    [aux_sym_core_token5] = ACTIONS(97),
    [aux_sym_core_token6] = ACTIONS(97),
    [aux_sym_core_token7] = ACTIONS(97),
    [aux_sym_core_token8] = ACTIONS(97),
    [aux_sym_core_token9] = ACTIONS(97),
    [aux_sym_core_token10] = ACTIONS(97),
    [aux_sym_core_token11] = ACTIONS(97),
    [aux_sym_core_token12] = ACTIONS(97),
    [aux_sym_core_token13] = ACTIONS(97),
    [aux_sym_core_token14] = ACTIONS(97),
    [aux_sym_core_token15] = ACTIONS(97),
    [aux_sym_core_token16] = ACTIONS(97),
    [aux_sym_core_token17] = ACTIONS(97),
    [aux_sym_core_token18] = ACTIONS(97),
    [aux_sym_core_token19] = ACTIONS(97),
    [aux_sym_core_token20] = ACTIONS(97),
    [aux_sym_core_token21] = ACTIONS(97),
    [aux_sym_core_token22] = ACTIONS(97),
    [aux_sym_core_token23] = ACTIONS(97),
    [aux_sym_core_token24] = ACTIONS(97),
    [aux_sym_core_token25] = ACTIONS(97),
    [aux_sym_core_token26] = ACTIONS(97),
    [aux_sym_core_token27] = ACTIONS(97),
    [aux_sym_core_token28] = ACTIONS(97),
    [aux_sym_core_token29] = ACTIONS(97),
    [aux_sym_core_token30] = ACTIONS(97),
    [aux_sym_core_token31] = ACTIONS(97),
    [aux_sym_core_token32] = ACTIONS(97),
    [aux_sym_core_token33] = ACTIONS(97),
    [aux_sym_core_token34] = ACTIONS(97),
    [aux_sym_core_token35] = ACTIONS(97),
    [aux_sym_core_token36] = ACTIONS(97),
    [aux_sym_core_token37] = ACTIONS(97),
    [aux_sym_core_token38] = ACTIONS(97),
    [aux_sym_core_token39] = ACTIONS(97),
    [aux_sym_core_token40] = ACTIONS(97),
    [aux_sym_core_token41] = ACTIONS(97),
    [aux_sym_core_token42] = ACTIONS(97),
    [aux_sym_core_token43] = ACTIONS(97),
    [aux_sym_core_token44] = ACTIONS(97),
    [aux_sym_core_token45] = ACTIONS(97),
    [aux_sym_core_token46] = ACTIONS(97),
    [aux_sym_core_token47] = ACTIONS(97),
    [aux_sym_core_token48] = ACTIONS(97),
    [aux_sym_core_token49] = ACTIONS(97),
    [aux_sym_core_token50] = ACTIONS(97),
    [aux_sym_core_token51] = ACTIONS(97),
    [aux_sym_core_token52] = ACTIONS(97),
    [aux_sym_core_token53] = ACTIONS(97),
    [aux_sym_core_token54] = ACTIONS(97),
    [aux_sym_core_token55] = ACTIONS(97),
    [aux_sym_core_token56] = ACTIONS(97),
    [aux_sym_core_token57] = ACTIONS(97),
    [aux_sym_core_token58] = ACTIONS(97),
    [aux_sym_core_token59] = ACTIONS(97),
    [aux_sym_core_token60] = ACTIONS(97),
    [aux_sym_core_token61] = ACTIONS(97),
    [aux_sym_core_token62] = ACTIONS(97),
    [aux_sym_core_token63] = ACTIONS(97),
    [aux_sym_core_token64] = ACTIONS(97),
    [aux_sym_core_token65] = ACTIONS(97),
    [aux_sym_core_token66] = ACTIONS(97),
    [aux_sym_core_token67] = ACTIONS(97),
    [aux_sym_core_token68] = ACTIONS(97),
    [aux_sym_core_token69] = ACTIONS(97),
    [aux_sym_core_token70] = ACTIONS(97),
    [aux_sym_core_token71] = ACTIONS(97),
    [aux_sym_core_token72] = ACTIONS(97),
    [aux_sym_core_token73] = ACTIONS(97),
    [aux_sym_core_token74] = ACTIONS(97),
    [aux_sym_core_token75] = ACTIONS(97),
    [aux_sym_core_token76] = ACTIONS(97),
    [aux_sym_core_token77] = ACTIONS(97),
    [aux_sym_core_token78] = ACTIONS(97),
    [aux_sym_core_token79] = ACTIONS(97),
    [aux_sym_core_token80] = ACTIONS(97),
    [aux_sym_core_token81] = ACTIONS(97),
    [aux_sym_core_token82] = ACTIONS(97),
    [aux_sym_core_token83] = ACTIONS(97),
    [aux_sym_core_token84] = ACTIONS(97),
    [aux_sym_core_token85] = ACTIONS(97),
    [aux_sym_core_token86] = ACTIONS(97),
    [aux_sym_core_token87] = ACTIONS(97),
    [aux_sym_core_token88] = ACTIONS(97),
    [aux_sym_core_token89] = ACTIONS(97),
    [aux_sym_core_token90] = ACTIONS(97),
    [aux_sym_core_token91] = ACTIONS(97),
    [aux_sym_core_token92] = ACTIONS(97),
    [aux_sym_core_token93] = ACTIONS(97),
    [aux_sym_core_token94] = ACTIONS(97),
    [aux_sym_core_token95] = ACTIONS(97),
    [aux_sym_core_token96] = ACTIONS(97),
    [aux_sym_core_token97] = ACTIONS(97),
    [aux_sym_core_token98] = ACTIONS(97),
    [aux_sym_core_token99] = ACTIONS(97),
    [aux_sym_core_token100] = ACTIONS(97),
    [aux_sym_core_token101] = ACTIONS(97),
    [aux_sym_core_token102] = ACTIONS(97),
    [aux_sym_core_token103] = ACTIONS(97),
    [aux_sym_core_token104] = ACTIONS(97),
    [aux_sym_core_token105] = ACTIONS(97),
    [aux_sym_core_token106] = ACTIONS(97),
    [aux_sym_core_token107] = ACTIONS(97),
    [aux_sym_core_token108] = ACTIONS(97),
    [aux_sym_core_token109] = ACTIONS(97),
    [aux_sym_core_token110] = ACTIONS(97),
    [aux_sym_core_token111] = ACTIONS(97),
    [aux_sym_core_token112] = ACTIONS(97),
    [aux_sym_core_token113] = ACTIONS(97),
    [aux_sym_core_token114] = ACTIONS(97),
    [aux_sym_core_token115] = ACTIONS(97),
    [aux_sym_core_token116] = ACTIONS(97),
    [aux_sym_core_token117] = ACTIONS(97),
    [aux_sym_core_token118] = ACTIONS(97),
    [aux_sym_core_token119] = ACTIONS(97),
    [aux_sym_core_token120] = ACTIONS(97),
    [aux_sym_core_token121] = ACTIONS(97),
    [aux_sym_core_token122] = ACTIONS(97),
    [aux_sym_core_token123] = ACTIONS(97),
    [aux_sym_core_token124] = ACTIONS(97),
    [aux_sym_core_token125] = ACTIONS(97),
    [aux_sym_core_token126] = ACTIONS(97),
    [aux_sym_core_token127] = ACTIONS(97),
    [aux_sym_core_token128] = ACTIONS(97),
    [aux_sym_core_token129] = ACTIONS(97),
    [aux_sym_core_token130] = ACTIONS(97),
    [aux_sym_core_token131] = ACTIONS(97),
    [aux_sym_core_token132] = ACTIONS(97),
    [aux_sym_core_token133] = ACTIONS(97),
    [aux_sym_core_token134] = ACTIONS(97),
    [aux_sym_core_token135] = ACTIONS(97),
    [aux_sym_core_token136] = ACTIONS(97),
    [aux_sym_core_token137] = ACTIONS(97),
    [aux_sym_core_token138] = ACTIONS(97),
    [aux_sym_core_token139] = ACTIONS(97),
    [aux_sym_core_token140] = ACTIONS(97),
    [aux_sym_core_token141] = ACTIONS(97),
    [aux_sym_core_token142] = ACTIONS(97),
    [aux_sym_core_token143] = ACTIONS(97),
    [aux_sym_core_token144] = ACTIONS(97),
    [aux_sym_core_token145] = ACTIONS(97),
    [aux_sym_core_token146] = ACTIONS(97),
    [aux_sym_core_token147] = ACTIONS(97),
    [aux_sym_core_token148] = ACTIONS(97),
    [aux_sym_core_token149] = ACTIONS(97),
    [aux_sym_core_token150] = ACTIONS(97),
    [aux_sym_core_token151] = ACTIONS(97),
    [aux_sym_core_token152] = ACTIONS(97),
    [aux_sym_core_token153] = ACTIONS(97),
    [aux_sym_core_token154] = ACTIONS(97),
    [aux_sym_core_token155] = ACTIONS(97),
    [aux_sym_core_token156] = ACTIONS(97),
    [aux_sym_core_token157] = ACTIONS(97),
    [aux_sym_core_token158] = ACTIONS(97),
    [aux_sym_core_token159] = ACTIONS(97),
    [aux_sym_core_token160] = ACTIONS(97),
    [aux_sym_core_token161] = ACTIONS(97),
    [aux_sym_core_token162] = ACTIONS(97),
    [aux_sym_core_token163] = ACTIONS(97),
    [aux_sym_core_token164] = ACTIONS(97),
    [aux_sym_core_token165] = ACTIONS(97),
    [aux_sym_core_token166] = ACTIONS(97),
    [aux_sym_core_token167] = ACTIONS(97),
    [aux_sym_core_token168] = ACTIONS(97),
    [aux_sym_core_token169] = ACTIONS(97),
    [aux_sym_core_token170] = ACTIONS(97),
    [aux_sym_core_token171] = ACTIONS(97),
    [aux_sym_core_token172] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [anon_sym_STAR_SLASH] = ACTIONS(97),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [sym_word] = ACTIONS(97),
    [anon_sym_SEMI] = ACTIONS(97),
  },
  [21] = {
    [aux_sym_comment_token1] = ACTIONS(83),
    [aux_sym_comment_token2] = ACTIONS(83),
    [aux_sym_number_token1] = ACTIONS(85),
    [aux_sym_core_token1] = ACTIONS(85),
    [aux_sym_core_token2] = ACTIONS(85),
    [aux_sym_core_token3] = ACTIONS(85),
    [aux_sym_core_token4] = ACTIONS(85),
    [aux_sym_core_token5] = ACTIONS(85),
    [aux_sym_core_token6] = ACTIONS(85),
    [aux_sym_core_token7] = ACTIONS(85),
    [aux_sym_core_token8] = ACTIONS(85),
    [aux_sym_core_token9] = ACTIONS(85),
    [aux_sym_core_token10] = ACTIONS(85),
    [aux_sym_core_token11] = ACTIONS(85),
    [aux_sym_core_token12] = ACTIONS(85),
    [aux_sym_core_token13] = ACTIONS(85),
    [aux_sym_core_token14] = ACTIONS(85),
    [aux_sym_core_token15] = ACTIONS(85),
    [aux_sym_core_token16] = ACTIONS(85),
    [aux_sym_core_token17] = ACTIONS(85),
    [aux_sym_core_token18] = ACTIONS(85),
    [aux_sym_core_token19] = ACTIONS(85),
    [aux_sym_core_token20] = ACTIONS(85),
    [aux_sym_core_token21] = ACTIONS(85),
    [aux_sym_core_token22] = ACTIONS(85),
    [aux_sym_core_token23] = ACTIONS(85),
    [aux_sym_core_token24] = ACTIONS(85),
    [aux_sym_core_token25] = ACTIONS(85),
    [aux_sym_core_token26] = ACTIONS(85),
    [aux_sym_core_token27] = ACTIONS(85),
    [aux_sym_core_token28] = ACTIONS(85),
    [aux_sym_core_token29] = ACTIONS(85),
    [aux_sym_core_token30] = ACTIONS(85),
    [aux_sym_core_token31] = ACTIONS(85),
    [aux_sym_core_token32] = ACTIONS(85),
    [aux_sym_core_token33] = ACTIONS(85),
    [aux_sym_core_token34] = ACTIONS(85),
    [aux_sym_core_token35] = ACTIONS(85),
    [aux_sym_core_token36] = ACTIONS(85),
    [aux_sym_core_token37] = ACTIONS(85),
    [aux_sym_core_token38] = ACTIONS(85),
    [aux_sym_core_token39] = ACTIONS(85),
    [aux_sym_core_token40] = ACTIONS(85),
    [aux_sym_core_token41] = ACTIONS(85),
    [aux_sym_core_token42] = ACTIONS(85),
    [aux_sym_core_token43] = ACTIONS(85),
    [aux_sym_core_token44] = ACTIONS(85),
    [aux_sym_core_token45] = ACTIONS(85),
    [aux_sym_core_token46] = ACTIONS(85),
    [aux_sym_core_token47] = ACTIONS(85),
    [aux_sym_core_token48] = ACTIONS(85),
    [aux_sym_core_token49] = ACTIONS(85),
    [aux_sym_core_token50] = ACTIONS(85),
    [aux_sym_core_token51] = ACTIONS(85),
    [aux_sym_core_token52] = ACTIONS(85),
    [aux_sym_core_token53] = ACTIONS(85),
    [aux_sym_core_token54] = ACTIONS(85),
    [aux_sym_core_token55] = ACTIONS(85),
    [aux_sym_core_token56] = ACTIONS(85),
    [aux_sym_core_token57] = ACTIONS(85),
    [aux_sym_core_token58] = ACTIONS(85),
    [aux_sym_core_token59] = ACTIONS(85),
    [aux_sym_core_token60] = ACTIONS(85),
    [aux_sym_core_token61] = ACTIONS(85),
    [aux_sym_core_token62] = ACTIONS(85),
    [aux_sym_core_token63] = ACTIONS(85),
    [aux_sym_core_token64] = ACTIONS(85),
    [aux_sym_core_token65] = ACTIONS(85),
    [aux_sym_core_token66] = ACTIONS(85),
    [aux_sym_core_token67] = ACTIONS(85),
    [aux_sym_core_token68] = ACTIONS(85),
    [aux_sym_core_token69] = ACTIONS(85),
    [aux_sym_core_token70] = ACTIONS(85),
    [aux_sym_core_token71] = ACTIONS(85),
    [aux_sym_core_token72] = ACTIONS(85),
    [aux_sym_core_token73] = ACTIONS(85),
    [aux_sym_core_token74] = ACTIONS(85),
    [aux_sym_core_token75] = ACTIONS(85),
    [aux_sym_core_token76] = ACTIONS(85),
    [aux_sym_core_token77] = ACTIONS(85),
    [aux_sym_core_token78] = ACTIONS(85),
    [aux_sym_core_token79] = ACTIONS(85),
    [aux_sym_core_token80] = ACTIONS(85),
    [aux_sym_core_token81] = ACTIONS(85),
    [aux_sym_core_token82] = ACTIONS(85),
    [aux_sym_core_token83] = ACTIONS(85),
    [aux_sym_core_token84] = ACTIONS(85),
    [aux_sym_core_token85] = ACTIONS(85),
    [aux_sym_core_token86] = ACTIONS(85),
    [aux_sym_core_token87] = ACTIONS(85),
    [aux_sym_core_token88] = ACTIONS(85),
    [aux_sym_core_token89] = ACTIONS(85),
    [aux_sym_core_token90] = ACTIONS(85),
    [aux_sym_core_token91] = ACTIONS(85),
    [aux_sym_core_token92] = ACTIONS(85),
    [aux_sym_core_token93] = ACTIONS(85),
    [aux_sym_core_token94] = ACTIONS(85),
    [aux_sym_core_token95] = ACTIONS(85),
    [aux_sym_core_token96] = ACTIONS(85),
    [aux_sym_core_token97] = ACTIONS(85),
    [aux_sym_core_token98] = ACTIONS(85),
    [aux_sym_core_token99] = ACTIONS(85),
    [aux_sym_core_token100] = ACTIONS(85),
    [aux_sym_core_token101] = ACTIONS(85),
    [aux_sym_core_token102] = ACTIONS(85),
    [aux_sym_core_token103] = ACTIONS(85),
    [aux_sym_core_token104] = ACTIONS(85),
    [aux_sym_core_token105] = ACTIONS(85),
    [aux_sym_core_token106] = ACTIONS(85),
    [aux_sym_core_token107] = ACTIONS(85),
    [aux_sym_core_token108] = ACTIONS(85),
    [aux_sym_core_token109] = ACTIONS(85),
    [aux_sym_core_token110] = ACTIONS(85),
    [aux_sym_core_token111] = ACTIONS(85),
    [aux_sym_core_token112] = ACTIONS(85),
    [aux_sym_core_token113] = ACTIONS(85),
    [aux_sym_core_token114] = ACTIONS(85),
    [aux_sym_core_token115] = ACTIONS(85),
    [aux_sym_core_token116] = ACTIONS(85),
    [aux_sym_core_token117] = ACTIONS(85),
    [aux_sym_core_token118] = ACTIONS(85),
    [aux_sym_core_token119] = ACTIONS(85),
    [aux_sym_core_token120] = ACTIONS(85),
    [aux_sym_core_token121] = ACTIONS(85),
    [aux_sym_core_token122] = ACTIONS(85),
    [aux_sym_core_token123] = ACTIONS(85),
    [aux_sym_core_token124] = ACTIONS(85),
    [aux_sym_core_token125] = ACTIONS(85),
    [aux_sym_core_token126] = ACTIONS(85),
    [aux_sym_core_token127] = ACTIONS(85),
    [aux_sym_core_token128] = ACTIONS(85),
    [aux_sym_core_token129] = ACTIONS(85),
    [aux_sym_core_token130] = ACTIONS(85),
    [aux_sym_core_token131] = ACTIONS(85),
    [aux_sym_core_token132] = ACTIONS(85),
    [aux_sym_core_token133] = ACTIONS(85),
    [aux_sym_core_token134] = ACTIONS(85),
    [aux_sym_core_token135] = ACTIONS(85),
    [aux_sym_core_token136] = ACTIONS(85),
    [aux_sym_core_token137] = ACTIONS(85),
    [aux_sym_core_token138] = ACTIONS(85),
    [aux_sym_core_token139] = ACTIONS(85),
    [aux_sym_core_token140] = ACTIONS(85),
    [aux_sym_core_token141] = ACTIONS(85),
    [aux_sym_core_token142] = ACTIONS(85),
    [aux_sym_core_token143] = ACTIONS(85),
    [aux_sym_core_token144] = ACTIONS(85),
    [aux_sym_core_token145] = ACTIONS(85),
    [aux_sym_core_token146] = ACTIONS(85),
    [aux_sym_core_token147] = ACTIONS(85),
    [aux_sym_core_token148] = ACTIONS(85),
    [aux_sym_core_token149] = ACTIONS(85),
    [aux_sym_core_token150] = ACTIONS(85),
    [aux_sym_core_token151] = ACTIONS(85),
    [aux_sym_core_token152] = ACTIONS(85),
    [aux_sym_core_token153] = ACTIONS(85),
    [aux_sym_core_token154] = ACTIONS(85),
    [aux_sym_core_token155] = ACTIONS(85),
    [aux_sym_core_token156] = ACTIONS(85),
    [aux_sym_core_token157] = ACTIONS(85),
    [aux_sym_core_token158] = ACTIONS(85),
    [aux_sym_core_token159] = ACTIONS(85),
    [aux_sym_core_token160] = ACTIONS(85),
    [aux_sym_core_token161] = ACTIONS(85),
    [aux_sym_core_token162] = ACTIONS(85),
    [aux_sym_core_token163] = ACTIONS(85),
    [aux_sym_core_token164] = ACTIONS(85),
    [aux_sym_core_token165] = ACTIONS(85),
    [aux_sym_core_token166] = ACTIONS(85),
    [aux_sym_core_token167] = ACTIONS(85),
    [aux_sym_core_token168] = ACTIONS(85),
    [aux_sym_core_token169] = ACTIONS(85),
    [aux_sym_core_token170] = ACTIONS(85),
    [aux_sym_core_token171] = ACTIONS(85),
    [aux_sym_core_token172] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_SLASH] = ACTIONS(85),
    [anon_sym_STAR] = ACTIONS(85),
    [anon_sym_STAR_SLASH] = ACTIONS(85),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [sym_word] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(85),
  },
  [22] = {
    [aux_sym_comment_token1] = ACTIONS(115),
    [aux_sym_comment_token2] = ACTIONS(115),
    [aux_sym_number_token1] = ACTIONS(117),
    [aux_sym_core_token1] = ACTIONS(117),
    [aux_sym_core_token2] = ACTIONS(117),
    [aux_sym_core_token3] = ACTIONS(117),
    [aux_sym_core_token4] = ACTIONS(117),
    [aux_sym_core_token5] = ACTIONS(117),
    [aux_sym_core_token6] = ACTIONS(117),
    [aux_sym_core_token7] = ACTIONS(117),
    [aux_sym_core_token8] = ACTIONS(117),
    [aux_sym_core_token9] = ACTIONS(117),
    [aux_sym_core_token10] = ACTIONS(117),
    [aux_sym_core_token11] = ACTIONS(117),
    [aux_sym_core_token12] = ACTIONS(117),
    [aux_sym_core_token13] = ACTIONS(117),
    [aux_sym_core_token14] = ACTIONS(117),
    [aux_sym_core_token15] = ACTIONS(117),
    [aux_sym_core_token16] = ACTIONS(117),
    [aux_sym_core_token17] = ACTIONS(117),
    [aux_sym_core_token18] = ACTIONS(117),
    [aux_sym_core_token19] = ACTIONS(117),
    [aux_sym_core_token20] = ACTIONS(117),
    [aux_sym_core_token21] = ACTIONS(117),
    [aux_sym_core_token22] = ACTIONS(117),
    [aux_sym_core_token23] = ACTIONS(117),
    [aux_sym_core_token24] = ACTIONS(117),
    [aux_sym_core_token25] = ACTIONS(117),
    [aux_sym_core_token26] = ACTIONS(117),
    [aux_sym_core_token27] = ACTIONS(117),
    [aux_sym_core_token28] = ACTIONS(117),
    [aux_sym_core_token29] = ACTIONS(117),
    [aux_sym_core_token30] = ACTIONS(117),
    [aux_sym_core_token31] = ACTIONS(117),
    [aux_sym_core_token32] = ACTIONS(117),
    [aux_sym_core_token33] = ACTIONS(117),
    [aux_sym_core_token34] = ACTIONS(117),
    [aux_sym_core_token35] = ACTIONS(117),
    [aux_sym_core_token36] = ACTIONS(117),
    [aux_sym_core_token37] = ACTIONS(117),
    [aux_sym_core_token38] = ACTIONS(117),
    [aux_sym_core_token39] = ACTIONS(117),
    [aux_sym_core_token40] = ACTIONS(117),
    [aux_sym_core_token41] = ACTIONS(117),
    [aux_sym_core_token42] = ACTIONS(117),
    [aux_sym_core_token43] = ACTIONS(117),
    [aux_sym_core_token44] = ACTIONS(117),
    [aux_sym_core_token45] = ACTIONS(117),
    [aux_sym_core_token46] = ACTIONS(117),
    [aux_sym_core_token47] = ACTIONS(117),
    [aux_sym_core_token48] = ACTIONS(117),
    [aux_sym_core_token49] = ACTIONS(117),
    [aux_sym_core_token50] = ACTIONS(117),
    [aux_sym_core_token51] = ACTIONS(117),
    [aux_sym_core_token52] = ACTIONS(117),
    [aux_sym_core_token53] = ACTIONS(117),
    [aux_sym_core_token54] = ACTIONS(117),
    [aux_sym_core_token55] = ACTIONS(117),
    [aux_sym_core_token56] = ACTIONS(117),
    [aux_sym_core_token57] = ACTIONS(117),
    [aux_sym_core_token58] = ACTIONS(117),
    [aux_sym_core_token59] = ACTIONS(117),
    [aux_sym_core_token60] = ACTIONS(117),
    [aux_sym_core_token61] = ACTIONS(117),
    [aux_sym_core_token62] = ACTIONS(117),
    [aux_sym_core_token63] = ACTIONS(117),
    [aux_sym_core_token64] = ACTIONS(117),
    [aux_sym_core_token65] = ACTIONS(117),
    [aux_sym_core_token66] = ACTIONS(117),
    [aux_sym_core_token67] = ACTIONS(117),
    [aux_sym_core_token68] = ACTIONS(117),
    [aux_sym_core_token69] = ACTIONS(117),
    [aux_sym_core_token70] = ACTIONS(117),
    [aux_sym_core_token71] = ACTIONS(117),
    [aux_sym_core_token72] = ACTIONS(117),
    [aux_sym_core_token73] = ACTIONS(117),
    [aux_sym_core_token74] = ACTIONS(117),
    [aux_sym_core_token75] = ACTIONS(117),
    [aux_sym_core_token76] = ACTIONS(117),
    [aux_sym_core_token77] = ACTIONS(117),
    [aux_sym_core_token78] = ACTIONS(117),
    [aux_sym_core_token79] = ACTIONS(117),
    [aux_sym_core_token80] = ACTIONS(117),
    [aux_sym_core_token81] = ACTIONS(117),
    [aux_sym_core_token82] = ACTIONS(117),
    [aux_sym_core_token83] = ACTIONS(117),
    [aux_sym_core_token84] = ACTIONS(117),
    [aux_sym_core_token85] = ACTIONS(117),
    [aux_sym_core_token86] = ACTIONS(117),
    [aux_sym_core_token87] = ACTIONS(117),
    [aux_sym_core_token88] = ACTIONS(117),
    [aux_sym_core_token89] = ACTIONS(117),
    [aux_sym_core_token90] = ACTIONS(117),
    [aux_sym_core_token91] = ACTIONS(117),
    [aux_sym_core_token92] = ACTIONS(117),
    [aux_sym_core_token93] = ACTIONS(117),
    [aux_sym_core_token94] = ACTIONS(117),
    [aux_sym_core_token95] = ACTIONS(117),
    [aux_sym_core_token96] = ACTIONS(117),
    [aux_sym_core_token97] = ACTIONS(117),
    [aux_sym_core_token98] = ACTIONS(117),
    [aux_sym_core_token99] = ACTIONS(117),
    [aux_sym_core_token100] = ACTIONS(117),
    [aux_sym_core_token101] = ACTIONS(117),
    [aux_sym_core_token102] = ACTIONS(117),
    [aux_sym_core_token103] = ACTIONS(117),
    [aux_sym_core_token104] = ACTIONS(117),
    [aux_sym_core_token105] = ACTIONS(117),
    [aux_sym_core_token106] = ACTIONS(117),
    [aux_sym_core_token107] = ACTIONS(117),
    [aux_sym_core_token108] = ACTIONS(117),
    [aux_sym_core_token109] = ACTIONS(117),
    [aux_sym_core_token110] = ACTIONS(117),
    [aux_sym_core_token111] = ACTIONS(117),
    [aux_sym_core_token112] = ACTIONS(117),
    [aux_sym_core_token113] = ACTIONS(117),
    [aux_sym_core_token114] = ACTIONS(117),
    [aux_sym_core_token115] = ACTIONS(117),
    [aux_sym_core_token116] = ACTIONS(117),
    [aux_sym_core_token117] = ACTIONS(117),
    [aux_sym_core_token118] = ACTIONS(117),
    [aux_sym_core_token119] = ACTIONS(117),
    [aux_sym_core_token120] = ACTIONS(117),
    [aux_sym_core_token121] = ACTIONS(117),
    [aux_sym_core_token122] = ACTIONS(117),
    [aux_sym_core_token123] = ACTIONS(117),
    [aux_sym_core_token124] = ACTIONS(117),
    [aux_sym_core_token125] = ACTIONS(117),
    [aux_sym_core_token126] = ACTIONS(117),
    [aux_sym_core_token127] = ACTIONS(117),
    [aux_sym_core_token128] = ACTIONS(117),
    [aux_sym_core_token129] = ACTIONS(117),
    [aux_sym_core_token130] = ACTIONS(117),
    [aux_sym_core_token131] = ACTIONS(117),
    [aux_sym_core_token132] = ACTIONS(117),
    [aux_sym_core_token133] = ACTIONS(117),
    [aux_sym_core_token134] = ACTIONS(117),
    [aux_sym_core_token135] = ACTIONS(117),
    [aux_sym_core_token136] = ACTIONS(117),
    [aux_sym_core_token137] = ACTIONS(117),
    [aux_sym_core_token138] = ACTIONS(117),
    [aux_sym_core_token139] = ACTIONS(117),
    [aux_sym_core_token140] = ACTIONS(117),
    [aux_sym_core_token141] = ACTIONS(117),
    [aux_sym_core_token142] = ACTIONS(117),
    [aux_sym_core_token143] = ACTIONS(117),
    [aux_sym_core_token144] = ACTIONS(117),
    [aux_sym_core_token145] = ACTIONS(117),
    [aux_sym_core_token146] = ACTIONS(117),
    [aux_sym_core_token147] = ACTIONS(117),
    [aux_sym_core_token148] = ACTIONS(117),
    [aux_sym_core_token149] = ACTIONS(117),
    [aux_sym_core_token150] = ACTIONS(117),
    [aux_sym_core_token151] = ACTIONS(117),
    [aux_sym_core_token152] = ACTIONS(117),
    [aux_sym_core_token153] = ACTIONS(117),
    [aux_sym_core_token154] = ACTIONS(117),
    [aux_sym_core_token155] = ACTIONS(117),
    [aux_sym_core_token156] = ACTIONS(117),
    [aux_sym_core_token157] = ACTIONS(117),
    [aux_sym_core_token158] = ACTIONS(117),
    [aux_sym_core_token159] = ACTIONS(117),
    [aux_sym_core_token160] = ACTIONS(117),
    [aux_sym_core_token161] = ACTIONS(117),
    [aux_sym_core_token162] = ACTIONS(117),
    [aux_sym_core_token163] = ACTIONS(117),
    [aux_sym_core_token164] = ACTIONS(117),
    [aux_sym_core_token165] = ACTIONS(117),
    [aux_sym_core_token166] = ACTIONS(117),
    [aux_sym_core_token167] = ACTIONS(117),
    [aux_sym_core_token168] = ACTIONS(117),
    [aux_sym_core_token169] = ACTIONS(117),
    [aux_sym_core_token170] = ACTIONS(117),
    [aux_sym_core_token171] = ACTIONS(117),
    [aux_sym_core_token172] = ACTIONS(117),
    [anon_sym_EQ] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(117),
    [anon_sym_DASH] = ACTIONS(117),
    [anon_sym_SLASH] = ACTIONS(117),
    [anon_sym_STAR] = ACTIONS(117),
    [anon_sym_STAR_SLASH] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_LT] = ACTIONS(117),
    [sym_word] = ACTIONS(117),
  },
  [23] = {
    [aux_sym_comment_token1] = ACTIONS(119),
    [aux_sym_comment_token2] = ACTIONS(119),
    [aux_sym_number_token1] = ACTIONS(121),
    [aux_sym_core_token1] = ACTIONS(121),
    [aux_sym_core_token2] = ACTIONS(121),
    [aux_sym_core_token3] = ACTIONS(121),
    [aux_sym_core_token4] = ACTIONS(121),
    [aux_sym_core_token5] = ACTIONS(121),
    [aux_sym_core_token6] = ACTIONS(121),
    [aux_sym_core_token7] = ACTIONS(121),
    [aux_sym_core_token8] = ACTIONS(121),
    [aux_sym_core_token9] = ACTIONS(121),
    [aux_sym_core_token10] = ACTIONS(121),
    [aux_sym_core_token11] = ACTIONS(121),
    [aux_sym_core_token12] = ACTIONS(121),
    [aux_sym_core_token13] = ACTIONS(121),
    [aux_sym_core_token14] = ACTIONS(121),
    [aux_sym_core_token15] = ACTIONS(121),
    [aux_sym_core_token16] = ACTIONS(121),
    [aux_sym_core_token17] = ACTIONS(121),
    [aux_sym_core_token18] = ACTIONS(121),
    [aux_sym_core_token19] = ACTIONS(121),
    [aux_sym_core_token20] = ACTIONS(121),
    [aux_sym_core_token21] = ACTIONS(121),
    [aux_sym_core_token22] = ACTIONS(121),
    [aux_sym_core_token23] = ACTIONS(121),
    [aux_sym_core_token24] = ACTIONS(121),
    [aux_sym_core_token25] = ACTIONS(121),
    [aux_sym_core_token26] = ACTIONS(121),
    [aux_sym_core_token27] = ACTIONS(121),
    [aux_sym_core_token28] = ACTIONS(121),
    [aux_sym_core_token29] = ACTIONS(121),
    [aux_sym_core_token30] = ACTIONS(121),
    [aux_sym_core_token31] = ACTIONS(121),
    [aux_sym_core_token32] = ACTIONS(121),
    [aux_sym_core_token33] = ACTIONS(121),
    [aux_sym_core_token34] = ACTIONS(121),
    [aux_sym_core_token35] = ACTIONS(121),
    [aux_sym_core_token36] = ACTIONS(121),
    [aux_sym_core_token37] = ACTIONS(121),
    [aux_sym_core_token38] = ACTIONS(121),
    [aux_sym_core_token39] = ACTIONS(121),
    [aux_sym_core_token40] = ACTIONS(121),
    [aux_sym_core_token41] = ACTIONS(121),
    [aux_sym_core_token42] = ACTIONS(121),
    [aux_sym_core_token43] = ACTIONS(121),
    [aux_sym_core_token44] = ACTIONS(121),
    [aux_sym_core_token45] = ACTIONS(121),
    [aux_sym_core_token46] = ACTIONS(121),
    [aux_sym_core_token47] = ACTIONS(121),
    [aux_sym_core_token48] = ACTIONS(121),
    [aux_sym_core_token49] = ACTIONS(121),
    [aux_sym_core_token50] = ACTIONS(121),
    [aux_sym_core_token51] = ACTIONS(121),
    [aux_sym_core_token52] = ACTIONS(121),
    [aux_sym_core_token53] = ACTIONS(121),
    [aux_sym_core_token54] = ACTIONS(121),
    [aux_sym_core_token55] = ACTIONS(121),
    [aux_sym_core_token56] = ACTIONS(121),
    [aux_sym_core_token57] = ACTIONS(121),
    [aux_sym_core_token58] = ACTIONS(121),
    [aux_sym_core_token59] = ACTIONS(121),
    [aux_sym_core_token60] = ACTIONS(121),
    [aux_sym_core_token61] = ACTIONS(121),
    [aux_sym_core_token62] = ACTIONS(121),
    [aux_sym_core_token63] = ACTIONS(121),
    [aux_sym_core_token64] = ACTIONS(121),
    [aux_sym_core_token65] = ACTIONS(121),
    [aux_sym_core_token66] = ACTIONS(121),
    [aux_sym_core_token67] = ACTIONS(121),
    [aux_sym_core_token68] = ACTIONS(121),
    [aux_sym_core_token69] = ACTIONS(121),
    [aux_sym_core_token70] = ACTIONS(121),
    [aux_sym_core_token71] = ACTIONS(121),
    [aux_sym_core_token72] = ACTIONS(121),
    [aux_sym_core_token73] = ACTIONS(121),
    [aux_sym_core_token74] = ACTIONS(121),
    [aux_sym_core_token75] = ACTIONS(121),
    [aux_sym_core_token76] = ACTIONS(121),
    [aux_sym_core_token77] = ACTIONS(121),
    [aux_sym_core_token78] = ACTIONS(121),
    [aux_sym_core_token79] = ACTIONS(121),
    [aux_sym_core_token80] = ACTIONS(121),
    [aux_sym_core_token81] = ACTIONS(121),
    [aux_sym_core_token82] = ACTIONS(121),
    [aux_sym_core_token83] = ACTIONS(121),
    [aux_sym_core_token84] = ACTIONS(121),
    [aux_sym_core_token85] = ACTIONS(121),
    [aux_sym_core_token86] = ACTIONS(121),
    [aux_sym_core_token87] = ACTIONS(121),
    [aux_sym_core_token88] = ACTIONS(121),
    [aux_sym_core_token89] = ACTIONS(121),
    [aux_sym_core_token90] = ACTIONS(121),
    [aux_sym_core_token91] = ACTIONS(121),
    [aux_sym_core_token92] = ACTIONS(121),
    [aux_sym_core_token93] = ACTIONS(121),
    [aux_sym_core_token94] = ACTIONS(121),
    [aux_sym_core_token95] = ACTIONS(121),
    [aux_sym_core_token96] = ACTIONS(121),
    [aux_sym_core_token97] = ACTIONS(121),
    [aux_sym_core_token98] = ACTIONS(121),
    [aux_sym_core_token99] = ACTIONS(121),
    [aux_sym_core_token100] = ACTIONS(121),
    [aux_sym_core_token101] = ACTIONS(121),
    [aux_sym_core_token102] = ACTIONS(121),
    [aux_sym_core_token103] = ACTIONS(121),
    [aux_sym_core_token104] = ACTIONS(121),
    [aux_sym_core_token105] = ACTIONS(121),
    [aux_sym_core_token106] = ACTIONS(121),
    [aux_sym_core_token107] = ACTIONS(121),
    [aux_sym_core_token108] = ACTIONS(121),
    [aux_sym_core_token109] = ACTIONS(121),
    [aux_sym_core_token110] = ACTIONS(121),
    [aux_sym_core_token111] = ACTIONS(121),
    [aux_sym_core_token112] = ACTIONS(121),
    [aux_sym_core_token113] = ACTIONS(121),
    [aux_sym_core_token114] = ACTIONS(121),
    [aux_sym_core_token115] = ACTIONS(121),
    [aux_sym_core_token116] = ACTIONS(121),
    [aux_sym_core_token117] = ACTIONS(121),
    [aux_sym_core_token118] = ACTIONS(121),
    [aux_sym_core_token119] = ACTIONS(121),
    [aux_sym_core_token120] = ACTIONS(121),
    [aux_sym_core_token121] = ACTIONS(121),
    [aux_sym_core_token122] = ACTIONS(121),
    [aux_sym_core_token123] = ACTIONS(121),
    [aux_sym_core_token124] = ACTIONS(121),
    [aux_sym_core_token125] = ACTIONS(121),
    [aux_sym_core_token126] = ACTIONS(121),
    [aux_sym_core_token127] = ACTIONS(121),
    [aux_sym_core_token128] = ACTIONS(121),
    [aux_sym_core_token129] = ACTIONS(121),
    [aux_sym_core_token130] = ACTIONS(121),
    [aux_sym_core_token131] = ACTIONS(121),
    [aux_sym_core_token132] = ACTIONS(121),
    [aux_sym_core_token133] = ACTIONS(121),
    [aux_sym_core_token134] = ACTIONS(121),
    [aux_sym_core_token135] = ACTIONS(121),
    [aux_sym_core_token136] = ACTIONS(121),
    [aux_sym_core_token137] = ACTIONS(121),
    [aux_sym_core_token138] = ACTIONS(121),
    [aux_sym_core_token139] = ACTIONS(121),
    [aux_sym_core_token140] = ACTIONS(121),
    [aux_sym_core_token141] = ACTIONS(121),
    [aux_sym_core_token142] = ACTIONS(121),
    [aux_sym_core_token143] = ACTIONS(121),
    [aux_sym_core_token144] = ACTIONS(121),
    [aux_sym_core_token145] = ACTIONS(121),
    [aux_sym_core_token146] = ACTIONS(121),
    [aux_sym_core_token147] = ACTIONS(121),
    [aux_sym_core_token148] = ACTIONS(121),
    [aux_sym_core_token149] = ACTIONS(121),
    [aux_sym_core_token150] = ACTIONS(121),
    [aux_sym_core_token151] = ACTIONS(121),
    [aux_sym_core_token152] = ACTIONS(121),
    [aux_sym_core_token153] = ACTIONS(121),
    [aux_sym_core_token154] = ACTIONS(121),
    [aux_sym_core_token155] = ACTIONS(121),
    [aux_sym_core_token156] = ACTIONS(121),
    [aux_sym_core_token157] = ACTIONS(121),
    [aux_sym_core_token158] = ACTIONS(121),
    [aux_sym_core_token159] = ACTIONS(121),
    [aux_sym_core_token160] = ACTIONS(121),
    [aux_sym_core_token161] = ACTIONS(121),
    [aux_sym_core_token162] = ACTIONS(121),
    [aux_sym_core_token163] = ACTIONS(121),
    [aux_sym_core_token164] = ACTIONS(121),
    [aux_sym_core_token165] = ACTIONS(121),
    [aux_sym_core_token166] = ACTIONS(121),
    [aux_sym_core_token167] = ACTIONS(121),
    [aux_sym_core_token168] = ACTIONS(121),
    [aux_sym_core_token169] = ACTIONS(121),
    [aux_sym_core_token170] = ACTIONS(121),
    [aux_sym_core_token171] = ACTIONS(121),
    [aux_sym_core_token172] = ACTIONS(121),
    [anon_sym_EQ] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_DASH] = ACTIONS(121),
    [anon_sym_SLASH] = ACTIONS(121),
    [anon_sym_STAR] = ACTIONS(121),
    [anon_sym_STAR_SLASH] = ACTIONS(121),
    [anon_sym_GT] = ACTIONS(121),
    [anon_sym_LT] = ACTIONS(121),
    [sym_word] = ACTIONS(121),
  },
  [24] = {
    [aux_sym_comment_token1] = ACTIONS(123),
    [aux_sym_comment_token2] = ACTIONS(123),
    [aux_sym_number_token1] = ACTIONS(125),
    [aux_sym_core_token1] = ACTIONS(125),
    [aux_sym_core_token2] = ACTIONS(125),
    [aux_sym_core_token3] = ACTIONS(125),
    [aux_sym_core_token4] = ACTIONS(125),
    [aux_sym_core_token5] = ACTIONS(125),
    [aux_sym_core_token6] = ACTIONS(125),
    [aux_sym_core_token7] = ACTIONS(125),
    [aux_sym_core_token8] = ACTIONS(125),
    [aux_sym_core_token9] = ACTIONS(125),
    [aux_sym_core_token10] = ACTIONS(125),
    [aux_sym_core_token11] = ACTIONS(125),
    [aux_sym_core_token12] = ACTIONS(125),
    [aux_sym_core_token13] = ACTIONS(125),
    [aux_sym_core_token14] = ACTIONS(125),
    [aux_sym_core_token15] = ACTIONS(125),
    [aux_sym_core_token16] = ACTIONS(125),
    [aux_sym_core_token17] = ACTIONS(125),
    [aux_sym_core_token18] = ACTIONS(125),
    [aux_sym_core_token19] = ACTIONS(125),
    [aux_sym_core_token20] = ACTIONS(125),
    [aux_sym_core_token21] = ACTIONS(125),
    [aux_sym_core_token22] = ACTIONS(125),
    [aux_sym_core_token23] = ACTIONS(125),
    [aux_sym_core_token24] = ACTIONS(125),
    [aux_sym_core_token25] = ACTIONS(125),
    [aux_sym_core_token26] = ACTIONS(125),
    [aux_sym_core_token27] = ACTIONS(125),
    [aux_sym_core_token28] = ACTIONS(125),
    [aux_sym_core_token29] = ACTIONS(125),
    [aux_sym_core_token30] = ACTIONS(125),
    [aux_sym_core_token31] = ACTIONS(125),
    [aux_sym_core_token32] = ACTIONS(125),
    [aux_sym_core_token33] = ACTIONS(125),
    [aux_sym_core_token34] = ACTIONS(125),
    [aux_sym_core_token35] = ACTIONS(125),
    [aux_sym_core_token36] = ACTIONS(125),
    [aux_sym_core_token37] = ACTIONS(125),
    [aux_sym_core_token38] = ACTIONS(125),
    [aux_sym_core_token39] = ACTIONS(125),
    [aux_sym_core_token40] = ACTIONS(125),
    [aux_sym_core_token41] = ACTIONS(125),
    [aux_sym_core_token42] = ACTIONS(125),
    [aux_sym_core_token43] = ACTIONS(125),
    [aux_sym_core_token44] = ACTIONS(125),
    [aux_sym_core_token45] = ACTIONS(125),
    [aux_sym_core_token46] = ACTIONS(125),
    [aux_sym_core_token47] = ACTIONS(125),
    [aux_sym_core_token48] = ACTIONS(125),
    [aux_sym_core_token49] = ACTIONS(125),
    [aux_sym_core_token50] = ACTIONS(125),
    [aux_sym_core_token51] = ACTIONS(125),
    [aux_sym_core_token52] = ACTIONS(125),
    [aux_sym_core_token53] = ACTIONS(125),
    [aux_sym_core_token54] = ACTIONS(125),
    [aux_sym_core_token55] = ACTIONS(125),
    [aux_sym_core_token56] = ACTIONS(125),
    [aux_sym_core_token57] = ACTIONS(125),
    [aux_sym_core_token58] = ACTIONS(125),
    [aux_sym_core_token59] = ACTIONS(125),
    [aux_sym_core_token60] = ACTIONS(125),
    [aux_sym_core_token61] = ACTIONS(125),
    [aux_sym_core_token62] = ACTIONS(125),
    [aux_sym_core_token63] = ACTIONS(125),
    [aux_sym_core_token64] = ACTIONS(125),
    [aux_sym_core_token65] = ACTIONS(125),
    [aux_sym_core_token66] = ACTIONS(125),
    [aux_sym_core_token67] = ACTIONS(125),
    [aux_sym_core_token68] = ACTIONS(125),
    [aux_sym_core_token69] = ACTIONS(125),
    [aux_sym_core_token70] = ACTIONS(125),
    [aux_sym_core_token71] = ACTIONS(125),
    [aux_sym_core_token72] = ACTIONS(125),
    [aux_sym_core_token73] = ACTIONS(125),
    [aux_sym_core_token74] = ACTIONS(125),
    [aux_sym_core_token75] = ACTIONS(125),
    [aux_sym_core_token76] = ACTIONS(125),
    [aux_sym_core_token77] = ACTIONS(125),
    [aux_sym_core_token78] = ACTIONS(125),
    [aux_sym_core_token79] = ACTIONS(125),
    [aux_sym_core_token80] = ACTIONS(125),
    [aux_sym_core_token81] = ACTIONS(125),
    [aux_sym_core_token82] = ACTIONS(125),
    [aux_sym_core_token83] = ACTIONS(125),
    [aux_sym_core_token84] = ACTIONS(125),
    [aux_sym_core_token85] = ACTIONS(125),
    [aux_sym_core_token86] = ACTIONS(125),
    [aux_sym_core_token87] = ACTIONS(125),
    [aux_sym_core_token88] = ACTIONS(125),
    [aux_sym_core_token89] = ACTIONS(125),
    [aux_sym_core_token90] = ACTIONS(125),
    [aux_sym_core_token91] = ACTIONS(125),
    [aux_sym_core_token92] = ACTIONS(125),
    [aux_sym_core_token93] = ACTIONS(125),
    [aux_sym_core_token94] = ACTIONS(125),
    [aux_sym_core_token95] = ACTIONS(125),
    [aux_sym_core_token96] = ACTIONS(125),
    [aux_sym_core_token97] = ACTIONS(125),
    [aux_sym_core_token98] = ACTIONS(125),
    [aux_sym_core_token99] = ACTIONS(125),
    [aux_sym_core_token100] = ACTIONS(125),
    [aux_sym_core_token101] = ACTIONS(125),
    [aux_sym_core_token102] = ACTIONS(125),
    [aux_sym_core_token103] = ACTIONS(125),
    [aux_sym_core_token104] = ACTIONS(125),
    [aux_sym_core_token105] = ACTIONS(125),
    [aux_sym_core_token106] = ACTIONS(125),
    [aux_sym_core_token107] = ACTIONS(125),
    [aux_sym_core_token108] = ACTIONS(125),
    [aux_sym_core_token109] = ACTIONS(125),
    [aux_sym_core_token110] = ACTIONS(125),
    [aux_sym_core_token111] = ACTIONS(125),
    [aux_sym_core_token112] = ACTIONS(125),
    [aux_sym_core_token113] = ACTIONS(125),
    [aux_sym_core_token114] = ACTIONS(125),
    [aux_sym_core_token115] = ACTIONS(125),
    [aux_sym_core_token116] = ACTIONS(125),
    [aux_sym_core_token117] = ACTIONS(125),
    [aux_sym_core_token118] = ACTIONS(125),
    [aux_sym_core_token119] = ACTIONS(125),
    [aux_sym_core_token120] = ACTIONS(125),
    [aux_sym_core_token121] = ACTIONS(125),
    [aux_sym_core_token122] = ACTIONS(125),
    [aux_sym_core_token123] = ACTIONS(125),
    [aux_sym_core_token124] = ACTIONS(125),
    [aux_sym_core_token125] = ACTIONS(125),
    [aux_sym_core_token126] = ACTIONS(125),
    [aux_sym_core_token127] = ACTIONS(125),
    [aux_sym_core_token128] = ACTIONS(125),
    [aux_sym_core_token129] = ACTIONS(125),
    [aux_sym_core_token130] = ACTIONS(125),
    [aux_sym_core_token131] = ACTIONS(125),
    [aux_sym_core_token132] = ACTIONS(125),
    [aux_sym_core_token133] = ACTIONS(125),
    [aux_sym_core_token134] = ACTIONS(125),
    [aux_sym_core_token135] = ACTIONS(125),
    [aux_sym_core_token136] = ACTIONS(125),
    [aux_sym_core_token137] = ACTIONS(125),
    [aux_sym_core_token138] = ACTIONS(125),
    [aux_sym_core_token139] = ACTIONS(125),
    [aux_sym_core_token140] = ACTIONS(125),
    [aux_sym_core_token141] = ACTIONS(125),
    [aux_sym_core_token142] = ACTIONS(125),
    [aux_sym_core_token143] = ACTIONS(125),
    [aux_sym_core_token144] = ACTIONS(125),
    [aux_sym_core_token145] = ACTIONS(125),
    [aux_sym_core_token146] = ACTIONS(125),
    [aux_sym_core_token147] = ACTIONS(125),
    [aux_sym_core_token148] = ACTIONS(125),
    [aux_sym_core_token149] = ACTIONS(125),
    [aux_sym_core_token150] = ACTIONS(125),
    [aux_sym_core_token151] = ACTIONS(125),
    [aux_sym_core_token152] = ACTIONS(125),
    [aux_sym_core_token153] = ACTIONS(125),
    [aux_sym_core_token154] = ACTIONS(125),
    [aux_sym_core_token155] = ACTIONS(125),
    [aux_sym_core_token156] = ACTIONS(125),
    [aux_sym_core_token157] = ACTIONS(125),
    [aux_sym_core_token158] = ACTIONS(125),
    [aux_sym_core_token159] = ACTIONS(125),
    [aux_sym_core_token160] = ACTIONS(125),
    [aux_sym_core_token161] = ACTIONS(125),
    [aux_sym_core_token162] = ACTIONS(125),
    [aux_sym_core_token163] = ACTIONS(125),
    [aux_sym_core_token164] = ACTIONS(125),
    [aux_sym_core_token165] = ACTIONS(125),
    [aux_sym_core_token166] = ACTIONS(125),
    [aux_sym_core_token167] = ACTIONS(125),
    [aux_sym_core_token168] = ACTIONS(125),
    [aux_sym_core_token169] = ACTIONS(125),
    [aux_sym_core_token170] = ACTIONS(125),
    [aux_sym_core_token171] = ACTIONS(125),
    [aux_sym_core_token172] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_STAR_SLASH] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(125),
    [sym_word] = ACTIONS(125),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(127), 1,
      sym_word,
    ACTIONS(129), 1,
      anon_sym_DASH_DASH,
    STATE(27), 1,
      aux_sym_stack_effects_repeat1,
    STATE(29), 1,
      sym_stack_effect_sep,
  [13] = 4,
    ACTIONS(129), 1,
      anon_sym_DASH_DASH,
    ACTIONS(131), 1,
      sym_word,
    STATE(25), 1,
      aux_sym_stack_effects_repeat1,
    STATE(31), 1,
      sym_stack_effect_sep,
  [26] = 3,
    ACTIONS(133), 1,
      sym_word,
    ACTIONS(136), 1,
      anon_sym_DASH_DASH,
    STATE(27), 1,
      aux_sym_stack_effects_repeat1,
  [36] = 3,
    ACTIONS(138), 1,
      sym_word,
    ACTIONS(140), 1,
      sym_rparen,
    STATE(32), 1,
      aux_sym_stack_effects_repeat1,
  [46] = 3,
    ACTIONS(140), 1,
      sym_rparen,
    ACTIONS(142), 1,
      sym_word,
    STATE(30), 1,
      aux_sym_stack_effects_repeat1,
  [56] = 3,
    ACTIONS(138), 1,
      sym_word,
    ACTIONS(144), 1,
      sym_rparen,
    STATE(32), 1,
      aux_sym_stack_effects_repeat1,
  [66] = 3,
    ACTIONS(146), 1,
      sym_word,
    ACTIONS(148), 1,
      sym_rparen,
    STATE(28), 1,
      aux_sym_stack_effects_repeat1,
  [76] = 3,
    ACTIONS(136), 1,
      sym_rparen,
    ACTIONS(150), 1,
      sym_word,
    STATE(32), 1,
      aux_sym_stack_effects_repeat1,
  [86] = 2,
    ACTIONS(153), 1,
      sym_word,
    ACTIONS(155), 1,
      sym_rparen,
  [93] = 1,
    ACTIONS(157), 1,
      sym_word,
  [97] = 1,
    ACTIONS(159), 1,
      sym_word,
  [101] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(25)] = 0,
  [SMALL_STATE(26)] = 13,
  [SMALL_STATE(27)] = 26,
  [SMALL_STATE(28)] = 36,
  [SMALL_STATE(29)] = 46,
  [SMALL_STATE(30)] = 56,
  [SMALL_STATE(31)] = 66,
  [SMALL_STATE(32)] = 76,
  [SMALL_STATE(33)] = 86,
  [SMALL_STATE(34)] = 93,
  [SMALL_STATE(35)] = 97,
  [SMALL_STATE(36)] = 101,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(20),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(17),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(18),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(19),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(7),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_definition, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_definition, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_definition, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_definition, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_definition, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_definition, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_effects, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_effects, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_effects, 5),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_effects, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_effects, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_effects, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stack_effects_repeat1, 2), SHIFT_REPEAT(27),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stack_effects_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stack_effects_repeat1, 2), SHIFT_REPEAT(32),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_effect_sep, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_effect_sep, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_definition, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_forth(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
