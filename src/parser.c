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
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 200
#define ALIAS_COUNT 0
#define TOKEN_COUNT 190
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  sym_string = 2,
  sym_number = 3,
  aux_sym_core_token1 = 4,
  aux_sym_core_token2 = 5,
  aux_sym_core_token3 = 6,
  aux_sym_core_token4 = 7,
  aux_sym_core_token5 = 8,
  aux_sym_core_token6 = 9,
  aux_sym_core_token7 = 10,
  aux_sym_core_token8 = 11,
  aux_sym_core_token9 = 12,
  aux_sym_core_token10 = 13,
  aux_sym_core_token11 = 14,
  aux_sym_core_token12 = 15,
  aux_sym_core_token13 = 16,
  aux_sym_core_token14 = 17,
  aux_sym_core_token15 = 18,
  aux_sym_core_token16 = 19,
  aux_sym_core_token17 = 20,
  aux_sym_core_token18 = 21,
  aux_sym_core_token19 = 22,
  aux_sym_core_token20 = 23,
  aux_sym_core_token21 = 24,
  aux_sym_core_token22 = 25,
  aux_sym_core_token23 = 26,
  aux_sym_core_token24 = 27,
  aux_sym_core_token25 = 28,
  aux_sym_core_token26 = 29,
  aux_sym_core_token27 = 30,
  aux_sym_core_token28 = 31,
  aux_sym_core_token29 = 32,
  aux_sym_core_token30 = 33,
  aux_sym_core_token31 = 34,
  aux_sym_core_token32 = 35,
  aux_sym_core_token33 = 36,
  aux_sym_core_token34 = 37,
  aux_sym_core_token35 = 38,
  aux_sym_core_token36 = 39,
  aux_sym_core_token37 = 40,
  aux_sym_core_token38 = 41,
  aux_sym_core_token39 = 42,
  aux_sym_core_token40 = 43,
  aux_sym_core_token41 = 44,
  aux_sym_core_token42 = 45,
  aux_sym_core_token43 = 46,
  aux_sym_core_token44 = 47,
  aux_sym_core_token45 = 48,
  aux_sym_core_token46 = 49,
  aux_sym_core_token47 = 50,
  aux_sym_core_token48 = 51,
  aux_sym_core_token49 = 52,
  aux_sym_core_token50 = 53,
  aux_sym_core_token51 = 54,
  aux_sym_core_token52 = 55,
  aux_sym_core_token53 = 56,
  aux_sym_core_token54 = 57,
  aux_sym_core_token55 = 58,
  aux_sym_core_token56 = 59,
  aux_sym_core_token57 = 60,
  aux_sym_core_token58 = 61,
  aux_sym_core_token59 = 62,
  aux_sym_core_token60 = 63,
  aux_sym_core_token61 = 64,
  aux_sym_core_token62 = 65,
  aux_sym_core_token63 = 66,
  aux_sym_core_token64 = 67,
  aux_sym_core_token65 = 68,
  aux_sym_core_token66 = 69,
  aux_sym_core_token67 = 70,
  aux_sym_core_token68 = 71,
  aux_sym_core_token69 = 72,
  aux_sym_core_token70 = 73,
  aux_sym_core_token71 = 74,
  aux_sym_core_token72 = 75,
  aux_sym_core_token73 = 76,
  aux_sym_core_token74 = 77,
  aux_sym_core_token75 = 78,
  aux_sym_core_token76 = 79,
  aux_sym_core_token77 = 80,
  aux_sym_core_token78 = 81,
  aux_sym_core_token79 = 82,
  aux_sym_core_token80 = 83,
  aux_sym_core_token81 = 84,
  aux_sym_core_token82 = 85,
  aux_sym_core_token83 = 86,
  aux_sym_core_token84 = 87,
  aux_sym_core_token85 = 88,
  aux_sym_core_token86 = 89,
  aux_sym_core_token87 = 90,
  aux_sym_core_token88 = 91,
  aux_sym_core_token89 = 92,
  aux_sym_core_token90 = 93,
  aux_sym_core_token91 = 94,
  aux_sym_core_token92 = 95,
  aux_sym_core_token93 = 96,
  aux_sym_core_token94 = 97,
  aux_sym_core_token95 = 98,
  aux_sym_core_token96 = 99,
  aux_sym_core_token97 = 100,
  aux_sym_core_token98 = 101,
  aux_sym_core_token99 = 102,
  aux_sym_core_token100 = 103,
  aux_sym_core_token101 = 104,
  aux_sym_core_token102 = 105,
  aux_sym_core_token103 = 106,
  aux_sym_core_token104 = 107,
  aux_sym_core_token105 = 108,
  aux_sym_core_token106 = 109,
  aux_sym_core_token107 = 110,
  aux_sym_core_token108 = 111,
  aux_sym_core_token109 = 112,
  aux_sym_core_token110 = 113,
  aux_sym_core_token111 = 114,
  aux_sym_core_token112 = 115,
  aux_sym_core_token113 = 116,
  aux_sym_core_token114 = 117,
  aux_sym_core_token115 = 118,
  aux_sym_core_token116 = 119,
  aux_sym_core_token117 = 120,
  aux_sym_core_token118 = 121,
  aux_sym_core_token119 = 122,
  aux_sym_core_token120 = 123,
  aux_sym_core_token121 = 124,
  aux_sym_core_token122 = 125,
  aux_sym_core_token123 = 126,
  aux_sym_core_token124 = 127,
  aux_sym_core_token125 = 128,
  aux_sym_core_token126 = 129,
  aux_sym_core_token127 = 130,
  aux_sym_core_token128 = 131,
  aux_sym_core_token129 = 132,
  aux_sym_core_token130 = 133,
  aux_sym_core_token131 = 134,
  aux_sym_core_token132 = 135,
  aux_sym_core_token133 = 136,
  aux_sym_core_token134 = 137,
  aux_sym_core_token135 = 138,
  aux_sym_core_token136 = 139,
  aux_sym_core_token137 = 140,
  aux_sym_core_token138 = 141,
  aux_sym_core_token139 = 142,
  aux_sym_core_token140 = 143,
  aux_sym_core_token141 = 144,
  aux_sym_core_token142 = 145,
  aux_sym_core_token143 = 146,
  aux_sym_core_token144 = 147,
  aux_sym_core_token145 = 148,
  aux_sym_core_token146 = 149,
  aux_sym_core_token147 = 150,
  aux_sym_core_token148 = 151,
  aux_sym_core_token149 = 152,
  aux_sym_core_token150 = 153,
  aux_sym_core_token151 = 154,
  aux_sym_core_token152 = 155,
  aux_sym_core_token153 = 156,
  aux_sym_core_token154 = 157,
  aux_sym_core_token155 = 158,
  aux_sym_core_token156 = 159,
  aux_sym_core_token157 = 160,
  aux_sym_core_token158 = 161,
  aux_sym_core_token159 = 162,
  aux_sym_core_token160 = 163,
  aux_sym_core_token161 = 164,
  aux_sym_core_token162 = 165,
  aux_sym_core_token163 = 166,
  aux_sym_core_token164 = 167,
  aux_sym_core_token165 = 168,
  aux_sym_core_token166 = 169,
  aux_sym_core_token167 = 170,
  aux_sym_core_token168 = 171,
  aux_sym_core_token169 = 172,
  aux_sym_core_token170 = 173,
  aux_sym_core_token171 = 174,
  aux_sym_core_token172 = 175,
  anon_sym_EQ = 176,
  anon_sym_PLUS = 177,
  anon_sym_DASH = 178,
  anon_sym_SLASH = 179,
  anon_sym_STAR = 180,
  anon_sym_STAR_SLASH = 181,
  anon_sym_GT = 182,
  anon_sym_LT = 183,
  sym_word = 184,
  sym_lparen = 185,
  sym_rparen = 186,
  sym_stack_effect_sep = 187,
  sym_start_definition = 188,
  sym_end_definition = 189,
  sym_source_file = 190,
  sym__definition = 191,
  sym_word_definition = 192,
  sym_builtin = 193,
  sym_core = 194,
  sym_operator = 195,
  sym_stack_effects = 196,
  aux_sym_source_file_repeat1 = 197,
  aux_sym_word_definition_repeat1 = 198,
  aux_sym_stack_effects_repeat1 = 199,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [sym_string] = "string",
  [sym_number] = "number",
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
  [sym_stack_effect_sep] = "stack_effect_sep",
  [sym_start_definition] = "start_definition",
  [sym_end_definition] = "end_definition",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_word_definition] = "word_definition",
  [sym_builtin] = "builtin",
  [sym_core] = "core",
  [sym_operator] = "operator",
  [sym_stack_effects] = "stack_effects",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_word_definition_repeat1] = "word_definition_repeat1",
  [aux_sym_stack_effects_repeat1] = "stack_effects_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
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
  [sym_stack_effect_sep] = sym_stack_effect_sep,
  [sym_start_definition] = sym_start_definition,
  [sym_end_definition] = sym_end_definition,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_word_definition] = sym_word_definition,
  [sym_builtin] = sym_builtin,
  [sym_core] = sym_core,
  [sym_operator] = sym_operator,
  [sym_stack_effects] = sym_stack_effects,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_word_definition_repeat1] = aux_sym_word_definition_repeat1,
  [aux_sym_stack_effects_repeat1] = aux_sym_stack_effects_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_word_definition] = {
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
  [15] = 10,
  [16] = 16,
  [17] = 13,
  [18] = 18,
  [19] = 19,
  [20] = 11,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 22,
  [29] = 29,
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(887);
      if (lookahead == ')') ADVANCE(888);
      if (lookahead == '*') ADVANCE(236);
      if (lookahead == '+') ADVANCE(233);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == ':') ADVANCE(890);
      if (lookahead == ';') ADVANCE(891);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '>') ADVANCE(238);
      if (lookahead == '?') ADVANCE(310);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'B') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(240);
      if (lookahead == 'D') ADVANCE(327);
      if (lookahead == 'E') ADVANCE(439);
      if (lookahead == 'F') ADVANCE(277);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'I') ADVANCE(126);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(131);
      if (lookahead == 'K') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(247);
      if (lookahead == 'N') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(378);
      if (lookahead == 'P') ADVANCE(274);
      if (lookahead == 'Q') ADVANCE(571);
      if (lookahead == 'R') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(242);
      if (lookahead == 'T') ADVANCE(391);
      if (lookahead == 'U') ADVANCE(261);
      if (lookahead == 'V') ADVANCE(275);
      if (lookahead == 'W') ADVANCE(390);
      if (lookahead == 'X') ADVANCE(469);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'b') ADVANCE(581);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead == 'f') ADVANCE(585);
      if (lookahead == 'h') ADVANCE(635);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(663);
      if (lookahead == 'o') ADVANCE(685);
      if (lookahead == 'p') ADVANCE(582);
      if (lookahead == 'q') ADVANCE(878);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead == 'u') ADVANCE(262);
      if (lookahead == 'v') ADVANCE(583);
      if (lookahead == 'w') ADVANCE(697);
      if (lookahead == 'x') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('$' <= lookahead && lookahead <= '^') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(887);
      if (lookahead == '*') ADVANCE(236);
      if (lookahead == '+') ADVANCE(233);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(891);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '>') ADVANCE(238);
      if (lookahead == '?') ADVANCE(310);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'B') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(240);
      if (lookahead == 'D') ADVANCE(327);
      if (lookahead == 'E') ADVANCE(439);
      if (lookahead == 'F') ADVANCE(277);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'I') ADVANCE(126);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(131);
      if (lookahead == 'K') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(247);
      if (lookahead == 'N') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(378);
      if (lookahead == 'P') ADVANCE(274);
      if (lookahead == 'Q') ADVANCE(571);
      if (lookahead == 'R') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(242);
      if (lookahead == 'T') ADVANCE(391);
      if (lookahead == 'U') ADVANCE(261);
      if (lookahead == 'V') ADVANCE(275);
      if (lookahead == 'W') ADVANCE(390);
      if (lookahead == 'X') ADVANCE(469);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'b') ADVANCE(581);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead == 'f') ADVANCE(585);
      if (lookahead == 'h') ADVANCE(635);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(663);
      if (lookahead == 'o') ADVANCE(685);
      if (lookahead == 'p') ADVANCE(582);
      if (lookahead == 'q') ADVANCE(878);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead == 'u') ADVANCE(262);
      if (lookahead == 'v') ADVANCE(583);
      if (lookahead == 'w') ADVANCE(697);
      if (lookahead == 'x') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('$' <= lookahead && lookahead <= '^') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '*') ADVANCE(236);
      if (lookahead == '+') ADVANCE(233);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(891);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '>') ADVANCE(238);
      if (lookahead == '?') ADVANCE(310);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'B') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(240);
      if (lookahead == 'D') ADVANCE(327);
      if (lookahead == 'E') ADVANCE(439);
      if (lookahead == 'F') ADVANCE(277);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'I') ADVANCE(126);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(131);
      if (lookahead == 'K') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(247);
      if (lookahead == 'N') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(378);
      if (lookahead == 'P') ADVANCE(274);
      if (lookahead == 'Q') ADVANCE(571);
      if (lookahead == 'R') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(242);
      if (lookahead == 'T') ADVANCE(391);
      if (lookahead == 'U') ADVANCE(261);
      if (lookahead == 'V') ADVANCE(275);
      if (lookahead == 'W') ADVANCE(390);
      if (lookahead == 'X') ADVANCE(469);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'b') ADVANCE(581);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead == 'f') ADVANCE(585);
      if (lookahead == 'h') ADVANCE(635);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(663);
      if (lookahead == 'o') ADVANCE(685);
      if (lookahead == 'p') ADVANCE(582);
      if (lookahead == 'q') ADVANCE(878);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead == 'u') ADVANCE(262);
      if (lookahead == 'v') ADVANCE(583);
      if (lookahead == 'w') ADVANCE(697);
      if (lookahead == 'x') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('$' <= lookahead && lookahead <= '^') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'B') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(155);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(189);
      END_STATE();
    case 12:
      if (lookahead == 'M') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'M') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == 'N') ADVANCE(6);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'O') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'Y') ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == ']') ADVANCE(179);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 40:
      if (eof) ADVANCE(41);
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(231);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '*') ADVANCE(236);
      if (lookahead == '+') ADVANCE(233);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(234);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == '/') ADVANCE(235);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '2') ADVANCE(45);
      if (lookahead == ':') ADVANCE(890);
      if (lookahead == '<') ADVANCE(239);
      if (lookahead == '=') ADVANCE(232);
      if (lookahead == '>') ADVANCE(238);
      if (lookahead == '?') ADVANCE(310);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'B') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(240);
      if (lookahead == 'D') ADVANCE(327);
      if (lookahead == 'E') ADVANCE(439);
      if (lookahead == 'F') ADVANCE(277);
      if (lookahead == 'H') ADVANCE(328);
      if (lookahead == 'I') ADVANCE(126);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(131);
      if (lookahead == 'K') ADVANCE(329);
      if (lookahead == 'L') ADVANCE(365);
      if (lookahead == 'M') ADVANCE(247);
      if (lookahead == 'N') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(378);
      if (lookahead == 'P') ADVANCE(274);
      if (lookahead == 'Q') ADVANCE(571);
      if (lookahead == 'R') ADVANCE(268);
      if (lookahead == 'S') ADVANCE(242);
      if (lookahead == 'T') ADVANCE(391);
      if (lookahead == 'U') ADVANCE(261);
      if (lookahead == 'V') ADVANCE(275);
      if (lookahead == 'W') ADVANCE(390);
      if (lookahead == 'X') ADVANCE(469);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(606);
      if (lookahead == 'b') ADVANCE(581);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(634);
      if (lookahead == 'e') ADVANCE(746);
      if (lookahead == 'f') ADVANCE(585);
      if (lookahead == 'h') ADVANCE(635);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(636);
      if (lookahead == 'l') ADVANCE(672);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead == 'n') ADVANCE(663);
      if (lookahead == 'o') ADVANCE(685);
      if (lookahead == 'p') ADVANCE(582);
      if (lookahead == 'q') ADVANCE(878);
      if (lookahead == 'r') ADVANCE(269);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == 't') ADVANCE(698);
      if (lookahead == 'u') ADVANCE(262);
      if (lookahead == 'v') ADVANCE(583);
      if (lookahead == 'w') ADVANCE(697);
      if (lookahead == 'x') ADVANCE(776);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('$' <= lookahead && lookahead <= ')') ||
          ('G' <= lookahead && lookahead <= '^') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == 'D') ADVANCE(522);
      if (lookahead == 'O') ADVANCE(576);
      if (lookahead == 'R') ADVANCE(270);
      if (lookahead == 'S') ADVANCE(577);
      if (lookahead == 'd') ADVANCE(829);
      if (lookahead == 'o') ADVANCE(883);
      if (lookahead == 'r') ADVANCE(270);
      if (lookahead == 's') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(64);
      if (lookahead == '-') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '*') ||
          lookahead == '.' ||
          lookahead == '/' ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '>') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_core_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_core_token2);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_core_token3);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_core_token4);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_core_token5);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_core_token6);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_core_token7);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_core_token8);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_core_token9);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_core_token10);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_core_token11);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead == '(') ADVANCE(245);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      if (('!' <= lookahead && lookahead <= '&') ||
          (')' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_core_token12);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_core_token13);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_core_token14);
      if (lookahead == '>') ADVANCE(184);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_core_token15);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_core_token16);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_core_token17);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_core_token18);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_core_token19);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_core_token20);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_core_token21);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_core_token22);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_core_token23);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_core_token24);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_core_token25);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_core_token26);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_core_token27);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_core_token28);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_core_token29);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_core_token30);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_core_token31);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_core_token32);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_core_token33);
      if (lookahead == '"') ADVANCE(82);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_core_token34);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_core_token35);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_core_token36);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_core_token37);
      if (lookahead == 'E') ADVANCE(323);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_core_token37);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_core_token38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_core_token39);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_core_token40);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_core_token41);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_core_token42);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_core_token43);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_core_token44);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_core_token45);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_core_token46);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_core_token47);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_core_token48);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_core_token49);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == 'S') ADVANCE(101);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '*') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_core_token49);
      if (lookahead == '+') ADVANCE(100);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '*') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_core_token50);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_core_token51);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_core_token52);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_core_token53);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_core_token54);
      if (lookahead == 'E') ADVANCE(292);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_core_token54);
      if (lookahead == 'e') ADVANCE(600);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_core_token55);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_core_token56);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_core_token57);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_core_token58);
      if (lookahead == 'E') ADVANCE(525);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_core_token58);
      if (lookahead == 'e') ADVANCE(832);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_core_token59);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_core_token60);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_core_token61);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_core_token62);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_core_token63);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_core_token64);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_core_token65);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_core_token66);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_core_token67);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_core_token68);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_core_token69);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_core_token70);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_core_token71);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_core_token72);
      if (lookahead == 'S') ADVANCE(206);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_core_token72);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_core_token73);
      if (lookahead == 'F') ADVANCE(128);
      if (lookahead == 'M') ADVANCE(444);
      if (lookahead == 'N') ADVANCE(305);
      if (lookahead == 'S') ADVANCE(207);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_core_token73);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(751);
      if (lookahead == 'n') ADVANCE(613);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_core_token74);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_core_token75);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_core_token76);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_core_token77);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_core_token78);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_core_token79);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_core_token80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_core_token81);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_core_token82);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_core_token83);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_core_token84);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_core_token85);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_core_token86);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_core_token87);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_core_token88);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_core_token89);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_core_token90);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_core_token91);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_core_token92);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_core_token93);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_core_token94);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_core_token95);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_core_token96);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_core_token97);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_core_token98);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_core_token99);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_core_token99);
      if (lookahead == '"') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_core_token100);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_core_token101);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_core_token102);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_core_token103);
      if (lookahead == '-') ADVANCE(408);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_core_token103);
      if (lookahead == '-') ADVANCE(715);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_core_token104);
      if (lookahead == 'S') ADVANCE(162);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_core_token104);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_core_token105);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_core_token106);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_core_token107);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_core_token108);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_core_token109);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_core_token110);
      if (lookahead == 'R') ADVANCE(225);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_core_token110);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_core_token111);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_core_token112);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_core_token113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_core_token114);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_core_token115);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_core_token116);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_core_token117);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_core_token118);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_core_token119);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_core_token120);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == 'C') ADVANCE(393);
      if (lookahead == 'c') ADVANCE(700);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_core_token121);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_core_token122);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_core_token123);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_core_token124);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_core_token125);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_core_token126);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_core_token127);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_core_token128);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_core_token129);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_core_token130);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_core_token131);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_core_token132);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_core_token133);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_core_token134);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_core_token135);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_core_token136);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_core_token137);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_core_token138);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_core_token139);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_core_token140);
      if (lookahead == '!') ADVANCE(199);
      if (lookahead == '@') ADVANCE(200);
      if (('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_core_token141);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_core_token142);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_core_token143);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_core_token144);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_core_token145);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_core_token146);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_core_token147);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_core_token148);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_core_token149);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_core_token150);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_core_token151);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_core_token152);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_core_token153);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_core_token154);
      if (lookahead == '-') ADVANCE(460);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_core_token154);
      if (lookahead == '-') ADVANCE(767);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_core_token155);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_core_token156);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_core_token157);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_core_token158);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_core_token159);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_core_token160);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_core_token161);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_core_token162);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_core_token163);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_core_token164);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_core_token165);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_core_token166);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_core_token167);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_core_token168);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_core_token169);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_core_token170);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_core_token171);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_core_token172);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == 'L') ADVANCE(485);
      if (lookahead == 'l') ADVANCE(792);
      if (('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == 'M') ADVANCE(468);
      if (lookahead == 'm') ADVANCE(775);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead == 'M') ADVANCE(472);
      if (lookahead == 'm') ADVANCE(779);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == 'B') ADVANCE(18);
      if (lookahead == 'I') ADVANCE(15);
      if (lookahead == 'N') ADVANCE(20);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(78);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '>') ADVANCE(190);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'A') ADVANCE(527);
      if (lookahead == 'E') ADVANCE(429);
      if (lookahead == 'H') ADVANCE(280);
      if (lookahead == 'O') ADVANCE(443);
      if (lookahead == 'R') ADVANCE(104);
      if (('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '"') ADVANCE(195);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead == 'e') ADVANCE(736);
      if (lookahead == 'h') ADVANCE(588);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead == 'r') ADVANCE(105);
      if (('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '>') ADVANCE(8);
      if (lookahead == 'A') ADVANCE(574);
      if (lookahead == 'I') ADVANCE(385);
      if (lookahead == 'M') ADVANCE(265);
      if (lookahead == 'O') ADVANCE(564);
      if (lookahead == 'P') ADVANCE(278);
      if (lookahead == 'T') ADVANCE(288);
      if (lookahead == 'W') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(246);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == 'a') ADVANCE(881);
      if (lookahead == 'i') ADVANCE(692);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(871);
      if (lookahead == 'p') ADVANCE(586);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(590);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(154);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(246);
      if (lookahead == 'a') ADVANCE(881);
      if (lookahead == 'i') ADVANCE(692);
      if (lookahead == 'm') ADVANCE(266);
      if (lookahead == 'o') ADVANCE(871);
      if (lookahead == 'p') ADVANCE(586);
      if (lookahead == 't') ADVANCE(596);
      if (lookahead == 'w') ADVANCE(590);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(181);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(219);
      if (('!' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == 'A') ADVANCE(505);
      if (lookahead == 'I') ADVANCE(451);
      if (lookahead == 'O') ADVANCE(313);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == 'a') ADVANCE(813);
      if (lookahead == 'i') ADVANCE(758);
      if (lookahead == 'o') ADVANCE(619);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '/') ADVANCE(449);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(170);
      if (lookahead == '/') ADVANCE(756);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == 'S') ADVANCE(97);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '*') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '*') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(889);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(471);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(778);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(409);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(716);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(415);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(722);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('.' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '<') ADVANCE(169);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == 'M') ADVANCE(249);
      if (lookahead == 'N') ADVANCE(441);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '<') ADVANCE(169);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(250);
      if (lookahead == 'n') ADVANCE(748);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(448);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(755);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(518);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(825);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(194);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == 'E') ADVANCE(308);
      if (lookahead == 'O') ADVANCE(432);
      if (lookahead == 'S') ADVANCE(394);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(147);
      if (lookahead == '@') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead == 'o') ADVANCE(739);
      if (lookahead == 's') ADVANCE(701);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '@') ADVANCE(188);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(526);
      if (lookahead == 'E') ADVANCE(387);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'U') ADVANCE(381);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(314);
      if (lookahead == 'I') ADVANCE(300);
      if (lookahead == 'O') ADVANCE(528);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(438);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(299);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(440);
      if (lookahead == 'I') ADVANCE(431);
      if (lookahead == 'M') ADVANCE(263);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(306);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(399);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(507);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(427);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(493);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(425);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(496);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(426);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(511);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(546);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(555);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(462);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(575);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(446);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(556);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(531);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(557);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(559);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(560);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(535);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(470);
      if (lookahead == 'C') ADVANCE(302);
      if (lookahead == 'G') ADVANCE(279);
      if (lookahead == 'L') ADVANCE(411);
      if (lookahead == 'N') ADVANCE(311);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(436);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(417);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(418);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(372);
      if (lookahead == 'T') ADVANCE(400);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(572);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(397);
      if (lookahead == 'F') ADVANCE(368);
      if (lookahead == 'P') ADVANCE(552);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(430);
      if (lookahead == 'V') ADVANCE(375);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(342);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(348);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(566);
      if (lookahead == 'F') ADVANCE(410);
      if (lookahead == 'P') ADVANCE(369);
      if (lookahead == 'S') ADVANCE(561);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(297);
      if (lookahead == 'O') ADVANCE(379);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(467);
      if (lookahead == 'd') ADVANCE(774);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(89);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(309);
      if (lookahead == 'V') ADVANCE(406);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == 'V') ADVANCE(334);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(211);
      if (lookahead == 'R') ADVANCE(533);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(121);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(124);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(176);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(55);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(122);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(171);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(227);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(221);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(416);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(352);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(304);
      if (lookahead == 'O') ADVANCE(109);
      if (lookahead == 'R') ADVANCE(473);
      if (lookahead == 'U') ADVANCE(487);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(515);
      if (lookahead == 'O') ADVANCE(428);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(578);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(90);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(141);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(257);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(223);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(203);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(212);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(160);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(228);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(175);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(106);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(158);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(253);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(201);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(49);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(214);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(388);
      if (lookahead == 'I') ADVANCE(488);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(303);
      if (lookahead == 'I') ADVANCE(538);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(580);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(453);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(442);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(508);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(290);
      if (lookahead == 'I') ADVANCE(563);
      if (lookahead == 'O') ADVANCE(475);
      if (lookahead == 'S') ADVANCE(392);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(325);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(509);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(510);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(287);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(322);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(521);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(499);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(512);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(513);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(517);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(463);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(210);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead == 'V') ADVANCE(364);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(202);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(192);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(384);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(545);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(547);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(373);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(452);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(455);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(402);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(294);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(108);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(403);
      if (lookahead == 'I') ADVANCE(562);
      if (lookahead == 'O') ADVANCE(514);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(362);
      if (lookahead == 'O') ADVANCE(222);
      if (lookahead == 'R') ADVANCE(567);
      if (lookahead == 'U') ADVANCE(301);
      if (lookahead == 'Y') ADVANCE(500);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(396);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(286);
      if (lookahead == 'O') ADVANCE(450);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(412);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(404);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(382);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(447);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(537);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(476);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(539);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(456);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(434);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(457);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(423);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(520);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(276);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(324);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(461);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(433);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(386);
      if (lookahead == 'L') ADVANCE(479);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(383);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(435);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(466);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(296);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'K') ADVANCE(215);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'K') ADVANCE(224);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'K') ADVANCE(374);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(251);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(120);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(218);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(173);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(216);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(107);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(134);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(573);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(317);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(420);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(565);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(421);
      if (lookahead == 'N') ADVANCE(316);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(422);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(424);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(345);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(349);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(356);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(361);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(570);
      if (lookahead == 'R') ADVANCE(407);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(529);
      if (lookahead == 'M') ADVANCE(398);
      if (lookahead == 'N') ADVANCE(312);
      if (lookahead == 'R') ADVANCE(293);
      if (lookahead == 'V') ADVANCE(281);
      if (lookahead == 'X') ADVANCE(360);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(532);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(486);
      if (lookahead == 'T') ADVANCE(405);
      if (lookahead == 'U') ADVANCE(534);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(157);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(503);
      if (lookahead == 'N') ADVANCE(530);
      if (lookahead == 'U') ADVANCE(459);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(366);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(376);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(358);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(283);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(474);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(477);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(504);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(139);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(193);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(91);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(229);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(255);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(542);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(291);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(498);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(548);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(550);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(355);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(445);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(501);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(191);
      if (lookahead == 'U') ADVANCE(490);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(315);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(506);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(516);
      if (lookahead == 'S') ADVANCE(83);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(380);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(319);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(491);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(320);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(492);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(458);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(321);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(494);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(541);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(465);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(495);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(464);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(497);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(524);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(478);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(483);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(209);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(71);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(79);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(112);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(135);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(164);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(57);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(70);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(73);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(172);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(568);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(543);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(337);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(569);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(482);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(413);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(414);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(419);
      if (lookahead == 'X') ADVANCE(138);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(177);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(144);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(198);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(579);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(267);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(208);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(318);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(333);
      if (lookahead == 'X') ADVANCE(205);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(540);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(544);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(363);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(307);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(480);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(285);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(481);
      if (lookahead == 'U') ADVANCE(489);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(536);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(377);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(271);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(330);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(331);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(554);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(332);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(553);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(338);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(339);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(341);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(370);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(350);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(353);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(146);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(81);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(88);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(103);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(130);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(150);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(152);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(220);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(272);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(217);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(389);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(289);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(502);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(343);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(346);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(347);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(351);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(354);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(357);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(484);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(395);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(371);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(519);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(326);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(523);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(336);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(549);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(551);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(344);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(401);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(558);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(295);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'V') ADVANCE(335);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'V') ADVANCE(340);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'V') ADVANCE(367);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'W') ADVANCE(284);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(132);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']') ADVANCE(230);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(833);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(688);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(620);
      if (lookahead == 'i') ADVANCE(608);
      if (lookahead == 'o') ADVANCE(835);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(745);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(607);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(747);
      if (lookahead == 'i') ADVANCE(738);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(614);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(706);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(815);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(734);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(800);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(818);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(803);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(733);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(853);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(862);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(769);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(882);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(753);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(863);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(838);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(864);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(866);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(867);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(842);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(777);
      if (lookahead == 'c') ADVANCE(610);
      if (lookahead == 'g') ADVANCE(587);
      if (lookahead == 'l') ADVANCE(718);
      if (lookahead == 'n') ADVANCE(618);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(744);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(724);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(725);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(679);
      if (lookahead == 't') ADVANCE(707);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(879);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(704);
      if (lookahead == 'f') ADVANCE(676);
      if (lookahead == 'p') ADVANCE(859);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(737);
      if (lookahead == 'v') ADVANCE(682);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(650);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(668);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(874);
      if (lookahead == 'f') ADVANCE(717);
      if (lookahead == 'p') ADVANCE(675);
      if (lookahead == 's') ADVANCE(868);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(686);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'v') ADVANCE(641);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == 'r') ADVANCE(840);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(617);
      if (lookahead == 'v') ADVANCE(714);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(122);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(227);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(87);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(723);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(656);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(612);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(780);
      if (lookahead == 'u') ADVANCE(794);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(822);
      if (lookahead == 'o') ADVANCE(735);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(885);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead == 'i') ADVANCE(795);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(611);
      if (lookahead == 'i') ADVANCE(845);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(749);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(814);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(598);
      if (lookahead == 'i') ADVANCE(870);
      if (lookahead == 'o') ADVANCE(782);
      if (lookahead == 's') ADVANCE(699);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(632);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(816);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(595);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(817);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(828);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(824);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(671);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(691);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(852);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(854);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(680);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(759);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(763);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(709);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(602);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(710);
      if (lookahead == 'i') ADVANCE(869);
      if (lookahead == 'o') ADVANCE(821);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(669);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == 'r') ADVANCE(873);
      if (lookahead == 'u') ADVANCE(609);
      if (lookahead == 'y') ADVANCE(807);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(703);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(591);
      if (lookahead == 'o') ADVANCE(757);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(719);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(711);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(689);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(844);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(761);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(783);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(846);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(762);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(741);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(764);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(730);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(584);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(827);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(631);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(768);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(740);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(693);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(690);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(742);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(773);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(604);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(215);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(681);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(107);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(880);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(625);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(729);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(872);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(727);
      if (lookahead == 'n') ADVANCE(623);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(728);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(731);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(649);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(653);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(667);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(660);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(877);
      if (lookahead == 'r') ADVANCE(713);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(836);
      if (lookahead == 'm') ADVANCE(705);
      if (lookahead == 'n') ADVANCE(621);
      if (lookahead == 'r') ADVANCE(601);
      if (lookahead == 'v') ADVANCE(589);
      if (lookahead == 'x') ADVANCE(664);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(793);
      if (lookahead == 't') ADVANCE(712);
      if (lookahead == 'u') ADVANCE(841);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(157);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(810);
      if (lookahead == 'n') ADVANCE(837);
      if (lookahead == 'u') ADVANCE(766);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(673);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(683);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(662);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(592);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(781);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(784);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(811);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(849);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(599);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(805);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(855);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(857);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(659);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(752);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(808);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == 'u') ADVANCE(797);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(622);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(812);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(823);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(687);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(626);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(798);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(627);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(799);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(765);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(628);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(801);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(848);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(772);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(802);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(771);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(804);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(831);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(785);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(790);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(112);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(164);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(70);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(73);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(172);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(875);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(850);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(643);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(876);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(789);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(720);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(721);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(726);
      if (lookahead == 'x') ADVANCE(138);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(144);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(99);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(72);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(208);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(624);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(640);
      if (lookahead == 'x') ADVANCE(205);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(847);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(851);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(670);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(615);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(787);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(594);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(788);
      if (lookahead == 'u') ADVANCE(796);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(843);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(684);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(271);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(637);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(638);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(861);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(639);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(860);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(644);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(645);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(666);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(677);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(654);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(657);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(146);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(696);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(597);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(809);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(647);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(651);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(652);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(655);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(658);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(661);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(791);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(702);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(678);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(826);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(633);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(642);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(830);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(856);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(858);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(648);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(708);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(865);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(603);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(665);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(646);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(674);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(593);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(132);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_lparen);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_rparen);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_stack_effect_sep);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= '^') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(886);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_start_definition);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_end_definition);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 40},
  [2] = {.lex_state = 40},
  [3] = {.lex_state = 40},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 40},
  [10] = {.lex_state = 40},
  [11] = {.lex_state = 40},
  [12] = {.lex_state = 40},
  [13] = {.lex_state = 40},
  [14] = {.lex_state = 40},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 39},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
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
    [sym_start_definition] = ACTIONS(1),
    [sym_end_definition] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__definition] = STATE(2),
    [sym_word_definition] = STATE(2),
    [sym_builtin] = STATE(2),
    [sym_core] = STATE(13),
    [sym_operator] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [aux_sym_core_token1] = ACTIONS(9),
    [aux_sym_core_token2] = ACTIONS(9),
    [aux_sym_core_token3] = ACTIONS(9),
    [aux_sym_core_token4] = ACTIONS(11),
    [aux_sym_core_token5] = ACTIONS(9),
    [aux_sym_core_token6] = ACTIONS(11),
    [aux_sym_core_token7] = ACTIONS(9),
    [aux_sym_core_token8] = ACTIONS(9),
    [aux_sym_core_token9] = ACTIONS(9),
    [aux_sym_core_token10] = ACTIONS(11),
    [aux_sym_core_token11] = ACTIONS(9),
    [aux_sym_core_token12] = ACTIONS(11),
    [aux_sym_core_token13] = ACTIONS(9),
    [aux_sym_core_token14] = ACTIONS(9),
    [aux_sym_core_token15] = ACTIONS(11),
    [aux_sym_core_token16] = ACTIONS(9),
    [aux_sym_core_token17] = ACTIONS(9),
    [aux_sym_core_token18] = ACTIONS(9),
    [aux_sym_core_token19] = ACTIONS(9),
    [aux_sym_core_token20] = ACTIONS(9),
    [aux_sym_core_token21] = ACTIONS(9),
    [aux_sym_core_token22] = ACTIONS(9),
    [aux_sym_core_token23] = ACTIONS(9),
    [aux_sym_core_token24] = ACTIONS(9),
    [aux_sym_core_token25] = ACTIONS(9),
    [aux_sym_core_token26] = ACTIONS(11),
    [aux_sym_core_token27] = ACTIONS(11),
    [aux_sym_core_token28] = ACTIONS(11),
    [aux_sym_core_token29] = ACTIONS(11),
    [aux_sym_core_token30] = ACTIONS(11),
    [aux_sym_core_token31] = ACTIONS(9),
    [aux_sym_core_token32] = ACTIONS(9),
    [aux_sym_core_token33] = ACTIONS(9),
    [aux_sym_core_token34] = ACTIONS(11),
    [aux_sym_core_token35] = ACTIONS(9),
    [aux_sym_core_token36] = ACTIONS(9),
    [aux_sym_core_token37] = ACTIONS(9),
    [aux_sym_core_token38] = ACTIONS(9),
    [aux_sym_core_token39] = ACTIONS(9),
    [aux_sym_core_token40] = ACTIONS(9),
    [aux_sym_core_token41] = ACTIONS(9),
    [aux_sym_core_token42] = ACTIONS(9),
    [aux_sym_core_token43] = ACTIONS(9),
    [aux_sym_core_token44] = ACTIONS(9),
    [aux_sym_core_token45] = ACTIONS(11),
    [aux_sym_core_token46] = ACTIONS(9),
    [aux_sym_core_token47] = ACTIONS(9),
    [aux_sym_core_token48] = ACTIONS(9),
    [aux_sym_core_token49] = ACTIONS(9),
    [aux_sym_core_token50] = ACTIONS(9),
    [aux_sym_core_token51] = ACTIONS(9),
    [aux_sym_core_token52] = ACTIONS(9),
    [aux_sym_core_token53] = ACTIONS(9),
    [aux_sym_core_token54] = ACTIONS(9),
    [aux_sym_core_token55] = ACTIONS(9),
    [aux_sym_core_token56] = ACTIONS(9),
    [aux_sym_core_token57] = ACTIONS(9),
    [aux_sym_core_token58] = ACTIONS(9),
    [aux_sym_core_token59] = ACTIONS(11),
    [aux_sym_core_token60] = ACTIONS(9),
    [aux_sym_core_token61] = ACTIONS(9),
    [aux_sym_core_token62] = ACTIONS(9),
    [aux_sym_core_token63] = ACTIONS(9),
    [aux_sym_core_token64] = ACTIONS(9),
    [aux_sym_core_token65] = ACTIONS(9),
    [aux_sym_core_token66] = ACTIONS(9),
    [aux_sym_core_token67] = ACTIONS(9),
    [aux_sym_core_token68] = ACTIONS(9),
    [aux_sym_core_token69] = ACTIONS(9),
    [aux_sym_core_token70] = ACTIONS(9),
    [aux_sym_core_token71] = ACTIONS(9),
    [aux_sym_core_token72] = ACTIONS(9),
    [aux_sym_core_token73] = ACTIONS(9),
    [aux_sym_core_token74] = ACTIONS(9),
    [aux_sym_core_token75] = ACTIONS(9),
    [aux_sym_core_token76] = ACTIONS(9),
    [aux_sym_core_token77] = ACTIONS(9),
    [aux_sym_core_token78] = ACTIONS(9),
    [aux_sym_core_token79] = ACTIONS(9),
    [aux_sym_core_token80] = ACTIONS(9),
    [aux_sym_core_token81] = ACTIONS(9),
    [aux_sym_core_token82] = ACTIONS(9),
    [aux_sym_core_token83] = ACTIONS(9),
    [aux_sym_core_token84] = ACTIONS(9),
    [aux_sym_core_token85] = ACTIONS(9),
    [aux_sym_core_token86] = ACTIONS(9),
    [aux_sym_core_token87] = ACTIONS(9),
    [aux_sym_core_token88] = ACTIONS(9),
    [aux_sym_core_token89] = ACTIONS(9),
    [aux_sym_core_token90] = ACTIONS(9),
    [aux_sym_core_token91] = ACTIONS(9),
    [aux_sym_core_token92] = ACTIONS(9),
    [aux_sym_core_token93] = ACTIONS(11),
    [aux_sym_core_token94] = ACTIONS(9),
    [aux_sym_core_token95] = ACTIONS(9),
    [aux_sym_core_token96] = ACTIONS(9),
    [aux_sym_core_token97] = ACTIONS(9),
    [aux_sym_core_token98] = ACTIONS(9),
    [aux_sym_core_token99] = ACTIONS(9),
    [aux_sym_core_token100] = ACTIONS(11),
    [aux_sym_core_token101] = ACTIONS(9),
    [aux_sym_core_token102] = ACTIONS(9),
    [aux_sym_core_token103] = ACTIONS(9),
    [aux_sym_core_token104] = ACTIONS(9),
    [aux_sym_core_token105] = ACTIONS(9),
    [aux_sym_core_token106] = ACTIONS(9),
    [aux_sym_core_token107] = ACTIONS(9),
    [aux_sym_core_token108] = ACTIONS(9),
    [aux_sym_core_token109] = ACTIONS(9),
    [aux_sym_core_token110] = ACTIONS(9),
    [aux_sym_core_token111] = ACTIONS(11),
    [aux_sym_core_token112] = ACTIONS(9),
    [aux_sym_core_token113] = ACTIONS(9),
    [aux_sym_core_token114] = ACTIONS(9),
    [aux_sym_core_token115] = ACTIONS(9),
    [aux_sym_core_token116] = ACTIONS(9),
    [aux_sym_core_token117] = ACTIONS(9),
    [aux_sym_core_token118] = ACTIONS(9),
    [aux_sym_core_token119] = ACTIONS(9),
    [aux_sym_core_token120] = ACTIONS(9),
    [aux_sym_core_token121] = ACTIONS(11),
    [aux_sym_core_token122] = ACTIONS(9),
    [aux_sym_core_token123] = ACTIONS(11),
    [aux_sym_core_token124] = ACTIONS(9),
    [aux_sym_core_token125] = ACTIONS(9),
    [aux_sym_core_token126] = ACTIONS(11),
    [aux_sym_core_token127] = ACTIONS(11),
    [aux_sym_core_token128] = ACTIONS(11),
    [aux_sym_core_token129] = ACTIONS(11),
    [aux_sym_core_token130] = ACTIONS(9),
    [aux_sym_core_token131] = ACTIONS(11),
    [aux_sym_core_token132] = ACTIONS(11),
    [aux_sym_core_token133] = ACTIONS(9),
    [aux_sym_core_token134] = ACTIONS(9),
    [aux_sym_core_token135] = ACTIONS(9),
    [aux_sym_core_token136] = ACTIONS(11),
    [aux_sym_core_token137] = ACTIONS(11),
    [aux_sym_core_token138] = ACTIONS(9),
    [aux_sym_core_token139] = ACTIONS(11),
    [aux_sym_core_token140] = ACTIONS(9),
    [aux_sym_core_token141] = ACTIONS(9),
    [aux_sym_core_token142] = ACTIONS(9),
    [aux_sym_core_token143] = ACTIONS(9),
    [aux_sym_core_token144] = ACTIONS(9),
    [aux_sym_core_token145] = ACTIONS(9),
    [aux_sym_core_token146] = ACTIONS(9),
    [aux_sym_core_token147] = ACTIONS(9),
    [aux_sym_core_token148] = ACTIONS(9),
    [aux_sym_core_token149] = ACTIONS(9),
    [aux_sym_core_token150] = ACTIONS(9),
    [aux_sym_core_token151] = ACTIONS(9),
    [aux_sym_core_token152] = ACTIONS(9),
    [aux_sym_core_token153] = ACTIONS(9),
    [aux_sym_core_token154] = ACTIONS(9),
    [aux_sym_core_token155] = ACTIONS(9),
    [aux_sym_core_token156] = ACTIONS(9),
    [aux_sym_core_token157] = ACTIONS(9),
    [aux_sym_core_token158] = ACTIONS(9),
    [aux_sym_core_token159] = ACTIONS(9),
    [aux_sym_core_token160] = ACTIONS(11),
    [aux_sym_core_token161] = ACTIONS(9),
    [aux_sym_core_token162] = ACTIONS(9),
    [aux_sym_core_token163] = ACTIONS(9),
    [aux_sym_core_token164] = ACTIONS(9),
    [aux_sym_core_token165] = ACTIONS(9),
    [aux_sym_core_token166] = ACTIONS(9),
    [aux_sym_core_token167] = ACTIONS(11),
    [aux_sym_core_token168] = ACTIONS(9),
    [aux_sym_core_token169] = ACTIONS(9),
    [aux_sym_core_token170] = ACTIONS(9),
    [aux_sym_core_token171] = ACTIONS(9),
    [aux_sym_core_token172] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_STAR_SLASH] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [sym_word] = ACTIONS(7),
    [sym_start_definition] = ACTIONS(17),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_word_definition] = STATE(3),
    [sym_builtin] = STATE(3),
    [sym_core] = STATE(13),
    [sym_operator] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
    [sym_string] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [aux_sym_core_token1] = ACTIONS(9),
    [aux_sym_core_token2] = ACTIONS(9),
    [aux_sym_core_token3] = ACTIONS(9),
    [aux_sym_core_token4] = ACTIONS(11),
    [aux_sym_core_token5] = ACTIONS(9),
    [aux_sym_core_token6] = ACTIONS(11),
    [aux_sym_core_token7] = ACTIONS(9),
    [aux_sym_core_token8] = ACTIONS(9),
    [aux_sym_core_token9] = ACTIONS(9),
    [aux_sym_core_token10] = ACTIONS(11),
    [aux_sym_core_token11] = ACTIONS(9),
    [aux_sym_core_token12] = ACTIONS(11),
    [aux_sym_core_token13] = ACTIONS(9),
    [aux_sym_core_token14] = ACTIONS(9),
    [aux_sym_core_token15] = ACTIONS(11),
    [aux_sym_core_token16] = ACTIONS(9),
    [aux_sym_core_token17] = ACTIONS(9),
    [aux_sym_core_token18] = ACTIONS(9),
    [aux_sym_core_token19] = ACTIONS(9),
    [aux_sym_core_token20] = ACTIONS(9),
    [aux_sym_core_token21] = ACTIONS(9),
    [aux_sym_core_token22] = ACTIONS(9),
    [aux_sym_core_token23] = ACTIONS(9),
    [aux_sym_core_token24] = ACTIONS(9),
    [aux_sym_core_token25] = ACTIONS(9),
    [aux_sym_core_token26] = ACTIONS(11),
    [aux_sym_core_token27] = ACTIONS(11),
    [aux_sym_core_token28] = ACTIONS(11),
    [aux_sym_core_token29] = ACTIONS(11),
    [aux_sym_core_token30] = ACTIONS(11),
    [aux_sym_core_token31] = ACTIONS(9),
    [aux_sym_core_token32] = ACTIONS(9),
    [aux_sym_core_token33] = ACTIONS(9),
    [aux_sym_core_token34] = ACTIONS(11),
    [aux_sym_core_token35] = ACTIONS(9),
    [aux_sym_core_token36] = ACTIONS(9),
    [aux_sym_core_token37] = ACTIONS(9),
    [aux_sym_core_token38] = ACTIONS(9),
    [aux_sym_core_token39] = ACTIONS(9),
    [aux_sym_core_token40] = ACTIONS(9),
    [aux_sym_core_token41] = ACTIONS(9),
    [aux_sym_core_token42] = ACTIONS(9),
    [aux_sym_core_token43] = ACTIONS(9),
    [aux_sym_core_token44] = ACTIONS(9),
    [aux_sym_core_token45] = ACTIONS(11),
    [aux_sym_core_token46] = ACTIONS(9),
    [aux_sym_core_token47] = ACTIONS(9),
    [aux_sym_core_token48] = ACTIONS(9),
    [aux_sym_core_token49] = ACTIONS(9),
    [aux_sym_core_token50] = ACTIONS(9),
    [aux_sym_core_token51] = ACTIONS(9),
    [aux_sym_core_token52] = ACTIONS(9),
    [aux_sym_core_token53] = ACTIONS(9),
    [aux_sym_core_token54] = ACTIONS(9),
    [aux_sym_core_token55] = ACTIONS(9),
    [aux_sym_core_token56] = ACTIONS(9),
    [aux_sym_core_token57] = ACTIONS(9),
    [aux_sym_core_token58] = ACTIONS(9),
    [aux_sym_core_token59] = ACTIONS(11),
    [aux_sym_core_token60] = ACTIONS(9),
    [aux_sym_core_token61] = ACTIONS(9),
    [aux_sym_core_token62] = ACTIONS(9),
    [aux_sym_core_token63] = ACTIONS(9),
    [aux_sym_core_token64] = ACTIONS(9),
    [aux_sym_core_token65] = ACTIONS(9),
    [aux_sym_core_token66] = ACTIONS(9),
    [aux_sym_core_token67] = ACTIONS(9),
    [aux_sym_core_token68] = ACTIONS(9),
    [aux_sym_core_token69] = ACTIONS(9),
    [aux_sym_core_token70] = ACTIONS(9),
    [aux_sym_core_token71] = ACTIONS(9),
    [aux_sym_core_token72] = ACTIONS(9),
    [aux_sym_core_token73] = ACTIONS(9),
    [aux_sym_core_token74] = ACTIONS(9),
    [aux_sym_core_token75] = ACTIONS(9),
    [aux_sym_core_token76] = ACTIONS(9),
    [aux_sym_core_token77] = ACTIONS(9),
    [aux_sym_core_token78] = ACTIONS(9),
    [aux_sym_core_token79] = ACTIONS(9),
    [aux_sym_core_token80] = ACTIONS(9),
    [aux_sym_core_token81] = ACTIONS(9),
    [aux_sym_core_token82] = ACTIONS(9),
    [aux_sym_core_token83] = ACTIONS(9),
    [aux_sym_core_token84] = ACTIONS(9),
    [aux_sym_core_token85] = ACTIONS(9),
    [aux_sym_core_token86] = ACTIONS(9),
    [aux_sym_core_token87] = ACTIONS(9),
    [aux_sym_core_token88] = ACTIONS(9),
    [aux_sym_core_token89] = ACTIONS(9),
    [aux_sym_core_token90] = ACTIONS(9),
    [aux_sym_core_token91] = ACTIONS(9),
    [aux_sym_core_token92] = ACTIONS(9),
    [aux_sym_core_token93] = ACTIONS(11),
    [aux_sym_core_token94] = ACTIONS(9),
    [aux_sym_core_token95] = ACTIONS(9),
    [aux_sym_core_token96] = ACTIONS(9),
    [aux_sym_core_token97] = ACTIONS(9),
    [aux_sym_core_token98] = ACTIONS(9),
    [aux_sym_core_token99] = ACTIONS(9),
    [aux_sym_core_token100] = ACTIONS(11),
    [aux_sym_core_token101] = ACTIONS(9),
    [aux_sym_core_token102] = ACTIONS(9),
    [aux_sym_core_token103] = ACTIONS(9),
    [aux_sym_core_token104] = ACTIONS(9),
    [aux_sym_core_token105] = ACTIONS(9),
    [aux_sym_core_token106] = ACTIONS(9),
    [aux_sym_core_token107] = ACTIONS(9),
    [aux_sym_core_token108] = ACTIONS(9),
    [aux_sym_core_token109] = ACTIONS(9),
    [aux_sym_core_token110] = ACTIONS(9),
    [aux_sym_core_token111] = ACTIONS(11),
    [aux_sym_core_token112] = ACTIONS(9),
    [aux_sym_core_token113] = ACTIONS(9),
    [aux_sym_core_token114] = ACTIONS(9),
    [aux_sym_core_token115] = ACTIONS(9),
    [aux_sym_core_token116] = ACTIONS(9),
    [aux_sym_core_token117] = ACTIONS(9),
    [aux_sym_core_token118] = ACTIONS(9),
    [aux_sym_core_token119] = ACTIONS(9),
    [aux_sym_core_token120] = ACTIONS(9),
    [aux_sym_core_token121] = ACTIONS(11),
    [aux_sym_core_token122] = ACTIONS(9),
    [aux_sym_core_token123] = ACTIONS(11),
    [aux_sym_core_token124] = ACTIONS(9),
    [aux_sym_core_token125] = ACTIONS(9),
    [aux_sym_core_token126] = ACTIONS(11),
    [aux_sym_core_token127] = ACTIONS(11),
    [aux_sym_core_token128] = ACTIONS(11),
    [aux_sym_core_token129] = ACTIONS(11),
    [aux_sym_core_token130] = ACTIONS(9),
    [aux_sym_core_token131] = ACTIONS(11),
    [aux_sym_core_token132] = ACTIONS(11),
    [aux_sym_core_token133] = ACTIONS(9),
    [aux_sym_core_token134] = ACTIONS(9),
    [aux_sym_core_token135] = ACTIONS(9),
    [aux_sym_core_token136] = ACTIONS(11),
    [aux_sym_core_token137] = ACTIONS(11),
    [aux_sym_core_token138] = ACTIONS(9),
    [aux_sym_core_token139] = ACTIONS(11),
    [aux_sym_core_token140] = ACTIONS(9),
    [aux_sym_core_token141] = ACTIONS(9),
    [aux_sym_core_token142] = ACTIONS(9),
    [aux_sym_core_token143] = ACTIONS(9),
    [aux_sym_core_token144] = ACTIONS(9),
    [aux_sym_core_token145] = ACTIONS(9),
    [aux_sym_core_token146] = ACTIONS(9),
    [aux_sym_core_token147] = ACTIONS(9),
    [aux_sym_core_token148] = ACTIONS(9),
    [aux_sym_core_token149] = ACTIONS(9),
    [aux_sym_core_token150] = ACTIONS(9),
    [aux_sym_core_token151] = ACTIONS(9),
    [aux_sym_core_token152] = ACTIONS(9),
    [aux_sym_core_token153] = ACTIONS(9),
    [aux_sym_core_token154] = ACTIONS(9),
    [aux_sym_core_token155] = ACTIONS(9),
    [aux_sym_core_token156] = ACTIONS(9),
    [aux_sym_core_token157] = ACTIONS(9),
    [aux_sym_core_token158] = ACTIONS(9),
    [aux_sym_core_token159] = ACTIONS(9),
    [aux_sym_core_token160] = ACTIONS(11),
    [aux_sym_core_token161] = ACTIONS(9),
    [aux_sym_core_token162] = ACTIONS(9),
    [aux_sym_core_token163] = ACTIONS(9),
    [aux_sym_core_token164] = ACTIONS(9),
    [aux_sym_core_token165] = ACTIONS(9),
    [aux_sym_core_token166] = ACTIONS(9),
    [aux_sym_core_token167] = ACTIONS(11),
    [aux_sym_core_token168] = ACTIONS(9),
    [aux_sym_core_token169] = ACTIONS(9),
    [aux_sym_core_token170] = ACTIONS(9),
    [aux_sym_core_token171] = ACTIONS(9),
    [aux_sym_core_token172] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_STAR_SLASH] = ACTIONS(15),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [sym_word] = ACTIONS(23),
    [sym_start_definition] = ACTIONS(17),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_word_definition] = STATE(3),
    [sym_builtin] = STATE(3),
    [sym_core] = STATE(13),
    [sym_operator] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
    [sym_string] = ACTIONS(27),
    [sym_number] = ACTIONS(30),
    [aux_sym_core_token1] = ACTIONS(33),
    [aux_sym_core_token2] = ACTIONS(33),
    [aux_sym_core_token3] = ACTIONS(33),
    [aux_sym_core_token4] = ACTIONS(36),
    [aux_sym_core_token5] = ACTIONS(33),
    [aux_sym_core_token6] = ACTIONS(36),
    [aux_sym_core_token7] = ACTIONS(33),
    [aux_sym_core_token8] = ACTIONS(33),
    [aux_sym_core_token9] = ACTIONS(33),
    [aux_sym_core_token10] = ACTIONS(36),
    [aux_sym_core_token11] = ACTIONS(33),
    [aux_sym_core_token12] = ACTIONS(36),
    [aux_sym_core_token13] = ACTIONS(33),
    [aux_sym_core_token14] = ACTIONS(33),
    [aux_sym_core_token15] = ACTIONS(36),
    [aux_sym_core_token16] = ACTIONS(33),
    [aux_sym_core_token17] = ACTIONS(33),
    [aux_sym_core_token18] = ACTIONS(33),
    [aux_sym_core_token19] = ACTIONS(33),
    [aux_sym_core_token20] = ACTIONS(33),
    [aux_sym_core_token21] = ACTIONS(33),
    [aux_sym_core_token22] = ACTIONS(33),
    [aux_sym_core_token23] = ACTIONS(33),
    [aux_sym_core_token24] = ACTIONS(33),
    [aux_sym_core_token25] = ACTIONS(33),
    [aux_sym_core_token26] = ACTIONS(36),
    [aux_sym_core_token27] = ACTIONS(36),
    [aux_sym_core_token28] = ACTIONS(36),
    [aux_sym_core_token29] = ACTIONS(36),
    [aux_sym_core_token30] = ACTIONS(36),
    [aux_sym_core_token31] = ACTIONS(33),
    [aux_sym_core_token32] = ACTIONS(33),
    [aux_sym_core_token33] = ACTIONS(33),
    [aux_sym_core_token34] = ACTIONS(36),
    [aux_sym_core_token35] = ACTIONS(33),
    [aux_sym_core_token36] = ACTIONS(33),
    [aux_sym_core_token37] = ACTIONS(33),
    [aux_sym_core_token38] = ACTIONS(33),
    [aux_sym_core_token39] = ACTIONS(33),
    [aux_sym_core_token40] = ACTIONS(33),
    [aux_sym_core_token41] = ACTIONS(33),
    [aux_sym_core_token42] = ACTIONS(33),
    [aux_sym_core_token43] = ACTIONS(33),
    [aux_sym_core_token44] = ACTIONS(33),
    [aux_sym_core_token45] = ACTIONS(36),
    [aux_sym_core_token46] = ACTIONS(33),
    [aux_sym_core_token47] = ACTIONS(33),
    [aux_sym_core_token48] = ACTIONS(33),
    [aux_sym_core_token49] = ACTIONS(33),
    [aux_sym_core_token50] = ACTIONS(33),
    [aux_sym_core_token51] = ACTIONS(33),
    [aux_sym_core_token52] = ACTIONS(33),
    [aux_sym_core_token53] = ACTIONS(33),
    [aux_sym_core_token54] = ACTIONS(33),
    [aux_sym_core_token55] = ACTIONS(33),
    [aux_sym_core_token56] = ACTIONS(33),
    [aux_sym_core_token57] = ACTIONS(33),
    [aux_sym_core_token58] = ACTIONS(33),
    [aux_sym_core_token59] = ACTIONS(36),
    [aux_sym_core_token60] = ACTIONS(33),
    [aux_sym_core_token61] = ACTIONS(33),
    [aux_sym_core_token62] = ACTIONS(33),
    [aux_sym_core_token63] = ACTIONS(33),
    [aux_sym_core_token64] = ACTIONS(33),
    [aux_sym_core_token65] = ACTIONS(33),
    [aux_sym_core_token66] = ACTIONS(33),
    [aux_sym_core_token67] = ACTIONS(33),
    [aux_sym_core_token68] = ACTIONS(33),
    [aux_sym_core_token69] = ACTIONS(33),
    [aux_sym_core_token70] = ACTIONS(33),
    [aux_sym_core_token71] = ACTIONS(33),
    [aux_sym_core_token72] = ACTIONS(33),
    [aux_sym_core_token73] = ACTIONS(33),
    [aux_sym_core_token74] = ACTIONS(33),
    [aux_sym_core_token75] = ACTIONS(33),
    [aux_sym_core_token76] = ACTIONS(33),
    [aux_sym_core_token77] = ACTIONS(33),
    [aux_sym_core_token78] = ACTIONS(33),
    [aux_sym_core_token79] = ACTIONS(33),
    [aux_sym_core_token80] = ACTIONS(33),
    [aux_sym_core_token81] = ACTIONS(33),
    [aux_sym_core_token82] = ACTIONS(33),
    [aux_sym_core_token83] = ACTIONS(33),
    [aux_sym_core_token84] = ACTIONS(33),
    [aux_sym_core_token85] = ACTIONS(33),
    [aux_sym_core_token86] = ACTIONS(33),
    [aux_sym_core_token87] = ACTIONS(33),
    [aux_sym_core_token88] = ACTIONS(33),
    [aux_sym_core_token89] = ACTIONS(33),
    [aux_sym_core_token90] = ACTIONS(33),
    [aux_sym_core_token91] = ACTIONS(33),
    [aux_sym_core_token92] = ACTIONS(33),
    [aux_sym_core_token93] = ACTIONS(36),
    [aux_sym_core_token94] = ACTIONS(33),
    [aux_sym_core_token95] = ACTIONS(33),
    [aux_sym_core_token96] = ACTIONS(33),
    [aux_sym_core_token97] = ACTIONS(33),
    [aux_sym_core_token98] = ACTIONS(33),
    [aux_sym_core_token99] = ACTIONS(33),
    [aux_sym_core_token100] = ACTIONS(36),
    [aux_sym_core_token101] = ACTIONS(33),
    [aux_sym_core_token102] = ACTIONS(33),
    [aux_sym_core_token103] = ACTIONS(33),
    [aux_sym_core_token104] = ACTIONS(33),
    [aux_sym_core_token105] = ACTIONS(33),
    [aux_sym_core_token106] = ACTIONS(33),
    [aux_sym_core_token107] = ACTIONS(33),
    [aux_sym_core_token108] = ACTIONS(33),
    [aux_sym_core_token109] = ACTIONS(33),
    [aux_sym_core_token110] = ACTIONS(33),
    [aux_sym_core_token111] = ACTIONS(36),
    [aux_sym_core_token112] = ACTIONS(33),
    [aux_sym_core_token113] = ACTIONS(33),
    [aux_sym_core_token114] = ACTIONS(33),
    [aux_sym_core_token115] = ACTIONS(33),
    [aux_sym_core_token116] = ACTIONS(33),
    [aux_sym_core_token117] = ACTIONS(33),
    [aux_sym_core_token118] = ACTIONS(33),
    [aux_sym_core_token119] = ACTIONS(33),
    [aux_sym_core_token120] = ACTIONS(33),
    [aux_sym_core_token121] = ACTIONS(36),
    [aux_sym_core_token122] = ACTIONS(33),
    [aux_sym_core_token123] = ACTIONS(36),
    [aux_sym_core_token124] = ACTIONS(33),
    [aux_sym_core_token125] = ACTIONS(33),
    [aux_sym_core_token126] = ACTIONS(36),
    [aux_sym_core_token127] = ACTIONS(36),
    [aux_sym_core_token128] = ACTIONS(36),
    [aux_sym_core_token129] = ACTIONS(36),
    [aux_sym_core_token130] = ACTIONS(33),
    [aux_sym_core_token131] = ACTIONS(36),
    [aux_sym_core_token132] = ACTIONS(36),
    [aux_sym_core_token133] = ACTIONS(33),
    [aux_sym_core_token134] = ACTIONS(33),
    [aux_sym_core_token135] = ACTIONS(33),
    [aux_sym_core_token136] = ACTIONS(36),
    [aux_sym_core_token137] = ACTIONS(36),
    [aux_sym_core_token138] = ACTIONS(33),
    [aux_sym_core_token139] = ACTIONS(36),
    [aux_sym_core_token140] = ACTIONS(33),
    [aux_sym_core_token141] = ACTIONS(33),
    [aux_sym_core_token142] = ACTIONS(33),
    [aux_sym_core_token143] = ACTIONS(33),
    [aux_sym_core_token144] = ACTIONS(33),
    [aux_sym_core_token145] = ACTIONS(33),
    [aux_sym_core_token146] = ACTIONS(33),
    [aux_sym_core_token147] = ACTIONS(33),
    [aux_sym_core_token148] = ACTIONS(33),
    [aux_sym_core_token149] = ACTIONS(33),
    [aux_sym_core_token150] = ACTIONS(33),
    [aux_sym_core_token151] = ACTIONS(33),
    [aux_sym_core_token152] = ACTIONS(33),
    [aux_sym_core_token153] = ACTIONS(33),
    [aux_sym_core_token154] = ACTIONS(33),
    [aux_sym_core_token155] = ACTIONS(33),
    [aux_sym_core_token156] = ACTIONS(33),
    [aux_sym_core_token157] = ACTIONS(33),
    [aux_sym_core_token158] = ACTIONS(33),
    [aux_sym_core_token159] = ACTIONS(33),
    [aux_sym_core_token160] = ACTIONS(36),
    [aux_sym_core_token161] = ACTIONS(33),
    [aux_sym_core_token162] = ACTIONS(33),
    [aux_sym_core_token163] = ACTIONS(33),
    [aux_sym_core_token164] = ACTIONS(33),
    [aux_sym_core_token165] = ACTIONS(33),
    [aux_sym_core_token166] = ACTIONS(33),
    [aux_sym_core_token167] = ACTIONS(36),
    [aux_sym_core_token168] = ACTIONS(33),
    [aux_sym_core_token169] = ACTIONS(33),
    [aux_sym_core_token170] = ACTIONS(33),
    [aux_sym_core_token171] = ACTIONS(33),
    [aux_sym_core_token172] = ACTIONS(36),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(42),
    [anon_sym_SLASH] = ACTIONS(42),
    [anon_sym_STAR] = ACTIONS(42),
    [anon_sym_STAR_SLASH] = ACTIONS(42),
    [anon_sym_GT] = ACTIONS(42),
    [anon_sym_LT] = ACTIONS(42),
    [sym_word] = ACTIONS(30),
    [sym_start_definition] = ACTIONS(45),
  },
  [4] = {
    [sym_builtin] = STATE(8),
    [sym_core] = STATE(17),
    [sym_operator] = STATE(17),
    [sym_stack_effects] = STATE(7),
    [aux_sym_word_definition_repeat1] = STATE(8),
    [sym_comment] = ACTIONS(48),
    [sym_number] = ACTIONS(50),
    [aux_sym_core_token1] = ACTIONS(52),
    [aux_sym_core_token2] = ACTIONS(52),
    [aux_sym_core_token3] = ACTIONS(52),
    [aux_sym_core_token4] = ACTIONS(54),
    [aux_sym_core_token5] = ACTIONS(52),
    [aux_sym_core_token6] = ACTIONS(54),
    [aux_sym_core_token7] = ACTIONS(52),
    [aux_sym_core_token8] = ACTIONS(52),
    [aux_sym_core_token9] = ACTIONS(52),
    [aux_sym_core_token10] = ACTIONS(54),
    [aux_sym_core_token11] = ACTIONS(52),
    [aux_sym_core_token12] = ACTIONS(54),
    [aux_sym_core_token13] = ACTIONS(52),
    [aux_sym_core_token14] = ACTIONS(52),
    [aux_sym_core_token15] = ACTIONS(54),
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
    [aux_sym_core_token26] = ACTIONS(54),
    [aux_sym_core_token27] = ACTIONS(54),
    [aux_sym_core_token28] = ACTIONS(54),
    [aux_sym_core_token29] = ACTIONS(54),
    [aux_sym_core_token30] = ACTIONS(54),
    [aux_sym_core_token31] = ACTIONS(52),
    [aux_sym_core_token32] = ACTIONS(52),
    [aux_sym_core_token33] = ACTIONS(52),
    [aux_sym_core_token34] = ACTIONS(54),
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
    [aux_sym_core_token45] = ACTIONS(54),
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
    [aux_sym_core_token59] = ACTIONS(54),
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
    [aux_sym_core_token93] = ACTIONS(54),
    [aux_sym_core_token94] = ACTIONS(52),
    [aux_sym_core_token95] = ACTIONS(52),
    [aux_sym_core_token96] = ACTIONS(52),
    [aux_sym_core_token97] = ACTIONS(52),
    [aux_sym_core_token98] = ACTIONS(52),
    [aux_sym_core_token99] = ACTIONS(54),
    [aux_sym_core_token100] = ACTIONS(54),
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
    [aux_sym_core_token111] = ACTIONS(54),
    [aux_sym_core_token112] = ACTIONS(52),
    [aux_sym_core_token113] = ACTIONS(52),
    [aux_sym_core_token114] = ACTIONS(52),
    [aux_sym_core_token115] = ACTIONS(52),
    [aux_sym_core_token116] = ACTIONS(52),
    [aux_sym_core_token117] = ACTIONS(52),
    [aux_sym_core_token118] = ACTIONS(52),
    [aux_sym_core_token119] = ACTIONS(52),
    [aux_sym_core_token120] = ACTIONS(52),
    [aux_sym_core_token121] = ACTIONS(54),
    [aux_sym_core_token122] = ACTIONS(52),
    [aux_sym_core_token123] = ACTIONS(54),
    [aux_sym_core_token124] = ACTIONS(52),
    [aux_sym_core_token125] = ACTIONS(52),
    [aux_sym_core_token126] = ACTIONS(54),
    [aux_sym_core_token127] = ACTIONS(54),
    [aux_sym_core_token128] = ACTIONS(54),
    [aux_sym_core_token129] = ACTIONS(54),
    [aux_sym_core_token130] = ACTIONS(52),
    [aux_sym_core_token131] = ACTIONS(54),
    [aux_sym_core_token132] = ACTIONS(54),
    [aux_sym_core_token133] = ACTIONS(52),
    [aux_sym_core_token134] = ACTIONS(52),
    [aux_sym_core_token135] = ACTIONS(52),
    [aux_sym_core_token136] = ACTIONS(54),
    [aux_sym_core_token137] = ACTIONS(54),
    [aux_sym_core_token138] = ACTIONS(52),
    [aux_sym_core_token139] = ACTIONS(54),
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
    [aux_sym_core_token160] = ACTIONS(54),
    [aux_sym_core_token161] = ACTIONS(52),
    [aux_sym_core_token162] = ACTIONS(52),
    [aux_sym_core_token163] = ACTIONS(52),
    [aux_sym_core_token164] = ACTIONS(52),
    [aux_sym_core_token165] = ACTIONS(52),
    [aux_sym_core_token166] = ACTIONS(52),
    [aux_sym_core_token167] = ACTIONS(54),
    [aux_sym_core_token168] = ACTIONS(52),
    [aux_sym_core_token169] = ACTIONS(52),
    [aux_sym_core_token170] = ACTIONS(52),
    [aux_sym_core_token171] = ACTIONS(52),
    [aux_sym_core_token172] = ACTIONS(54),
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_STAR_SLASH] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [sym_word] = ACTIONS(50),
    [sym_lparen] = ACTIONS(60),
    [sym_end_definition] = ACTIONS(62),
  },
  [5] = {
    [sym_builtin] = STATE(5),
    [sym_core] = STATE(17),
    [sym_operator] = STATE(17),
    [aux_sym_word_definition_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(64),
    [sym_number] = ACTIONS(67),
    [aux_sym_core_token1] = ACTIONS(70),
    [aux_sym_core_token2] = ACTIONS(70),
    [aux_sym_core_token3] = ACTIONS(70),
    [aux_sym_core_token4] = ACTIONS(73),
    [aux_sym_core_token5] = ACTIONS(70),
    [aux_sym_core_token6] = ACTIONS(73),
    [aux_sym_core_token7] = ACTIONS(70),
    [aux_sym_core_token8] = ACTIONS(70),
    [aux_sym_core_token9] = ACTIONS(70),
    [aux_sym_core_token10] = ACTIONS(73),
    [aux_sym_core_token11] = ACTIONS(70),
    [aux_sym_core_token12] = ACTIONS(73),
    [aux_sym_core_token13] = ACTIONS(70),
    [aux_sym_core_token14] = ACTIONS(70),
    [aux_sym_core_token15] = ACTIONS(73),
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
    [aux_sym_core_token26] = ACTIONS(73),
    [aux_sym_core_token27] = ACTIONS(73),
    [aux_sym_core_token28] = ACTIONS(73),
    [aux_sym_core_token29] = ACTIONS(73),
    [aux_sym_core_token30] = ACTIONS(73),
    [aux_sym_core_token31] = ACTIONS(70),
    [aux_sym_core_token32] = ACTIONS(70),
    [aux_sym_core_token33] = ACTIONS(70),
    [aux_sym_core_token34] = ACTIONS(73),
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
    [aux_sym_core_token45] = ACTIONS(73),
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
    [aux_sym_core_token59] = ACTIONS(73),
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
    [aux_sym_core_token93] = ACTIONS(73),
    [aux_sym_core_token94] = ACTIONS(70),
    [aux_sym_core_token95] = ACTIONS(70),
    [aux_sym_core_token96] = ACTIONS(70),
    [aux_sym_core_token97] = ACTIONS(70),
    [aux_sym_core_token98] = ACTIONS(70),
    [aux_sym_core_token99] = ACTIONS(73),
    [aux_sym_core_token100] = ACTIONS(73),
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
    [aux_sym_core_token111] = ACTIONS(73),
    [aux_sym_core_token112] = ACTIONS(70),
    [aux_sym_core_token113] = ACTIONS(70),
    [aux_sym_core_token114] = ACTIONS(70),
    [aux_sym_core_token115] = ACTIONS(70),
    [aux_sym_core_token116] = ACTIONS(70),
    [aux_sym_core_token117] = ACTIONS(70),
    [aux_sym_core_token118] = ACTIONS(70),
    [aux_sym_core_token119] = ACTIONS(70),
    [aux_sym_core_token120] = ACTIONS(70),
    [aux_sym_core_token121] = ACTIONS(73),
    [aux_sym_core_token122] = ACTIONS(70),
    [aux_sym_core_token123] = ACTIONS(73),
    [aux_sym_core_token124] = ACTIONS(70),
    [aux_sym_core_token125] = ACTIONS(70),
    [aux_sym_core_token126] = ACTIONS(73),
    [aux_sym_core_token127] = ACTIONS(73),
    [aux_sym_core_token128] = ACTIONS(73),
    [aux_sym_core_token129] = ACTIONS(73),
    [aux_sym_core_token130] = ACTIONS(70),
    [aux_sym_core_token131] = ACTIONS(73),
    [aux_sym_core_token132] = ACTIONS(73),
    [aux_sym_core_token133] = ACTIONS(70),
    [aux_sym_core_token134] = ACTIONS(70),
    [aux_sym_core_token135] = ACTIONS(70),
    [aux_sym_core_token136] = ACTIONS(73),
    [aux_sym_core_token137] = ACTIONS(73),
    [aux_sym_core_token138] = ACTIONS(70),
    [aux_sym_core_token139] = ACTIONS(73),
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
    [aux_sym_core_token160] = ACTIONS(73),
    [aux_sym_core_token161] = ACTIONS(70),
    [aux_sym_core_token162] = ACTIONS(70),
    [aux_sym_core_token163] = ACTIONS(70),
    [aux_sym_core_token164] = ACTIONS(70),
    [aux_sym_core_token165] = ACTIONS(70),
    [aux_sym_core_token166] = ACTIONS(70),
    [aux_sym_core_token167] = ACTIONS(73),
    [aux_sym_core_token168] = ACTIONS(70),
    [aux_sym_core_token169] = ACTIONS(70),
    [aux_sym_core_token170] = ACTIONS(70),
    [aux_sym_core_token171] = ACTIONS(70),
    [aux_sym_core_token172] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_STAR_SLASH] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(79),
    [anon_sym_LT] = ACTIONS(79),
    [sym_word] = ACTIONS(67),
    [sym_end_definition] = ACTIONS(82),
  },
  [6] = {
    [sym_builtin] = STATE(5),
    [sym_core] = STATE(17),
    [sym_operator] = STATE(17),
    [aux_sym_word_definition_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(84),
    [sym_number] = ACTIONS(86),
    [aux_sym_core_token1] = ACTIONS(52),
    [aux_sym_core_token2] = ACTIONS(52),
    [aux_sym_core_token3] = ACTIONS(52),
    [aux_sym_core_token4] = ACTIONS(54),
    [aux_sym_core_token5] = ACTIONS(52),
    [aux_sym_core_token6] = ACTIONS(54),
    [aux_sym_core_token7] = ACTIONS(52),
    [aux_sym_core_token8] = ACTIONS(52),
    [aux_sym_core_token9] = ACTIONS(52),
    [aux_sym_core_token10] = ACTIONS(54),
    [aux_sym_core_token11] = ACTIONS(52),
    [aux_sym_core_token12] = ACTIONS(54),
    [aux_sym_core_token13] = ACTIONS(52),
    [aux_sym_core_token14] = ACTIONS(52),
    [aux_sym_core_token15] = ACTIONS(54),
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
    [aux_sym_core_token26] = ACTIONS(54),
    [aux_sym_core_token27] = ACTIONS(54),
    [aux_sym_core_token28] = ACTIONS(54),
    [aux_sym_core_token29] = ACTIONS(54),
    [aux_sym_core_token30] = ACTIONS(54),
    [aux_sym_core_token31] = ACTIONS(52),
    [aux_sym_core_token32] = ACTIONS(52),
    [aux_sym_core_token33] = ACTIONS(52),
    [aux_sym_core_token34] = ACTIONS(54),
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
    [aux_sym_core_token45] = ACTIONS(54),
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
    [aux_sym_core_token59] = ACTIONS(54),
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
    [aux_sym_core_token93] = ACTIONS(54),
    [aux_sym_core_token94] = ACTIONS(52),
    [aux_sym_core_token95] = ACTIONS(52),
    [aux_sym_core_token96] = ACTIONS(52),
    [aux_sym_core_token97] = ACTIONS(52),
    [aux_sym_core_token98] = ACTIONS(52),
    [aux_sym_core_token99] = ACTIONS(54),
    [aux_sym_core_token100] = ACTIONS(54),
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
    [aux_sym_core_token111] = ACTIONS(54),
    [aux_sym_core_token112] = ACTIONS(52),
    [aux_sym_core_token113] = ACTIONS(52),
    [aux_sym_core_token114] = ACTIONS(52),
    [aux_sym_core_token115] = ACTIONS(52),
    [aux_sym_core_token116] = ACTIONS(52),
    [aux_sym_core_token117] = ACTIONS(52),
    [aux_sym_core_token118] = ACTIONS(52),
    [aux_sym_core_token119] = ACTIONS(52),
    [aux_sym_core_token120] = ACTIONS(52),
    [aux_sym_core_token121] = ACTIONS(54),
    [aux_sym_core_token122] = ACTIONS(52),
    [aux_sym_core_token123] = ACTIONS(54),
    [aux_sym_core_token124] = ACTIONS(52),
    [aux_sym_core_token125] = ACTIONS(52),
    [aux_sym_core_token126] = ACTIONS(54),
    [aux_sym_core_token127] = ACTIONS(54),
    [aux_sym_core_token128] = ACTIONS(54),
    [aux_sym_core_token129] = ACTIONS(54),
    [aux_sym_core_token130] = ACTIONS(52),
    [aux_sym_core_token131] = ACTIONS(54),
    [aux_sym_core_token132] = ACTIONS(54),
    [aux_sym_core_token133] = ACTIONS(52),
    [aux_sym_core_token134] = ACTIONS(52),
    [aux_sym_core_token135] = ACTIONS(52),
    [aux_sym_core_token136] = ACTIONS(54),
    [aux_sym_core_token137] = ACTIONS(54),
    [aux_sym_core_token138] = ACTIONS(52),
    [aux_sym_core_token139] = ACTIONS(54),
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
    [aux_sym_core_token160] = ACTIONS(54),
    [aux_sym_core_token161] = ACTIONS(52),
    [aux_sym_core_token162] = ACTIONS(52),
    [aux_sym_core_token163] = ACTIONS(52),
    [aux_sym_core_token164] = ACTIONS(52),
    [aux_sym_core_token165] = ACTIONS(52),
    [aux_sym_core_token166] = ACTIONS(52),
    [aux_sym_core_token167] = ACTIONS(54),
    [aux_sym_core_token168] = ACTIONS(52),
    [aux_sym_core_token169] = ACTIONS(52),
    [aux_sym_core_token170] = ACTIONS(52),
    [aux_sym_core_token171] = ACTIONS(52),
    [aux_sym_core_token172] = ACTIONS(54),
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_STAR_SLASH] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [sym_word] = ACTIONS(86),
    [sym_end_definition] = ACTIONS(88),
  },
  [7] = {
    [sym_builtin] = STATE(6),
    [sym_core] = STATE(17),
    [sym_operator] = STATE(17),
    [aux_sym_word_definition_repeat1] = STATE(6),
    [sym_comment] = ACTIONS(90),
    [sym_number] = ACTIONS(92),
    [aux_sym_core_token1] = ACTIONS(52),
    [aux_sym_core_token2] = ACTIONS(52),
    [aux_sym_core_token3] = ACTIONS(52),
    [aux_sym_core_token4] = ACTIONS(54),
    [aux_sym_core_token5] = ACTIONS(52),
    [aux_sym_core_token6] = ACTIONS(54),
    [aux_sym_core_token7] = ACTIONS(52),
    [aux_sym_core_token8] = ACTIONS(52),
    [aux_sym_core_token9] = ACTIONS(52),
    [aux_sym_core_token10] = ACTIONS(54),
    [aux_sym_core_token11] = ACTIONS(52),
    [aux_sym_core_token12] = ACTIONS(54),
    [aux_sym_core_token13] = ACTIONS(52),
    [aux_sym_core_token14] = ACTIONS(52),
    [aux_sym_core_token15] = ACTIONS(54),
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
    [aux_sym_core_token26] = ACTIONS(54),
    [aux_sym_core_token27] = ACTIONS(54),
    [aux_sym_core_token28] = ACTIONS(54),
    [aux_sym_core_token29] = ACTIONS(54),
    [aux_sym_core_token30] = ACTIONS(54),
    [aux_sym_core_token31] = ACTIONS(52),
    [aux_sym_core_token32] = ACTIONS(52),
    [aux_sym_core_token33] = ACTIONS(52),
    [aux_sym_core_token34] = ACTIONS(54),
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
    [aux_sym_core_token45] = ACTIONS(54),
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
    [aux_sym_core_token59] = ACTIONS(54),
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
    [aux_sym_core_token93] = ACTIONS(54),
    [aux_sym_core_token94] = ACTIONS(52),
    [aux_sym_core_token95] = ACTIONS(52),
    [aux_sym_core_token96] = ACTIONS(52),
    [aux_sym_core_token97] = ACTIONS(52),
    [aux_sym_core_token98] = ACTIONS(52),
    [aux_sym_core_token99] = ACTIONS(54),
    [aux_sym_core_token100] = ACTIONS(54),
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
    [aux_sym_core_token111] = ACTIONS(54),
    [aux_sym_core_token112] = ACTIONS(52),
    [aux_sym_core_token113] = ACTIONS(52),
    [aux_sym_core_token114] = ACTIONS(52),
    [aux_sym_core_token115] = ACTIONS(52),
    [aux_sym_core_token116] = ACTIONS(52),
    [aux_sym_core_token117] = ACTIONS(52),
    [aux_sym_core_token118] = ACTIONS(52),
    [aux_sym_core_token119] = ACTIONS(52),
    [aux_sym_core_token120] = ACTIONS(52),
    [aux_sym_core_token121] = ACTIONS(54),
    [aux_sym_core_token122] = ACTIONS(52),
    [aux_sym_core_token123] = ACTIONS(54),
    [aux_sym_core_token124] = ACTIONS(52),
    [aux_sym_core_token125] = ACTIONS(52),
    [aux_sym_core_token126] = ACTIONS(54),
    [aux_sym_core_token127] = ACTIONS(54),
    [aux_sym_core_token128] = ACTIONS(54),
    [aux_sym_core_token129] = ACTIONS(54),
    [aux_sym_core_token130] = ACTIONS(52),
    [aux_sym_core_token131] = ACTIONS(54),
    [aux_sym_core_token132] = ACTIONS(54),
    [aux_sym_core_token133] = ACTIONS(52),
    [aux_sym_core_token134] = ACTIONS(52),
    [aux_sym_core_token135] = ACTIONS(52),
    [aux_sym_core_token136] = ACTIONS(54),
    [aux_sym_core_token137] = ACTIONS(54),
    [aux_sym_core_token138] = ACTIONS(52),
    [aux_sym_core_token139] = ACTIONS(54),
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
    [aux_sym_core_token160] = ACTIONS(54),
    [aux_sym_core_token161] = ACTIONS(52),
    [aux_sym_core_token162] = ACTIONS(52),
    [aux_sym_core_token163] = ACTIONS(52),
    [aux_sym_core_token164] = ACTIONS(52),
    [aux_sym_core_token165] = ACTIONS(52),
    [aux_sym_core_token166] = ACTIONS(52),
    [aux_sym_core_token167] = ACTIONS(54),
    [aux_sym_core_token168] = ACTIONS(52),
    [aux_sym_core_token169] = ACTIONS(52),
    [aux_sym_core_token170] = ACTIONS(52),
    [aux_sym_core_token171] = ACTIONS(52),
    [aux_sym_core_token172] = ACTIONS(54),
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_STAR_SLASH] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [sym_word] = ACTIONS(92),
    [sym_end_definition] = ACTIONS(94),
  },
  [8] = {
    [sym_builtin] = STATE(5),
    [sym_core] = STATE(17),
    [sym_operator] = STATE(17),
    [aux_sym_word_definition_repeat1] = STATE(5),
    [sym_comment] = ACTIONS(84),
    [sym_number] = ACTIONS(86),
    [aux_sym_core_token1] = ACTIONS(52),
    [aux_sym_core_token2] = ACTIONS(52),
    [aux_sym_core_token3] = ACTIONS(52),
    [aux_sym_core_token4] = ACTIONS(54),
    [aux_sym_core_token5] = ACTIONS(52),
    [aux_sym_core_token6] = ACTIONS(54),
    [aux_sym_core_token7] = ACTIONS(52),
    [aux_sym_core_token8] = ACTIONS(52),
    [aux_sym_core_token9] = ACTIONS(52),
    [aux_sym_core_token10] = ACTIONS(54),
    [aux_sym_core_token11] = ACTIONS(52),
    [aux_sym_core_token12] = ACTIONS(54),
    [aux_sym_core_token13] = ACTIONS(52),
    [aux_sym_core_token14] = ACTIONS(52),
    [aux_sym_core_token15] = ACTIONS(54),
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
    [aux_sym_core_token26] = ACTIONS(54),
    [aux_sym_core_token27] = ACTIONS(54),
    [aux_sym_core_token28] = ACTIONS(54),
    [aux_sym_core_token29] = ACTIONS(54),
    [aux_sym_core_token30] = ACTIONS(54),
    [aux_sym_core_token31] = ACTIONS(52),
    [aux_sym_core_token32] = ACTIONS(52),
    [aux_sym_core_token33] = ACTIONS(52),
    [aux_sym_core_token34] = ACTIONS(54),
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
    [aux_sym_core_token45] = ACTIONS(54),
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
    [aux_sym_core_token59] = ACTIONS(54),
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
    [aux_sym_core_token93] = ACTIONS(54),
    [aux_sym_core_token94] = ACTIONS(52),
    [aux_sym_core_token95] = ACTIONS(52),
    [aux_sym_core_token96] = ACTIONS(52),
    [aux_sym_core_token97] = ACTIONS(52),
    [aux_sym_core_token98] = ACTIONS(52),
    [aux_sym_core_token99] = ACTIONS(54),
    [aux_sym_core_token100] = ACTIONS(54),
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
    [aux_sym_core_token111] = ACTIONS(54),
    [aux_sym_core_token112] = ACTIONS(52),
    [aux_sym_core_token113] = ACTIONS(52),
    [aux_sym_core_token114] = ACTIONS(52),
    [aux_sym_core_token115] = ACTIONS(52),
    [aux_sym_core_token116] = ACTIONS(52),
    [aux_sym_core_token117] = ACTIONS(52),
    [aux_sym_core_token118] = ACTIONS(52),
    [aux_sym_core_token119] = ACTIONS(52),
    [aux_sym_core_token120] = ACTIONS(52),
    [aux_sym_core_token121] = ACTIONS(54),
    [aux_sym_core_token122] = ACTIONS(52),
    [aux_sym_core_token123] = ACTIONS(54),
    [aux_sym_core_token124] = ACTIONS(52),
    [aux_sym_core_token125] = ACTIONS(52),
    [aux_sym_core_token126] = ACTIONS(54),
    [aux_sym_core_token127] = ACTIONS(54),
    [aux_sym_core_token128] = ACTIONS(54),
    [aux_sym_core_token129] = ACTIONS(54),
    [aux_sym_core_token130] = ACTIONS(52),
    [aux_sym_core_token131] = ACTIONS(54),
    [aux_sym_core_token132] = ACTIONS(54),
    [aux_sym_core_token133] = ACTIONS(52),
    [aux_sym_core_token134] = ACTIONS(52),
    [aux_sym_core_token135] = ACTIONS(52),
    [aux_sym_core_token136] = ACTIONS(54),
    [aux_sym_core_token137] = ACTIONS(54),
    [aux_sym_core_token138] = ACTIONS(52),
    [aux_sym_core_token139] = ACTIONS(54),
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
    [aux_sym_core_token160] = ACTIONS(54),
    [aux_sym_core_token161] = ACTIONS(52),
    [aux_sym_core_token162] = ACTIONS(52),
    [aux_sym_core_token163] = ACTIONS(52),
    [aux_sym_core_token164] = ACTIONS(52),
    [aux_sym_core_token165] = ACTIONS(52),
    [aux_sym_core_token166] = ACTIONS(52),
    [aux_sym_core_token167] = ACTIONS(54),
    [aux_sym_core_token168] = ACTIONS(52),
    [aux_sym_core_token169] = ACTIONS(52),
    [aux_sym_core_token170] = ACTIONS(52),
    [aux_sym_core_token171] = ACTIONS(52),
    [aux_sym_core_token172] = ACTIONS(54),
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_PLUS] = ACTIONS(58),
    [anon_sym_DASH] = ACTIONS(58),
    [anon_sym_SLASH] = ACTIONS(58),
    [anon_sym_STAR] = ACTIONS(58),
    [anon_sym_STAR_SLASH] = ACTIONS(58),
    [anon_sym_GT] = ACTIONS(58),
    [anon_sym_LT] = ACTIONS(58),
    [sym_word] = ACTIONS(86),
    [sym_end_definition] = ACTIONS(94),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_comment] = ACTIONS(96),
    [sym_string] = ACTIONS(96),
    [sym_number] = ACTIONS(98),
    [aux_sym_core_token1] = ACTIONS(98),
    [aux_sym_core_token2] = ACTIONS(98),
    [aux_sym_core_token3] = ACTIONS(98),
    [aux_sym_core_token4] = ACTIONS(96),
    [aux_sym_core_token5] = ACTIONS(98),
    [aux_sym_core_token6] = ACTIONS(96),
    [aux_sym_core_token7] = ACTIONS(98),
    [aux_sym_core_token8] = ACTIONS(98),
    [aux_sym_core_token9] = ACTIONS(98),
    [aux_sym_core_token10] = ACTIONS(96),
    [aux_sym_core_token11] = ACTIONS(98),
    [aux_sym_core_token12] = ACTIONS(96),
    [aux_sym_core_token13] = ACTIONS(98),
    [aux_sym_core_token14] = ACTIONS(98),
    [aux_sym_core_token15] = ACTIONS(96),
    [aux_sym_core_token16] = ACTIONS(98),
    [aux_sym_core_token17] = ACTIONS(98),
    [aux_sym_core_token18] = ACTIONS(98),
    [aux_sym_core_token19] = ACTIONS(98),
    [aux_sym_core_token20] = ACTIONS(98),
    [aux_sym_core_token21] = ACTIONS(98),
    [aux_sym_core_token22] = ACTIONS(98),
    [aux_sym_core_token23] = ACTIONS(98),
    [aux_sym_core_token24] = ACTIONS(98),
    [aux_sym_core_token25] = ACTIONS(98),
    [aux_sym_core_token26] = ACTIONS(96),
    [aux_sym_core_token27] = ACTIONS(96),
    [aux_sym_core_token28] = ACTIONS(96),
    [aux_sym_core_token29] = ACTIONS(96),
    [aux_sym_core_token30] = ACTIONS(96),
    [aux_sym_core_token31] = ACTIONS(98),
    [aux_sym_core_token32] = ACTIONS(98),
    [aux_sym_core_token33] = ACTIONS(98),
    [aux_sym_core_token34] = ACTIONS(96),
    [aux_sym_core_token35] = ACTIONS(98),
    [aux_sym_core_token36] = ACTIONS(98),
    [aux_sym_core_token37] = ACTIONS(98),
    [aux_sym_core_token38] = ACTIONS(98),
    [aux_sym_core_token39] = ACTIONS(98),
    [aux_sym_core_token40] = ACTIONS(98),
    [aux_sym_core_token41] = ACTIONS(98),
    [aux_sym_core_token42] = ACTIONS(98),
    [aux_sym_core_token43] = ACTIONS(98),
    [aux_sym_core_token44] = ACTIONS(98),
    [aux_sym_core_token45] = ACTIONS(96),
    [aux_sym_core_token46] = ACTIONS(98),
    [aux_sym_core_token47] = ACTIONS(98),
    [aux_sym_core_token48] = ACTIONS(98),
    [aux_sym_core_token49] = ACTIONS(98),
    [aux_sym_core_token50] = ACTIONS(98),
    [aux_sym_core_token51] = ACTIONS(98),
    [aux_sym_core_token52] = ACTIONS(98),
    [aux_sym_core_token53] = ACTIONS(98),
    [aux_sym_core_token54] = ACTIONS(98),
    [aux_sym_core_token55] = ACTIONS(98),
    [aux_sym_core_token56] = ACTIONS(98),
    [aux_sym_core_token57] = ACTIONS(98),
    [aux_sym_core_token58] = ACTIONS(98),
    [aux_sym_core_token59] = ACTIONS(96),
    [aux_sym_core_token60] = ACTIONS(98),
    [aux_sym_core_token61] = ACTIONS(98),
    [aux_sym_core_token62] = ACTIONS(98),
    [aux_sym_core_token63] = ACTIONS(98),
    [aux_sym_core_token64] = ACTIONS(98),
    [aux_sym_core_token65] = ACTIONS(98),
    [aux_sym_core_token66] = ACTIONS(98),
    [aux_sym_core_token67] = ACTIONS(98),
    [aux_sym_core_token68] = ACTIONS(98),
    [aux_sym_core_token69] = ACTIONS(98),
    [aux_sym_core_token70] = ACTIONS(98),
    [aux_sym_core_token71] = ACTIONS(98),
    [aux_sym_core_token72] = ACTIONS(98),
    [aux_sym_core_token73] = ACTIONS(98),
    [aux_sym_core_token74] = ACTIONS(98),
    [aux_sym_core_token75] = ACTIONS(98),
    [aux_sym_core_token76] = ACTIONS(98),
    [aux_sym_core_token77] = ACTIONS(98),
    [aux_sym_core_token78] = ACTIONS(98),
    [aux_sym_core_token79] = ACTIONS(98),
    [aux_sym_core_token80] = ACTIONS(98),
    [aux_sym_core_token81] = ACTIONS(98),
    [aux_sym_core_token82] = ACTIONS(98),
    [aux_sym_core_token83] = ACTIONS(98),
    [aux_sym_core_token84] = ACTIONS(98),
    [aux_sym_core_token85] = ACTIONS(98),
    [aux_sym_core_token86] = ACTIONS(98),
    [aux_sym_core_token87] = ACTIONS(98),
    [aux_sym_core_token88] = ACTIONS(98),
    [aux_sym_core_token89] = ACTIONS(98),
    [aux_sym_core_token90] = ACTIONS(98),
    [aux_sym_core_token91] = ACTIONS(98),
    [aux_sym_core_token92] = ACTIONS(98),
    [aux_sym_core_token93] = ACTIONS(96),
    [aux_sym_core_token94] = ACTIONS(98),
    [aux_sym_core_token95] = ACTIONS(98),
    [aux_sym_core_token96] = ACTIONS(98),
    [aux_sym_core_token97] = ACTIONS(98),
    [aux_sym_core_token98] = ACTIONS(98),
    [aux_sym_core_token99] = ACTIONS(98),
    [aux_sym_core_token100] = ACTIONS(96),
    [aux_sym_core_token101] = ACTIONS(98),
    [aux_sym_core_token102] = ACTIONS(98),
    [aux_sym_core_token103] = ACTIONS(98),
    [aux_sym_core_token104] = ACTIONS(98),
    [aux_sym_core_token105] = ACTIONS(98),
    [aux_sym_core_token106] = ACTIONS(98),
    [aux_sym_core_token107] = ACTIONS(98),
    [aux_sym_core_token108] = ACTIONS(98),
    [aux_sym_core_token109] = ACTIONS(98),
    [aux_sym_core_token110] = ACTIONS(98),
    [aux_sym_core_token111] = ACTIONS(96),
    [aux_sym_core_token112] = ACTIONS(98),
    [aux_sym_core_token113] = ACTIONS(98),
    [aux_sym_core_token114] = ACTIONS(98),
    [aux_sym_core_token115] = ACTIONS(98),
    [aux_sym_core_token116] = ACTIONS(98),
    [aux_sym_core_token117] = ACTIONS(98),
    [aux_sym_core_token118] = ACTIONS(98),
    [aux_sym_core_token119] = ACTIONS(98),
    [aux_sym_core_token120] = ACTIONS(98),
    [aux_sym_core_token121] = ACTIONS(96),
    [aux_sym_core_token122] = ACTIONS(98),
    [aux_sym_core_token123] = ACTIONS(96),
    [aux_sym_core_token124] = ACTIONS(98),
    [aux_sym_core_token125] = ACTIONS(98),
    [aux_sym_core_token126] = ACTIONS(96),
    [aux_sym_core_token127] = ACTIONS(96),
    [aux_sym_core_token128] = ACTIONS(96),
    [aux_sym_core_token129] = ACTIONS(96),
    [aux_sym_core_token130] = ACTIONS(98),
    [aux_sym_core_token131] = ACTIONS(96),
    [aux_sym_core_token132] = ACTIONS(96),
    [aux_sym_core_token133] = ACTIONS(98),
    [aux_sym_core_token134] = ACTIONS(98),
    [aux_sym_core_token135] = ACTIONS(98),
    [aux_sym_core_token136] = ACTIONS(96),
    [aux_sym_core_token137] = ACTIONS(96),
    [aux_sym_core_token138] = ACTIONS(98),
    [aux_sym_core_token139] = ACTIONS(96),
    [aux_sym_core_token140] = ACTIONS(98),
    [aux_sym_core_token141] = ACTIONS(98),
    [aux_sym_core_token142] = ACTIONS(98),
    [aux_sym_core_token143] = ACTIONS(98),
    [aux_sym_core_token144] = ACTIONS(98),
    [aux_sym_core_token145] = ACTIONS(98),
    [aux_sym_core_token146] = ACTIONS(98),
    [aux_sym_core_token147] = ACTIONS(98),
    [aux_sym_core_token148] = ACTIONS(98),
    [aux_sym_core_token149] = ACTIONS(98),
    [aux_sym_core_token150] = ACTIONS(98),
    [aux_sym_core_token151] = ACTIONS(98),
    [aux_sym_core_token152] = ACTIONS(98),
    [aux_sym_core_token153] = ACTIONS(98),
    [aux_sym_core_token154] = ACTIONS(98),
    [aux_sym_core_token155] = ACTIONS(98),
    [aux_sym_core_token156] = ACTIONS(98),
    [aux_sym_core_token157] = ACTIONS(98),
    [aux_sym_core_token158] = ACTIONS(98),
    [aux_sym_core_token159] = ACTIONS(98),
    [aux_sym_core_token160] = ACTIONS(96),
    [aux_sym_core_token161] = ACTIONS(98),
    [aux_sym_core_token162] = ACTIONS(98),
    [aux_sym_core_token163] = ACTIONS(98),
    [aux_sym_core_token164] = ACTIONS(98),
    [aux_sym_core_token165] = ACTIONS(98),
    [aux_sym_core_token166] = ACTIONS(98),
    [aux_sym_core_token167] = ACTIONS(96),
    [aux_sym_core_token168] = ACTIONS(98),
    [aux_sym_core_token169] = ACTIONS(98),
    [aux_sym_core_token170] = ACTIONS(98),
    [aux_sym_core_token171] = ACTIONS(98),
    [aux_sym_core_token172] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_STAR_SLASH] = ACTIONS(98),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [sym_word] = ACTIONS(98),
    [sym_start_definition] = ACTIONS(98),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_comment] = ACTIONS(100),
    [sym_string] = ACTIONS(100),
    [sym_number] = ACTIONS(102),
    [aux_sym_core_token1] = ACTIONS(102),
    [aux_sym_core_token2] = ACTIONS(102),
    [aux_sym_core_token3] = ACTIONS(102),
    [aux_sym_core_token4] = ACTIONS(100),
    [aux_sym_core_token5] = ACTIONS(102),
    [aux_sym_core_token6] = ACTIONS(100),
    [aux_sym_core_token7] = ACTIONS(102),
    [aux_sym_core_token8] = ACTIONS(102),
    [aux_sym_core_token9] = ACTIONS(102),
    [aux_sym_core_token10] = ACTIONS(100),
    [aux_sym_core_token11] = ACTIONS(102),
    [aux_sym_core_token12] = ACTIONS(100),
    [aux_sym_core_token13] = ACTIONS(102),
    [aux_sym_core_token14] = ACTIONS(102),
    [aux_sym_core_token15] = ACTIONS(100),
    [aux_sym_core_token16] = ACTIONS(102),
    [aux_sym_core_token17] = ACTIONS(102),
    [aux_sym_core_token18] = ACTIONS(102),
    [aux_sym_core_token19] = ACTIONS(102),
    [aux_sym_core_token20] = ACTIONS(102),
    [aux_sym_core_token21] = ACTIONS(102),
    [aux_sym_core_token22] = ACTIONS(102),
    [aux_sym_core_token23] = ACTIONS(102),
    [aux_sym_core_token24] = ACTIONS(102),
    [aux_sym_core_token25] = ACTIONS(102),
    [aux_sym_core_token26] = ACTIONS(100),
    [aux_sym_core_token27] = ACTIONS(100),
    [aux_sym_core_token28] = ACTIONS(100),
    [aux_sym_core_token29] = ACTIONS(100),
    [aux_sym_core_token30] = ACTIONS(100),
    [aux_sym_core_token31] = ACTIONS(102),
    [aux_sym_core_token32] = ACTIONS(102),
    [aux_sym_core_token33] = ACTIONS(102),
    [aux_sym_core_token34] = ACTIONS(100),
    [aux_sym_core_token35] = ACTIONS(102),
    [aux_sym_core_token36] = ACTIONS(102),
    [aux_sym_core_token37] = ACTIONS(102),
    [aux_sym_core_token38] = ACTIONS(102),
    [aux_sym_core_token39] = ACTIONS(102),
    [aux_sym_core_token40] = ACTIONS(102),
    [aux_sym_core_token41] = ACTIONS(102),
    [aux_sym_core_token42] = ACTIONS(102),
    [aux_sym_core_token43] = ACTIONS(102),
    [aux_sym_core_token44] = ACTIONS(102),
    [aux_sym_core_token45] = ACTIONS(100),
    [aux_sym_core_token46] = ACTIONS(102),
    [aux_sym_core_token47] = ACTIONS(102),
    [aux_sym_core_token48] = ACTIONS(102),
    [aux_sym_core_token49] = ACTIONS(102),
    [aux_sym_core_token50] = ACTIONS(102),
    [aux_sym_core_token51] = ACTIONS(102),
    [aux_sym_core_token52] = ACTIONS(102),
    [aux_sym_core_token53] = ACTIONS(102),
    [aux_sym_core_token54] = ACTIONS(102),
    [aux_sym_core_token55] = ACTIONS(102),
    [aux_sym_core_token56] = ACTIONS(102),
    [aux_sym_core_token57] = ACTIONS(102),
    [aux_sym_core_token58] = ACTIONS(102),
    [aux_sym_core_token59] = ACTIONS(100),
    [aux_sym_core_token60] = ACTIONS(102),
    [aux_sym_core_token61] = ACTIONS(102),
    [aux_sym_core_token62] = ACTIONS(102),
    [aux_sym_core_token63] = ACTIONS(102),
    [aux_sym_core_token64] = ACTIONS(102),
    [aux_sym_core_token65] = ACTIONS(102),
    [aux_sym_core_token66] = ACTIONS(102),
    [aux_sym_core_token67] = ACTIONS(102),
    [aux_sym_core_token68] = ACTIONS(102),
    [aux_sym_core_token69] = ACTIONS(102),
    [aux_sym_core_token70] = ACTIONS(102),
    [aux_sym_core_token71] = ACTIONS(102),
    [aux_sym_core_token72] = ACTIONS(102),
    [aux_sym_core_token73] = ACTIONS(102),
    [aux_sym_core_token74] = ACTIONS(102),
    [aux_sym_core_token75] = ACTIONS(102),
    [aux_sym_core_token76] = ACTIONS(102),
    [aux_sym_core_token77] = ACTIONS(102),
    [aux_sym_core_token78] = ACTIONS(102),
    [aux_sym_core_token79] = ACTIONS(102),
    [aux_sym_core_token80] = ACTIONS(102),
    [aux_sym_core_token81] = ACTIONS(102),
    [aux_sym_core_token82] = ACTIONS(102),
    [aux_sym_core_token83] = ACTIONS(102),
    [aux_sym_core_token84] = ACTIONS(102),
    [aux_sym_core_token85] = ACTIONS(102),
    [aux_sym_core_token86] = ACTIONS(102),
    [aux_sym_core_token87] = ACTIONS(102),
    [aux_sym_core_token88] = ACTIONS(102),
    [aux_sym_core_token89] = ACTIONS(102),
    [aux_sym_core_token90] = ACTIONS(102),
    [aux_sym_core_token91] = ACTIONS(102),
    [aux_sym_core_token92] = ACTIONS(102),
    [aux_sym_core_token93] = ACTIONS(100),
    [aux_sym_core_token94] = ACTIONS(102),
    [aux_sym_core_token95] = ACTIONS(102),
    [aux_sym_core_token96] = ACTIONS(102),
    [aux_sym_core_token97] = ACTIONS(102),
    [aux_sym_core_token98] = ACTIONS(102),
    [aux_sym_core_token99] = ACTIONS(102),
    [aux_sym_core_token100] = ACTIONS(100),
    [aux_sym_core_token101] = ACTIONS(102),
    [aux_sym_core_token102] = ACTIONS(102),
    [aux_sym_core_token103] = ACTIONS(102),
    [aux_sym_core_token104] = ACTIONS(102),
    [aux_sym_core_token105] = ACTIONS(102),
    [aux_sym_core_token106] = ACTIONS(102),
    [aux_sym_core_token107] = ACTIONS(102),
    [aux_sym_core_token108] = ACTIONS(102),
    [aux_sym_core_token109] = ACTIONS(102),
    [aux_sym_core_token110] = ACTIONS(102),
    [aux_sym_core_token111] = ACTIONS(100),
    [aux_sym_core_token112] = ACTIONS(102),
    [aux_sym_core_token113] = ACTIONS(102),
    [aux_sym_core_token114] = ACTIONS(102),
    [aux_sym_core_token115] = ACTIONS(102),
    [aux_sym_core_token116] = ACTIONS(102),
    [aux_sym_core_token117] = ACTIONS(102),
    [aux_sym_core_token118] = ACTIONS(102),
    [aux_sym_core_token119] = ACTIONS(102),
    [aux_sym_core_token120] = ACTIONS(102),
    [aux_sym_core_token121] = ACTIONS(100),
    [aux_sym_core_token122] = ACTIONS(102),
    [aux_sym_core_token123] = ACTIONS(100),
    [aux_sym_core_token124] = ACTIONS(102),
    [aux_sym_core_token125] = ACTIONS(102),
    [aux_sym_core_token126] = ACTIONS(100),
    [aux_sym_core_token127] = ACTIONS(100),
    [aux_sym_core_token128] = ACTIONS(100),
    [aux_sym_core_token129] = ACTIONS(100),
    [aux_sym_core_token130] = ACTIONS(102),
    [aux_sym_core_token131] = ACTIONS(100),
    [aux_sym_core_token132] = ACTIONS(100),
    [aux_sym_core_token133] = ACTIONS(102),
    [aux_sym_core_token134] = ACTIONS(102),
    [aux_sym_core_token135] = ACTIONS(102),
    [aux_sym_core_token136] = ACTIONS(100),
    [aux_sym_core_token137] = ACTIONS(100),
    [aux_sym_core_token138] = ACTIONS(102),
    [aux_sym_core_token139] = ACTIONS(100),
    [aux_sym_core_token140] = ACTIONS(102),
    [aux_sym_core_token141] = ACTIONS(102),
    [aux_sym_core_token142] = ACTIONS(102),
    [aux_sym_core_token143] = ACTIONS(102),
    [aux_sym_core_token144] = ACTIONS(102),
    [aux_sym_core_token145] = ACTIONS(102),
    [aux_sym_core_token146] = ACTIONS(102),
    [aux_sym_core_token147] = ACTIONS(102),
    [aux_sym_core_token148] = ACTIONS(102),
    [aux_sym_core_token149] = ACTIONS(102),
    [aux_sym_core_token150] = ACTIONS(102),
    [aux_sym_core_token151] = ACTIONS(102),
    [aux_sym_core_token152] = ACTIONS(102),
    [aux_sym_core_token153] = ACTIONS(102),
    [aux_sym_core_token154] = ACTIONS(102),
    [aux_sym_core_token155] = ACTIONS(102),
    [aux_sym_core_token156] = ACTIONS(102),
    [aux_sym_core_token157] = ACTIONS(102),
    [aux_sym_core_token158] = ACTIONS(102),
    [aux_sym_core_token159] = ACTIONS(102),
    [aux_sym_core_token160] = ACTIONS(100),
    [aux_sym_core_token161] = ACTIONS(102),
    [aux_sym_core_token162] = ACTIONS(102),
    [aux_sym_core_token163] = ACTIONS(102),
    [aux_sym_core_token164] = ACTIONS(102),
    [aux_sym_core_token165] = ACTIONS(102),
    [aux_sym_core_token166] = ACTIONS(102),
    [aux_sym_core_token167] = ACTIONS(100),
    [aux_sym_core_token168] = ACTIONS(102),
    [aux_sym_core_token169] = ACTIONS(102),
    [aux_sym_core_token170] = ACTIONS(102),
    [aux_sym_core_token171] = ACTIONS(102),
    [aux_sym_core_token172] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_STAR_SLASH] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(102),
    [sym_word] = ACTIONS(102),
    [sym_start_definition] = ACTIONS(102),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_comment] = ACTIONS(104),
    [sym_string] = ACTIONS(104),
    [sym_number] = ACTIONS(106),
    [aux_sym_core_token1] = ACTIONS(106),
    [aux_sym_core_token2] = ACTIONS(106),
    [aux_sym_core_token3] = ACTIONS(106),
    [aux_sym_core_token4] = ACTIONS(104),
    [aux_sym_core_token5] = ACTIONS(106),
    [aux_sym_core_token6] = ACTIONS(104),
    [aux_sym_core_token7] = ACTIONS(106),
    [aux_sym_core_token8] = ACTIONS(106),
    [aux_sym_core_token9] = ACTIONS(106),
    [aux_sym_core_token10] = ACTIONS(104),
    [aux_sym_core_token11] = ACTIONS(106),
    [aux_sym_core_token12] = ACTIONS(104),
    [aux_sym_core_token13] = ACTIONS(106),
    [aux_sym_core_token14] = ACTIONS(106),
    [aux_sym_core_token15] = ACTIONS(104),
    [aux_sym_core_token16] = ACTIONS(106),
    [aux_sym_core_token17] = ACTIONS(106),
    [aux_sym_core_token18] = ACTIONS(106),
    [aux_sym_core_token19] = ACTIONS(106),
    [aux_sym_core_token20] = ACTIONS(106),
    [aux_sym_core_token21] = ACTIONS(106),
    [aux_sym_core_token22] = ACTIONS(106),
    [aux_sym_core_token23] = ACTIONS(106),
    [aux_sym_core_token24] = ACTIONS(106),
    [aux_sym_core_token25] = ACTIONS(106),
    [aux_sym_core_token26] = ACTIONS(104),
    [aux_sym_core_token27] = ACTIONS(104),
    [aux_sym_core_token28] = ACTIONS(104),
    [aux_sym_core_token29] = ACTIONS(104),
    [aux_sym_core_token30] = ACTIONS(104),
    [aux_sym_core_token31] = ACTIONS(106),
    [aux_sym_core_token32] = ACTIONS(106),
    [aux_sym_core_token33] = ACTIONS(106),
    [aux_sym_core_token34] = ACTIONS(104),
    [aux_sym_core_token35] = ACTIONS(106),
    [aux_sym_core_token36] = ACTIONS(106),
    [aux_sym_core_token37] = ACTIONS(106),
    [aux_sym_core_token38] = ACTIONS(106),
    [aux_sym_core_token39] = ACTIONS(106),
    [aux_sym_core_token40] = ACTIONS(106),
    [aux_sym_core_token41] = ACTIONS(106),
    [aux_sym_core_token42] = ACTIONS(106),
    [aux_sym_core_token43] = ACTIONS(106),
    [aux_sym_core_token44] = ACTIONS(106),
    [aux_sym_core_token45] = ACTIONS(104),
    [aux_sym_core_token46] = ACTIONS(106),
    [aux_sym_core_token47] = ACTIONS(106),
    [aux_sym_core_token48] = ACTIONS(106),
    [aux_sym_core_token49] = ACTIONS(106),
    [aux_sym_core_token50] = ACTIONS(106),
    [aux_sym_core_token51] = ACTIONS(106),
    [aux_sym_core_token52] = ACTIONS(106),
    [aux_sym_core_token53] = ACTIONS(106),
    [aux_sym_core_token54] = ACTIONS(106),
    [aux_sym_core_token55] = ACTIONS(106),
    [aux_sym_core_token56] = ACTIONS(106),
    [aux_sym_core_token57] = ACTIONS(106),
    [aux_sym_core_token58] = ACTIONS(106),
    [aux_sym_core_token59] = ACTIONS(104),
    [aux_sym_core_token60] = ACTIONS(106),
    [aux_sym_core_token61] = ACTIONS(106),
    [aux_sym_core_token62] = ACTIONS(106),
    [aux_sym_core_token63] = ACTIONS(106),
    [aux_sym_core_token64] = ACTIONS(106),
    [aux_sym_core_token65] = ACTIONS(106),
    [aux_sym_core_token66] = ACTIONS(106),
    [aux_sym_core_token67] = ACTIONS(106),
    [aux_sym_core_token68] = ACTIONS(106),
    [aux_sym_core_token69] = ACTIONS(106),
    [aux_sym_core_token70] = ACTIONS(106),
    [aux_sym_core_token71] = ACTIONS(106),
    [aux_sym_core_token72] = ACTIONS(106),
    [aux_sym_core_token73] = ACTIONS(106),
    [aux_sym_core_token74] = ACTIONS(106),
    [aux_sym_core_token75] = ACTIONS(106),
    [aux_sym_core_token76] = ACTIONS(106),
    [aux_sym_core_token77] = ACTIONS(106),
    [aux_sym_core_token78] = ACTIONS(106),
    [aux_sym_core_token79] = ACTIONS(106),
    [aux_sym_core_token80] = ACTIONS(106),
    [aux_sym_core_token81] = ACTIONS(106),
    [aux_sym_core_token82] = ACTIONS(106),
    [aux_sym_core_token83] = ACTIONS(106),
    [aux_sym_core_token84] = ACTIONS(106),
    [aux_sym_core_token85] = ACTIONS(106),
    [aux_sym_core_token86] = ACTIONS(106),
    [aux_sym_core_token87] = ACTIONS(106),
    [aux_sym_core_token88] = ACTIONS(106),
    [aux_sym_core_token89] = ACTIONS(106),
    [aux_sym_core_token90] = ACTIONS(106),
    [aux_sym_core_token91] = ACTIONS(106),
    [aux_sym_core_token92] = ACTIONS(106),
    [aux_sym_core_token93] = ACTIONS(104),
    [aux_sym_core_token94] = ACTIONS(106),
    [aux_sym_core_token95] = ACTIONS(106),
    [aux_sym_core_token96] = ACTIONS(106),
    [aux_sym_core_token97] = ACTIONS(106),
    [aux_sym_core_token98] = ACTIONS(106),
    [aux_sym_core_token99] = ACTIONS(106),
    [aux_sym_core_token100] = ACTIONS(104),
    [aux_sym_core_token101] = ACTIONS(106),
    [aux_sym_core_token102] = ACTIONS(106),
    [aux_sym_core_token103] = ACTIONS(106),
    [aux_sym_core_token104] = ACTIONS(106),
    [aux_sym_core_token105] = ACTIONS(106),
    [aux_sym_core_token106] = ACTIONS(106),
    [aux_sym_core_token107] = ACTIONS(106),
    [aux_sym_core_token108] = ACTIONS(106),
    [aux_sym_core_token109] = ACTIONS(106),
    [aux_sym_core_token110] = ACTIONS(106),
    [aux_sym_core_token111] = ACTIONS(104),
    [aux_sym_core_token112] = ACTIONS(106),
    [aux_sym_core_token113] = ACTIONS(106),
    [aux_sym_core_token114] = ACTIONS(106),
    [aux_sym_core_token115] = ACTIONS(106),
    [aux_sym_core_token116] = ACTIONS(106),
    [aux_sym_core_token117] = ACTIONS(106),
    [aux_sym_core_token118] = ACTIONS(106),
    [aux_sym_core_token119] = ACTIONS(106),
    [aux_sym_core_token120] = ACTIONS(106),
    [aux_sym_core_token121] = ACTIONS(104),
    [aux_sym_core_token122] = ACTIONS(106),
    [aux_sym_core_token123] = ACTIONS(104),
    [aux_sym_core_token124] = ACTIONS(106),
    [aux_sym_core_token125] = ACTIONS(106),
    [aux_sym_core_token126] = ACTIONS(104),
    [aux_sym_core_token127] = ACTIONS(104),
    [aux_sym_core_token128] = ACTIONS(104),
    [aux_sym_core_token129] = ACTIONS(104),
    [aux_sym_core_token130] = ACTIONS(106),
    [aux_sym_core_token131] = ACTIONS(104),
    [aux_sym_core_token132] = ACTIONS(104),
    [aux_sym_core_token133] = ACTIONS(106),
    [aux_sym_core_token134] = ACTIONS(106),
    [aux_sym_core_token135] = ACTIONS(106),
    [aux_sym_core_token136] = ACTIONS(104),
    [aux_sym_core_token137] = ACTIONS(104),
    [aux_sym_core_token138] = ACTIONS(106),
    [aux_sym_core_token139] = ACTIONS(104),
    [aux_sym_core_token140] = ACTIONS(106),
    [aux_sym_core_token141] = ACTIONS(106),
    [aux_sym_core_token142] = ACTIONS(106),
    [aux_sym_core_token143] = ACTIONS(106),
    [aux_sym_core_token144] = ACTIONS(106),
    [aux_sym_core_token145] = ACTIONS(106),
    [aux_sym_core_token146] = ACTIONS(106),
    [aux_sym_core_token147] = ACTIONS(106),
    [aux_sym_core_token148] = ACTIONS(106),
    [aux_sym_core_token149] = ACTIONS(106),
    [aux_sym_core_token150] = ACTIONS(106),
    [aux_sym_core_token151] = ACTIONS(106),
    [aux_sym_core_token152] = ACTIONS(106),
    [aux_sym_core_token153] = ACTIONS(106),
    [aux_sym_core_token154] = ACTIONS(106),
    [aux_sym_core_token155] = ACTIONS(106),
    [aux_sym_core_token156] = ACTIONS(106),
    [aux_sym_core_token157] = ACTIONS(106),
    [aux_sym_core_token158] = ACTIONS(106),
    [aux_sym_core_token159] = ACTIONS(106),
    [aux_sym_core_token160] = ACTIONS(104),
    [aux_sym_core_token161] = ACTIONS(106),
    [aux_sym_core_token162] = ACTIONS(106),
    [aux_sym_core_token163] = ACTIONS(106),
    [aux_sym_core_token164] = ACTIONS(106),
    [aux_sym_core_token165] = ACTIONS(106),
    [aux_sym_core_token166] = ACTIONS(106),
    [aux_sym_core_token167] = ACTIONS(104),
    [aux_sym_core_token168] = ACTIONS(106),
    [aux_sym_core_token169] = ACTIONS(106),
    [aux_sym_core_token170] = ACTIONS(106),
    [aux_sym_core_token171] = ACTIONS(106),
    [aux_sym_core_token172] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_STAR_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_LT] = ACTIONS(106),
    [sym_word] = ACTIONS(106),
    [sym_start_definition] = ACTIONS(106),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_comment] = ACTIONS(108),
    [sym_string] = ACTIONS(108),
    [sym_number] = ACTIONS(110),
    [aux_sym_core_token1] = ACTIONS(110),
    [aux_sym_core_token2] = ACTIONS(110),
    [aux_sym_core_token3] = ACTIONS(110),
    [aux_sym_core_token4] = ACTIONS(108),
    [aux_sym_core_token5] = ACTIONS(110),
    [aux_sym_core_token6] = ACTIONS(108),
    [aux_sym_core_token7] = ACTIONS(110),
    [aux_sym_core_token8] = ACTIONS(110),
    [aux_sym_core_token9] = ACTIONS(110),
    [aux_sym_core_token10] = ACTIONS(108),
    [aux_sym_core_token11] = ACTIONS(110),
    [aux_sym_core_token12] = ACTIONS(108),
    [aux_sym_core_token13] = ACTIONS(110),
    [aux_sym_core_token14] = ACTIONS(110),
    [aux_sym_core_token15] = ACTIONS(108),
    [aux_sym_core_token16] = ACTIONS(110),
    [aux_sym_core_token17] = ACTIONS(110),
    [aux_sym_core_token18] = ACTIONS(110),
    [aux_sym_core_token19] = ACTIONS(110),
    [aux_sym_core_token20] = ACTIONS(110),
    [aux_sym_core_token21] = ACTIONS(110),
    [aux_sym_core_token22] = ACTIONS(110),
    [aux_sym_core_token23] = ACTIONS(110),
    [aux_sym_core_token24] = ACTIONS(110),
    [aux_sym_core_token25] = ACTIONS(110),
    [aux_sym_core_token26] = ACTIONS(108),
    [aux_sym_core_token27] = ACTIONS(108),
    [aux_sym_core_token28] = ACTIONS(108),
    [aux_sym_core_token29] = ACTIONS(108),
    [aux_sym_core_token30] = ACTIONS(108),
    [aux_sym_core_token31] = ACTIONS(110),
    [aux_sym_core_token32] = ACTIONS(110),
    [aux_sym_core_token33] = ACTIONS(110),
    [aux_sym_core_token34] = ACTIONS(108),
    [aux_sym_core_token35] = ACTIONS(110),
    [aux_sym_core_token36] = ACTIONS(110),
    [aux_sym_core_token37] = ACTIONS(110),
    [aux_sym_core_token38] = ACTIONS(110),
    [aux_sym_core_token39] = ACTIONS(110),
    [aux_sym_core_token40] = ACTIONS(110),
    [aux_sym_core_token41] = ACTIONS(110),
    [aux_sym_core_token42] = ACTIONS(110),
    [aux_sym_core_token43] = ACTIONS(110),
    [aux_sym_core_token44] = ACTIONS(110),
    [aux_sym_core_token45] = ACTIONS(108),
    [aux_sym_core_token46] = ACTIONS(110),
    [aux_sym_core_token47] = ACTIONS(110),
    [aux_sym_core_token48] = ACTIONS(110),
    [aux_sym_core_token49] = ACTIONS(110),
    [aux_sym_core_token50] = ACTIONS(110),
    [aux_sym_core_token51] = ACTIONS(110),
    [aux_sym_core_token52] = ACTIONS(110),
    [aux_sym_core_token53] = ACTIONS(110),
    [aux_sym_core_token54] = ACTIONS(110),
    [aux_sym_core_token55] = ACTIONS(110),
    [aux_sym_core_token56] = ACTIONS(110),
    [aux_sym_core_token57] = ACTIONS(110),
    [aux_sym_core_token58] = ACTIONS(110),
    [aux_sym_core_token59] = ACTIONS(108),
    [aux_sym_core_token60] = ACTIONS(110),
    [aux_sym_core_token61] = ACTIONS(110),
    [aux_sym_core_token62] = ACTIONS(110),
    [aux_sym_core_token63] = ACTIONS(110),
    [aux_sym_core_token64] = ACTIONS(110),
    [aux_sym_core_token65] = ACTIONS(110),
    [aux_sym_core_token66] = ACTIONS(110),
    [aux_sym_core_token67] = ACTIONS(110),
    [aux_sym_core_token68] = ACTIONS(110),
    [aux_sym_core_token69] = ACTIONS(110),
    [aux_sym_core_token70] = ACTIONS(110),
    [aux_sym_core_token71] = ACTIONS(110),
    [aux_sym_core_token72] = ACTIONS(110),
    [aux_sym_core_token73] = ACTIONS(110),
    [aux_sym_core_token74] = ACTIONS(110),
    [aux_sym_core_token75] = ACTIONS(110),
    [aux_sym_core_token76] = ACTIONS(110),
    [aux_sym_core_token77] = ACTIONS(110),
    [aux_sym_core_token78] = ACTIONS(110),
    [aux_sym_core_token79] = ACTIONS(110),
    [aux_sym_core_token80] = ACTIONS(110),
    [aux_sym_core_token81] = ACTIONS(110),
    [aux_sym_core_token82] = ACTIONS(110),
    [aux_sym_core_token83] = ACTIONS(110),
    [aux_sym_core_token84] = ACTIONS(110),
    [aux_sym_core_token85] = ACTIONS(110),
    [aux_sym_core_token86] = ACTIONS(110),
    [aux_sym_core_token87] = ACTIONS(110),
    [aux_sym_core_token88] = ACTIONS(110),
    [aux_sym_core_token89] = ACTIONS(110),
    [aux_sym_core_token90] = ACTIONS(110),
    [aux_sym_core_token91] = ACTIONS(110),
    [aux_sym_core_token92] = ACTIONS(110),
    [aux_sym_core_token93] = ACTIONS(108),
    [aux_sym_core_token94] = ACTIONS(110),
    [aux_sym_core_token95] = ACTIONS(110),
    [aux_sym_core_token96] = ACTIONS(110),
    [aux_sym_core_token97] = ACTIONS(110),
    [aux_sym_core_token98] = ACTIONS(110),
    [aux_sym_core_token99] = ACTIONS(110),
    [aux_sym_core_token100] = ACTIONS(108),
    [aux_sym_core_token101] = ACTIONS(110),
    [aux_sym_core_token102] = ACTIONS(110),
    [aux_sym_core_token103] = ACTIONS(110),
    [aux_sym_core_token104] = ACTIONS(110),
    [aux_sym_core_token105] = ACTIONS(110),
    [aux_sym_core_token106] = ACTIONS(110),
    [aux_sym_core_token107] = ACTIONS(110),
    [aux_sym_core_token108] = ACTIONS(110),
    [aux_sym_core_token109] = ACTIONS(110),
    [aux_sym_core_token110] = ACTIONS(110),
    [aux_sym_core_token111] = ACTIONS(108),
    [aux_sym_core_token112] = ACTIONS(110),
    [aux_sym_core_token113] = ACTIONS(110),
    [aux_sym_core_token114] = ACTIONS(110),
    [aux_sym_core_token115] = ACTIONS(110),
    [aux_sym_core_token116] = ACTIONS(110),
    [aux_sym_core_token117] = ACTIONS(110),
    [aux_sym_core_token118] = ACTIONS(110),
    [aux_sym_core_token119] = ACTIONS(110),
    [aux_sym_core_token120] = ACTIONS(110),
    [aux_sym_core_token121] = ACTIONS(108),
    [aux_sym_core_token122] = ACTIONS(110),
    [aux_sym_core_token123] = ACTIONS(108),
    [aux_sym_core_token124] = ACTIONS(110),
    [aux_sym_core_token125] = ACTIONS(110),
    [aux_sym_core_token126] = ACTIONS(108),
    [aux_sym_core_token127] = ACTIONS(108),
    [aux_sym_core_token128] = ACTIONS(108),
    [aux_sym_core_token129] = ACTIONS(108),
    [aux_sym_core_token130] = ACTIONS(110),
    [aux_sym_core_token131] = ACTIONS(108),
    [aux_sym_core_token132] = ACTIONS(108),
    [aux_sym_core_token133] = ACTIONS(110),
    [aux_sym_core_token134] = ACTIONS(110),
    [aux_sym_core_token135] = ACTIONS(110),
    [aux_sym_core_token136] = ACTIONS(108),
    [aux_sym_core_token137] = ACTIONS(108),
    [aux_sym_core_token138] = ACTIONS(110),
    [aux_sym_core_token139] = ACTIONS(108),
    [aux_sym_core_token140] = ACTIONS(110),
    [aux_sym_core_token141] = ACTIONS(110),
    [aux_sym_core_token142] = ACTIONS(110),
    [aux_sym_core_token143] = ACTIONS(110),
    [aux_sym_core_token144] = ACTIONS(110),
    [aux_sym_core_token145] = ACTIONS(110),
    [aux_sym_core_token146] = ACTIONS(110),
    [aux_sym_core_token147] = ACTIONS(110),
    [aux_sym_core_token148] = ACTIONS(110),
    [aux_sym_core_token149] = ACTIONS(110),
    [aux_sym_core_token150] = ACTIONS(110),
    [aux_sym_core_token151] = ACTIONS(110),
    [aux_sym_core_token152] = ACTIONS(110),
    [aux_sym_core_token153] = ACTIONS(110),
    [aux_sym_core_token154] = ACTIONS(110),
    [aux_sym_core_token155] = ACTIONS(110),
    [aux_sym_core_token156] = ACTIONS(110),
    [aux_sym_core_token157] = ACTIONS(110),
    [aux_sym_core_token158] = ACTIONS(110),
    [aux_sym_core_token159] = ACTIONS(110),
    [aux_sym_core_token160] = ACTIONS(108),
    [aux_sym_core_token161] = ACTIONS(110),
    [aux_sym_core_token162] = ACTIONS(110),
    [aux_sym_core_token163] = ACTIONS(110),
    [aux_sym_core_token164] = ACTIONS(110),
    [aux_sym_core_token165] = ACTIONS(110),
    [aux_sym_core_token166] = ACTIONS(110),
    [aux_sym_core_token167] = ACTIONS(108),
    [aux_sym_core_token168] = ACTIONS(110),
    [aux_sym_core_token169] = ACTIONS(110),
    [aux_sym_core_token170] = ACTIONS(110),
    [aux_sym_core_token171] = ACTIONS(110),
    [aux_sym_core_token172] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_PLUS] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_STAR] = ACTIONS(110),
    [anon_sym_STAR_SLASH] = ACTIONS(110),
    [anon_sym_GT] = ACTIONS(110),
    [anon_sym_LT] = ACTIONS(110),
    [sym_word] = ACTIONS(110),
    [sym_start_definition] = ACTIONS(110),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_comment] = ACTIONS(112),
    [sym_string] = ACTIONS(112),
    [sym_number] = ACTIONS(114),
    [aux_sym_core_token1] = ACTIONS(114),
    [aux_sym_core_token2] = ACTIONS(114),
    [aux_sym_core_token3] = ACTIONS(114),
    [aux_sym_core_token4] = ACTIONS(112),
    [aux_sym_core_token5] = ACTIONS(114),
    [aux_sym_core_token6] = ACTIONS(112),
    [aux_sym_core_token7] = ACTIONS(114),
    [aux_sym_core_token8] = ACTIONS(114),
    [aux_sym_core_token9] = ACTIONS(114),
    [aux_sym_core_token10] = ACTIONS(112),
    [aux_sym_core_token11] = ACTIONS(114),
    [aux_sym_core_token12] = ACTIONS(112),
    [aux_sym_core_token13] = ACTIONS(114),
    [aux_sym_core_token14] = ACTIONS(114),
    [aux_sym_core_token15] = ACTIONS(112),
    [aux_sym_core_token16] = ACTIONS(114),
    [aux_sym_core_token17] = ACTIONS(114),
    [aux_sym_core_token18] = ACTIONS(114),
    [aux_sym_core_token19] = ACTIONS(114),
    [aux_sym_core_token20] = ACTIONS(114),
    [aux_sym_core_token21] = ACTIONS(114),
    [aux_sym_core_token22] = ACTIONS(114),
    [aux_sym_core_token23] = ACTIONS(114),
    [aux_sym_core_token24] = ACTIONS(114),
    [aux_sym_core_token25] = ACTIONS(114),
    [aux_sym_core_token26] = ACTIONS(112),
    [aux_sym_core_token27] = ACTIONS(112),
    [aux_sym_core_token28] = ACTIONS(112),
    [aux_sym_core_token29] = ACTIONS(112),
    [aux_sym_core_token30] = ACTIONS(112),
    [aux_sym_core_token31] = ACTIONS(114),
    [aux_sym_core_token32] = ACTIONS(114),
    [aux_sym_core_token33] = ACTIONS(114),
    [aux_sym_core_token34] = ACTIONS(112),
    [aux_sym_core_token35] = ACTIONS(114),
    [aux_sym_core_token36] = ACTIONS(114),
    [aux_sym_core_token37] = ACTIONS(114),
    [aux_sym_core_token38] = ACTIONS(114),
    [aux_sym_core_token39] = ACTIONS(114),
    [aux_sym_core_token40] = ACTIONS(114),
    [aux_sym_core_token41] = ACTIONS(114),
    [aux_sym_core_token42] = ACTIONS(114),
    [aux_sym_core_token43] = ACTIONS(114),
    [aux_sym_core_token44] = ACTIONS(114),
    [aux_sym_core_token45] = ACTIONS(112),
    [aux_sym_core_token46] = ACTIONS(114),
    [aux_sym_core_token47] = ACTIONS(114),
    [aux_sym_core_token48] = ACTIONS(114),
    [aux_sym_core_token49] = ACTIONS(114),
    [aux_sym_core_token50] = ACTIONS(114),
    [aux_sym_core_token51] = ACTIONS(114),
    [aux_sym_core_token52] = ACTIONS(114),
    [aux_sym_core_token53] = ACTIONS(114),
    [aux_sym_core_token54] = ACTIONS(114),
    [aux_sym_core_token55] = ACTIONS(114),
    [aux_sym_core_token56] = ACTIONS(114),
    [aux_sym_core_token57] = ACTIONS(114),
    [aux_sym_core_token58] = ACTIONS(114),
    [aux_sym_core_token59] = ACTIONS(112),
    [aux_sym_core_token60] = ACTIONS(114),
    [aux_sym_core_token61] = ACTIONS(114),
    [aux_sym_core_token62] = ACTIONS(114),
    [aux_sym_core_token63] = ACTIONS(114),
    [aux_sym_core_token64] = ACTIONS(114),
    [aux_sym_core_token65] = ACTIONS(114),
    [aux_sym_core_token66] = ACTIONS(114),
    [aux_sym_core_token67] = ACTIONS(114),
    [aux_sym_core_token68] = ACTIONS(114),
    [aux_sym_core_token69] = ACTIONS(114),
    [aux_sym_core_token70] = ACTIONS(114),
    [aux_sym_core_token71] = ACTIONS(114),
    [aux_sym_core_token72] = ACTIONS(114),
    [aux_sym_core_token73] = ACTIONS(114),
    [aux_sym_core_token74] = ACTIONS(114),
    [aux_sym_core_token75] = ACTIONS(114),
    [aux_sym_core_token76] = ACTIONS(114),
    [aux_sym_core_token77] = ACTIONS(114),
    [aux_sym_core_token78] = ACTIONS(114),
    [aux_sym_core_token79] = ACTIONS(114),
    [aux_sym_core_token80] = ACTIONS(114),
    [aux_sym_core_token81] = ACTIONS(114),
    [aux_sym_core_token82] = ACTIONS(114),
    [aux_sym_core_token83] = ACTIONS(114),
    [aux_sym_core_token84] = ACTIONS(114),
    [aux_sym_core_token85] = ACTIONS(114),
    [aux_sym_core_token86] = ACTIONS(114),
    [aux_sym_core_token87] = ACTIONS(114),
    [aux_sym_core_token88] = ACTIONS(114),
    [aux_sym_core_token89] = ACTIONS(114),
    [aux_sym_core_token90] = ACTIONS(114),
    [aux_sym_core_token91] = ACTIONS(114),
    [aux_sym_core_token92] = ACTIONS(114),
    [aux_sym_core_token93] = ACTIONS(112),
    [aux_sym_core_token94] = ACTIONS(114),
    [aux_sym_core_token95] = ACTIONS(114),
    [aux_sym_core_token96] = ACTIONS(114),
    [aux_sym_core_token97] = ACTIONS(114),
    [aux_sym_core_token98] = ACTIONS(114),
    [aux_sym_core_token99] = ACTIONS(114),
    [aux_sym_core_token100] = ACTIONS(112),
    [aux_sym_core_token101] = ACTIONS(114),
    [aux_sym_core_token102] = ACTIONS(114),
    [aux_sym_core_token103] = ACTIONS(114),
    [aux_sym_core_token104] = ACTIONS(114),
    [aux_sym_core_token105] = ACTIONS(114),
    [aux_sym_core_token106] = ACTIONS(114),
    [aux_sym_core_token107] = ACTIONS(114),
    [aux_sym_core_token108] = ACTIONS(114),
    [aux_sym_core_token109] = ACTIONS(114),
    [aux_sym_core_token110] = ACTIONS(114),
    [aux_sym_core_token111] = ACTIONS(112),
    [aux_sym_core_token112] = ACTIONS(114),
    [aux_sym_core_token113] = ACTIONS(114),
    [aux_sym_core_token114] = ACTIONS(114),
    [aux_sym_core_token115] = ACTIONS(114),
    [aux_sym_core_token116] = ACTIONS(114),
    [aux_sym_core_token117] = ACTIONS(114),
    [aux_sym_core_token118] = ACTIONS(114),
    [aux_sym_core_token119] = ACTIONS(114),
    [aux_sym_core_token120] = ACTIONS(114),
    [aux_sym_core_token121] = ACTIONS(112),
    [aux_sym_core_token122] = ACTIONS(114),
    [aux_sym_core_token123] = ACTIONS(112),
    [aux_sym_core_token124] = ACTIONS(114),
    [aux_sym_core_token125] = ACTIONS(114),
    [aux_sym_core_token126] = ACTIONS(112),
    [aux_sym_core_token127] = ACTIONS(112),
    [aux_sym_core_token128] = ACTIONS(112),
    [aux_sym_core_token129] = ACTIONS(112),
    [aux_sym_core_token130] = ACTIONS(114),
    [aux_sym_core_token131] = ACTIONS(112),
    [aux_sym_core_token132] = ACTIONS(112),
    [aux_sym_core_token133] = ACTIONS(114),
    [aux_sym_core_token134] = ACTIONS(114),
    [aux_sym_core_token135] = ACTIONS(114),
    [aux_sym_core_token136] = ACTIONS(112),
    [aux_sym_core_token137] = ACTIONS(112),
    [aux_sym_core_token138] = ACTIONS(114),
    [aux_sym_core_token139] = ACTIONS(112),
    [aux_sym_core_token140] = ACTIONS(114),
    [aux_sym_core_token141] = ACTIONS(114),
    [aux_sym_core_token142] = ACTIONS(114),
    [aux_sym_core_token143] = ACTIONS(114),
    [aux_sym_core_token144] = ACTIONS(114),
    [aux_sym_core_token145] = ACTIONS(114),
    [aux_sym_core_token146] = ACTIONS(114),
    [aux_sym_core_token147] = ACTIONS(114),
    [aux_sym_core_token148] = ACTIONS(114),
    [aux_sym_core_token149] = ACTIONS(114),
    [aux_sym_core_token150] = ACTIONS(114),
    [aux_sym_core_token151] = ACTIONS(114),
    [aux_sym_core_token152] = ACTIONS(114),
    [aux_sym_core_token153] = ACTIONS(114),
    [aux_sym_core_token154] = ACTIONS(114),
    [aux_sym_core_token155] = ACTIONS(114),
    [aux_sym_core_token156] = ACTIONS(114),
    [aux_sym_core_token157] = ACTIONS(114),
    [aux_sym_core_token158] = ACTIONS(114),
    [aux_sym_core_token159] = ACTIONS(114),
    [aux_sym_core_token160] = ACTIONS(112),
    [aux_sym_core_token161] = ACTIONS(114),
    [aux_sym_core_token162] = ACTIONS(114),
    [aux_sym_core_token163] = ACTIONS(114),
    [aux_sym_core_token164] = ACTIONS(114),
    [aux_sym_core_token165] = ACTIONS(114),
    [aux_sym_core_token166] = ACTIONS(114),
    [aux_sym_core_token167] = ACTIONS(112),
    [aux_sym_core_token168] = ACTIONS(114),
    [aux_sym_core_token169] = ACTIONS(114),
    [aux_sym_core_token170] = ACTIONS(114),
    [aux_sym_core_token171] = ACTIONS(114),
    [aux_sym_core_token172] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_STAR_SLASH] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(114),
    [sym_word] = ACTIONS(114),
    [sym_start_definition] = ACTIONS(114),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_comment] = ACTIONS(116),
    [sym_string] = ACTIONS(116),
    [sym_number] = ACTIONS(118),
    [aux_sym_core_token1] = ACTIONS(118),
    [aux_sym_core_token2] = ACTIONS(118),
    [aux_sym_core_token3] = ACTIONS(118),
    [aux_sym_core_token4] = ACTIONS(116),
    [aux_sym_core_token5] = ACTIONS(118),
    [aux_sym_core_token6] = ACTIONS(116),
    [aux_sym_core_token7] = ACTIONS(118),
    [aux_sym_core_token8] = ACTIONS(118),
    [aux_sym_core_token9] = ACTIONS(118),
    [aux_sym_core_token10] = ACTIONS(116),
    [aux_sym_core_token11] = ACTIONS(118),
    [aux_sym_core_token12] = ACTIONS(116),
    [aux_sym_core_token13] = ACTIONS(118),
    [aux_sym_core_token14] = ACTIONS(118),
    [aux_sym_core_token15] = ACTIONS(116),
    [aux_sym_core_token16] = ACTIONS(118),
    [aux_sym_core_token17] = ACTIONS(118),
    [aux_sym_core_token18] = ACTIONS(118),
    [aux_sym_core_token19] = ACTIONS(118),
    [aux_sym_core_token20] = ACTIONS(118),
    [aux_sym_core_token21] = ACTIONS(118),
    [aux_sym_core_token22] = ACTIONS(118),
    [aux_sym_core_token23] = ACTIONS(118),
    [aux_sym_core_token24] = ACTIONS(118),
    [aux_sym_core_token25] = ACTIONS(118),
    [aux_sym_core_token26] = ACTIONS(116),
    [aux_sym_core_token27] = ACTIONS(116),
    [aux_sym_core_token28] = ACTIONS(116),
    [aux_sym_core_token29] = ACTIONS(116),
    [aux_sym_core_token30] = ACTIONS(116),
    [aux_sym_core_token31] = ACTIONS(118),
    [aux_sym_core_token32] = ACTIONS(118),
    [aux_sym_core_token33] = ACTIONS(118),
    [aux_sym_core_token34] = ACTIONS(116),
    [aux_sym_core_token35] = ACTIONS(118),
    [aux_sym_core_token36] = ACTIONS(118),
    [aux_sym_core_token37] = ACTIONS(118),
    [aux_sym_core_token38] = ACTIONS(118),
    [aux_sym_core_token39] = ACTIONS(118),
    [aux_sym_core_token40] = ACTIONS(118),
    [aux_sym_core_token41] = ACTIONS(118),
    [aux_sym_core_token42] = ACTIONS(118),
    [aux_sym_core_token43] = ACTIONS(118),
    [aux_sym_core_token44] = ACTIONS(118),
    [aux_sym_core_token45] = ACTIONS(116),
    [aux_sym_core_token46] = ACTIONS(118),
    [aux_sym_core_token47] = ACTIONS(118),
    [aux_sym_core_token48] = ACTIONS(118),
    [aux_sym_core_token49] = ACTIONS(118),
    [aux_sym_core_token50] = ACTIONS(118),
    [aux_sym_core_token51] = ACTIONS(118),
    [aux_sym_core_token52] = ACTIONS(118),
    [aux_sym_core_token53] = ACTIONS(118),
    [aux_sym_core_token54] = ACTIONS(118),
    [aux_sym_core_token55] = ACTIONS(118),
    [aux_sym_core_token56] = ACTIONS(118),
    [aux_sym_core_token57] = ACTIONS(118),
    [aux_sym_core_token58] = ACTIONS(118),
    [aux_sym_core_token59] = ACTIONS(116),
    [aux_sym_core_token60] = ACTIONS(118),
    [aux_sym_core_token61] = ACTIONS(118),
    [aux_sym_core_token62] = ACTIONS(118),
    [aux_sym_core_token63] = ACTIONS(118),
    [aux_sym_core_token64] = ACTIONS(118),
    [aux_sym_core_token65] = ACTIONS(118),
    [aux_sym_core_token66] = ACTIONS(118),
    [aux_sym_core_token67] = ACTIONS(118),
    [aux_sym_core_token68] = ACTIONS(118),
    [aux_sym_core_token69] = ACTIONS(118),
    [aux_sym_core_token70] = ACTIONS(118),
    [aux_sym_core_token71] = ACTIONS(118),
    [aux_sym_core_token72] = ACTIONS(118),
    [aux_sym_core_token73] = ACTIONS(118),
    [aux_sym_core_token74] = ACTIONS(118),
    [aux_sym_core_token75] = ACTIONS(118),
    [aux_sym_core_token76] = ACTIONS(118),
    [aux_sym_core_token77] = ACTIONS(118),
    [aux_sym_core_token78] = ACTIONS(118),
    [aux_sym_core_token79] = ACTIONS(118),
    [aux_sym_core_token80] = ACTIONS(118),
    [aux_sym_core_token81] = ACTIONS(118),
    [aux_sym_core_token82] = ACTIONS(118),
    [aux_sym_core_token83] = ACTIONS(118),
    [aux_sym_core_token84] = ACTIONS(118),
    [aux_sym_core_token85] = ACTIONS(118),
    [aux_sym_core_token86] = ACTIONS(118),
    [aux_sym_core_token87] = ACTIONS(118),
    [aux_sym_core_token88] = ACTIONS(118),
    [aux_sym_core_token89] = ACTIONS(118),
    [aux_sym_core_token90] = ACTIONS(118),
    [aux_sym_core_token91] = ACTIONS(118),
    [aux_sym_core_token92] = ACTIONS(118),
    [aux_sym_core_token93] = ACTIONS(116),
    [aux_sym_core_token94] = ACTIONS(118),
    [aux_sym_core_token95] = ACTIONS(118),
    [aux_sym_core_token96] = ACTIONS(118),
    [aux_sym_core_token97] = ACTIONS(118),
    [aux_sym_core_token98] = ACTIONS(118),
    [aux_sym_core_token99] = ACTIONS(118),
    [aux_sym_core_token100] = ACTIONS(116),
    [aux_sym_core_token101] = ACTIONS(118),
    [aux_sym_core_token102] = ACTIONS(118),
    [aux_sym_core_token103] = ACTIONS(118),
    [aux_sym_core_token104] = ACTIONS(118),
    [aux_sym_core_token105] = ACTIONS(118),
    [aux_sym_core_token106] = ACTIONS(118),
    [aux_sym_core_token107] = ACTIONS(118),
    [aux_sym_core_token108] = ACTIONS(118),
    [aux_sym_core_token109] = ACTIONS(118),
    [aux_sym_core_token110] = ACTIONS(118),
    [aux_sym_core_token111] = ACTIONS(116),
    [aux_sym_core_token112] = ACTIONS(118),
    [aux_sym_core_token113] = ACTIONS(118),
    [aux_sym_core_token114] = ACTIONS(118),
    [aux_sym_core_token115] = ACTIONS(118),
    [aux_sym_core_token116] = ACTIONS(118),
    [aux_sym_core_token117] = ACTIONS(118),
    [aux_sym_core_token118] = ACTIONS(118),
    [aux_sym_core_token119] = ACTIONS(118),
    [aux_sym_core_token120] = ACTIONS(118),
    [aux_sym_core_token121] = ACTIONS(116),
    [aux_sym_core_token122] = ACTIONS(118),
    [aux_sym_core_token123] = ACTIONS(116),
    [aux_sym_core_token124] = ACTIONS(118),
    [aux_sym_core_token125] = ACTIONS(118),
    [aux_sym_core_token126] = ACTIONS(116),
    [aux_sym_core_token127] = ACTIONS(116),
    [aux_sym_core_token128] = ACTIONS(116),
    [aux_sym_core_token129] = ACTIONS(116),
    [aux_sym_core_token130] = ACTIONS(118),
    [aux_sym_core_token131] = ACTIONS(116),
    [aux_sym_core_token132] = ACTIONS(116),
    [aux_sym_core_token133] = ACTIONS(118),
    [aux_sym_core_token134] = ACTIONS(118),
    [aux_sym_core_token135] = ACTIONS(118),
    [aux_sym_core_token136] = ACTIONS(116),
    [aux_sym_core_token137] = ACTIONS(116),
    [aux_sym_core_token138] = ACTIONS(118),
    [aux_sym_core_token139] = ACTIONS(116),
    [aux_sym_core_token140] = ACTIONS(118),
    [aux_sym_core_token141] = ACTIONS(118),
    [aux_sym_core_token142] = ACTIONS(118),
    [aux_sym_core_token143] = ACTIONS(118),
    [aux_sym_core_token144] = ACTIONS(118),
    [aux_sym_core_token145] = ACTIONS(118),
    [aux_sym_core_token146] = ACTIONS(118),
    [aux_sym_core_token147] = ACTIONS(118),
    [aux_sym_core_token148] = ACTIONS(118),
    [aux_sym_core_token149] = ACTIONS(118),
    [aux_sym_core_token150] = ACTIONS(118),
    [aux_sym_core_token151] = ACTIONS(118),
    [aux_sym_core_token152] = ACTIONS(118),
    [aux_sym_core_token153] = ACTIONS(118),
    [aux_sym_core_token154] = ACTIONS(118),
    [aux_sym_core_token155] = ACTIONS(118),
    [aux_sym_core_token156] = ACTIONS(118),
    [aux_sym_core_token157] = ACTIONS(118),
    [aux_sym_core_token158] = ACTIONS(118),
    [aux_sym_core_token159] = ACTIONS(118),
    [aux_sym_core_token160] = ACTIONS(116),
    [aux_sym_core_token161] = ACTIONS(118),
    [aux_sym_core_token162] = ACTIONS(118),
    [aux_sym_core_token163] = ACTIONS(118),
    [aux_sym_core_token164] = ACTIONS(118),
    [aux_sym_core_token165] = ACTIONS(118),
    [aux_sym_core_token166] = ACTIONS(118),
    [aux_sym_core_token167] = ACTIONS(116),
    [aux_sym_core_token168] = ACTIONS(118),
    [aux_sym_core_token169] = ACTIONS(118),
    [aux_sym_core_token170] = ACTIONS(118),
    [aux_sym_core_token171] = ACTIONS(118),
    [aux_sym_core_token172] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(118),
    [anon_sym_DASH] = ACTIONS(118),
    [anon_sym_SLASH] = ACTIONS(118),
    [anon_sym_STAR] = ACTIONS(118),
    [anon_sym_STAR_SLASH] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(118),
    [anon_sym_LT] = ACTIONS(118),
    [sym_word] = ACTIONS(118),
    [sym_start_definition] = ACTIONS(118),
  },
  [15] = {
    [sym_comment] = ACTIONS(100),
    [sym_number] = ACTIONS(102),
    [aux_sym_core_token1] = ACTIONS(102),
    [aux_sym_core_token2] = ACTIONS(102),
    [aux_sym_core_token3] = ACTIONS(102),
    [aux_sym_core_token4] = ACTIONS(100),
    [aux_sym_core_token5] = ACTIONS(102),
    [aux_sym_core_token6] = ACTIONS(100),
    [aux_sym_core_token7] = ACTIONS(102),
    [aux_sym_core_token8] = ACTIONS(102),
    [aux_sym_core_token9] = ACTIONS(102),
    [aux_sym_core_token10] = ACTIONS(100),
    [aux_sym_core_token11] = ACTIONS(102),
    [aux_sym_core_token12] = ACTIONS(100),
    [aux_sym_core_token13] = ACTIONS(102),
    [aux_sym_core_token14] = ACTIONS(102),
    [aux_sym_core_token15] = ACTIONS(100),
    [aux_sym_core_token16] = ACTIONS(102),
    [aux_sym_core_token17] = ACTIONS(102),
    [aux_sym_core_token18] = ACTIONS(102),
    [aux_sym_core_token19] = ACTIONS(102),
    [aux_sym_core_token20] = ACTIONS(102),
    [aux_sym_core_token21] = ACTIONS(102),
    [aux_sym_core_token22] = ACTIONS(102),
    [aux_sym_core_token23] = ACTIONS(102),
    [aux_sym_core_token24] = ACTIONS(102),
    [aux_sym_core_token25] = ACTIONS(102),
    [aux_sym_core_token26] = ACTIONS(100),
    [aux_sym_core_token27] = ACTIONS(100),
    [aux_sym_core_token28] = ACTIONS(100),
    [aux_sym_core_token29] = ACTIONS(100),
    [aux_sym_core_token30] = ACTIONS(100),
    [aux_sym_core_token31] = ACTIONS(102),
    [aux_sym_core_token32] = ACTIONS(102),
    [aux_sym_core_token33] = ACTIONS(102),
    [aux_sym_core_token34] = ACTIONS(100),
    [aux_sym_core_token35] = ACTIONS(102),
    [aux_sym_core_token36] = ACTIONS(102),
    [aux_sym_core_token37] = ACTIONS(102),
    [aux_sym_core_token38] = ACTIONS(102),
    [aux_sym_core_token39] = ACTIONS(102),
    [aux_sym_core_token40] = ACTIONS(102),
    [aux_sym_core_token41] = ACTIONS(102),
    [aux_sym_core_token42] = ACTIONS(102),
    [aux_sym_core_token43] = ACTIONS(102),
    [aux_sym_core_token44] = ACTIONS(102),
    [aux_sym_core_token45] = ACTIONS(100),
    [aux_sym_core_token46] = ACTIONS(102),
    [aux_sym_core_token47] = ACTIONS(102),
    [aux_sym_core_token48] = ACTIONS(102),
    [aux_sym_core_token49] = ACTIONS(102),
    [aux_sym_core_token50] = ACTIONS(102),
    [aux_sym_core_token51] = ACTIONS(102),
    [aux_sym_core_token52] = ACTIONS(102),
    [aux_sym_core_token53] = ACTIONS(102),
    [aux_sym_core_token54] = ACTIONS(102),
    [aux_sym_core_token55] = ACTIONS(102),
    [aux_sym_core_token56] = ACTIONS(102),
    [aux_sym_core_token57] = ACTIONS(102),
    [aux_sym_core_token58] = ACTIONS(102),
    [aux_sym_core_token59] = ACTIONS(100),
    [aux_sym_core_token60] = ACTIONS(102),
    [aux_sym_core_token61] = ACTIONS(102),
    [aux_sym_core_token62] = ACTIONS(102),
    [aux_sym_core_token63] = ACTIONS(102),
    [aux_sym_core_token64] = ACTIONS(102),
    [aux_sym_core_token65] = ACTIONS(102),
    [aux_sym_core_token66] = ACTIONS(102),
    [aux_sym_core_token67] = ACTIONS(102),
    [aux_sym_core_token68] = ACTIONS(102),
    [aux_sym_core_token69] = ACTIONS(102),
    [aux_sym_core_token70] = ACTIONS(102),
    [aux_sym_core_token71] = ACTIONS(102),
    [aux_sym_core_token72] = ACTIONS(102),
    [aux_sym_core_token73] = ACTIONS(102),
    [aux_sym_core_token74] = ACTIONS(102),
    [aux_sym_core_token75] = ACTIONS(102),
    [aux_sym_core_token76] = ACTIONS(102),
    [aux_sym_core_token77] = ACTIONS(102),
    [aux_sym_core_token78] = ACTIONS(102),
    [aux_sym_core_token79] = ACTIONS(102),
    [aux_sym_core_token80] = ACTIONS(102),
    [aux_sym_core_token81] = ACTIONS(102),
    [aux_sym_core_token82] = ACTIONS(102),
    [aux_sym_core_token83] = ACTIONS(102),
    [aux_sym_core_token84] = ACTIONS(102),
    [aux_sym_core_token85] = ACTIONS(102),
    [aux_sym_core_token86] = ACTIONS(102),
    [aux_sym_core_token87] = ACTIONS(102),
    [aux_sym_core_token88] = ACTIONS(102),
    [aux_sym_core_token89] = ACTIONS(102),
    [aux_sym_core_token90] = ACTIONS(102),
    [aux_sym_core_token91] = ACTIONS(102),
    [aux_sym_core_token92] = ACTIONS(102),
    [aux_sym_core_token93] = ACTIONS(100),
    [aux_sym_core_token94] = ACTIONS(102),
    [aux_sym_core_token95] = ACTIONS(102),
    [aux_sym_core_token96] = ACTIONS(102),
    [aux_sym_core_token97] = ACTIONS(102),
    [aux_sym_core_token98] = ACTIONS(102),
    [aux_sym_core_token99] = ACTIONS(100),
    [aux_sym_core_token100] = ACTIONS(100),
    [aux_sym_core_token101] = ACTIONS(102),
    [aux_sym_core_token102] = ACTIONS(102),
    [aux_sym_core_token103] = ACTIONS(102),
    [aux_sym_core_token104] = ACTIONS(102),
    [aux_sym_core_token105] = ACTIONS(102),
    [aux_sym_core_token106] = ACTIONS(102),
    [aux_sym_core_token107] = ACTIONS(102),
    [aux_sym_core_token108] = ACTIONS(102),
    [aux_sym_core_token109] = ACTIONS(102),
    [aux_sym_core_token110] = ACTIONS(102),
    [aux_sym_core_token111] = ACTIONS(100),
    [aux_sym_core_token112] = ACTIONS(102),
    [aux_sym_core_token113] = ACTIONS(102),
    [aux_sym_core_token114] = ACTIONS(102),
    [aux_sym_core_token115] = ACTIONS(102),
    [aux_sym_core_token116] = ACTIONS(102),
    [aux_sym_core_token117] = ACTIONS(102),
    [aux_sym_core_token118] = ACTIONS(102),
    [aux_sym_core_token119] = ACTIONS(102),
    [aux_sym_core_token120] = ACTIONS(102),
    [aux_sym_core_token121] = ACTIONS(100),
    [aux_sym_core_token122] = ACTIONS(102),
    [aux_sym_core_token123] = ACTIONS(100),
    [aux_sym_core_token124] = ACTIONS(102),
    [aux_sym_core_token125] = ACTIONS(102),
    [aux_sym_core_token126] = ACTIONS(100),
    [aux_sym_core_token127] = ACTIONS(100),
    [aux_sym_core_token128] = ACTIONS(100),
    [aux_sym_core_token129] = ACTIONS(100),
    [aux_sym_core_token130] = ACTIONS(102),
    [aux_sym_core_token131] = ACTIONS(100),
    [aux_sym_core_token132] = ACTIONS(100),
    [aux_sym_core_token133] = ACTIONS(102),
    [aux_sym_core_token134] = ACTIONS(102),
    [aux_sym_core_token135] = ACTIONS(102),
    [aux_sym_core_token136] = ACTIONS(100),
    [aux_sym_core_token137] = ACTIONS(100),
    [aux_sym_core_token138] = ACTIONS(102),
    [aux_sym_core_token139] = ACTIONS(100),
    [aux_sym_core_token140] = ACTIONS(102),
    [aux_sym_core_token141] = ACTIONS(102),
    [aux_sym_core_token142] = ACTIONS(102),
    [aux_sym_core_token143] = ACTIONS(102),
    [aux_sym_core_token144] = ACTIONS(102),
    [aux_sym_core_token145] = ACTIONS(102),
    [aux_sym_core_token146] = ACTIONS(102),
    [aux_sym_core_token147] = ACTIONS(102),
    [aux_sym_core_token148] = ACTIONS(102),
    [aux_sym_core_token149] = ACTIONS(102),
    [aux_sym_core_token150] = ACTIONS(102),
    [aux_sym_core_token151] = ACTIONS(102),
    [aux_sym_core_token152] = ACTIONS(102),
    [aux_sym_core_token153] = ACTIONS(102),
    [aux_sym_core_token154] = ACTIONS(102),
    [aux_sym_core_token155] = ACTIONS(102),
    [aux_sym_core_token156] = ACTIONS(102),
    [aux_sym_core_token157] = ACTIONS(102),
    [aux_sym_core_token158] = ACTIONS(102),
    [aux_sym_core_token159] = ACTIONS(102),
    [aux_sym_core_token160] = ACTIONS(100),
    [aux_sym_core_token161] = ACTIONS(102),
    [aux_sym_core_token162] = ACTIONS(102),
    [aux_sym_core_token163] = ACTIONS(102),
    [aux_sym_core_token164] = ACTIONS(102),
    [aux_sym_core_token165] = ACTIONS(102),
    [aux_sym_core_token166] = ACTIONS(102),
    [aux_sym_core_token167] = ACTIONS(100),
    [aux_sym_core_token168] = ACTIONS(102),
    [aux_sym_core_token169] = ACTIONS(102),
    [aux_sym_core_token170] = ACTIONS(102),
    [aux_sym_core_token171] = ACTIONS(102),
    [aux_sym_core_token172] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_STAR_SLASH] = ACTIONS(102),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(102),
    [sym_word] = ACTIONS(102),
    [sym_end_definition] = ACTIONS(100),
  },
  [16] = {
    [sym_comment] = ACTIONS(120),
    [sym_number] = ACTIONS(122),
    [aux_sym_core_token1] = ACTIONS(122),
    [aux_sym_core_token2] = ACTIONS(122),
    [aux_sym_core_token3] = ACTIONS(122),
    [aux_sym_core_token4] = ACTIONS(120),
    [aux_sym_core_token5] = ACTIONS(122),
    [aux_sym_core_token6] = ACTIONS(120),
    [aux_sym_core_token7] = ACTIONS(122),
    [aux_sym_core_token8] = ACTIONS(122),
    [aux_sym_core_token9] = ACTIONS(122),
    [aux_sym_core_token10] = ACTIONS(120),
    [aux_sym_core_token11] = ACTIONS(122),
    [aux_sym_core_token12] = ACTIONS(120),
    [aux_sym_core_token13] = ACTIONS(122),
    [aux_sym_core_token14] = ACTIONS(122),
    [aux_sym_core_token15] = ACTIONS(120),
    [aux_sym_core_token16] = ACTIONS(122),
    [aux_sym_core_token17] = ACTIONS(122),
    [aux_sym_core_token18] = ACTIONS(122),
    [aux_sym_core_token19] = ACTIONS(122),
    [aux_sym_core_token20] = ACTIONS(122),
    [aux_sym_core_token21] = ACTIONS(122),
    [aux_sym_core_token22] = ACTIONS(122),
    [aux_sym_core_token23] = ACTIONS(122),
    [aux_sym_core_token24] = ACTIONS(122),
    [aux_sym_core_token25] = ACTIONS(122),
    [aux_sym_core_token26] = ACTIONS(120),
    [aux_sym_core_token27] = ACTIONS(120),
    [aux_sym_core_token28] = ACTIONS(120),
    [aux_sym_core_token29] = ACTIONS(120),
    [aux_sym_core_token30] = ACTIONS(120),
    [aux_sym_core_token31] = ACTIONS(122),
    [aux_sym_core_token32] = ACTIONS(122),
    [aux_sym_core_token33] = ACTIONS(122),
    [aux_sym_core_token34] = ACTIONS(120),
    [aux_sym_core_token35] = ACTIONS(122),
    [aux_sym_core_token36] = ACTIONS(122),
    [aux_sym_core_token37] = ACTIONS(122),
    [aux_sym_core_token38] = ACTIONS(122),
    [aux_sym_core_token39] = ACTIONS(122),
    [aux_sym_core_token40] = ACTIONS(122),
    [aux_sym_core_token41] = ACTIONS(122),
    [aux_sym_core_token42] = ACTIONS(122),
    [aux_sym_core_token43] = ACTIONS(122),
    [aux_sym_core_token44] = ACTIONS(122),
    [aux_sym_core_token45] = ACTIONS(120),
    [aux_sym_core_token46] = ACTIONS(122),
    [aux_sym_core_token47] = ACTIONS(122),
    [aux_sym_core_token48] = ACTIONS(122),
    [aux_sym_core_token49] = ACTIONS(122),
    [aux_sym_core_token50] = ACTIONS(122),
    [aux_sym_core_token51] = ACTIONS(122),
    [aux_sym_core_token52] = ACTIONS(122),
    [aux_sym_core_token53] = ACTIONS(122),
    [aux_sym_core_token54] = ACTIONS(122),
    [aux_sym_core_token55] = ACTIONS(122),
    [aux_sym_core_token56] = ACTIONS(122),
    [aux_sym_core_token57] = ACTIONS(122),
    [aux_sym_core_token58] = ACTIONS(122),
    [aux_sym_core_token59] = ACTIONS(120),
    [aux_sym_core_token60] = ACTIONS(122),
    [aux_sym_core_token61] = ACTIONS(122),
    [aux_sym_core_token62] = ACTIONS(122),
    [aux_sym_core_token63] = ACTIONS(122),
    [aux_sym_core_token64] = ACTIONS(122),
    [aux_sym_core_token65] = ACTIONS(122),
    [aux_sym_core_token66] = ACTIONS(122),
    [aux_sym_core_token67] = ACTIONS(122),
    [aux_sym_core_token68] = ACTIONS(122),
    [aux_sym_core_token69] = ACTIONS(122),
    [aux_sym_core_token70] = ACTIONS(122),
    [aux_sym_core_token71] = ACTIONS(122),
    [aux_sym_core_token72] = ACTIONS(122),
    [aux_sym_core_token73] = ACTIONS(122),
    [aux_sym_core_token74] = ACTIONS(122),
    [aux_sym_core_token75] = ACTIONS(122),
    [aux_sym_core_token76] = ACTIONS(122),
    [aux_sym_core_token77] = ACTIONS(122),
    [aux_sym_core_token78] = ACTIONS(122),
    [aux_sym_core_token79] = ACTIONS(122),
    [aux_sym_core_token80] = ACTIONS(122),
    [aux_sym_core_token81] = ACTIONS(122),
    [aux_sym_core_token82] = ACTIONS(122),
    [aux_sym_core_token83] = ACTIONS(122),
    [aux_sym_core_token84] = ACTIONS(122),
    [aux_sym_core_token85] = ACTIONS(122),
    [aux_sym_core_token86] = ACTIONS(122),
    [aux_sym_core_token87] = ACTIONS(122),
    [aux_sym_core_token88] = ACTIONS(122),
    [aux_sym_core_token89] = ACTIONS(122),
    [aux_sym_core_token90] = ACTIONS(122),
    [aux_sym_core_token91] = ACTIONS(122),
    [aux_sym_core_token92] = ACTIONS(122),
    [aux_sym_core_token93] = ACTIONS(120),
    [aux_sym_core_token94] = ACTIONS(122),
    [aux_sym_core_token95] = ACTIONS(122),
    [aux_sym_core_token96] = ACTIONS(122),
    [aux_sym_core_token97] = ACTIONS(122),
    [aux_sym_core_token98] = ACTIONS(122),
    [aux_sym_core_token99] = ACTIONS(120),
    [aux_sym_core_token100] = ACTIONS(120),
    [aux_sym_core_token101] = ACTIONS(122),
    [aux_sym_core_token102] = ACTIONS(122),
    [aux_sym_core_token103] = ACTIONS(122),
    [aux_sym_core_token104] = ACTIONS(122),
    [aux_sym_core_token105] = ACTIONS(122),
    [aux_sym_core_token106] = ACTIONS(122),
    [aux_sym_core_token107] = ACTIONS(122),
    [aux_sym_core_token108] = ACTIONS(122),
    [aux_sym_core_token109] = ACTIONS(122),
    [aux_sym_core_token110] = ACTIONS(122),
    [aux_sym_core_token111] = ACTIONS(120),
    [aux_sym_core_token112] = ACTIONS(122),
    [aux_sym_core_token113] = ACTIONS(122),
    [aux_sym_core_token114] = ACTIONS(122),
    [aux_sym_core_token115] = ACTIONS(122),
    [aux_sym_core_token116] = ACTIONS(122),
    [aux_sym_core_token117] = ACTIONS(122),
    [aux_sym_core_token118] = ACTIONS(122),
    [aux_sym_core_token119] = ACTIONS(122),
    [aux_sym_core_token120] = ACTIONS(122),
    [aux_sym_core_token121] = ACTIONS(120),
    [aux_sym_core_token122] = ACTIONS(122),
    [aux_sym_core_token123] = ACTIONS(120),
    [aux_sym_core_token124] = ACTIONS(122),
    [aux_sym_core_token125] = ACTIONS(122),
    [aux_sym_core_token126] = ACTIONS(120),
    [aux_sym_core_token127] = ACTIONS(120),
    [aux_sym_core_token128] = ACTIONS(120),
    [aux_sym_core_token129] = ACTIONS(120),
    [aux_sym_core_token130] = ACTIONS(122),
    [aux_sym_core_token131] = ACTIONS(120),
    [aux_sym_core_token132] = ACTIONS(120),
    [aux_sym_core_token133] = ACTIONS(122),
    [aux_sym_core_token134] = ACTIONS(122),
    [aux_sym_core_token135] = ACTIONS(122),
    [aux_sym_core_token136] = ACTIONS(120),
    [aux_sym_core_token137] = ACTIONS(120),
    [aux_sym_core_token138] = ACTIONS(122),
    [aux_sym_core_token139] = ACTIONS(120),
    [aux_sym_core_token140] = ACTIONS(122),
    [aux_sym_core_token141] = ACTIONS(122),
    [aux_sym_core_token142] = ACTIONS(122),
    [aux_sym_core_token143] = ACTIONS(122),
    [aux_sym_core_token144] = ACTIONS(122),
    [aux_sym_core_token145] = ACTIONS(122),
    [aux_sym_core_token146] = ACTIONS(122),
    [aux_sym_core_token147] = ACTIONS(122),
    [aux_sym_core_token148] = ACTIONS(122),
    [aux_sym_core_token149] = ACTIONS(122),
    [aux_sym_core_token150] = ACTIONS(122),
    [aux_sym_core_token151] = ACTIONS(122),
    [aux_sym_core_token152] = ACTIONS(122),
    [aux_sym_core_token153] = ACTIONS(122),
    [aux_sym_core_token154] = ACTIONS(122),
    [aux_sym_core_token155] = ACTIONS(122),
    [aux_sym_core_token156] = ACTIONS(122),
    [aux_sym_core_token157] = ACTIONS(122),
    [aux_sym_core_token158] = ACTIONS(122),
    [aux_sym_core_token159] = ACTIONS(122),
    [aux_sym_core_token160] = ACTIONS(120),
    [aux_sym_core_token161] = ACTIONS(122),
    [aux_sym_core_token162] = ACTIONS(122),
    [aux_sym_core_token163] = ACTIONS(122),
    [aux_sym_core_token164] = ACTIONS(122),
    [aux_sym_core_token165] = ACTIONS(122),
    [aux_sym_core_token166] = ACTIONS(122),
    [aux_sym_core_token167] = ACTIONS(120),
    [aux_sym_core_token168] = ACTIONS(122),
    [aux_sym_core_token169] = ACTIONS(122),
    [aux_sym_core_token170] = ACTIONS(122),
    [aux_sym_core_token171] = ACTIONS(122),
    [aux_sym_core_token172] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(122),
    [anon_sym_DASH] = ACTIONS(122),
    [anon_sym_SLASH] = ACTIONS(122),
    [anon_sym_STAR] = ACTIONS(122),
    [anon_sym_STAR_SLASH] = ACTIONS(122),
    [anon_sym_GT] = ACTIONS(122),
    [anon_sym_LT] = ACTIONS(122),
    [sym_word] = ACTIONS(122),
    [sym_end_definition] = ACTIONS(120),
  },
  [17] = {
    [sym_comment] = ACTIONS(112),
    [sym_number] = ACTIONS(114),
    [aux_sym_core_token1] = ACTIONS(114),
    [aux_sym_core_token2] = ACTIONS(114),
    [aux_sym_core_token3] = ACTIONS(114),
    [aux_sym_core_token4] = ACTIONS(112),
    [aux_sym_core_token5] = ACTIONS(114),
    [aux_sym_core_token6] = ACTIONS(112),
    [aux_sym_core_token7] = ACTIONS(114),
    [aux_sym_core_token8] = ACTIONS(114),
    [aux_sym_core_token9] = ACTIONS(114),
    [aux_sym_core_token10] = ACTIONS(112),
    [aux_sym_core_token11] = ACTIONS(114),
    [aux_sym_core_token12] = ACTIONS(112),
    [aux_sym_core_token13] = ACTIONS(114),
    [aux_sym_core_token14] = ACTIONS(114),
    [aux_sym_core_token15] = ACTIONS(112),
    [aux_sym_core_token16] = ACTIONS(114),
    [aux_sym_core_token17] = ACTIONS(114),
    [aux_sym_core_token18] = ACTIONS(114),
    [aux_sym_core_token19] = ACTIONS(114),
    [aux_sym_core_token20] = ACTIONS(114),
    [aux_sym_core_token21] = ACTIONS(114),
    [aux_sym_core_token22] = ACTIONS(114),
    [aux_sym_core_token23] = ACTIONS(114),
    [aux_sym_core_token24] = ACTIONS(114),
    [aux_sym_core_token25] = ACTIONS(114),
    [aux_sym_core_token26] = ACTIONS(112),
    [aux_sym_core_token27] = ACTIONS(112),
    [aux_sym_core_token28] = ACTIONS(112),
    [aux_sym_core_token29] = ACTIONS(112),
    [aux_sym_core_token30] = ACTIONS(112),
    [aux_sym_core_token31] = ACTIONS(114),
    [aux_sym_core_token32] = ACTIONS(114),
    [aux_sym_core_token33] = ACTIONS(114),
    [aux_sym_core_token34] = ACTIONS(112),
    [aux_sym_core_token35] = ACTIONS(114),
    [aux_sym_core_token36] = ACTIONS(114),
    [aux_sym_core_token37] = ACTIONS(114),
    [aux_sym_core_token38] = ACTIONS(114),
    [aux_sym_core_token39] = ACTIONS(114),
    [aux_sym_core_token40] = ACTIONS(114),
    [aux_sym_core_token41] = ACTIONS(114),
    [aux_sym_core_token42] = ACTIONS(114),
    [aux_sym_core_token43] = ACTIONS(114),
    [aux_sym_core_token44] = ACTIONS(114),
    [aux_sym_core_token45] = ACTIONS(112),
    [aux_sym_core_token46] = ACTIONS(114),
    [aux_sym_core_token47] = ACTIONS(114),
    [aux_sym_core_token48] = ACTIONS(114),
    [aux_sym_core_token49] = ACTIONS(114),
    [aux_sym_core_token50] = ACTIONS(114),
    [aux_sym_core_token51] = ACTIONS(114),
    [aux_sym_core_token52] = ACTIONS(114),
    [aux_sym_core_token53] = ACTIONS(114),
    [aux_sym_core_token54] = ACTIONS(114),
    [aux_sym_core_token55] = ACTIONS(114),
    [aux_sym_core_token56] = ACTIONS(114),
    [aux_sym_core_token57] = ACTIONS(114),
    [aux_sym_core_token58] = ACTIONS(114),
    [aux_sym_core_token59] = ACTIONS(112),
    [aux_sym_core_token60] = ACTIONS(114),
    [aux_sym_core_token61] = ACTIONS(114),
    [aux_sym_core_token62] = ACTIONS(114),
    [aux_sym_core_token63] = ACTIONS(114),
    [aux_sym_core_token64] = ACTIONS(114),
    [aux_sym_core_token65] = ACTIONS(114),
    [aux_sym_core_token66] = ACTIONS(114),
    [aux_sym_core_token67] = ACTIONS(114),
    [aux_sym_core_token68] = ACTIONS(114),
    [aux_sym_core_token69] = ACTIONS(114),
    [aux_sym_core_token70] = ACTIONS(114),
    [aux_sym_core_token71] = ACTIONS(114),
    [aux_sym_core_token72] = ACTIONS(114),
    [aux_sym_core_token73] = ACTIONS(114),
    [aux_sym_core_token74] = ACTIONS(114),
    [aux_sym_core_token75] = ACTIONS(114),
    [aux_sym_core_token76] = ACTIONS(114),
    [aux_sym_core_token77] = ACTIONS(114),
    [aux_sym_core_token78] = ACTIONS(114),
    [aux_sym_core_token79] = ACTIONS(114),
    [aux_sym_core_token80] = ACTIONS(114),
    [aux_sym_core_token81] = ACTIONS(114),
    [aux_sym_core_token82] = ACTIONS(114),
    [aux_sym_core_token83] = ACTIONS(114),
    [aux_sym_core_token84] = ACTIONS(114),
    [aux_sym_core_token85] = ACTIONS(114),
    [aux_sym_core_token86] = ACTIONS(114),
    [aux_sym_core_token87] = ACTIONS(114),
    [aux_sym_core_token88] = ACTIONS(114),
    [aux_sym_core_token89] = ACTIONS(114),
    [aux_sym_core_token90] = ACTIONS(114),
    [aux_sym_core_token91] = ACTIONS(114),
    [aux_sym_core_token92] = ACTIONS(114),
    [aux_sym_core_token93] = ACTIONS(112),
    [aux_sym_core_token94] = ACTIONS(114),
    [aux_sym_core_token95] = ACTIONS(114),
    [aux_sym_core_token96] = ACTIONS(114),
    [aux_sym_core_token97] = ACTIONS(114),
    [aux_sym_core_token98] = ACTIONS(114),
    [aux_sym_core_token99] = ACTIONS(112),
    [aux_sym_core_token100] = ACTIONS(112),
    [aux_sym_core_token101] = ACTIONS(114),
    [aux_sym_core_token102] = ACTIONS(114),
    [aux_sym_core_token103] = ACTIONS(114),
    [aux_sym_core_token104] = ACTIONS(114),
    [aux_sym_core_token105] = ACTIONS(114),
    [aux_sym_core_token106] = ACTIONS(114),
    [aux_sym_core_token107] = ACTIONS(114),
    [aux_sym_core_token108] = ACTIONS(114),
    [aux_sym_core_token109] = ACTIONS(114),
    [aux_sym_core_token110] = ACTIONS(114),
    [aux_sym_core_token111] = ACTIONS(112),
    [aux_sym_core_token112] = ACTIONS(114),
    [aux_sym_core_token113] = ACTIONS(114),
    [aux_sym_core_token114] = ACTIONS(114),
    [aux_sym_core_token115] = ACTIONS(114),
    [aux_sym_core_token116] = ACTIONS(114),
    [aux_sym_core_token117] = ACTIONS(114),
    [aux_sym_core_token118] = ACTIONS(114),
    [aux_sym_core_token119] = ACTIONS(114),
    [aux_sym_core_token120] = ACTIONS(114),
    [aux_sym_core_token121] = ACTIONS(112),
    [aux_sym_core_token122] = ACTIONS(114),
    [aux_sym_core_token123] = ACTIONS(112),
    [aux_sym_core_token124] = ACTIONS(114),
    [aux_sym_core_token125] = ACTIONS(114),
    [aux_sym_core_token126] = ACTIONS(112),
    [aux_sym_core_token127] = ACTIONS(112),
    [aux_sym_core_token128] = ACTIONS(112),
    [aux_sym_core_token129] = ACTIONS(112),
    [aux_sym_core_token130] = ACTIONS(114),
    [aux_sym_core_token131] = ACTIONS(112),
    [aux_sym_core_token132] = ACTIONS(112),
    [aux_sym_core_token133] = ACTIONS(114),
    [aux_sym_core_token134] = ACTIONS(114),
    [aux_sym_core_token135] = ACTIONS(114),
    [aux_sym_core_token136] = ACTIONS(112),
    [aux_sym_core_token137] = ACTIONS(112),
    [aux_sym_core_token138] = ACTIONS(114),
    [aux_sym_core_token139] = ACTIONS(112),
    [aux_sym_core_token140] = ACTIONS(114),
    [aux_sym_core_token141] = ACTIONS(114),
    [aux_sym_core_token142] = ACTIONS(114),
    [aux_sym_core_token143] = ACTIONS(114),
    [aux_sym_core_token144] = ACTIONS(114),
    [aux_sym_core_token145] = ACTIONS(114),
    [aux_sym_core_token146] = ACTIONS(114),
    [aux_sym_core_token147] = ACTIONS(114),
    [aux_sym_core_token148] = ACTIONS(114),
    [aux_sym_core_token149] = ACTIONS(114),
    [aux_sym_core_token150] = ACTIONS(114),
    [aux_sym_core_token151] = ACTIONS(114),
    [aux_sym_core_token152] = ACTIONS(114),
    [aux_sym_core_token153] = ACTIONS(114),
    [aux_sym_core_token154] = ACTIONS(114),
    [aux_sym_core_token155] = ACTIONS(114),
    [aux_sym_core_token156] = ACTIONS(114),
    [aux_sym_core_token157] = ACTIONS(114),
    [aux_sym_core_token158] = ACTIONS(114),
    [aux_sym_core_token159] = ACTIONS(114),
    [aux_sym_core_token160] = ACTIONS(112),
    [aux_sym_core_token161] = ACTIONS(114),
    [aux_sym_core_token162] = ACTIONS(114),
    [aux_sym_core_token163] = ACTIONS(114),
    [aux_sym_core_token164] = ACTIONS(114),
    [aux_sym_core_token165] = ACTIONS(114),
    [aux_sym_core_token166] = ACTIONS(114),
    [aux_sym_core_token167] = ACTIONS(112),
    [aux_sym_core_token168] = ACTIONS(114),
    [aux_sym_core_token169] = ACTIONS(114),
    [aux_sym_core_token170] = ACTIONS(114),
    [aux_sym_core_token171] = ACTIONS(114),
    [aux_sym_core_token172] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_PLUS] = ACTIONS(114),
    [anon_sym_DASH] = ACTIONS(114),
    [anon_sym_SLASH] = ACTIONS(114),
    [anon_sym_STAR] = ACTIONS(114),
    [anon_sym_STAR_SLASH] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(114),
    [anon_sym_LT] = ACTIONS(114),
    [sym_word] = ACTIONS(114),
    [sym_end_definition] = ACTIONS(112),
  },
  [18] = {
    [sym_comment] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [aux_sym_core_token1] = ACTIONS(126),
    [aux_sym_core_token2] = ACTIONS(126),
    [aux_sym_core_token3] = ACTIONS(126),
    [aux_sym_core_token4] = ACTIONS(124),
    [aux_sym_core_token5] = ACTIONS(126),
    [aux_sym_core_token6] = ACTIONS(124),
    [aux_sym_core_token7] = ACTIONS(126),
    [aux_sym_core_token8] = ACTIONS(126),
    [aux_sym_core_token9] = ACTIONS(126),
    [aux_sym_core_token10] = ACTIONS(124),
    [aux_sym_core_token11] = ACTIONS(126),
    [aux_sym_core_token12] = ACTIONS(124),
    [aux_sym_core_token13] = ACTIONS(126),
    [aux_sym_core_token14] = ACTIONS(126),
    [aux_sym_core_token15] = ACTIONS(124),
    [aux_sym_core_token16] = ACTIONS(126),
    [aux_sym_core_token17] = ACTIONS(126),
    [aux_sym_core_token18] = ACTIONS(126),
    [aux_sym_core_token19] = ACTIONS(126),
    [aux_sym_core_token20] = ACTIONS(126),
    [aux_sym_core_token21] = ACTIONS(126),
    [aux_sym_core_token22] = ACTIONS(126),
    [aux_sym_core_token23] = ACTIONS(126),
    [aux_sym_core_token24] = ACTIONS(126),
    [aux_sym_core_token25] = ACTIONS(126),
    [aux_sym_core_token26] = ACTIONS(124),
    [aux_sym_core_token27] = ACTIONS(124),
    [aux_sym_core_token28] = ACTIONS(124),
    [aux_sym_core_token29] = ACTIONS(124),
    [aux_sym_core_token30] = ACTIONS(124),
    [aux_sym_core_token31] = ACTIONS(126),
    [aux_sym_core_token32] = ACTIONS(126),
    [aux_sym_core_token33] = ACTIONS(126),
    [aux_sym_core_token34] = ACTIONS(124),
    [aux_sym_core_token35] = ACTIONS(126),
    [aux_sym_core_token36] = ACTIONS(126),
    [aux_sym_core_token37] = ACTIONS(126),
    [aux_sym_core_token38] = ACTIONS(126),
    [aux_sym_core_token39] = ACTIONS(126),
    [aux_sym_core_token40] = ACTIONS(126),
    [aux_sym_core_token41] = ACTIONS(126),
    [aux_sym_core_token42] = ACTIONS(126),
    [aux_sym_core_token43] = ACTIONS(126),
    [aux_sym_core_token44] = ACTIONS(126),
    [aux_sym_core_token45] = ACTIONS(124),
    [aux_sym_core_token46] = ACTIONS(126),
    [aux_sym_core_token47] = ACTIONS(126),
    [aux_sym_core_token48] = ACTIONS(126),
    [aux_sym_core_token49] = ACTIONS(126),
    [aux_sym_core_token50] = ACTIONS(126),
    [aux_sym_core_token51] = ACTIONS(126),
    [aux_sym_core_token52] = ACTIONS(126),
    [aux_sym_core_token53] = ACTIONS(126),
    [aux_sym_core_token54] = ACTIONS(126),
    [aux_sym_core_token55] = ACTIONS(126),
    [aux_sym_core_token56] = ACTIONS(126),
    [aux_sym_core_token57] = ACTIONS(126),
    [aux_sym_core_token58] = ACTIONS(126),
    [aux_sym_core_token59] = ACTIONS(124),
    [aux_sym_core_token60] = ACTIONS(126),
    [aux_sym_core_token61] = ACTIONS(126),
    [aux_sym_core_token62] = ACTIONS(126),
    [aux_sym_core_token63] = ACTIONS(126),
    [aux_sym_core_token64] = ACTIONS(126),
    [aux_sym_core_token65] = ACTIONS(126),
    [aux_sym_core_token66] = ACTIONS(126),
    [aux_sym_core_token67] = ACTIONS(126),
    [aux_sym_core_token68] = ACTIONS(126),
    [aux_sym_core_token69] = ACTIONS(126),
    [aux_sym_core_token70] = ACTIONS(126),
    [aux_sym_core_token71] = ACTIONS(126),
    [aux_sym_core_token72] = ACTIONS(126),
    [aux_sym_core_token73] = ACTIONS(126),
    [aux_sym_core_token74] = ACTIONS(126),
    [aux_sym_core_token75] = ACTIONS(126),
    [aux_sym_core_token76] = ACTIONS(126),
    [aux_sym_core_token77] = ACTIONS(126),
    [aux_sym_core_token78] = ACTIONS(126),
    [aux_sym_core_token79] = ACTIONS(126),
    [aux_sym_core_token80] = ACTIONS(126),
    [aux_sym_core_token81] = ACTIONS(126),
    [aux_sym_core_token82] = ACTIONS(126),
    [aux_sym_core_token83] = ACTIONS(126),
    [aux_sym_core_token84] = ACTIONS(126),
    [aux_sym_core_token85] = ACTIONS(126),
    [aux_sym_core_token86] = ACTIONS(126),
    [aux_sym_core_token87] = ACTIONS(126),
    [aux_sym_core_token88] = ACTIONS(126),
    [aux_sym_core_token89] = ACTIONS(126),
    [aux_sym_core_token90] = ACTIONS(126),
    [aux_sym_core_token91] = ACTIONS(126),
    [aux_sym_core_token92] = ACTIONS(126),
    [aux_sym_core_token93] = ACTIONS(124),
    [aux_sym_core_token94] = ACTIONS(126),
    [aux_sym_core_token95] = ACTIONS(126),
    [aux_sym_core_token96] = ACTIONS(126),
    [aux_sym_core_token97] = ACTIONS(126),
    [aux_sym_core_token98] = ACTIONS(126),
    [aux_sym_core_token99] = ACTIONS(124),
    [aux_sym_core_token100] = ACTIONS(124),
    [aux_sym_core_token101] = ACTIONS(126),
    [aux_sym_core_token102] = ACTIONS(126),
    [aux_sym_core_token103] = ACTIONS(126),
    [aux_sym_core_token104] = ACTIONS(126),
    [aux_sym_core_token105] = ACTIONS(126),
    [aux_sym_core_token106] = ACTIONS(126),
    [aux_sym_core_token107] = ACTIONS(126),
    [aux_sym_core_token108] = ACTIONS(126),
    [aux_sym_core_token109] = ACTIONS(126),
    [aux_sym_core_token110] = ACTIONS(126),
    [aux_sym_core_token111] = ACTIONS(124),
    [aux_sym_core_token112] = ACTIONS(126),
    [aux_sym_core_token113] = ACTIONS(126),
    [aux_sym_core_token114] = ACTIONS(126),
    [aux_sym_core_token115] = ACTIONS(126),
    [aux_sym_core_token116] = ACTIONS(126),
    [aux_sym_core_token117] = ACTIONS(126),
    [aux_sym_core_token118] = ACTIONS(126),
    [aux_sym_core_token119] = ACTIONS(126),
    [aux_sym_core_token120] = ACTIONS(126),
    [aux_sym_core_token121] = ACTIONS(124),
    [aux_sym_core_token122] = ACTIONS(126),
    [aux_sym_core_token123] = ACTIONS(124),
    [aux_sym_core_token124] = ACTIONS(126),
    [aux_sym_core_token125] = ACTIONS(126),
    [aux_sym_core_token126] = ACTIONS(124),
    [aux_sym_core_token127] = ACTIONS(124),
    [aux_sym_core_token128] = ACTIONS(124),
    [aux_sym_core_token129] = ACTIONS(124),
    [aux_sym_core_token130] = ACTIONS(126),
    [aux_sym_core_token131] = ACTIONS(124),
    [aux_sym_core_token132] = ACTIONS(124),
    [aux_sym_core_token133] = ACTIONS(126),
    [aux_sym_core_token134] = ACTIONS(126),
    [aux_sym_core_token135] = ACTIONS(126),
    [aux_sym_core_token136] = ACTIONS(124),
    [aux_sym_core_token137] = ACTIONS(124),
    [aux_sym_core_token138] = ACTIONS(126),
    [aux_sym_core_token139] = ACTIONS(124),
    [aux_sym_core_token140] = ACTIONS(126),
    [aux_sym_core_token141] = ACTIONS(126),
    [aux_sym_core_token142] = ACTIONS(126),
    [aux_sym_core_token143] = ACTIONS(126),
    [aux_sym_core_token144] = ACTIONS(126),
    [aux_sym_core_token145] = ACTIONS(126),
    [aux_sym_core_token146] = ACTIONS(126),
    [aux_sym_core_token147] = ACTIONS(126),
    [aux_sym_core_token148] = ACTIONS(126),
    [aux_sym_core_token149] = ACTIONS(126),
    [aux_sym_core_token150] = ACTIONS(126),
    [aux_sym_core_token151] = ACTIONS(126),
    [aux_sym_core_token152] = ACTIONS(126),
    [aux_sym_core_token153] = ACTIONS(126),
    [aux_sym_core_token154] = ACTIONS(126),
    [aux_sym_core_token155] = ACTIONS(126),
    [aux_sym_core_token156] = ACTIONS(126),
    [aux_sym_core_token157] = ACTIONS(126),
    [aux_sym_core_token158] = ACTIONS(126),
    [aux_sym_core_token159] = ACTIONS(126),
    [aux_sym_core_token160] = ACTIONS(124),
    [aux_sym_core_token161] = ACTIONS(126),
    [aux_sym_core_token162] = ACTIONS(126),
    [aux_sym_core_token163] = ACTIONS(126),
    [aux_sym_core_token164] = ACTIONS(126),
    [aux_sym_core_token165] = ACTIONS(126),
    [aux_sym_core_token166] = ACTIONS(126),
    [aux_sym_core_token167] = ACTIONS(124),
    [aux_sym_core_token168] = ACTIONS(126),
    [aux_sym_core_token169] = ACTIONS(126),
    [aux_sym_core_token170] = ACTIONS(126),
    [aux_sym_core_token171] = ACTIONS(126),
    [aux_sym_core_token172] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_PLUS] = ACTIONS(126),
    [anon_sym_DASH] = ACTIONS(126),
    [anon_sym_SLASH] = ACTIONS(126),
    [anon_sym_STAR] = ACTIONS(126),
    [anon_sym_STAR_SLASH] = ACTIONS(126),
    [anon_sym_GT] = ACTIONS(126),
    [anon_sym_LT] = ACTIONS(126),
    [sym_word] = ACTIONS(126),
    [sym_end_definition] = ACTIONS(124),
  },
  [19] = {
    [sym_comment] = ACTIONS(128),
    [sym_number] = ACTIONS(130),
    [aux_sym_core_token1] = ACTIONS(130),
    [aux_sym_core_token2] = ACTIONS(130),
    [aux_sym_core_token3] = ACTIONS(130),
    [aux_sym_core_token4] = ACTIONS(128),
    [aux_sym_core_token5] = ACTIONS(130),
    [aux_sym_core_token6] = ACTIONS(128),
    [aux_sym_core_token7] = ACTIONS(130),
    [aux_sym_core_token8] = ACTIONS(130),
    [aux_sym_core_token9] = ACTIONS(130),
    [aux_sym_core_token10] = ACTIONS(128),
    [aux_sym_core_token11] = ACTIONS(130),
    [aux_sym_core_token12] = ACTIONS(128),
    [aux_sym_core_token13] = ACTIONS(130),
    [aux_sym_core_token14] = ACTIONS(130),
    [aux_sym_core_token15] = ACTIONS(128),
    [aux_sym_core_token16] = ACTIONS(130),
    [aux_sym_core_token17] = ACTIONS(130),
    [aux_sym_core_token18] = ACTIONS(130),
    [aux_sym_core_token19] = ACTIONS(130),
    [aux_sym_core_token20] = ACTIONS(130),
    [aux_sym_core_token21] = ACTIONS(130),
    [aux_sym_core_token22] = ACTIONS(130),
    [aux_sym_core_token23] = ACTIONS(130),
    [aux_sym_core_token24] = ACTIONS(130),
    [aux_sym_core_token25] = ACTIONS(130),
    [aux_sym_core_token26] = ACTIONS(128),
    [aux_sym_core_token27] = ACTIONS(128),
    [aux_sym_core_token28] = ACTIONS(128),
    [aux_sym_core_token29] = ACTIONS(128),
    [aux_sym_core_token30] = ACTIONS(128),
    [aux_sym_core_token31] = ACTIONS(130),
    [aux_sym_core_token32] = ACTIONS(130),
    [aux_sym_core_token33] = ACTIONS(130),
    [aux_sym_core_token34] = ACTIONS(128),
    [aux_sym_core_token35] = ACTIONS(130),
    [aux_sym_core_token36] = ACTIONS(130),
    [aux_sym_core_token37] = ACTIONS(130),
    [aux_sym_core_token38] = ACTIONS(130),
    [aux_sym_core_token39] = ACTIONS(130),
    [aux_sym_core_token40] = ACTIONS(130),
    [aux_sym_core_token41] = ACTIONS(130),
    [aux_sym_core_token42] = ACTIONS(130),
    [aux_sym_core_token43] = ACTIONS(130),
    [aux_sym_core_token44] = ACTIONS(130),
    [aux_sym_core_token45] = ACTIONS(128),
    [aux_sym_core_token46] = ACTIONS(130),
    [aux_sym_core_token47] = ACTIONS(130),
    [aux_sym_core_token48] = ACTIONS(130),
    [aux_sym_core_token49] = ACTIONS(130),
    [aux_sym_core_token50] = ACTIONS(130),
    [aux_sym_core_token51] = ACTIONS(130),
    [aux_sym_core_token52] = ACTIONS(130),
    [aux_sym_core_token53] = ACTIONS(130),
    [aux_sym_core_token54] = ACTIONS(130),
    [aux_sym_core_token55] = ACTIONS(130),
    [aux_sym_core_token56] = ACTIONS(130),
    [aux_sym_core_token57] = ACTIONS(130),
    [aux_sym_core_token58] = ACTIONS(130),
    [aux_sym_core_token59] = ACTIONS(128),
    [aux_sym_core_token60] = ACTIONS(130),
    [aux_sym_core_token61] = ACTIONS(130),
    [aux_sym_core_token62] = ACTIONS(130),
    [aux_sym_core_token63] = ACTIONS(130),
    [aux_sym_core_token64] = ACTIONS(130),
    [aux_sym_core_token65] = ACTIONS(130),
    [aux_sym_core_token66] = ACTIONS(130),
    [aux_sym_core_token67] = ACTIONS(130),
    [aux_sym_core_token68] = ACTIONS(130),
    [aux_sym_core_token69] = ACTIONS(130),
    [aux_sym_core_token70] = ACTIONS(130),
    [aux_sym_core_token71] = ACTIONS(130),
    [aux_sym_core_token72] = ACTIONS(130),
    [aux_sym_core_token73] = ACTIONS(130),
    [aux_sym_core_token74] = ACTIONS(130),
    [aux_sym_core_token75] = ACTIONS(130),
    [aux_sym_core_token76] = ACTIONS(130),
    [aux_sym_core_token77] = ACTIONS(130),
    [aux_sym_core_token78] = ACTIONS(130),
    [aux_sym_core_token79] = ACTIONS(130),
    [aux_sym_core_token80] = ACTIONS(130),
    [aux_sym_core_token81] = ACTIONS(130),
    [aux_sym_core_token82] = ACTIONS(130),
    [aux_sym_core_token83] = ACTIONS(130),
    [aux_sym_core_token84] = ACTIONS(130),
    [aux_sym_core_token85] = ACTIONS(130),
    [aux_sym_core_token86] = ACTIONS(130),
    [aux_sym_core_token87] = ACTIONS(130),
    [aux_sym_core_token88] = ACTIONS(130),
    [aux_sym_core_token89] = ACTIONS(130),
    [aux_sym_core_token90] = ACTIONS(130),
    [aux_sym_core_token91] = ACTIONS(130),
    [aux_sym_core_token92] = ACTIONS(130),
    [aux_sym_core_token93] = ACTIONS(128),
    [aux_sym_core_token94] = ACTIONS(130),
    [aux_sym_core_token95] = ACTIONS(130),
    [aux_sym_core_token96] = ACTIONS(130),
    [aux_sym_core_token97] = ACTIONS(130),
    [aux_sym_core_token98] = ACTIONS(130),
    [aux_sym_core_token99] = ACTIONS(128),
    [aux_sym_core_token100] = ACTIONS(128),
    [aux_sym_core_token101] = ACTIONS(130),
    [aux_sym_core_token102] = ACTIONS(130),
    [aux_sym_core_token103] = ACTIONS(130),
    [aux_sym_core_token104] = ACTIONS(130),
    [aux_sym_core_token105] = ACTIONS(130),
    [aux_sym_core_token106] = ACTIONS(130),
    [aux_sym_core_token107] = ACTIONS(130),
    [aux_sym_core_token108] = ACTIONS(130),
    [aux_sym_core_token109] = ACTIONS(130),
    [aux_sym_core_token110] = ACTIONS(130),
    [aux_sym_core_token111] = ACTIONS(128),
    [aux_sym_core_token112] = ACTIONS(130),
    [aux_sym_core_token113] = ACTIONS(130),
    [aux_sym_core_token114] = ACTIONS(130),
    [aux_sym_core_token115] = ACTIONS(130),
    [aux_sym_core_token116] = ACTIONS(130),
    [aux_sym_core_token117] = ACTIONS(130),
    [aux_sym_core_token118] = ACTIONS(130),
    [aux_sym_core_token119] = ACTIONS(130),
    [aux_sym_core_token120] = ACTIONS(130),
    [aux_sym_core_token121] = ACTIONS(128),
    [aux_sym_core_token122] = ACTIONS(130),
    [aux_sym_core_token123] = ACTIONS(128),
    [aux_sym_core_token124] = ACTIONS(130),
    [aux_sym_core_token125] = ACTIONS(130),
    [aux_sym_core_token126] = ACTIONS(128),
    [aux_sym_core_token127] = ACTIONS(128),
    [aux_sym_core_token128] = ACTIONS(128),
    [aux_sym_core_token129] = ACTIONS(128),
    [aux_sym_core_token130] = ACTIONS(130),
    [aux_sym_core_token131] = ACTIONS(128),
    [aux_sym_core_token132] = ACTIONS(128),
    [aux_sym_core_token133] = ACTIONS(130),
    [aux_sym_core_token134] = ACTIONS(130),
    [aux_sym_core_token135] = ACTIONS(130),
    [aux_sym_core_token136] = ACTIONS(128),
    [aux_sym_core_token137] = ACTIONS(128),
    [aux_sym_core_token138] = ACTIONS(130),
    [aux_sym_core_token139] = ACTIONS(128),
    [aux_sym_core_token140] = ACTIONS(130),
    [aux_sym_core_token141] = ACTIONS(130),
    [aux_sym_core_token142] = ACTIONS(130),
    [aux_sym_core_token143] = ACTIONS(130),
    [aux_sym_core_token144] = ACTIONS(130),
    [aux_sym_core_token145] = ACTIONS(130),
    [aux_sym_core_token146] = ACTIONS(130),
    [aux_sym_core_token147] = ACTIONS(130),
    [aux_sym_core_token148] = ACTIONS(130),
    [aux_sym_core_token149] = ACTIONS(130),
    [aux_sym_core_token150] = ACTIONS(130),
    [aux_sym_core_token151] = ACTIONS(130),
    [aux_sym_core_token152] = ACTIONS(130),
    [aux_sym_core_token153] = ACTIONS(130),
    [aux_sym_core_token154] = ACTIONS(130),
    [aux_sym_core_token155] = ACTIONS(130),
    [aux_sym_core_token156] = ACTIONS(130),
    [aux_sym_core_token157] = ACTIONS(130),
    [aux_sym_core_token158] = ACTIONS(130),
    [aux_sym_core_token159] = ACTIONS(130),
    [aux_sym_core_token160] = ACTIONS(128),
    [aux_sym_core_token161] = ACTIONS(130),
    [aux_sym_core_token162] = ACTIONS(130),
    [aux_sym_core_token163] = ACTIONS(130),
    [aux_sym_core_token164] = ACTIONS(130),
    [aux_sym_core_token165] = ACTIONS(130),
    [aux_sym_core_token166] = ACTIONS(130),
    [aux_sym_core_token167] = ACTIONS(128),
    [aux_sym_core_token168] = ACTIONS(130),
    [aux_sym_core_token169] = ACTIONS(130),
    [aux_sym_core_token170] = ACTIONS(130),
    [aux_sym_core_token171] = ACTIONS(130),
    [aux_sym_core_token172] = ACTIONS(128),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_PLUS] = ACTIONS(130),
    [anon_sym_DASH] = ACTIONS(130),
    [anon_sym_SLASH] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(130),
    [anon_sym_STAR_SLASH] = ACTIONS(130),
    [anon_sym_GT] = ACTIONS(130),
    [anon_sym_LT] = ACTIONS(130),
    [sym_word] = ACTIONS(130),
    [sym_end_definition] = ACTIONS(128),
  },
  [20] = {
    [sym_comment] = ACTIONS(104),
    [sym_number] = ACTIONS(106),
    [aux_sym_core_token1] = ACTIONS(106),
    [aux_sym_core_token2] = ACTIONS(106),
    [aux_sym_core_token3] = ACTIONS(106),
    [aux_sym_core_token4] = ACTIONS(104),
    [aux_sym_core_token5] = ACTIONS(106),
    [aux_sym_core_token6] = ACTIONS(104),
    [aux_sym_core_token7] = ACTIONS(106),
    [aux_sym_core_token8] = ACTIONS(106),
    [aux_sym_core_token9] = ACTIONS(106),
    [aux_sym_core_token10] = ACTIONS(104),
    [aux_sym_core_token11] = ACTIONS(106),
    [aux_sym_core_token12] = ACTIONS(104),
    [aux_sym_core_token13] = ACTIONS(106),
    [aux_sym_core_token14] = ACTIONS(106),
    [aux_sym_core_token15] = ACTIONS(104),
    [aux_sym_core_token16] = ACTIONS(106),
    [aux_sym_core_token17] = ACTIONS(106),
    [aux_sym_core_token18] = ACTIONS(106),
    [aux_sym_core_token19] = ACTIONS(106),
    [aux_sym_core_token20] = ACTIONS(106),
    [aux_sym_core_token21] = ACTIONS(106),
    [aux_sym_core_token22] = ACTIONS(106),
    [aux_sym_core_token23] = ACTIONS(106),
    [aux_sym_core_token24] = ACTIONS(106),
    [aux_sym_core_token25] = ACTIONS(106),
    [aux_sym_core_token26] = ACTIONS(104),
    [aux_sym_core_token27] = ACTIONS(104),
    [aux_sym_core_token28] = ACTIONS(104),
    [aux_sym_core_token29] = ACTIONS(104),
    [aux_sym_core_token30] = ACTIONS(104),
    [aux_sym_core_token31] = ACTIONS(106),
    [aux_sym_core_token32] = ACTIONS(106),
    [aux_sym_core_token33] = ACTIONS(106),
    [aux_sym_core_token34] = ACTIONS(104),
    [aux_sym_core_token35] = ACTIONS(106),
    [aux_sym_core_token36] = ACTIONS(106),
    [aux_sym_core_token37] = ACTIONS(106),
    [aux_sym_core_token38] = ACTIONS(106),
    [aux_sym_core_token39] = ACTIONS(106),
    [aux_sym_core_token40] = ACTIONS(106),
    [aux_sym_core_token41] = ACTIONS(106),
    [aux_sym_core_token42] = ACTIONS(106),
    [aux_sym_core_token43] = ACTIONS(106),
    [aux_sym_core_token44] = ACTIONS(106),
    [aux_sym_core_token45] = ACTIONS(104),
    [aux_sym_core_token46] = ACTIONS(106),
    [aux_sym_core_token47] = ACTIONS(106),
    [aux_sym_core_token48] = ACTIONS(106),
    [aux_sym_core_token49] = ACTIONS(106),
    [aux_sym_core_token50] = ACTIONS(106),
    [aux_sym_core_token51] = ACTIONS(106),
    [aux_sym_core_token52] = ACTIONS(106),
    [aux_sym_core_token53] = ACTIONS(106),
    [aux_sym_core_token54] = ACTIONS(106),
    [aux_sym_core_token55] = ACTIONS(106),
    [aux_sym_core_token56] = ACTIONS(106),
    [aux_sym_core_token57] = ACTIONS(106),
    [aux_sym_core_token58] = ACTIONS(106),
    [aux_sym_core_token59] = ACTIONS(104),
    [aux_sym_core_token60] = ACTIONS(106),
    [aux_sym_core_token61] = ACTIONS(106),
    [aux_sym_core_token62] = ACTIONS(106),
    [aux_sym_core_token63] = ACTIONS(106),
    [aux_sym_core_token64] = ACTIONS(106),
    [aux_sym_core_token65] = ACTIONS(106),
    [aux_sym_core_token66] = ACTIONS(106),
    [aux_sym_core_token67] = ACTIONS(106),
    [aux_sym_core_token68] = ACTIONS(106),
    [aux_sym_core_token69] = ACTIONS(106),
    [aux_sym_core_token70] = ACTIONS(106),
    [aux_sym_core_token71] = ACTIONS(106),
    [aux_sym_core_token72] = ACTIONS(106),
    [aux_sym_core_token73] = ACTIONS(106),
    [aux_sym_core_token74] = ACTIONS(106),
    [aux_sym_core_token75] = ACTIONS(106),
    [aux_sym_core_token76] = ACTIONS(106),
    [aux_sym_core_token77] = ACTIONS(106),
    [aux_sym_core_token78] = ACTIONS(106),
    [aux_sym_core_token79] = ACTIONS(106),
    [aux_sym_core_token80] = ACTIONS(106),
    [aux_sym_core_token81] = ACTIONS(106),
    [aux_sym_core_token82] = ACTIONS(106),
    [aux_sym_core_token83] = ACTIONS(106),
    [aux_sym_core_token84] = ACTIONS(106),
    [aux_sym_core_token85] = ACTIONS(106),
    [aux_sym_core_token86] = ACTIONS(106),
    [aux_sym_core_token87] = ACTIONS(106),
    [aux_sym_core_token88] = ACTIONS(106),
    [aux_sym_core_token89] = ACTIONS(106),
    [aux_sym_core_token90] = ACTIONS(106),
    [aux_sym_core_token91] = ACTIONS(106),
    [aux_sym_core_token92] = ACTIONS(106),
    [aux_sym_core_token93] = ACTIONS(104),
    [aux_sym_core_token94] = ACTIONS(106),
    [aux_sym_core_token95] = ACTIONS(106),
    [aux_sym_core_token96] = ACTIONS(106),
    [aux_sym_core_token97] = ACTIONS(106),
    [aux_sym_core_token98] = ACTIONS(106),
    [aux_sym_core_token99] = ACTIONS(104),
    [aux_sym_core_token100] = ACTIONS(104),
    [aux_sym_core_token101] = ACTIONS(106),
    [aux_sym_core_token102] = ACTIONS(106),
    [aux_sym_core_token103] = ACTIONS(106),
    [aux_sym_core_token104] = ACTIONS(106),
    [aux_sym_core_token105] = ACTIONS(106),
    [aux_sym_core_token106] = ACTIONS(106),
    [aux_sym_core_token107] = ACTIONS(106),
    [aux_sym_core_token108] = ACTIONS(106),
    [aux_sym_core_token109] = ACTIONS(106),
    [aux_sym_core_token110] = ACTIONS(106),
    [aux_sym_core_token111] = ACTIONS(104),
    [aux_sym_core_token112] = ACTIONS(106),
    [aux_sym_core_token113] = ACTIONS(106),
    [aux_sym_core_token114] = ACTIONS(106),
    [aux_sym_core_token115] = ACTIONS(106),
    [aux_sym_core_token116] = ACTIONS(106),
    [aux_sym_core_token117] = ACTIONS(106),
    [aux_sym_core_token118] = ACTIONS(106),
    [aux_sym_core_token119] = ACTIONS(106),
    [aux_sym_core_token120] = ACTIONS(106),
    [aux_sym_core_token121] = ACTIONS(104),
    [aux_sym_core_token122] = ACTIONS(106),
    [aux_sym_core_token123] = ACTIONS(104),
    [aux_sym_core_token124] = ACTIONS(106),
    [aux_sym_core_token125] = ACTIONS(106),
    [aux_sym_core_token126] = ACTIONS(104),
    [aux_sym_core_token127] = ACTIONS(104),
    [aux_sym_core_token128] = ACTIONS(104),
    [aux_sym_core_token129] = ACTIONS(104),
    [aux_sym_core_token130] = ACTIONS(106),
    [aux_sym_core_token131] = ACTIONS(104),
    [aux_sym_core_token132] = ACTIONS(104),
    [aux_sym_core_token133] = ACTIONS(106),
    [aux_sym_core_token134] = ACTIONS(106),
    [aux_sym_core_token135] = ACTIONS(106),
    [aux_sym_core_token136] = ACTIONS(104),
    [aux_sym_core_token137] = ACTIONS(104),
    [aux_sym_core_token138] = ACTIONS(106),
    [aux_sym_core_token139] = ACTIONS(104),
    [aux_sym_core_token140] = ACTIONS(106),
    [aux_sym_core_token141] = ACTIONS(106),
    [aux_sym_core_token142] = ACTIONS(106),
    [aux_sym_core_token143] = ACTIONS(106),
    [aux_sym_core_token144] = ACTIONS(106),
    [aux_sym_core_token145] = ACTIONS(106),
    [aux_sym_core_token146] = ACTIONS(106),
    [aux_sym_core_token147] = ACTIONS(106),
    [aux_sym_core_token148] = ACTIONS(106),
    [aux_sym_core_token149] = ACTIONS(106),
    [aux_sym_core_token150] = ACTIONS(106),
    [aux_sym_core_token151] = ACTIONS(106),
    [aux_sym_core_token152] = ACTIONS(106),
    [aux_sym_core_token153] = ACTIONS(106),
    [aux_sym_core_token154] = ACTIONS(106),
    [aux_sym_core_token155] = ACTIONS(106),
    [aux_sym_core_token156] = ACTIONS(106),
    [aux_sym_core_token157] = ACTIONS(106),
    [aux_sym_core_token158] = ACTIONS(106),
    [aux_sym_core_token159] = ACTIONS(106),
    [aux_sym_core_token160] = ACTIONS(104),
    [aux_sym_core_token161] = ACTIONS(106),
    [aux_sym_core_token162] = ACTIONS(106),
    [aux_sym_core_token163] = ACTIONS(106),
    [aux_sym_core_token164] = ACTIONS(106),
    [aux_sym_core_token165] = ACTIONS(106),
    [aux_sym_core_token166] = ACTIONS(106),
    [aux_sym_core_token167] = ACTIONS(104),
    [aux_sym_core_token168] = ACTIONS(106),
    [aux_sym_core_token169] = ACTIONS(106),
    [aux_sym_core_token170] = ACTIONS(106),
    [aux_sym_core_token171] = ACTIONS(106),
    [aux_sym_core_token172] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_PLUS] = ACTIONS(106),
    [anon_sym_DASH] = ACTIONS(106),
    [anon_sym_SLASH] = ACTIONS(106),
    [anon_sym_STAR] = ACTIONS(106),
    [anon_sym_STAR_SLASH] = ACTIONS(106),
    [anon_sym_GT] = ACTIONS(106),
    [anon_sym_LT] = ACTIONS(106),
    [sym_word] = ACTIONS(106),
    [sym_end_definition] = ACTIONS(104),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(132), 1,
      sym_word,
    ACTIONS(134), 1,
      sym_rparen,
    STATE(23), 1,
      aux_sym_stack_effects_repeat1,
  [10] = 3,
    ACTIONS(136), 1,
      sym_word,
    ACTIONS(139), 1,
      sym_stack_effect_sep,
    STATE(22), 1,
      aux_sym_stack_effects_repeat1,
  [20] = 3,
    ACTIONS(141), 1,
      sym_word,
    ACTIONS(143), 1,
      sym_rparen,
    STATE(28), 1,
      aux_sym_stack_effects_repeat1,
  [30] = 3,
    ACTIONS(143), 1,
      sym_rparen,
    ACTIONS(145), 1,
      sym_word,
    STATE(25), 1,
      aux_sym_stack_effects_repeat1,
  [40] = 3,
    ACTIONS(141), 1,
      sym_word,
    ACTIONS(147), 1,
      sym_rparen,
    STATE(28), 1,
      aux_sym_stack_effects_repeat1,
  [50] = 3,
    ACTIONS(149), 1,
      sym_word,
    ACTIONS(151), 1,
      sym_stack_effect_sep,
    STATE(22), 1,
      aux_sym_stack_effects_repeat1,
  [60] = 3,
    ACTIONS(153), 1,
      sym_word,
    ACTIONS(155), 1,
      sym_stack_effect_sep,
    STATE(26), 1,
      aux_sym_stack_effects_repeat1,
  [70] = 3,
    ACTIONS(139), 1,
      sym_rparen,
    ACTIONS(157), 1,
      sym_word,
    STATE(28), 1,
      aux_sym_stack_effects_repeat1,
  [80] = 1,
    ACTIONS(160), 1,
      sym_word,
  [84] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 10,
  [SMALL_STATE(23)] = 20,
  [SMALL_STATE(24)] = 30,
  [SMALL_STATE(25)] = 40,
  [SMALL_STATE(26)] = 50,
  [SMALL_STATE(27)] = 60,
  [SMALL_STATE(28)] = 70,
  [SMALL_STATE(29)] = 80,
  [SMALL_STATE(30)] = 84,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(5),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(5),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(15),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(15),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(20),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(20),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_word_definition_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_definition, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_definition, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_definition, 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_definition, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_definition, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_definition, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_effects, 5),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_effects, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_effects, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_effects, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_effects, 3),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_effects, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stack_effects_repeat1, 2), SHIFT_REPEAT(22),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stack_effects_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_stack_effects_repeat1, 2), SHIFT_REPEAT(28),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
