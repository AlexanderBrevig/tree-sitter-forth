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
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 197
#define ALIAS_COUNT 0
#define TOKEN_COUNT 187
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_string = 1,
  sym_number = 2,
  sym_start_definition = 3,
  sym_end_definition = 4,
  aux_sym_comment_token1 = 5,
  aux_sym_comment_token2 = 6,
  aux_sym_core_token1 = 7,
  aux_sym_core_token2 = 8,
  aux_sym_core_token3 = 9,
  aux_sym_core_token4 = 10,
  aux_sym_core_token5 = 11,
  aux_sym_core_token6 = 12,
  aux_sym_core_token7 = 13,
  aux_sym_core_token8 = 14,
  aux_sym_core_token9 = 15,
  aux_sym_core_token10 = 16,
  aux_sym_core_token11 = 17,
  aux_sym_core_token12 = 18,
  aux_sym_core_token13 = 19,
  aux_sym_core_token14 = 20,
  aux_sym_core_token15 = 21,
  aux_sym_core_token16 = 22,
  aux_sym_core_token17 = 23,
  aux_sym_core_token18 = 24,
  aux_sym_core_token19 = 25,
  aux_sym_core_token20 = 26,
  aux_sym_core_token21 = 27,
  aux_sym_core_token22 = 28,
  aux_sym_core_token23 = 29,
  aux_sym_core_token24 = 30,
  aux_sym_core_token25 = 31,
  aux_sym_core_token26 = 32,
  aux_sym_core_token27 = 33,
  aux_sym_core_token28 = 34,
  aux_sym_core_token29 = 35,
  aux_sym_core_token30 = 36,
  aux_sym_core_token31 = 37,
  aux_sym_core_token32 = 38,
  aux_sym_core_token33 = 39,
  aux_sym_core_token34 = 40,
  aux_sym_core_token35 = 41,
  aux_sym_core_token36 = 42,
  aux_sym_core_token37 = 43,
  aux_sym_core_token38 = 44,
  aux_sym_core_token39 = 45,
  aux_sym_core_token40 = 46,
  aux_sym_core_token41 = 47,
  aux_sym_core_token42 = 48,
  aux_sym_core_token43 = 49,
  aux_sym_core_token44 = 50,
  aux_sym_core_token45 = 51,
  aux_sym_core_token46 = 52,
  aux_sym_core_token47 = 53,
  aux_sym_core_token48 = 54,
  aux_sym_core_token49 = 55,
  aux_sym_core_token50 = 56,
  aux_sym_core_token51 = 57,
  aux_sym_core_token52 = 58,
  aux_sym_core_token53 = 59,
  aux_sym_core_token54 = 60,
  aux_sym_core_token55 = 61,
  aux_sym_core_token56 = 62,
  aux_sym_core_token57 = 63,
  aux_sym_core_token58 = 64,
  aux_sym_core_token59 = 65,
  aux_sym_core_token60 = 66,
  aux_sym_core_token61 = 67,
  aux_sym_core_token62 = 68,
  aux_sym_core_token63 = 69,
  aux_sym_core_token64 = 70,
  aux_sym_core_token65 = 71,
  aux_sym_core_token66 = 72,
  aux_sym_core_token67 = 73,
  aux_sym_core_token68 = 74,
  aux_sym_core_token69 = 75,
  aux_sym_core_token70 = 76,
  aux_sym_core_token71 = 77,
  aux_sym_core_token72 = 78,
  aux_sym_core_token73 = 79,
  aux_sym_core_token74 = 80,
  aux_sym_core_token75 = 81,
  aux_sym_core_token76 = 82,
  aux_sym_core_token77 = 83,
  aux_sym_core_token78 = 84,
  aux_sym_core_token79 = 85,
  aux_sym_core_token80 = 86,
  aux_sym_core_token81 = 87,
  aux_sym_core_token82 = 88,
  aux_sym_core_token83 = 89,
  aux_sym_core_token84 = 90,
  aux_sym_core_token85 = 91,
  aux_sym_core_token86 = 92,
  aux_sym_core_token87 = 93,
  aux_sym_core_token88 = 94,
  aux_sym_core_token89 = 95,
  aux_sym_core_token90 = 96,
  aux_sym_core_token91 = 97,
  aux_sym_core_token92 = 98,
  aux_sym_core_token93 = 99,
  aux_sym_core_token94 = 100,
  aux_sym_core_token95 = 101,
  aux_sym_core_token96 = 102,
  aux_sym_core_token97 = 103,
  aux_sym_core_token98 = 104,
  aux_sym_core_token99 = 105,
  aux_sym_core_token100 = 106,
  aux_sym_core_token101 = 107,
  aux_sym_core_token102 = 108,
  aux_sym_core_token103 = 109,
  aux_sym_core_token104 = 110,
  aux_sym_core_token105 = 111,
  aux_sym_core_token106 = 112,
  aux_sym_core_token107 = 113,
  aux_sym_core_token108 = 114,
  aux_sym_core_token109 = 115,
  aux_sym_core_token110 = 116,
  aux_sym_core_token111 = 117,
  aux_sym_core_token112 = 118,
  aux_sym_core_token113 = 119,
  aux_sym_core_token114 = 120,
  aux_sym_core_token115 = 121,
  aux_sym_core_token116 = 122,
  aux_sym_core_token117 = 123,
  aux_sym_core_token118 = 124,
  aux_sym_core_token119 = 125,
  aux_sym_core_token120 = 126,
  aux_sym_core_token121 = 127,
  aux_sym_core_token122 = 128,
  aux_sym_core_token123 = 129,
  aux_sym_core_token124 = 130,
  aux_sym_core_token125 = 131,
  aux_sym_core_token126 = 132,
  aux_sym_core_token127 = 133,
  aux_sym_core_token128 = 134,
  aux_sym_core_token129 = 135,
  aux_sym_core_token130 = 136,
  aux_sym_core_token131 = 137,
  aux_sym_core_token132 = 138,
  aux_sym_core_token133 = 139,
  aux_sym_core_token134 = 140,
  aux_sym_core_token135 = 141,
  aux_sym_core_token136 = 142,
  aux_sym_core_token137 = 143,
  aux_sym_core_token138 = 144,
  aux_sym_core_token139 = 145,
  aux_sym_core_token140 = 146,
  aux_sym_core_token141 = 147,
  aux_sym_core_token142 = 148,
  aux_sym_core_token143 = 149,
  aux_sym_core_token144 = 150,
  aux_sym_core_token145 = 151,
  aux_sym_core_token146 = 152,
  aux_sym_core_token147 = 153,
  aux_sym_core_token148 = 154,
  aux_sym_core_token149 = 155,
  aux_sym_core_token150 = 156,
  aux_sym_core_token151 = 157,
  aux_sym_core_token152 = 158,
  aux_sym_core_token153 = 159,
  aux_sym_core_token154 = 160,
  aux_sym_core_token155 = 161,
  aux_sym_core_token156 = 162,
  aux_sym_core_token157 = 163,
  aux_sym_core_token158 = 164,
  aux_sym_core_token159 = 165,
  aux_sym_core_token160 = 166,
  aux_sym_core_token161 = 167,
  aux_sym_core_token162 = 168,
  aux_sym_core_token163 = 169,
  aux_sym_core_token164 = 170,
  aux_sym_core_token165 = 171,
  aux_sym_core_token166 = 172,
  aux_sym_core_token167 = 173,
  aux_sym_core_token168 = 174,
  aux_sym_core_token169 = 175,
  aux_sym_core_token170 = 176,
  aux_sym_core_token171 = 177,
  aux_sym_operator_token1 = 178,
  aux_sym_operator_token2 = 179,
  aux_sym_operator_token3 = 180,
  aux_sym_operator_token4 = 181,
  aux_sym_operator_token5 = 182,
  aux_sym_operator_token6 = 183,
  aux_sym_operator_token7 = 184,
  aux_sym_operator_token8 = 185,
  sym_word = 186,
  sym_source_file = 187,
  sym__definition = 188,
  sym__tokens = 189,
  sym_builtin = 190,
  sym_word_definition = 191,
  sym_comment = 192,
  sym_core = 193,
  sym_operator = 194,
  aux_sym_source_file_repeat1 = 195,
  aux_sym_word_definition_repeat1 = 196,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_start_definition] = "start_definition",
  [sym_end_definition] = "end_definition",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
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
  [aux_sym_operator_token1] = "operator_token1",
  [aux_sym_operator_token2] = "operator_token2",
  [aux_sym_operator_token3] = "operator_token3",
  [aux_sym_operator_token4] = "operator_token4",
  [aux_sym_operator_token5] = "operator_token5",
  [aux_sym_operator_token6] = "operator_token6",
  [aux_sym_operator_token7] = "operator_token7",
  [aux_sym_operator_token8] = "operator_token8",
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__tokens] = "_tokens",
  [sym_builtin] = "builtin",
  [sym_word_definition] = "word_definition",
  [sym_comment] = "comment",
  [sym_core] = "core",
  [sym_operator] = "operator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_word_definition_repeat1] = "word_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_start_definition] = sym_start_definition,
  [sym_end_definition] = sym_end_definition,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
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
  [aux_sym_operator_token1] = aux_sym_operator_token1,
  [aux_sym_operator_token2] = aux_sym_operator_token2,
  [aux_sym_operator_token3] = aux_sym_operator_token3,
  [aux_sym_operator_token4] = aux_sym_operator_token4,
  [aux_sym_operator_token5] = aux_sym_operator_token5,
  [aux_sym_operator_token6] = aux_sym_operator_token6,
  [aux_sym_operator_token7] = aux_sym_operator_token7,
  [aux_sym_operator_token8] = aux_sym_operator_token8,
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__tokens] = sym__tokens,
  [sym_builtin] = sym_builtin,
  [sym_word_definition] = sym_word_definition,
  [sym_comment] = sym_comment,
  [sym_core] = sym_core,
  [sym_operator] = sym_operator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_word_definition_repeat1] = aux_sym_word_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_start_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_end_definition] = {
    .visible = true,
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
  [aux_sym_operator_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_operator_token8] = {
    .visible = false,
    .named = false,
  },
  [sym_word] = {
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
  [sym__tokens] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_word_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_word_definition_repeat1] = {
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
  [12] = 7,
  [13] = 8,
  [14] = 9,
  [15] = 10,
  [16] = 16,
  [17] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '$') ADVANCE(883);
      if (lookahead == '%') ADVANCE(881);
      if (lookahead == '&') ADVANCE(882);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(205);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '2') ADVANCE(10);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '?') ADVANCE(283);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'B') ADVANCE(245);
      if (lookahead == 'C') ADVANCE(212);
      if (lookahead == 'D') ADVANCE(302);
      if (lookahead == 'E') ADVANCE(414);
      if (lookahead == 'F') ADVANCE(248);
      if (lookahead == 'H') ADVANCE(303);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(105);
      if (lookahead == 'K') ADVANCE(304);
      if (lookahead == 'L') ADVANCE(339);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(354);
      if (lookahead == 'P') ADVANCE(246);
      if (lookahead == 'Q') ADVANCE(553);
      if (lookahead == 'R') ADVANCE(240);
      if (lookahead == 'S') ADVANCE(214);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'U') ADVANCE(233);
      if (lookahead == 'V') ADVANCE(247);
      if (lookahead == 'W') ADVANCE(366);
      if (lookahead == 'X') ADVANCE(448);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'b') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'f') ADVANCE(568);
      if (lookahead == 'h') ADVANCE(622);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'k') ADVANCE(623);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead == 'o') ADVANCE(673);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead == 'q') ADVANCE(871);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead == 'v') ADVANCE(567);
      if (lookahead == 'w') ADVANCE(685);
      if (lookahead == 'x') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(884);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '$') ADVANCE(883);
      if (lookahead == '%') ADVANCE(881);
      if (lookahead == '&') ADVANCE(882);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(205);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '2') ADVANCE(10);
      if (lookahead == ':') ADVANCE(437);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '?') ADVANCE(283);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'B') ADVANCE(245);
      if (lookahead == 'C') ADVANCE(212);
      if (lookahead == 'D') ADVANCE(302);
      if (lookahead == 'E') ADVANCE(414);
      if (lookahead == 'F') ADVANCE(248);
      if (lookahead == 'H') ADVANCE(303);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(105);
      if (lookahead == 'K') ADVANCE(304);
      if (lookahead == 'L') ADVANCE(339);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(354);
      if (lookahead == 'P') ADVANCE(246);
      if (lookahead == 'Q') ADVANCE(553);
      if (lookahead == 'R') ADVANCE(240);
      if (lookahead == 'S') ADVANCE(214);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'U') ADVANCE(233);
      if (lookahead == 'V') ADVANCE(247);
      if (lookahead == 'W') ADVANCE(366);
      if (lookahead == 'X') ADVANCE(448);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'b') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'f') ADVANCE(568);
      if (lookahead == 'h') ADVANCE(622);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'k') ADVANCE(623);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead == 'o') ADVANCE(673);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead == 'q') ADVANCE(871);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead == 'v') ADVANCE(567);
      if (lookahead == 'w') ADVANCE(685);
      if (lookahead == 'x') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(884);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '$') ADVANCE(883);
      if (lookahead == '%') ADVANCE(881);
      if (lookahead == '&') ADVANCE(882);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(205);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '2') ADVANCE(10);
      if (lookahead == ':') ADVANCE(437);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '?') ADVANCE(283);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'B') ADVANCE(245);
      if (lookahead == 'C') ADVANCE(212);
      if (lookahead == 'D') ADVANCE(302);
      if (lookahead == 'E') ADVANCE(414);
      if (lookahead == 'F') ADVANCE(248);
      if (lookahead == 'H') ADVANCE(303);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(105);
      if (lookahead == 'K') ADVANCE(304);
      if (lookahead == 'L') ADVANCE(339);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(354);
      if (lookahead == 'P') ADVANCE(246);
      if (lookahead == 'Q') ADVANCE(553);
      if (lookahead == 'R') ADVANCE(240);
      if (lookahead == 'S') ADVANCE(214);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'U') ADVANCE(233);
      if (lookahead == 'V') ADVANCE(247);
      if (lookahead == 'W') ADVANCE(366);
      if (lookahead == 'X') ADVANCE(448);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'b') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'f') ADVANCE(568);
      if (lookahead == 'h') ADVANCE(622);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'k') ADVANCE(623);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead == 'o') ADVANCE(673);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead == 'q') ADVANCE(871);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead == 'v') ADVANCE(567);
      if (lookahead == 'w') ADVANCE(685);
      if (lookahead == 'x') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(884);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(884);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '!') ADVANCE(24);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '$') ADVANCE(883);
      if (lookahead == '%') ADVANCE(881);
      if (lookahead == '&') ADVANCE(882);
      if (lookahead == '\'') ADVANCE(28);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '+') ADVANCE(205);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == '-') ADVANCE(206);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(207);
      if (lookahead == '0') ADVANCE(12);
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '2') ADVANCE(10);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(211);
      if (lookahead == '=') ADVANCE(204);
      if (lookahead == '>') ADVANCE(210);
      if (lookahead == '?') ADVANCE(283);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead == 'A') ADVANCE(270);
      if (lookahead == 'B') ADVANCE(245);
      if (lookahead == 'C') ADVANCE(212);
      if (lookahead == 'D') ADVANCE(302);
      if (lookahead == 'E') ADVANCE(414);
      if (lookahead == 'F') ADVANCE(248);
      if (lookahead == 'H') ADVANCE(303);
      if (lookahead == 'I') ADVANCE(100);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(105);
      if (lookahead == 'K') ADVANCE(304);
      if (lookahead == 'L') ADVANCE(339);
      if (lookahead == 'M') ADVANCE(220);
      if (lookahead == 'N') ADVANCE(335);
      if (lookahead == 'O') ADVANCE(354);
      if (lookahead == 'P') ADVANCE(246);
      if (lookahead == 'Q') ADVANCE(553);
      if (lookahead == 'R') ADVANCE(240);
      if (lookahead == 'S') ADVANCE(214);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == 'U') ADVANCE(233);
      if (lookahead == 'V') ADVANCE(247);
      if (lookahead == 'W') ADVANCE(366);
      if (lookahead == 'X') ADVANCE(448);
      if (lookahead == '[') ADVANCE(151);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(590);
      if (lookahead == 'b') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(621);
      if (lookahead == 'e') ADVANCE(733);
      if (lookahead == 'f') ADVANCE(568);
      if (lookahead == 'h') ADVANCE(622);
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'k') ADVANCE(623);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead == 'm') ADVANCE(221);
      if (lookahead == 'n') ADVANCE(651);
      if (lookahead == 'o') ADVANCE(673);
      if (lookahead == 'p') ADVANCE(566);
      if (lookahead == 'q') ADVANCE(871);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(686);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead == 'v') ADVANCE(567);
      if (lookahead == 'w') ADVANCE(685);
      if (lookahead == 'x') ADVANCE(766);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0) ADVANCE(884);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '*') ADVANCE(41);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '>') ADVANCE(880);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'D') ADVANCE(504);
      if (lookahead == 'O') ADVANCE(558);
      if (lookahead == 'R') ADVANCE(242);
      if (lookahead == 'S') ADVANCE(559);
      if (lookahead == 'd') ADVANCE(822);
      if (lookahead == 'o') ADVANCE(876);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == 's') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+') ADVANCE(38);
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_number);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_start_definition);
      if (lookahead == 'N') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_end_definition);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == ')') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_core_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_core_token2);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_core_token3);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_core_token4);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_core_token5);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_core_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_core_token7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_core_token8);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_core_token9);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_core_token10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_core_token11);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(216);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(155);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_core_token12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_core_token13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_core_token14);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_core_token15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_core_token16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_core_token17);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_core_token18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_core_token19);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_core_token20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_core_token21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_core_token22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_core_token23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_core_token24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_core_token25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_core_token26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_core_token27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_core_token28);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_core_token29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_core_token30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_core_token31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_core_token32);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_core_token33);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_core_token34);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_core_token35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_core_token36);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_core_token37);
      if (lookahead == 'E') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_core_token37);
      if (lookahead == 'e') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_core_token38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_core_token39);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_core_token40);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_core_token41);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_core_token42);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_core_token43);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_core_token44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_core_token45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_core_token46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_core_token47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_core_token48);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_core_token49);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead == 'S') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_core_token49);
      if (lookahead == '+') ADVANCE(74);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_core_token50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_core_token51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_core_token52);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_core_token53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_core_token54);
      if (lookahead == 'E') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_core_token54);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_core_token55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_core_token56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_core_token57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_core_token58);
      if (lookahead == 'E') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_core_token58);
      if (lookahead == 'e') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_core_token59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_core_token60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_core_token61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_core_token62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_core_token63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_core_token64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_core_token65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_core_token66);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_core_token67);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_core_token68);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_core_token69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_core_token70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_core_token71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_core_token72);
      if (lookahead == 'S') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_core_token72);
      if (lookahead == 's') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_core_token73);
      if (lookahead == 'F') ADVANCE(102);
      if (lookahead == 'M') ADVANCE(420);
      if (lookahead == 'N') ADVANCE(278);
      if (lookahead == 'S') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_core_token73);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == 'm') ADVANCE(739);
      if (lookahead == 'n') ADVANCE(598);
      if (lookahead == 's') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_core_token74);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_core_token75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_core_token76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_core_token77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_core_token78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_core_token79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_core_token80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_core_token81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_core_token82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_core_token83);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_core_token84);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_core_token85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_core_token86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_core_token87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_core_token88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_core_token89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_core_token90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_core_token91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_core_token92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_core_token93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_core_token94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_core_token95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_core_token96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_core_token97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_core_token98);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(884);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_core_token98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_core_token99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_core_token100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_core_token101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_core_token102);
      if (lookahead == '-') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_core_token102);
      if (lookahead == '-') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_core_token103);
      if (lookahead == 'S') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_core_token103);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_core_token104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_core_token105);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_core_token106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_core_token107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_core_token108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_core_token109);
      if (lookahead == 'R') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_core_token109);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_core_token110);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_core_token111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_core_token112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_core_token113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_core_token114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_core_token115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_core_token116);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_core_token117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_core_token118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_core_token119);
      if (lookahead == '\'') ADVANCE(562);
      if (lookahead == 'C') ADVANCE(369);
      if (lookahead == 'c') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_core_token120);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_core_token121);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_core_token122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_core_token123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_core_token124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_core_token125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_core_token126);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_core_token127);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_core_token128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_core_token129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_core_token130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_core_token131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_core_token132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_core_token133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_core_token134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_core_token135);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_core_token136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_core_token137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_core_token138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_core_token139);
      if (lookahead == '!') ADVANCE(172);
      if (lookahead == '@') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_core_token140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_core_token141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_core_token142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_core_token143);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_core_token144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_core_token145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_core_token146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_core_token147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_core_token148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_core_token149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_core_token150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_core_token151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_core_token152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_core_token153);
      if (lookahead == '-') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_core_token153);
      if (lookahead == '-') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_core_token154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_core_token155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_core_token156);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_core_token157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_core_token158);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_core_token159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_core_token160);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_core_token161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_core_token162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_core_token163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_core_token164);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_core_token165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_core_token166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_core_token167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_core_token168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_core_token169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_core_token170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_operator_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_operator_token2);
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == 'L') ADVANCE(467);
      if (lookahead == 'l') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_operator_token3);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_operator_token4);
      if (lookahead == 'M') ADVANCE(450);
      if (lookahead == 'm') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_operator_token5);
      if (lookahead == '/') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_operator_token6);
      if (lookahead == 'M') ADVANCE(455);
      if (lookahead == 'm') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_operator_token7);
      if (lookahead == 'B') ADVANCE(452);
      if (lookahead == 'I') ADVANCE(428);
      if (lookahead == 'N') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(770);
      if (lookahead == 'i') ADVANCE(747);
      if (lookahead == 'n') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_operator_token8);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == 'A') ADVANCE(510);
      if (lookahead == 'E') ADVANCE(402);
      if (lookahead == 'H') ADVANCE(252);
      if (lookahead == 'O') ADVANCE(419);
      if (lookahead == 'R') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead == ',') ADVANCE(68);
      if (lookahead == '@') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(828);
      if (lookahead == 'e') ADVANCE(721);
      if (lookahead == 'h') ADVANCE(572);
      if (lookahead == 'o') ADVANCE(738);
      if (lookahead == 'r') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(127);
      if (lookahead == '>') ADVANCE(288);
      if (lookahead == 'A') ADVANCE(556);
      if (lookahead == 'I') ADVANCE(361);
      if (lookahead == 'M') ADVANCE(237);
      if (lookahead == 'O') ADVANCE(546);
      if (lookahead == 'P') ADVANCE(250);
      if (lookahead == 'T') ADVANCE(254);
      if (lookahead == 'W') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '>') ADVANCE(606);
      if (lookahead == '\\') ADVANCE(217);
      if (lookahead == 'a') ADVANCE(874);
      if (lookahead == 'i') ADVANCE(680);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead == 'o') ADVANCE(864);
      if (lookahead == 'p') ADVANCE(570);
      if (lookahead == 't') ADVANCE(574);
      if (lookahead == 'w') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == 'A') ADVANCE(487);
      if (lookahead == 'I') ADVANCE(429);
      if (lookahead == 'O') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == 'a') ADVANCE(806);
      if (lookahead == 'i') ADVANCE(748);
      if (lookahead == 'o') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '*') ADVANCE(143);
      if (lookahead == '/') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == 'S') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '+') ADVANCE(70);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ',') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '-') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(140);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == 'M') ADVANCE(222);
      if (lookahead == 'N') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '<') ADVANCE(142);
      if (lookahead == '>') ADVANCE(199);
      if (lookahead == 'm') ADVANCE(223);
      if (lookahead == 'n') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(120);
      if (lookahead == '@') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(281);
      if (lookahead == 'O') ADVANCE(407);
      if (lookahead == 'S') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(120);
      if (lookahead == '@') ADVANCE(121);
      if (lookahead == 'e') ADVANCE(601);
      if (lookahead == 'o') ADVANCE(726);
      if (lookahead == 's') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '>') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '?') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(508);
      if (lookahead == 'E') ADVANCE(363);
      if (lookahead == 'L') ADVANCE(66);
      if (lookahead == 'U') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(287);
      if (lookahead == 'I') ADVANCE(273);
      if (lookahead == 'O') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(415);
      if (lookahead == 'I') ADVANCE(405);
      if (lookahead == 'M') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(451);
      if (lookahead == 'C') ADVANCE(275);
      if (lookahead == 'G') ADVANCE(251);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'N') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(346);
      if (lookahead == 'T') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(374);
      if (lookahead == 'F') ADVANCE(344);
      if (lookahead == 'P') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(406);
      if (lookahead == 'V') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(548);
      if (lookahead == 'F') ADVANCE(386);
      if (lookahead == 'P') ADVANCE(351);
      if (lookahead == 'S') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(269);
      if (lookahead == 'O') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(447);
      if (lookahead == 'd') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(282);
      if (lookahead == 'V') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(113);
      if (lookahead == 'V') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(184);
      if (lookahead == 'R') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'D') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(276);
      if (lookahead == 'O') ADVANCE(83);
      if (lookahead == 'R') ADVANCE(454);
      if (lookahead == 'U') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(498);
      if (lookahead == 'O') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(364);
      if (lookahead == 'I') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(277);
      if (lookahead == 'I') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(263);
      if (lookahead == 'O') ADVANCE(456);
      if (lookahead == 'S') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(183);
      if (lookahead == 'R') ADVANCE(116);
      if (lookahead == 'V') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(379);
      if (lookahead == 'I') ADVANCE(544);
      if (lookahead == 'O') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(340);
      if (lookahead == 'O') ADVANCE(195);
      if (lookahead == 'R') ADVANCE(549);
      if (lookahead == 'U') ADVANCE(274);
      if (lookahead == 'Y') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(258);
      if (lookahead == 'O') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'H') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(362);
      if (lookahead == 'L') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'K') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'K') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'K') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(397);
      if (lookahead == 'N') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(398);
      if (lookahead == 'T') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(552);
      if (lookahead == 'R') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(511);
      if (lookahead == 'M') ADVANCE(372);
      if (lookahead == 'N') ADVANCE(285);
      if (lookahead == 'R') ADVANCE(265);
      if (lookahead == 'V') ADVANCE(253);
      if (lookahead == 'X') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(468);
      if (lookahead == 'T') ADVANCE(380);
      if (lookahead == 'U') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(485);
      if (lookahead == 'N') ADVANCE(512);
      if (lookahead == 'U') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(164);
      if (lookahead == 'U') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(499);
      if (lookahead == 'S') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'P') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(395);
      if (lookahead == 'X') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(308);
      if (lookahead == 'X') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(461);
      if (lookahead == 'U') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'V') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'V') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'V') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'W') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead == 'e') ADVANCE(682);
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead == 'i') ADVANCE(593);
      if (lookahead == 'o') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(734);
      if (lookahead == 'i') ADVANCE(724);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(599);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(856);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(875);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(859);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(769);
      if (lookahead == 'c') ADVANCE(595);
      if (lookahead == 'g') ADVANCE(571);
      if (lookahead == 'l') ADVANCE(706);
      if (lookahead == 'n') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(665);
      if (lookahead == 't') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(693);
      if (lookahead == 'f') ADVANCE(663);
      if (lookahead == 'p') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(872);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(725);
      if (lookahead == 'v') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(866);
      if (lookahead == 'f') ADVANCE(705);
      if (lookahead == 'p') ADVANCE(670);
      if (lookahead == 's') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(589);
      if (lookahead == 'o') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead == 'v') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == 'r') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(602);
      if (lookahead == 'v') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(879);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(596);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(772);
      if (lookahead == 'u') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(816);
      if (lookahead == 'o') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(683);
      if (lookahead == 'i') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(597);
      if (lookahead == 'i') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(583);
      if (lookahead == 'o') ADVANCE(774);
      if (lookahead == 's') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == 'v') ADVANCE(657);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(698);
      if (lookahead == 'i') ADVANCE(862);
      if (lookahead == 'o') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(659);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(867);
      if (lookahead == 'u') ADVANCE(594);
      if (lookahead == 'y') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(576);
      if (lookahead == 'o') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'h') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(681);
      if (lookahead == 'l') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'k') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(873);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(715);
      if (lookahead == 'n') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(865);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(716);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(870);
      if (lookahead == 'r') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(829);
      if (lookahead == 'm') ADVANCE(691);
      if (lookahead == 'n') ADVANCE(607);
      if (lookahead == 'r') ADVANCE(585);
      if (lookahead == 'v') ADVANCE(573);
      if (lookahead == 'x') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(786);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == 'u') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(803);
      if (lookahead == 'n') ADVANCE(830);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(577);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(850);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(801);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(817);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(841);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(714);
      if (lookahead == 'x') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(627);
      if (lookahead == 'x') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(779);
      if (lookahead == 'u') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(853);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(581);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(643);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'v') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'w') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(884);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_start_definition] = ACTIONS(1),
    [sym_end_definition] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
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
    [aux_sym_operator_token1] = ACTIONS(1),
    [aux_sym_operator_token2] = ACTIONS(1),
    [aux_sym_operator_token3] = ACTIONS(1),
    [aux_sym_operator_token4] = ACTIONS(1),
    [aux_sym_operator_token5] = ACTIONS(1),
    [aux_sym_operator_token6] = ACTIONS(1),
    [aux_sym_operator_token7] = ACTIONS(1),
    [aux_sym_operator_token8] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym__definition] = STATE(2),
    [sym__tokens] = STATE(2),
    [sym_builtin] = STATE(2),
    [sym_word_definition] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_core] = STATE(10),
    [sym_operator] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_string] = ACTIONS(5),
    [sym_number] = ACTIONS(7),
    [sym_start_definition] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(11),
    [aux_sym_comment_token2] = ACTIONS(11),
    [aux_sym_core_token1] = ACTIONS(13),
    [aux_sym_core_token2] = ACTIONS(13),
    [aux_sym_core_token3] = ACTIONS(13),
    [aux_sym_core_token4] = ACTIONS(13),
    [aux_sym_core_token5] = ACTIONS(13),
    [aux_sym_core_token6] = ACTIONS(13),
    [aux_sym_core_token7] = ACTIONS(13),
    [aux_sym_core_token8] = ACTIONS(13),
    [aux_sym_core_token9] = ACTIONS(13),
    [aux_sym_core_token10] = ACTIONS(13),
    [aux_sym_core_token11] = ACTIONS(13),
    [aux_sym_core_token12] = ACTIONS(13),
    [aux_sym_core_token13] = ACTIONS(13),
    [aux_sym_core_token14] = ACTIONS(13),
    [aux_sym_core_token15] = ACTIONS(13),
    [aux_sym_core_token16] = ACTIONS(13),
    [aux_sym_core_token17] = ACTIONS(13),
    [aux_sym_core_token18] = ACTIONS(13),
    [aux_sym_core_token19] = ACTIONS(13),
    [aux_sym_core_token20] = ACTIONS(13),
    [aux_sym_core_token21] = ACTIONS(13),
    [aux_sym_core_token22] = ACTIONS(13),
    [aux_sym_core_token23] = ACTIONS(13),
    [aux_sym_core_token24] = ACTIONS(13),
    [aux_sym_core_token25] = ACTIONS(13),
    [aux_sym_core_token26] = ACTIONS(13),
    [aux_sym_core_token27] = ACTIONS(13),
    [aux_sym_core_token28] = ACTIONS(13),
    [aux_sym_core_token29] = ACTIONS(13),
    [aux_sym_core_token30] = ACTIONS(13),
    [aux_sym_core_token31] = ACTIONS(13),
    [aux_sym_core_token32] = ACTIONS(13),
    [aux_sym_core_token33] = ACTIONS(13),
    [aux_sym_core_token34] = ACTIONS(13),
    [aux_sym_core_token35] = ACTIONS(13),
    [aux_sym_core_token36] = ACTIONS(13),
    [aux_sym_core_token37] = ACTIONS(13),
    [aux_sym_core_token38] = ACTIONS(13),
    [aux_sym_core_token39] = ACTIONS(13),
    [aux_sym_core_token40] = ACTIONS(13),
    [aux_sym_core_token41] = ACTIONS(13),
    [aux_sym_core_token42] = ACTIONS(13),
    [aux_sym_core_token43] = ACTIONS(13),
    [aux_sym_core_token44] = ACTIONS(13),
    [aux_sym_core_token45] = ACTIONS(13),
    [aux_sym_core_token46] = ACTIONS(13),
    [aux_sym_core_token47] = ACTIONS(13),
    [aux_sym_core_token48] = ACTIONS(13),
    [aux_sym_core_token49] = ACTIONS(13),
    [aux_sym_core_token50] = ACTIONS(13),
    [aux_sym_core_token51] = ACTIONS(13),
    [aux_sym_core_token52] = ACTIONS(13),
    [aux_sym_core_token53] = ACTIONS(13),
    [aux_sym_core_token54] = ACTIONS(13),
    [aux_sym_core_token55] = ACTIONS(13),
    [aux_sym_core_token56] = ACTIONS(13),
    [aux_sym_core_token57] = ACTIONS(13),
    [aux_sym_core_token58] = ACTIONS(13),
    [aux_sym_core_token59] = ACTIONS(13),
    [aux_sym_core_token60] = ACTIONS(13),
    [aux_sym_core_token61] = ACTIONS(13),
    [aux_sym_core_token62] = ACTIONS(13),
    [aux_sym_core_token63] = ACTIONS(13),
    [aux_sym_core_token64] = ACTIONS(13),
    [aux_sym_core_token65] = ACTIONS(13),
    [aux_sym_core_token66] = ACTIONS(13),
    [aux_sym_core_token67] = ACTIONS(13),
    [aux_sym_core_token68] = ACTIONS(13),
    [aux_sym_core_token69] = ACTIONS(13),
    [aux_sym_core_token70] = ACTIONS(13),
    [aux_sym_core_token71] = ACTIONS(13),
    [aux_sym_core_token72] = ACTIONS(13),
    [aux_sym_core_token73] = ACTIONS(13),
    [aux_sym_core_token74] = ACTIONS(13),
    [aux_sym_core_token75] = ACTIONS(13),
    [aux_sym_core_token76] = ACTIONS(13),
    [aux_sym_core_token77] = ACTIONS(13),
    [aux_sym_core_token78] = ACTIONS(13),
    [aux_sym_core_token79] = ACTIONS(13),
    [aux_sym_core_token80] = ACTIONS(13),
    [aux_sym_core_token81] = ACTIONS(13),
    [aux_sym_core_token82] = ACTIONS(13),
    [aux_sym_core_token83] = ACTIONS(13),
    [aux_sym_core_token84] = ACTIONS(13),
    [aux_sym_core_token85] = ACTIONS(13),
    [aux_sym_core_token86] = ACTIONS(13),
    [aux_sym_core_token87] = ACTIONS(13),
    [aux_sym_core_token88] = ACTIONS(13),
    [aux_sym_core_token89] = ACTIONS(13),
    [aux_sym_core_token90] = ACTIONS(13),
    [aux_sym_core_token91] = ACTIONS(13),
    [aux_sym_core_token92] = ACTIONS(13),
    [aux_sym_core_token93] = ACTIONS(13),
    [aux_sym_core_token94] = ACTIONS(13),
    [aux_sym_core_token95] = ACTIONS(13),
    [aux_sym_core_token96] = ACTIONS(13),
    [aux_sym_core_token97] = ACTIONS(13),
    [aux_sym_core_token98] = ACTIONS(13),
    [aux_sym_core_token99] = ACTIONS(13),
    [aux_sym_core_token100] = ACTIONS(13),
    [aux_sym_core_token101] = ACTIONS(13),
    [aux_sym_core_token102] = ACTIONS(13),
    [aux_sym_core_token103] = ACTIONS(13),
    [aux_sym_core_token104] = ACTIONS(13),
    [aux_sym_core_token105] = ACTIONS(13),
    [aux_sym_core_token106] = ACTIONS(13),
    [aux_sym_core_token107] = ACTIONS(13),
    [aux_sym_core_token108] = ACTIONS(13),
    [aux_sym_core_token109] = ACTIONS(13),
    [aux_sym_core_token110] = ACTIONS(13),
    [aux_sym_core_token111] = ACTIONS(13),
    [aux_sym_core_token112] = ACTIONS(13),
    [aux_sym_core_token113] = ACTIONS(13),
    [aux_sym_core_token114] = ACTIONS(13),
    [aux_sym_core_token115] = ACTIONS(13),
    [aux_sym_core_token116] = ACTIONS(13),
    [aux_sym_core_token117] = ACTIONS(13),
    [aux_sym_core_token118] = ACTIONS(13),
    [aux_sym_core_token119] = ACTIONS(13),
    [aux_sym_core_token120] = ACTIONS(13),
    [aux_sym_core_token121] = ACTIONS(13),
    [aux_sym_core_token122] = ACTIONS(13),
    [aux_sym_core_token123] = ACTIONS(13),
    [aux_sym_core_token124] = ACTIONS(13),
    [aux_sym_core_token125] = ACTIONS(13),
    [aux_sym_core_token126] = ACTIONS(13),
    [aux_sym_core_token127] = ACTIONS(13),
    [aux_sym_core_token128] = ACTIONS(13),
    [aux_sym_core_token129] = ACTIONS(13),
    [aux_sym_core_token130] = ACTIONS(13),
    [aux_sym_core_token131] = ACTIONS(13),
    [aux_sym_core_token132] = ACTIONS(13),
    [aux_sym_core_token133] = ACTIONS(13),
    [aux_sym_core_token134] = ACTIONS(13),
    [aux_sym_core_token135] = ACTIONS(13),
    [aux_sym_core_token136] = ACTIONS(13),
    [aux_sym_core_token137] = ACTIONS(13),
    [aux_sym_core_token138] = ACTIONS(13),
    [aux_sym_core_token139] = ACTIONS(13),
    [aux_sym_core_token140] = ACTIONS(13),
    [aux_sym_core_token141] = ACTIONS(13),
    [aux_sym_core_token142] = ACTIONS(13),
    [aux_sym_core_token143] = ACTIONS(13),
    [aux_sym_core_token144] = ACTIONS(13),
    [aux_sym_core_token145] = ACTIONS(13),
    [aux_sym_core_token146] = ACTIONS(13),
    [aux_sym_core_token147] = ACTIONS(13),
    [aux_sym_core_token148] = ACTIONS(13),
    [aux_sym_core_token149] = ACTIONS(13),
    [aux_sym_core_token150] = ACTIONS(13),
    [aux_sym_core_token151] = ACTIONS(13),
    [aux_sym_core_token152] = ACTIONS(13),
    [aux_sym_core_token153] = ACTIONS(13),
    [aux_sym_core_token154] = ACTIONS(13),
    [aux_sym_core_token155] = ACTIONS(13),
    [aux_sym_core_token156] = ACTIONS(13),
    [aux_sym_core_token157] = ACTIONS(13),
    [aux_sym_core_token158] = ACTIONS(13),
    [aux_sym_core_token159] = ACTIONS(13),
    [aux_sym_core_token160] = ACTIONS(13),
    [aux_sym_core_token161] = ACTIONS(13),
    [aux_sym_core_token162] = ACTIONS(13),
    [aux_sym_core_token163] = ACTIONS(13),
    [aux_sym_core_token164] = ACTIONS(13),
    [aux_sym_core_token165] = ACTIONS(13),
    [aux_sym_core_token166] = ACTIONS(13),
    [aux_sym_core_token167] = ACTIONS(13),
    [aux_sym_core_token168] = ACTIONS(13),
    [aux_sym_core_token169] = ACTIONS(13),
    [aux_sym_core_token170] = ACTIONS(13),
    [aux_sym_core_token171] = ACTIONS(13),
    [aux_sym_operator_token1] = ACTIONS(15),
    [aux_sym_operator_token2] = ACTIONS(15),
    [aux_sym_operator_token3] = ACTIONS(15),
    [aux_sym_operator_token4] = ACTIONS(15),
    [aux_sym_operator_token5] = ACTIONS(15),
    [aux_sym_operator_token6] = ACTIONS(15),
    [aux_sym_operator_token7] = ACTIONS(15),
    [aux_sym_operator_token8] = ACTIONS(15),
    [sym_word] = ACTIONS(7),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym__tokens] = STATE(3),
    [sym_builtin] = STATE(3),
    [sym_word_definition] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_core] = STATE(10),
    [sym_operator] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_string] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_start_definition] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(11),
    [aux_sym_comment_token2] = ACTIONS(11),
    [aux_sym_core_token1] = ACTIONS(13),
    [aux_sym_core_token2] = ACTIONS(13),
    [aux_sym_core_token3] = ACTIONS(13),
    [aux_sym_core_token4] = ACTIONS(13),
    [aux_sym_core_token5] = ACTIONS(13),
    [aux_sym_core_token6] = ACTIONS(13),
    [aux_sym_core_token7] = ACTIONS(13),
    [aux_sym_core_token8] = ACTIONS(13),
    [aux_sym_core_token9] = ACTIONS(13),
    [aux_sym_core_token10] = ACTIONS(13),
    [aux_sym_core_token11] = ACTIONS(13),
    [aux_sym_core_token12] = ACTIONS(13),
    [aux_sym_core_token13] = ACTIONS(13),
    [aux_sym_core_token14] = ACTIONS(13),
    [aux_sym_core_token15] = ACTIONS(13),
    [aux_sym_core_token16] = ACTIONS(13),
    [aux_sym_core_token17] = ACTIONS(13),
    [aux_sym_core_token18] = ACTIONS(13),
    [aux_sym_core_token19] = ACTIONS(13),
    [aux_sym_core_token20] = ACTIONS(13),
    [aux_sym_core_token21] = ACTIONS(13),
    [aux_sym_core_token22] = ACTIONS(13),
    [aux_sym_core_token23] = ACTIONS(13),
    [aux_sym_core_token24] = ACTIONS(13),
    [aux_sym_core_token25] = ACTIONS(13),
    [aux_sym_core_token26] = ACTIONS(13),
    [aux_sym_core_token27] = ACTIONS(13),
    [aux_sym_core_token28] = ACTIONS(13),
    [aux_sym_core_token29] = ACTIONS(13),
    [aux_sym_core_token30] = ACTIONS(13),
    [aux_sym_core_token31] = ACTIONS(13),
    [aux_sym_core_token32] = ACTIONS(13),
    [aux_sym_core_token33] = ACTIONS(13),
    [aux_sym_core_token34] = ACTIONS(13),
    [aux_sym_core_token35] = ACTIONS(13),
    [aux_sym_core_token36] = ACTIONS(13),
    [aux_sym_core_token37] = ACTIONS(13),
    [aux_sym_core_token38] = ACTIONS(13),
    [aux_sym_core_token39] = ACTIONS(13),
    [aux_sym_core_token40] = ACTIONS(13),
    [aux_sym_core_token41] = ACTIONS(13),
    [aux_sym_core_token42] = ACTIONS(13),
    [aux_sym_core_token43] = ACTIONS(13),
    [aux_sym_core_token44] = ACTIONS(13),
    [aux_sym_core_token45] = ACTIONS(13),
    [aux_sym_core_token46] = ACTIONS(13),
    [aux_sym_core_token47] = ACTIONS(13),
    [aux_sym_core_token48] = ACTIONS(13),
    [aux_sym_core_token49] = ACTIONS(13),
    [aux_sym_core_token50] = ACTIONS(13),
    [aux_sym_core_token51] = ACTIONS(13),
    [aux_sym_core_token52] = ACTIONS(13),
    [aux_sym_core_token53] = ACTIONS(13),
    [aux_sym_core_token54] = ACTIONS(13),
    [aux_sym_core_token55] = ACTIONS(13),
    [aux_sym_core_token56] = ACTIONS(13),
    [aux_sym_core_token57] = ACTIONS(13),
    [aux_sym_core_token58] = ACTIONS(13),
    [aux_sym_core_token59] = ACTIONS(13),
    [aux_sym_core_token60] = ACTIONS(13),
    [aux_sym_core_token61] = ACTIONS(13),
    [aux_sym_core_token62] = ACTIONS(13),
    [aux_sym_core_token63] = ACTIONS(13),
    [aux_sym_core_token64] = ACTIONS(13),
    [aux_sym_core_token65] = ACTIONS(13),
    [aux_sym_core_token66] = ACTIONS(13),
    [aux_sym_core_token67] = ACTIONS(13),
    [aux_sym_core_token68] = ACTIONS(13),
    [aux_sym_core_token69] = ACTIONS(13),
    [aux_sym_core_token70] = ACTIONS(13),
    [aux_sym_core_token71] = ACTIONS(13),
    [aux_sym_core_token72] = ACTIONS(13),
    [aux_sym_core_token73] = ACTIONS(13),
    [aux_sym_core_token74] = ACTIONS(13),
    [aux_sym_core_token75] = ACTIONS(13),
    [aux_sym_core_token76] = ACTIONS(13),
    [aux_sym_core_token77] = ACTIONS(13),
    [aux_sym_core_token78] = ACTIONS(13),
    [aux_sym_core_token79] = ACTIONS(13),
    [aux_sym_core_token80] = ACTIONS(13),
    [aux_sym_core_token81] = ACTIONS(13),
    [aux_sym_core_token82] = ACTIONS(13),
    [aux_sym_core_token83] = ACTIONS(13),
    [aux_sym_core_token84] = ACTIONS(13),
    [aux_sym_core_token85] = ACTIONS(13),
    [aux_sym_core_token86] = ACTIONS(13),
    [aux_sym_core_token87] = ACTIONS(13),
    [aux_sym_core_token88] = ACTIONS(13),
    [aux_sym_core_token89] = ACTIONS(13),
    [aux_sym_core_token90] = ACTIONS(13),
    [aux_sym_core_token91] = ACTIONS(13),
    [aux_sym_core_token92] = ACTIONS(13),
    [aux_sym_core_token93] = ACTIONS(13),
    [aux_sym_core_token94] = ACTIONS(13),
    [aux_sym_core_token95] = ACTIONS(13),
    [aux_sym_core_token96] = ACTIONS(13),
    [aux_sym_core_token97] = ACTIONS(13),
    [aux_sym_core_token98] = ACTIONS(13),
    [aux_sym_core_token99] = ACTIONS(13),
    [aux_sym_core_token100] = ACTIONS(13),
    [aux_sym_core_token101] = ACTIONS(13),
    [aux_sym_core_token102] = ACTIONS(13),
    [aux_sym_core_token103] = ACTIONS(13),
    [aux_sym_core_token104] = ACTIONS(13),
    [aux_sym_core_token105] = ACTIONS(13),
    [aux_sym_core_token106] = ACTIONS(13),
    [aux_sym_core_token107] = ACTIONS(13),
    [aux_sym_core_token108] = ACTIONS(13),
    [aux_sym_core_token109] = ACTIONS(13),
    [aux_sym_core_token110] = ACTIONS(13),
    [aux_sym_core_token111] = ACTIONS(13),
    [aux_sym_core_token112] = ACTIONS(13),
    [aux_sym_core_token113] = ACTIONS(13),
    [aux_sym_core_token114] = ACTIONS(13),
    [aux_sym_core_token115] = ACTIONS(13),
    [aux_sym_core_token116] = ACTIONS(13),
    [aux_sym_core_token117] = ACTIONS(13),
    [aux_sym_core_token118] = ACTIONS(13),
    [aux_sym_core_token119] = ACTIONS(13),
    [aux_sym_core_token120] = ACTIONS(13),
    [aux_sym_core_token121] = ACTIONS(13),
    [aux_sym_core_token122] = ACTIONS(13),
    [aux_sym_core_token123] = ACTIONS(13),
    [aux_sym_core_token124] = ACTIONS(13),
    [aux_sym_core_token125] = ACTIONS(13),
    [aux_sym_core_token126] = ACTIONS(13),
    [aux_sym_core_token127] = ACTIONS(13),
    [aux_sym_core_token128] = ACTIONS(13),
    [aux_sym_core_token129] = ACTIONS(13),
    [aux_sym_core_token130] = ACTIONS(13),
    [aux_sym_core_token131] = ACTIONS(13),
    [aux_sym_core_token132] = ACTIONS(13),
    [aux_sym_core_token133] = ACTIONS(13),
    [aux_sym_core_token134] = ACTIONS(13),
    [aux_sym_core_token135] = ACTIONS(13),
    [aux_sym_core_token136] = ACTIONS(13),
    [aux_sym_core_token137] = ACTIONS(13),
    [aux_sym_core_token138] = ACTIONS(13),
    [aux_sym_core_token139] = ACTIONS(13),
    [aux_sym_core_token140] = ACTIONS(13),
    [aux_sym_core_token141] = ACTIONS(13),
    [aux_sym_core_token142] = ACTIONS(13),
    [aux_sym_core_token143] = ACTIONS(13),
    [aux_sym_core_token144] = ACTIONS(13),
    [aux_sym_core_token145] = ACTIONS(13),
    [aux_sym_core_token146] = ACTIONS(13),
    [aux_sym_core_token147] = ACTIONS(13),
    [aux_sym_core_token148] = ACTIONS(13),
    [aux_sym_core_token149] = ACTIONS(13),
    [aux_sym_core_token150] = ACTIONS(13),
    [aux_sym_core_token151] = ACTIONS(13),
    [aux_sym_core_token152] = ACTIONS(13),
    [aux_sym_core_token153] = ACTIONS(13),
    [aux_sym_core_token154] = ACTIONS(13),
    [aux_sym_core_token155] = ACTIONS(13),
    [aux_sym_core_token156] = ACTIONS(13),
    [aux_sym_core_token157] = ACTIONS(13),
    [aux_sym_core_token158] = ACTIONS(13),
    [aux_sym_core_token159] = ACTIONS(13),
    [aux_sym_core_token160] = ACTIONS(13),
    [aux_sym_core_token161] = ACTIONS(13),
    [aux_sym_core_token162] = ACTIONS(13),
    [aux_sym_core_token163] = ACTIONS(13),
    [aux_sym_core_token164] = ACTIONS(13),
    [aux_sym_core_token165] = ACTIONS(13),
    [aux_sym_core_token166] = ACTIONS(13),
    [aux_sym_core_token167] = ACTIONS(13),
    [aux_sym_core_token168] = ACTIONS(13),
    [aux_sym_core_token169] = ACTIONS(13),
    [aux_sym_core_token170] = ACTIONS(13),
    [aux_sym_core_token171] = ACTIONS(13),
    [aux_sym_operator_token1] = ACTIONS(15),
    [aux_sym_operator_token2] = ACTIONS(15),
    [aux_sym_operator_token3] = ACTIONS(15),
    [aux_sym_operator_token4] = ACTIONS(15),
    [aux_sym_operator_token5] = ACTIONS(15),
    [aux_sym_operator_token6] = ACTIONS(15),
    [aux_sym_operator_token7] = ACTIONS(15),
    [aux_sym_operator_token8] = ACTIONS(15),
    [sym_word] = ACTIONS(21),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym__tokens] = STATE(3),
    [sym_builtin] = STATE(3),
    [sym_word_definition] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_core] = STATE(10),
    [sym_operator] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_string] = ACTIONS(25),
    [sym_number] = ACTIONS(28),
    [sym_start_definition] = ACTIONS(31),
    [aux_sym_comment_token1] = ACTIONS(34),
    [aux_sym_comment_token2] = ACTIONS(34),
    [aux_sym_core_token1] = ACTIONS(37),
    [aux_sym_core_token2] = ACTIONS(37),
    [aux_sym_core_token3] = ACTIONS(37),
    [aux_sym_core_token4] = ACTIONS(37),
    [aux_sym_core_token5] = ACTIONS(37),
    [aux_sym_core_token6] = ACTIONS(37),
    [aux_sym_core_token7] = ACTIONS(37),
    [aux_sym_core_token8] = ACTIONS(37),
    [aux_sym_core_token9] = ACTIONS(37),
    [aux_sym_core_token10] = ACTIONS(37),
    [aux_sym_core_token11] = ACTIONS(37),
    [aux_sym_core_token12] = ACTIONS(37),
    [aux_sym_core_token13] = ACTIONS(37),
    [aux_sym_core_token14] = ACTIONS(37),
    [aux_sym_core_token15] = ACTIONS(37),
    [aux_sym_core_token16] = ACTIONS(37),
    [aux_sym_core_token17] = ACTIONS(37),
    [aux_sym_core_token18] = ACTIONS(37),
    [aux_sym_core_token19] = ACTIONS(37),
    [aux_sym_core_token20] = ACTIONS(37),
    [aux_sym_core_token21] = ACTIONS(37),
    [aux_sym_core_token22] = ACTIONS(37),
    [aux_sym_core_token23] = ACTIONS(37),
    [aux_sym_core_token24] = ACTIONS(37),
    [aux_sym_core_token25] = ACTIONS(37),
    [aux_sym_core_token26] = ACTIONS(37),
    [aux_sym_core_token27] = ACTIONS(37),
    [aux_sym_core_token28] = ACTIONS(37),
    [aux_sym_core_token29] = ACTIONS(37),
    [aux_sym_core_token30] = ACTIONS(37),
    [aux_sym_core_token31] = ACTIONS(37),
    [aux_sym_core_token32] = ACTIONS(37),
    [aux_sym_core_token33] = ACTIONS(37),
    [aux_sym_core_token34] = ACTIONS(37),
    [aux_sym_core_token35] = ACTIONS(37),
    [aux_sym_core_token36] = ACTIONS(37),
    [aux_sym_core_token37] = ACTIONS(37),
    [aux_sym_core_token38] = ACTIONS(37),
    [aux_sym_core_token39] = ACTIONS(37),
    [aux_sym_core_token40] = ACTIONS(37),
    [aux_sym_core_token41] = ACTIONS(37),
    [aux_sym_core_token42] = ACTIONS(37),
    [aux_sym_core_token43] = ACTIONS(37),
    [aux_sym_core_token44] = ACTIONS(37),
    [aux_sym_core_token45] = ACTIONS(37),
    [aux_sym_core_token46] = ACTIONS(37),
    [aux_sym_core_token47] = ACTIONS(37),
    [aux_sym_core_token48] = ACTIONS(37),
    [aux_sym_core_token49] = ACTIONS(37),
    [aux_sym_core_token50] = ACTIONS(37),
    [aux_sym_core_token51] = ACTIONS(37),
    [aux_sym_core_token52] = ACTIONS(37),
    [aux_sym_core_token53] = ACTIONS(37),
    [aux_sym_core_token54] = ACTIONS(37),
    [aux_sym_core_token55] = ACTIONS(37),
    [aux_sym_core_token56] = ACTIONS(37),
    [aux_sym_core_token57] = ACTIONS(37),
    [aux_sym_core_token58] = ACTIONS(37),
    [aux_sym_core_token59] = ACTIONS(37),
    [aux_sym_core_token60] = ACTIONS(37),
    [aux_sym_core_token61] = ACTIONS(37),
    [aux_sym_core_token62] = ACTIONS(37),
    [aux_sym_core_token63] = ACTIONS(37),
    [aux_sym_core_token64] = ACTIONS(37),
    [aux_sym_core_token65] = ACTIONS(37),
    [aux_sym_core_token66] = ACTIONS(37),
    [aux_sym_core_token67] = ACTIONS(37),
    [aux_sym_core_token68] = ACTIONS(37),
    [aux_sym_core_token69] = ACTIONS(37),
    [aux_sym_core_token70] = ACTIONS(37),
    [aux_sym_core_token71] = ACTIONS(37),
    [aux_sym_core_token72] = ACTIONS(37),
    [aux_sym_core_token73] = ACTIONS(37),
    [aux_sym_core_token74] = ACTIONS(37),
    [aux_sym_core_token75] = ACTIONS(37),
    [aux_sym_core_token76] = ACTIONS(37),
    [aux_sym_core_token77] = ACTIONS(37),
    [aux_sym_core_token78] = ACTIONS(37),
    [aux_sym_core_token79] = ACTIONS(37),
    [aux_sym_core_token80] = ACTIONS(37),
    [aux_sym_core_token81] = ACTIONS(37),
    [aux_sym_core_token82] = ACTIONS(37),
    [aux_sym_core_token83] = ACTIONS(37),
    [aux_sym_core_token84] = ACTIONS(37),
    [aux_sym_core_token85] = ACTIONS(37),
    [aux_sym_core_token86] = ACTIONS(37),
    [aux_sym_core_token87] = ACTIONS(37),
    [aux_sym_core_token88] = ACTIONS(37),
    [aux_sym_core_token89] = ACTIONS(37),
    [aux_sym_core_token90] = ACTIONS(37),
    [aux_sym_core_token91] = ACTIONS(37),
    [aux_sym_core_token92] = ACTIONS(37),
    [aux_sym_core_token93] = ACTIONS(37),
    [aux_sym_core_token94] = ACTIONS(37),
    [aux_sym_core_token95] = ACTIONS(37),
    [aux_sym_core_token96] = ACTIONS(37),
    [aux_sym_core_token97] = ACTIONS(37),
    [aux_sym_core_token98] = ACTIONS(37),
    [aux_sym_core_token99] = ACTIONS(37),
    [aux_sym_core_token100] = ACTIONS(37),
    [aux_sym_core_token101] = ACTIONS(37),
    [aux_sym_core_token102] = ACTIONS(37),
    [aux_sym_core_token103] = ACTIONS(37),
    [aux_sym_core_token104] = ACTIONS(37),
    [aux_sym_core_token105] = ACTIONS(37),
    [aux_sym_core_token106] = ACTIONS(37),
    [aux_sym_core_token107] = ACTIONS(37),
    [aux_sym_core_token108] = ACTIONS(37),
    [aux_sym_core_token109] = ACTIONS(37),
    [aux_sym_core_token110] = ACTIONS(37),
    [aux_sym_core_token111] = ACTIONS(37),
    [aux_sym_core_token112] = ACTIONS(37),
    [aux_sym_core_token113] = ACTIONS(37),
    [aux_sym_core_token114] = ACTIONS(37),
    [aux_sym_core_token115] = ACTIONS(37),
    [aux_sym_core_token116] = ACTIONS(37),
    [aux_sym_core_token117] = ACTIONS(37),
    [aux_sym_core_token118] = ACTIONS(37),
    [aux_sym_core_token119] = ACTIONS(37),
    [aux_sym_core_token120] = ACTIONS(37),
    [aux_sym_core_token121] = ACTIONS(37),
    [aux_sym_core_token122] = ACTIONS(37),
    [aux_sym_core_token123] = ACTIONS(37),
    [aux_sym_core_token124] = ACTIONS(37),
    [aux_sym_core_token125] = ACTIONS(37),
    [aux_sym_core_token126] = ACTIONS(37),
    [aux_sym_core_token127] = ACTIONS(37),
    [aux_sym_core_token128] = ACTIONS(37),
    [aux_sym_core_token129] = ACTIONS(37),
    [aux_sym_core_token130] = ACTIONS(37),
    [aux_sym_core_token131] = ACTIONS(37),
    [aux_sym_core_token132] = ACTIONS(37),
    [aux_sym_core_token133] = ACTIONS(37),
    [aux_sym_core_token134] = ACTIONS(37),
    [aux_sym_core_token135] = ACTIONS(37),
    [aux_sym_core_token136] = ACTIONS(37),
    [aux_sym_core_token137] = ACTIONS(37),
    [aux_sym_core_token138] = ACTIONS(37),
    [aux_sym_core_token139] = ACTIONS(37),
    [aux_sym_core_token140] = ACTIONS(37),
    [aux_sym_core_token141] = ACTIONS(37),
    [aux_sym_core_token142] = ACTIONS(37),
    [aux_sym_core_token143] = ACTIONS(37),
    [aux_sym_core_token144] = ACTIONS(37),
    [aux_sym_core_token145] = ACTIONS(37),
    [aux_sym_core_token146] = ACTIONS(37),
    [aux_sym_core_token147] = ACTIONS(37),
    [aux_sym_core_token148] = ACTIONS(37),
    [aux_sym_core_token149] = ACTIONS(37),
    [aux_sym_core_token150] = ACTIONS(37),
    [aux_sym_core_token151] = ACTIONS(37),
    [aux_sym_core_token152] = ACTIONS(37),
    [aux_sym_core_token153] = ACTIONS(37),
    [aux_sym_core_token154] = ACTIONS(37),
    [aux_sym_core_token155] = ACTIONS(37),
    [aux_sym_core_token156] = ACTIONS(37),
    [aux_sym_core_token157] = ACTIONS(37),
    [aux_sym_core_token158] = ACTIONS(37),
    [aux_sym_core_token159] = ACTIONS(37),
    [aux_sym_core_token160] = ACTIONS(37),
    [aux_sym_core_token161] = ACTIONS(37),
    [aux_sym_core_token162] = ACTIONS(37),
    [aux_sym_core_token163] = ACTIONS(37),
    [aux_sym_core_token164] = ACTIONS(37),
    [aux_sym_core_token165] = ACTIONS(37),
    [aux_sym_core_token166] = ACTIONS(37),
    [aux_sym_core_token167] = ACTIONS(37),
    [aux_sym_core_token168] = ACTIONS(37),
    [aux_sym_core_token169] = ACTIONS(37),
    [aux_sym_core_token170] = ACTIONS(37),
    [aux_sym_core_token171] = ACTIONS(37),
    [aux_sym_operator_token1] = ACTIONS(40),
    [aux_sym_operator_token2] = ACTIONS(40),
    [aux_sym_operator_token3] = ACTIONS(40),
    [aux_sym_operator_token4] = ACTIONS(40),
    [aux_sym_operator_token5] = ACTIONS(40),
    [aux_sym_operator_token6] = ACTIONS(40),
    [aux_sym_operator_token7] = ACTIONS(40),
    [aux_sym_operator_token8] = ACTIONS(40),
    [sym_word] = ACTIONS(28),
  },
  [4] = {
    [sym__tokens] = STATE(5),
    [sym_builtin] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_core] = STATE(15),
    [sym_operator] = STATE(15),
    [aux_sym_word_definition_repeat1] = STATE(5),
    [sym_string] = ACTIONS(43),
    [sym_number] = ACTIONS(45),
    [sym_end_definition] = ACTIONS(47),
    [aux_sym_comment_token1] = ACTIONS(49),
    [aux_sym_comment_token2] = ACTIONS(49),
    [aux_sym_core_token1] = ACTIONS(51),
    [aux_sym_core_token2] = ACTIONS(51),
    [aux_sym_core_token3] = ACTIONS(51),
    [aux_sym_core_token4] = ACTIONS(51),
    [aux_sym_core_token5] = ACTIONS(51),
    [aux_sym_core_token6] = ACTIONS(51),
    [aux_sym_core_token7] = ACTIONS(51),
    [aux_sym_core_token8] = ACTIONS(51),
    [aux_sym_core_token9] = ACTIONS(51),
    [aux_sym_core_token10] = ACTIONS(51),
    [aux_sym_core_token11] = ACTIONS(51),
    [aux_sym_core_token12] = ACTIONS(51),
    [aux_sym_core_token13] = ACTIONS(51),
    [aux_sym_core_token14] = ACTIONS(51),
    [aux_sym_core_token15] = ACTIONS(51),
    [aux_sym_core_token16] = ACTIONS(51),
    [aux_sym_core_token17] = ACTIONS(51),
    [aux_sym_core_token18] = ACTIONS(51),
    [aux_sym_core_token19] = ACTIONS(51),
    [aux_sym_core_token20] = ACTIONS(51),
    [aux_sym_core_token21] = ACTIONS(51),
    [aux_sym_core_token22] = ACTIONS(51),
    [aux_sym_core_token23] = ACTIONS(51),
    [aux_sym_core_token24] = ACTIONS(51),
    [aux_sym_core_token25] = ACTIONS(51),
    [aux_sym_core_token26] = ACTIONS(51),
    [aux_sym_core_token27] = ACTIONS(51),
    [aux_sym_core_token28] = ACTIONS(51),
    [aux_sym_core_token29] = ACTIONS(51),
    [aux_sym_core_token30] = ACTIONS(51),
    [aux_sym_core_token31] = ACTIONS(51),
    [aux_sym_core_token32] = ACTIONS(51),
    [aux_sym_core_token33] = ACTIONS(51),
    [aux_sym_core_token34] = ACTIONS(51),
    [aux_sym_core_token35] = ACTIONS(51),
    [aux_sym_core_token36] = ACTIONS(51),
    [aux_sym_core_token37] = ACTIONS(51),
    [aux_sym_core_token38] = ACTIONS(51),
    [aux_sym_core_token39] = ACTIONS(51),
    [aux_sym_core_token40] = ACTIONS(51),
    [aux_sym_core_token41] = ACTIONS(51),
    [aux_sym_core_token42] = ACTIONS(51),
    [aux_sym_core_token43] = ACTIONS(51),
    [aux_sym_core_token44] = ACTIONS(51),
    [aux_sym_core_token45] = ACTIONS(51),
    [aux_sym_core_token46] = ACTIONS(51),
    [aux_sym_core_token47] = ACTIONS(51),
    [aux_sym_core_token48] = ACTIONS(51),
    [aux_sym_core_token49] = ACTIONS(51),
    [aux_sym_core_token50] = ACTIONS(51),
    [aux_sym_core_token51] = ACTIONS(51),
    [aux_sym_core_token52] = ACTIONS(51),
    [aux_sym_core_token53] = ACTIONS(51),
    [aux_sym_core_token54] = ACTIONS(51),
    [aux_sym_core_token55] = ACTIONS(51),
    [aux_sym_core_token56] = ACTIONS(51),
    [aux_sym_core_token57] = ACTIONS(51),
    [aux_sym_core_token58] = ACTIONS(51),
    [aux_sym_core_token59] = ACTIONS(51),
    [aux_sym_core_token60] = ACTIONS(51),
    [aux_sym_core_token61] = ACTIONS(51),
    [aux_sym_core_token62] = ACTIONS(51),
    [aux_sym_core_token63] = ACTIONS(51),
    [aux_sym_core_token64] = ACTIONS(51),
    [aux_sym_core_token65] = ACTIONS(51),
    [aux_sym_core_token66] = ACTIONS(51),
    [aux_sym_core_token67] = ACTIONS(51),
    [aux_sym_core_token68] = ACTIONS(51),
    [aux_sym_core_token69] = ACTIONS(51),
    [aux_sym_core_token70] = ACTIONS(51),
    [aux_sym_core_token71] = ACTIONS(51),
    [aux_sym_core_token72] = ACTIONS(51),
    [aux_sym_core_token73] = ACTIONS(51),
    [aux_sym_core_token74] = ACTIONS(51),
    [aux_sym_core_token75] = ACTIONS(51),
    [aux_sym_core_token76] = ACTIONS(51),
    [aux_sym_core_token77] = ACTIONS(51),
    [aux_sym_core_token78] = ACTIONS(51),
    [aux_sym_core_token79] = ACTIONS(51),
    [aux_sym_core_token80] = ACTIONS(51),
    [aux_sym_core_token81] = ACTIONS(51),
    [aux_sym_core_token82] = ACTIONS(51),
    [aux_sym_core_token83] = ACTIONS(51),
    [aux_sym_core_token84] = ACTIONS(51),
    [aux_sym_core_token85] = ACTIONS(51),
    [aux_sym_core_token86] = ACTIONS(51),
    [aux_sym_core_token87] = ACTIONS(51),
    [aux_sym_core_token88] = ACTIONS(51),
    [aux_sym_core_token89] = ACTIONS(51),
    [aux_sym_core_token90] = ACTIONS(51),
    [aux_sym_core_token91] = ACTIONS(51),
    [aux_sym_core_token92] = ACTIONS(51),
    [aux_sym_core_token93] = ACTIONS(51),
    [aux_sym_core_token94] = ACTIONS(51),
    [aux_sym_core_token95] = ACTIONS(51),
    [aux_sym_core_token96] = ACTIONS(51),
    [aux_sym_core_token97] = ACTIONS(51),
    [aux_sym_core_token98] = ACTIONS(51),
    [aux_sym_core_token99] = ACTIONS(51),
    [aux_sym_core_token100] = ACTIONS(51),
    [aux_sym_core_token101] = ACTIONS(51),
    [aux_sym_core_token102] = ACTIONS(51),
    [aux_sym_core_token103] = ACTIONS(51),
    [aux_sym_core_token104] = ACTIONS(51),
    [aux_sym_core_token105] = ACTIONS(51),
    [aux_sym_core_token106] = ACTIONS(51),
    [aux_sym_core_token107] = ACTIONS(51),
    [aux_sym_core_token108] = ACTIONS(51),
    [aux_sym_core_token109] = ACTIONS(51),
    [aux_sym_core_token110] = ACTIONS(51),
    [aux_sym_core_token111] = ACTIONS(51),
    [aux_sym_core_token112] = ACTIONS(51),
    [aux_sym_core_token113] = ACTIONS(51),
    [aux_sym_core_token114] = ACTIONS(51),
    [aux_sym_core_token115] = ACTIONS(51),
    [aux_sym_core_token116] = ACTIONS(51),
    [aux_sym_core_token117] = ACTIONS(51),
    [aux_sym_core_token118] = ACTIONS(51),
    [aux_sym_core_token119] = ACTIONS(51),
    [aux_sym_core_token120] = ACTIONS(51),
    [aux_sym_core_token121] = ACTIONS(51),
    [aux_sym_core_token122] = ACTIONS(51),
    [aux_sym_core_token123] = ACTIONS(51),
    [aux_sym_core_token124] = ACTIONS(51),
    [aux_sym_core_token125] = ACTIONS(51),
    [aux_sym_core_token126] = ACTIONS(51),
    [aux_sym_core_token127] = ACTIONS(51),
    [aux_sym_core_token128] = ACTIONS(51),
    [aux_sym_core_token129] = ACTIONS(51),
    [aux_sym_core_token130] = ACTIONS(51),
    [aux_sym_core_token131] = ACTIONS(51),
    [aux_sym_core_token132] = ACTIONS(51),
    [aux_sym_core_token133] = ACTIONS(51),
    [aux_sym_core_token134] = ACTIONS(51),
    [aux_sym_core_token135] = ACTIONS(51),
    [aux_sym_core_token136] = ACTIONS(51),
    [aux_sym_core_token137] = ACTIONS(51),
    [aux_sym_core_token138] = ACTIONS(51),
    [aux_sym_core_token139] = ACTIONS(51),
    [aux_sym_core_token140] = ACTIONS(51),
    [aux_sym_core_token141] = ACTIONS(51),
    [aux_sym_core_token142] = ACTIONS(51),
    [aux_sym_core_token143] = ACTIONS(51),
    [aux_sym_core_token144] = ACTIONS(51),
    [aux_sym_core_token145] = ACTIONS(51),
    [aux_sym_core_token146] = ACTIONS(51),
    [aux_sym_core_token147] = ACTIONS(51),
    [aux_sym_core_token148] = ACTIONS(51),
    [aux_sym_core_token149] = ACTIONS(51),
    [aux_sym_core_token150] = ACTIONS(51),
    [aux_sym_core_token151] = ACTIONS(51),
    [aux_sym_core_token152] = ACTIONS(51),
    [aux_sym_core_token153] = ACTIONS(51),
    [aux_sym_core_token154] = ACTIONS(51),
    [aux_sym_core_token155] = ACTIONS(51),
    [aux_sym_core_token156] = ACTIONS(51),
    [aux_sym_core_token157] = ACTIONS(51),
    [aux_sym_core_token158] = ACTIONS(51),
    [aux_sym_core_token159] = ACTIONS(51),
    [aux_sym_core_token160] = ACTIONS(51),
    [aux_sym_core_token161] = ACTIONS(51),
    [aux_sym_core_token162] = ACTIONS(51),
    [aux_sym_core_token163] = ACTIONS(51),
    [aux_sym_core_token164] = ACTIONS(51),
    [aux_sym_core_token165] = ACTIONS(51),
    [aux_sym_core_token166] = ACTIONS(51),
    [aux_sym_core_token167] = ACTIONS(51),
    [aux_sym_core_token168] = ACTIONS(51),
    [aux_sym_core_token169] = ACTIONS(51),
    [aux_sym_core_token170] = ACTIONS(51),
    [aux_sym_core_token171] = ACTIONS(51),
    [aux_sym_operator_token1] = ACTIONS(53),
    [aux_sym_operator_token2] = ACTIONS(53),
    [aux_sym_operator_token3] = ACTIONS(53),
    [aux_sym_operator_token4] = ACTIONS(53),
    [aux_sym_operator_token5] = ACTIONS(53),
    [aux_sym_operator_token6] = ACTIONS(53),
    [aux_sym_operator_token7] = ACTIONS(53),
    [aux_sym_operator_token8] = ACTIONS(53),
    [sym_word] = ACTIONS(45),
  },
  [5] = {
    [sym__tokens] = STATE(5),
    [sym_builtin] = STATE(5),
    [sym_comment] = STATE(5),
    [sym_core] = STATE(15),
    [sym_operator] = STATE(15),
    [aux_sym_word_definition_repeat1] = STATE(5),
    [sym_string] = ACTIONS(55),
    [sym_number] = ACTIONS(58),
    [sym_end_definition] = ACTIONS(61),
    [aux_sym_comment_token1] = ACTIONS(63),
    [aux_sym_comment_token2] = ACTIONS(63),
    [aux_sym_core_token1] = ACTIONS(66),
    [aux_sym_core_token2] = ACTIONS(66),
    [aux_sym_core_token3] = ACTIONS(66),
    [aux_sym_core_token4] = ACTIONS(66),
    [aux_sym_core_token5] = ACTIONS(66),
    [aux_sym_core_token6] = ACTIONS(66),
    [aux_sym_core_token7] = ACTIONS(66),
    [aux_sym_core_token8] = ACTIONS(66),
    [aux_sym_core_token9] = ACTIONS(66),
    [aux_sym_core_token10] = ACTIONS(66),
    [aux_sym_core_token11] = ACTIONS(66),
    [aux_sym_core_token12] = ACTIONS(66),
    [aux_sym_core_token13] = ACTIONS(66),
    [aux_sym_core_token14] = ACTIONS(66),
    [aux_sym_core_token15] = ACTIONS(66),
    [aux_sym_core_token16] = ACTIONS(66),
    [aux_sym_core_token17] = ACTIONS(66),
    [aux_sym_core_token18] = ACTIONS(66),
    [aux_sym_core_token19] = ACTIONS(66),
    [aux_sym_core_token20] = ACTIONS(66),
    [aux_sym_core_token21] = ACTIONS(66),
    [aux_sym_core_token22] = ACTIONS(66),
    [aux_sym_core_token23] = ACTIONS(66),
    [aux_sym_core_token24] = ACTIONS(66),
    [aux_sym_core_token25] = ACTIONS(66),
    [aux_sym_core_token26] = ACTIONS(66),
    [aux_sym_core_token27] = ACTIONS(66),
    [aux_sym_core_token28] = ACTIONS(66),
    [aux_sym_core_token29] = ACTIONS(66),
    [aux_sym_core_token30] = ACTIONS(66),
    [aux_sym_core_token31] = ACTIONS(66),
    [aux_sym_core_token32] = ACTIONS(66),
    [aux_sym_core_token33] = ACTIONS(66),
    [aux_sym_core_token34] = ACTIONS(66),
    [aux_sym_core_token35] = ACTIONS(66),
    [aux_sym_core_token36] = ACTIONS(66),
    [aux_sym_core_token37] = ACTIONS(66),
    [aux_sym_core_token38] = ACTIONS(66),
    [aux_sym_core_token39] = ACTIONS(66),
    [aux_sym_core_token40] = ACTIONS(66),
    [aux_sym_core_token41] = ACTIONS(66),
    [aux_sym_core_token42] = ACTIONS(66),
    [aux_sym_core_token43] = ACTIONS(66),
    [aux_sym_core_token44] = ACTIONS(66),
    [aux_sym_core_token45] = ACTIONS(66),
    [aux_sym_core_token46] = ACTIONS(66),
    [aux_sym_core_token47] = ACTIONS(66),
    [aux_sym_core_token48] = ACTIONS(66),
    [aux_sym_core_token49] = ACTIONS(66),
    [aux_sym_core_token50] = ACTIONS(66),
    [aux_sym_core_token51] = ACTIONS(66),
    [aux_sym_core_token52] = ACTIONS(66),
    [aux_sym_core_token53] = ACTIONS(66),
    [aux_sym_core_token54] = ACTIONS(66),
    [aux_sym_core_token55] = ACTIONS(66),
    [aux_sym_core_token56] = ACTIONS(66),
    [aux_sym_core_token57] = ACTIONS(66),
    [aux_sym_core_token58] = ACTIONS(66),
    [aux_sym_core_token59] = ACTIONS(66),
    [aux_sym_core_token60] = ACTIONS(66),
    [aux_sym_core_token61] = ACTIONS(66),
    [aux_sym_core_token62] = ACTIONS(66),
    [aux_sym_core_token63] = ACTIONS(66),
    [aux_sym_core_token64] = ACTIONS(66),
    [aux_sym_core_token65] = ACTIONS(66),
    [aux_sym_core_token66] = ACTIONS(66),
    [aux_sym_core_token67] = ACTIONS(66),
    [aux_sym_core_token68] = ACTIONS(66),
    [aux_sym_core_token69] = ACTIONS(66),
    [aux_sym_core_token70] = ACTIONS(66),
    [aux_sym_core_token71] = ACTIONS(66),
    [aux_sym_core_token72] = ACTIONS(66),
    [aux_sym_core_token73] = ACTIONS(66),
    [aux_sym_core_token74] = ACTIONS(66),
    [aux_sym_core_token75] = ACTIONS(66),
    [aux_sym_core_token76] = ACTIONS(66),
    [aux_sym_core_token77] = ACTIONS(66),
    [aux_sym_core_token78] = ACTIONS(66),
    [aux_sym_core_token79] = ACTIONS(66),
    [aux_sym_core_token80] = ACTIONS(66),
    [aux_sym_core_token81] = ACTIONS(66),
    [aux_sym_core_token82] = ACTIONS(66),
    [aux_sym_core_token83] = ACTIONS(66),
    [aux_sym_core_token84] = ACTIONS(66),
    [aux_sym_core_token85] = ACTIONS(66),
    [aux_sym_core_token86] = ACTIONS(66),
    [aux_sym_core_token87] = ACTIONS(66),
    [aux_sym_core_token88] = ACTIONS(66),
    [aux_sym_core_token89] = ACTIONS(66),
    [aux_sym_core_token90] = ACTIONS(66),
    [aux_sym_core_token91] = ACTIONS(66),
    [aux_sym_core_token92] = ACTIONS(66),
    [aux_sym_core_token93] = ACTIONS(66),
    [aux_sym_core_token94] = ACTIONS(66),
    [aux_sym_core_token95] = ACTIONS(66),
    [aux_sym_core_token96] = ACTIONS(66),
    [aux_sym_core_token97] = ACTIONS(66),
    [aux_sym_core_token98] = ACTIONS(66),
    [aux_sym_core_token99] = ACTIONS(66),
    [aux_sym_core_token100] = ACTIONS(66),
    [aux_sym_core_token101] = ACTIONS(66),
    [aux_sym_core_token102] = ACTIONS(66),
    [aux_sym_core_token103] = ACTIONS(66),
    [aux_sym_core_token104] = ACTIONS(66),
    [aux_sym_core_token105] = ACTIONS(66),
    [aux_sym_core_token106] = ACTIONS(66),
    [aux_sym_core_token107] = ACTIONS(66),
    [aux_sym_core_token108] = ACTIONS(66),
    [aux_sym_core_token109] = ACTIONS(66),
    [aux_sym_core_token110] = ACTIONS(66),
    [aux_sym_core_token111] = ACTIONS(66),
    [aux_sym_core_token112] = ACTIONS(66),
    [aux_sym_core_token113] = ACTIONS(66),
    [aux_sym_core_token114] = ACTIONS(66),
    [aux_sym_core_token115] = ACTIONS(66),
    [aux_sym_core_token116] = ACTIONS(66),
    [aux_sym_core_token117] = ACTIONS(66),
    [aux_sym_core_token118] = ACTIONS(66),
    [aux_sym_core_token119] = ACTIONS(66),
    [aux_sym_core_token120] = ACTIONS(66),
    [aux_sym_core_token121] = ACTIONS(66),
    [aux_sym_core_token122] = ACTIONS(66),
    [aux_sym_core_token123] = ACTIONS(66),
    [aux_sym_core_token124] = ACTIONS(66),
    [aux_sym_core_token125] = ACTIONS(66),
    [aux_sym_core_token126] = ACTIONS(66),
    [aux_sym_core_token127] = ACTIONS(66),
    [aux_sym_core_token128] = ACTIONS(66),
    [aux_sym_core_token129] = ACTIONS(66),
    [aux_sym_core_token130] = ACTIONS(66),
    [aux_sym_core_token131] = ACTIONS(66),
    [aux_sym_core_token132] = ACTIONS(66),
    [aux_sym_core_token133] = ACTIONS(66),
    [aux_sym_core_token134] = ACTIONS(66),
    [aux_sym_core_token135] = ACTIONS(66),
    [aux_sym_core_token136] = ACTIONS(66),
    [aux_sym_core_token137] = ACTIONS(66),
    [aux_sym_core_token138] = ACTIONS(66),
    [aux_sym_core_token139] = ACTIONS(66),
    [aux_sym_core_token140] = ACTIONS(66),
    [aux_sym_core_token141] = ACTIONS(66),
    [aux_sym_core_token142] = ACTIONS(66),
    [aux_sym_core_token143] = ACTIONS(66),
    [aux_sym_core_token144] = ACTIONS(66),
    [aux_sym_core_token145] = ACTIONS(66),
    [aux_sym_core_token146] = ACTIONS(66),
    [aux_sym_core_token147] = ACTIONS(66),
    [aux_sym_core_token148] = ACTIONS(66),
    [aux_sym_core_token149] = ACTIONS(66),
    [aux_sym_core_token150] = ACTIONS(66),
    [aux_sym_core_token151] = ACTIONS(66),
    [aux_sym_core_token152] = ACTIONS(66),
    [aux_sym_core_token153] = ACTIONS(66),
    [aux_sym_core_token154] = ACTIONS(66),
    [aux_sym_core_token155] = ACTIONS(66),
    [aux_sym_core_token156] = ACTIONS(66),
    [aux_sym_core_token157] = ACTIONS(66),
    [aux_sym_core_token158] = ACTIONS(66),
    [aux_sym_core_token159] = ACTIONS(66),
    [aux_sym_core_token160] = ACTIONS(66),
    [aux_sym_core_token161] = ACTIONS(66),
    [aux_sym_core_token162] = ACTIONS(66),
    [aux_sym_core_token163] = ACTIONS(66),
    [aux_sym_core_token164] = ACTIONS(66),
    [aux_sym_core_token165] = ACTIONS(66),
    [aux_sym_core_token166] = ACTIONS(66),
    [aux_sym_core_token167] = ACTIONS(66),
    [aux_sym_core_token168] = ACTIONS(66),
    [aux_sym_core_token169] = ACTIONS(66),
    [aux_sym_core_token170] = ACTIONS(66),
    [aux_sym_core_token171] = ACTIONS(66),
    [aux_sym_operator_token1] = ACTIONS(69),
    [aux_sym_operator_token2] = ACTIONS(69),
    [aux_sym_operator_token3] = ACTIONS(69),
    [aux_sym_operator_token4] = ACTIONS(69),
    [aux_sym_operator_token5] = ACTIONS(69),
    [aux_sym_operator_token6] = ACTIONS(69),
    [aux_sym_operator_token7] = ACTIONS(69),
    [aux_sym_operator_token8] = ACTIONS(69),
    [sym_word] = ACTIONS(58),
  },
  [6] = {
    [sym__tokens] = STATE(4),
    [sym_builtin] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_core] = STATE(15),
    [sym_operator] = STATE(15),
    [aux_sym_word_definition_repeat1] = STATE(4),
    [sym_string] = ACTIONS(72),
    [sym_number] = ACTIONS(74),
    [aux_sym_comment_token1] = ACTIONS(49),
    [aux_sym_comment_token2] = ACTIONS(49),
    [aux_sym_core_token1] = ACTIONS(51),
    [aux_sym_core_token2] = ACTIONS(51),
    [aux_sym_core_token3] = ACTIONS(51),
    [aux_sym_core_token4] = ACTIONS(51),
    [aux_sym_core_token5] = ACTIONS(51),
    [aux_sym_core_token6] = ACTIONS(51),
    [aux_sym_core_token7] = ACTIONS(51),
    [aux_sym_core_token8] = ACTIONS(51),
    [aux_sym_core_token9] = ACTIONS(51),
    [aux_sym_core_token10] = ACTIONS(51),
    [aux_sym_core_token11] = ACTIONS(51),
    [aux_sym_core_token12] = ACTIONS(51),
    [aux_sym_core_token13] = ACTIONS(51),
    [aux_sym_core_token14] = ACTIONS(51),
    [aux_sym_core_token15] = ACTIONS(51),
    [aux_sym_core_token16] = ACTIONS(51),
    [aux_sym_core_token17] = ACTIONS(51),
    [aux_sym_core_token18] = ACTIONS(51),
    [aux_sym_core_token19] = ACTIONS(51),
    [aux_sym_core_token20] = ACTIONS(51),
    [aux_sym_core_token21] = ACTIONS(51),
    [aux_sym_core_token22] = ACTIONS(51),
    [aux_sym_core_token23] = ACTIONS(51),
    [aux_sym_core_token24] = ACTIONS(51),
    [aux_sym_core_token25] = ACTIONS(51),
    [aux_sym_core_token26] = ACTIONS(51),
    [aux_sym_core_token27] = ACTIONS(51),
    [aux_sym_core_token28] = ACTIONS(51),
    [aux_sym_core_token29] = ACTIONS(51),
    [aux_sym_core_token30] = ACTIONS(51),
    [aux_sym_core_token31] = ACTIONS(51),
    [aux_sym_core_token32] = ACTIONS(51),
    [aux_sym_core_token33] = ACTIONS(51),
    [aux_sym_core_token34] = ACTIONS(51),
    [aux_sym_core_token35] = ACTIONS(51),
    [aux_sym_core_token36] = ACTIONS(51),
    [aux_sym_core_token37] = ACTIONS(51),
    [aux_sym_core_token38] = ACTIONS(51),
    [aux_sym_core_token39] = ACTIONS(51),
    [aux_sym_core_token40] = ACTIONS(51),
    [aux_sym_core_token41] = ACTIONS(51),
    [aux_sym_core_token42] = ACTIONS(51),
    [aux_sym_core_token43] = ACTIONS(51),
    [aux_sym_core_token44] = ACTIONS(51),
    [aux_sym_core_token45] = ACTIONS(51),
    [aux_sym_core_token46] = ACTIONS(51),
    [aux_sym_core_token47] = ACTIONS(51),
    [aux_sym_core_token48] = ACTIONS(51),
    [aux_sym_core_token49] = ACTIONS(51),
    [aux_sym_core_token50] = ACTIONS(51),
    [aux_sym_core_token51] = ACTIONS(51),
    [aux_sym_core_token52] = ACTIONS(51),
    [aux_sym_core_token53] = ACTIONS(51),
    [aux_sym_core_token54] = ACTIONS(51),
    [aux_sym_core_token55] = ACTIONS(51),
    [aux_sym_core_token56] = ACTIONS(51),
    [aux_sym_core_token57] = ACTIONS(51),
    [aux_sym_core_token58] = ACTIONS(51),
    [aux_sym_core_token59] = ACTIONS(51),
    [aux_sym_core_token60] = ACTIONS(51),
    [aux_sym_core_token61] = ACTIONS(51),
    [aux_sym_core_token62] = ACTIONS(51),
    [aux_sym_core_token63] = ACTIONS(51),
    [aux_sym_core_token64] = ACTIONS(51),
    [aux_sym_core_token65] = ACTIONS(51),
    [aux_sym_core_token66] = ACTIONS(51),
    [aux_sym_core_token67] = ACTIONS(51),
    [aux_sym_core_token68] = ACTIONS(51),
    [aux_sym_core_token69] = ACTIONS(51),
    [aux_sym_core_token70] = ACTIONS(51),
    [aux_sym_core_token71] = ACTIONS(51),
    [aux_sym_core_token72] = ACTIONS(51),
    [aux_sym_core_token73] = ACTIONS(51),
    [aux_sym_core_token74] = ACTIONS(51),
    [aux_sym_core_token75] = ACTIONS(51),
    [aux_sym_core_token76] = ACTIONS(51),
    [aux_sym_core_token77] = ACTIONS(51),
    [aux_sym_core_token78] = ACTIONS(51),
    [aux_sym_core_token79] = ACTIONS(51),
    [aux_sym_core_token80] = ACTIONS(51),
    [aux_sym_core_token81] = ACTIONS(51),
    [aux_sym_core_token82] = ACTIONS(51),
    [aux_sym_core_token83] = ACTIONS(51),
    [aux_sym_core_token84] = ACTIONS(51),
    [aux_sym_core_token85] = ACTIONS(51),
    [aux_sym_core_token86] = ACTIONS(51),
    [aux_sym_core_token87] = ACTIONS(51),
    [aux_sym_core_token88] = ACTIONS(51),
    [aux_sym_core_token89] = ACTIONS(51),
    [aux_sym_core_token90] = ACTIONS(51),
    [aux_sym_core_token91] = ACTIONS(51),
    [aux_sym_core_token92] = ACTIONS(51),
    [aux_sym_core_token93] = ACTIONS(51),
    [aux_sym_core_token94] = ACTIONS(51),
    [aux_sym_core_token95] = ACTIONS(51),
    [aux_sym_core_token96] = ACTIONS(51),
    [aux_sym_core_token97] = ACTIONS(51),
    [aux_sym_core_token98] = ACTIONS(51),
    [aux_sym_core_token99] = ACTIONS(51),
    [aux_sym_core_token100] = ACTIONS(51),
    [aux_sym_core_token101] = ACTIONS(51),
    [aux_sym_core_token102] = ACTIONS(51),
    [aux_sym_core_token103] = ACTIONS(51),
    [aux_sym_core_token104] = ACTIONS(51),
    [aux_sym_core_token105] = ACTIONS(51),
    [aux_sym_core_token106] = ACTIONS(51),
    [aux_sym_core_token107] = ACTIONS(51),
    [aux_sym_core_token108] = ACTIONS(51),
    [aux_sym_core_token109] = ACTIONS(51),
    [aux_sym_core_token110] = ACTIONS(51),
    [aux_sym_core_token111] = ACTIONS(51),
    [aux_sym_core_token112] = ACTIONS(51),
    [aux_sym_core_token113] = ACTIONS(51),
    [aux_sym_core_token114] = ACTIONS(51),
    [aux_sym_core_token115] = ACTIONS(51),
    [aux_sym_core_token116] = ACTIONS(51),
    [aux_sym_core_token117] = ACTIONS(51),
    [aux_sym_core_token118] = ACTIONS(51),
    [aux_sym_core_token119] = ACTIONS(51),
    [aux_sym_core_token120] = ACTIONS(51),
    [aux_sym_core_token121] = ACTIONS(51),
    [aux_sym_core_token122] = ACTIONS(51),
    [aux_sym_core_token123] = ACTIONS(51),
    [aux_sym_core_token124] = ACTIONS(51),
    [aux_sym_core_token125] = ACTIONS(51),
    [aux_sym_core_token126] = ACTIONS(51),
    [aux_sym_core_token127] = ACTIONS(51),
    [aux_sym_core_token128] = ACTIONS(51),
    [aux_sym_core_token129] = ACTIONS(51),
    [aux_sym_core_token130] = ACTIONS(51),
    [aux_sym_core_token131] = ACTIONS(51),
    [aux_sym_core_token132] = ACTIONS(51),
    [aux_sym_core_token133] = ACTIONS(51),
    [aux_sym_core_token134] = ACTIONS(51),
    [aux_sym_core_token135] = ACTIONS(51),
    [aux_sym_core_token136] = ACTIONS(51),
    [aux_sym_core_token137] = ACTIONS(51),
    [aux_sym_core_token138] = ACTIONS(51),
    [aux_sym_core_token139] = ACTIONS(51),
    [aux_sym_core_token140] = ACTIONS(51),
    [aux_sym_core_token141] = ACTIONS(51),
    [aux_sym_core_token142] = ACTIONS(51),
    [aux_sym_core_token143] = ACTIONS(51),
    [aux_sym_core_token144] = ACTIONS(51),
    [aux_sym_core_token145] = ACTIONS(51),
    [aux_sym_core_token146] = ACTIONS(51),
    [aux_sym_core_token147] = ACTIONS(51),
    [aux_sym_core_token148] = ACTIONS(51),
    [aux_sym_core_token149] = ACTIONS(51),
    [aux_sym_core_token150] = ACTIONS(51),
    [aux_sym_core_token151] = ACTIONS(51),
    [aux_sym_core_token152] = ACTIONS(51),
    [aux_sym_core_token153] = ACTIONS(51),
    [aux_sym_core_token154] = ACTIONS(51),
    [aux_sym_core_token155] = ACTIONS(51),
    [aux_sym_core_token156] = ACTIONS(51),
    [aux_sym_core_token157] = ACTIONS(51),
    [aux_sym_core_token158] = ACTIONS(51),
    [aux_sym_core_token159] = ACTIONS(51),
    [aux_sym_core_token160] = ACTIONS(51),
    [aux_sym_core_token161] = ACTIONS(51),
    [aux_sym_core_token162] = ACTIONS(51),
    [aux_sym_core_token163] = ACTIONS(51),
    [aux_sym_core_token164] = ACTIONS(51),
    [aux_sym_core_token165] = ACTIONS(51),
    [aux_sym_core_token166] = ACTIONS(51),
    [aux_sym_core_token167] = ACTIONS(51),
    [aux_sym_core_token168] = ACTIONS(51),
    [aux_sym_core_token169] = ACTIONS(51),
    [aux_sym_core_token170] = ACTIONS(51),
    [aux_sym_core_token171] = ACTIONS(51),
    [aux_sym_operator_token1] = ACTIONS(53),
    [aux_sym_operator_token2] = ACTIONS(53),
    [aux_sym_operator_token3] = ACTIONS(53),
    [aux_sym_operator_token4] = ACTIONS(53),
    [aux_sym_operator_token5] = ACTIONS(53),
    [aux_sym_operator_token6] = ACTIONS(53),
    [aux_sym_operator_token7] = ACTIONS(53),
    [aux_sym_operator_token8] = ACTIONS(53),
    [sym_word] = ACTIONS(74),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_string] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_start_definition] = ACTIONS(78),
    [aux_sym_comment_token1] = ACTIONS(76),
    [aux_sym_comment_token2] = ACTIONS(76),
    [aux_sym_core_token1] = ACTIONS(78),
    [aux_sym_core_token2] = ACTIONS(78),
    [aux_sym_core_token3] = ACTIONS(78),
    [aux_sym_core_token4] = ACTIONS(78),
    [aux_sym_core_token5] = ACTIONS(78),
    [aux_sym_core_token6] = ACTIONS(78),
    [aux_sym_core_token7] = ACTIONS(78),
    [aux_sym_core_token8] = ACTIONS(78),
    [aux_sym_core_token9] = ACTIONS(78),
    [aux_sym_core_token10] = ACTIONS(78),
    [aux_sym_core_token11] = ACTIONS(78),
    [aux_sym_core_token12] = ACTIONS(78),
    [aux_sym_core_token13] = ACTIONS(78),
    [aux_sym_core_token14] = ACTIONS(78),
    [aux_sym_core_token15] = ACTIONS(78),
    [aux_sym_core_token16] = ACTIONS(78),
    [aux_sym_core_token17] = ACTIONS(78),
    [aux_sym_core_token18] = ACTIONS(78),
    [aux_sym_core_token19] = ACTIONS(78),
    [aux_sym_core_token20] = ACTIONS(78),
    [aux_sym_core_token21] = ACTIONS(78),
    [aux_sym_core_token22] = ACTIONS(78),
    [aux_sym_core_token23] = ACTIONS(78),
    [aux_sym_core_token24] = ACTIONS(78),
    [aux_sym_core_token25] = ACTIONS(78),
    [aux_sym_core_token26] = ACTIONS(78),
    [aux_sym_core_token27] = ACTIONS(78),
    [aux_sym_core_token28] = ACTIONS(78),
    [aux_sym_core_token29] = ACTIONS(78),
    [aux_sym_core_token30] = ACTIONS(78),
    [aux_sym_core_token31] = ACTIONS(78),
    [aux_sym_core_token32] = ACTIONS(78),
    [aux_sym_core_token33] = ACTIONS(78),
    [aux_sym_core_token34] = ACTIONS(78),
    [aux_sym_core_token35] = ACTIONS(78),
    [aux_sym_core_token36] = ACTIONS(78),
    [aux_sym_core_token37] = ACTIONS(78),
    [aux_sym_core_token38] = ACTIONS(78),
    [aux_sym_core_token39] = ACTIONS(78),
    [aux_sym_core_token40] = ACTIONS(78),
    [aux_sym_core_token41] = ACTIONS(78),
    [aux_sym_core_token42] = ACTIONS(78),
    [aux_sym_core_token43] = ACTIONS(78),
    [aux_sym_core_token44] = ACTIONS(78),
    [aux_sym_core_token45] = ACTIONS(78),
    [aux_sym_core_token46] = ACTIONS(78),
    [aux_sym_core_token47] = ACTIONS(78),
    [aux_sym_core_token48] = ACTIONS(78),
    [aux_sym_core_token49] = ACTIONS(78),
    [aux_sym_core_token50] = ACTIONS(78),
    [aux_sym_core_token51] = ACTIONS(78),
    [aux_sym_core_token52] = ACTIONS(78),
    [aux_sym_core_token53] = ACTIONS(78),
    [aux_sym_core_token54] = ACTIONS(78),
    [aux_sym_core_token55] = ACTIONS(78),
    [aux_sym_core_token56] = ACTIONS(78),
    [aux_sym_core_token57] = ACTIONS(78),
    [aux_sym_core_token58] = ACTIONS(78),
    [aux_sym_core_token59] = ACTIONS(78),
    [aux_sym_core_token60] = ACTIONS(78),
    [aux_sym_core_token61] = ACTIONS(78),
    [aux_sym_core_token62] = ACTIONS(78),
    [aux_sym_core_token63] = ACTIONS(78),
    [aux_sym_core_token64] = ACTIONS(78),
    [aux_sym_core_token65] = ACTIONS(78),
    [aux_sym_core_token66] = ACTIONS(78),
    [aux_sym_core_token67] = ACTIONS(78),
    [aux_sym_core_token68] = ACTIONS(78),
    [aux_sym_core_token69] = ACTIONS(78),
    [aux_sym_core_token70] = ACTIONS(78),
    [aux_sym_core_token71] = ACTIONS(78),
    [aux_sym_core_token72] = ACTIONS(78),
    [aux_sym_core_token73] = ACTIONS(78),
    [aux_sym_core_token74] = ACTIONS(78),
    [aux_sym_core_token75] = ACTIONS(78),
    [aux_sym_core_token76] = ACTIONS(78),
    [aux_sym_core_token77] = ACTIONS(78),
    [aux_sym_core_token78] = ACTIONS(78),
    [aux_sym_core_token79] = ACTIONS(78),
    [aux_sym_core_token80] = ACTIONS(78),
    [aux_sym_core_token81] = ACTIONS(78),
    [aux_sym_core_token82] = ACTIONS(78),
    [aux_sym_core_token83] = ACTIONS(78),
    [aux_sym_core_token84] = ACTIONS(78),
    [aux_sym_core_token85] = ACTIONS(78),
    [aux_sym_core_token86] = ACTIONS(78),
    [aux_sym_core_token87] = ACTIONS(78),
    [aux_sym_core_token88] = ACTIONS(78),
    [aux_sym_core_token89] = ACTIONS(78),
    [aux_sym_core_token90] = ACTIONS(78),
    [aux_sym_core_token91] = ACTIONS(78),
    [aux_sym_core_token92] = ACTIONS(78),
    [aux_sym_core_token93] = ACTIONS(78),
    [aux_sym_core_token94] = ACTIONS(78),
    [aux_sym_core_token95] = ACTIONS(78),
    [aux_sym_core_token96] = ACTIONS(78),
    [aux_sym_core_token97] = ACTIONS(78),
    [aux_sym_core_token98] = ACTIONS(78),
    [aux_sym_core_token99] = ACTIONS(78),
    [aux_sym_core_token100] = ACTIONS(78),
    [aux_sym_core_token101] = ACTIONS(78),
    [aux_sym_core_token102] = ACTIONS(78),
    [aux_sym_core_token103] = ACTIONS(78),
    [aux_sym_core_token104] = ACTIONS(78),
    [aux_sym_core_token105] = ACTIONS(78),
    [aux_sym_core_token106] = ACTIONS(78),
    [aux_sym_core_token107] = ACTIONS(78),
    [aux_sym_core_token108] = ACTIONS(78),
    [aux_sym_core_token109] = ACTIONS(78),
    [aux_sym_core_token110] = ACTIONS(78),
    [aux_sym_core_token111] = ACTIONS(78),
    [aux_sym_core_token112] = ACTIONS(78),
    [aux_sym_core_token113] = ACTIONS(78),
    [aux_sym_core_token114] = ACTIONS(78),
    [aux_sym_core_token115] = ACTIONS(78),
    [aux_sym_core_token116] = ACTIONS(78),
    [aux_sym_core_token117] = ACTIONS(78),
    [aux_sym_core_token118] = ACTIONS(78),
    [aux_sym_core_token119] = ACTIONS(78),
    [aux_sym_core_token120] = ACTIONS(78),
    [aux_sym_core_token121] = ACTIONS(78),
    [aux_sym_core_token122] = ACTIONS(78),
    [aux_sym_core_token123] = ACTIONS(78),
    [aux_sym_core_token124] = ACTIONS(78),
    [aux_sym_core_token125] = ACTIONS(78),
    [aux_sym_core_token126] = ACTIONS(78),
    [aux_sym_core_token127] = ACTIONS(78),
    [aux_sym_core_token128] = ACTIONS(78),
    [aux_sym_core_token129] = ACTIONS(78),
    [aux_sym_core_token130] = ACTIONS(78),
    [aux_sym_core_token131] = ACTIONS(78),
    [aux_sym_core_token132] = ACTIONS(78),
    [aux_sym_core_token133] = ACTIONS(78),
    [aux_sym_core_token134] = ACTIONS(78),
    [aux_sym_core_token135] = ACTIONS(78),
    [aux_sym_core_token136] = ACTIONS(78),
    [aux_sym_core_token137] = ACTIONS(78),
    [aux_sym_core_token138] = ACTIONS(78),
    [aux_sym_core_token139] = ACTIONS(78),
    [aux_sym_core_token140] = ACTIONS(78),
    [aux_sym_core_token141] = ACTIONS(78),
    [aux_sym_core_token142] = ACTIONS(78),
    [aux_sym_core_token143] = ACTIONS(78),
    [aux_sym_core_token144] = ACTIONS(78),
    [aux_sym_core_token145] = ACTIONS(78),
    [aux_sym_core_token146] = ACTIONS(78),
    [aux_sym_core_token147] = ACTIONS(78),
    [aux_sym_core_token148] = ACTIONS(78),
    [aux_sym_core_token149] = ACTIONS(78),
    [aux_sym_core_token150] = ACTIONS(78),
    [aux_sym_core_token151] = ACTIONS(78),
    [aux_sym_core_token152] = ACTIONS(78),
    [aux_sym_core_token153] = ACTIONS(78),
    [aux_sym_core_token154] = ACTIONS(78),
    [aux_sym_core_token155] = ACTIONS(78),
    [aux_sym_core_token156] = ACTIONS(78),
    [aux_sym_core_token157] = ACTIONS(78),
    [aux_sym_core_token158] = ACTIONS(78),
    [aux_sym_core_token159] = ACTIONS(78),
    [aux_sym_core_token160] = ACTIONS(78),
    [aux_sym_core_token161] = ACTIONS(78),
    [aux_sym_core_token162] = ACTIONS(78),
    [aux_sym_core_token163] = ACTIONS(78),
    [aux_sym_core_token164] = ACTIONS(78),
    [aux_sym_core_token165] = ACTIONS(78),
    [aux_sym_core_token166] = ACTIONS(78),
    [aux_sym_core_token167] = ACTIONS(78),
    [aux_sym_core_token168] = ACTIONS(78),
    [aux_sym_core_token169] = ACTIONS(78),
    [aux_sym_core_token170] = ACTIONS(78),
    [aux_sym_core_token171] = ACTIONS(78),
    [aux_sym_operator_token1] = ACTIONS(78),
    [aux_sym_operator_token2] = ACTIONS(78),
    [aux_sym_operator_token3] = ACTIONS(78),
    [aux_sym_operator_token4] = ACTIONS(78),
    [aux_sym_operator_token5] = ACTIONS(78),
    [aux_sym_operator_token6] = ACTIONS(78),
    [aux_sym_operator_token7] = ACTIONS(78),
    [aux_sym_operator_token8] = ACTIONS(78),
    [sym_word] = ACTIONS(78),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_string] = ACTIONS(80),
    [sym_number] = ACTIONS(82),
    [sym_start_definition] = ACTIONS(82),
    [aux_sym_comment_token1] = ACTIONS(80),
    [aux_sym_comment_token2] = ACTIONS(80),
    [aux_sym_core_token1] = ACTIONS(82),
    [aux_sym_core_token2] = ACTIONS(82),
    [aux_sym_core_token3] = ACTIONS(82),
    [aux_sym_core_token4] = ACTIONS(82),
    [aux_sym_core_token5] = ACTIONS(82),
    [aux_sym_core_token6] = ACTIONS(82),
    [aux_sym_core_token7] = ACTIONS(82),
    [aux_sym_core_token8] = ACTIONS(82),
    [aux_sym_core_token9] = ACTIONS(82),
    [aux_sym_core_token10] = ACTIONS(82),
    [aux_sym_core_token11] = ACTIONS(82),
    [aux_sym_core_token12] = ACTIONS(82),
    [aux_sym_core_token13] = ACTIONS(82),
    [aux_sym_core_token14] = ACTIONS(82),
    [aux_sym_core_token15] = ACTIONS(82),
    [aux_sym_core_token16] = ACTIONS(82),
    [aux_sym_core_token17] = ACTIONS(82),
    [aux_sym_core_token18] = ACTIONS(82),
    [aux_sym_core_token19] = ACTIONS(82),
    [aux_sym_core_token20] = ACTIONS(82),
    [aux_sym_core_token21] = ACTIONS(82),
    [aux_sym_core_token22] = ACTIONS(82),
    [aux_sym_core_token23] = ACTIONS(82),
    [aux_sym_core_token24] = ACTIONS(82),
    [aux_sym_core_token25] = ACTIONS(82),
    [aux_sym_core_token26] = ACTIONS(82),
    [aux_sym_core_token27] = ACTIONS(82),
    [aux_sym_core_token28] = ACTIONS(82),
    [aux_sym_core_token29] = ACTIONS(82),
    [aux_sym_core_token30] = ACTIONS(82),
    [aux_sym_core_token31] = ACTIONS(82),
    [aux_sym_core_token32] = ACTIONS(82),
    [aux_sym_core_token33] = ACTIONS(82),
    [aux_sym_core_token34] = ACTIONS(82),
    [aux_sym_core_token35] = ACTIONS(82),
    [aux_sym_core_token36] = ACTIONS(82),
    [aux_sym_core_token37] = ACTIONS(82),
    [aux_sym_core_token38] = ACTIONS(82),
    [aux_sym_core_token39] = ACTIONS(82),
    [aux_sym_core_token40] = ACTIONS(82),
    [aux_sym_core_token41] = ACTIONS(82),
    [aux_sym_core_token42] = ACTIONS(82),
    [aux_sym_core_token43] = ACTIONS(82),
    [aux_sym_core_token44] = ACTIONS(82),
    [aux_sym_core_token45] = ACTIONS(82),
    [aux_sym_core_token46] = ACTIONS(82),
    [aux_sym_core_token47] = ACTIONS(82),
    [aux_sym_core_token48] = ACTIONS(82),
    [aux_sym_core_token49] = ACTIONS(82),
    [aux_sym_core_token50] = ACTIONS(82),
    [aux_sym_core_token51] = ACTIONS(82),
    [aux_sym_core_token52] = ACTIONS(82),
    [aux_sym_core_token53] = ACTIONS(82),
    [aux_sym_core_token54] = ACTIONS(82),
    [aux_sym_core_token55] = ACTIONS(82),
    [aux_sym_core_token56] = ACTIONS(82),
    [aux_sym_core_token57] = ACTIONS(82),
    [aux_sym_core_token58] = ACTIONS(82),
    [aux_sym_core_token59] = ACTIONS(82),
    [aux_sym_core_token60] = ACTIONS(82),
    [aux_sym_core_token61] = ACTIONS(82),
    [aux_sym_core_token62] = ACTIONS(82),
    [aux_sym_core_token63] = ACTIONS(82),
    [aux_sym_core_token64] = ACTIONS(82),
    [aux_sym_core_token65] = ACTIONS(82),
    [aux_sym_core_token66] = ACTIONS(82),
    [aux_sym_core_token67] = ACTIONS(82),
    [aux_sym_core_token68] = ACTIONS(82),
    [aux_sym_core_token69] = ACTIONS(82),
    [aux_sym_core_token70] = ACTIONS(82),
    [aux_sym_core_token71] = ACTIONS(82),
    [aux_sym_core_token72] = ACTIONS(82),
    [aux_sym_core_token73] = ACTIONS(82),
    [aux_sym_core_token74] = ACTIONS(82),
    [aux_sym_core_token75] = ACTIONS(82),
    [aux_sym_core_token76] = ACTIONS(82),
    [aux_sym_core_token77] = ACTIONS(82),
    [aux_sym_core_token78] = ACTIONS(82),
    [aux_sym_core_token79] = ACTIONS(82),
    [aux_sym_core_token80] = ACTIONS(82),
    [aux_sym_core_token81] = ACTIONS(82),
    [aux_sym_core_token82] = ACTIONS(82),
    [aux_sym_core_token83] = ACTIONS(82),
    [aux_sym_core_token84] = ACTIONS(82),
    [aux_sym_core_token85] = ACTIONS(82),
    [aux_sym_core_token86] = ACTIONS(82),
    [aux_sym_core_token87] = ACTIONS(82),
    [aux_sym_core_token88] = ACTIONS(82),
    [aux_sym_core_token89] = ACTIONS(82),
    [aux_sym_core_token90] = ACTIONS(82),
    [aux_sym_core_token91] = ACTIONS(82),
    [aux_sym_core_token92] = ACTIONS(82),
    [aux_sym_core_token93] = ACTIONS(82),
    [aux_sym_core_token94] = ACTIONS(82),
    [aux_sym_core_token95] = ACTIONS(82),
    [aux_sym_core_token96] = ACTIONS(82),
    [aux_sym_core_token97] = ACTIONS(82),
    [aux_sym_core_token98] = ACTIONS(82),
    [aux_sym_core_token99] = ACTIONS(82),
    [aux_sym_core_token100] = ACTIONS(82),
    [aux_sym_core_token101] = ACTIONS(82),
    [aux_sym_core_token102] = ACTIONS(82),
    [aux_sym_core_token103] = ACTIONS(82),
    [aux_sym_core_token104] = ACTIONS(82),
    [aux_sym_core_token105] = ACTIONS(82),
    [aux_sym_core_token106] = ACTIONS(82),
    [aux_sym_core_token107] = ACTIONS(82),
    [aux_sym_core_token108] = ACTIONS(82),
    [aux_sym_core_token109] = ACTIONS(82),
    [aux_sym_core_token110] = ACTIONS(82),
    [aux_sym_core_token111] = ACTIONS(82),
    [aux_sym_core_token112] = ACTIONS(82),
    [aux_sym_core_token113] = ACTIONS(82),
    [aux_sym_core_token114] = ACTIONS(82),
    [aux_sym_core_token115] = ACTIONS(82),
    [aux_sym_core_token116] = ACTIONS(82),
    [aux_sym_core_token117] = ACTIONS(82),
    [aux_sym_core_token118] = ACTIONS(82),
    [aux_sym_core_token119] = ACTIONS(82),
    [aux_sym_core_token120] = ACTIONS(82),
    [aux_sym_core_token121] = ACTIONS(82),
    [aux_sym_core_token122] = ACTIONS(82),
    [aux_sym_core_token123] = ACTIONS(82),
    [aux_sym_core_token124] = ACTIONS(82),
    [aux_sym_core_token125] = ACTIONS(82),
    [aux_sym_core_token126] = ACTIONS(82),
    [aux_sym_core_token127] = ACTIONS(82),
    [aux_sym_core_token128] = ACTIONS(82),
    [aux_sym_core_token129] = ACTIONS(82),
    [aux_sym_core_token130] = ACTIONS(82),
    [aux_sym_core_token131] = ACTIONS(82),
    [aux_sym_core_token132] = ACTIONS(82),
    [aux_sym_core_token133] = ACTIONS(82),
    [aux_sym_core_token134] = ACTIONS(82),
    [aux_sym_core_token135] = ACTIONS(82),
    [aux_sym_core_token136] = ACTIONS(82),
    [aux_sym_core_token137] = ACTIONS(82),
    [aux_sym_core_token138] = ACTIONS(82),
    [aux_sym_core_token139] = ACTIONS(82),
    [aux_sym_core_token140] = ACTIONS(82),
    [aux_sym_core_token141] = ACTIONS(82),
    [aux_sym_core_token142] = ACTIONS(82),
    [aux_sym_core_token143] = ACTIONS(82),
    [aux_sym_core_token144] = ACTIONS(82),
    [aux_sym_core_token145] = ACTIONS(82),
    [aux_sym_core_token146] = ACTIONS(82),
    [aux_sym_core_token147] = ACTIONS(82),
    [aux_sym_core_token148] = ACTIONS(82),
    [aux_sym_core_token149] = ACTIONS(82),
    [aux_sym_core_token150] = ACTIONS(82),
    [aux_sym_core_token151] = ACTIONS(82),
    [aux_sym_core_token152] = ACTIONS(82),
    [aux_sym_core_token153] = ACTIONS(82),
    [aux_sym_core_token154] = ACTIONS(82),
    [aux_sym_core_token155] = ACTIONS(82),
    [aux_sym_core_token156] = ACTIONS(82),
    [aux_sym_core_token157] = ACTIONS(82),
    [aux_sym_core_token158] = ACTIONS(82),
    [aux_sym_core_token159] = ACTIONS(82),
    [aux_sym_core_token160] = ACTIONS(82),
    [aux_sym_core_token161] = ACTIONS(82),
    [aux_sym_core_token162] = ACTIONS(82),
    [aux_sym_core_token163] = ACTIONS(82),
    [aux_sym_core_token164] = ACTIONS(82),
    [aux_sym_core_token165] = ACTIONS(82),
    [aux_sym_core_token166] = ACTIONS(82),
    [aux_sym_core_token167] = ACTIONS(82),
    [aux_sym_core_token168] = ACTIONS(82),
    [aux_sym_core_token169] = ACTIONS(82),
    [aux_sym_core_token170] = ACTIONS(82),
    [aux_sym_core_token171] = ACTIONS(82),
    [aux_sym_operator_token1] = ACTIONS(82),
    [aux_sym_operator_token2] = ACTIONS(82),
    [aux_sym_operator_token3] = ACTIONS(82),
    [aux_sym_operator_token4] = ACTIONS(82),
    [aux_sym_operator_token5] = ACTIONS(82),
    [aux_sym_operator_token6] = ACTIONS(82),
    [aux_sym_operator_token7] = ACTIONS(82),
    [aux_sym_operator_token8] = ACTIONS(82),
    [sym_word] = ACTIONS(82),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_string] = ACTIONS(84),
    [sym_number] = ACTIONS(86),
    [sym_start_definition] = ACTIONS(86),
    [aux_sym_comment_token1] = ACTIONS(84),
    [aux_sym_comment_token2] = ACTIONS(84),
    [aux_sym_core_token1] = ACTIONS(86),
    [aux_sym_core_token2] = ACTIONS(86),
    [aux_sym_core_token3] = ACTIONS(86),
    [aux_sym_core_token4] = ACTIONS(86),
    [aux_sym_core_token5] = ACTIONS(86),
    [aux_sym_core_token6] = ACTIONS(86),
    [aux_sym_core_token7] = ACTIONS(86),
    [aux_sym_core_token8] = ACTIONS(86),
    [aux_sym_core_token9] = ACTIONS(86),
    [aux_sym_core_token10] = ACTIONS(86),
    [aux_sym_core_token11] = ACTIONS(86),
    [aux_sym_core_token12] = ACTIONS(86),
    [aux_sym_core_token13] = ACTIONS(86),
    [aux_sym_core_token14] = ACTIONS(86),
    [aux_sym_core_token15] = ACTIONS(86),
    [aux_sym_core_token16] = ACTIONS(86),
    [aux_sym_core_token17] = ACTIONS(86),
    [aux_sym_core_token18] = ACTIONS(86),
    [aux_sym_core_token19] = ACTIONS(86),
    [aux_sym_core_token20] = ACTIONS(86),
    [aux_sym_core_token21] = ACTIONS(86),
    [aux_sym_core_token22] = ACTIONS(86),
    [aux_sym_core_token23] = ACTIONS(86),
    [aux_sym_core_token24] = ACTIONS(86),
    [aux_sym_core_token25] = ACTIONS(86),
    [aux_sym_core_token26] = ACTIONS(86),
    [aux_sym_core_token27] = ACTIONS(86),
    [aux_sym_core_token28] = ACTIONS(86),
    [aux_sym_core_token29] = ACTIONS(86),
    [aux_sym_core_token30] = ACTIONS(86),
    [aux_sym_core_token31] = ACTIONS(86),
    [aux_sym_core_token32] = ACTIONS(86),
    [aux_sym_core_token33] = ACTIONS(86),
    [aux_sym_core_token34] = ACTIONS(86),
    [aux_sym_core_token35] = ACTIONS(86),
    [aux_sym_core_token36] = ACTIONS(86),
    [aux_sym_core_token37] = ACTIONS(86),
    [aux_sym_core_token38] = ACTIONS(86),
    [aux_sym_core_token39] = ACTIONS(86),
    [aux_sym_core_token40] = ACTIONS(86),
    [aux_sym_core_token41] = ACTIONS(86),
    [aux_sym_core_token42] = ACTIONS(86),
    [aux_sym_core_token43] = ACTIONS(86),
    [aux_sym_core_token44] = ACTIONS(86),
    [aux_sym_core_token45] = ACTIONS(86),
    [aux_sym_core_token46] = ACTIONS(86),
    [aux_sym_core_token47] = ACTIONS(86),
    [aux_sym_core_token48] = ACTIONS(86),
    [aux_sym_core_token49] = ACTIONS(86),
    [aux_sym_core_token50] = ACTIONS(86),
    [aux_sym_core_token51] = ACTIONS(86),
    [aux_sym_core_token52] = ACTIONS(86),
    [aux_sym_core_token53] = ACTIONS(86),
    [aux_sym_core_token54] = ACTIONS(86),
    [aux_sym_core_token55] = ACTIONS(86),
    [aux_sym_core_token56] = ACTIONS(86),
    [aux_sym_core_token57] = ACTIONS(86),
    [aux_sym_core_token58] = ACTIONS(86),
    [aux_sym_core_token59] = ACTIONS(86),
    [aux_sym_core_token60] = ACTIONS(86),
    [aux_sym_core_token61] = ACTIONS(86),
    [aux_sym_core_token62] = ACTIONS(86),
    [aux_sym_core_token63] = ACTIONS(86),
    [aux_sym_core_token64] = ACTIONS(86),
    [aux_sym_core_token65] = ACTIONS(86),
    [aux_sym_core_token66] = ACTIONS(86),
    [aux_sym_core_token67] = ACTIONS(86),
    [aux_sym_core_token68] = ACTIONS(86),
    [aux_sym_core_token69] = ACTIONS(86),
    [aux_sym_core_token70] = ACTIONS(86),
    [aux_sym_core_token71] = ACTIONS(86),
    [aux_sym_core_token72] = ACTIONS(86),
    [aux_sym_core_token73] = ACTIONS(86),
    [aux_sym_core_token74] = ACTIONS(86),
    [aux_sym_core_token75] = ACTIONS(86),
    [aux_sym_core_token76] = ACTIONS(86),
    [aux_sym_core_token77] = ACTIONS(86),
    [aux_sym_core_token78] = ACTIONS(86),
    [aux_sym_core_token79] = ACTIONS(86),
    [aux_sym_core_token80] = ACTIONS(86),
    [aux_sym_core_token81] = ACTIONS(86),
    [aux_sym_core_token82] = ACTIONS(86),
    [aux_sym_core_token83] = ACTIONS(86),
    [aux_sym_core_token84] = ACTIONS(86),
    [aux_sym_core_token85] = ACTIONS(86),
    [aux_sym_core_token86] = ACTIONS(86),
    [aux_sym_core_token87] = ACTIONS(86),
    [aux_sym_core_token88] = ACTIONS(86),
    [aux_sym_core_token89] = ACTIONS(86),
    [aux_sym_core_token90] = ACTIONS(86),
    [aux_sym_core_token91] = ACTIONS(86),
    [aux_sym_core_token92] = ACTIONS(86),
    [aux_sym_core_token93] = ACTIONS(86),
    [aux_sym_core_token94] = ACTIONS(86),
    [aux_sym_core_token95] = ACTIONS(86),
    [aux_sym_core_token96] = ACTIONS(86),
    [aux_sym_core_token97] = ACTIONS(86),
    [aux_sym_core_token98] = ACTIONS(86),
    [aux_sym_core_token99] = ACTIONS(86),
    [aux_sym_core_token100] = ACTIONS(86),
    [aux_sym_core_token101] = ACTIONS(86),
    [aux_sym_core_token102] = ACTIONS(86),
    [aux_sym_core_token103] = ACTIONS(86),
    [aux_sym_core_token104] = ACTIONS(86),
    [aux_sym_core_token105] = ACTIONS(86),
    [aux_sym_core_token106] = ACTIONS(86),
    [aux_sym_core_token107] = ACTIONS(86),
    [aux_sym_core_token108] = ACTIONS(86),
    [aux_sym_core_token109] = ACTIONS(86),
    [aux_sym_core_token110] = ACTIONS(86),
    [aux_sym_core_token111] = ACTIONS(86),
    [aux_sym_core_token112] = ACTIONS(86),
    [aux_sym_core_token113] = ACTIONS(86),
    [aux_sym_core_token114] = ACTIONS(86),
    [aux_sym_core_token115] = ACTIONS(86),
    [aux_sym_core_token116] = ACTIONS(86),
    [aux_sym_core_token117] = ACTIONS(86),
    [aux_sym_core_token118] = ACTIONS(86),
    [aux_sym_core_token119] = ACTIONS(86),
    [aux_sym_core_token120] = ACTIONS(86),
    [aux_sym_core_token121] = ACTIONS(86),
    [aux_sym_core_token122] = ACTIONS(86),
    [aux_sym_core_token123] = ACTIONS(86),
    [aux_sym_core_token124] = ACTIONS(86),
    [aux_sym_core_token125] = ACTIONS(86),
    [aux_sym_core_token126] = ACTIONS(86),
    [aux_sym_core_token127] = ACTIONS(86),
    [aux_sym_core_token128] = ACTIONS(86),
    [aux_sym_core_token129] = ACTIONS(86),
    [aux_sym_core_token130] = ACTIONS(86),
    [aux_sym_core_token131] = ACTIONS(86),
    [aux_sym_core_token132] = ACTIONS(86),
    [aux_sym_core_token133] = ACTIONS(86),
    [aux_sym_core_token134] = ACTIONS(86),
    [aux_sym_core_token135] = ACTIONS(86),
    [aux_sym_core_token136] = ACTIONS(86),
    [aux_sym_core_token137] = ACTIONS(86),
    [aux_sym_core_token138] = ACTIONS(86),
    [aux_sym_core_token139] = ACTIONS(86),
    [aux_sym_core_token140] = ACTIONS(86),
    [aux_sym_core_token141] = ACTIONS(86),
    [aux_sym_core_token142] = ACTIONS(86),
    [aux_sym_core_token143] = ACTIONS(86),
    [aux_sym_core_token144] = ACTIONS(86),
    [aux_sym_core_token145] = ACTIONS(86),
    [aux_sym_core_token146] = ACTIONS(86),
    [aux_sym_core_token147] = ACTIONS(86),
    [aux_sym_core_token148] = ACTIONS(86),
    [aux_sym_core_token149] = ACTIONS(86),
    [aux_sym_core_token150] = ACTIONS(86),
    [aux_sym_core_token151] = ACTIONS(86),
    [aux_sym_core_token152] = ACTIONS(86),
    [aux_sym_core_token153] = ACTIONS(86),
    [aux_sym_core_token154] = ACTIONS(86),
    [aux_sym_core_token155] = ACTIONS(86),
    [aux_sym_core_token156] = ACTIONS(86),
    [aux_sym_core_token157] = ACTIONS(86),
    [aux_sym_core_token158] = ACTIONS(86),
    [aux_sym_core_token159] = ACTIONS(86),
    [aux_sym_core_token160] = ACTIONS(86),
    [aux_sym_core_token161] = ACTIONS(86),
    [aux_sym_core_token162] = ACTIONS(86),
    [aux_sym_core_token163] = ACTIONS(86),
    [aux_sym_core_token164] = ACTIONS(86),
    [aux_sym_core_token165] = ACTIONS(86),
    [aux_sym_core_token166] = ACTIONS(86),
    [aux_sym_core_token167] = ACTIONS(86),
    [aux_sym_core_token168] = ACTIONS(86),
    [aux_sym_core_token169] = ACTIONS(86),
    [aux_sym_core_token170] = ACTIONS(86),
    [aux_sym_core_token171] = ACTIONS(86),
    [aux_sym_operator_token1] = ACTIONS(86),
    [aux_sym_operator_token2] = ACTIONS(86),
    [aux_sym_operator_token3] = ACTIONS(86),
    [aux_sym_operator_token4] = ACTIONS(86),
    [aux_sym_operator_token5] = ACTIONS(86),
    [aux_sym_operator_token6] = ACTIONS(86),
    [aux_sym_operator_token7] = ACTIONS(86),
    [aux_sym_operator_token8] = ACTIONS(86),
    [sym_word] = ACTIONS(86),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_string] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_start_definition] = ACTIONS(90),
    [aux_sym_comment_token1] = ACTIONS(88),
    [aux_sym_comment_token2] = ACTIONS(88),
    [aux_sym_core_token1] = ACTIONS(90),
    [aux_sym_core_token2] = ACTIONS(90),
    [aux_sym_core_token3] = ACTIONS(90),
    [aux_sym_core_token4] = ACTIONS(90),
    [aux_sym_core_token5] = ACTIONS(90),
    [aux_sym_core_token6] = ACTIONS(90),
    [aux_sym_core_token7] = ACTIONS(90),
    [aux_sym_core_token8] = ACTIONS(90),
    [aux_sym_core_token9] = ACTIONS(90),
    [aux_sym_core_token10] = ACTIONS(90),
    [aux_sym_core_token11] = ACTIONS(90),
    [aux_sym_core_token12] = ACTIONS(90),
    [aux_sym_core_token13] = ACTIONS(90),
    [aux_sym_core_token14] = ACTIONS(90),
    [aux_sym_core_token15] = ACTIONS(90),
    [aux_sym_core_token16] = ACTIONS(90),
    [aux_sym_core_token17] = ACTIONS(90),
    [aux_sym_core_token18] = ACTIONS(90),
    [aux_sym_core_token19] = ACTIONS(90),
    [aux_sym_core_token20] = ACTIONS(90),
    [aux_sym_core_token21] = ACTIONS(90),
    [aux_sym_core_token22] = ACTIONS(90),
    [aux_sym_core_token23] = ACTIONS(90),
    [aux_sym_core_token24] = ACTIONS(90),
    [aux_sym_core_token25] = ACTIONS(90),
    [aux_sym_core_token26] = ACTIONS(90),
    [aux_sym_core_token27] = ACTIONS(90),
    [aux_sym_core_token28] = ACTIONS(90),
    [aux_sym_core_token29] = ACTIONS(90),
    [aux_sym_core_token30] = ACTIONS(90),
    [aux_sym_core_token31] = ACTIONS(90),
    [aux_sym_core_token32] = ACTIONS(90),
    [aux_sym_core_token33] = ACTIONS(90),
    [aux_sym_core_token34] = ACTIONS(90),
    [aux_sym_core_token35] = ACTIONS(90),
    [aux_sym_core_token36] = ACTIONS(90),
    [aux_sym_core_token37] = ACTIONS(90),
    [aux_sym_core_token38] = ACTIONS(90),
    [aux_sym_core_token39] = ACTIONS(90),
    [aux_sym_core_token40] = ACTIONS(90),
    [aux_sym_core_token41] = ACTIONS(90),
    [aux_sym_core_token42] = ACTIONS(90),
    [aux_sym_core_token43] = ACTIONS(90),
    [aux_sym_core_token44] = ACTIONS(90),
    [aux_sym_core_token45] = ACTIONS(90),
    [aux_sym_core_token46] = ACTIONS(90),
    [aux_sym_core_token47] = ACTIONS(90),
    [aux_sym_core_token48] = ACTIONS(90),
    [aux_sym_core_token49] = ACTIONS(90),
    [aux_sym_core_token50] = ACTIONS(90),
    [aux_sym_core_token51] = ACTIONS(90),
    [aux_sym_core_token52] = ACTIONS(90),
    [aux_sym_core_token53] = ACTIONS(90),
    [aux_sym_core_token54] = ACTIONS(90),
    [aux_sym_core_token55] = ACTIONS(90),
    [aux_sym_core_token56] = ACTIONS(90),
    [aux_sym_core_token57] = ACTIONS(90),
    [aux_sym_core_token58] = ACTIONS(90),
    [aux_sym_core_token59] = ACTIONS(90),
    [aux_sym_core_token60] = ACTIONS(90),
    [aux_sym_core_token61] = ACTIONS(90),
    [aux_sym_core_token62] = ACTIONS(90),
    [aux_sym_core_token63] = ACTIONS(90),
    [aux_sym_core_token64] = ACTIONS(90),
    [aux_sym_core_token65] = ACTIONS(90),
    [aux_sym_core_token66] = ACTIONS(90),
    [aux_sym_core_token67] = ACTIONS(90),
    [aux_sym_core_token68] = ACTIONS(90),
    [aux_sym_core_token69] = ACTIONS(90),
    [aux_sym_core_token70] = ACTIONS(90),
    [aux_sym_core_token71] = ACTIONS(90),
    [aux_sym_core_token72] = ACTIONS(90),
    [aux_sym_core_token73] = ACTIONS(90),
    [aux_sym_core_token74] = ACTIONS(90),
    [aux_sym_core_token75] = ACTIONS(90),
    [aux_sym_core_token76] = ACTIONS(90),
    [aux_sym_core_token77] = ACTIONS(90),
    [aux_sym_core_token78] = ACTIONS(90),
    [aux_sym_core_token79] = ACTIONS(90),
    [aux_sym_core_token80] = ACTIONS(90),
    [aux_sym_core_token81] = ACTIONS(90),
    [aux_sym_core_token82] = ACTIONS(90),
    [aux_sym_core_token83] = ACTIONS(90),
    [aux_sym_core_token84] = ACTIONS(90),
    [aux_sym_core_token85] = ACTIONS(90),
    [aux_sym_core_token86] = ACTIONS(90),
    [aux_sym_core_token87] = ACTIONS(90),
    [aux_sym_core_token88] = ACTIONS(90),
    [aux_sym_core_token89] = ACTIONS(90),
    [aux_sym_core_token90] = ACTIONS(90),
    [aux_sym_core_token91] = ACTIONS(90),
    [aux_sym_core_token92] = ACTIONS(90),
    [aux_sym_core_token93] = ACTIONS(90),
    [aux_sym_core_token94] = ACTIONS(90),
    [aux_sym_core_token95] = ACTIONS(90),
    [aux_sym_core_token96] = ACTIONS(90),
    [aux_sym_core_token97] = ACTIONS(90),
    [aux_sym_core_token98] = ACTIONS(90),
    [aux_sym_core_token99] = ACTIONS(90),
    [aux_sym_core_token100] = ACTIONS(90),
    [aux_sym_core_token101] = ACTIONS(90),
    [aux_sym_core_token102] = ACTIONS(90),
    [aux_sym_core_token103] = ACTIONS(90),
    [aux_sym_core_token104] = ACTIONS(90),
    [aux_sym_core_token105] = ACTIONS(90),
    [aux_sym_core_token106] = ACTIONS(90),
    [aux_sym_core_token107] = ACTIONS(90),
    [aux_sym_core_token108] = ACTIONS(90),
    [aux_sym_core_token109] = ACTIONS(90),
    [aux_sym_core_token110] = ACTIONS(90),
    [aux_sym_core_token111] = ACTIONS(90),
    [aux_sym_core_token112] = ACTIONS(90),
    [aux_sym_core_token113] = ACTIONS(90),
    [aux_sym_core_token114] = ACTIONS(90),
    [aux_sym_core_token115] = ACTIONS(90),
    [aux_sym_core_token116] = ACTIONS(90),
    [aux_sym_core_token117] = ACTIONS(90),
    [aux_sym_core_token118] = ACTIONS(90),
    [aux_sym_core_token119] = ACTIONS(90),
    [aux_sym_core_token120] = ACTIONS(90),
    [aux_sym_core_token121] = ACTIONS(90),
    [aux_sym_core_token122] = ACTIONS(90),
    [aux_sym_core_token123] = ACTIONS(90),
    [aux_sym_core_token124] = ACTIONS(90),
    [aux_sym_core_token125] = ACTIONS(90),
    [aux_sym_core_token126] = ACTIONS(90),
    [aux_sym_core_token127] = ACTIONS(90),
    [aux_sym_core_token128] = ACTIONS(90),
    [aux_sym_core_token129] = ACTIONS(90),
    [aux_sym_core_token130] = ACTIONS(90),
    [aux_sym_core_token131] = ACTIONS(90),
    [aux_sym_core_token132] = ACTIONS(90),
    [aux_sym_core_token133] = ACTIONS(90),
    [aux_sym_core_token134] = ACTIONS(90),
    [aux_sym_core_token135] = ACTIONS(90),
    [aux_sym_core_token136] = ACTIONS(90),
    [aux_sym_core_token137] = ACTIONS(90),
    [aux_sym_core_token138] = ACTIONS(90),
    [aux_sym_core_token139] = ACTIONS(90),
    [aux_sym_core_token140] = ACTIONS(90),
    [aux_sym_core_token141] = ACTIONS(90),
    [aux_sym_core_token142] = ACTIONS(90),
    [aux_sym_core_token143] = ACTIONS(90),
    [aux_sym_core_token144] = ACTIONS(90),
    [aux_sym_core_token145] = ACTIONS(90),
    [aux_sym_core_token146] = ACTIONS(90),
    [aux_sym_core_token147] = ACTIONS(90),
    [aux_sym_core_token148] = ACTIONS(90),
    [aux_sym_core_token149] = ACTIONS(90),
    [aux_sym_core_token150] = ACTIONS(90),
    [aux_sym_core_token151] = ACTIONS(90),
    [aux_sym_core_token152] = ACTIONS(90),
    [aux_sym_core_token153] = ACTIONS(90),
    [aux_sym_core_token154] = ACTIONS(90),
    [aux_sym_core_token155] = ACTIONS(90),
    [aux_sym_core_token156] = ACTIONS(90),
    [aux_sym_core_token157] = ACTIONS(90),
    [aux_sym_core_token158] = ACTIONS(90),
    [aux_sym_core_token159] = ACTIONS(90),
    [aux_sym_core_token160] = ACTIONS(90),
    [aux_sym_core_token161] = ACTIONS(90),
    [aux_sym_core_token162] = ACTIONS(90),
    [aux_sym_core_token163] = ACTIONS(90),
    [aux_sym_core_token164] = ACTIONS(90),
    [aux_sym_core_token165] = ACTIONS(90),
    [aux_sym_core_token166] = ACTIONS(90),
    [aux_sym_core_token167] = ACTIONS(90),
    [aux_sym_core_token168] = ACTIONS(90),
    [aux_sym_core_token169] = ACTIONS(90),
    [aux_sym_core_token170] = ACTIONS(90),
    [aux_sym_core_token171] = ACTIONS(90),
    [aux_sym_operator_token1] = ACTIONS(90),
    [aux_sym_operator_token2] = ACTIONS(90),
    [aux_sym_operator_token3] = ACTIONS(90),
    [aux_sym_operator_token4] = ACTIONS(90),
    [aux_sym_operator_token5] = ACTIONS(90),
    [aux_sym_operator_token6] = ACTIONS(90),
    [aux_sym_operator_token7] = ACTIONS(90),
    [aux_sym_operator_token8] = ACTIONS(90),
    [sym_word] = ACTIONS(90),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_string] = ACTIONS(92),
    [sym_number] = ACTIONS(94),
    [sym_start_definition] = ACTIONS(94),
    [aux_sym_comment_token1] = ACTIONS(92),
    [aux_sym_comment_token2] = ACTIONS(92),
    [aux_sym_core_token1] = ACTIONS(94),
    [aux_sym_core_token2] = ACTIONS(94),
    [aux_sym_core_token3] = ACTIONS(94),
    [aux_sym_core_token4] = ACTIONS(94),
    [aux_sym_core_token5] = ACTIONS(94),
    [aux_sym_core_token6] = ACTIONS(94),
    [aux_sym_core_token7] = ACTIONS(94),
    [aux_sym_core_token8] = ACTIONS(94),
    [aux_sym_core_token9] = ACTIONS(94),
    [aux_sym_core_token10] = ACTIONS(94),
    [aux_sym_core_token11] = ACTIONS(94),
    [aux_sym_core_token12] = ACTIONS(94),
    [aux_sym_core_token13] = ACTIONS(94),
    [aux_sym_core_token14] = ACTIONS(94),
    [aux_sym_core_token15] = ACTIONS(94),
    [aux_sym_core_token16] = ACTIONS(94),
    [aux_sym_core_token17] = ACTIONS(94),
    [aux_sym_core_token18] = ACTIONS(94),
    [aux_sym_core_token19] = ACTIONS(94),
    [aux_sym_core_token20] = ACTIONS(94),
    [aux_sym_core_token21] = ACTIONS(94),
    [aux_sym_core_token22] = ACTIONS(94),
    [aux_sym_core_token23] = ACTIONS(94),
    [aux_sym_core_token24] = ACTIONS(94),
    [aux_sym_core_token25] = ACTIONS(94),
    [aux_sym_core_token26] = ACTIONS(94),
    [aux_sym_core_token27] = ACTIONS(94),
    [aux_sym_core_token28] = ACTIONS(94),
    [aux_sym_core_token29] = ACTIONS(94),
    [aux_sym_core_token30] = ACTIONS(94),
    [aux_sym_core_token31] = ACTIONS(94),
    [aux_sym_core_token32] = ACTIONS(94),
    [aux_sym_core_token33] = ACTIONS(94),
    [aux_sym_core_token34] = ACTIONS(94),
    [aux_sym_core_token35] = ACTIONS(94),
    [aux_sym_core_token36] = ACTIONS(94),
    [aux_sym_core_token37] = ACTIONS(94),
    [aux_sym_core_token38] = ACTIONS(94),
    [aux_sym_core_token39] = ACTIONS(94),
    [aux_sym_core_token40] = ACTIONS(94),
    [aux_sym_core_token41] = ACTIONS(94),
    [aux_sym_core_token42] = ACTIONS(94),
    [aux_sym_core_token43] = ACTIONS(94),
    [aux_sym_core_token44] = ACTIONS(94),
    [aux_sym_core_token45] = ACTIONS(94),
    [aux_sym_core_token46] = ACTIONS(94),
    [aux_sym_core_token47] = ACTIONS(94),
    [aux_sym_core_token48] = ACTIONS(94),
    [aux_sym_core_token49] = ACTIONS(94),
    [aux_sym_core_token50] = ACTIONS(94),
    [aux_sym_core_token51] = ACTIONS(94),
    [aux_sym_core_token52] = ACTIONS(94),
    [aux_sym_core_token53] = ACTIONS(94),
    [aux_sym_core_token54] = ACTIONS(94),
    [aux_sym_core_token55] = ACTIONS(94),
    [aux_sym_core_token56] = ACTIONS(94),
    [aux_sym_core_token57] = ACTIONS(94),
    [aux_sym_core_token58] = ACTIONS(94),
    [aux_sym_core_token59] = ACTIONS(94),
    [aux_sym_core_token60] = ACTIONS(94),
    [aux_sym_core_token61] = ACTIONS(94),
    [aux_sym_core_token62] = ACTIONS(94),
    [aux_sym_core_token63] = ACTIONS(94),
    [aux_sym_core_token64] = ACTIONS(94),
    [aux_sym_core_token65] = ACTIONS(94),
    [aux_sym_core_token66] = ACTIONS(94),
    [aux_sym_core_token67] = ACTIONS(94),
    [aux_sym_core_token68] = ACTIONS(94),
    [aux_sym_core_token69] = ACTIONS(94),
    [aux_sym_core_token70] = ACTIONS(94),
    [aux_sym_core_token71] = ACTIONS(94),
    [aux_sym_core_token72] = ACTIONS(94),
    [aux_sym_core_token73] = ACTIONS(94),
    [aux_sym_core_token74] = ACTIONS(94),
    [aux_sym_core_token75] = ACTIONS(94),
    [aux_sym_core_token76] = ACTIONS(94),
    [aux_sym_core_token77] = ACTIONS(94),
    [aux_sym_core_token78] = ACTIONS(94),
    [aux_sym_core_token79] = ACTIONS(94),
    [aux_sym_core_token80] = ACTIONS(94),
    [aux_sym_core_token81] = ACTIONS(94),
    [aux_sym_core_token82] = ACTIONS(94),
    [aux_sym_core_token83] = ACTIONS(94),
    [aux_sym_core_token84] = ACTIONS(94),
    [aux_sym_core_token85] = ACTIONS(94),
    [aux_sym_core_token86] = ACTIONS(94),
    [aux_sym_core_token87] = ACTIONS(94),
    [aux_sym_core_token88] = ACTIONS(94),
    [aux_sym_core_token89] = ACTIONS(94),
    [aux_sym_core_token90] = ACTIONS(94),
    [aux_sym_core_token91] = ACTIONS(94),
    [aux_sym_core_token92] = ACTIONS(94),
    [aux_sym_core_token93] = ACTIONS(94),
    [aux_sym_core_token94] = ACTIONS(94),
    [aux_sym_core_token95] = ACTIONS(94),
    [aux_sym_core_token96] = ACTIONS(94),
    [aux_sym_core_token97] = ACTIONS(94),
    [aux_sym_core_token98] = ACTIONS(94),
    [aux_sym_core_token99] = ACTIONS(94),
    [aux_sym_core_token100] = ACTIONS(94),
    [aux_sym_core_token101] = ACTIONS(94),
    [aux_sym_core_token102] = ACTIONS(94),
    [aux_sym_core_token103] = ACTIONS(94),
    [aux_sym_core_token104] = ACTIONS(94),
    [aux_sym_core_token105] = ACTIONS(94),
    [aux_sym_core_token106] = ACTIONS(94),
    [aux_sym_core_token107] = ACTIONS(94),
    [aux_sym_core_token108] = ACTIONS(94),
    [aux_sym_core_token109] = ACTIONS(94),
    [aux_sym_core_token110] = ACTIONS(94),
    [aux_sym_core_token111] = ACTIONS(94),
    [aux_sym_core_token112] = ACTIONS(94),
    [aux_sym_core_token113] = ACTIONS(94),
    [aux_sym_core_token114] = ACTIONS(94),
    [aux_sym_core_token115] = ACTIONS(94),
    [aux_sym_core_token116] = ACTIONS(94),
    [aux_sym_core_token117] = ACTIONS(94),
    [aux_sym_core_token118] = ACTIONS(94),
    [aux_sym_core_token119] = ACTIONS(94),
    [aux_sym_core_token120] = ACTIONS(94),
    [aux_sym_core_token121] = ACTIONS(94),
    [aux_sym_core_token122] = ACTIONS(94),
    [aux_sym_core_token123] = ACTIONS(94),
    [aux_sym_core_token124] = ACTIONS(94),
    [aux_sym_core_token125] = ACTIONS(94),
    [aux_sym_core_token126] = ACTIONS(94),
    [aux_sym_core_token127] = ACTIONS(94),
    [aux_sym_core_token128] = ACTIONS(94),
    [aux_sym_core_token129] = ACTIONS(94),
    [aux_sym_core_token130] = ACTIONS(94),
    [aux_sym_core_token131] = ACTIONS(94),
    [aux_sym_core_token132] = ACTIONS(94),
    [aux_sym_core_token133] = ACTIONS(94),
    [aux_sym_core_token134] = ACTIONS(94),
    [aux_sym_core_token135] = ACTIONS(94),
    [aux_sym_core_token136] = ACTIONS(94),
    [aux_sym_core_token137] = ACTIONS(94),
    [aux_sym_core_token138] = ACTIONS(94),
    [aux_sym_core_token139] = ACTIONS(94),
    [aux_sym_core_token140] = ACTIONS(94),
    [aux_sym_core_token141] = ACTIONS(94),
    [aux_sym_core_token142] = ACTIONS(94),
    [aux_sym_core_token143] = ACTIONS(94),
    [aux_sym_core_token144] = ACTIONS(94),
    [aux_sym_core_token145] = ACTIONS(94),
    [aux_sym_core_token146] = ACTIONS(94),
    [aux_sym_core_token147] = ACTIONS(94),
    [aux_sym_core_token148] = ACTIONS(94),
    [aux_sym_core_token149] = ACTIONS(94),
    [aux_sym_core_token150] = ACTIONS(94),
    [aux_sym_core_token151] = ACTIONS(94),
    [aux_sym_core_token152] = ACTIONS(94),
    [aux_sym_core_token153] = ACTIONS(94),
    [aux_sym_core_token154] = ACTIONS(94),
    [aux_sym_core_token155] = ACTIONS(94),
    [aux_sym_core_token156] = ACTIONS(94),
    [aux_sym_core_token157] = ACTIONS(94),
    [aux_sym_core_token158] = ACTIONS(94),
    [aux_sym_core_token159] = ACTIONS(94),
    [aux_sym_core_token160] = ACTIONS(94),
    [aux_sym_core_token161] = ACTIONS(94),
    [aux_sym_core_token162] = ACTIONS(94),
    [aux_sym_core_token163] = ACTIONS(94),
    [aux_sym_core_token164] = ACTIONS(94),
    [aux_sym_core_token165] = ACTIONS(94),
    [aux_sym_core_token166] = ACTIONS(94),
    [aux_sym_core_token167] = ACTIONS(94),
    [aux_sym_core_token168] = ACTIONS(94),
    [aux_sym_core_token169] = ACTIONS(94),
    [aux_sym_core_token170] = ACTIONS(94),
    [aux_sym_core_token171] = ACTIONS(94),
    [aux_sym_operator_token1] = ACTIONS(94),
    [aux_sym_operator_token2] = ACTIONS(94),
    [aux_sym_operator_token3] = ACTIONS(94),
    [aux_sym_operator_token4] = ACTIONS(94),
    [aux_sym_operator_token5] = ACTIONS(94),
    [aux_sym_operator_token6] = ACTIONS(94),
    [aux_sym_operator_token7] = ACTIONS(94),
    [aux_sym_operator_token8] = ACTIONS(94),
    [sym_word] = ACTIONS(94),
  },
  [12] = {
    [sym_string] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_end_definition] = ACTIONS(78),
    [aux_sym_comment_token1] = ACTIONS(76),
    [aux_sym_comment_token2] = ACTIONS(76),
    [aux_sym_core_token1] = ACTIONS(78),
    [aux_sym_core_token2] = ACTIONS(78),
    [aux_sym_core_token3] = ACTIONS(78),
    [aux_sym_core_token4] = ACTIONS(78),
    [aux_sym_core_token5] = ACTIONS(78),
    [aux_sym_core_token6] = ACTIONS(78),
    [aux_sym_core_token7] = ACTIONS(78),
    [aux_sym_core_token8] = ACTIONS(78),
    [aux_sym_core_token9] = ACTIONS(78),
    [aux_sym_core_token10] = ACTIONS(78),
    [aux_sym_core_token11] = ACTIONS(78),
    [aux_sym_core_token12] = ACTIONS(78),
    [aux_sym_core_token13] = ACTIONS(78),
    [aux_sym_core_token14] = ACTIONS(78),
    [aux_sym_core_token15] = ACTIONS(78),
    [aux_sym_core_token16] = ACTIONS(78),
    [aux_sym_core_token17] = ACTIONS(78),
    [aux_sym_core_token18] = ACTIONS(78),
    [aux_sym_core_token19] = ACTIONS(78),
    [aux_sym_core_token20] = ACTIONS(78),
    [aux_sym_core_token21] = ACTIONS(78),
    [aux_sym_core_token22] = ACTIONS(78),
    [aux_sym_core_token23] = ACTIONS(78),
    [aux_sym_core_token24] = ACTIONS(78),
    [aux_sym_core_token25] = ACTIONS(78),
    [aux_sym_core_token26] = ACTIONS(78),
    [aux_sym_core_token27] = ACTIONS(78),
    [aux_sym_core_token28] = ACTIONS(78),
    [aux_sym_core_token29] = ACTIONS(78),
    [aux_sym_core_token30] = ACTIONS(78),
    [aux_sym_core_token31] = ACTIONS(78),
    [aux_sym_core_token32] = ACTIONS(78),
    [aux_sym_core_token33] = ACTIONS(78),
    [aux_sym_core_token34] = ACTIONS(78),
    [aux_sym_core_token35] = ACTIONS(78),
    [aux_sym_core_token36] = ACTIONS(78),
    [aux_sym_core_token37] = ACTIONS(78),
    [aux_sym_core_token38] = ACTIONS(78),
    [aux_sym_core_token39] = ACTIONS(78),
    [aux_sym_core_token40] = ACTIONS(78),
    [aux_sym_core_token41] = ACTIONS(78),
    [aux_sym_core_token42] = ACTIONS(78),
    [aux_sym_core_token43] = ACTIONS(78),
    [aux_sym_core_token44] = ACTIONS(78),
    [aux_sym_core_token45] = ACTIONS(78),
    [aux_sym_core_token46] = ACTIONS(78),
    [aux_sym_core_token47] = ACTIONS(78),
    [aux_sym_core_token48] = ACTIONS(78),
    [aux_sym_core_token49] = ACTIONS(78),
    [aux_sym_core_token50] = ACTIONS(78),
    [aux_sym_core_token51] = ACTIONS(78),
    [aux_sym_core_token52] = ACTIONS(78),
    [aux_sym_core_token53] = ACTIONS(78),
    [aux_sym_core_token54] = ACTIONS(78),
    [aux_sym_core_token55] = ACTIONS(78),
    [aux_sym_core_token56] = ACTIONS(78),
    [aux_sym_core_token57] = ACTIONS(78),
    [aux_sym_core_token58] = ACTIONS(78),
    [aux_sym_core_token59] = ACTIONS(78),
    [aux_sym_core_token60] = ACTIONS(78),
    [aux_sym_core_token61] = ACTIONS(78),
    [aux_sym_core_token62] = ACTIONS(78),
    [aux_sym_core_token63] = ACTIONS(78),
    [aux_sym_core_token64] = ACTIONS(78),
    [aux_sym_core_token65] = ACTIONS(78),
    [aux_sym_core_token66] = ACTIONS(78),
    [aux_sym_core_token67] = ACTIONS(78),
    [aux_sym_core_token68] = ACTIONS(78),
    [aux_sym_core_token69] = ACTIONS(78),
    [aux_sym_core_token70] = ACTIONS(78),
    [aux_sym_core_token71] = ACTIONS(78),
    [aux_sym_core_token72] = ACTIONS(78),
    [aux_sym_core_token73] = ACTIONS(78),
    [aux_sym_core_token74] = ACTIONS(78),
    [aux_sym_core_token75] = ACTIONS(78),
    [aux_sym_core_token76] = ACTIONS(78),
    [aux_sym_core_token77] = ACTIONS(78),
    [aux_sym_core_token78] = ACTIONS(78),
    [aux_sym_core_token79] = ACTIONS(78),
    [aux_sym_core_token80] = ACTIONS(78),
    [aux_sym_core_token81] = ACTIONS(78),
    [aux_sym_core_token82] = ACTIONS(78),
    [aux_sym_core_token83] = ACTIONS(78),
    [aux_sym_core_token84] = ACTIONS(78),
    [aux_sym_core_token85] = ACTIONS(78),
    [aux_sym_core_token86] = ACTIONS(78),
    [aux_sym_core_token87] = ACTIONS(78),
    [aux_sym_core_token88] = ACTIONS(78),
    [aux_sym_core_token89] = ACTIONS(78),
    [aux_sym_core_token90] = ACTIONS(78),
    [aux_sym_core_token91] = ACTIONS(78),
    [aux_sym_core_token92] = ACTIONS(78),
    [aux_sym_core_token93] = ACTIONS(78),
    [aux_sym_core_token94] = ACTIONS(78),
    [aux_sym_core_token95] = ACTIONS(78),
    [aux_sym_core_token96] = ACTIONS(78),
    [aux_sym_core_token97] = ACTIONS(78),
    [aux_sym_core_token98] = ACTIONS(78),
    [aux_sym_core_token99] = ACTIONS(78),
    [aux_sym_core_token100] = ACTIONS(78),
    [aux_sym_core_token101] = ACTIONS(78),
    [aux_sym_core_token102] = ACTIONS(78),
    [aux_sym_core_token103] = ACTIONS(78),
    [aux_sym_core_token104] = ACTIONS(78),
    [aux_sym_core_token105] = ACTIONS(78),
    [aux_sym_core_token106] = ACTIONS(78),
    [aux_sym_core_token107] = ACTIONS(78),
    [aux_sym_core_token108] = ACTIONS(78),
    [aux_sym_core_token109] = ACTIONS(78),
    [aux_sym_core_token110] = ACTIONS(78),
    [aux_sym_core_token111] = ACTIONS(78),
    [aux_sym_core_token112] = ACTIONS(78),
    [aux_sym_core_token113] = ACTIONS(78),
    [aux_sym_core_token114] = ACTIONS(78),
    [aux_sym_core_token115] = ACTIONS(78),
    [aux_sym_core_token116] = ACTIONS(78),
    [aux_sym_core_token117] = ACTIONS(78),
    [aux_sym_core_token118] = ACTIONS(78),
    [aux_sym_core_token119] = ACTIONS(78),
    [aux_sym_core_token120] = ACTIONS(78),
    [aux_sym_core_token121] = ACTIONS(78),
    [aux_sym_core_token122] = ACTIONS(78),
    [aux_sym_core_token123] = ACTIONS(78),
    [aux_sym_core_token124] = ACTIONS(78),
    [aux_sym_core_token125] = ACTIONS(78),
    [aux_sym_core_token126] = ACTIONS(78),
    [aux_sym_core_token127] = ACTIONS(78),
    [aux_sym_core_token128] = ACTIONS(78),
    [aux_sym_core_token129] = ACTIONS(78),
    [aux_sym_core_token130] = ACTIONS(78),
    [aux_sym_core_token131] = ACTIONS(78),
    [aux_sym_core_token132] = ACTIONS(78),
    [aux_sym_core_token133] = ACTIONS(78),
    [aux_sym_core_token134] = ACTIONS(78),
    [aux_sym_core_token135] = ACTIONS(78),
    [aux_sym_core_token136] = ACTIONS(78),
    [aux_sym_core_token137] = ACTIONS(78),
    [aux_sym_core_token138] = ACTIONS(78),
    [aux_sym_core_token139] = ACTIONS(78),
    [aux_sym_core_token140] = ACTIONS(78),
    [aux_sym_core_token141] = ACTIONS(78),
    [aux_sym_core_token142] = ACTIONS(78),
    [aux_sym_core_token143] = ACTIONS(78),
    [aux_sym_core_token144] = ACTIONS(78),
    [aux_sym_core_token145] = ACTIONS(78),
    [aux_sym_core_token146] = ACTIONS(78),
    [aux_sym_core_token147] = ACTIONS(78),
    [aux_sym_core_token148] = ACTIONS(78),
    [aux_sym_core_token149] = ACTIONS(78),
    [aux_sym_core_token150] = ACTIONS(78),
    [aux_sym_core_token151] = ACTIONS(78),
    [aux_sym_core_token152] = ACTIONS(78),
    [aux_sym_core_token153] = ACTIONS(78),
    [aux_sym_core_token154] = ACTIONS(78),
    [aux_sym_core_token155] = ACTIONS(78),
    [aux_sym_core_token156] = ACTIONS(78),
    [aux_sym_core_token157] = ACTIONS(78),
    [aux_sym_core_token158] = ACTIONS(78),
    [aux_sym_core_token159] = ACTIONS(78),
    [aux_sym_core_token160] = ACTIONS(78),
    [aux_sym_core_token161] = ACTIONS(78),
    [aux_sym_core_token162] = ACTIONS(78),
    [aux_sym_core_token163] = ACTIONS(78),
    [aux_sym_core_token164] = ACTIONS(78),
    [aux_sym_core_token165] = ACTIONS(78),
    [aux_sym_core_token166] = ACTIONS(78),
    [aux_sym_core_token167] = ACTIONS(78),
    [aux_sym_core_token168] = ACTIONS(78),
    [aux_sym_core_token169] = ACTIONS(78),
    [aux_sym_core_token170] = ACTIONS(78),
    [aux_sym_core_token171] = ACTIONS(78),
    [aux_sym_operator_token1] = ACTIONS(78),
    [aux_sym_operator_token2] = ACTIONS(78),
    [aux_sym_operator_token3] = ACTIONS(78),
    [aux_sym_operator_token4] = ACTIONS(78),
    [aux_sym_operator_token5] = ACTIONS(78),
    [aux_sym_operator_token6] = ACTIONS(78),
    [aux_sym_operator_token7] = ACTIONS(78),
    [aux_sym_operator_token8] = ACTIONS(78),
    [sym_word] = ACTIONS(78),
  },
  [13] = {
    [sym_string] = ACTIONS(80),
    [sym_number] = ACTIONS(82),
    [sym_end_definition] = ACTIONS(82),
    [aux_sym_comment_token1] = ACTIONS(80),
    [aux_sym_comment_token2] = ACTIONS(80),
    [aux_sym_core_token1] = ACTIONS(82),
    [aux_sym_core_token2] = ACTIONS(82),
    [aux_sym_core_token3] = ACTIONS(82),
    [aux_sym_core_token4] = ACTIONS(82),
    [aux_sym_core_token5] = ACTIONS(82),
    [aux_sym_core_token6] = ACTIONS(82),
    [aux_sym_core_token7] = ACTIONS(82),
    [aux_sym_core_token8] = ACTIONS(82),
    [aux_sym_core_token9] = ACTIONS(82),
    [aux_sym_core_token10] = ACTIONS(82),
    [aux_sym_core_token11] = ACTIONS(82),
    [aux_sym_core_token12] = ACTIONS(82),
    [aux_sym_core_token13] = ACTIONS(82),
    [aux_sym_core_token14] = ACTIONS(82),
    [aux_sym_core_token15] = ACTIONS(82),
    [aux_sym_core_token16] = ACTIONS(82),
    [aux_sym_core_token17] = ACTIONS(82),
    [aux_sym_core_token18] = ACTIONS(82),
    [aux_sym_core_token19] = ACTIONS(82),
    [aux_sym_core_token20] = ACTIONS(82),
    [aux_sym_core_token21] = ACTIONS(82),
    [aux_sym_core_token22] = ACTIONS(82),
    [aux_sym_core_token23] = ACTIONS(82),
    [aux_sym_core_token24] = ACTIONS(82),
    [aux_sym_core_token25] = ACTIONS(82),
    [aux_sym_core_token26] = ACTIONS(82),
    [aux_sym_core_token27] = ACTIONS(82),
    [aux_sym_core_token28] = ACTIONS(82),
    [aux_sym_core_token29] = ACTIONS(82),
    [aux_sym_core_token30] = ACTIONS(82),
    [aux_sym_core_token31] = ACTIONS(82),
    [aux_sym_core_token32] = ACTIONS(82),
    [aux_sym_core_token33] = ACTIONS(82),
    [aux_sym_core_token34] = ACTIONS(82),
    [aux_sym_core_token35] = ACTIONS(82),
    [aux_sym_core_token36] = ACTIONS(82),
    [aux_sym_core_token37] = ACTIONS(82),
    [aux_sym_core_token38] = ACTIONS(82),
    [aux_sym_core_token39] = ACTIONS(82),
    [aux_sym_core_token40] = ACTIONS(82),
    [aux_sym_core_token41] = ACTIONS(82),
    [aux_sym_core_token42] = ACTIONS(82),
    [aux_sym_core_token43] = ACTIONS(82),
    [aux_sym_core_token44] = ACTIONS(82),
    [aux_sym_core_token45] = ACTIONS(82),
    [aux_sym_core_token46] = ACTIONS(82),
    [aux_sym_core_token47] = ACTIONS(82),
    [aux_sym_core_token48] = ACTIONS(82),
    [aux_sym_core_token49] = ACTIONS(82),
    [aux_sym_core_token50] = ACTIONS(82),
    [aux_sym_core_token51] = ACTIONS(82),
    [aux_sym_core_token52] = ACTIONS(82),
    [aux_sym_core_token53] = ACTIONS(82),
    [aux_sym_core_token54] = ACTIONS(82),
    [aux_sym_core_token55] = ACTIONS(82),
    [aux_sym_core_token56] = ACTIONS(82),
    [aux_sym_core_token57] = ACTIONS(82),
    [aux_sym_core_token58] = ACTIONS(82),
    [aux_sym_core_token59] = ACTIONS(82),
    [aux_sym_core_token60] = ACTIONS(82),
    [aux_sym_core_token61] = ACTIONS(82),
    [aux_sym_core_token62] = ACTIONS(82),
    [aux_sym_core_token63] = ACTIONS(82),
    [aux_sym_core_token64] = ACTIONS(82),
    [aux_sym_core_token65] = ACTIONS(82),
    [aux_sym_core_token66] = ACTIONS(82),
    [aux_sym_core_token67] = ACTIONS(82),
    [aux_sym_core_token68] = ACTIONS(82),
    [aux_sym_core_token69] = ACTIONS(82),
    [aux_sym_core_token70] = ACTIONS(82),
    [aux_sym_core_token71] = ACTIONS(82),
    [aux_sym_core_token72] = ACTIONS(82),
    [aux_sym_core_token73] = ACTIONS(82),
    [aux_sym_core_token74] = ACTIONS(82),
    [aux_sym_core_token75] = ACTIONS(82),
    [aux_sym_core_token76] = ACTIONS(82),
    [aux_sym_core_token77] = ACTIONS(82),
    [aux_sym_core_token78] = ACTIONS(82),
    [aux_sym_core_token79] = ACTIONS(82),
    [aux_sym_core_token80] = ACTIONS(82),
    [aux_sym_core_token81] = ACTIONS(82),
    [aux_sym_core_token82] = ACTIONS(82),
    [aux_sym_core_token83] = ACTIONS(82),
    [aux_sym_core_token84] = ACTIONS(82),
    [aux_sym_core_token85] = ACTIONS(82),
    [aux_sym_core_token86] = ACTIONS(82),
    [aux_sym_core_token87] = ACTIONS(82),
    [aux_sym_core_token88] = ACTIONS(82),
    [aux_sym_core_token89] = ACTIONS(82),
    [aux_sym_core_token90] = ACTIONS(82),
    [aux_sym_core_token91] = ACTIONS(82),
    [aux_sym_core_token92] = ACTIONS(82),
    [aux_sym_core_token93] = ACTIONS(82),
    [aux_sym_core_token94] = ACTIONS(82),
    [aux_sym_core_token95] = ACTIONS(82),
    [aux_sym_core_token96] = ACTIONS(82),
    [aux_sym_core_token97] = ACTIONS(82),
    [aux_sym_core_token98] = ACTIONS(82),
    [aux_sym_core_token99] = ACTIONS(82),
    [aux_sym_core_token100] = ACTIONS(82),
    [aux_sym_core_token101] = ACTIONS(82),
    [aux_sym_core_token102] = ACTIONS(82),
    [aux_sym_core_token103] = ACTIONS(82),
    [aux_sym_core_token104] = ACTIONS(82),
    [aux_sym_core_token105] = ACTIONS(82),
    [aux_sym_core_token106] = ACTIONS(82),
    [aux_sym_core_token107] = ACTIONS(82),
    [aux_sym_core_token108] = ACTIONS(82),
    [aux_sym_core_token109] = ACTIONS(82),
    [aux_sym_core_token110] = ACTIONS(82),
    [aux_sym_core_token111] = ACTIONS(82),
    [aux_sym_core_token112] = ACTIONS(82),
    [aux_sym_core_token113] = ACTIONS(82),
    [aux_sym_core_token114] = ACTIONS(82),
    [aux_sym_core_token115] = ACTIONS(82),
    [aux_sym_core_token116] = ACTIONS(82),
    [aux_sym_core_token117] = ACTIONS(82),
    [aux_sym_core_token118] = ACTIONS(82),
    [aux_sym_core_token119] = ACTIONS(82),
    [aux_sym_core_token120] = ACTIONS(82),
    [aux_sym_core_token121] = ACTIONS(82),
    [aux_sym_core_token122] = ACTIONS(82),
    [aux_sym_core_token123] = ACTIONS(82),
    [aux_sym_core_token124] = ACTIONS(82),
    [aux_sym_core_token125] = ACTIONS(82),
    [aux_sym_core_token126] = ACTIONS(82),
    [aux_sym_core_token127] = ACTIONS(82),
    [aux_sym_core_token128] = ACTIONS(82),
    [aux_sym_core_token129] = ACTIONS(82),
    [aux_sym_core_token130] = ACTIONS(82),
    [aux_sym_core_token131] = ACTIONS(82),
    [aux_sym_core_token132] = ACTIONS(82),
    [aux_sym_core_token133] = ACTIONS(82),
    [aux_sym_core_token134] = ACTIONS(82),
    [aux_sym_core_token135] = ACTIONS(82),
    [aux_sym_core_token136] = ACTIONS(82),
    [aux_sym_core_token137] = ACTIONS(82),
    [aux_sym_core_token138] = ACTIONS(82),
    [aux_sym_core_token139] = ACTIONS(82),
    [aux_sym_core_token140] = ACTIONS(82),
    [aux_sym_core_token141] = ACTIONS(82),
    [aux_sym_core_token142] = ACTIONS(82),
    [aux_sym_core_token143] = ACTIONS(82),
    [aux_sym_core_token144] = ACTIONS(82),
    [aux_sym_core_token145] = ACTIONS(82),
    [aux_sym_core_token146] = ACTIONS(82),
    [aux_sym_core_token147] = ACTIONS(82),
    [aux_sym_core_token148] = ACTIONS(82),
    [aux_sym_core_token149] = ACTIONS(82),
    [aux_sym_core_token150] = ACTIONS(82),
    [aux_sym_core_token151] = ACTIONS(82),
    [aux_sym_core_token152] = ACTIONS(82),
    [aux_sym_core_token153] = ACTIONS(82),
    [aux_sym_core_token154] = ACTIONS(82),
    [aux_sym_core_token155] = ACTIONS(82),
    [aux_sym_core_token156] = ACTIONS(82),
    [aux_sym_core_token157] = ACTIONS(82),
    [aux_sym_core_token158] = ACTIONS(82),
    [aux_sym_core_token159] = ACTIONS(82),
    [aux_sym_core_token160] = ACTIONS(82),
    [aux_sym_core_token161] = ACTIONS(82),
    [aux_sym_core_token162] = ACTIONS(82),
    [aux_sym_core_token163] = ACTIONS(82),
    [aux_sym_core_token164] = ACTIONS(82),
    [aux_sym_core_token165] = ACTIONS(82),
    [aux_sym_core_token166] = ACTIONS(82),
    [aux_sym_core_token167] = ACTIONS(82),
    [aux_sym_core_token168] = ACTIONS(82),
    [aux_sym_core_token169] = ACTIONS(82),
    [aux_sym_core_token170] = ACTIONS(82),
    [aux_sym_core_token171] = ACTIONS(82),
    [aux_sym_operator_token1] = ACTIONS(82),
    [aux_sym_operator_token2] = ACTIONS(82),
    [aux_sym_operator_token3] = ACTIONS(82),
    [aux_sym_operator_token4] = ACTIONS(82),
    [aux_sym_operator_token5] = ACTIONS(82),
    [aux_sym_operator_token6] = ACTIONS(82),
    [aux_sym_operator_token7] = ACTIONS(82),
    [aux_sym_operator_token8] = ACTIONS(82),
    [sym_word] = ACTIONS(82),
  },
  [14] = {
    [sym_string] = ACTIONS(84),
    [sym_number] = ACTIONS(86),
    [sym_end_definition] = ACTIONS(86),
    [aux_sym_comment_token1] = ACTIONS(84),
    [aux_sym_comment_token2] = ACTIONS(84),
    [aux_sym_core_token1] = ACTIONS(86),
    [aux_sym_core_token2] = ACTIONS(86),
    [aux_sym_core_token3] = ACTIONS(86),
    [aux_sym_core_token4] = ACTIONS(86),
    [aux_sym_core_token5] = ACTIONS(86),
    [aux_sym_core_token6] = ACTIONS(86),
    [aux_sym_core_token7] = ACTIONS(86),
    [aux_sym_core_token8] = ACTIONS(86),
    [aux_sym_core_token9] = ACTIONS(86),
    [aux_sym_core_token10] = ACTIONS(86),
    [aux_sym_core_token11] = ACTIONS(86),
    [aux_sym_core_token12] = ACTIONS(86),
    [aux_sym_core_token13] = ACTIONS(86),
    [aux_sym_core_token14] = ACTIONS(86),
    [aux_sym_core_token15] = ACTIONS(86),
    [aux_sym_core_token16] = ACTIONS(86),
    [aux_sym_core_token17] = ACTIONS(86),
    [aux_sym_core_token18] = ACTIONS(86),
    [aux_sym_core_token19] = ACTIONS(86),
    [aux_sym_core_token20] = ACTIONS(86),
    [aux_sym_core_token21] = ACTIONS(86),
    [aux_sym_core_token22] = ACTIONS(86),
    [aux_sym_core_token23] = ACTIONS(86),
    [aux_sym_core_token24] = ACTIONS(86),
    [aux_sym_core_token25] = ACTIONS(86),
    [aux_sym_core_token26] = ACTIONS(86),
    [aux_sym_core_token27] = ACTIONS(86),
    [aux_sym_core_token28] = ACTIONS(86),
    [aux_sym_core_token29] = ACTIONS(86),
    [aux_sym_core_token30] = ACTIONS(86),
    [aux_sym_core_token31] = ACTIONS(86),
    [aux_sym_core_token32] = ACTIONS(86),
    [aux_sym_core_token33] = ACTIONS(86),
    [aux_sym_core_token34] = ACTIONS(86),
    [aux_sym_core_token35] = ACTIONS(86),
    [aux_sym_core_token36] = ACTIONS(86),
    [aux_sym_core_token37] = ACTIONS(86),
    [aux_sym_core_token38] = ACTIONS(86),
    [aux_sym_core_token39] = ACTIONS(86),
    [aux_sym_core_token40] = ACTIONS(86),
    [aux_sym_core_token41] = ACTIONS(86),
    [aux_sym_core_token42] = ACTIONS(86),
    [aux_sym_core_token43] = ACTIONS(86),
    [aux_sym_core_token44] = ACTIONS(86),
    [aux_sym_core_token45] = ACTIONS(86),
    [aux_sym_core_token46] = ACTIONS(86),
    [aux_sym_core_token47] = ACTIONS(86),
    [aux_sym_core_token48] = ACTIONS(86),
    [aux_sym_core_token49] = ACTIONS(86),
    [aux_sym_core_token50] = ACTIONS(86),
    [aux_sym_core_token51] = ACTIONS(86),
    [aux_sym_core_token52] = ACTIONS(86),
    [aux_sym_core_token53] = ACTIONS(86),
    [aux_sym_core_token54] = ACTIONS(86),
    [aux_sym_core_token55] = ACTIONS(86),
    [aux_sym_core_token56] = ACTIONS(86),
    [aux_sym_core_token57] = ACTIONS(86),
    [aux_sym_core_token58] = ACTIONS(86),
    [aux_sym_core_token59] = ACTIONS(86),
    [aux_sym_core_token60] = ACTIONS(86),
    [aux_sym_core_token61] = ACTIONS(86),
    [aux_sym_core_token62] = ACTIONS(86),
    [aux_sym_core_token63] = ACTIONS(86),
    [aux_sym_core_token64] = ACTIONS(86),
    [aux_sym_core_token65] = ACTIONS(86),
    [aux_sym_core_token66] = ACTIONS(86),
    [aux_sym_core_token67] = ACTIONS(86),
    [aux_sym_core_token68] = ACTIONS(86),
    [aux_sym_core_token69] = ACTIONS(86),
    [aux_sym_core_token70] = ACTIONS(86),
    [aux_sym_core_token71] = ACTIONS(86),
    [aux_sym_core_token72] = ACTIONS(86),
    [aux_sym_core_token73] = ACTIONS(86),
    [aux_sym_core_token74] = ACTIONS(86),
    [aux_sym_core_token75] = ACTIONS(86),
    [aux_sym_core_token76] = ACTIONS(86),
    [aux_sym_core_token77] = ACTIONS(86),
    [aux_sym_core_token78] = ACTIONS(86),
    [aux_sym_core_token79] = ACTIONS(86),
    [aux_sym_core_token80] = ACTIONS(86),
    [aux_sym_core_token81] = ACTIONS(86),
    [aux_sym_core_token82] = ACTIONS(86),
    [aux_sym_core_token83] = ACTIONS(86),
    [aux_sym_core_token84] = ACTIONS(86),
    [aux_sym_core_token85] = ACTIONS(86),
    [aux_sym_core_token86] = ACTIONS(86),
    [aux_sym_core_token87] = ACTIONS(86),
    [aux_sym_core_token88] = ACTIONS(86),
    [aux_sym_core_token89] = ACTIONS(86),
    [aux_sym_core_token90] = ACTIONS(86),
    [aux_sym_core_token91] = ACTIONS(86),
    [aux_sym_core_token92] = ACTIONS(86),
    [aux_sym_core_token93] = ACTIONS(86),
    [aux_sym_core_token94] = ACTIONS(86),
    [aux_sym_core_token95] = ACTIONS(86),
    [aux_sym_core_token96] = ACTIONS(86),
    [aux_sym_core_token97] = ACTIONS(86),
    [aux_sym_core_token98] = ACTIONS(86),
    [aux_sym_core_token99] = ACTIONS(86),
    [aux_sym_core_token100] = ACTIONS(86),
    [aux_sym_core_token101] = ACTIONS(86),
    [aux_sym_core_token102] = ACTIONS(86),
    [aux_sym_core_token103] = ACTIONS(86),
    [aux_sym_core_token104] = ACTIONS(86),
    [aux_sym_core_token105] = ACTIONS(86),
    [aux_sym_core_token106] = ACTIONS(86),
    [aux_sym_core_token107] = ACTIONS(86),
    [aux_sym_core_token108] = ACTIONS(86),
    [aux_sym_core_token109] = ACTIONS(86),
    [aux_sym_core_token110] = ACTIONS(86),
    [aux_sym_core_token111] = ACTIONS(86),
    [aux_sym_core_token112] = ACTIONS(86),
    [aux_sym_core_token113] = ACTIONS(86),
    [aux_sym_core_token114] = ACTIONS(86),
    [aux_sym_core_token115] = ACTIONS(86),
    [aux_sym_core_token116] = ACTIONS(86),
    [aux_sym_core_token117] = ACTIONS(86),
    [aux_sym_core_token118] = ACTIONS(86),
    [aux_sym_core_token119] = ACTIONS(86),
    [aux_sym_core_token120] = ACTIONS(86),
    [aux_sym_core_token121] = ACTIONS(86),
    [aux_sym_core_token122] = ACTIONS(86),
    [aux_sym_core_token123] = ACTIONS(86),
    [aux_sym_core_token124] = ACTIONS(86),
    [aux_sym_core_token125] = ACTIONS(86),
    [aux_sym_core_token126] = ACTIONS(86),
    [aux_sym_core_token127] = ACTIONS(86),
    [aux_sym_core_token128] = ACTIONS(86),
    [aux_sym_core_token129] = ACTIONS(86),
    [aux_sym_core_token130] = ACTIONS(86),
    [aux_sym_core_token131] = ACTIONS(86),
    [aux_sym_core_token132] = ACTIONS(86),
    [aux_sym_core_token133] = ACTIONS(86),
    [aux_sym_core_token134] = ACTIONS(86),
    [aux_sym_core_token135] = ACTIONS(86),
    [aux_sym_core_token136] = ACTIONS(86),
    [aux_sym_core_token137] = ACTIONS(86),
    [aux_sym_core_token138] = ACTIONS(86),
    [aux_sym_core_token139] = ACTIONS(86),
    [aux_sym_core_token140] = ACTIONS(86),
    [aux_sym_core_token141] = ACTIONS(86),
    [aux_sym_core_token142] = ACTIONS(86),
    [aux_sym_core_token143] = ACTIONS(86),
    [aux_sym_core_token144] = ACTIONS(86),
    [aux_sym_core_token145] = ACTIONS(86),
    [aux_sym_core_token146] = ACTIONS(86),
    [aux_sym_core_token147] = ACTIONS(86),
    [aux_sym_core_token148] = ACTIONS(86),
    [aux_sym_core_token149] = ACTIONS(86),
    [aux_sym_core_token150] = ACTIONS(86),
    [aux_sym_core_token151] = ACTIONS(86),
    [aux_sym_core_token152] = ACTIONS(86),
    [aux_sym_core_token153] = ACTIONS(86),
    [aux_sym_core_token154] = ACTIONS(86),
    [aux_sym_core_token155] = ACTIONS(86),
    [aux_sym_core_token156] = ACTIONS(86),
    [aux_sym_core_token157] = ACTIONS(86),
    [aux_sym_core_token158] = ACTIONS(86),
    [aux_sym_core_token159] = ACTIONS(86),
    [aux_sym_core_token160] = ACTIONS(86),
    [aux_sym_core_token161] = ACTIONS(86),
    [aux_sym_core_token162] = ACTIONS(86),
    [aux_sym_core_token163] = ACTIONS(86),
    [aux_sym_core_token164] = ACTIONS(86),
    [aux_sym_core_token165] = ACTIONS(86),
    [aux_sym_core_token166] = ACTIONS(86),
    [aux_sym_core_token167] = ACTIONS(86),
    [aux_sym_core_token168] = ACTIONS(86),
    [aux_sym_core_token169] = ACTIONS(86),
    [aux_sym_core_token170] = ACTIONS(86),
    [aux_sym_core_token171] = ACTIONS(86),
    [aux_sym_operator_token1] = ACTIONS(86),
    [aux_sym_operator_token2] = ACTIONS(86),
    [aux_sym_operator_token3] = ACTIONS(86),
    [aux_sym_operator_token4] = ACTIONS(86),
    [aux_sym_operator_token5] = ACTIONS(86),
    [aux_sym_operator_token6] = ACTIONS(86),
    [aux_sym_operator_token7] = ACTIONS(86),
    [aux_sym_operator_token8] = ACTIONS(86),
    [sym_word] = ACTIONS(86),
  },
  [15] = {
    [sym_string] = ACTIONS(88),
    [sym_number] = ACTIONS(90),
    [sym_end_definition] = ACTIONS(90),
    [aux_sym_comment_token1] = ACTIONS(88),
    [aux_sym_comment_token2] = ACTIONS(88),
    [aux_sym_core_token1] = ACTIONS(90),
    [aux_sym_core_token2] = ACTIONS(90),
    [aux_sym_core_token3] = ACTIONS(90),
    [aux_sym_core_token4] = ACTIONS(90),
    [aux_sym_core_token5] = ACTIONS(90),
    [aux_sym_core_token6] = ACTIONS(90),
    [aux_sym_core_token7] = ACTIONS(90),
    [aux_sym_core_token8] = ACTIONS(90),
    [aux_sym_core_token9] = ACTIONS(90),
    [aux_sym_core_token10] = ACTIONS(90),
    [aux_sym_core_token11] = ACTIONS(90),
    [aux_sym_core_token12] = ACTIONS(90),
    [aux_sym_core_token13] = ACTIONS(90),
    [aux_sym_core_token14] = ACTIONS(90),
    [aux_sym_core_token15] = ACTIONS(90),
    [aux_sym_core_token16] = ACTIONS(90),
    [aux_sym_core_token17] = ACTIONS(90),
    [aux_sym_core_token18] = ACTIONS(90),
    [aux_sym_core_token19] = ACTIONS(90),
    [aux_sym_core_token20] = ACTIONS(90),
    [aux_sym_core_token21] = ACTIONS(90),
    [aux_sym_core_token22] = ACTIONS(90),
    [aux_sym_core_token23] = ACTIONS(90),
    [aux_sym_core_token24] = ACTIONS(90),
    [aux_sym_core_token25] = ACTIONS(90),
    [aux_sym_core_token26] = ACTIONS(90),
    [aux_sym_core_token27] = ACTIONS(90),
    [aux_sym_core_token28] = ACTIONS(90),
    [aux_sym_core_token29] = ACTIONS(90),
    [aux_sym_core_token30] = ACTIONS(90),
    [aux_sym_core_token31] = ACTIONS(90),
    [aux_sym_core_token32] = ACTIONS(90),
    [aux_sym_core_token33] = ACTIONS(90),
    [aux_sym_core_token34] = ACTIONS(90),
    [aux_sym_core_token35] = ACTIONS(90),
    [aux_sym_core_token36] = ACTIONS(90),
    [aux_sym_core_token37] = ACTIONS(90),
    [aux_sym_core_token38] = ACTIONS(90),
    [aux_sym_core_token39] = ACTIONS(90),
    [aux_sym_core_token40] = ACTIONS(90),
    [aux_sym_core_token41] = ACTIONS(90),
    [aux_sym_core_token42] = ACTIONS(90),
    [aux_sym_core_token43] = ACTIONS(90),
    [aux_sym_core_token44] = ACTIONS(90),
    [aux_sym_core_token45] = ACTIONS(90),
    [aux_sym_core_token46] = ACTIONS(90),
    [aux_sym_core_token47] = ACTIONS(90),
    [aux_sym_core_token48] = ACTIONS(90),
    [aux_sym_core_token49] = ACTIONS(90),
    [aux_sym_core_token50] = ACTIONS(90),
    [aux_sym_core_token51] = ACTIONS(90),
    [aux_sym_core_token52] = ACTIONS(90),
    [aux_sym_core_token53] = ACTIONS(90),
    [aux_sym_core_token54] = ACTIONS(90),
    [aux_sym_core_token55] = ACTIONS(90),
    [aux_sym_core_token56] = ACTIONS(90),
    [aux_sym_core_token57] = ACTIONS(90),
    [aux_sym_core_token58] = ACTIONS(90),
    [aux_sym_core_token59] = ACTIONS(90),
    [aux_sym_core_token60] = ACTIONS(90),
    [aux_sym_core_token61] = ACTIONS(90),
    [aux_sym_core_token62] = ACTIONS(90),
    [aux_sym_core_token63] = ACTIONS(90),
    [aux_sym_core_token64] = ACTIONS(90),
    [aux_sym_core_token65] = ACTIONS(90),
    [aux_sym_core_token66] = ACTIONS(90),
    [aux_sym_core_token67] = ACTIONS(90),
    [aux_sym_core_token68] = ACTIONS(90),
    [aux_sym_core_token69] = ACTIONS(90),
    [aux_sym_core_token70] = ACTIONS(90),
    [aux_sym_core_token71] = ACTIONS(90),
    [aux_sym_core_token72] = ACTIONS(90),
    [aux_sym_core_token73] = ACTIONS(90),
    [aux_sym_core_token74] = ACTIONS(90),
    [aux_sym_core_token75] = ACTIONS(90),
    [aux_sym_core_token76] = ACTIONS(90),
    [aux_sym_core_token77] = ACTIONS(90),
    [aux_sym_core_token78] = ACTIONS(90),
    [aux_sym_core_token79] = ACTIONS(90),
    [aux_sym_core_token80] = ACTIONS(90),
    [aux_sym_core_token81] = ACTIONS(90),
    [aux_sym_core_token82] = ACTIONS(90),
    [aux_sym_core_token83] = ACTIONS(90),
    [aux_sym_core_token84] = ACTIONS(90),
    [aux_sym_core_token85] = ACTIONS(90),
    [aux_sym_core_token86] = ACTIONS(90),
    [aux_sym_core_token87] = ACTIONS(90),
    [aux_sym_core_token88] = ACTIONS(90),
    [aux_sym_core_token89] = ACTIONS(90),
    [aux_sym_core_token90] = ACTIONS(90),
    [aux_sym_core_token91] = ACTIONS(90),
    [aux_sym_core_token92] = ACTIONS(90),
    [aux_sym_core_token93] = ACTIONS(90),
    [aux_sym_core_token94] = ACTIONS(90),
    [aux_sym_core_token95] = ACTIONS(90),
    [aux_sym_core_token96] = ACTIONS(90),
    [aux_sym_core_token97] = ACTIONS(90),
    [aux_sym_core_token98] = ACTIONS(90),
    [aux_sym_core_token99] = ACTIONS(90),
    [aux_sym_core_token100] = ACTIONS(90),
    [aux_sym_core_token101] = ACTIONS(90),
    [aux_sym_core_token102] = ACTIONS(90),
    [aux_sym_core_token103] = ACTIONS(90),
    [aux_sym_core_token104] = ACTIONS(90),
    [aux_sym_core_token105] = ACTIONS(90),
    [aux_sym_core_token106] = ACTIONS(90),
    [aux_sym_core_token107] = ACTIONS(90),
    [aux_sym_core_token108] = ACTIONS(90),
    [aux_sym_core_token109] = ACTIONS(90),
    [aux_sym_core_token110] = ACTIONS(90),
    [aux_sym_core_token111] = ACTIONS(90),
    [aux_sym_core_token112] = ACTIONS(90),
    [aux_sym_core_token113] = ACTIONS(90),
    [aux_sym_core_token114] = ACTIONS(90),
    [aux_sym_core_token115] = ACTIONS(90),
    [aux_sym_core_token116] = ACTIONS(90),
    [aux_sym_core_token117] = ACTIONS(90),
    [aux_sym_core_token118] = ACTIONS(90),
    [aux_sym_core_token119] = ACTIONS(90),
    [aux_sym_core_token120] = ACTIONS(90),
    [aux_sym_core_token121] = ACTIONS(90),
    [aux_sym_core_token122] = ACTIONS(90),
    [aux_sym_core_token123] = ACTIONS(90),
    [aux_sym_core_token124] = ACTIONS(90),
    [aux_sym_core_token125] = ACTIONS(90),
    [aux_sym_core_token126] = ACTIONS(90),
    [aux_sym_core_token127] = ACTIONS(90),
    [aux_sym_core_token128] = ACTIONS(90),
    [aux_sym_core_token129] = ACTIONS(90),
    [aux_sym_core_token130] = ACTIONS(90),
    [aux_sym_core_token131] = ACTIONS(90),
    [aux_sym_core_token132] = ACTIONS(90),
    [aux_sym_core_token133] = ACTIONS(90),
    [aux_sym_core_token134] = ACTIONS(90),
    [aux_sym_core_token135] = ACTIONS(90),
    [aux_sym_core_token136] = ACTIONS(90),
    [aux_sym_core_token137] = ACTIONS(90),
    [aux_sym_core_token138] = ACTIONS(90),
    [aux_sym_core_token139] = ACTIONS(90),
    [aux_sym_core_token140] = ACTIONS(90),
    [aux_sym_core_token141] = ACTIONS(90),
    [aux_sym_core_token142] = ACTIONS(90),
    [aux_sym_core_token143] = ACTIONS(90),
    [aux_sym_core_token144] = ACTIONS(90),
    [aux_sym_core_token145] = ACTIONS(90),
    [aux_sym_core_token146] = ACTIONS(90),
    [aux_sym_core_token147] = ACTIONS(90),
    [aux_sym_core_token148] = ACTIONS(90),
    [aux_sym_core_token149] = ACTIONS(90),
    [aux_sym_core_token150] = ACTIONS(90),
    [aux_sym_core_token151] = ACTIONS(90),
    [aux_sym_core_token152] = ACTIONS(90),
    [aux_sym_core_token153] = ACTIONS(90),
    [aux_sym_core_token154] = ACTIONS(90),
    [aux_sym_core_token155] = ACTIONS(90),
    [aux_sym_core_token156] = ACTIONS(90),
    [aux_sym_core_token157] = ACTIONS(90),
    [aux_sym_core_token158] = ACTIONS(90),
    [aux_sym_core_token159] = ACTIONS(90),
    [aux_sym_core_token160] = ACTIONS(90),
    [aux_sym_core_token161] = ACTIONS(90),
    [aux_sym_core_token162] = ACTIONS(90),
    [aux_sym_core_token163] = ACTIONS(90),
    [aux_sym_core_token164] = ACTIONS(90),
    [aux_sym_core_token165] = ACTIONS(90),
    [aux_sym_core_token166] = ACTIONS(90),
    [aux_sym_core_token167] = ACTIONS(90),
    [aux_sym_core_token168] = ACTIONS(90),
    [aux_sym_core_token169] = ACTIONS(90),
    [aux_sym_core_token170] = ACTIONS(90),
    [aux_sym_core_token171] = ACTIONS(90),
    [aux_sym_operator_token1] = ACTIONS(90),
    [aux_sym_operator_token2] = ACTIONS(90),
    [aux_sym_operator_token3] = ACTIONS(90),
    [aux_sym_operator_token4] = ACTIONS(90),
    [aux_sym_operator_token5] = ACTIONS(90),
    [aux_sym_operator_token6] = ACTIONS(90),
    [aux_sym_operator_token7] = ACTIONS(90),
    [aux_sym_operator_token8] = ACTIONS(90),
    [sym_word] = ACTIONS(90),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(96), 1,
      sym_word,
  [4] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 4,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(5),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(12),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(13),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_word_definition_repeat1, 2), SHIFT_REPEAT(14),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_definition, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word_definition, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
