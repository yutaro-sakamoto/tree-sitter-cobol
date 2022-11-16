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
#define STATE_COUNT 258
#define LARGE_STATE_COUNT 31
#define SYMBOL_COUNT 610
#define ALIAS_COUNT 0
#define TOKEN_COUNT 522
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 6

enum {
  sym_WORD = 1,
  anon_sym_DOT = 2,
  sym_function_definition = 3,
  sym_environment_division = 4,
  sym_file_section = 5,
  sym_level_number = 6,
  sym_level_number_88 = 7,
  sym_constant_entry = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_COLON = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  anon_sym_CARET = 16,
  sym_external_clause = 17,
  sym_global_clause = 18,
  sym_picture_x = 19,
  sym__picture_9_z = 20,
  sym__picture_9_v = 21,
  sym_usage_clause = 22,
  sym_sign_clause = 23,
  sym_occurs_clause = 24,
  sym_justified_clause = 25,
  sym_synchronized_clause = 26,
  sym_blank_clause = 27,
  sym_based_clause = 28,
  sym_value_clause = 29,
  sym_renames_clause = 30,
  sym_any_length_clause = 31,
  sym_error = 32,
  sym_local_storage_section = 33,
  sym_linkage_section = 34,
  sym_report_section = 35,
  sym_screen_section = 36,
  sym_nested_prog = 37,
  sym_end_program = 38,
  anon_sym_AMP = 39,
  sym_number = 40,
  aux_sym_x_string_token1 = 41,
  aux_sym_x_string_token2 = 42,
  aux_sym_h_string_token1 = 43,
  aux_sym_h_string_token2 = 44,
  aux_sym_n_string_token1 = 45,
  aux_sym_n_string_token2 = 46,
  aux_sym_n_string_token3 = 47,
  aux_sym_n_string_token4 = 48,
  aux_sym_n_string_token5 = 49,
  aux_sym_n_string_token6 = 50,
  aux_sym_n_string_token7 = 51,
  aux_sym_n_string_token8 = 52,
  sym__ACCEPT = 53,
  sym__ACCESS = 54,
  sym__ADD = 55,
  sym__ADDRESS = 56,
  sym__ADVANCING = 57,
  sym__AFTER = 58,
  sym__ALL = 59,
  sym__ALLOCATE = 60,
  sym__ALPHABET = 61,
  sym__ALPHABETIC = 62,
  sym__ALPHABETIC_LOWER = 63,
  sym__ALPHABETIC_UPPER = 64,
  sym__ALPHANUMERIC = 65,
  sym__ALPHANUMERIC_EDITED = 66,
  sym__ALSO = 67,
  sym__ALTER = 68,
  sym__ALTERNATE = 69,
  sym__AND = 70,
  sym__ANY = 71,
  sym__APPLY = 72,
  sym__ARE = 73,
  sym__AREA = 74,
  sym__ARGUMENT_NUMBER = 75,
  sym__ARGUMENT_VALUE = 76,
  sym__AS = 77,
  sym__ASCENDING = 78,
  sym__ASSIGN = 79,
  sym__AT = 80,
  sym__AUTO = 81,
  sym__AUTOMATIC = 82,
  sym__BACKGROUND_COLOR = 83,
  sym__BASED = 84,
  sym__BEFORE = 85,
  sym__BELL = 86,
  sym__BINARY = 87,
  sym__BINARY_C_LONG = 88,
  sym__BINARY_CHAR = 89,
  sym__BINARY_DOUBLE = 90,
  sym__BINARY_LONG = 91,
  sym__BINARY_SHORT = 92,
  sym__BLANK = 93,
  sym__BLANK_LINE = 94,
  sym__BLANK_SCREEN = 95,
  sym__BLINK = 96,
  sym__BLOCK = 97,
  sym__BOTTOM = 98,
  sym__BY = 99,
  sym__BYTE_LENGTH = 100,
  sym__CALL = 101,
  sym__CANCEL = 102,
  sym__CH = 103,
  sym__CHAINING = 104,
  sym__CHARACTER = 105,
  sym__CHARACTERS = 106,
  sym__CLASS = 107,
  sym__CLASS_NAME = 108,
  sym__CLOSE = 109,
  sym__CLOSE_NOFEED = 110,
  sym__CODE = 111,
  sym__CODE_SET = 112,
  sym__COLLATING = 113,
  sym__COL = 114,
  sym__COLS = 115,
  sym__COLUMN = 116,
  sym__COLUMNS = 117,
  sym__COMMA = 118,
  sym__COMMAND_LINE = 119,
  sym__COMMA_DELIM = 120,
  sym__COMMIT = 121,
  sym__COMMITMENT_CONTROL = 122,
  sym__COMMON = 123,
  sym__COMP = 124,
  sym__COMPUTE = 125,
  sym__COMP_1 = 126,
  sym__COMP_2 = 127,
  sym__COMP_3 = 128,
  sym__COMP_4 = 129,
  sym__COMP_5 = 130,
  sym__COMP_X = 131,
  sym__CONCATENATE_FUNC = 132,
  sym__CONFIGURATION = 133,
  sym__CONSTANT = 134,
  sym__CONTAINS = 135,
  sym__CONTENT = 136,
  sym__CONTINUE = 137,
  sym__CONTROL = 138,
  sym__CONTROLS = 139,
  sym__CONTROL_FOOTING = 140,
  sym__CONTROL_HEADING = 141,
  sym__CONVERTING = 142,
  sym__CORE_INDEX = 143,
  sym__CORRESPONDING = 144,
  sym__COUNT = 145,
  sym__CRT = 146,
  sym__CURRENCY = 147,
  sym__CURRENT_DATE_FUNC = 148,
  sym__CURSOR = 149,
  sym__CYCLE = 150,
  sym__CYL_OVERFLOW = 151,
  sym__DATA = 152,
  sym__DATE = 153,
  sym__DAY = 154,
  sym__DAY_OF_WEEK = 155,
  sym__DE = 156,
  sym__DEBUGGING = 157,
  sym__DECIMAL_POINT = 158,
  sym__DECLARATIVES = 159,
  sym__DEFAULT = 160,
  sym__DELETE = 161,
  sym__DELIMITED = 162,
  sym__DELIMITER = 163,
  sym__DEPENDING = 164,
  sym__DESCENDING = 165,
  sym__DETAIL = 166,
  sym__DISK = 167,
  sym__DISPLAY = 168,
  sym__DIVIDE = 169,
  sym__DIVISION = 170,
  sym__DOWN = 171,
  sym__DUPLICATES = 172,
  sym__DYNAMIC = 173,
  sym__EBCDIC = 174,
  sym__ELSE = 175,
  sym__END = 176,
  sym__END_ACCEPT = 177,
  sym__END_ADD = 178,
  sym__END_CALL = 179,
  sym__END_COMPUTE = 180,
  sym__END_DELETE = 181,
  sym__END_DISPLAY = 182,
  sym__END_DIVIDE = 183,
  sym__END_EVALUATE = 184,
  sym__END_FUNCTION = 185,
  sym__END_IF = 186,
  sym__END_MULTIPLY = 187,
  sym__END_PERFORM = 188,
  sym__END_PROGRAM = 189,
  sym__END_READ = 190,
  sym__END_RETURN = 191,
  sym__END_REWRITE = 192,
  sym__END_SEARCH = 193,
  sym__END_START = 194,
  sym__END_STRING = 195,
  sym__END_SUBTRACT = 196,
  sym__END_UNSTRING = 197,
  sym__END_WRITE = 198,
  sym__ENTRY = 199,
  sym__ENVIRONMENT = 200,
  sym__ENVIRONMENT_NAME = 201,
  sym__ENVIRONMENT_VALUE = 202,
  sym__EOL = 203,
  sym__EOP = 204,
  sym__EOS = 205,
  sym__EQUAL = 206,
  sym__EQUALS = 207,
  sym__ERASE = 208,
  sym__ERROR = 209,
  sym__ESCAPE = 210,
  sym__EVALUATE = 211,
  sym__EVENT_STATUS = 212,
  sym__EXCEPTION = 213,
  sym__EXCLUSIVE = 214,
  sym__EXIT = 215,
  sym__EXTEND = 216,
  sym__EXTERNAL = 217,
  sym__FD = 218,
  sym__FILE_CONTROL = 219,
  sym__FILE_ID = 220,
  sym__FILLER = 221,
  sym__FINAL = 222,
  sym__FIRST = 223,
  sym__FOOTING = 224,
  sym__FOR = 225,
  sym__FOREGROUND_COLOR = 226,
  sym__FOREVER = 227,
  sym__FORMS_OVERLAY = 228,
  sym__FREE = 229,
  sym__FROM = 230,
  sym__FULL = 231,
  sym__FUNCTION = 232,
  sym__FUNCTION_ID = 233,
  sym__FUNCTION_NAME = 234,
  sym__GE = 235,
  sym__GENERATE = 236,
  sym__GIVING = 237,
  sym__GLOBAL = 238,
  sym__GO = 239,
  sym__GOBACK = 240,
  sym__GREATER = 241,
  sym__GROUP = 242,
  sym__HEADING = 243,
  sym__HIGHLIGHT = 244,
  anon_sym_high_DASHvalue = 245,
  anon_sym_high_DASHValue = 246,
  anon_sym_high_DASHVALUE = 247,
  anon_sym_High_DASHvalue = 248,
  anon_sym_High_DASHValue = 249,
  anon_sym_High_DASHVALUE = 250,
  anon_sym_HIGH_DASHvalue = 251,
  anon_sym_HIGH_DASHValue = 252,
  anon_sym_HIGH_DASHVALUE = 253,
  sym__IDENTIFICATION = 254,
  sym__IF = 255,
  sym__IGNORE = 256,
  sym__IGNORING = 257,
  sym__IN = 258,
  sym__INDEX = 259,
  sym__INDEXED = 260,
  sym__INDICATE = 261,
  sym__INITIALIZE = 262,
  sym__INITIALIZED = 263,
  sym__INITIATE = 264,
  sym__INPUT = 265,
  sym__INPUT_OUTPUT = 266,
  sym__INSPECT = 267,
  sym__INTO = 268,
  sym__INTRINSIC = 269,
  sym__INVALID = 270,
  sym__INVALID_KEY = 271,
  sym__IS = 272,
  sym__I_O = 273,
  sym__I_O_CONTROL = 274,
  sym__JUSTIFIED = 275,
  sym__KEY = 276,
  sym__LABEL = 277,
  sym__LAST = 278,
  sym__LAST_DETAIL = 279,
  sym__LE = 280,
  sym__LEADING = 281,
  sym__LEFT = 282,
  sym__LENGTH = 283,
  sym__LESS = 284,
  sym__LEVEL_NUMBER_WORD = 285,
  sym__LEVEL88_NUMBER_WORD = 286,
  sym__LIMIT = 287,
  sym__LIMITS = 288,
  sym__LINAGE = 289,
  sym__LINAGE_COUNTER = 290,
  sym__LINE = 291,
  sym__LINES = 292,
  sym__LINKAGE = 293,
  sym__LOCALE = 294,
  sym__LOCALE_DT_FUNC = 295,
  sym__LOCAL_STORAGE = 296,
  sym__LOCK = 297,
  sym__LOWER_CASE_FUNC = 298,
  sym__LOWLIGHT = 299,
  anon_sym_low_DASHvalue = 300,
  anon_sym_low_DASHValue = 301,
  anon_sym_low_DASHVALUE = 302,
  anon_sym_Low_DASHvalue = 303,
  anon_sym_Low_DASHValue = 304,
  anon_sym_Low_DASHVALUE = 305,
  anon_sym_LOW_DASHvalue = 306,
  anon_sym_LOW_DASHValue = 307,
  anon_sym_LOW_DASHVALUE = 308,
  sym__MANUAL = 309,
  sym__MEMORY = 310,
  sym__MERGE = 311,
  sym__MINUS = 312,
  sym__MNEMONIC_NAME = 313,
  sym__MODE = 314,
  sym__MOVE = 315,
  sym__MULTIPLE = 316,
  sym__MULTIPLY = 317,
  sym__NATIONAL = 318,
  sym__NATIONAL_EDITED = 319,
  sym__NATIVE = 320,
  sym__NE = 321,
  sym__NEGATIVE = 322,
  sym__NEXT = 323,
  sym__NEXT_SENTENCE = 324,
  sym__NO = 325,
  sym__NOMINAL = 326,
  sym__NOT = 327,
  sym__NOT_END = 328,
  sym__NOT_EOP = 329,
  sym__NOT_EXCEPTION = 330,
  sym__NOT_INVALID_KEY = 331,
  sym__NOT_OVERFLOW = 332,
  sym__NOT_SIZE_ERROR = 333,
  sym__NO_ADVANCING = 334,
  sym__NUMBER = 335,
  sym__NUMBERS = 336,
  sym__NUMERIC = 337,
  sym__NUMERIC_EDITED = 338,
  sym__NUMVALC_FUNC = 339,
  sym__OBJECT_COMPUTER = 340,
  sym__OCCURS = 341,
  sym__OF = 342,
  sym__OFF = 343,
  sym__OMITTED = 344,
  sym__ON = 345,
  sym__ONLY = 346,
  sym__OPEN = 347,
  sym__OPTIONAL = 348,
  sym__OR = 349,
  sym__ORDER = 350,
  sym__ORGANIZATION = 351,
  sym__OTHER = 352,
  sym__OUTPUT = 353,
  sym__OVERFLOW = 354,
  sym__OVERLINE = 355,
  sym__PACKED_DECIMAL = 356,
  sym__PADDING = 357,
  sym__PAGE = 358,
  sym__PAGE_FOOTING = 359,
  sym__PAGE_HEADING = 360,
  sym__PARAGRAPH = 361,
  sym__PERFORM = 362,
  sym__PIC = 363,
  sym__PICTURE = 364,
  sym__PLUS = 365,
  sym__POINTER = 366,
  sym__POSITION = 367,
  sym__POSITIVE = 368,
  sym__PRESENT = 369,
  sym__PREVIOUS = 370,
  sym__PRINTER = 371,
  sym__PRINTING = 372,
  sym__PROCEDURE = 373,
  sym__PROCEDURES = 374,
  sym__PROCEED = 375,
  sym__PROGRAM = 376,
  sym__PROGRAM_ID = 377,
  sym__PROGRAM_NAME = 378,
  sym__PROGRAM_POINTER = 379,
  sym__PROMPT = 380,
  anon_sym_quote = 381,
  anon_sym_QUOTE = 382,
  anon_sym_Quote = 383,
  sym__RANDOM = 384,
  sym__RD = 385,
  sym__READ = 386,
  sym__RECORD = 387,
  sym__RECORDING = 388,
  sym__RECORDS = 389,
  sym__RECURSIVE = 390,
  sym__REDEFINES = 391,
  sym__REEL = 392,
  sym__REFERENCE = 393,
  sym__RELATIVE = 394,
  sym__RELEASE = 395,
  sym__REMAINDER = 396,
  sym__REMOVAL = 397,
  sym__RENAMES = 398,
  sym__REPLACING = 399,
  sym__REPORT = 400,
  sym__REPORTING = 401,
  sym__REPORTS = 402,
  sym__REPORT_FOOTING = 403,
  sym__REPORT_HEADING = 404,
  sym__REPOSITORY = 405,
  sym__REQUIRED = 406,
  sym__RESERVE = 407,
  sym__RETURN = 408,
  sym__RETURNING = 409,
  sym__REVERSE_FUNC = 410,
  sym__REVERSE_VIDEO = 411,
  sym__REWIND = 412,
  sym__REWRITE = 413,
  sym__RIGHT = 414,
  sym__ROLLBACK = 415,
  sym__ROUNDED = 416,
  sym__RUN = 417,
  sym__SAME = 418,
  sym__SCREEN = 419,
  sym__SCREEN_CONTROL = 420,
  sym__SCROLL = 421,
  sym__SD = 422,
  sym__SEARCH = 423,
  sym__SECTION = 424,
  sym__SECURE = 425,
  sym__SEGMENT_LIMIT = 426,
  sym__SELECT = 427,
  sym__SEMI_COLON = 428,
  sym__SENTENCE = 429,
  sym__SEPARATE = 430,
  sym__SEQUENCE = 431,
  sym__SEQUENTIAL = 432,
  sym__SET = 433,
  sym__SHARING = 434,
  sym__SIGN = 435,
  sym__SIGNED = 436,
  sym__SIGNED_INT = 437,
  sym__SIGNED_LONG = 438,
  sym__SIGNED_SHORT = 439,
  sym__SIZE = 440,
  sym__SIZE_ERROR = 441,
  sym__SORT = 442,
  sym__SORT_MERGE = 443,
  sym__SOURCE = 444,
  sym__SOURCE_COMPUTER = 445,
  anon_sym_space = 446,
  anon_sym_SPACE = 447,
  anon_sym_Space = 448,
  sym__SPECIAL_NAMES = 449,
  sym__STANDARD = 450,
  sym__STANDARD_1 = 451,
  sym__STANDARD_2 = 452,
  sym__START = 453,
  sym__STATUS = 454,
  sym__STOP = 455,
  sym__STRING = 456,
  sym__SUBSTITUTE_FUNC = 457,
  sym__SUBSTITUTE_CASE_FUNC = 458,
  sym__SUBTRACT = 459,
  sym__SUM = 460,
  sym__SUPPRESS = 461,
  sym__SYMBOLIC = 462,
  sym__SYNCHRONIZED = 463,
  sym__TALLYING = 464,
  sym__TAPE = 465,
  sym__TERMINATE = 466,
  sym__TEST = 467,
  sym__THAN = 468,
  sym__THEN = 469,
  sym__THRU = 470,
  sym__TIME = 471,
  sym__TIMES = 472,
  sym__TO = 473,
  sym__TOK_FALSE = 474,
  sym__TOK_FILE = 475,
  sym__TOK_INITIAL = 476,
  anon_sym_null = 477,
  anon_sym_Null = 478,
  anon_sym_NULL = 479,
  sym__TOK_TRUE = 480,
  sym__TOP = 481,
  sym__TRACKS = 482,
  sym__TRAILING = 483,
  sym__TRANSFORM = 484,
  sym__TRIM_FUNCTION = 485,
  sym__TYPE = 486,
  sym__UNDERLINE = 487,
  sym__UNIT = 488,
  sym__UNLOCK = 489,
  sym__UNSIGNED = 490,
  sym__UNSIGNED_INT = 491,
  sym__UNSIGNED_LONG = 492,
  sym__UNSIGNED_SHORT = 493,
  sym__UNSTRING = 494,
  sym__UNTIL = 495,
  sym__UP = 496,
  sym__UPDATE = 497,
  sym__UPON = 498,
  sym__UPON_ARGUMENT_NUMBER = 499,
  sym__UPON_COMMAND_LINE = 500,
  sym__UPON_ENVIRONMENT_NAME = 501,
  sym__UPON_ENVIRONMENT_VALUE = 502,
  sym__UPPER_CASE_FUNC = 503,
  sym__USAGE = 504,
  sym__USE = 505,
  sym__USING = 506,
  sym__VALUE = 507,
  sym__VARYING = 508,
  sym__WAIT = 509,
  sym__WHEN = 510,
  sym__WHEN_COMPILED_FUNC = 511,
  sym__WHEN_OTHER = 512,
  sym__WITH = 513,
  sym__WORDS = 514,
  sym__WORKING_STORAGE = 515,
  sym__WRITE = 516,
  sym__YYYYDDD = 517,
  sym__YYYYMMDD = 518,
  anon_sym_zero = 519,
  anon_sym_ZERO = 520,
  anon_sym_Zero = 521,
  sym_start = 522,
  sym_program_definition = 523,
  sym_identification_division = 524,
  sym_program_name = 525,
  sym_as_literal = 526,
  sym_data_division = 527,
  sym_working_storage_section = 528,
  sym_data_description = 529,
  sym_entry_name = 530,
  sym__data_description_clause = 531,
  sym_redefines_clause = 532,
  sym__identifier = 533,
  sym_qualified_word = 534,
  sym__in_of = 535,
  sym_subref = 536,
  sym_refmod = 537,
  sym__exp_list = 538,
  sym__exp = 539,
  sym__binary_exp = 540,
  sym__unary_exp = 541,
  sym_positive_exp = 542,
  sym_negative_exp = 543,
  sym_add_exp = 544,
  sym_sub_exp = 545,
  sym_mul_exp = 546,
  sym_div_exp = 547,
  sym_pow_exp = 548,
  sym__arith_x = 549,
  sym_picture_clause = 550,
  sym__picture_string = 551,
  sym_picture_9 = 552,
  sym_procedure_division = 553,
  sym__statement = 554,
  sym_stop_run_statement = 555,
  sym_move_statement = 556,
  sym__move_body = 557,
  sym__x = 558,
  aux_sym__target_x_list = 559,
  sym__target_x = 560,
  sym__basic_literal = 561,
  sym__basic_value = 562,
  sym__literal = 563,
  sym_function_ = 564,
  sym_func_refmod = 565,
  sym__trim_args = 566,
  sym__e_sep = 567,
  sym__numvalc_args = 568,
  sym__locale_dt_args = 569,
  sym_linage_counter = 570,
  sym__func_args = 571,
  sym__LITERAL = 572,
  sym__string = 573,
  sym_x_string = 574,
  sym_h_string = 575,
  sym_n_string = 576,
  sym__HIGH_VALUE = 577,
  sym__LOW_VALUE = 578,
  sym__QUOTE = 579,
  sym__SPACE = 580,
  sym__TOK_NULL = 581,
  sym__ZERO = 582,
  sym_ALL_ = 583,
  sym_CONCATENATE_FUNC_ = 584,
  sym_CURRENT_DATE_FUNC_ = 585,
  sym_FUNCTION_NAME_ = 586,
  sym_HIGH_VALUE_ = 587,
  sym_LENGTH_ = 588,
  sym_LOCALE_DT_FUNC_ = 589,
  sym_LOWER_CASE_FUNC_ = 590,
  sym_LOW_VALUE_ = 591,
  sym_NUMVALC_FUNC_ = 592,
  sym_QUOTE_ = 593,
  sym_REVERSE_FUNC_ = 594,
  sym_SPACE_ = 595,
  sym_SUBSTITUTE_FUNC_ = 596,
  sym_SUBSTITUTE_CASE_FUNC_ = 597,
  sym_TOK_NULL_ = 598,
  sym_TRIM_FUNCTION_ = 599,
  sym_UPPER_CASE_FUNC_ = 600,
  sym_WHEN_COMPILED_FUNC_ = 601,
  sym_ZERO_ = 602,
  aux_sym_start_repeat1 = 603,
  aux_sym_working_storage_section_repeat1 = 604,
  aux_sym_data_description_repeat1 = 605,
  aux_sym_qualified_word_repeat1 = 606,
  aux_sym__exp_list_repeat1 = 607,
  aux_sym_procedure_division_repeat1 = 608,
  aux_sym__basic_literal_repeat1 = 609,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_WORD] = "WORD",
  [anon_sym_DOT] = ".",
  [sym_function_definition] = "function_definition",
  [sym_environment_division] = "environment_division",
  [sym_file_section] = "file_section",
  [sym_level_number] = "level_number",
  [sym_level_number_88] = "level_number_88",
  [sym_constant_entry] = "constant_entry",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_CARET] = "^",
  [sym_external_clause] = "external_clause",
  [sym_global_clause] = "global_clause",
  [sym_picture_x] = "picture_x",
  [sym__picture_9_z] = "_picture_9_z",
  [sym__picture_9_v] = "_picture_9_v",
  [sym_usage_clause] = "usage_clause",
  [sym_sign_clause] = "sign_clause",
  [sym_occurs_clause] = "occurs_clause",
  [sym_justified_clause] = "justified_clause",
  [sym_synchronized_clause] = "synchronized_clause",
  [sym_blank_clause] = "blank_clause",
  [sym_based_clause] = "based_clause",
  [sym_value_clause] = "value_clause",
  [sym_renames_clause] = "renames_clause",
  [sym_any_length_clause] = "any_length_clause",
  [sym_error] = "error",
  [sym_local_storage_section] = "local_storage_section",
  [sym_linkage_section] = "linkage_section",
  [sym_report_section] = "report_section",
  [sym_screen_section] = "screen_section",
  [sym_nested_prog] = "nested_prog",
  [sym_end_program] = "end_program",
  [anon_sym_AMP] = "&",
  [sym_number] = "number",
  [aux_sym_x_string_token1] = "x_string_token1",
  [aux_sym_x_string_token2] = "x_string_token2",
  [aux_sym_h_string_token1] = "h_string_token1",
  [aux_sym_h_string_token2] = "h_string_token2",
  [aux_sym_n_string_token1] = "n_string_token1",
  [aux_sym_n_string_token2] = "n_string_token2",
  [aux_sym_n_string_token3] = "n_string_token3",
  [aux_sym_n_string_token4] = "n_string_token4",
  [aux_sym_n_string_token5] = "n_string_token5",
  [aux_sym_n_string_token6] = "n_string_token6",
  [aux_sym_n_string_token7] = "n_string_token7",
  [aux_sym_n_string_token8] = "n_string_token8",
  [sym__ACCEPT] = "_ACCEPT",
  [sym__ACCESS] = "_ACCESS",
  [sym__ADD] = "_ADD",
  [sym__ADDRESS] = "_ADDRESS",
  [sym__ADVANCING] = "_ADVANCING",
  [sym__AFTER] = "_AFTER",
  [sym__ALL] = "_ALL",
  [sym__ALLOCATE] = "_ALLOCATE",
  [sym__ALPHABET] = "_ALPHABET",
  [sym__ALPHABETIC] = "_ALPHABETIC",
  [sym__ALPHABETIC_LOWER] = "_ALPHABETIC_LOWER",
  [sym__ALPHABETIC_UPPER] = "_ALPHABETIC_UPPER",
  [sym__ALPHANUMERIC] = "_ALPHANUMERIC",
  [sym__ALPHANUMERIC_EDITED] = "_ALPHANUMERIC_EDITED",
  [sym__ALSO] = "_ALSO",
  [sym__ALTER] = "_ALTER",
  [sym__ALTERNATE] = "_ALTERNATE",
  [sym__AND] = "_AND",
  [sym__ANY] = "_ANY",
  [sym__APPLY] = "_APPLY",
  [sym__ARE] = "_ARE",
  [sym__AREA] = "_AREA",
  [sym__ARGUMENT_NUMBER] = "_ARGUMENT_NUMBER",
  [sym__ARGUMENT_VALUE] = "_ARGUMENT_VALUE",
  [sym__AS] = "_AS",
  [sym__ASCENDING] = "_ASCENDING",
  [sym__ASSIGN] = "_ASSIGN",
  [sym__AT] = "_AT",
  [sym__AUTO] = "_AUTO",
  [sym__AUTOMATIC] = "_AUTOMATIC",
  [sym__BACKGROUND_COLOR] = "_BACKGROUND_COLOR",
  [sym__BASED] = "_BASED",
  [sym__BEFORE] = "_BEFORE",
  [sym__BELL] = "_BELL",
  [sym__BINARY] = "_BINARY",
  [sym__BINARY_C_LONG] = "_BINARY_C_LONG",
  [sym__BINARY_CHAR] = "_BINARY_CHAR",
  [sym__BINARY_DOUBLE] = "_BINARY_DOUBLE",
  [sym__BINARY_LONG] = "_BINARY_LONG",
  [sym__BINARY_SHORT] = "_BINARY_SHORT",
  [sym__BLANK] = "_BLANK",
  [sym__BLANK_LINE] = "_BLANK_LINE",
  [sym__BLANK_SCREEN] = "_BLANK_SCREEN",
  [sym__BLINK] = "_BLINK",
  [sym__BLOCK] = "_BLOCK",
  [sym__BOTTOM] = "_BOTTOM",
  [sym__BY] = "_BY",
  [sym__BYTE_LENGTH] = "_BYTE_LENGTH",
  [sym__CALL] = "_CALL",
  [sym__CANCEL] = "_CANCEL",
  [sym__CH] = "_CH",
  [sym__CHAINING] = "_CHAINING",
  [sym__CHARACTER] = "_CHARACTER",
  [sym__CHARACTERS] = "_CHARACTERS",
  [sym__CLASS] = "_CLASS",
  [sym__CLASS_NAME] = "_CLASS_NAME",
  [sym__CLOSE] = "_CLOSE",
  [sym__CLOSE_NOFEED] = "_CLOSE_NOFEED",
  [sym__CODE] = "_CODE",
  [sym__CODE_SET] = "_CODE_SET",
  [sym__COLLATING] = "_COLLATING",
  [sym__COL] = "_COL",
  [sym__COLS] = "_COLS",
  [sym__COLUMN] = "_COLUMN",
  [sym__COLUMNS] = "_COLUMNS",
  [sym__COMMA] = "_COMMA",
  [sym__COMMAND_LINE] = "_COMMAND_LINE",
  [sym__COMMA_DELIM] = "_COMMA_DELIM",
  [sym__COMMIT] = "_COMMIT",
  [sym__COMMITMENT_CONTROL] = "_COMMITMENT_CONTROL",
  [sym__COMMON] = "_COMMON",
  [sym__COMP] = "_COMP",
  [sym__COMPUTE] = "_COMPUTE",
  [sym__COMP_1] = "_COMP_1",
  [sym__COMP_2] = "_COMP_2",
  [sym__COMP_3] = "_COMP_3",
  [sym__COMP_4] = "_COMP_4",
  [sym__COMP_5] = "_COMP_5",
  [sym__COMP_X] = "_COMP_X",
  [sym__CONCATENATE_FUNC] = "_CONCATENATE_FUNC",
  [sym__CONFIGURATION] = "_CONFIGURATION",
  [sym__CONSTANT] = "_CONSTANT",
  [sym__CONTAINS] = "_CONTAINS",
  [sym__CONTENT] = "_CONTENT",
  [sym__CONTINUE] = "_CONTINUE",
  [sym__CONTROL] = "_CONTROL",
  [sym__CONTROLS] = "_CONTROLS",
  [sym__CONTROL_FOOTING] = "_CONTROL_FOOTING",
  [sym__CONTROL_HEADING] = "_CONTROL_HEADING",
  [sym__CONVERTING] = "_CONVERTING",
  [sym__CORE_INDEX] = "_CORE_INDEX",
  [sym__CORRESPONDING] = "_CORRESPONDING",
  [sym__COUNT] = "_COUNT",
  [sym__CRT] = "_CRT",
  [sym__CURRENCY] = "_CURRENCY",
  [sym__CURRENT_DATE_FUNC] = "_CURRENT_DATE_FUNC",
  [sym__CURSOR] = "_CURSOR",
  [sym__CYCLE] = "_CYCLE",
  [sym__CYL_OVERFLOW] = "_CYL_OVERFLOW",
  [sym__DATA] = "_DATA",
  [sym__DATE] = "_DATE",
  [sym__DAY] = "_DAY",
  [sym__DAY_OF_WEEK] = "_DAY_OF_WEEK",
  [sym__DE] = "_DE",
  [sym__DEBUGGING] = "_DEBUGGING",
  [sym__DECIMAL_POINT] = "_DECIMAL_POINT",
  [sym__DECLARATIVES] = "_DECLARATIVES",
  [sym__DEFAULT] = "_DEFAULT",
  [sym__DELETE] = "_DELETE",
  [sym__DELIMITED] = "_DELIMITED",
  [sym__DELIMITER] = "_DELIMITER",
  [sym__DEPENDING] = "_DEPENDING",
  [sym__DESCENDING] = "_DESCENDING",
  [sym__DETAIL] = "_DETAIL",
  [sym__DISK] = "_DISK",
  [sym__DISPLAY] = "_DISPLAY",
  [sym__DIVIDE] = "_DIVIDE",
  [sym__DIVISION] = "_DIVISION",
  [sym__DOWN] = "_DOWN",
  [sym__DUPLICATES] = "_DUPLICATES",
  [sym__DYNAMIC] = "_DYNAMIC",
  [sym__EBCDIC] = "_EBCDIC",
  [sym__ELSE] = "_ELSE",
  [sym__END] = "_END",
  [sym__END_ACCEPT] = "_END_ACCEPT",
  [sym__END_ADD] = "_END_ADD",
  [sym__END_CALL] = "_END_CALL",
  [sym__END_COMPUTE] = "_END_COMPUTE",
  [sym__END_DELETE] = "_END_DELETE",
  [sym__END_DISPLAY] = "_END_DISPLAY",
  [sym__END_DIVIDE] = "_END_DIVIDE",
  [sym__END_EVALUATE] = "_END_EVALUATE",
  [sym__END_FUNCTION] = "_END_FUNCTION",
  [sym__END_IF] = "_END_IF",
  [sym__END_MULTIPLY] = "_END_MULTIPLY",
  [sym__END_PERFORM] = "_END_PERFORM",
  [sym__END_PROGRAM] = "_END_PROGRAM",
  [sym__END_READ] = "_END_READ",
  [sym__END_RETURN] = "_END_RETURN",
  [sym__END_REWRITE] = "_END_REWRITE",
  [sym__END_SEARCH] = "_END_SEARCH",
  [sym__END_START] = "_END_START",
  [sym__END_STRING] = "_END_STRING",
  [sym__END_SUBTRACT] = "_END_SUBTRACT",
  [sym__END_UNSTRING] = "_END_UNSTRING",
  [sym__END_WRITE] = "_END_WRITE",
  [sym__ENTRY] = "_ENTRY",
  [sym__ENVIRONMENT] = "_ENVIRONMENT",
  [sym__ENVIRONMENT_NAME] = "_ENVIRONMENT_NAME",
  [sym__ENVIRONMENT_VALUE] = "_ENVIRONMENT_VALUE",
  [sym__EOL] = "_EOL",
  [sym__EOP] = "_EOP",
  [sym__EOS] = "_EOS",
  [sym__EQUAL] = "_EQUAL",
  [sym__EQUALS] = "_EQUALS",
  [sym__ERASE] = "_ERASE",
  [sym__ERROR] = "_ERROR",
  [sym__ESCAPE] = "_ESCAPE",
  [sym__EVALUATE] = "_EVALUATE",
  [sym__EVENT_STATUS] = "_EVENT_STATUS",
  [sym__EXCEPTION] = "_EXCEPTION",
  [sym__EXCLUSIVE] = "_EXCLUSIVE",
  [sym__EXIT] = "_EXIT",
  [sym__EXTEND] = "_EXTEND",
  [sym__EXTERNAL] = "_EXTERNAL",
  [sym__FD] = "_FD",
  [sym__FILE_CONTROL] = "_FILE_CONTROL",
  [sym__FILE_ID] = "_FILE_ID",
  [sym__FILLER] = "_FILLER",
  [sym__FINAL] = "_FINAL",
  [sym__FIRST] = "_FIRST",
  [sym__FOOTING] = "_FOOTING",
  [sym__FOR] = "_FOR",
  [sym__FOREGROUND_COLOR] = "_FOREGROUND_COLOR",
  [sym__FOREVER] = "_FOREVER",
  [sym__FORMS_OVERLAY] = "_FORMS_OVERLAY",
  [sym__FREE] = "_FREE",
  [sym__FROM] = "_FROM",
  [sym__FULL] = "_FULL",
  [sym__FUNCTION] = "_FUNCTION",
  [sym__FUNCTION_ID] = "_FUNCTION_ID",
  [sym__FUNCTION_NAME] = "_FUNCTION_NAME",
  [sym__GE] = "_GE",
  [sym__GENERATE] = "_GENERATE",
  [sym__GIVING] = "_GIVING",
  [sym__GLOBAL] = "_GLOBAL",
  [sym__GO] = "_GO",
  [sym__GOBACK] = "_GOBACK",
  [sym__GREATER] = "_GREATER",
  [sym__GROUP] = "_GROUP",
  [sym__HEADING] = "_HEADING",
  [sym__HIGHLIGHT] = "_HIGHLIGHT",
  [anon_sym_high_DASHvalue] = "high-value",
  [anon_sym_high_DASHValue] = "high-Value",
  [anon_sym_high_DASHVALUE] = "high-VALUE",
  [anon_sym_High_DASHvalue] = "High-value",
  [anon_sym_High_DASHValue] = "High-Value",
  [anon_sym_High_DASHVALUE] = "High-VALUE",
  [anon_sym_HIGH_DASHvalue] = "HIGH-value",
  [anon_sym_HIGH_DASHValue] = "HIGH-Value",
  [anon_sym_HIGH_DASHVALUE] = "HIGH-VALUE",
  [sym__IDENTIFICATION] = "_IDENTIFICATION",
  [sym__IF] = "_IF",
  [sym__IGNORE] = "_IGNORE",
  [sym__IGNORING] = "_IGNORING",
  [sym__IN] = "_IN",
  [sym__INDEX] = "_INDEX",
  [sym__INDEXED] = "_INDEXED",
  [sym__INDICATE] = "_INDICATE",
  [sym__INITIALIZE] = "_INITIALIZE",
  [sym__INITIALIZED] = "_INITIALIZED",
  [sym__INITIATE] = "_INITIATE",
  [sym__INPUT] = "_INPUT",
  [sym__INPUT_OUTPUT] = "_INPUT_OUTPUT",
  [sym__INSPECT] = "_INSPECT",
  [sym__INTO] = "_INTO",
  [sym__INTRINSIC] = "_INTRINSIC",
  [sym__INVALID] = "_INVALID",
  [sym__INVALID_KEY] = "_INVALID_KEY",
  [sym__IS] = "_IS",
  [sym__I_O] = "_I_O",
  [sym__I_O_CONTROL] = "_I_O_CONTROL",
  [sym__JUSTIFIED] = "_JUSTIFIED",
  [sym__KEY] = "_KEY",
  [sym__LABEL] = "_LABEL",
  [sym__LAST] = "_LAST",
  [sym__LAST_DETAIL] = "_LAST_DETAIL",
  [sym__LE] = "_LE",
  [sym__LEADING] = "_LEADING",
  [sym__LEFT] = "_LEFT",
  [sym__LENGTH] = "_LENGTH",
  [sym__LESS] = "_LESS",
  [sym__LEVEL_NUMBER_WORD] = "_LEVEL_NUMBER_WORD",
  [sym__LEVEL88_NUMBER_WORD] = "_LEVEL88_NUMBER_WORD",
  [sym__LIMIT] = "_LIMIT",
  [sym__LIMITS] = "_LIMITS",
  [sym__LINAGE] = "_LINAGE",
  [sym__LINAGE_COUNTER] = "_LINAGE_COUNTER",
  [sym__LINE] = "_LINE",
  [sym__LINES] = "_LINES",
  [sym__LINKAGE] = "_LINKAGE",
  [sym__LOCALE] = "_LOCALE",
  [sym__LOCALE_DT_FUNC] = "_LOCALE_DT_FUNC",
  [sym__LOCAL_STORAGE] = "_LOCAL_STORAGE",
  [sym__LOCK] = "_LOCK",
  [sym__LOWER_CASE_FUNC] = "_LOWER_CASE_FUNC",
  [sym__LOWLIGHT] = "_LOWLIGHT",
  [anon_sym_low_DASHvalue] = "low-value",
  [anon_sym_low_DASHValue] = "low-Value",
  [anon_sym_low_DASHVALUE] = "low-VALUE",
  [anon_sym_Low_DASHvalue] = "Low-value",
  [anon_sym_Low_DASHValue] = "Low-Value",
  [anon_sym_Low_DASHVALUE] = "Low-VALUE",
  [anon_sym_LOW_DASHvalue] = "LOW-value",
  [anon_sym_LOW_DASHValue] = "LOW-Value",
  [anon_sym_LOW_DASHVALUE] = "LOW-VALUE",
  [sym__MANUAL] = "_MANUAL",
  [sym__MEMORY] = "_MEMORY",
  [sym__MERGE] = "_MERGE",
  [sym__MINUS] = "_MINUS",
  [sym__MNEMONIC_NAME] = "_MNEMONIC_NAME",
  [sym__MODE] = "_MODE",
  [sym__MOVE] = "_MOVE",
  [sym__MULTIPLE] = "_MULTIPLE",
  [sym__MULTIPLY] = "_MULTIPLY",
  [sym__NATIONAL] = "_NATIONAL",
  [sym__NATIONAL_EDITED] = "_NATIONAL_EDITED",
  [sym__NATIVE] = "_NATIVE",
  [sym__NE] = "_NE",
  [sym__NEGATIVE] = "_NEGATIVE",
  [sym__NEXT] = "_NEXT",
  [sym__NEXT_SENTENCE] = "_NEXT_SENTENCE",
  [sym__NO] = "_NO",
  [sym__NOMINAL] = "_NOMINAL",
  [sym__NOT] = "_NOT",
  [sym__NOT_END] = "_NOT_END",
  [sym__NOT_EOP] = "_NOT_EOP",
  [sym__NOT_EXCEPTION] = "_NOT_EXCEPTION",
  [sym__NOT_INVALID_KEY] = "_NOT_INVALID_KEY",
  [sym__NOT_OVERFLOW] = "_NOT_OVERFLOW",
  [sym__NOT_SIZE_ERROR] = "_NOT_SIZE_ERROR",
  [sym__NO_ADVANCING] = "_NO_ADVANCING",
  [sym__NUMBER] = "_NUMBER",
  [sym__NUMBERS] = "_NUMBERS",
  [sym__NUMERIC] = "_NUMERIC",
  [sym__NUMERIC_EDITED] = "_NUMERIC_EDITED",
  [sym__NUMVALC_FUNC] = "_NUMVALC_FUNC",
  [sym__OBJECT_COMPUTER] = "_OBJECT_COMPUTER",
  [sym__OCCURS] = "_OCCURS",
  [sym__OF] = "_OF",
  [sym__OFF] = "_OFF",
  [sym__OMITTED] = "_OMITTED",
  [sym__ON] = "_ON",
  [sym__ONLY] = "_ONLY",
  [sym__OPEN] = "_OPEN",
  [sym__OPTIONAL] = "_OPTIONAL",
  [sym__OR] = "_OR",
  [sym__ORDER] = "_ORDER",
  [sym__ORGANIZATION] = "_ORGANIZATION",
  [sym__OTHER] = "_OTHER",
  [sym__OUTPUT] = "_OUTPUT",
  [sym__OVERFLOW] = "_OVERFLOW",
  [sym__OVERLINE] = "_OVERLINE",
  [sym__PACKED_DECIMAL] = "_PACKED_DECIMAL",
  [sym__PADDING] = "_PADDING",
  [sym__PAGE] = "_PAGE",
  [sym__PAGE_FOOTING] = "_PAGE_FOOTING",
  [sym__PAGE_HEADING] = "_PAGE_HEADING",
  [sym__PARAGRAPH] = "_PARAGRAPH",
  [sym__PERFORM] = "_PERFORM",
  [sym__PIC] = "_PIC",
  [sym__PICTURE] = "_PICTURE",
  [sym__PLUS] = "_PLUS",
  [sym__POINTER] = "_POINTER",
  [sym__POSITION] = "_POSITION",
  [sym__POSITIVE] = "_POSITIVE",
  [sym__PRESENT] = "_PRESENT",
  [sym__PREVIOUS] = "_PREVIOUS",
  [sym__PRINTER] = "_PRINTER",
  [sym__PRINTING] = "_PRINTING",
  [sym__PROCEDURE] = "_PROCEDURE",
  [sym__PROCEDURES] = "_PROCEDURES",
  [sym__PROCEED] = "_PROCEED",
  [sym__PROGRAM] = "_PROGRAM",
  [sym__PROGRAM_ID] = "_PROGRAM_ID",
  [sym__PROGRAM_NAME] = "_PROGRAM_NAME",
  [sym__PROGRAM_POINTER] = "_PROGRAM_POINTER",
  [sym__PROMPT] = "_PROMPT",
  [anon_sym_quote] = "quote",
  [anon_sym_QUOTE] = "QUOTE",
  [anon_sym_Quote] = "Quote",
  [sym__RANDOM] = "_RANDOM",
  [sym__RD] = "_RD",
  [sym__READ] = "_READ",
  [sym__RECORD] = "_RECORD",
  [sym__RECORDING] = "_RECORDING",
  [sym__RECORDS] = "_RECORDS",
  [sym__RECURSIVE] = "_RECURSIVE",
  [sym__REDEFINES] = "_REDEFINES",
  [sym__REEL] = "_REEL",
  [sym__REFERENCE] = "_REFERENCE",
  [sym__RELATIVE] = "_RELATIVE",
  [sym__RELEASE] = "_RELEASE",
  [sym__REMAINDER] = "_REMAINDER",
  [sym__REMOVAL] = "_REMOVAL",
  [sym__RENAMES] = "_RENAMES",
  [sym__REPLACING] = "_REPLACING",
  [sym__REPORT] = "_REPORT",
  [sym__REPORTING] = "_REPORTING",
  [sym__REPORTS] = "_REPORTS",
  [sym__REPORT_FOOTING] = "_REPORT_FOOTING",
  [sym__REPORT_HEADING] = "_REPORT_HEADING",
  [sym__REPOSITORY] = "_REPOSITORY",
  [sym__REQUIRED] = "_REQUIRED",
  [sym__RESERVE] = "_RESERVE",
  [sym__RETURN] = "_RETURN",
  [sym__RETURNING] = "_RETURNING",
  [sym__REVERSE_FUNC] = "_REVERSE_FUNC",
  [sym__REVERSE_VIDEO] = "_REVERSE_VIDEO",
  [sym__REWIND] = "_REWIND",
  [sym__REWRITE] = "_REWRITE",
  [sym__RIGHT] = "_RIGHT",
  [sym__ROLLBACK] = "_ROLLBACK",
  [sym__ROUNDED] = "_ROUNDED",
  [sym__RUN] = "_RUN",
  [sym__SAME] = "_SAME",
  [sym__SCREEN] = "_SCREEN",
  [sym__SCREEN_CONTROL] = "_SCREEN_CONTROL",
  [sym__SCROLL] = "_SCROLL",
  [sym__SD] = "_SD",
  [sym__SEARCH] = "_SEARCH",
  [sym__SECTION] = "_SECTION",
  [sym__SECURE] = "_SECURE",
  [sym__SEGMENT_LIMIT] = "_SEGMENT_LIMIT",
  [sym__SELECT] = "_SELECT",
  [sym__SEMI_COLON] = "_SEMI_COLON",
  [sym__SENTENCE] = "_SENTENCE",
  [sym__SEPARATE] = "_SEPARATE",
  [sym__SEQUENCE] = "_SEQUENCE",
  [sym__SEQUENTIAL] = "_SEQUENTIAL",
  [sym__SET] = "_SET",
  [sym__SHARING] = "_SHARING",
  [sym__SIGN] = "_SIGN",
  [sym__SIGNED] = "_SIGNED",
  [sym__SIGNED_INT] = "_SIGNED_INT",
  [sym__SIGNED_LONG] = "_SIGNED_LONG",
  [sym__SIGNED_SHORT] = "_SIGNED_SHORT",
  [sym__SIZE] = "_SIZE",
  [sym__SIZE_ERROR] = "_SIZE_ERROR",
  [sym__SORT] = "_SORT",
  [sym__SORT_MERGE] = "_SORT_MERGE",
  [sym__SOURCE] = "_SOURCE",
  [sym__SOURCE_COMPUTER] = "_SOURCE_COMPUTER",
  [anon_sym_space] = "space",
  [anon_sym_SPACE] = "SPACE",
  [anon_sym_Space] = "Space",
  [sym__SPECIAL_NAMES] = "_SPECIAL_NAMES",
  [sym__STANDARD] = "_STANDARD",
  [sym__STANDARD_1] = "_STANDARD_1",
  [sym__STANDARD_2] = "_STANDARD_2",
  [sym__START] = "_START",
  [sym__STATUS] = "_STATUS",
  [sym__STOP] = "_STOP",
  [sym__STRING] = "_STRING",
  [sym__SUBSTITUTE_FUNC] = "_SUBSTITUTE_FUNC",
  [sym__SUBSTITUTE_CASE_FUNC] = "_SUBSTITUTE_CASE_FUNC",
  [sym__SUBTRACT] = "_SUBTRACT",
  [sym__SUM] = "_SUM",
  [sym__SUPPRESS] = "_SUPPRESS",
  [sym__SYMBOLIC] = "_SYMBOLIC",
  [sym__SYNCHRONIZED] = "_SYNCHRONIZED",
  [sym__TALLYING] = "_TALLYING",
  [sym__TAPE] = "_TAPE",
  [sym__TERMINATE] = "_TERMINATE",
  [sym__TEST] = "_TEST",
  [sym__THAN] = "_THAN",
  [sym__THEN] = "_THEN",
  [sym__THRU] = "_THRU",
  [sym__TIME] = "_TIME",
  [sym__TIMES] = "_TIMES",
  [sym__TO] = "_TO",
  [sym__TOK_FALSE] = "_TOK_FALSE",
  [sym__TOK_FILE] = "_TOK_FILE",
  [sym__TOK_INITIAL] = "_TOK_INITIAL",
  [anon_sym_null] = "null",
  [anon_sym_Null] = "Null",
  [anon_sym_NULL] = "NULL",
  [sym__TOK_TRUE] = "_TOK_TRUE",
  [sym__TOP] = "_TOP",
  [sym__TRACKS] = "_TRACKS",
  [sym__TRAILING] = "_TRAILING",
  [sym__TRANSFORM] = "_TRANSFORM",
  [sym__TRIM_FUNCTION] = "_TRIM_FUNCTION",
  [sym__TYPE] = "_TYPE",
  [sym__UNDERLINE] = "_UNDERLINE",
  [sym__UNIT] = "_UNIT",
  [sym__UNLOCK] = "_UNLOCK",
  [sym__UNSIGNED] = "_UNSIGNED",
  [sym__UNSIGNED_INT] = "_UNSIGNED_INT",
  [sym__UNSIGNED_LONG] = "_UNSIGNED_LONG",
  [sym__UNSIGNED_SHORT] = "_UNSIGNED_SHORT",
  [sym__UNSTRING] = "_UNSTRING",
  [sym__UNTIL] = "_UNTIL",
  [sym__UP] = "_UP",
  [sym__UPDATE] = "_UPDATE",
  [sym__UPON] = "_UPON",
  [sym__UPON_ARGUMENT_NUMBER] = "_UPON_ARGUMENT_NUMBER",
  [sym__UPON_COMMAND_LINE] = "_UPON_COMMAND_LINE",
  [sym__UPON_ENVIRONMENT_NAME] = "_UPON_ENVIRONMENT_NAME",
  [sym__UPON_ENVIRONMENT_VALUE] = "_UPON_ENVIRONMENT_VALUE",
  [sym__UPPER_CASE_FUNC] = "_UPPER_CASE_FUNC",
  [sym__USAGE] = "_USAGE",
  [sym__USE] = "_USE",
  [sym__USING] = "_USING",
  [sym__VALUE] = "_VALUE",
  [sym__VARYING] = "_VARYING",
  [sym__WAIT] = "_WAIT",
  [sym__WHEN] = "_WHEN",
  [sym__WHEN_COMPILED_FUNC] = "_WHEN_COMPILED_FUNC",
  [sym__WHEN_OTHER] = "_WHEN_OTHER",
  [sym__WITH] = "_WITH",
  [sym__WORDS] = "_WORDS",
  [sym__WORKING_STORAGE] = "_WORKING_STORAGE",
  [sym__WRITE] = "_WRITE",
  [sym__YYYYDDD] = "_YYYYDDD",
  [sym__YYYYMMDD] = "_YYYYMMDD",
  [anon_sym_zero] = "zero",
  [anon_sym_ZERO] = "ZERO",
  [anon_sym_Zero] = "Zero",
  [sym_start] = "start",
  [sym_program_definition] = "program_definition",
  [sym_identification_division] = "identification_division",
  [sym_program_name] = "program_name",
  [sym_as_literal] = "as_literal",
  [sym_data_division] = "data_division",
  [sym_working_storage_section] = "working_storage_section",
  [sym_data_description] = "data_description",
  [sym_entry_name] = "entry_name",
  [sym__data_description_clause] = "_data_description_clause",
  [sym_redefines_clause] = "redefines_clause",
  [sym__identifier] = "_identifier",
  [sym_qualified_word] = "qualified_word",
  [sym__in_of] = "_in_of",
  [sym_subref] = "subref",
  [sym_refmod] = "refmod",
  [sym__exp_list] = "_exp_list",
  [sym__exp] = "_exp",
  [sym__binary_exp] = "_binary_exp",
  [sym__unary_exp] = "_unary_exp",
  [sym_positive_exp] = "positive_exp",
  [sym_negative_exp] = "negative_exp",
  [sym_add_exp] = "add_exp",
  [sym_sub_exp] = "sub_exp",
  [sym_mul_exp] = "mul_exp",
  [sym_div_exp] = "div_exp",
  [sym_pow_exp] = "pow_exp",
  [sym__arith_x] = "_arith_x",
  [sym_picture_clause] = "picture_clause",
  [sym__picture_string] = "_picture_string",
  [sym_picture_9] = "picture_9",
  [sym_procedure_division] = "procedure_division",
  [sym__statement] = "_statement",
  [sym_stop_run_statement] = "stop_run_statement",
  [sym_move_statement] = "move_statement",
  [sym__move_body] = "_move_body",
  [sym__x] = "_x",
  [aux_sym__target_x_list] = "_target_x_list",
  [sym__target_x] = "_target_x",
  [sym__basic_literal] = "_basic_literal",
  [sym__basic_value] = "_basic_value",
  [sym__literal] = "_literal",
  [sym_function_] = "function_",
  [sym_func_refmod] = "func_refmod",
  [sym__trim_args] = "_trim_args",
  [sym__e_sep] = "_e_sep",
  [sym__numvalc_args] = "_numvalc_args",
  [sym__locale_dt_args] = "_locale_dt_args",
  [sym_linage_counter] = "linage_counter",
  [sym__func_args] = "_func_args",
  [sym__LITERAL] = "_LITERAL",
  [sym__string] = "_string",
  [sym_x_string] = "x_string",
  [sym_h_string] = "h_string",
  [sym_n_string] = "n_string",
  [sym__HIGH_VALUE] = "_HIGH_VALUE",
  [sym__LOW_VALUE] = "_LOW_VALUE",
  [sym__QUOTE] = "_QUOTE",
  [sym__SPACE] = "_SPACE",
  [sym__TOK_NULL] = "_TOK_NULL",
  [sym__ZERO] = "_ZERO",
  [sym_ALL_] = "ALL_",
  [sym_CONCATENATE_FUNC_] = "CONCATENATE_FUNC_",
  [sym_CURRENT_DATE_FUNC_] = "CURRENT_DATE_FUNC_",
  [sym_FUNCTION_NAME_] = "FUNCTION_NAME_",
  [sym_HIGH_VALUE_] = "HIGH_VALUE_",
  [sym_LENGTH_] = "LENGTH_",
  [sym_LOCALE_DT_FUNC_] = "LOCALE_DT_FUNC_",
  [sym_LOWER_CASE_FUNC_] = "LOWER_CASE_FUNC_",
  [sym_LOW_VALUE_] = "LOW_VALUE_",
  [sym_NUMVALC_FUNC_] = "NUMVALC_FUNC_",
  [sym_QUOTE_] = "QUOTE_",
  [sym_REVERSE_FUNC_] = "REVERSE_FUNC_",
  [sym_SPACE_] = "SPACE_",
  [sym_SUBSTITUTE_FUNC_] = "SUBSTITUTE_FUNC_",
  [sym_SUBSTITUTE_CASE_FUNC_] = "SUBSTITUTE_CASE_FUNC_",
  [sym_TOK_NULL_] = "TOK_NULL_",
  [sym_TRIM_FUNCTION_] = "TRIM_FUNCTION_",
  [sym_UPPER_CASE_FUNC_] = "UPPER_CASE_FUNC_",
  [sym_WHEN_COMPILED_FUNC_] = "WHEN_COMPILED_FUNC_",
  [sym_ZERO_] = "ZERO_",
  [aux_sym_start_repeat1] = "start_repeat1",
  [aux_sym_working_storage_section_repeat1] = "working_storage_section_repeat1",
  [aux_sym_data_description_repeat1] = "data_description_repeat1",
  [aux_sym_qualified_word_repeat1] = "qualified_word_repeat1",
  [aux_sym__exp_list_repeat1] = "_exp_list_repeat1",
  [aux_sym_procedure_division_repeat1] = "procedure_division_repeat1",
  [aux_sym__basic_literal_repeat1] = "_basic_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_WORD] = sym_WORD,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_function_definition] = sym_function_definition,
  [sym_environment_division] = sym_environment_division,
  [sym_file_section] = sym_file_section,
  [sym_level_number] = sym_level_number,
  [sym_level_number_88] = sym_level_number_88,
  [sym_constant_entry] = sym_constant_entry,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym_external_clause] = sym_external_clause,
  [sym_global_clause] = sym_global_clause,
  [sym_picture_x] = sym_picture_x,
  [sym__picture_9_z] = sym__picture_9_z,
  [sym__picture_9_v] = sym__picture_9_v,
  [sym_usage_clause] = sym_usage_clause,
  [sym_sign_clause] = sym_sign_clause,
  [sym_occurs_clause] = sym_occurs_clause,
  [sym_justified_clause] = sym_justified_clause,
  [sym_synchronized_clause] = sym_synchronized_clause,
  [sym_blank_clause] = sym_blank_clause,
  [sym_based_clause] = sym_based_clause,
  [sym_value_clause] = sym_value_clause,
  [sym_renames_clause] = sym_renames_clause,
  [sym_any_length_clause] = sym_any_length_clause,
  [sym_error] = sym_error,
  [sym_local_storage_section] = sym_local_storage_section,
  [sym_linkage_section] = sym_linkage_section,
  [sym_report_section] = sym_report_section,
  [sym_screen_section] = sym_screen_section,
  [sym_nested_prog] = sym_nested_prog,
  [sym_end_program] = sym_end_program,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_number] = sym_number,
  [aux_sym_x_string_token1] = aux_sym_x_string_token1,
  [aux_sym_x_string_token2] = aux_sym_x_string_token2,
  [aux_sym_h_string_token1] = aux_sym_h_string_token1,
  [aux_sym_h_string_token2] = aux_sym_h_string_token2,
  [aux_sym_n_string_token1] = aux_sym_n_string_token1,
  [aux_sym_n_string_token2] = aux_sym_n_string_token2,
  [aux_sym_n_string_token3] = aux_sym_n_string_token3,
  [aux_sym_n_string_token4] = aux_sym_n_string_token4,
  [aux_sym_n_string_token5] = aux_sym_n_string_token5,
  [aux_sym_n_string_token6] = aux_sym_n_string_token6,
  [aux_sym_n_string_token7] = aux_sym_n_string_token7,
  [aux_sym_n_string_token8] = aux_sym_n_string_token8,
  [sym__ACCEPT] = sym__ACCEPT,
  [sym__ACCESS] = sym__ACCESS,
  [sym__ADD] = sym__ADD,
  [sym__ADDRESS] = sym__ADDRESS,
  [sym__ADVANCING] = sym__ADVANCING,
  [sym__AFTER] = sym__AFTER,
  [sym__ALL] = sym__ALL,
  [sym__ALLOCATE] = sym__ALLOCATE,
  [sym__ALPHABET] = sym__ALPHABET,
  [sym__ALPHABETIC] = sym__ALPHABETIC,
  [sym__ALPHABETIC_LOWER] = sym__ALPHABETIC_LOWER,
  [sym__ALPHABETIC_UPPER] = sym__ALPHABETIC_UPPER,
  [sym__ALPHANUMERIC] = sym__ALPHANUMERIC,
  [sym__ALPHANUMERIC_EDITED] = sym__ALPHANUMERIC_EDITED,
  [sym__ALSO] = sym__ALSO,
  [sym__ALTER] = sym__ALTER,
  [sym__ALTERNATE] = sym__ALTERNATE,
  [sym__AND] = sym__AND,
  [sym__ANY] = sym__ANY,
  [sym__APPLY] = sym__APPLY,
  [sym__ARE] = sym__ARE,
  [sym__AREA] = sym__AREA,
  [sym__ARGUMENT_NUMBER] = sym__ARGUMENT_NUMBER,
  [sym__ARGUMENT_VALUE] = sym__ARGUMENT_VALUE,
  [sym__AS] = sym__AS,
  [sym__ASCENDING] = sym__ASCENDING,
  [sym__ASSIGN] = sym__ASSIGN,
  [sym__AT] = sym__AT,
  [sym__AUTO] = sym__AUTO,
  [sym__AUTOMATIC] = sym__AUTOMATIC,
  [sym__BACKGROUND_COLOR] = sym__BACKGROUND_COLOR,
  [sym__BASED] = sym__BASED,
  [sym__BEFORE] = sym__BEFORE,
  [sym__BELL] = sym__BELL,
  [sym__BINARY] = sym__BINARY,
  [sym__BINARY_C_LONG] = sym__BINARY_C_LONG,
  [sym__BINARY_CHAR] = sym__BINARY_CHAR,
  [sym__BINARY_DOUBLE] = sym__BINARY_DOUBLE,
  [sym__BINARY_LONG] = sym__BINARY_LONG,
  [sym__BINARY_SHORT] = sym__BINARY_SHORT,
  [sym__BLANK] = sym__BLANK,
  [sym__BLANK_LINE] = sym__BLANK_LINE,
  [sym__BLANK_SCREEN] = sym__BLANK_SCREEN,
  [sym__BLINK] = sym__BLINK,
  [sym__BLOCK] = sym__BLOCK,
  [sym__BOTTOM] = sym__BOTTOM,
  [sym__BY] = sym__BY,
  [sym__BYTE_LENGTH] = sym__BYTE_LENGTH,
  [sym__CALL] = sym__CALL,
  [sym__CANCEL] = sym__CANCEL,
  [sym__CH] = sym__CH,
  [sym__CHAINING] = sym__CHAINING,
  [sym__CHARACTER] = sym__CHARACTER,
  [sym__CHARACTERS] = sym__CHARACTERS,
  [sym__CLASS] = sym__CLASS,
  [sym__CLASS_NAME] = sym__CLASS_NAME,
  [sym__CLOSE] = sym__CLOSE,
  [sym__CLOSE_NOFEED] = sym__CLOSE_NOFEED,
  [sym__CODE] = sym__CODE,
  [sym__CODE_SET] = sym__CODE_SET,
  [sym__COLLATING] = sym__COLLATING,
  [sym__COL] = sym__COL,
  [sym__COLS] = sym__COLS,
  [sym__COLUMN] = sym__COLUMN,
  [sym__COLUMNS] = sym__COLUMNS,
  [sym__COMMA] = sym__COMMA,
  [sym__COMMAND_LINE] = sym__COMMAND_LINE,
  [sym__COMMA_DELIM] = sym__COMMA_DELIM,
  [sym__COMMIT] = sym__COMMIT,
  [sym__COMMITMENT_CONTROL] = sym__COMMITMENT_CONTROL,
  [sym__COMMON] = sym__COMMON,
  [sym__COMP] = sym__COMP,
  [sym__COMPUTE] = sym__COMPUTE,
  [sym__COMP_1] = sym__COMP_1,
  [sym__COMP_2] = sym__COMP_2,
  [sym__COMP_3] = sym__COMP_3,
  [sym__COMP_4] = sym__COMP_4,
  [sym__COMP_5] = sym__COMP_5,
  [sym__COMP_X] = sym__COMP_X,
  [sym__CONCATENATE_FUNC] = sym__CONCATENATE_FUNC,
  [sym__CONFIGURATION] = sym__CONFIGURATION,
  [sym__CONSTANT] = sym__CONSTANT,
  [sym__CONTAINS] = sym__CONTAINS,
  [sym__CONTENT] = sym__CONTENT,
  [sym__CONTINUE] = sym__CONTINUE,
  [sym__CONTROL] = sym__CONTROL,
  [sym__CONTROLS] = sym__CONTROLS,
  [sym__CONTROL_FOOTING] = sym__CONTROL_FOOTING,
  [sym__CONTROL_HEADING] = sym__CONTROL_HEADING,
  [sym__CONVERTING] = sym__CONVERTING,
  [sym__CORE_INDEX] = sym__CORE_INDEX,
  [sym__CORRESPONDING] = sym__CORRESPONDING,
  [sym__COUNT] = sym__COUNT,
  [sym__CRT] = sym__CRT,
  [sym__CURRENCY] = sym__CURRENCY,
  [sym__CURRENT_DATE_FUNC] = sym__CURRENT_DATE_FUNC,
  [sym__CURSOR] = sym__CURSOR,
  [sym__CYCLE] = sym__CYCLE,
  [sym__CYL_OVERFLOW] = sym__CYL_OVERFLOW,
  [sym__DATA] = sym__DATA,
  [sym__DATE] = sym__DATE,
  [sym__DAY] = sym__DAY,
  [sym__DAY_OF_WEEK] = sym__DAY_OF_WEEK,
  [sym__DE] = sym__DE,
  [sym__DEBUGGING] = sym__DEBUGGING,
  [sym__DECIMAL_POINT] = sym__DECIMAL_POINT,
  [sym__DECLARATIVES] = sym__DECLARATIVES,
  [sym__DEFAULT] = sym__DEFAULT,
  [sym__DELETE] = sym__DELETE,
  [sym__DELIMITED] = sym__DELIMITED,
  [sym__DELIMITER] = sym__DELIMITER,
  [sym__DEPENDING] = sym__DEPENDING,
  [sym__DESCENDING] = sym__DESCENDING,
  [sym__DETAIL] = sym__DETAIL,
  [sym__DISK] = sym__DISK,
  [sym__DISPLAY] = sym__DISPLAY,
  [sym__DIVIDE] = sym__DIVIDE,
  [sym__DIVISION] = sym__DIVISION,
  [sym__DOWN] = sym__DOWN,
  [sym__DUPLICATES] = sym__DUPLICATES,
  [sym__DYNAMIC] = sym__DYNAMIC,
  [sym__EBCDIC] = sym__EBCDIC,
  [sym__ELSE] = sym__ELSE,
  [sym__END] = sym__END,
  [sym__END_ACCEPT] = sym__END_ACCEPT,
  [sym__END_ADD] = sym__END_ADD,
  [sym__END_CALL] = sym__END_CALL,
  [sym__END_COMPUTE] = sym__END_COMPUTE,
  [sym__END_DELETE] = sym__END_DELETE,
  [sym__END_DISPLAY] = sym__END_DISPLAY,
  [sym__END_DIVIDE] = sym__END_DIVIDE,
  [sym__END_EVALUATE] = sym__END_EVALUATE,
  [sym__END_FUNCTION] = sym__END_FUNCTION,
  [sym__END_IF] = sym__END_IF,
  [sym__END_MULTIPLY] = sym__END_MULTIPLY,
  [sym__END_PERFORM] = sym__END_PERFORM,
  [sym__END_PROGRAM] = sym__END_PROGRAM,
  [sym__END_READ] = sym__END_READ,
  [sym__END_RETURN] = sym__END_RETURN,
  [sym__END_REWRITE] = sym__END_REWRITE,
  [sym__END_SEARCH] = sym__END_SEARCH,
  [sym__END_START] = sym__END_START,
  [sym__END_STRING] = sym__END_STRING,
  [sym__END_SUBTRACT] = sym__END_SUBTRACT,
  [sym__END_UNSTRING] = sym__END_UNSTRING,
  [sym__END_WRITE] = sym__END_WRITE,
  [sym__ENTRY] = sym__ENTRY,
  [sym__ENVIRONMENT] = sym__ENVIRONMENT,
  [sym__ENVIRONMENT_NAME] = sym__ENVIRONMENT_NAME,
  [sym__ENVIRONMENT_VALUE] = sym__ENVIRONMENT_VALUE,
  [sym__EOL] = sym__EOL,
  [sym__EOP] = sym__EOP,
  [sym__EOS] = sym__EOS,
  [sym__EQUAL] = sym__EQUAL,
  [sym__EQUALS] = sym__EQUALS,
  [sym__ERASE] = sym__ERASE,
  [sym__ERROR] = sym__ERROR,
  [sym__ESCAPE] = sym__ESCAPE,
  [sym__EVALUATE] = sym__EVALUATE,
  [sym__EVENT_STATUS] = sym__EVENT_STATUS,
  [sym__EXCEPTION] = sym__EXCEPTION,
  [sym__EXCLUSIVE] = sym__EXCLUSIVE,
  [sym__EXIT] = sym__EXIT,
  [sym__EXTEND] = sym__EXTEND,
  [sym__EXTERNAL] = sym__EXTERNAL,
  [sym__FD] = sym__FD,
  [sym__FILE_CONTROL] = sym__FILE_CONTROL,
  [sym__FILE_ID] = sym__FILE_ID,
  [sym__FILLER] = sym__FILLER,
  [sym__FINAL] = sym__FINAL,
  [sym__FIRST] = sym__FIRST,
  [sym__FOOTING] = sym__FOOTING,
  [sym__FOR] = sym__FOR,
  [sym__FOREGROUND_COLOR] = sym__FOREGROUND_COLOR,
  [sym__FOREVER] = sym__FOREVER,
  [sym__FORMS_OVERLAY] = sym__FORMS_OVERLAY,
  [sym__FREE] = sym__FREE,
  [sym__FROM] = sym__FROM,
  [sym__FULL] = sym__FULL,
  [sym__FUNCTION] = sym__FUNCTION,
  [sym__FUNCTION_ID] = sym__FUNCTION_ID,
  [sym__FUNCTION_NAME] = sym__FUNCTION_NAME,
  [sym__GE] = sym__GE,
  [sym__GENERATE] = sym__GENERATE,
  [sym__GIVING] = sym__GIVING,
  [sym__GLOBAL] = sym__GLOBAL,
  [sym__GO] = sym__GO,
  [sym__GOBACK] = sym__GOBACK,
  [sym__GREATER] = sym__GREATER,
  [sym__GROUP] = sym__GROUP,
  [sym__HEADING] = sym__HEADING,
  [sym__HIGHLIGHT] = sym__HIGHLIGHT,
  [anon_sym_high_DASHvalue] = anon_sym_high_DASHvalue,
  [anon_sym_high_DASHValue] = anon_sym_high_DASHValue,
  [anon_sym_high_DASHVALUE] = anon_sym_high_DASHVALUE,
  [anon_sym_High_DASHvalue] = anon_sym_High_DASHvalue,
  [anon_sym_High_DASHValue] = anon_sym_High_DASHValue,
  [anon_sym_High_DASHVALUE] = anon_sym_High_DASHVALUE,
  [anon_sym_HIGH_DASHvalue] = anon_sym_HIGH_DASHvalue,
  [anon_sym_HIGH_DASHValue] = anon_sym_HIGH_DASHValue,
  [anon_sym_HIGH_DASHVALUE] = anon_sym_HIGH_DASHVALUE,
  [sym__IDENTIFICATION] = sym__IDENTIFICATION,
  [sym__IF] = sym__IF,
  [sym__IGNORE] = sym__IGNORE,
  [sym__IGNORING] = sym__IGNORING,
  [sym__IN] = sym__IN,
  [sym__INDEX] = sym__INDEX,
  [sym__INDEXED] = sym__INDEXED,
  [sym__INDICATE] = sym__INDICATE,
  [sym__INITIALIZE] = sym__INITIALIZE,
  [sym__INITIALIZED] = sym__INITIALIZED,
  [sym__INITIATE] = sym__INITIATE,
  [sym__INPUT] = sym__INPUT,
  [sym__INPUT_OUTPUT] = sym__INPUT_OUTPUT,
  [sym__INSPECT] = sym__INSPECT,
  [sym__INTO] = sym__INTO,
  [sym__INTRINSIC] = sym__INTRINSIC,
  [sym__INVALID] = sym__INVALID,
  [sym__INVALID_KEY] = sym__INVALID_KEY,
  [sym__IS] = sym__IS,
  [sym__I_O] = sym__I_O,
  [sym__I_O_CONTROL] = sym__I_O_CONTROL,
  [sym__JUSTIFIED] = sym__JUSTIFIED,
  [sym__KEY] = sym__KEY,
  [sym__LABEL] = sym__LABEL,
  [sym__LAST] = sym__LAST,
  [sym__LAST_DETAIL] = sym__LAST_DETAIL,
  [sym__LE] = sym__LE,
  [sym__LEADING] = sym__LEADING,
  [sym__LEFT] = sym__LEFT,
  [sym__LENGTH] = sym__LENGTH,
  [sym__LESS] = sym__LESS,
  [sym__LEVEL_NUMBER_WORD] = sym__LEVEL_NUMBER_WORD,
  [sym__LEVEL88_NUMBER_WORD] = sym__LEVEL88_NUMBER_WORD,
  [sym__LIMIT] = sym__LIMIT,
  [sym__LIMITS] = sym__LIMITS,
  [sym__LINAGE] = sym__LINAGE,
  [sym__LINAGE_COUNTER] = sym__LINAGE_COUNTER,
  [sym__LINE] = sym__LINE,
  [sym__LINES] = sym__LINES,
  [sym__LINKAGE] = sym__LINKAGE,
  [sym__LOCALE] = sym__LOCALE,
  [sym__LOCALE_DT_FUNC] = sym__LOCALE_DT_FUNC,
  [sym__LOCAL_STORAGE] = sym__LOCAL_STORAGE,
  [sym__LOCK] = sym__LOCK,
  [sym__LOWER_CASE_FUNC] = sym__LOWER_CASE_FUNC,
  [sym__LOWLIGHT] = sym__LOWLIGHT,
  [anon_sym_low_DASHvalue] = anon_sym_low_DASHvalue,
  [anon_sym_low_DASHValue] = anon_sym_low_DASHValue,
  [anon_sym_low_DASHVALUE] = anon_sym_low_DASHVALUE,
  [anon_sym_Low_DASHvalue] = anon_sym_Low_DASHvalue,
  [anon_sym_Low_DASHValue] = anon_sym_Low_DASHValue,
  [anon_sym_Low_DASHVALUE] = anon_sym_Low_DASHVALUE,
  [anon_sym_LOW_DASHvalue] = anon_sym_LOW_DASHvalue,
  [anon_sym_LOW_DASHValue] = anon_sym_LOW_DASHValue,
  [anon_sym_LOW_DASHVALUE] = anon_sym_LOW_DASHVALUE,
  [sym__MANUAL] = sym__MANUAL,
  [sym__MEMORY] = sym__MEMORY,
  [sym__MERGE] = sym__MERGE,
  [sym__MINUS] = sym__MINUS,
  [sym__MNEMONIC_NAME] = sym__MNEMONIC_NAME,
  [sym__MODE] = sym__MODE,
  [sym__MOVE] = sym__MOVE,
  [sym__MULTIPLE] = sym__MULTIPLE,
  [sym__MULTIPLY] = sym__MULTIPLY,
  [sym__NATIONAL] = sym__NATIONAL,
  [sym__NATIONAL_EDITED] = sym__NATIONAL_EDITED,
  [sym__NATIVE] = sym__NATIVE,
  [sym__NE] = sym__NE,
  [sym__NEGATIVE] = sym__NEGATIVE,
  [sym__NEXT] = sym__NEXT,
  [sym__NEXT_SENTENCE] = sym__NEXT_SENTENCE,
  [sym__NO] = sym__NO,
  [sym__NOMINAL] = sym__NOMINAL,
  [sym__NOT] = sym__NOT,
  [sym__NOT_END] = sym__NOT_END,
  [sym__NOT_EOP] = sym__NOT_EOP,
  [sym__NOT_EXCEPTION] = sym__NOT_EXCEPTION,
  [sym__NOT_INVALID_KEY] = sym__NOT_INVALID_KEY,
  [sym__NOT_OVERFLOW] = sym__NOT_OVERFLOW,
  [sym__NOT_SIZE_ERROR] = sym__NOT_SIZE_ERROR,
  [sym__NO_ADVANCING] = sym__NO_ADVANCING,
  [sym__NUMBER] = sym__NUMBER,
  [sym__NUMBERS] = sym__NUMBERS,
  [sym__NUMERIC] = sym__NUMERIC,
  [sym__NUMERIC_EDITED] = sym__NUMERIC_EDITED,
  [sym__NUMVALC_FUNC] = sym__NUMVALC_FUNC,
  [sym__OBJECT_COMPUTER] = sym__OBJECT_COMPUTER,
  [sym__OCCURS] = sym__OCCURS,
  [sym__OF] = sym__OF,
  [sym__OFF] = sym__OFF,
  [sym__OMITTED] = sym__OMITTED,
  [sym__ON] = sym__ON,
  [sym__ONLY] = sym__ONLY,
  [sym__OPEN] = sym__OPEN,
  [sym__OPTIONAL] = sym__OPTIONAL,
  [sym__OR] = sym__OR,
  [sym__ORDER] = sym__ORDER,
  [sym__ORGANIZATION] = sym__ORGANIZATION,
  [sym__OTHER] = sym__OTHER,
  [sym__OUTPUT] = sym__OUTPUT,
  [sym__OVERFLOW] = sym__OVERFLOW,
  [sym__OVERLINE] = sym__OVERLINE,
  [sym__PACKED_DECIMAL] = sym__PACKED_DECIMAL,
  [sym__PADDING] = sym__PADDING,
  [sym__PAGE] = sym__PAGE,
  [sym__PAGE_FOOTING] = sym__PAGE_FOOTING,
  [sym__PAGE_HEADING] = sym__PAGE_HEADING,
  [sym__PARAGRAPH] = sym__PARAGRAPH,
  [sym__PERFORM] = sym__PERFORM,
  [sym__PIC] = sym__PIC,
  [sym__PICTURE] = sym__PICTURE,
  [sym__PLUS] = sym__PLUS,
  [sym__POINTER] = sym__POINTER,
  [sym__POSITION] = sym__POSITION,
  [sym__POSITIVE] = sym__POSITIVE,
  [sym__PRESENT] = sym__PRESENT,
  [sym__PREVIOUS] = sym__PREVIOUS,
  [sym__PRINTER] = sym__PRINTER,
  [sym__PRINTING] = sym__PRINTING,
  [sym__PROCEDURE] = sym__PROCEDURE,
  [sym__PROCEDURES] = sym__PROCEDURES,
  [sym__PROCEED] = sym__PROCEED,
  [sym__PROGRAM] = sym__PROGRAM,
  [sym__PROGRAM_ID] = sym__PROGRAM_ID,
  [sym__PROGRAM_NAME] = sym__PROGRAM_NAME,
  [sym__PROGRAM_POINTER] = sym__PROGRAM_POINTER,
  [sym__PROMPT] = sym__PROMPT,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_QUOTE] = anon_sym_QUOTE,
  [anon_sym_Quote] = anon_sym_Quote,
  [sym__RANDOM] = sym__RANDOM,
  [sym__RD] = sym__RD,
  [sym__READ] = sym__READ,
  [sym__RECORD] = sym__RECORD,
  [sym__RECORDING] = sym__RECORDING,
  [sym__RECORDS] = sym__RECORDS,
  [sym__RECURSIVE] = sym__RECURSIVE,
  [sym__REDEFINES] = sym__REDEFINES,
  [sym__REEL] = sym__REEL,
  [sym__REFERENCE] = sym__REFERENCE,
  [sym__RELATIVE] = sym__RELATIVE,
  [sym__RELEASE] = sym__RELEASE,
  [sym__REMAINDER] = sym__REMAINDER,
  [sym__REMOVAL] = sym__REMOVAL,
  [sym__RENAMES] = sym__RENAMES,
  [sym__REPLACING] = sym__REPLACING,
  [sym__REPORT] = sym__REPORT,
  [sym__REPORTING] = sym__REPORTING,
  [sym__REPORTS] = sym__REPORTS,
  [sym__REPORT_FOOTING] = sym__REPORT_FOOTING,
  [sym__REPORT_HEADING] = sym__REPORT_HEADING,
  [sym__REPOSITORY] = sym__REPOSITORY,
  [sym__REQUIRED] = sym__REQUIRED,
  [sym__RESERVE] = sym__RESERVE,
  [sym__RETURN] = sym__RETURN,
  [sym__RETURNING] = sym__RETURNING,
  [sym__REVERSE_FUNC] = sym__REVERSE_FUNC,
  [sym__REVERSE_VIDEO] = sym__REVERSE_VIDEO,
  [sym__REWIND] = sym__REWIND,
  [sym__REWRITE] = sym__REWRITE,
  [sym__RIGHT] = sym__RIGHT,
  [sym__ROLLBACK] = sym__ROLLBACK,
  [sym__ROUNDED] = sym__ROUNDED,
  [sym__RUN] = sym__RUN,
  [sym__SAME] = sym__SAME,
  [sym__SCREEN] = sym__SCREEN,
  [sym__SCREEN_CONTROL] = sym__SCREEN_CONTROL,
  [sym__SCROLL] = sym__SCROLL,
  [sym__SD] = sym__SD,
  [sym__SEARCH] = sym__SEARCH,
  [sym__SECTION] = sym__SECTION,
  [sym__SECURE] = sym__SECURE,
  [sym__SEGMENT_LIMIT] = sym__SEGMENT_LIMIT,
  [sym__SELECT] = sym__SELECT,
  [sym__SEMI_COLON] = sym__SEMI_COLON,
  [sym__SENTENCE] = sym__SENTENCE,
  [sym__SEPARATE] = sym__SEPARATE,
  [sym__SEQUENCE] = sym__SEQUENCE,
  [sym__SEQUENTIAL] = sym__SEQUENTIAL,
  [sym__SET] = sym__SET,
  [sym__SHARING] = sym__SHARING,
  [sym__SIGN] = sym__SIGN,
  [sym__SIGNED] = sym__SIGNED,
  [sym__SIGNED_INT] = sym__SIGNED_INT,
  [sym__SIGNED_LONG] = sym__SIGNED_LONG,
  [sym__SIGNED_SHORT] = sym__SIGNED_SHORT,
  [sym__SIZE] = sym__SIZE,
  [sym__SIZE_ERROR] = sym__SIZE_ERROR,
  [sym__SORT] = sym__SORT,
  [sym__SORT_MERGE] = sym__SORT_MERGE,
  [sym__SOURCE] = sym__SOURCE,
  [sym__SOURCE_COMPUTER] = sym__SOURCE_COMPUTER,
  [anon_sym_space] = anon_sym_space,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_Space] = anon_sym_Space,
  [sym__SPECIAL_NAMES] = sym__SPECIAL_NAMES,
  [sym__STANDARD] = sym__STANDARD,
  [sym__STANDARD_1] = sym__STANDARD_1,
  [sym__STANDARD_2] = sym__STANDARD_2,
  [sym__START] = sym__START,
  [sym__STATUS] = sym__STATUS,
  [sym__STOP] = sym__STOP,
  [sym__STRING] = sym__STRING,
  [sym__SUBSTITUTE_FUNC] = sym__SUBSTITUTE_FUNC,
  [sym__SUBSTITUTE_CASE_FUNC] = sym__SUBSTITUTE_CASE_FUNC,
  [sym__SUBTRACT] = sym__SUBTRACT,
  [sym__SUM] = sym__SUM,
  [sym__SUPPRESS] = sym__SUPPRESS,
  [sym__SYMBOLIC] = sym__SYMBOLIC,
  [sym__SYNCHRONIZED] = sym__SYNCHRONIZED,
  [sym__TALLYING] = sym__TALLYING,
  [sym__TAPE] = sym__TAPE,
  [sym__TERMINATE] = sym__TERMINATE,
  [sym__TEST] = sym__TEST,
  [sym__THAN] = sym__THAN,
  [sym__THEN] = sym__THEN,
  [sym__THRU] = sym__THRU,
  [sym__TIME] = sym__TIME,
  [sym__TIMES] = sym__TIMES,
  [sym__TO] = sym__TO,
  [sym__TOK_FALSE] = sym__TOK_FALSE,
  [sym__TOK_FILE] = sym__TOK_FILE,
  [sym__TOK_INITIAL] = sym__TOK_INITIAL,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_Null] = anon_sym_Null,
  [anon_sym_NULL] = anon_sym_NULL,
  [sym__TOK_TRUE] = sym__TOK_TRUE,
  [sym__TOP] = sym__TOP,
  [sym__TRACKS] = sym__TRACKS,
  [sym__TRAILING] = sym__TRAILING,
  [sym__TRANSFORM] = sym__TRANSFORM,
  [sym__TRIM_FUNCTION] = sym__TRIM_FUNCTION,
  [sym__TYPE] = sym__TYPE,
  [sym__UNDERLINE] = sym__UNDERLINE,
  [sym__UNIT] = sym__UNIT,
  [sym__UNLOCK] = sym__UNLOCK,
  [sym__UNSIGNED] = sym__UNSIGNED,
  [sym__UNSIGNED_INT] = sym__UNSIGNED_INT,
  [sym__UNSIGNED_LONG] = sym__UNSIGNED_LONG,
  [sym__UNSIGNED_SHORT] = sym__UNSIGNED_SHORT,
  [sym__UNSTRING] = sym__UNSTRING,
  [sym__UNTIL] = sym__UNTIL,
  [sym__UP] = sym__UP,
  [sym__UPDATE] = sym__UPDATE,
  [sym__UPON] = sym__UPON,
  [sym__UPON_ARGUMENT_NUMBER] = sym__UPON_ARGUMENT_NUMBER,
  [sym__UPON_COMMAND_LINE] = sym__UPON_COMMAND_LINE,
  [sym__UPON_ENVIRONMENT_NAME] = sym__UPON_ENVIRONMENT_NAME,
  [sym__UPON_ENVIRONMENT_VALUE] = sym__UPON_ENVIRONMENT_VALUE,
  [sym__UPPER_CASE_FUNC] = sym__UPPER_CASE_FUNC,
  [sym__USAGE] = sym__USAGE,
  [sym__USE] = sym__USE,
  [sym__USING] = sym__USING,
  [sym__VALUE] = sym__VALUE,
  [sym__VARYING] = sym__VARYING,
  [sym__WAIT] = sym__WAIT,
  [sym__WHEN] = sym__WHEN,
  [sym__WHEN_COMPILED_FUNC] = sym__WHEN_COMPILED_FUNC,
  [sym__WHEN_OTHER] = sym__WHEN_OTHER,
  [sym__WITH] = sym__WITH,
  [sym__WORDS] = sym__WORDS,
  [sym__WORKING_STORAGE] = sym__WORKING_STORAGE,
  [sym__WRITE] = sym__WRITE,
  [sym__YYYYDDD] = sym__YYYYDDD,
  [sym__YYYYMMDD] = sym__YYYYMMDD,
  [anon_sym_zero] = anon_sym_zero,
  [anon_sym_ZERO] = anon_sym_ZERO,
  [anon_sym_Zero] = anon_sym_Zero,
  [sym_start] = sym_start,
  [sym_program_definition] = sym_program_definition,
  [sym_identification_division] = sym_identification_division,
  [sym_program_name] = sym_program_name,
  [sym_as_literal] = sym_as_literal,
  [sym_data_division] = sym_data_division,
  [sym_working_storage_section] = sym_working_storage_section,
  [sym_data_description] = sym_data_description,
  [sym_entry_name] = sym_entry_name,
  [sym__data_description_clause] = sym__data_description_clause,
  [sym_redefines_clause] = sym_redefines_clause,
  [sym__identifier] = sym__identifier,
  [sym_qualified_word] = sym_qualified_word,
  [sym__in_of] = sym__in_of,
  [sym_subref] = sym_subref,
  [sym_refmod] = sym_refmod,
  [sym__exp_list] = sym__exp_list,
  [sym__exp] = sym__exp,
  [sym__binary_exp] = sym__binary_exp,
  [sym__unary_exp] = sym__unary_exp,
  [sym_positive_exp] = sym_positive_exp,
  [sym_negative_exp] = sym_negative_exp,
  [sym_add_exp] = sym_add_exp,
  [sym_sub_exp] = sym_sub_exp,
  [sym_mul_exp] = sym_mul_exp,
  [sym_div_exp] = sym_div_exp,
  [sym_pow_exp] = sym_pow_exp,
  [sym__arith_x] = sym__arith_x,
  [sym_picture_clause] = sym_picture_clause,
  [sym__picture_string] = sym__picture_string,
  [sym_picture_9] = sym_picture_9,
  [sym_procedure_division] = sym_procedure_division,
  [sym__statement] = sym__statement,
  [sym_stop_run_statement] = sym_stop_run_statement,
  [sym_move_statement] = sym_move_statement,
  [sym__move_body] = sym__move_body,
  [sym__x] = sym__x,
  [aux_sym__target_x_list] = aux_sym__target_x_list,
  [sym__target_x] = sym__target_x,
  [sym__basic_literal] = sym__basic_literal,
  [sym__basic_value] = sym__basic_value,
  [sym__literal] = sym__literal,
  [sym_function_] = sym_function_,
  [sym_func_refmod] = sym_func_refmod,
  [sym__trim_args] = sym__trim_args,
  [sym__e_sep] = sym__e_sep,
  [sym__numvalc_args] = sym__numvalc_args,
  [sym__locale_dt_args] = sym__locale_dt_args,
  [sym_linage_counter] = sym_linage_counter,
  [sym__func_args] = sym__func_args,
  [sym__LITERAL] = sym__LITERAL,
  [sym__string] = sym__string,
  [sym_x_string] = sym_x_string,
  [sym_h_string] = sym_h_string,
  [sym_n_string] = sym_n_string,
  [sym__HIGH_VALUE] = sym__HIGH_VALUE,
  [sym__LOW_VALUE] = sym__LOW_VALUE,
  [sym__QUOTE] = sym__QUOTE,
  [sym__SPACE] = sym__SPACE,
  [sym__TOK_NULL] = sym__TOK_NULL,
  [sym__ZERO] = sym__ZERO,
  [sym_ALL_] = sym_ALL_,
  [sym_CONCATENATE_FUNC_] = sym_CONCATENATE_FUNC_,
  [sym_CURRENT_DATE_FUNC_] = sym_CURRENT_DATE_FUNC_,
  [sym_FUNCTION_NAME_] = sym_FUNCTION_NAME_,
  [sym_HIGH_VALUE_] = sym_HIGH_VALUE_,
  [sym_LENGTH_] = sym_LENGTH_,
  [sym_LOCALE_DT_FUNC_] = sym_LOCALE_DT_FUNC_,
  [sym_LOWER_CASE_FUNC_] = sym_LOWER_CASE_FUNC_,
  [sym_LOW_VALUE_] = sym_LOW_VALUE_,
  [sym_NUMVALC_FUNC_] = sym_NUMVALC_FUNC_,
  [sym_QUOTE_] = sym_QUOTE_,
  [sym_REVERSE_FUNC_] = sym_REVERSE_FUNC_,
  [sym_SPACE_] = sym_SPACE_,
  [sym_SUBSTITUTE_FUNC_] = sym_SUBSTITUTE_FUNC_,
  [sym_SUBSTITUTE_CASE_FUNC_] = sym_SUBSTITUTE_CASE_FUNC_,
  [sym_TOK_NULL_] = sym_TOK_NULL_,
  [sym_TRIM_FUNCTION_] = sym_TRIM_FUNCTION_,
  [sym_UPPER_CASE_FUNC_] = sym_UPPER_CASE_FUNC_,
  [sym_WHEN_COMPILED_FUNC_] = sym_WHEN_COMPILED_FUNC_,
  [sym_ZERO_] = sym_ZERO_,
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
  [aux_sym_working_storage_section_repeat1] = aux_sym_working_storage_section_repeat1,
  [aux_sym_data_description_repeat1] = aux_sym_data_description_repeat1,
  [aux_sym_qualified_word_repeat1] = aux_sym_qualified_word_repeat1,
  [aux_sym__exp_list_repeat1] = aux_sym__exp_list_repeat1,
  [aux_sym_procedure_division_repeat1] = aux_sym_procedure_division_repeat1,
  [aux_sym__basic_literal_repeat1] = aux_sym__basic_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_WORD] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_environment_division] = {
    .visible = true,
    .named = true,
  },
  [sym_file_section] = {
    .visible = true,
    .named = true,
  },
  [sym_level_number] = {
    .visible = true,
    .named = true,
  },
  [sym_level_number_88] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_entry] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym_external_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_global_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_picture_x] = {
    .visible = true,
    .named = true,
  },
  [sym__picture_9_z] = {
    .visible = false,
    .named = true,
  },
  [sym__picture_9_v] = {
    .visible = false,
    .named = true,
  },
  [sym_usage_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sign_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_occurs_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_justified_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_synchronized_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_based_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_value_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_renames_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_any_length_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym_local_storage_section] = {
    .visible = true,
    .named = true,
  },
  [sym_linkage_section] = {
    .visible = true,
    .named = true,
  },
  [sym_report_section] = {
    .visible = true,
    .named = true,
  },
  [sym_screen_section] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_prog] = {
    .visible = true,
    .named = true,
  },
  [sym_end_program] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_x_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_x_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_h_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_h_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_n_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_n_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_n_string_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_n_string_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_n_string_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_n_string_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_n_string_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_n_string_token8] = {
    .visible = false,
    .named = false,
  },
  [sym__ACCEPT] = {
    .visible = false,
    .named = true,
  },
  [sym__ACCESS] = {
    .visible = false,
    .named = true,
  },
  [sym__ADD] = {
    .visible = false,
    .named = true,
  },
  [sym__ADDRESS] = {
    .visible = false,
    .named = true,
  },
  [sym__ADVANCING] = {
    .visible = false,
    .named = true,
  },
  [sym__AFTER] = {
    .visible = false,
    .named = true,
  },
  [sym__ALL] = {
    .visible = false,
    .named = true,
  },
  [sym__ALLOCATE] = {
    .visible = false,
    .named = true,
  },
  [sym__ALPHABET] = {
    .visible = false,
    .named = true,
  },
  [sym__ALPHABETIC] = {
    .visible = false,
    .named = true,
  },
  [sym__ALPHABETIC_LOWER] = {
    .visible = false,
    .named = true,
  },
  [sym__ALPHABETIC_UPPER] = {
    .visible = false,
    .named = true,
  },
  [sym__ALPHANUMERIC] = {
    .visible = false,
    .named = true,
  },
  [sym__ALPHANUMERIC_EDITED] = {
    .visible = false,
    .named = true,
  },
  [sym__ALSO] = {
    .visible = false,
    .named = true,
  },
  [sym__ALTER] = {
    .visible = false,
    .named = true,
  },
  [sym__ALTERNATE] = {
    .visible = false,
    .named = true,
  },
  [sym__AND] = {
    .visible = false,
    .named = true,
  },
  [sym__ANY] = {
    .visible = false,
    .named = true,
  },
  [sym__APPLY] = {
    .visible = false,
    .named = true,
  },
  [sym__ARE] = {
    .visible = false,
    .named = true,
  },
  [sym__AREA] = {
    .visible = false,
    .named = true,
  },
  [sym__ARGUMENT_NUMBER] = {
    .visible = false,
    .named = true,
  },
  [sym__ARGUMENT_VALUE] = {
    .visible = false,
    .named = true,
  },
  [sym__AS] = {
    .visible = false,
    .named = true,
  },
  [sym__ASCENDING] = {
    .visible = false,
    .named = true,
  },
  [sym__ASSIGN] = {
    .visible = false,
    .named = true,
  },
  [sym__AT] = {
    .visible = false,
    .named = true,
  },
  [sym__AUTO] = {
    .visible = false,
    .named = true,
  },
  [sym__AUTOMATIC] = {
    .visible = false,
    .named = true,
  },
  [sym__BACKGROUND_COLOR] = {
    .visible = false,
    .named = true,
  },
  [sym__BASED] = {
    .visible = false,
    .named = true,
  },
  [sym__BEFORE] = {
    .visible = false,
    .named = true,
  },
  [sym__BELL] = {
    .visible = false,
    .named = true,
  },
  [sym__BINARY] = {
    .visible = false,
    .named = true,
  },
  [sym__BINARY_C_LONG] = {
    .visible = false,
    .named = true,
  },
  [sym__BINARY_CHAR] = {
    .visible = false,
    .named = true,
  },
  [sym__BINARY_DOUBLE] = {
    .visible = false,
    .named = true,
  },
  [sym__BINARY_LONG] = {
    .visible = false,
    .named = true,
  },
  [sym__BINARY_SHORT] = {
    .visible = false,
    .named = true,
  },
  [sym__BLANK] = {
    .visible = false,
    .named = true,
  },
  [sym__BLANK_LINE] = {
    .visible = false,
    .named = true,
  },
  [sym__BLANK_SCREEN] = {
    .visible = false,
    .named = true,
  },
  [sym__BLINK] = {
    .visible = false,
    .named = true,
  },
  [sym__BLOCK] = {
    .visible = false,
    .named = true,
  },
  [sym__BOTTOM] = {
    .visible = false,
    .named = true,
  },
  [sym__BY] = {
    .visible = false,
    .named = true,
  },
  [sym__BYTE_LENGTH] = {
    .visible = false,
    .named = true,
  },
  [sym__CALL] = {
    .visible = false,
    .named = true,
  },
  [sym__CANCEL] = {
    .visible = false,
    .named = true,
  },
  [sym__CH] = {
    .visible = false,
    .named = true,
  },
  [sym__CHAINING] = {
    .visible = false,
    .named = true,
  },
  [sym__CHARACTER] = {
    .visible = false,
    .named = true,
  },
  [sym__CHARACTERS] = {
    .visible = false,
    .named = true,
  },
  [sym__CLASS] = {
    .visible = false,
    .named = true,
  },
  [sym__CLASS_NAME] = {
    .visible = false,
    .named = true,
  },
  [sym__CLOSE] = {
    .visible = false,
    .named = true,
  },
  [sym__CLOSE_NOFEED] = {
    .visible = false,
    .named = true,
  },
  [sym__CODE] = {
    .visible = false,
    .named = true,
  },
  [sym__CODE_SET] = {
    .visible = false,
    .named = true,
  },
  [sym__COLLATING] = {
    .visible = false,
    .named = true,
  },
  [sym__COL] = {
    .visible = false,
    .named = true,
  },
  [sym__COLS] = {
    .visible = false,
    .named = true,
  },
  [sym__COLUMN] = {
    .visible = false,
    .named = true,
  },
  [sym__COLUMNS] = {
    .visible = false,
    .named = true,
  },
  [sym__COMMA] = {
    .visible = false,
    .named = true,
  },
  [sym__COMMAND_LINE] = {
    .visible = false,
    .named = true,
  },
  [sym__COMMA_DELIM] = {
    .visible = false,
    .named = true,
  },
  [sym__COMMIT] = {
    .visible = false,
    .named = true,
  },
  [sym__COMMITMENT_CONTROL] = {
    .visible = false,
    .named = true,
  },
  [sym__COMMON] = {
    .visible = false,
    .named = true,
  },
  [sym__COMP] = {
    .visible = false,
    .named = true,
  },
  [sym__COMPUTE] = {
    .visible = false,
    .named = true,
  },
  [sym__COMP_1] = {
    .visible = false,
    .named = true,
  },
  [sym__COMP_2] = {
    .visible = false,
    .named = true,
  },
  [sym__COMP_3] = {
    .visible = false,
    .named = true,
  },
  [sym__COMP_4] = {
    .visible = false,
    .named = true,
  },
  [sym__COMP_5] = {
    .visible = false,
    .named = true,
  },
  [sym__COMP_X] = {
    .visible = false,
    .named = true,
  },
  [sym__CONCATENATE_FUNC] = {
    .visible = false,
    .named = true,
  },
  [sym__CONFIGURATION] = {
    .visible = false,
    .named = true,
  },
  [sym__CONSTANT] = {
    .visible = false,
    .named = true,
  },
  [sym__CONTAINS] = {
    .visible = false,
    .named = true,
  },
  [sym__CONTENT] = {
    .visible = false,
    .named = true,
  },
  [sym__CONTINUE] = {
    .visible = false,
    .named = true,
  },
  [sym__CONTROL] = {
    .visible = false,
    .named = true,
  },
  [sym__CONTROLS] = {
    .visible = false,
    .named = true,
  },
  [sym__CONTROL_FOOTING] = {
    .visible = false,
    .named = true,
  },
  [sym__CONTROL_HEADING] = {
    .visible = false,
    .named = true,
  },
  [sym__CONVERTING] = {
    .visible = false,
    .named = true,
  },
  [sym__CORE_INDEX] = {
    .visible = false,
    .named = true,
  },
  [sym__CORRESPONDING] = {
    .visible = false,
    .named = true,
  },
  [sym__COUNT] = {
    .visible = false,
    .named = true,
  },
  [sym__CRT] = {
    .visible = false,
    .named = true,
  },
  [sym__CURRENCY] = {
    .visible = false,
    .named = true,
  },
  [sym__CURRENT_DATE_FUNC] = {
    .visible = false,
    .named = true,
  },
  [sym__CURSOR] = {
    .visible = false,
    .named = true,
  },
  [sym__CYCLE] = {
    .visible = false,
    .named = true,
  },
  [sym__CYL_OVERFLOW] = {
    .visible = false,
    .named = true,
  },
  [sym__DATA] = {
    .visible = false,
    .named = true,
  },
  [sym__DATE] = {
    .visible = false,
    .named = true,
  },
  [sym__DAY] = {
    .visible = false,
    .named = true,
  },
  [sym__DAY_OF_WEEK] = {
    .visible = false,
    .named = true,
  },
  [sym__DE] = {
    .visible = false,
    .named = true,
  },
  [sym__DEBUGGING] = {
    .visible = false,
    .named = true,
  },
  [sym__DECIMAL_POINT] = {
    .visible = false,
    .named = true,
  },
  [sym__DECLARATIVES] = {
    .visible = false,
    .named = true,
  },
  [sym__DEFAULT] = {
    .visible = false,
    .named = true,
  },
  [sym__DELETE] = {
    .visible = false,
    .named = true,
  },
  [sym__DELIMITED] = {
    .visible = false,
    .named = true,
  },
  [sym__DELIMITER] = {
    .visible = false,
    .named = true,
  },
  [sym__DEPENDING] = {
    .visible = false,
    .named = true,
  },
  [sym__DESCENDING] = {
    .visible = false,
    .named = true,
  },
  [sym__DETAIL] = {
    .visible = false,
    .named = true,
  },
  [sym__DISK] = {
    .visible = false,
    .named = true,
  },
  [sym__DISPLAY] = {
    .visible = false,
    .named = true,
  },
  [sym__DIVIDE] = {
    .visible = false,
    .named = true,
  },
  [sym__DIVISION] = {
    .visible = false,
    .named = true,
  },
  [sym__DOWN] = {
    .visible = false,
    .named = true,
  },
  [sym__DUPLICATES] = {
    .visible = false,
    .named = true,
  },
  [sym__DYNAMIC] = {
    .visible = false,
    .named = true,
  },
  [sym__EBCDIC] = {
    .visible = false,
    .named = true,
  },
  [sym__ELSE] = {
    .visible = false,
    .named = true,
  },
  [sym__END] = {
    .visible = false,
    .named = true,
  },
  [sym__END_ACCEPT] = {
    .visible = false,
    .named = true,
  },
  [sym__END_ADD] = {
    .visible = false,
    .named = true,
  },
  [sym__END_CALL] = {
    .visible = false,
    .named = true,
  },
  [sym__END_COMPUTE] = {
    .visible = false,
    .named = true,
  },
  [sym__END_DELETE] = {
    .visible = false,
    .named = true,
  },
  [sym__END_DISPLAY] = {
    .visible = false,
    .named = true,
  },
  [sym__END_DIVIDE] = {
    .visible = false,
    .named = true,
  },
  [sym__END_EVALUATE] = {
    .visible = false,
    .named = true,
  },
  [sym__END_FUNCTION] = {
    .visible = false,
    .named = true,
  },
  [sym__END_IF] = {
    .visible = false,
    .named = true,
  },
  [sym__END_MULTIPLY] = {
    .visible = false,
    .named = true,
  },
  [sym__END_PERFORM] = {
    .visible = false,
    .named = true,
  },
  [sym__END_PROGRAM] = {
    .visible = false,
    .named = true,
  },
  [sym__END_READ] = {
    .visible = false,
    .named = true,
  },
  [sym__END_RETURN] = {
    .visible = false,
    .named = true,
  },
  [sym__END_REWRITE] = {
    .visible = false,
    .named = true,
  },
  [sym__END_SEARCH] = {
    .visible = false,
    .named = true,
  },
  [sym__END_START] = {
    .visible = false,
    .named = true,
  },
  [sym__END_STRING] = {
    .visible = false,
    .named = true,
  },
  [sym__END_SUBTRACT] = {
    .visible = false,
    .named = true,
  },
  [sym__END_UNSTRING] = {
    .visible = false,
    .named = true,
  },
  [sym__END_WRITE] = {
    .visible = false,
    .named = true,
  },
  [sym__ENTRY] = {
    .visible = false,
    .named = true,
  },
  [sym__ENVIRONMENT] = {
    .visible = false,
    .named = true,
  },
  [sym__ENVIRONMENT_NAME] = {
    .visible = false,
    .named = true,
  },
  [sym__ENVIRONMENT_VALUE] = {
    .visible = false,
    .named = true,
  },
  [sym__EOL] = {
    .visible = false,
    .named = true,
  },
  [sym__EOP] = {
    .visible = false,
    .named = true,
  },
  [sym__EOS] = {
    .visible = false,
    .named = true,
  },
  [sym__EQUAL] = {
    .visible = false,
    .named = true,
  },
  [sym__EQUALS] = {
    .visible = false,
    .named = true,
  },
  [sym__ERASE] = {
    .visible = false,
    .named = true,
  },
  [sym__ERROR] = {
    .visible = false,
    .named = true,
  },
  [sym__ESCAPE] = {
    .visible = false,
    .named = true,
  },
  [sym__EVALUATE] = {
    .visible = false,
    .named = true,
  },
  [sym__EVENT_STATUS] = {
    .visible = false,
    .named = true,
  },
  [sym__EXCEPTION] = {
    .visible = false,
    .named = true,
  },
  [sym__EXCLUSIVE] = {
    .visible = false,
    .named = true,
  },
  [sym__EXIT] = {
    .visible = false,
    .named = true,
  },
  [sym__EXTEND] = {
    .visible = false,
    .named = true,
  },
  [sym__EXTERNAL] = {
    .visible = false,
    .named = true,
  },
  [sym__FD] = {
    .visible = false,
    .named = true,
  },
  [sym__FILE_CONTROL] = {
    .visible = false,
    .named = true,
  },
  [sym__FILE_ID] = {
    .visible = false,
    .named = true,
  },
  [sym__FILLER] = {
    .visible = false,
    .named = true,
  },
  [sym__FINAL] = {
    .visible = false,
    .named = true,
  },
  [sym__FIRST] = {
    .visible = false,
    .named = true,
  },
  [sym__FOOTING] = {
    .visible = false,
    .named = true,
  },
  [sym__FOR] = {
    .visible = false,
    .named = true,
  },
  [sym__FOREGROUND_COLOR] = {
    .visible = false,
    .named = true,
  },
  [sym__FOREVER] = {
    .visible = false,
    .named = true,
  },
  [sym__FORMS_OVERLAY] = {
    .visible = false,
    .named = true,
  },
  [sym__FREE] = {
    .visible = false,
    .named = true,
  },
  [sym__FROM] = {
    .visible = false,
    .named = true,
  },
  [sym__FULL] = {
    .visible = false,
    .named = true,
  },
  [sym__FUNCTION] = {
    .visible = false,
    .named = true,
  },
  [sym__FUNCTION_ID] = {
    .visible = false,
    .named = true,
  },
  [sym__FUNCTION_NAME] = {
    .visible = false,
    .named = true,
  },
  [sym__GE] = {
    .visible = false,
    .named = true,
  },
  [sym__GENERATE] = {
    .visible = false,
    .named = true,
  },
  [sym__GIVING] = {
    .visible = false,
    .named = true,
  },
  [sym__GLOBAL] = {
    .visible = false,
    .named = true,
  },
  [sym__GO] = {
    .visible = false,
    .named = true,
  },
  [sym__GOBACK] = {
    .visible = false,
    .named = true,
  },
  [sym__GREATER] = {
    .visible = false,
    .named = true,
  },
  [sym__GROUP] = {
    .visible = false,
    .named = true,
  },
  [sym__HEADING] = {
    .visible = false,
    .named = true,
  },
  [sym__HIGHLIGHT] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_high_DASHvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_high_DASHValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_high_DASHVALUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_High_DASHvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_High_DASHValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_High_DASHVALUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HIGH_DASHvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HIGH_DASHValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HIGH_DASHVALUE] = {
    .visible = true,
    .named = false,
  },
  [sym__IDENTIFICATION] = {
    .visible = false,
    .named = true,
  },
  [sym__IF] = {
    .visible = false,
    .named = true,
  },
  [sym__IGNORE] = {
    .visible = false,
    .named = true,
  },
  [sym__IGNORING] = {
    .visible = false,
    .named = true,
  },
  [sym__IN] = {
    .visible = false,
    .named = true,
  },
  [sym__INDEX] = {
    .visible = false,
    .named = true,
  },
  [sym__INDEXED] = {
    .visible = false,
    .named = true,
  },
  [sym__INDICATE] = {
    .visible = false,
    .named = true,
  },
  [sym__INITIALIZE] = {
    .visible = false,
    .named = true,
  },
  [sym__INITIALIZED] = {
    .visible = false,
    .named = true,
  },
  [sym__INITIATE] = {
    .visible = false,
    .named = true,
  },
  [sym__INPUT] = {
    .visible = false,
    .named = true,
  },
  [sym__INPUT_OUTPUT] = {
    .visible = false,
    .named = true,
  },
  [sym__INSPECT] = {
    .visible = false,
    .named = true,
  },
  [sym__INTO] = {
    .visible = false,
    .named = true,
  },
  [sym__INTRINSIC] = {
    .visible = false,
    .named = true,
  },
  [sym__INVALID] = {
    .visible = false,
    .named = true,
  },
  [sym__INVALID_KEY] = {
    .visible = false,
    .named = true,
  },
  [sym__IS] = {
    .visible = false,
    .named = true,
  },
  [sym__I_O] = {
    .visible = false,
    .named = true,
  },
  [sym__I_O_CONTROL] = {
    .visible = false,
    .named = true,
  },
  [sym__JUSTIFIED] = {
    .visible = false,
    .named = true,
  },
  [sym__KEY] = {
    .visible = false,
    .named = true,
  },
  [sym__LABEL] = {
    .visible = false,
    .named = true,
  },
  [sym__LAST] = {
    .visible = false,
    .named = true,
  },
  [sym__LAST_DETAIL] = {
    .visible = false,
    .named = true,
  },
  [sym__LE] = {
    .visible = false,
    .named = true,
  },
  [sym__LEADING] = {
    .visible = false,
    .named = true,
  },
  [sym__LEFT] = {
    .visible = false,
    .named = true,
  },
  [sym__LENGTH] = {
    .visible = false,
    .named = true,
  },
  [sym__LESS] = {
    .visible = false,
    .named = true,
  },
  [sym__LEVEL_NUMBER_WORD] = {
    .visible = false,
    .named = true,
  },
  [sym__LEVEL88_NUMBER_WORD] = {
    .visible = false,
    .named = true,
  },
  [sym__LIMIT] = {
    .visible = false,
    .named = true,
  },
  [sym__LIMITS] = {
    .visible = false,
    .named = true,
  },
  [sym__LINAGE] = {
    .visible = false,
    .named = true,
  },
  [sym__LINAGE_COUNTER] = {
    .visible = false,
    .named = true,
  },
  [sym__LINE] = {
    .visible = false,
    .named = true,
  },
  [sym__LINES] = {
    .visible = false,
    .named = true,
  },
  [sym__LINKAGE] = {
    .visible = false,
    .named = true,
  },
  [sym__LOCALE] = {
    .visible = false,
    .named = true,
  },
  [sym__LOCALE_DT_FUNC] = {
    .visible = false,
    .named = true,
  },
  [sym__LOCAL_STORAGE] = {
    .visible = false,
    .named = true,
  },
  [sym__LOCK] = {
    .visible = false,
    .named = true,
  },
  [sym__LOWER_CASE_FUNC] = {
    .visible = false,
    .named = true,
  },
  [sym__LOWLIGHT] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_low_DASHvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_low_DASHValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_low_DASHVALUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Low_DASHvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Low_DASHValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Low_DASHVALUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOW_DASHvalue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOW_DASHValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LOW_DASHVALUE] = {
    .visible = true,
    .named = false,
  },
  [sym__MANUAL] = {
    .visible = false,
    .named = true,
  },
  [sym__MEMORY] = {
    .visible = false,
    .named = true,
  },
  [sym__MERGE] = {
    .visible = false,
    .named = true,
  },
  [sym__MINUS] = {
    .visible = false,
    .named = true,
  },
  [sym__MNEMONIC_NAME] = {
    .visible = false,
    .named = true,
  },
  [sym__MODE] = {
    .visible = false,
    .named = true,
  },
  [sym__MOVE] = {
    .visible = false,
    .named = true,
  },
  [sym__MULTIPLE] = {
    .visible = false,
    .named = true,
  },
  [sym__MULTIPLY] = {
    .visible = false,
    .named = true,
  },
  [sym__NATIONAL] = {
    .visible = false,
    .named = true,
  },
  [sym__NATIONAL_EDITED] = {
    .visible = false,
    .named = true,
  },
  [sym__NATIVE] = {
    .visible = false,
    .named = true,
  },
  [sym__NE] = {
    .visible = false,
    .named = true,
  },
  [sym__NEGATIVE] = {
    .visible = false,
    .named = true,
  },
  [sym__NEXT] = {
    .visible = false,
    .named = true,
  },
  [sym__NEXT_SENTENCE] = {
    .visible = false,
    .named = true,
  },
  [sym__NO] = {
    .visible = false,
    .named = true,
  },
  [sym__NOMINAL] = {
    .visible = false,
    .named = true,
  },
  [sym__NOT] = {
    .visible = false,
    .named = true,
  },
  [sym__NOT_END] = {
    .visible = false,
    .named = true,
  },
  [sym__NOT_EOP] = {
    .visible = false,
    .named = true,
  },
  [sym__NOT_EXCEPTION] = {
    .visible = false,
    .named = true,
  },
  [sym__NOT_INVALID_KEY] = {
    .visible = false,
    .named = true,
  },
  [sym__NOT_OVERFLOW] = {
    .visible = false,
    .named = true,
  },
  [sym__NOT_SIZE_ERROR] = {
    .visible = false,
    .named = true,
  },
  [sym__NO_ADVANCING] = {
    .visible = false,
    .named = true,
  },
  [sym__NUMBER] = {
    .visible = false,
    .named = true,
  },
  [sym__NUMBERS] = {
    .visible = false,
    .named = true,
  },
  [sym__NUMERIC] = {
    .visible = false,
    .named = true,
  },
  [sym__NUMERIC_EDITED] = {
    .visible = false,
    .named = true,
  },
  [sym__NUMVALC_FUNC] = {
    .visible = false,
    .named = true,
  },
  [sym__OBJECT_COMPUTER] = {
    .visible = false,
    .named = true,
  },
  [sym__OCCURS] = {
    .visible = false,
    .named = true,
  },
  [sym__OF] = {
    .visible = false,
    .named = true,
  },
  [sym__OFF] = {
    .visible = false,
    .named = true,
  },
  [sym__OMITTED] = {
    .visible = false,
    .named = true,
  },
  [sym__ON] = {
    .visible = false,
    .named = true,
  },
  [sym__ONLY] = {
    .visible = false,
    .named = true,
  },
  [sym__OPEN] = {
    .visible = false,
    .named = true,
  },
  [sym__OPTIONAL] = {
    .visible = false,
    .named = true,
  },
  [sym__OR] = {
    .visible = false,
    .named = true,
  },
  [sym__ORDER] = {
    .visible = false,
    .named = true,
  },
  [sym__ORGANIZATION] = {
    .visible = false,
    .named = true,
  },
  [sym__OTHER] = {
    .visible = false,
    .named = true,
  },
  [sym__OUTPUT] = {
    .visible = false,
    .named = true,
  },
  [sym__OVERFLOW] = {
    .visible = false,
    .named = true,
  },
  [sym__OVERLINE] = {
    .visible = false,
    .named = true,
  },
  [sym__PACKED_DECIMAL] = {
    .visible = false,
    .named = true,
  },
  [sym__PADDING] = {
    .visible = false,
    .named = true,
  },
  [sym__PAGE] = {
    .visible = false,
    .named = true,
  },
  [sym__PAGE_FOOTING] = {
    .visible = false,
    .named = true,
  },
  [sym__PAGE_HEADING] = {
    .visible = false,
    .named = true,
  },
  [sym__PARAGRAPH] = {
    .visible = false,
    .named = true,
  },
  [sym__PERFORM] = {
    .visible = false,
    .named = true,
  },
  [sym__PIC] = {
    .visible = false,
    .named = true,
  },
  [sym__PICTURE] = {
    .visible = false,
    .named = true,
  },
  [sym__PLUS] = {
    .visible = false,
    .named = true,
  },
  [sym__POINTER] = {
    .visible = false,
    .named = true,
  },
  [sym__POSITION] = {
    .visible = false,
    .named = true,
  },
  [sym__POSITIVE] = {
    .visible = false,
    .named = true,
  },
  [sym__PRESENT] = {
    .visible = false,
    .named = true,
  },
  [sym__PREVIOUS] = {
    .visible = false,
    .named = true,
  },
  [sym__PRINTER] = {
    .visible = false,
    .named = true,
  },
  [sym__PRINTING] = {
    .visible = false,
    .named = true,
  },
  [sym__PROCEDURE] = {
    .visible = false,
    .named = true,
  },
  [sym__PROCEDURES] = {
    .visible = false,
    .named = true,
  },
  [sym__PROCEED] = {
    .visible = false,
    .named = true,
  },
  [sym__PROGRAM] = {
    .visible = false,
    .named = true,
  },
  [sym__PROGRAM_ID] = {
    .visible = false,
    .named = true,
  },
  [sym__PROGRAM_NAME] = {
    .visible = false,
    .named = true,
  },
  [sym__PROGRAM_POINTER] = {
    .visible = false,
    .named = true,
  },
  [sym__PROMPT] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Quote] = {
    .visible = true,
    .named = false,
  },
  [sym__RANDOM] = {
    .visible = false,
    .named = true,
  },
  [sym__RD] = {
    .visible = false,
    .named = true,
  },
  [sym__READ] = {
    .visible = false,
    .named = true,
  },
  [sym__RECORD] = {
    .visible = false,
    .named = true,
  },
  [sym__RECORDING] = {
    .visible = false,
    .named = true,
  },
  [sym__RECORDS] = {
    .visible = false,
    .named = true,
  },
  [sym__RECURSIVE] = {
    .visible = false,
    .named = true,
  },
  [sym__REDEFINES] = {
    .visible = false,
    .named = true,
  },
  [sym__REEL] = {
    .visible = false,
    .named = true,
  },
  [sym__REFERENCE] = {
    .visible = false,
    .named = true,
  },
  [sym__RELATIVE] = {
    .visible = false,
    .named = true,
  },
  [sym__RELEASE] = {
    .visible = false,
    .named = true,
  },
  [sym__REMAINDER] = {
    .visible = false,
    .named = true,
  },
  [sym__REMOVAL] = {
    .visible = false,
    .named = true,
  },
  [sym__RENAMES] = {
    .visible = false,
    .named = true,
  },
  [sym__REPLACING] = {
    .visible = false,
    .named = true,
  },
  [sym__REPORT] = {
    .visible = false,
    .named = true,
  },
  [sym__REPORTING] = {
    .visible = false,
    .named = true,
  },
  [sym__REPORTS] = {
    .visible = false,
    .named = true,
  },
  [sym__REPORT_FOOTING] = {
    .visible = false,
    .named = true,
  },
  [sym__REPORT_HEADING] = {
    .visible = false,
    .named = true,
  },
  [sym__REPOSITORY] = {
    .visible = false,
    .named = true,
  },
  [sym__REQUIRED] = {
    .visible = false,
    .named = true,
  },
  [sym__RESERVE] = {
    .visible = false,
    .named = true,
  },
  [sym__RETURN] = {
    .visible = false,
    .named = true,
  },
  [sym__RETURNING] = {
    .visible = false,
    .named = true,
  },
  [sym__REVERSE_FUNC] = {
    .visible = false,
    .named = true,
  },
  [sym__REVERSE_VIDEO] = {
    .visible = false,
    .named = true,
  },
  [sym__REWIND] = {
    .visible = false,
    .named = true,
  },
  [sym__REWRITE] = {
    .visible = false,
    .named = true,
  },
  [sym__RIGHT] = {
    .visible = false,
    .named = true,
  },
  [sym__ROLLBACK] = {
    .visible = false,
    .named = true,
  },
  [sym__ROUNDED] = {
    .visible = false,
    .named = true,
  },
  [sym__RUN] = {
    .visible = false,
    .named = true,
  },
  [sym__SAME] = {
    .visible = false,
    .named = true,
  },
  [sym__SCREEN] = {
    .visible = false,
    .named = true,
  },
  [sym__SCREEN_CONTROL] = {
    .visible = false,
    .named = true,
  },
  [sym__SCROLL] = {
    .visible = false,
    .named = true,
  },
  [sym__SD] = {
    .visible = false,
    .named = true,
  },
  [sym__SEARCH] = {
    .visible = false,
    .named = true,
  },
  [sym__SECTION] = {
    .visible = false,
    .named = true,
  },
  [sym__SECURE] = {
    .visible = false,
    .named = true,
  },
  [sym__SEGMENT_LIMIT] = {
    .visible = false,
    .named = true,
  },
  [sym__SELECT] = {
    .visible = false,
    .named = true,
  },
  [sym__SEMI_COLON] = {
    .visible = false,
    .named = true,
  },
  [sym__SENTENCE] = {
    .visible = false,
    .named = true,
  },
  [sym__SEPARATE] = {
    .visible = false,
    .named = true,
  },
  [sym__SEQUENCE] = {
    .visible = false,
    .named = true,
  },
  [sym__SEQUENTIAL] = {
    .visible = false,
    .named = true,
  },
  [sym__SET] = {
    .visible = false,
    .named = true,
  },
  [sym__SHARING] = {
    .visible = false,
    .named = true,
  },
  [sym__SIGN] = {
    .visible = false,
    .named = true,
  },
  [sym__SIGNED] = {
    .visible = false,
    .named = true,
  },
  [sym__SIGNED_INT] = {
    .visible = false,
    .named = true,
  },
  [sym__SIGNED_LONG] = {
    .visible = false,
    .named = true,
  },
  [sym__SIGNED_SHORT] = {
    .visible = false,
    .named = true,
  },
  [sym__SIZE] = {
    .visible = false,
    .named = true,
  },
  [sym__SIZE_ERROR] = {
    .visible = false,
    .named = true,
  },
  [sym__SORT] = {
    .visible = false,
    .named = true,
  },
  [sym__SORT_MERGE] = {
    .visible = false,
    .named = true,
  },
  [sym__SOURCE] = {
    .visible = false,
    .named = true,
  },
  [sym__SOURCE_COMPUTER] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_space] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Space] = {
    .visible = true,
    .named = false,
  },
  [sym__SPECIAL_NAMES] = {
    .visible = false,
    .named = true,
  },
  [sym__STANDARD] = {
    .visible = false,
    .named = true,
  },
  [sym__STANDARD_1] = {
    .visible = false,
    .named = true,
  },
  [sym__STANDARD_2] = {
    .visible = false,
    .named = true,
  },
  [sym__START] = {
    .visible = false,
    .named = true,
  },
  [sym__STATUS] = {
    .visible = false,
    .named = true,
  },
  [sym__STOP] = {
    .visible = false,
    .named = true,
  },
  [sym__STRING] = {
    .visible = false,
    .named = true,
  },
  [sym__SUBSTITUTE_FUNC] = {
    .visible = false,
    .named = true,
  },
  [sym__SUBSTITUTE_CASE_FUNC] = {
    .visible = false,
    .named = true,
  },
  [sym__SUBTRACT] = {
    .visible = false,
    .named = true,
  },
  [sym__SUM] = {
    .visible = false,
    .named = true,
  },
  [sym__SUPPRESS] = {
    .visible = false,
    .named = true,
  },
  [sym__SYMBOLIC] = {
    .visible = false,
    .named = true,
  },
  [sym__SYNCHRONIZED] = {
    .visible = false,
    .named = true,
  },
  [sym__TALLYING] = {
    .visible = false,
    .named = true,
  },
  [sym__TAPE] = {
    .visible = false,
    .named = true,
  },
  [sym__TERMINATE] = {
    .visible = false,
    .named = true,
  },
  [sym__TEST] = {
    .visible = false,
    .named = true,
  },
  [sym__THAN] = {
    .visible = false,
    .named = true,
  },
  [sym__THEN] = {
    .visible = false,
    .named = true,
  },
  [sym__THRU] = {
    .visible = false,
    .named = true,
  },
  [sym__TIME] = {
    .visible = false,
    .named = true,
  },
  [sym__TIMES] = {
    .visible = false,
    .named = true,
  },
  [sym__TO] = {
    .visible = false,
    .named = true,
  },
  [sym__TOK_FALSE] = {
    .visible = false,
    .named = true,
  },
  [sym__TOK_FILE] = {
    .visible = false,
    .named = true,
  },
  [sym__TOK_INITIAL] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [sym__TOK_TRUE] = {
    .visible = false,
    .named = true,
  },
  [sym__TOP] = {
    .visible = false,
    .named = true,
  },
  [sym__TRACKS] = {
    .visible = false,
    .named = true,
  },
  [sym__TRAILING] = {
    .visible = false,
    .named = true,
  },
  [sym__TRANSFORM] = {
    .visible = false,
    .named = true,
  },
  [sym__TRIM_FUNCTION] = {
    .visible = false,
    .named = true,
  },
  [sym__TYPE] = {
    .visible = false,
    .named = true,
  },
  [sym__UNDERLINE] = {
    .visible = false,
    .named = true,
  },
  [sym__UNIT] = {
    .visible = false,
    .named = true,
  },
  [sym__UNLOCK] = {
    .visible = false,
    .named = true,
  },
  [sym__UNSIGNED] = {
    .visible = false,
    .named = true,
  },
  [sym__UNSIGNED_INT] = {
    .visible = false,
    .named = true,
  },
  [sym__UNSIGNED_LONG] = {
    .visible = false,
    .named = true,
  },
  [sym__UNSIGNED_SHORT] = {
    .visible = false,
    .named = true,
  },
  [sym__UNSTRING] = {
    .visible = false,
    .named = true,
  },
  [sym__UNTIL] = {
    .visible = false,
    .named = true,
  },
  [sym__UP] = {
    .visible = false,
    .named = true,
  },
  [sym__UPDATE] = {
    .visible = false,
    .named = true,
  },
  [sym__UPON] = {
    .visible = false,
    .named = true,
  },
  [sym__UPON_ARGUMENT_NUMBER] = {
    .visible = false,
    .named = true,
  },
  [sym__UPON_COMMAND_LINE] = {
    .visible = false,
    .named = true,
  },
  [sym__UPON_ENVIRONMENT_NAME] = {
    .visible = false,
    .named = true,
  },
  [sym__UPON_ENVIRONMENT_VALUE] = {
    .visible = false,
    .named = true,
  },
  [sym__UPPER_CASE_FUNC] = {
    .visible = false,
    .named = true,
  },
  [sym__USAGE] = {
    .visible = false,
    .named = true,
  },
  [sym__USE] = {
    .visible = false,
    .named = true,
  },
  [sym__USING] = {
    .visible = false,
    .named = true,
  },
  [sym__VALUE] = {
    .visible = false,
    .named = true,
  },
  [sym__VARYING] = {
    .visible = false,
    .named = true,
  },
  [sym__WAIT] = {
    .visible = false,
    .named = true,
  },
  [sym__WHEN] = {
    .visible = false,
    .named = true,
  },
  [sym__WHEN_COMPILED_FUNC] = {
    .visible = false,
    .named = true,
  },
  [sym__WHEN_OTHER] = {
    .visible = false,
    .named = true,
  },
  [sym__WITH] = {
    .visible = false,
    .named = true,
  },
  [sym__WORDS] = {
    .visible = false,
    .named = true,
  },
  [sym__WORKING_STORAGE] = {
    .visible = false,
    .named = true,
  },
  [sym__WRITE] = {
    .visible = false,
    .named = true,
  },
  [sym__YYYYDDD] = {
    .visible = false,
    .named = true,
  },
  [sym__YYYYMMDD] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_zero] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ZERO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Zero] = {
    .visible = true,
    .named = false,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym_program_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_identification_division] = {
    .visible = true,
    .named = true,
  },
  [sym_program_name] = {
    .visible = true,
    .named = true,
  },
  [sym_as_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_data_division] = {
    .visible = true,
    .named = true,
  },
  [sym_working_storage_section] = {
    .visible = true,
    .named = true,
  },
  [sym_data_description] = {
    .visible = true,
    .named = true,
  },
  [sym_entry_name] = {
    .visible = true,
    .named = true,
  },
  [sym__data_description_clause] = {
    .visible = false,
    .named = true,
  },
  [sym_redefines_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_word] = {
    .visible = true,
    .named = true,
  },
  [sym__in_of] = {
    .visible = false,
    .named = true,
  },
  [sym_subref] = {
    .visible = true,
    .named = true,
  },
  [sym_refmod] = {
    .visible = true,
    .named = true,
  },
  [sym__exp_list] = {
    .visible = false,
    .named = true,
  },
  [sym__exp] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_exp] = {
    .visible = false,
    .named = true,
  },
  [sym__unary_exp] = {
    .visible = false,
    .named = true,
  },
  [sym_positive_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_add_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_sub_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_mul_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_div_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_pow_exp] = {
    .visible = true,
    .named = true,
  },
  [sym__arith_x] = {
    .visible = false,
    .named = true,
  },
  [sym_picture_clause] = {
    .visible = true,
    .named = true,
  },
  [sym__picture_string] = {
    .visible = false,
    .named = true,
  },
  [sym_picture_9] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_division] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_stop_run_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_move_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__move_body] = {
    .visible = false,
    .named = true,
  },
  [sym__x] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__target_x_list] = {
    .visible = false,
    .named = false,
  },
  [sym__target_x] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_literal] = {
    .visible = false,
    .named = true,
  },
  [sym__basic_value] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_function_] = {
    .visible = true,
    .named = true,
  },
  [sym_func_refmod] = {
    .visible = true,
    .named = true,
  },
  [sym__trim_args] = {
    .visible = false,
    .named = true,
  },
  [sym__e_sep] = {
    .visible = false,
    .named = true,
  },
  [sym__numvalc_args] = {
    .visible = false,
    .named = true,
  },
  [sym__locale_dt_args] = {
    .visible = false,
    .named = true,
  },
  [sym_linage_counter] = {
    .visible = true,
    .named = true,
  },
  [sym__func_args] = {
    .visible = false,
    .named = true,
  },
  [sym__LITERAL] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_x_string] = {
    .visible = true,
    .named = true,
  },
  [sym_h_string] = {
    .visible = true,
    .named = true,
  },
  [sym_n_string] = {
    .visible = true,
    .named = true,
  },
  [sym__HIGH_VALUE] = {
    .visible = false,
    .named = true,
  },
  [sym__LOW_VALUE] = {
    .visible = false,
    .named = true,
  },
  [sym__QUOTE] = {
    .visible = false,
    .named = true,
  },
  [sym__SPACE] = {
    .visible = false,
    .named = true,
  },
  [sym__TOK_NULL] = {
    .visible = false,
    .named = true,
  },
  [sym__ZERO] = {
    .visible = false,
    .named = true,
  },
  [sym_ALL_] = {
    .visible = true,
    .named = true,
  },
  [sym_CONCATENATE_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_CURRENT_DATE_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_FUNCTION_NAME_] = {
    .visible = true,
    .named = true,
  },
  [sym_HIGH_VALUE_] = {
    .visible = true,
    .named = true,
  },
  [sym_LENGTH_] = {
    .visible = true,
    .named = true,
  },
  [sym_LOCALE_DT_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_LOWER_CASE_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_LOW_VALUE_] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMVALC_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_QUOTE_] = {
    .visible = true,
    .named = true,
  },
  [sym_REVERSE_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_SPACE_] = {
    .visible = true,
    .named = true,
  },
  [sym_SUBSTITUTE_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_SUBSTITUTE_CASE_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_TOK_NULL_] = {
    .visible = true,
    .named = true,
  },
  [sym_TRIM_FUNCTION_] = {
    .visible = true,
    .named = true,
  },
  [sym_UPPER_CASE_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_WHEN_COMPILED_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_ZERO_] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_start_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_working_storage_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_description_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_word_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__exp_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_procedure_division_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__basic_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_dst = 1,
  field_left = 2,
  field_right = 3,
  field_src = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_dst] = "dst",
  [field_left] = "left",
  [field_right] = "right",
  [field_src] = "src",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_dst, 1, .inherited = true},
    {field_src, 1, .inherited = true},
  [2] =
    {field_dst, 2},
    {field_src, 0},
  [4] =
    {field_dst, 3},
    {field_src, 1},
  [6] =
    {field_value, 1},
  [7] =
    {field_left, 0},
    {field_right, 2},
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
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 4,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 12,
  [17] = 17,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
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
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 37,
  [58] = 38,
  [59] = 39,
  [60] = 60,
  [61] = 61,
  [62] = 42,
  [63] = 63,
  [64] = 41,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 43,
  [72] = 72,
  [73] = 44,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 80,
  [86] = 80,
  [87] = 52,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 46,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 47,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 39,
  [119] = 119,
  [120] = 120,
  [121] = 38,
  [122] = 37,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 42,
  [136] = 129,
  [137] = 129,
  [138] = 138,
  [139] = 139,
  [140] = 41,
  [141] = 141,
  [142] = 142,
  [143] = 43,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 44,
  [162] = 162,
  [163] = 163,
  [164] = 52,
  [165] = 47,
  [166] = 166,
  [167] = 46,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 235,
  [245] = 241,
  [246] = 220,
  [247] = 247,
  [248] = 235,
  [249] = 241,
  [250] = 220,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(154);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(190);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '8') ADVANCE(191);
      if (lookahead == '9') ADVANCE(176);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == 'H') ADVANCE(217);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == 'S') ADVANCE(296);
      if (lookahead == '^') ADVANCE(170);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(233);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(314);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(325);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(320);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(171);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == 'H') ADVANCE(217);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == 'H') ADVANCE(217);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(217);
      if (lookahead == 'N') ADVANCE(218);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(190);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '^') ADVANCE(170);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == '^') ADVANCE(170);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(321);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(161);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '+') ADVANCE(163);
      if (lookahead == '-') ADVANCE(165);
      if (lookahead == '/') ADVANCE(168);
      if (lookahead == '9') ADVANCE(178);
      if (lookahead == ':') ADVANCE(162);
      if (lookahead == 'S') ADVANCE(111);
      if (lookahead == '^') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 's') ADVANCE(40);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(142);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(133);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(143);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(108);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(110);
      END_STATE();
    case 27:
      if (lookahead == '8') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(251);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 28:
      if (lookahead == '8') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 29:
      if (lookahead == '9') ADVANCE(179);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(92);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(93);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(96);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(97);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(58);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(188);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 97:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 109:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 111:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 116:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 117:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 121:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 124:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 125:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 126:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 127:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 128:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(130)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 137:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(325);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(137)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(210);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 145:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '(') ADVANCE(160);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_file_section);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_level_number);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_level_number);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '9') ADVANCE(177);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(29);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(193);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_level_number);
      if (lookahead == '.') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == '(') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__picture_9_z);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__picture_9_z);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(174);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '9') ADVANCE(158);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(29);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(159);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '9') ADVANCE(177);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(29);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == '9') ADVANCE(178);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(29);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(174);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == '9') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '9') ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '9') ADVANCE(178);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(29);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(174);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_local_storage_section);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_local_storage_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_linkage_section);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_linkage_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_report_section);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_report_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_screen_section);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_screen_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '8') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_x_string_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_x_string_token2);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_h_string_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_h_string_token2);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_n_string_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_n_string_token2);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_n_string_token3);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_n_string_token4);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_n_string_token5);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_n_string_token6);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_n_string_token7);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_n_string_token8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__COMMA_DELIM);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__COMMA_DELIM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__IN);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__IS);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__IS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__OF);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__PROCEDURE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__PROCEDURE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__SEMI_COLON);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__SEMI_COLON);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(219);
      if (lookahead == 'D') ADVANCE(220);
      if (lookahead == 'X') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '-') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '-') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '-') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'g') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'g') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'p') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(328);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(294);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(294);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(326);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(331);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__WORKING_STORAGE);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'H') ADVANCE(1);
      if (lookahead == 'L') ADVANCE(2);
      if (lookahead == 'N') ADVANCE(3);
      if (lookahead == 'Q') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == 'Z') ADVANCE(7);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(10);
      if (lookahead == 'q') ADVANCE(11);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == 'z') ADVANCE(14);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(15);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(16);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(17);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(20);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(22);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(23);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(24);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(29);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == 'U') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(41);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == 'U') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == 'P') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(61);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 7:
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == 'I') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'U') ADVANCE(72);
      if (lookahead == 'u') ADVANCE(73);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(43);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == 'P') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(76);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(50);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(51);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(52);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(53);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(54);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(55);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(59);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(61);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(62);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(64);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(65);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(79);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(80);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(81);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(82);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(84);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(86);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(89);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(90);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(92);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(94);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(96);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(97);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(99);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(100);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(102);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(106);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(110);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(112);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(115);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(116);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(117);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(125);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(129);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(130);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(131);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 23:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(140);
      END_STATE();
    case 26:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(141);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(143);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(144);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(145);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(148);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(149);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(150);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(158);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(159);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 29:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(168);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 32:
      if (lookahead == 'G') ADVANCE(170);
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 33:
      if (lookahead == 'G') ADVANCE(171);
      if (lookahead == 'g') ADVANCE(172);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(173);
      END_STATE();
    case 35:
      if (lookahead == 'W') ADVANCE(174);
      if (lookahead == 'w') ADVANCE(175);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 36:
      if (lookahead == 'W') ADVANCE(175);
      if (lookahead == 'w') ADVANCE(177);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 37:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(179);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__LE);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(181);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(183);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(184);
      END_STATE();
    case 39:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(185);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(187);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__NE);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(191);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(192);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__NO);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(196);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(197);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(198);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 49:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(201);
      END_STATE();
    case 50:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__SD);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(205);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(206);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(208);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(209);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(210);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 54:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(213);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(215);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(216);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(217);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 57:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(219);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(220);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 58:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(222);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      END_STATE();
    case 59:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(225);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(226);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(227);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(228);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 62:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__TO);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(235);
      END_STATE();
    case 65:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(236);
      END_STATE();
    case 66:
      if (lookahead == 'R') ADVANCE(237);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(238);
      END_STATE();
    case 68:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(171);
      if (lookahead == 'g') ADVANCE(239);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(175);
      END_STATE();
    case 71:
      if (lookahead == 'W') ADVANCE(175);
      if (lookahead == 'w') ADVANCE(240);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 72:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(243);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__TO);
      if (lookahead == 'd') ADVANCE(244);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(246);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(248);
      END_STATE();
    case 81:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(249);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(250);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(251);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(254);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(255);
      END_STATE();
    case 84:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(256);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(258);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__AS);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(259);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__AT);
      END_STATE();
    case 88:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(263);
      END_STATE();
    case 90:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(264);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(267);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(268);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 93:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(270);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__BY);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(271);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(272);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__CH);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(274);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(275);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(276);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(277);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(279);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(280);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(282);
      END_STATE();
    case 99:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(283);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(285);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(286);
      END_STATE();
    case 102:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(287);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(288);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__DE);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(290);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(291);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(292);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(293);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(294);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(295);
      END_STATE();
    case 104:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(297);
      END_STATE();
    case 105:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(298);
      END_STATE();
    case 106:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(300);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(301);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(303);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(304);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(305);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(306);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(307);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(308);
      END_STATE();
    case 112:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(310);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(312);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(313);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(315);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__FD);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(320);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(321);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(322);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(326);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__GE);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(328);
      END_STATE();
    case 124:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(329);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__GO);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(331);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(333);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__IF);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(336);
      END_STATE();
    case 132:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(337);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(338);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(339);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(340);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(341);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(342);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      END_STATE();
    case 134:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(344);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(345);
      END_STATE();
    case 136:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(346);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(348);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(350);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(351);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 141:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(353);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(354);
      END_STATE();
    case 143:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(355);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__ON);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(357);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(358);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(359);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__OR);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(360);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(361);
      END_STATE();
    case 148:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(362);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(363);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(365);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(366);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(367);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 152:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(370);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(371);
      END_STATE();
    case 155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(373);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(374);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(375);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(376);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__RD);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(378);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(380);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(381);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(382);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(384);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(385);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(386);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(387);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(388);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(389);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(390);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(391);
      END_STATE();
    case 160:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(392);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(393);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(394);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(395);
      END_STATE();
    case 163:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(396);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(397);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(398);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(399);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__UP);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(401);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(402);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(403);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(404);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(405);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(406);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(407);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(408);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(409);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 169:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(411);
      END_STATE();
    case 170:
      if (lookahead == 'H') ADVANCE(412);
      if (lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 171:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(413);
      END_STATE();
    case 172:
      if (lookahead == 'H') ADVANCE(413);
      if (lookahead == 'h') ADVANCE(414);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(415);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(416);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 176:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(419);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(420);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(421);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(423);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(424);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      END_STATE();
    case 182:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(426);
      END_STATE();
    case 183:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(427);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(429);
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(430);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(431);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(432);
      END_STATE();
    case 187:
      if (lookahead == 'L') ADVANCE(433);
      END_STATE();
    case 188:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(434);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(436);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(437);
      END_STATE();
    case 190:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(438);
      END_STATE();
    case 191:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(439);
      END_STATE();
    case 192:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(440);
      END_STATE();
    case 193:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 194:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(442);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__NOT);
      if (lookahead == '-') ADVANCE(443);
      END_STATE();
    case 196:
      if (lookahead == 'T') ADVANCE(444);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(445);
      END_STATE();
    case 198:
      if (lookahead == 'C') ADVANCE(446);
      END_STATE();
    case 199:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(447);
      END_STATE();
    case 200:
      if (lookahead == 'c') ADVANCE(448);
      END_STATE();
    case 201:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(451);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      END_STATE();
    case 204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(453);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(454);
      END_STATE();
    case 205:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(455);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(456);
      END_STATE();
    case 207:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(457);
      END_STATE();
    case 208:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 209:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(459);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__SET);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(460);
      END_STATE();
    case 212:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(461);
      END_STATE();
    case 213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(462);
      END_STATE();
    case 214:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 216:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(466);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      END_STATE();
    case 217:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(468);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(469);
      END_STATE();
    case 219:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(470);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__SUM);
      END_STATE();
    case 221:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(472);
      END_STATE();
    case 222:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(473);
      END_STATE();
    case 223:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(474);
      END_STATE();
    case 224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(475);
      END_STATE();
    case 225:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 226:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(477);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      END_STATE();
    case 228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(479);
      END_STATE();
    case 229:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(480);
      END_STATE();
    case 230:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(481);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(482);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__TOP);
      END_STATE();
    case 233:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(483);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(484);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(485);
      END_STATE();
    case 234:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(486);
      END_STATE();
    case 235:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 237:
      if (lookahead == 'O') ADVANCE(489);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 239:
      if (lookahead == 'H') ADVANCE(413);
      if (lookahead == 'h') ADVANCE(491);
      END_STATE();
    case 240:
      if (lookahead == '-') ADVANCE(492);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      END_STATE();
    case 241:
      if (lookahead == 'l') ADVANCE(493);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(494);
      END_STATE();
    case 243:
      if (lookahead == 'c') ADVANCE(495);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(496);
      END_STATE();
    case 245:
      if (lookahead == 'o') ADVANCE(497);
      END_STATE();
    case 246:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(498);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__ADD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(499);
      END_STATE();
    case 248:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(500);
      END_STATE();
    case 249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(501);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__ALL);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 251:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(503);
      END_STATE();
    case 252:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(504);
      END_STATE();
    case 253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__AND);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__ANY);
      END_STATE();
    case 256:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__ARE);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      END_STATE();
    case 258:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(508);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 260:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 261:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 262:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(512);
      END_STATE();
    case 263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 264:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 265:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(515);
      END_STATE();
    case 266:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(516);
      END_STATE();
    case 267:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(517);
      END_STATE();
    case 268:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(518);
      END_STATE();
    case 269:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(519);
      END_STATE();
    case 270:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(520);
      END_STATE();
    case 271:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 272:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(522);
      END_STATE();
    case 273:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 274:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(525);
      END_STATE();
    case 275:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(526);
      END_STATE();
    case 276:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(527);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(528);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__COL);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(529);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(531);
      END_STATE();
    case 279:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(532);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(533);
      END_STATE();
    case 280:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(534);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(535);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(536);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(537);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(538);
      END_STATE();
    case 281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(540);
      END_STATE();
    case 282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(541);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__CRT);
      END_STATE();
    case 284:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(542);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(543);
      END_STATE();
    case 285:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      END_STATE();
    case 286:
      if (lookahead == '-') ADVANCE(545);
      END_STATE();
    case 287:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(546);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(547);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__DAY);
      if (lookahead == '-') ADVANCE(548);
      END_STATE();
    case 289:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(549);
      END_STATE();
    case 290:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(551);
      END_STATE();
    case 291:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(552);
      END_STATE();
    case 292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(555);
      END_STATE();
    case 294:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(556);
      END_STATE();
    case 295:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      END_STATE();
    case 296:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(558);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(559);
      END_STATE();
    case 297:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      END_STATE();
    case 298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(561);
      END_STATE();
    case 299:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(562);
      END_STATE();
    case 300:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      END_STATE();
    case 301:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(564);
      END_STATE();
    case 302:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__END);
      if (lookahead == '-') ADVANCE(566);
      END_STATE();
    case 304:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      END_STATE();
    case 305:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(568);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__EOL);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__EOP);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__EOS);
      END_STATE();
    case 309:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      END_STATE();
    case 310:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(570);
      END_STATE();
    case 311:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(571);
      END_STATE();
    case 312:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(572);
      END_STATE();
    case 313:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      END_STATE();
    case 314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(574);
      END_STATE();
    case 315:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      END_STATE();
    case 316:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(577);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 318:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(579);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(580);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(581);
      END_STATE();
    case 320:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(582);
      END_STATE();
    case 321:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      END_STATE();
    case 322:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(584);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__FOR);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(586);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      END_STATE();
    case 325:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(588);
      END_STATE();
    case 326:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(589);
      END_STATE();
    case 327:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(590);
      END_STATE();
    case 328:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 329:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(592);
      END_STATE();
    case 330:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(593);
      END_STATE();
    case 331:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(594);
      END_STATE();
    case 332:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(595);
      END_STATE();
    case 333:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(596);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__I_O);
      if (lookahead == '-') ADVANCE(597);
      END_STATE();
    case 335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(598);
      END_STATE();
    case 336:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(599);
      END_STATE();
    case 337:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(601);
      END_STATE();
    case 338:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(602);
      END_STATE();
    case 339:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(603);
      END_STATE();
    case 340:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(604);
      END_STATE();
    case 341:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(605);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(606);
      END_STATE();
    case 342:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(607);
      END_STATE();
    case 343:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(608);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__KEY);
      END_STATE();
    case 345:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(609);
      END_STATE();
    case 346:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(610);
      END_STATE();
    case 347:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(611);
      END_STATE();
    case 348:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(612);
      END_STATE();
    case 349:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(613);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(614);
      END_STATE();
    case 351:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(615);
      END_STATE();
    case 352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(616);
      END_STATE();
    case 353:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(617);
      END_STATE();
    case 354:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(618);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__OFF);
      END_STATE();
    case 356:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(619);
      END_STATE();
    case 357:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(620);
      END_STATE();
    case 358:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(621);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(622);
      END_STATE();
    case 360:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      END_STATE();
    case 361:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(624);
      END_STATE();
    case 362:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(625);
      END_STATE();
    case 363:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(626);
      END_STATE();
    case 364:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(627);
      END_STATE();
    case 365:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(628);
      END_STATE();
    case 366:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(629);
      END_STATE();
    case 367:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(630);
      END_STATE();
    case 368:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(631);
      END_STATE();
    case 369:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(632);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__PIC);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(633);
      END_STATE();
    case 371:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(634);
      END_STATE();
    case 372:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(635);
      END_STATE();
    case 373:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(636);
      END_STATE();
    case 374:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(638);
      END_STATE();
    case 375:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 376:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(640);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(641);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(642);
      END_STATE();
    case 377:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(643);
      END_STATE();
    case 378:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(644);
      END_STATE();
    case 379:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(646);
      END_STATE();
    case 380:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      END_STATE();
    case 381:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(648);
      END_STATE();
    case 382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 383:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(650);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 384:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(653);
      END_STATE();
    case 385:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 386:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(655);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(656);
      END_STATE();
    case 387:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(657);
      END_STATE();
    case 388:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(658);
      END_STATE();
    case 389:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(659);
      END_STATE();
    case 390:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 391:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(661);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(662);
      END_STATE();
    case 392:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(663);
      END_STATE();
    case 393:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(664);
      END_STATE();
    case 394:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__RUN);
      END_STATE();
    case 396:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 397:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(667);
      END_STATE();
    case 398:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      END_STATE();
    case 399:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(669);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(670);
      END_STATE();
    case 400:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(671);
      END_STATE();
    case 401:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(672);
      END_STATE();
    case 402:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(673);
      END_STATE();
    case 403:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(674);
      END_STATE();
    case 404:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(675);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__USE);
      END_STATE();
    case 406:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(676);
      END_STATE();
    case 407:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(677);
      END_STATE();
    case 408:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(678);
      END_STATE();
    case 409:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(679);
      END_STATE();
    case 410:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      END_STATE();
    case 411:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(681);
      END_STATE();
    case 412:
      if (lookahead == '-') ADVANCE(682);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(683);
      END_STATE();
    case 413:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(683);
      END_STATE();
    case 414:
      if (lookahead == '-') ADVANCE(684);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(683);
      END_STATE();
    case 415:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(685);
      END_STATE();
    case 416:
      if (lookahead == 'V') ADVANCE(686);
      if (lookahead == 'v') ADVANCE(687);
      END_STATE();
    case 417:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(688);
      END_STATE();
    case 418:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 419:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(690);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__LOCK);
      END_STATE();
    case 421:
      if (lookahead == 'V') ADVANCE(691);
      if (lookahead == 'v') ADVANCE(692);
      END_STATE();
    case 422:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(693);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__LAST);
      if (lookahead == '-') ADVANCE(694);
      END_STATE();
    case 424:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__LEFT);
      END_STATE();
    case 426:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__LESS);
      END_STATE();
    case 428:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 429:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(698);
      END_STATE();
    case 430:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(699);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__LINE);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(700);
      END_STATE();
    case 432:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(701);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 434:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(702);
      END_STATE();
    case 435:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(703);
      END_STATE();
    case 436:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_Null);
      END_STATE();
    case 438:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(705);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(706);
      END_STATE();
    case 439:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(707);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__NEXT);
      if (lookahead == '-') ADVANCE(708);
      END_STATE();
    case 441:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(709);
      END_STATE();
    case 442:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(710);
      END_STATE();
    case 443:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(711);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(712);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(713);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(714);
      END_STATE();
    case 444:
      if (lookahead == 'E') ADVANCE(715);
      END_STATE();
    case 445:
      if (lookahead == 'e') ADVANCE(716);
      END_STATE();
    case 446:
      if (lookahead == 'E') ADVANCE(717);
      END_STATE();
    case 447:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(718);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(719);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__SAME);
      END_STATE();
    case 450:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(720);
      END_STATE();
    case 451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(721);
      END_STATE();
    case 452:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(722);
      END_STATE();
    case 453:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 454:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(724);
      END_STATE();
    case 455:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 456:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(726);
      END_STATE();
    case 457:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(727);
      END_STATE();
    case 458:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      END_STATE();
    case 459:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(729);
      END_STATE();
    case 460:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(730);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__SIGN);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__SIZE);
      if (lookahead == '-') ADVANCE(732);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__SORT);
      if (lookahead == '-') ADVANCE(733);
      END_STATE();
    case 464:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(734);
      END_STATE();
    case 465:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(735);
      END_STATE();
    case 466:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(736);
      END_STATE();
    case 467:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(737);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__STOP);
      END_STATE();
    case 469:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(738);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(739);
      END_STATE();
    case 471:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(740);
      END_STATE();
    case 472:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(741);
      END_STATE();
    case 473:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      END_STATE();
    case 474:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(743);
      END_STATE();
    case 475:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(744);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__TAPE);
      END_STATE();
    case 477:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__TEST);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__THAN);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__THEN);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__THRU);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__TIME);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(746);
      END_STATE();
    case 483:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(747);
      END_STATE();
    case 484:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(748);
      END_STATE();
    case 485:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(749);
      END_STATE();
    case 486:
      if (lookahead == '-') ADVANCE(750);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__TOK_TRUE);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__TYPE);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_ZERO);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_Zero);
      END_STATE();
    case 491:
      if (lookahead == '-') ADVANCE(751);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(683);
      END_STATE();
    case 492:
      if (lookahead == 'V') ADVANCE(752);
      if (lookahead == 'v') ADVANCE(753);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 494:
      if (lookahead == 'e') ADVANCE(754);
      END_STATE();
    case 495:
      if (lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 496:
      if (lookahead == '_') ADVANCE(756);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_zero);
      END_STATE();
    case 498:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(757);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(758);
      END_STATE();
    case 499:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(759);
      END_STATE();
    case 500:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(760);
      END_STATE();
    case 501:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(761);
      END_STATE();
    case 502:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(762);
      END_STATE();
    case 503:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(763);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__ALSO);
      END_STATE();
    case 505:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(764);
      END_STATE();
    case 506:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(765);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__AREA);
      END_STATE();
    case 508:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(766);
      END_STATE();
    case 509:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(767);
      END_STATE();
    case 510:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(768);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__AUTO);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(769);
      END_STATE();
    case 512:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(770);
      END_STATE();
    case 513:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(771);
      END_STATE();
    case 514:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(772);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__BELL);
      END_STATE();
    case 516:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(773);
      END_STATE();
    case 517:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(774);
      END_STATE();
    case 518:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(775);
      END_STATE();
    case 519:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(776);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(777);
      END_STATE();
    case 521:
      if (lookahead == '-') ADVANCE(778);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__CALL);
      END_STATE();
    case 523:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      END_STATE();
    case 524:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(780);
      END_STATE();
    case 525:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(781);
      END_STATE();
    case 526:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(782);
      END_STATE();
    case 527:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(783);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__CODE);
      if (lookahead == '-') ADVANCE(784);
      END_STATE();
    case 529:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(785);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__COLS);
      END_STATE();
    case 531:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(786);
      END_STATE();
    case 532:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(787);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(788);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(789);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__COMP);
      if (lookahead == '-') ADVANCE(790);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(791);
      END_STATE();
    case 534:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(792);
      END_STATE();
    case 535:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
      END_STATE();
    case 536:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(794);
      END_STATE();
    case 537:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(795);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(796);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(797);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(798);
      END_STATE();
    case 538:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      END_STATE();
    case 539:
      if (lookahead == '-') ADVANCE(800);
      END_STATE();
    case 540:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(801);
      END_STATE();
    case 541:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(802);
      END_STATE();
    case 542:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(803);
      END_STATE();
    case 543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(804);
      END_STATE();
    case 544:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 545:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(806);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__DATA);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__DATE);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(807);
      END_STATE();
    case 549:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(808);
      END_STATE();
    case 550:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(809);
      END_STATE();
    case 551:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(810);
      END_STATE();
    case 552:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(811);
      END_STATE();
    case 553:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      END_STATE();
    case 554:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(813);
      END_STATE();
    case 555:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(814);
      END_STATE();
    case 556:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(815);
      END_STATE();
    case 557:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(816);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__DISK);
      END_STATE();
    case 559:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(817);
      END_STATE();
    case 560:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(818);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(819);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__DOWN);
      END_STATE();
    case 562:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(820);
      END_STATE();
    case 563:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(821);
      END_STATE();
    case 564:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(822);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__ELSE);
      END_STATE();
    case 566:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(823);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(824);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(825);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(826);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(827);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(828);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(829);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(830);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(831);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(832);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(833);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(834);
      END_STATE();
    case 567:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(835);
      END_STATE();
    case 568:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(836);
      END_STATE();
    case 569:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(837);
      END_STATE();
    case 570:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(838);
      END_STATE();
    case 571:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(839);
      END_STATE();
    case 572:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(840);
      END_STATE();
    case 573:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(841);
      END_STATE();
    case 574:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(842);
      END_STATE();
    case 575:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(843);
      END_STATE();
    case 576:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(844);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__EXIT);
      END_STATE();
    case 578:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(845);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(846);
      END_STATE();
    case 579:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__TOK_FILE);
      if (lookahead == '-') ADVANCE(848);
      END_STATE();
    case 581:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 582:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(850);
      END_STATE();
    case 583:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(851);
      END_STATE();
    case 584:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(852);
      END_STATE();
    case 585:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(853);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(854);
      END_STATE();
    case 586:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(855);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__FREE);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__FROM);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__FULL);
      END_STATE();
    case 590:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(856);
      END_STATE();
    case 591:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(857);
      END_STATE();
    case 592:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(858);
      END_STATE();
    case 593:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(859);
      END_STATE();
    case 594:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(860);
      END_STATE();
    case 595:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(861);
      END_STATE();
    case 596:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(862);
      END_STATE();
    case 597:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(863);
      END_STATE();
    case 598:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(864);
      END_STATE();
    case 599:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(865);
      END_STATE();
    case 600:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(866);
      END_STATE();
    case 601:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(867);
      END_STATE();
    case 602:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(868);
      END_STATE();
    case 603:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(869);
      END_STATE();
    case 604:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(870);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__INTO);
      END_STATE();
    case 606:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(871);
      END_STATE();
    case 607:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(872);
      END_STATE();
    case 608:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(873);
      END_STATE();
    case 609:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(874);
      END_STATE();
    case 610:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(875);
      END_STATE();
    case 611:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 612:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(877);
      END_STATE();
    case 613:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(878);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__MODE);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__MOVE);
      END_STATE();
    case 616:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(879);
      END_STATE();
    case 617:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(880);
      END_STATE();
    case 618:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(881);
      END_STATE();
    case 619:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(882);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__ONLY);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__OPEN);
      END_STATE();
    case 622:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(883);
      END_STATE();
    case 623:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(884);
      END_STATE();
    case 624:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(885);
      END_STATE();
    case 625:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(886);
      END_STATE();
    case 626:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(887);
      END_STATE();
    case 627:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(888);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(889);
      END_STATE();
    case 628:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(890);
      END_STATE();
    case 629:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(891);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__PAGE);
      if (lookahead == '-') ADVANCE(892);
      END_STATE();
    case 631:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(893);
      END_STATE();
    case 632:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(894);
      END_STATE();
    case 633:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(895);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__PLUS);
      END_STATE();
    case 635:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(896);
      END_STATE();
    case 636:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(897);
      END_STATE();
    case 637:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      END_STATE();
    case 638:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(899);
      END_STATE();
    case 639:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(900);
      END_STATE();
    case 640:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(901);
      END_STATE();
    case 641:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(902);
      END_STATE();
    case 642:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(903);
      END_STATE();
    case 643:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(904);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__READ);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(905);
      END_STATE();
    case 646:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(906);
      END_STATE();
    case 647:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(907);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__REEL);
      END_STATE();
    case 649:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(908);
      END_STATE();
    case 650:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(909);
      END_STATE();
    case 651:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(910);
      END_STATE();
    case 652:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(911);
      END_STATE();
    case 653:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(912);
      END_STATE();
    case 654:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(913);
      END_STATE();
    case 655:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(914);
      END_STATE();
    case 656:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(916);
      END_STATE();
    case 657:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(917);
      END_STATE();
    case 658:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(918);
      END_STATE();
    case 659:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(919);
      END_STATE();
    case 660:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(920);
      END_STATE();
    case 661:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(921);
      END_STATE();
    case 662:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(922);
      END_STATE();
    case 663:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(923);
      END_STATE();
    case 664:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(924);
      END_STATE();
    case 665:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(925);
      END_STATE();
    case 666:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(926);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__UNIT);
      END_STATE();
    case 668:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(927);
      END_STATE();
    case 669:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(928);
      END_STATE();
    case 670:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(929);
      END_STATE();
    case 671:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(930);
      END_STATE();
    case 672:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(931);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__UPON);
      if (lookahead == '-') ADVANCE(932);
      END_STATE();
    case 674:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(933);
      END_STATE();
    case 675:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(934);
      END_STATE();
    case 676:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(935);
      END_STATE();
    case 677:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      END_STATE();
    case 678:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(937);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__WAIT);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__WHEN);
      if (lookahead == '-') ADVANCE(938);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__WITH);
      END_STATE();
    case 682:
      if (lookahead == 'V') ADVANCE(939);
      if (lookahead == 'v') ADVANCE(940);
      END_STATE();
    case 683:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(941);
      END_STATE();
    case 684:
      if (lookahead == 'V') ADVANCE(942);
      if (lookahead == 'v') ADVANCE(943);
      END_STATE();
    case 685:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(944);
      END_STATE();
    case 686:
      if (lookahead == 'A') ADVANCE(945);
      if (lookahead == 'a') ADVANCE(946);
      END_STATE();
    case 687:
      if (lookahead == 'a') ADVANCE(947);
      END_STATE();
    case 688:
      if (lookahead == '-') ADVANCE(948);
      END_STATE();
    case 689:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(949);
      END_STATE();
    case 690:
      if (lookahead == '-') ADVANCE(950);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(951);
      END_STATE();
    case 691:
      if (lookahead == 'A') ADVANCE(952);
      if (lookahead == 'a') ADVANCE(953);
      END_STATE();
    case 692:
      if (lookahead == 'a') ADVANCE(954);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym__LABEL);
      END_STATE();
    case 694:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(955);
      END_STATE();
    case 695:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(956);
      END_STATE();
    case 696:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(957);
      END_STATE();
    case 697:
      if (lookahead == '-') ADVANCE(958);
      if (lookahead == '8') ADVANCE(959);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym__LIMIT);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(960);
      END_STATE();
    case 699:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(961);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym__LINES);
      END_STATE();
    case 701:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(962);
      END_STATE();
    case 702:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(963);
      END_STATE();
    case 703:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(964);
      END_STATE();
    case 704:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(965);
      END_STATE();
    case 705:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(966);
      END_STATE();
    case 706:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 707:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(968);
      END_STATE();
    case 708:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(969);
      END_STATE();
    case 709:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(970);
      END_STATE();
    case 710:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(971);
      END_STATE();
    case 711:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(972);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(973);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(974);
      END_STATE();
    case 712:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(975);
      END_STATE();
    case 713:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(976);
      END_STATE();
    case 714:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(977);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_QUOTE);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_Quote);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 718:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(978);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 720:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(979);
      END_STATE();
    case 721:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(980);
      END_STATE();
    case 722:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(981);
      END_STATE();
    case 723:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(982);
      END_STATE();
    case 724:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(983);
      END_STATE();
    case 725:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(984);
      END_STATE();
    case 726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(985);
      END_STATE();
    case 727:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(986);
      END_STATE();
    case 728:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(987);
      END_STATE();
    case 729:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(988);
      END_STATE();
    case 730:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(989);
      END_STATE();
    case 731:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(990);
      END_STATE();
    case 732:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(991);
      END_STATE();
    case 733:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(992);
      END_STATE();
    case 734:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(993);
      END_STATE();
    case 735:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(994);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym__START);
      END_STATE();
    case 737:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(995);
      END_STATE();
    case 738:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(996);
      END_STATE();
    case 739:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(997);
      END_STATE();
    case 740:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(998);
      END_STATE();
    case 741:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 742:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1000);
      END_STATE();
    case 743:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1001);
      END_STATE();
    case 744:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1002);
      END_STATE();
    case 745:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1003);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym__TIMES);
      END_STATE();
    case 747:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1004);
      END_STATE();
    case 748:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1005);
      END_STATE();
    case 749:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1006);
      END_STATE();
    case 750:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1007);
      END_STATE();
    case 751:
      if (lookahead == 'V') ADVANCE(1008);
      if (lookahead == 'v') ADVANCE(1009);
      END_STATE();
    case 752:
      if (lookahead == 'A') ADVANCE(1010);
      if (lookahead == 'a') ADVANCE(1011);
      END_STATE();
    case 753:
      if (lookahead == 'a') ADVANCE(1012);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 756:
      if (lookahead == 'a') ADVANCE(1013);
      if (lookahead == 'b') ADVANCE(1014);
      if (lookahead == 'c') ADVANCE(1015);
      if (lookahead == 'e') ADVANCE(1016);
      if (lookahead == 'f') ADVANCE(1017);
      if (lookahead == 'g') ADVANCE(1018);
      if (lookahead == 'j') ADVANCE(1019);
      if (lookahead == 'n') ADVANCE(1020);
      if (lookahead == 'o') ADVANCE(1021);
      if (lookahead == 'r') ADVANCE(1022);
      if (lookahead == 's') ADVANCE(1023);
      if (lookahead == 'u') ADVANCE(1024);
      if (lookahead == 'v') ADVANCE(1025);
      END_STATE();
    case 757:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1026);
      END_STATE();
    case 758:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1027);
      END_STATE();
    case 759:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1028);
      END_STATE();
    case 760:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1029);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__AFTER);
      END_STATE();
    case 762:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1030);
      END_STATE();
    case 763:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1031);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1032);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ALTER);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1033);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__APPLY);
      END_STATE();
    case 766:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1034);
      END_STATE();
    case 767:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1035);
      END_STATE();
    case 768:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1036);
      END_STATE();
    case 769:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1037);
      END_STATE();
    case 770:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1038);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__BASED);
      END_STATE();
    case 772:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1039);
      END_STATE();
    case 773:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1040);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__BLANK);
      if (lookahead == '-') ADVANCE(1041);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__BLINK);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__BLOCK);
      END_STATE();
    case 777:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1042);
      END_STATE();
    case 778:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1043);
      END_STATE();
    case 779:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1044);
      END_STATE();
    case 780:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1045);
      END_STATE();
    case 781:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1046);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__CLASS);
      if (lookahead == '-') ADVANCE(1047);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__CLOSE);
      if (lookahead == '-') ADVANCE(1048);
      END_STATE();
    case 784:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1049);
      END_STATE();
    case 785:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1050);
      END_STATE();
    case 786:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1051);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__COMMA);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1052);
      END_STATE();
    case 788:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1053);
      END_STATE();
    case 789:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1054);
      END_STATE();
    case 790:
      if (lookahead == '1') ADVANCE(1055);
      if (lookahead == '2') ADVANCE(1056);
      if (lookahead == '3') ADVANCE(1057);
      if (lookahead == '4') ADVANCE(1058);
      if (lookahead == '5') ADVANCE(1059);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1060);
      END_STATE();
    case 791:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1061);
      END_STATE();
    case 792:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1062);
      END_STATE();
    case 793:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1063);
      END_STATE();
    case 794:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1064);
      END_STATE();
    case 795:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1065);
      END_STATE();
    case 796:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1066);
      END_STATE();
    case 797:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1067);
      END_STATE();
    case 798:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1068);
      END_STATE();
    case 799:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1069);
      END_STATE();
    case 800:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1070);
      END_STATE();
    case 801:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1071);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__COUNT);
      END_STATE();
    case 803:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1072);
      END_STATE();
    case 804:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1073);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym__CYCLE);
      END_STATE();
    case 806:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1074);
      END_STATE();
    case 807:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1075);
      END_STATE();
    case 808:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1076);
      END_STATE();
    case 809:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1077);
      END_STATE();
    case 810:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1078);
      END_STATE();
    case 811:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1079);
      END_STATE();
    case 812:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1080);
      END_STATE();
    case 813:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1081);
      END_STATE();
    case 814:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1082);
      END_STATE();
    case 815:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1083);
      END_STATE();
    case 816:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1084);
      END_STATE();
    case 817:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1085);
      END_STATE();
    case 818:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 819:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1087);
      END_STATE();
    case 820:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1088);
      END_STATE();
    case 821:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1089);
      END_STATE();
    case 822:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1090);
      END_STATE();
    case 823:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1091);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1092);
      END_STATE();
    case 824:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1093);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1094);
      END_STATE();
    case 825:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1095);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1096);
      END_STATE();
    case 826:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1097);
      END_STATE();
    case 827:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1098);
      END_STATE();
    case 828:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1099);
      END_STATE();
    case 829:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1100);
      END_STATE();
    case 830:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1101);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1102);
      END_STATE();
    case 831:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1103);
      END_STATE();
    case 832:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1104);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1105);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1106);
      END_STATE();
    case 833:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1107);
      END_STATE();
    case 834:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1108);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym__ENTRY);
      END_STATE();
    case 836:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1109);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym__EQUAL);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1110);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym__ERASE);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym__ERROR);
      END_STATE();
    case 840:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1111);
      END_STATE();
    case 841:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1112);
      END_STATE();
    case 842:
      if (lookahead == '-') ADVANCE(1113);
      END_STATE();
    case 843:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1114);
      END_STATE();
    case 844:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1115);
      END_STATE();
    case 845:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1116);
      END_STATE();
    case 846:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1117);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym__TOK_FALSE);
      END_STATE();
    case 848:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1118);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1119);
      END_STATE();
    case 849:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1120);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym__FINAL);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym__FIRST);
      END_STATE();
    case 852:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1121);
      END_STATE();
    case 853:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1122);
      END_STATE();
    case 854:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1123);
      END_STATE();
    case 855:
      if (lookahead == '-') ADVANCE(1124);
      END_STATE();
    case 856:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1125);
      END_STATE();
    case 857:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1126);
      END_STATE();
    case 858:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1127);
      END_STATE();
    case 859:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1128);
      END_STATE();
    case 860:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1129);
      END_STATE();
    case 861:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1130);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym__GROUP);
      END_STATE();
    case 863:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1131);
      END_STATE();
    case 864:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1132);
      END_STATE();
    case 865:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1133);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1134);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym__INDEX);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1135);
      END_STATE();
    case 867:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1136);
      END_STATE();
    case 868:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1137);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym__INPUT);
      if (lookahead == '-') ADVANCE(1138);
      END_STATE();
    case 870:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1139);
      END_STATE();
    case 871:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1140);
      END_STATE();
    case 872:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1141);
      END_STATE();
    case 873:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1142);
      END_STATE();
    case 874:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1143);
      END_STATE();
    case 875:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1144);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__MERGE);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym__MINUS);
      END_STATE();
    case 878:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1145);
      END_STATE();
    case 879:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1146);
      END_STATE();
    case 880:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1147);
      END_STATE();
    case 881:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1148);
      END_STATE();
    case 882:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1149);
      END_STATE();
    case 883:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1150);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym__ORDER);
      END_STATE();
    case 885:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1151);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__OTHER);
      END_STATE();
    case 887:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1152);
      END_STATE();
    case 888:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1153);
      END_STATE();
    case 889:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1154);
      END_STATE();
    case 890:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1155);
      END_STATE();
    case 891:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1156);
      END_STATE();
    case 892:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1157);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1158);
      END_STATE();
    case 893:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1159);
      END_STATE();
    case 894:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1160);
      END_STATE();
    case 895:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1161);
      END_STATE();
    case 896:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      END_STATE();
    case 897:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1163);
      END_STATE();
    case 898:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1164);
      END_STATE();
    case 899:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1165);
      END_STATE();
    case 900:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1166);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1167);
      END_STATE();
    case 901:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1168);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1169);
      END_STATE();
    case 902:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1170);
      END_STATE();
    case 903:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1171);
      END_STATE();
    case 904:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1172);
      END_STATE();
    case 905:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1173);
      END_STATE();
    case 906:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1174);
      END_STATE();
    case 907:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1175);
      END_STATE();
    case 908:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1176);
      END_STATE();
    case 909:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1177);
      END_STATE();
    case 910:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1178);
      END_STATE();
    case 911:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1179);
      END_STATE();
    case 912:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1180);
      END_STATE();
    case 913:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1181);
      END_STATE();
    case 914:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1182);
      END_STATE();
    case 915:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1183);
      END_STATE();
    case 916:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1184);
      END_STATE();
    case 917:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1185);
      END_STATE();
    case 918:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1186);
      END_STATE();
    case 919:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1187);
      END_STATE();
    case 920:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1188);
      END_STATE();
    case 921:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1189);
      END_STATE();
    case 922:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1190);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym__RIGHT);
      END_STATE();
    case 924:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1191);
      END_STATE();
    case 925:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1192);
      END_STATE();
    case 926:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1193);
      END_STATE();
    case 927:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1194);
      END_STATE();
    case 928:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1195);
      END_STATE();
    case 929:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1196);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym__UNTIL);
      END_STATE();
    case 931:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1197);
      END_STATE();
    case 932:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1198);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1199);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1200);
      END_STATE();
    case 933:
      if (lookahead == '-') ADVANCE(1201);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__USAGE);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__USING);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__VALUE);
      END_STATE();
    case 937:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1202);
      END_STATE();
    case 938:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1203);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1204);
      END_STATE();
    case 939:
      if (lookahead == 'A') ADVANCE(1205);
      if (lookahead == 'a') ADVANCE(1206);
      END_STATE();
    case 940:
      if (lookahead == 'a') ADVANCE(1207);
      END_STATE();
    case 941:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1208);
      END_STATE();
    case 942:
      if (lookahead == 'A') ADVANCE(1209);
      if (lookahead == 'a') ADVANCE(1210);
      END_STATE();
    case 943:
      if (lookahead == 'a') ADVANCE(1211);
      END_STATE();
    case 944:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1212);
      END_STATE();
    case 945:
      if (lookahead == 'L') ADVANCE(1213);
      END_STATE();
    case 946:
      if (lookahead == 'l') ADVANCE(1214);
      END_STATE();
    case 947:
      if (lookahead == 'l') ADVANCE(1215);
      END_STATE();
    case 948:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1216);
      END_STATE();
    case 949:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1217);
      END_STATE();
    case 950:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1218);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__LOCALE);
      if (lookahead == '-') ADVANCE(1219);
      END_STATE();
    case 952:
      if (lookahead == 'L') ADVANCE(1220);
      END_STATE();
    case 953:
      if (lookahead == 'l') ADVANCE(1221);
      END_STATE();
    case 954:
      if (lookahead == 'l') ADVANCE(1222);
      END_STATE();
    case 955:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1223);
      END_STATE();
    case 956:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1224);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__LENGTH);
      END_STATE();
    case 958:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1225);
      END_STATE();
    case 959:
      if (lookahead == '8') ADVANCE(1226);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym__LIMITS);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym__LINAGE);
      if (lookahead == '-') ADVANCE(1227);
      END_STATE();
    case 962:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1228);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__NUMBER);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1229);
      END_STATE();
    case 964:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1230);
      END_STATE();
    case 965:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1231);
      END_STATE();
    case 966:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1232);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__NATIVE);
      END_STATE();
    case 968:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1233);
      END_STATE();
    case 969:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1234);
      END_STATE();
    case 970:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1235);
      END_STATE();
    case 971:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1236);
      END_STATE();
    case 972:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1237);
      END_STATE();
    case 973:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1238);
      END_STATE();
    case 974:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1239);
      END_STATE();
    case 975:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1240);
      END_STATE();
    case 976:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1241);
      END_STATE();
    case 977:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1242);
      END_STATE();
    case 978:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1243);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym__SCREEN);
      if (lookahead == '-') ADVANCE(1244);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym__SCROLL);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym__SEARCH);
      END_STATE();
    case 982:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1245);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__SECURE);
      END_STATE();
    case 984:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1246);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__SELECT);
      END_STATE();
    case 986:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1247);
      END_STATE();
    case 987:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1248);
      END_STATE();
    case 988:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1249);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1250);
      END_STATE();
    case 989:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1251);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__SIGNED);
      if (lookahead == '-') ADVANCE(1252);
      END_STATE();
    case 991:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1253);
      END_STATE();
    case 992:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1254);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym__SOURCE);
      if (lookahead == '-') ADVANCE(1255);
      END_STATE();
    case 994:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1256);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym__STATUS);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym__STRING);
      END_STATE();
    case 997:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1257);
      END_STATE();
    case 998:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1258);
      END_STATE();
    case 999:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1259);
      END_STATE();
    case 1000:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1260);
      END_STATE();
    case 1001:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1261);
      END_STATE();
    case 1002:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1262);
      END_STATE();
    case 1003:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1263);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__TRACKS);
      END_STATE();
    case 1005:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1264);
      END_STATE();
    case 1006:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1265);
      END_STATE();
    case 1007:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1266);
      END_STATE();
    case 1008:
      if (lookahead == 'A') ADVANCE(1267);
      if (lookahead == 'a') ADVANCE(1268);
      END_STATE();
    case 1009:
      if (lookahead == 'a') ADVANCE(1269);
      END_STATE();
    case 1010:
      if (lookahead == 'L') ADVANCE(1270);
      END_STATE();
    case 1011:
      if (lookahead == 'l') ADVANCE(1271);
      END_STATE();
    case 1012:
      if (lookahead == 'l') ADVANCE(1272);
      END_STATE();
    case 1013:
      if (lookahead == 'n') ADVANCE(1273);
      END_STATE();
    case 1014:
      if (lookahead == 'a') ADVANCE(1274);
      if (lookahead == 'l') ADVANCE(1275);
      END_STATE();
    case 1015:
      if (lookahead == 'o') ADVANCE(1276);
      END_STATE();
    case 1016:
      if (lookahead == 'n') ADVANCE(1277);
      if (lookahead == 'r') ADVANCE(1278);
      if (lookahead == 'x') ADVANCE(1279);
      END_STATE();
    case 1017:
      if (lookahead == 'u') ADVANCE(1280);
      END_STATE();
    case 1018:
      if (lookahead == 'l') ADVANCE(1281);
      END_STATE();
    case 1019:
      if (lookahead == 'u') ADVANCE(1282);
      END_STATE();
    case 1020:
      if (lookahead == 'e') ADVANCE(1283);
      END_STATE();
    case 1021:
      if (lookahead == 'c') ADVANCE(1284);
      END_STATE();
    case 1022:
      if (lookahead == 'e') ADVANCE(1285);
      END_STATE();
    case 1023:
      if (lookahead == 'i') ADVANCE(1286);
      if (lookahead == 'y') ADVANCE(1287);
      END_STATE();
    case 1024:
      if (lookahead == 's') ADVANCE(1288);
      END_STATE();
    case 1025:
      if (lookahead == 'a') ADVANCE(1289);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__ACCEPT);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__ACCESS);
      END_STATE();
    case 1028:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1290);
      END_STATE();
    case 1029:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1291);
      END_STATE();
    case 1030:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1292);
      END_STATE();
    case 1031:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1293);
      END_STATE();
    case 1032:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1294);
      END_STATE();
    case 1033:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1295);
      END_STATE();
    case 1034:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1296);
      END_STATE();
    case 1035:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1297);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__ASSIGN);
      END_STATE();
    case 1037:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1298);
      END_STATE();
    case 1038:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1299);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__BEFORE);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__BINARY);
      if (lookahead == '-') ADVANCE(1300);
      END_STATE();
    case 1041:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1302);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__BOTTOM);
      END_STATE();
    case 1043:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1303);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__CANCEL);
      END_STATE();
    case 1045:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1304);
      END_STATE();
    case 1046:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1305);
      END_STATE();
    case 1047:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1306);
      END_STATE();
    case 1048:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1307);
      END_STATE();
    case 1049:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1308);
      END_STATE();
    case 1050:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1309);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__COLUMN);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1310);
      END_STATE();
    case 1052:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1311);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__COMMIT);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1312);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__COMMON);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym__COMP_1);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym__COMP_2);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym__COMP_3);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__COMP_4);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__COMP_5);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym__COMP_X);
      END_STATE();
    case 1061:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1313);
      END_STATE();
    case 1062:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1314);
      END_STATE();
    case 1063:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1315);
      END_STATE();
    case 1064:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1316);
      END_STATE();
    case 1065:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1317);
      END_STATE();
    case 1066:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1318);
      END_STATE();
    case 1067:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1319);
      END_STATE();
    case 1068:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1320);
      END_STATE();
    case 1069:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1321);
      END_STATE();
    case 1070:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1322);
      END_STATE();
    case 1071:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1323);
      END_STATE();
    case 1072:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1324);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1325);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__CURSOR);
      END_STATE();
    case 1074:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1326);
      END_STATE();
    case 1075:
      if (lookahead == '-') ADVANCE(1327);
      END_STATE();
    case 1076:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1328);
      END_STATE();
    case 1077:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1329);
      END_STATE();
    case 1078:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1330);
      END_STATE();
    case 1079:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1331);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__DELETE);
      END_STATE();
    case 1081:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1332);
      END_STATE();
    case 1082:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1333);
      END_STATE();
    case 1083:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1334);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__DETAIL);
      END_STATE();
    case 1085:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1335);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__DIVIDE);
      END_STATE();
    case 1087:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1336);
      END_STATE();
    case 1088:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1337);
      END_STATE();
    case 1089:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1338);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__EBCDIC);
      END_STATE();
    case 1091:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1339);
      END_STATE();
    case 1092:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1340);
      END_STATE();
    case 1093:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1341);
      END_STATE();
    case 1094:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1342);
      END_STATE();
    case 1095:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1343);
      END_STATE();
    case 1096:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1344);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1345);
      END_STATE();
    case 1097:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1346);
      END_STATE();
    case 1098:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1347);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__END_IF);
      END_STATE();
    case 1100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1348);
      END_STATE();
    case 1101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1349);
      END_STATE();
    case 1102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1350);
      END_STATE();
    case 1103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1351);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1352);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1353);
      END_STATE();
    case 1104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1354);
      END_STATE();
    case 1105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1355);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1356);
      END_STATE();
    case 1106:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1357);
      END_STATE();
    case 1107:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1358);
      END_STATE();
    case 1108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1359);
      END_STATE();
    case 1109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1360);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__EQUALS);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__ESCAPE);
      END_STATE();
    case 1112:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1361);
      END_STATE();
    case 1113:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1362);
      END_STATE();
    case 1114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1363);
      END_STATE();
    case 1115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1364);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__EXTEND);
      END_STATE();
    case 1117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1365);
      END_STATE();
    case 1118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1366);
      END_STATE();
    case 1119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1367);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__FILLER);
      END_STATE();
    case 1121:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1368);
      END_STATE();
    case 1122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1369);
      END_STATE();
    case 1123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1370);
      END_STATE();
    case 1124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1371);
      END_STATE();
    case 1125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 1126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1373);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym__GIVING);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym__GLOBAL);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__GOBACK);
      END_STATE();
    case 1130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1374);
      END_STATE();
    case 1131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1375);
      END_STATE();
    case 1132:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1376);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__IGNORE);
      END_STATE();
    case 1134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1377);
      END_STATE();
    case 1135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1378);
      END_STATE();
    case 1136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1379);
      END_STATE();
    case 1137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1380);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1381);
      END_STATE();
    case 1138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1382);
      END_STATE();
    case 1139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1383);
      END_STATE();
    case 1140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1384);
      END_STATE();
    case 1141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1385);
      END_STATE();
    case 1142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1386);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__MANUAL);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__MEMORY);
      END_STATE();
    case 1145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1387);
      END_STATE();
    case 1146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1388);
      END_STATE();
    case 1147:
      if (lookahead == '-') ADVANCE(1389);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__OCCURS);
      END_STATE();
    case 1149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1390);
      END_STATE();
    case 1150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1391);
      END_STATE();
    case 1151:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1392);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__OUTPUT);
      END_STATE();
    case 1153:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1393);
      END_STATE();
    case 1154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1394);
      END_STATE();
    case 1155:
      if (lookahead == '-') ADVANCE(1395);
      END_STATE();
    case 1156:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1396);
      END_STATE();
    case 1157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1397);
      END_STATE();
    case 1158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1398);
      END_STATE();
    case 1159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1399);
      END_STATE();
    case 1160:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1400);
      END_STATE();
    case 1161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1401);
      END_STATE();
    case 1162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1402);
      END_STATE();
    case 1163:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1403);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1404);
      END_STATE();
    case 1164:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1405);
      END_STATE();
    case 1165:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1406);
      END_STATE();
    case 1166:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1407);
      END_STATE();
    case 1167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1408);
      END_STATE();
    case 1168:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1409);
      END_STATE();
    case 1169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1410);
      END_STATE();
    case 1170:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1411);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym__PROMPT);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym__RANDOM);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(sym__RECORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1412);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1413);
      END_STATE();
    case 1174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1414);
      END_STATE();
    case 1175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1415);
      END_STATE();
    case 1176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1416);
      END_STATE();
    case 1177:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1417);
      END_STATE();
    case 1178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1418);
      END_STATE();
    case 1179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1419);
      END_STATE();
    case 1180:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1420);
      END_STATE();
    case 1181:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1421);
      END_STATE();
    case 1182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1422);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__REPORT);
      if (lookahead == '-') ADVANCE(1423);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1424);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1425);
      END_STATE();
    case 1184:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1426);
      END_STATE();
    case 1185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1427);
      END_STATE();
    case 1186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1428);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__RETURN);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1429);
      END_STATE();
    case 1188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1430);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__REWIND);
      END_STATE();
    case 1190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1431);
      END_STATE();
    case 1191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1432);
      END_STATE();
    case 1192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1433);
      END_STATE();
    case 1193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1434);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__UNLOCK);
      END_STATE();
    case 1195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1435);
      END_STATE();
    case 1196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1436);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__UPDATE);
      END_STATE();
    case 1198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1437);
      END_STATE();
    case 1199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1438);
      END_STATE();
    case 1200:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1439);
      END_STATE();
    case 1201:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1440);
      END_STATE();
    case 1202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1441);
      END_STATE();
    case 1203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1442);
      END_STATE();
    case 1204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1443);
      END_STATE();
    case 1205:
      if (lookahead == 'L') ADVANCE(1444);
      END_STATE();
    case 1206:
      if (lookahead == 'l') ADVANCE(1445);
      END_STATE();
    case 1207:
      if (lookahead == 'l') ADVANCE(1446);
      END_STATE();
    case 1208:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1447);
      END_STATE();
    case 1209:
      if (lookahead == 'L') ADVANCE(1448);
      END_STATE();
    case 1210:
      if (lookahead == 'l') ADVANCE(1449);
      END_STATE();
    case 1211:
      if (lookahead == 'l') ADVANCE(1450);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym__HEADING);
      END_STATE();
    case 1213:
      if (lookahead == 'U') ADVANCE(1451);
      END_STATE();
    case 1214:
      if (lookahead == 'u') ADVANCE(1452);
      END_STATE();
    case 1215:
      if (lookahead == 'u') ADVANCE(1453);
      END_STATE();
    case 1216:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1454);
      END_STATE();
    case 1217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1455);
      END_STATE();
    case 1218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1456);
      END_STATE();
    case 1219:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1457);
      END_STATE();
    case 1220:
      if (lookahead == 'U') ADVANCE(1458);
      END_STATE();
    case 1221:
      if (lookahead == 'u') ADVANCE(1459);
      END_STATE();
    case 1222:
      if (lookahead == 'u') ADVANCE(1460);
      END_STATE();
    case 1223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1461);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__LEADING);
      END_STATE();
    case 1225:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1462);
      END_STATE();
    case 1226:
      if (lookahead == '-') ADVANCE(1463);
      END_STATE();
    case 1227:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1464);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym__LINKAGE);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym__NUMBERS);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym__NUMERIC);
      if (lookahead == '-') ADVANCE(1465);
      END_STATE();
    case 1231:
      if (lookahead == '-') ADVANCE(1466);
      END_STATE();
    case 1232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1467);
      END_STATE();
    case 1233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1468);
      END_STATE();
    case 1234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1469);
      END_STATE();
    case 1235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1470);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(sym__NOMINAL);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym__NOT_END);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym__NOT_EOP);
      END_STATE();
    case 1239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1471);
      END_STATE();
    case 1240:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1472);
      END_STATE();
    case 1241:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1473);
      END_STATE();
    case 1242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1474);
      END_STATE();
    case 1243:
      if (lookahead == '-') ADVANCE(1475);
      END_STATE();
    case 1244:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1476);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym__SECTION);
      END_STATE();
    case 1246:
      if (lookahead == '-') ADVANCE(1477);
      END_STATE();
    case 1247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1478);
      END_STATE();
    case 1248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1479);
      END_STATE();
    case 1249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1480);
      END_STATE();
    case 1250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1481);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym__SHARING);
      END_STATE();
    case 1252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1482);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1483);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1484);
      END_STATE();
    case 1253:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1485);
      END_STATE();
    case 1254:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1486);
      END_STATE();
    case 1255:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1487);
      END_STATE();
    case 1256:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1488);
      END_STATE();
    case 1257:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1489);
      END_STATE();
    case 1258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1490);
      END_STATE();
    case 1259:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1491);
      END_STATE();
    case 1260:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1492);
      END_STATE();
    case 1261:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1493);
      END_STATE();
    case 1262:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1494);
      END_STATE();
    case 1263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1495);
      END_STATE();
    case 1264:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1496);
      END_STATE();
    case 1265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1497);
      END_STATE();
    case 1266:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1498);
      END_STATE();
    case 1267:
      if (lookahead == 'L') ADVANCE(1499);
      END_STATE();
    case 1268:
      if (lookahead == 'l') ADVANCE(1500);
      END_STATE();
    case 1269:
      if (lookahead == 'l') ADVANCE(1501);
      END_STATE();
    case 1270:
      if (lookahead == 'U') ADVANCE(1502);
      END_STATE();
    case 1271:
      if (lookahead == 'u') ADVANCE(1503);
      END_STATE();
    case 1272:
      if (lookahead == 'u') ADVANCE(1504);
      END_STATE();
    case 1273:
      if (lookahead == 'y') ADVANCE(1505);
      END_STATE();
    case 1274:
      if (lookahead == 's') ADVANCE(1506);
      END_STATE();
    case 1275:
      if (lookahead == 'a') ADVANCE(1507);
      END_STATE();
    case 1276:
      if (lookahead == 'n') ADVANCE(1508);
      END_STATE();
    case 1277:
      if (lookahead == 'd') ADVANCE(1509);
      if (lookahead == 'v') ADVANCE(1510);
      END_STATE();
    case 1278:
      if (lookahead == 'r') ADVANCE(1511);
      END_STATE();
    case 1279:
      if (lookahead == 't') ADVANCE(1512);
      END_STATE();
    case 1280:
      if (lookahead == 'n') ADVANCE(1513);
      END_STATE();
    case 1281:
      if (lookahead == 'o') ADVANCE(1514);
      END_STATE();
    case 1282:
      if (lookahead == 's') ADVANCE(1515);
      END_STATE();
    case 1283:
      if (lookahead == 's') ADVANCE(1516);
      END_STATE();
    case 1284:
      if (lookahead == 'c') ADVANCE(1517);
      END_STATE();
    case 1285:
      if (lookahead == 'n') ADVANCE(1518);
      END_STATE();
    case 1286:
      if (lookahead == 'g') ADVANCE(1519);
      END_STATE();
    case 1287:
      if (lookahead == 'n') ADVANCE(1520);
      END_STATE();
    case 1288:
      if (lookahead == 'a') ADVANCE(1521);
      END_STATE();
    case 1289:
      if (lookahead == 'l') ADVANCE(1522);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(sym__ADDRESS);
      END_STATE();
    case 1291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1523);
      END_STATE();
    case 1292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1524);
      END_STATE();
    case 1293:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1525);
      END_STATE();
    case 1294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1526);
      END_STATE();
    case 1295:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1527);
      END_STATE();
    case 1296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1528);
      END_STATE();
    case 1297:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1529);
      END_STATE();
    case 1298:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1530);
      END_STATE();
    case 1299:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1531);
      END_STATE();
    case 1300:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1532);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1533);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1534);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1535);
      END_STATE();
    case 1301:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1536);
      END_STATE();
    case 1302:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1537);
      END_STATE();
    case 1303:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1538);
      END_STATE();
    case 1304:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1539);
      END_STATE();
    case 1305:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1540);
      END_STATE();
    case 1306:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1541);
      END_STATE();
    case 1307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1542);
      END_STATE();
    case 1308:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1543);
      END_STATE();
    case 1309:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1544);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(sym__COLUMNS);
      END_STATE();
    case 1311:
      if (lookahead == '-') ADVANCE(1545);
      END_STATE();
    case 1312:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1546);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(sym__COMPUTE);
      END_STATE();
    case 1314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1547);
      END_STATE();
    case 1315:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1548);
      END_STATE();
    case 1316:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1549);
      END_STATE();
    case 1317:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1550);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym__CONTENT);
      END_STATE();
    case 1319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1551);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym__CONTROL);
      if (lookahead == '-') ADVANCE(1552);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1553);
      END_STATE();
    case 1321:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1554);
      END_STATE();
    case 1322:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1555);
      END_STATE();
    case 1323:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1556);
      END_STATE();
    case 1324:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1557);
      END_STATE();
    case 1325:
      if (lookahead == '-') ADVANCE(1558);
      END_STATE();
    case 1326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1559);
      END_STATE();
    case 1327:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1560);
      END_STATE();
    case 1328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1561);
      END_STATE();
    case 1329:
      if (lookahead == '-') ADVANCE(1562);
      END_STATE();
    case 1330:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1563);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(sym__DEFAULT);
      END_STATE();
    case 1332:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1564);
      END_STATE();
    case 1333:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1565);
      END_STATE();
    case 1334:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1566);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym__DISPLAY);
      END_STATE();
    case 1336:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1567);
      END_STATE();
    case 1337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1568);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym__DYNAMIC);
      END_STATE();
    case 1339:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1569);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym__END_ADD);
      END_STATE();
    case 1341:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1570);
      END_STATE();
    case 1342:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1571);
      END_STATE();
    case 1343:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1572);
      END_STATE();
    case 1344:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1573);
      END_STATE();
    case 1345:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1574);
      END_STATE();
    case 1346:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1575);
      END_STATE();
    case 1347:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1576);
      END_STATE();
    case 1348:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1577);
      END_STATE();
    case 1349:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1578);
      END_STATE();
    case 1350:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1579);
      END_STATE();
    case 1351:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1580);
      END_STATE();
    case 1352:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1581);
      END_STATE();
    case 1353:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1582);
      END_STATE();
    case 1354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1583);
      END_STATE();
    case 1355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1584);
      END_STATE();
    case 1356:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1585);
      END_STATE();
    case 1357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1586);
      END_STATE();
    case 1358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1587);
      END_STATE();
    case 1359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1588);
      END_STATE();
    case 1360:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1589);
      END_STATE();
    case 1361:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1590);
      END_STATE();
    case 1362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1591);
      END_STATE();
    case 1363:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1592);
      END_STATE();
    case 1364:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1593);
      END_STATE();
    case 1365:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1594);
      END_STATE();
    case 1366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1595);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(sym__FILE_ID);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym__FOOTING);
      END_STATE();
    case 1369:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1596);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(sym__FOREVER);
      END_STATE();
    case 1371:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1597);
      END_STATE();
    case 1372:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1598);
      END_STATE();
    case 1373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1599);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym__GREATER);
      END_STATE();
    case 1375:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1600);
      END_STATE();
    case 1376:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1601);
      END_STATE();
    case 1377:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1602);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym__INDEXED);
      END_STATE();
    case 1379:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1603);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym__TOK_INITIAL);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1604);
      END_STATE();
    case 1381:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1605);
      END_STATE();
    case 1382:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1606);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(sym__INSPECT);
      END_STATE();
    case 1384:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1607);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(sym__INVALID);
      if (lookahead == '-') ADVANCE(1608);
      END_STATE();
    case 1386:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1609);
      END_STATE();
    case 1387:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1610);
      END_STATE();
    case 1388:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1611);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1612);
      END_STATE();
    case 1389:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1613);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym__OMITTED);
      END_STATE();
    case 1391:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1614);
      END_STATE();
    case 1392:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1615);
      END_STATE();
    case 1393:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1616);
      END_STATE();
    case 1394:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1617);
      END_STATE();
    case 1395:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1618);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(sym__PADDING);
      END_STATE();
    case 1397:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1619);
      END_STATE();
    case 1398:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1620);
      END_STATE();
    case 1399:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1621);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym__PERFORM);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym__PICTURE);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym__POINTER);
      END_STATE();
    case 1403:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1622);
      END_STATE();
    case 1404:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(sym__PRESENT);
      END_STATE();
    case 1406:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1624);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(sym__PRINTER);
      END_STATE();
    case 1408:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1625);
      END_STATE();
    case 1409:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1626);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(sym__PROCEED);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym__PROGRAM);
      if (lookahead == '-') ADVANCE(1627);
      END_STATE();
    case 1412:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1628);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym__RECORDS);
      END_STATE();
    case 1414:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1629);
      END_STATE();
    case 1415:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1630);
      END_STATE();
    case 1416:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1631);
      END_STATE();
    case 1417:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1632);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(sym__RELEASE);
      END_STATE();
    case 1419:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1633);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(sym__REMOVAL);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym__RENAMES);
      END_STATE();
    case 1422:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1634);
      END_STATE();
    case 1423:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1635);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1636);
      END_STATE();
    case 1424:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1637);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym__REPORTS);
      END_STATE();
    case 1426:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1638);
      END_STATE();
    case 1427:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1639);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym__RESERVE);
      END_STATE();
    case 1429:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1640);
      END_STATE();
    case 1430:
      if (lookahead == '-') ADVANCE(1641);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(sym__REWRITE);
      END_STATE();
    case 1432:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1642);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym__ROUNDED);
      END_STATE();
    case 1434:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1643);
      END_STATE();
    case 1435:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1644);
      END_STATE();
    case 1436:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1645);
      END_STATE();
    case 1437:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1646);
      END_STATE();
    case 1438:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1647);
      END_STATE();
    case 1439:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1648);
      END_STATE();
    case 1440:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1649);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(sym__VARYING);
      END_STATE();
    case 1442:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1650);
      END_STATE();
    case 1443:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1651);
      END_STATE();
    case 1444:
      if (lookahead == 'U') ADVANCE(1652);
      END_STATE();
    case 1445:
      if (lookahead == 'u') ADVANCE(1653);
      END_STATE();
    case 1446:
      if (lookahead == 'u') ADVANCE(1654);
      END_STATE();
    case 1447:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1655);
      END_STATE();
    case 1448:
      if (lookahead == 'U') ADVANCE(1656);
      END_STATE();
    case 1449:
      if (lookahead == 'u') ADVANCE(1657);
      END_STATE();
    case 1450:
      if (lookahead == 'u') ADVANCE(1658);
      END_STATE();
    case 1451:
      if (lookahead == 'E') ADVANCE(1659);
      END_STATE();
    case 1452:
      if (lookahead == 'e') ADVANCE(1660);
      END_STATE();
    case 1453:
      if (lookahead == 'e') ADVANCE(1661);
      END_STATE();
    case 1454:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1662);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(sym__LOWLIGHT);
      END_STATE();
    case 1456:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1663);
      END_STATE();
    case 1457:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1664);
      END_STATE();
    case 1458:
      if (lookahead == 'E') ADVANCE(1665);
      END_STATE();
    case 1459:
      if (lookahead == 'e') ADVANCE(1666);
      END_STATE();
    case 1460:
      if (lookahead == 'e') ADVANCE(1667);
      END_STATE();
    case 1461:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1668);
      END_STATE();
    case 1462:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1669);
      END_STATE();
    case 1463:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1670);
      END_STATE();
    case 1464:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1671);
      END_STATE();
    case 1465:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1672);
      END_STATE();
    case 1466:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1673);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym__NATIONAL);
      if (lookahead == '-') ADVANCE(1674);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym__NEGATIVE);
      END_STATE();
    case 1469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1675);
      END_STATE();
    case 1470:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1676);
      END_STATE();
    case 1471:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1677);
      END_STATE();
    case 1472:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1678);
      END_STATE();
    case 1473:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1679);
      END_STATE();
    case 1474:
      if (lookahead == '-') ADVANCE(1680);
      END_STATE();
    case 1475:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1681);
      END_STATE();
    case 1476:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1682);
      END_STATE();
    case 1477:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1683);
      END_STATE();
    case 1478:
      ACCEPT_TOKEN(sym__SENTENCE);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym__SEPARATE);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym__SEQUENCE);
      END_STATE();
    case 1481:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1684);
      END_STATE();
    case 1482:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1685);
      END_STATE();
    case 1483:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1686);
      END_STATE();
    case 1484:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1687);
      END_STATE();
    case 1485:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1688);
      END_STATE();
    case 1486:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1689);
      END_STATE();
    case 1487:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1690);
      END_STATE();
    case 1488:
      ACCEPT_TOKEN(sym__STANDARD);
      if (lookahead == '-') ADVANCE(1691);
      END_STATE();
    case 1489:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1692);
      END_STATE();
    case 1490:
      ACCEPT_TOKEN(sym__SUBTRACT);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym__SUPPRESS);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym__SYMBOLIC);
      END_STATE();
    case 1493:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1693);
      END_STATE();
    case 1494:
      ACCEPT_TOKEN(sym__TALLYING);
      END_STATE();
    case 1495:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1694);
      END_STATE();
    case 1496:
      ACCEPT_TOKEN(sym__TRAILING);
      END_STATE();
    case 1497:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1695);
      END_STATE();
    case 1498:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1696);
      END_STATE();
    case 1499:
      if (lookahead == 'U') ADVANCE(1697);
      END_STATE();
    case 1500:
      if (lookahead == 'u') ADVANCE(1698);
      END_STATE();
    case 1501:
      if (lookahead == 'u') ADVANCE(1699);
      END_STATE();
    case 1502:
      if (lookahead == 'E') ADVANCE(1700);
      END_STATE();
    case 1503:
      if (lookahead == 'e') ADVANCE(1701);
      END_STATE();
    case 1504:
      if (lookahead == 'e') ADVANCE(1702);
      END_STATE();
    case 1505:
      if (lookahead == '_') ADVANCE(1703);
      END_STATE();
    case 1506:
      if (lookahead == 'e') ADVANCE(1704);
      END_STATE();
    case 1507:
      if (lookahead == 'n') ADVANCE(1705);
      END_STATE();
    case 1508:
      if (lookahead == 's') ADVANCE(1706);
      END_STATE();
    case 1509:
      if (lookahead == '_') ADVANCE(1707);
      END_STATE();
    case 1510:
      if (lookahead == 'i') ADVANCE(1708);
      END_STATE();
    case 1511:
      if (lookahead == 'o') ADVANCE(1709);
      END_STATE();
    case 1512:
      if (lookahead == 'e') ADVANCE(1710);
      END_STATE();
    case 1513:
      if (lookahead == 'c') ADVANCE(1711);
      END_STATE();
    case 1514:
      if (lookahead == 'b') ADVANCE(1712);
      END_STATE();
    case 1515:
      if (lookahead == 't') ADVANCE(1713);
      END_STATE();
    case 1516:
      if (lookahead == 't') ADVANCE(1714);
      END_STATE();
    case 1517:
      if (lookahead == 'u') ADVANCE(1715);
      END_STATE();
    case 1518:
      if (lookahead == 'a') ADVANCE(1716);
      END_STATE();
    case 1519:
      if (lookahead == 'n') ADVANCE(1717);
      END_STATE();
    case 1520:
      if (lookahead == 'c') ADVANCE(1718);
      END_STATE();
    case 1521:
      if (lookahead == 'g') ADVANCE(1719);
      END_STATE();
    case 1522:
      if (lookahead == 'u') ADVANCE(1720);
      END_STATE();
    case 1523:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1721);
      END_STATE();
    case 1524:
      ACCEPT_TOKEN(sym__ALLOCATE);
      END_STATE();
    case 1525:
      ACCEPT_TOKEN(sym__ALPHABET);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1722);
      END_STATE();
    case 1526:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1723);
      END_STATE();
    case 1527:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1724);
      END_STATE();
    case 1528:
      if (lookahead == '-') ADVANCE(1725);
      END_STATE();
    case 1529:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1726);
      END_STATE();
    case 1530:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1727);
      END_STATE();
    case 1531:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1728);
      END_STATE();
    case 1532:
      if (lookahead == '-') ADVANCE(1729);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1730);
      END_STATE();
    case 1533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1731);
      END_STATE();
    case 1534:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1732);
      END_STATE();
    case 1535:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1733);
      END_STATE();
    case 1536:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1734);
      END_STATE();
    case 1537:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1735);
      END_STATE();
    case 1538:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1736);
      END_STATE();
    case 1539:
      ACCEPT_TOKEN(sym__CHAINING);
      END_STATE();
    case 1540:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1737);
      END_STATE();
    case 1541:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1738);
      END_STATE();
    case 1542:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1739);
      END_STATE();
    case 1543:
      ACCEPT_TOKEN(sym__CODE_SET);
      END_STATE();
    case 1544:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1740);
      END_STATE();
    case 1545:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1741);
      END_STATE();
    case 1546:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1742);
      END_STATE();
    case 1547:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1743);
      END_STATE();
    case 1548:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1744);
      END_STATE();
    case 1549:
      ACCEPT_TOKEN(sym__CONSTANT);
      END_STATE();
    case 1550:
      ACCEPT_TOKEN(sym__CONTAINS);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym__CONTINUE);
      END_STATE();
    case 1552:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1745);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1746);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym__CONTROLS);
      END_STATE();
    case 1554:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1747);
      END_STATE();
    case 1555:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1748);
      END_STATE();
    case 1556:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1749);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym__CURRENCY);
      END_STATE();
    case 1558:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1750);
      END_STATE();
    case 1559:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1751);
      END_STATE();
    case 1560:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1752);
      END_STATE();
    case 1561:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1753);
      END_STATE();
    case 1562:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1754);
      END_STATE();
    case 1563:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1755);
      END_STATE();
    case 1564:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1756);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1757);
      END_STATE();
    case 1565:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1758);
      END_STATE();
    case 1566:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1759);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym__DIVISION);
      END_STATE();
    case 1568:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1760);
      END_STATE();
    case 1569:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1761);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym__END_CALL);
      END_STATE();
    case 1571:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1762);
      END_STATE();
    case 1572:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1763);
      END_STATE();
    case 1573:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1764);
      END_STATE();
    case 1574:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1765);
      END_STATE();
    case 1575:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1766);
      END_STATE();
    case 1576:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1767);
      END_STATE();
    case 1577:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1768);
      END_STATE();
    case 1578:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1769);
      END_STATE();
    case 1579:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1770);
      END_STATE();
    case 1580:
      ACCEPT_TOKEN(sym__END_READ);
      END_STATE();
    case 1581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1771);
      END_STATE();
    case 1582:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1772);
      END_STATE();
    case 1583:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1773);
      END_STATE();
    case 1584:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1774);
      END_STATE();
    case 1585:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1775);
      END_STATE();
    case 1586:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1776);
      END_STATE();
    case 1587:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1777);
      END_STATE();
    case 1588:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1778);
      END_STATE();
    case 1589:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1779);
      END_STATE();
    case 1590:
      ACCEPT_TOKEN(sym__EVALUATE);
      END_STATE();
    case 1591:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1780);
      END_STATE();
    case 1592:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1781);
      END_STATE();
    case 1593:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1782);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(sym__EXTERNAL);
      END_STATE();
    case 1595:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1783);
      END_STATE();
    case 1596:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1784);
      END_STATE();
    case 1597:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1785);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(sym__FUNCTION);
      if (lookahead == '-') ADVANCE(1786);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(sym__GENERATE);
      END_STATE();
    case 1600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1787);
      END_STATE();
    case 1601:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1788);
      END_STATE();
    case 1602:
      ACCEPT_TOKEN(sym__IGNORING);
      END_STATE();
    case 1603:
      ACCEPT_TOKEN(sym__INDICATE);
      END_STATE();
    case 1604:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1789);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(sym__INITIATE);
      END_STATE();
    case 1606:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1790);
      END_STATE();
    case 1607:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1791);
      END_STATE();
    case 1608:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1792);
      END_STATE();
    case 1609:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1793);
      END_STATE();
    case 1610:
      if (lookahead == '-') ADVANCE(1794);
      END_STATE();
    case 1611:
      ACCEPT_TOKEN(sym__MULTIPLE);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(sym__MULTIPLY);
      END_STATE();
    case 1613:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1795);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(sym__OPTIONAL);
      END_STATE();
    case 1615:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1796);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(sym__OVERFLOW);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(sym__OVERLINE);
      END_STATE();
    case 1618:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1797);
      END_STATE();
    case 1619:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1798);
      END_STATE();
    case 1620:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1799);
      END_STATE();
    case 1621:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1800);
      END_STATE();
    case 1622:
      ACCEPT_TOKEN(sym__POSITION);
      END_STATE();
    case 1623:
      ACCEPT_TOKEN(sym__POSITIVE);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(sym__PREVIOUS);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(sym__PRINTING);
      END_STATE();
    case 1626:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1801);
      END_STATE();
    case 1627:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1802);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1803);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1804);
      END_STATE();
    case 1628:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1805);
      END_STATE();
    case 1629:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1806);
      END_STATE();
    case 1630:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1807);
      END_STATE();
    case 1631:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1808);
      END_STATE();
    case 1632:
      ACCEPT_TOKEN(sym__RELATIVE);
      END_STATE();
    case 1633:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1809);
      END_STATE();
    case 1634:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1810);
      END_STATE();
    case 1635:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1811);
      END_STATE();
    case 1636:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1812);
      END_STATE();
    case 1637:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1813);
      END_STATE();
    case 1638:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1814);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(sym__REQUIRED);
      END_STATE();
    case 1640:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1815);
      END_STATE();
    case 1641:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1816);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1817);
      END_STATE();
    case 1642:
      ACCEPT_TOKEN(sym__ROLLBACK);
      END_STATE();
    case 1643:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1818);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(sym__UNSIGNED);
      if (lookahead == '-') ADVANCE(1819);
      END_STATE();
    case 1645:
      ACCEPT_TOKEN(sym__UNSTRING);
      END_STATE();
    case 1646:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1820);
      END_STATE();
    case 1647:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1821);
      END_STATE();
    case 1648:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1822);
      END_STATE();
    case 1649:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1823);
      END_STATE();
    case 1650:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1824);
      END_STATE();
    case 1651:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1825);
      END_STATE();
    case 1652:
      if (lookahead == 'E') ADVANCE(1826);
      END_STATE();
    case 1653:
      if (lookahead == 'e') ADVANCE(1827);
      END_STATE();
    case 1654:
      if (lookahead == 'e') ADVANCE(1828);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(sym__HIGHLIGHT);
      END_STATE();
    case 1656:
      if (lookahead == 'E') ADVANCE(1829);
      END_STATE();
    case 1657:
      if (lookahead == 'e') ADVANCE(1830);
      END_STATE();
    case 1658:
      if (lookahead == 'e') ADVANCE(1831);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(anon_sym_LOW_DASHVALUE);
      END_STATE();
    case 1660:
      ACCEPT_TOKEN(anon_sym_LOW_DASHValue);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_LOW_DASHvalue);
      END_STATE();
    case 1662:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1832);
      END_STATE();
    case 1663:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1833);
      END_STATE();
    case 1664:
      if (lookahead == '-') ADVANCE(1834);
      END_STATE();
    case 1665:
      ACCEPT_TOKEN(anon_sym_Low_DASHVALUE);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(anon_sym_Low_DASHValue);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_Low_DASHvalue);
      END_STATE();
    case 1668:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1835);
      END_STATE();
    case 1669:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1836);
      END_STATE();
    case 1670:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1837);
      END_STATE();
    case 1671:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1838);
      END_STATE();
    case 1672:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1839);
      END_STATE();
    case 1673:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1840);
      END_STATE();
    case 1674:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1841);
      END_STATE();
    case 1675:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1842);
      END_STATE();
    case 1676:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1843);
      END_STATE();
    case 1677:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1844);
      END_STATE();
    case 1678:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1845);
      END_STATE();
    case 1679:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1846);
      END_STATE();
    case 1680:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1847);
      END_STATE();
    case 1681:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1848);
      END_STATE();
    case 1682:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1849);
      END_STATE();
    case 1683:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1850);
      END_STATE();
    case 1684:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1851);
      END_STATE();
    case 1685:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1852);
      END_STATE();
    case 1686:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1853);
      END_STATE();
    case 1687:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1854);
      END_STATE();
    case 1688:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1855);
      END_STATE();
    case 1689:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1856);
      END_STATE();
    case 1690:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1857);
      END_STATE();
    case 1691:
      if (lookahead == '1') ADVANCE(1858);
      if (lookahead == '2') ADVANCE(1859);
      END_STATE();
    case 1692:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1860);
      END_STATE();
    case 1693:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1861);
      END_STATE();
    case 1694:
      ACCEPT_TOKEN(sym__TERMINATE);
      END_STATE();
    case 1695:
      ACCEPT_TOKEN(sym__TRANSFORM);
      END_STATE();
    case 1696:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1862);
      END_STATE();
    case 1697:
      if (lookahead == 'E') ADVANCE(1863);
      END_STATE();
    case 1698:
      if (lookahead == 'e') ADVANCE(1864);
      END_STATE();
    case 1699:
      if (lookahead == 'e') ADVANCE(1865);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(anon_sym_low_DASHVALUE);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(anon_sym_low_DASHValue);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_low_DASHvalue);
      END_STATE();
    case 1703:
      if (lookahead == 'l') ADVANCE(1866);
      END_STATE();
    case 1704:
      if (lookahead == 'd') ADVANCE(1867);
      END_STATE();
    case 1705:
      if (lookahead == 'k') ADVANCE(1868);
      END_STATE();
    case 1706:
      if (lookahead == 't') ADVANCE(1869);
      END_STATE();
    case 1707:
      if (lookahead == 'p') ADVANCE(1870);
      END_STATE();
    case 1708:
      if (lookahead == 'r') ADVANCE(1871);
      END_STATE();
    case 1709:
      if (lookahead == 'r') ADVANCE(1872);
      END_STATE();
    case 1710:
      if (lookahead == 'r') ADVANCE(1873);
      END_STATE();
    case 1711:
      if (lookahead == 't') ADVANCE(1874);
      END_STATE();
    case 1712:
      if (lookahead == 'a') ADVANCE(1875);
      END_STATE();
    case 1713:
      if (lookahead == 'i') ADVANCE(1876);
      END_STATE();
    case 1714:
      if (lookahead == 'e') ADVANCE(1877);
      END_STATE();
    case 1715:
      if (lookahead == 'r') ADVANCE(1878);
      END_STATE();
    case 1716:
      if (lookahead == 'm') ADVANCE(1879);
      END_STATE();
    case 1717:
      if (lookahead == '_') ADVANCE(1880);
      END_STATE();
    case 1718:
      if (lookahead == 'h') ADVANCE(1881);
      END_STATE();
    case 1719:
      if (lookahead == 'e') ADVANCE(1882);
      END_STATE();
    case 1720:
      if (lookahead == 'e') ADVANCE(1883);
      END_STATE();
    case 1721:
      ACCEPT_TOKEN(sym__ADVANCING);
      END_STATE();
    case 1722:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1884);
      END_STATE();
    case 1723:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1885);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(sym__ALTERNATE);
      END_STATE();
    case 1725:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1886);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1887);
      END_STATE();
    case 1726:
      ACCEPT_TOKEN(sym__ASCENDING);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(sym__AUTOMATIC);
      END_STATE();
    case 1728:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1888);
      END_STATE();
    case 1729:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1889);
      END_STATE();
    case 1730:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1890);
      END_STATE();
    case 1731:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1891);
      END_STATE();
    case 1732:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1892);
      END_STATE();
    case 1733:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1893);
      END_STATE();
    case 1734:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1894);
      END_STATE();
    case 1735:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1895);
      END_STATE();
    case 1736:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1896);
      END_STATE();
    case 1737:
      ACCEPT_TOKEN(sym__CHARACTER);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1897);
      END_STATE();
    case 1738:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1898);
      END_STATE();
    case 1739:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1899);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(sym__COLLATING);
      END_STATE();
    case 1741:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1900);
      END_STATE();
    case 1742:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1901);
      END_STATE();
    case 1743:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1902);
      END_STATE();
    case 1744:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1903);
      END_STATE();
    case 1745:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1904);
      END_STATE();
    case 1746:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1905);
      END_STATE();
    case 1747:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1906);
      END_STATE();
    case 1748:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1907);
      END_STATE();
    case 1749:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1908);
      END_STATE();
    case 1750:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1909);
      END_STATE();
    case 1751:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1910);
      END_STATE();
    case 1752:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1911);
      END_STATE();
    case 1753:
      ACCEPT_TOKEN(sym__DEBUGGING);
      END_STATE();
    case 1754:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1912);
      END_STATE();
    case 1755:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1913);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(sym__DELIMITED);
      END_STATE();
    case 1757:
      ACCEPT_TOKEN(sym__DELIMITER);
      END_STATE();
    case 1758:
      ACCEPT_TOKEN(sym__DEPENDING);
      END_STATE();
    case 1759:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1914);
      END_STATE();
    case 1760:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1915);
      END_STATE();
    case 1761:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1916);
      END_STATE();
    case 1762:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1917);
      END_STATE();
    case 1763:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1918);
      END_STATE();
    case 1764:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1919);
      END_STATE();
    case 1765:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1920);
      END_STATE();
    case 1766:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1921);
      END_STATE();
    case 1767:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1922);
      END_STATE();
    case 1768:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1923);
      END_STATE();
    case 1769:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1924);
      END_STATE();
    case 1770:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1925);
      END_STATE();
    case 1771:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1926);
      END_STATE();
    case 1772:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1927);
      END_STATE();
    case 1773:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1928);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(sym__END_START);
      END_STATE();
    case 1775:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1929);
      END_STATE();
    case 1776:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1930);
      END_STATE();
    case 1777:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1931);
      END_STATE();
    case 1778:
      ACCEPT_TOKEN(sym__END_WRITE);
      END_STATE();
    case 1779:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1932);
      END_STATE();
    case 1780:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1933);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(sym__EXCEPTION);
      END_STATE();
    case 1782:
      ACCEPT_TOKEN(sym__EXCLUSIVE);
      END_STATE();
    case 1783:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1934);
      END_STATE();
    case 1784:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1935);
      END_STATE();
    case 1785:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1936);
      END_STATE();
    case 1786:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1937);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1938);
      END_STATE();
    case 1787:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1939);
      END_STATE();
    case 1788:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1940);
      END_STATE();
    case 1789:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1941);
      END_STATE();
    case 1790:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1942);
      END_STATE();
    case 1791:
      ACCEPT_TOKEN(sym__INTRINSIC);
      END_STATE();
    case 1792:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1943);
      END_STATE();
    case 1793:
      ACCEPT_TOKEN(sym__JUSTIFIED);
      END_STATE();
    case 1794:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1944);
      END_STATE();
    case 1795:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1945);
      END_STATE();
    case 1796:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1946);
      END_STATE();
    case 1797:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1947);
      END_STATE();
    case 1798:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1948);
      END_STATE();
    case 1799:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1949);
      END_STATE();
    case 1800:
      ACCEPT_TOKEN(sym__PARAGRAPH);
      END_STATE();
    case 1801:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1950);
      END_STATE();
    case 1802:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1951);
      END_STATE();
    case 1803:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1952);
      END_STATE();
    case 1804:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1953);
      END_STATE();
    case 1805:
      ACCEPT_TOKEN(sym__RECORDING);
      END_STATE();
    case 1806:
      ACCEPT_TOKEN(sym__RECURSIVE);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(sym__REDEFINES);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(sym__REFERENCE);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(sym__REMAINDER);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(sym__REPLACING);
      END_STATE();
    case 1811:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1954);
      END_STATE();
    case 1812:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1955);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(sym__REPORTING);
      END_STATE();
    case 1814:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1956);
      END_STATE();
    case 1815:
      ACCEPT_TOKEN(sym__RETURNING);
      END_STATE();
    case 1816:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1957);
      END_STATE();
    case 1817:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1958);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(sym__UNDERLINE);
      END_STATE();
    case 1819:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1959);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1960);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1961);
      END_STATE();
    case 1820:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1962);
      END_STATE();
    case 1821:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1963);
      END_STATE();
    case 1822:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1964);
      END_STATE();
    case 1823:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1965);
      END_STATE();
    case 1824:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1966);
      END_STATE();
    case 1825:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1967);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(anon_sym_HIGH_DASHVALUE);
      END_STATE();
    case 1827:
      ACCEPT_TOKEN(anon_sym_HIGH_DASHValue);
      END_STATE();
    case 1828:
      ACCEPT_TOKEN(anon_sym_HIGH_DASHvalue);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(anon_sym_High_DASHVALUE);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(anon_sym_High_DASHValue);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(anon_sym_High_DASHvalue);
      END_STATE();
    case 1832:
      if (lookahead == '-') ADVANCE(1968);
      END_STATE();
    case 1833:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1969);
      END_STATE();
    case 1834:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1970);
      END_STATE();
    case 1835:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1971);
      END_STATE();
    case 1836:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1972);
      END_STATE();
    case 1837:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1973);
      END_STATE();
    case 1838:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1974);
      END_STATE();
    case 1839:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1975);
      END_STATE();
    case 1840:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1976);
      END_STATE();
    case 1841:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1977);
      END_STATE();
    case 1842:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1978);
      END_STATE();
    case 1843:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1979);
      END_STATE();
    case 1844:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1980);
      END_STATE();
    case 1845:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1981);
      END_STATE();
    case 1846:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1982);
      END_STATE();
    case 1847:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1983);
      END_STATE();
    case 1848:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1984);
      END_STATE();
    case 1849:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1985);
      END_STATE();
    case 1850:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1986);
      END_STATE();
    case 1851:
      ACCEPT_TOKEN(sym__SEQUENTIAL);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(sym__SIGNED_INT);
      END_STATE();
    case 1853:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1987);
      END_STATE();
    case 1854:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1988);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(sym__SIZE_ERROR);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(sym__SORT_MERGE);
      END_STATE();
    case 1857:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1989);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(sym__STANDARD_1);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(sym__STANDARD_2);
      END_STATE();
    case 1860:
      if (lookahead == '-') ADVANCE(1990);
      END_STATE();
    case 1861:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1991);
      END_STATE();
    case 1862:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1992);
      END_STATE();
    case 1863:
      ACCEPT_TOKEN(anon_sym_high_DASHVALUE);
      END_STATE();
    case 1864:
      ACCEPT_TOKEN(anon_sym_high_DASHValue);
      END_STATE();
    case 1865:
      ACCEPT_TOKEN(anon_sym_high_DASHvalue);
      END_STATE();
    case 1866:
      if (lookahead == 'e') ADVANCE(1993);
      END_STATE();
    case 1867:
      if (lookahead == '_') ADVANCE(1994);
      END_STATE();
    case 1868:
      if (lookahead == '_') ADVANCE(1995);
      END_STATE();
    case 1869:
      if (lookahead == 'a') ADVANCE(1996);
      END_STATE();
    case 1870:
      if (lookahead == 'r') ADVANCE(1997);
      END_STATE();
    case 1871:
      if (lookahead == 'o') ADVANCE(1998);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    case 1873:
      if (lookahead == 'n') ADVANCE(1999);
      END_STATE();
    case 1874:
      if (lookahead == 'i') ADVANCE(2000);
      END_STATE();
    case 1875:
      if (lookahead == 'l') ADVANCE(2001);
      END_STATE();
    case 1876:
      if (lookahead == 'f') ADVANCE(2002);
      END_STATE();
    case 1877:
      if (lookahead == 'd') ADVANCE(2003);
      END_STATE();
    case 1878:
      if (lookahead == 's') ADVANCE(2004);
      END_STATE();
    case 1879:
      if (lookahead == 'e') ADVANCE(2005);
      END_STATE();
    case 1880:
      if (lookahead == 'c') ADVANCE(2006);
      END_STATE();
    case 1881:
      if (lookahead == 'r') ADVANCE(2007);
      END_STATE();
    case 1882:
      if (lookahead == '_') ADVANCE(2008);
      END_STATE();
    case 1883:
      if (lookahead == '_') ADVANCE(2009);
      END_STATE();
    case 1884:
      ACCEPT_TOKEN(sym__ALPHABETIC);
      if (lookahead == '-') ADVANCE(2010);
      END_STATE();
    case 1885:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2011);
      END_STATE();
    case 1886:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2012);
      END_STATE();
    case 1887:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2013);
      END_STATE();
    case 1888:
      if (lookahead == '-') ADVANCE(2014);
      END_STATE();
    case 1889:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2015);
      END_STATE();
    case 1890:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2016);
      END_STATE();
    case 1891:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2017);
      END_STATE();
    case 1892:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2018);
      END_STATE();
    case 1893:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2019);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(sym__BLANK_LINE);
      END_STATE();
    case 1895:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2020);
      END_STATE();
    case 1896:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2021);
      END_STATE();
    case 1897:
      ACCEPT_TOKEN(sym__CHARACTERS);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(sym__CLASS_NAME);
      END_STATE();
    case 1899:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2022);
      END_STATE();
    case 1900:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2023);
      END_STATE();
    case 1901:
      if (lookahead == '-') ADVANCE(2024);
      END_STATE();
    case 1902:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2025);
      END_STATE();
    case 1903:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2026);
      END_STATE();
    case 1904:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2027);
      END_STATE();
    case 1905:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2028);
      END_STATE();
    case 1906:
      ACCEPT_TOKEN(sym__CONVERTING);
      END_STATE();
    case 1907:
      ACCEPT_TOKEN(sym__CORE_INDEX);
      END_STATE();
    case 1908:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2029);
      END_STATE();
    case 1909:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2030);
      END_STATE();
    case 1910:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2031);
      END_STATE();
    case 1911:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2032);
      END_STATE();
    case 1912:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2033);
      END_STATE();
    case 1913:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2034);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(sym__DESCENDING);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(sym__DUPLICATES);
      END_STATE();
    case 1916:
      ACCEPT_TOKEN(sym__END_ACCEPT);
      END_STATE();
    case 1917:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2035);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(sym__END_DELETE);
      END_STATE();
    case 1919:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2036);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(sym__END_DIVIDE);
      END_STATE();
    case 1921:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2037);
      END_STATE();
    case 1922:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2038);
      END_STATE();
    case 1923:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2039);
      END_STATE();
    case 1924:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2040);
      END_STATE();
    case 1925:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2041);
      END_STATE();
    case 1926:
      ACCEPT_TOKEN(sym__END_RETURN);
      END_STATE();
    case 1927:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2042);
      END_STATE();
    case 1928:
      ACCEPT_TOKEN(sym__END_SEARCH);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(sym__END_STRING);
      END_STATE();
    case 1930:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2043);
      END_STATE();
    case 1931:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2044);
      END_STATE();
    case 1932:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2045);
      END_STATE();
    case 1933:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2046);
      END_STATE();
    case 1934:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2047);
      END_STATE();
    case 1935:
      if (lookahead == '-') ADVANCE(2048);
      END_STATE();
    case 1936:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2049);
      END_STATE();
    case 1937:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2050);
      END_STATE();
    case 1938:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2051);
      END_STATE();
    case 1939:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2052);
      END_STATE();
    case 1940:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2053);
      END_STATE();
    case 1941:
      ACCEPT_TOKEN(sym__INITIALIZE);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2054);
      END_STATE();
    case 1942:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2055);
      END_STATE();
    case 1943:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2056);
      END_STATE();
    case 1944:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2057);
      END_STATE();
    case 1945:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2058);
      END_STATE();
    case 1946:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2059);
      END_STATE();
    case 1947:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2060);
      END_STATE();
    case 1948:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2061);
      END_STATE();
    case 1949:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2062);
      END_STATE();
    case 1950:
      ACCEPT_TOKEN(sym__PROCEDURES);
      END_STATE();
    case 1951:
      ACCEPT_TOKEN(sym__PROGRAM_ID);
      END_STATE();
    case 1952:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2063);
      END_STATE();
    case 1953:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2064);
      END_STATE();
    case 1954:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2065);
      END_STATE();
    case 1955:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2066);
      END_STATE();
    case 1956:
      ACCEPT_TOKEN(sym__REPOSITORY);
      END_STATE();
    case 1957:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2067);
      END_STATE();
    case 1958:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2068);
      END_STATE();
    case 1959:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2069);
      END_STATE();
    case 1960:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2070);
      END_STATE();
    case 1961:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2071);
      END_STATE();
    case 1962:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2072);
      END_STATE();
    case 1963:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2073);
      END_STATE();
    case 1964:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2074);
      END_STATE();
    case 1965:
      if (lookahead == '-') ADVANCE(2075);
      END_STATE();
    case 1966:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2076);
      END_STATE();
    case 1967:
      ACCEPT_TOKEN(sym__WHEN_OTHER);
      END_STATE();
    case 1968:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2077);
      END_STATE();
    case 1969:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2078);
      END_STATE();
    case 1970:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2079);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(sym__LAST_DETAIL);
      END_STATE();
    case 1972:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2080);
      END_STATE();
    case 1973:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2081);
      END_STATE();
    case 1974:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2082);
      END_STATE();
    case 1975:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2083);
      END_STATE();
    case 1976:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2084);
      END_STATE();
    case 1977:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2085);
      END_STATE();
    case 1978:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2086);
      END_STATE();
    case 1979:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2087);
      END_STATE();
    case 1980:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2088);
      END_STATE();
    case 1981:
      if (lookahead == '-') ADVANCE(2089);
      END_STATE();
    case 1982:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2090);
      END_STATE();
    case 1983:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2091);
      END_STATE();
    case 1984:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2092);
      END_STATE();
    case 1985:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2093);
      END_STATE();
    case 1986:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2094);
      END_STATE();
    case 1987:
      ACCEPT_TOKEN(sym__SIGNED_LONG);
      END_STATE();
    case 1988:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2095);
      END_STATE();
    case 1989:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2096);
      END_STATE();
    case 1990:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2097);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2098);
      END_STATE();
    case 1991:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2099);
      END_STATE();
    case 1992:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2100);
      END_STATE();
    case 1993:
      if (lookahead == 'n') ADVANCE(2101);
      END_STATE();
    case 1994:
      if (lookahead == 'c') ADVANCE(2102);
      END_STATE();
    case 1995:
      if (lookahead == 'c') ADVANCE(2103);
      END_STATE();
    case 1996:
      if (lookahead == 'n') ADVANCE(2104);
      END_STATE();
    case 1997:
      if (lookahead == 'o') ADVANCE(2105);
      END_STATE();
    case 1998:
      if (lookahead == 'n') ADVANCE(2106);
      END_STATE();
    case 1999:
      if (lookahead == 'a') ADVANCE(2107);
      END_STATE();
    case 2000:
      if (lookahead == 'o') ADVANCE(2108);
      END_STATE();
    case 2001:
      if (lookahead == '_') ADVANCE(2109);
      END_STATE();
    case 2002:
      if (lookahead == 'i') ADVANCE(2110);
      END_STATE();
    case 2003:
      if (lookahead == '_') ADVANCE(2111);
      END_STATE();
    case 2004:
      if (lookahead == '_') ADVANCE(2112);
      END_STATE();
    case 2005:
      if (lookahead == 's') ADVANCE(2113);
      END_STATE();
    case 2006:
      if (lookahead == 'l') ADVANCE(2114);
      END_STATE();
    case 2007:
      if (lookahead == 'o') ADVANCE(2115);
      END_STATE();
    case 2008:
      if (lookahead == 'c') ADVANCE(2116);
      END_STATE();
    case 2009:
      if (lookahead == 'c') ADVANCE(2117);
      END_STATE();
    case 2010:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2118);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2119);
      END_STATE();
    case 2011:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2120);
      END_STATE();
    case 2012:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2121);
      END_STATE();
    case 2013:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2122);
      END_STATE();
    case 2014:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2123);
      END_STATE();
    case 2015:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2124);
      END_STATE();
    case 2016:
      ACCEPT_TOKEN(sym__BINARY_CHAR);
      END_STATE();
    case 2017:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2125);
      END_STATE();
    case 2018:
      ACCEPT_TOKEN(sym__BINARY_LONG);
      END_STATE();
    case 2019:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2126);
      END_STATE();
    case 2020:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2127);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym__BYTE_LENGTH);
      END_STATE();
    case 2022:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2128);
      END_STATE();
    case 2023:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2129);
      END_STATE();
    case 2024:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2130);
      END_STATE();
    case 2025:
      if (lookahead == '-') ADVANCE(2131);
      END_STATE();
    case 2026:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2132);
      END_STATE();
    case 2027:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2133);
      END_STATE();
    case 2028:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2134);
      END_STATE();
    case 2029:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2135);
      END_STATE();
    case 2030:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2136);
      END_STATE();
    case 2031:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2137);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym__DAY_OF_WEEK);
      END_STATE();
    case 2033:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2138);
      END_STATE();
    case 2034:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2139);
      END_STATE();
    case 2035:
      ACCEPT_TOKEN(sym__END_COMPUTE);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(sym__END_DISPLAY);
      END_STATE();
    case 2037:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2140);
      END_STATE();
    case 2038:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2141);
      END_STATE();
    case 2039:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2142);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(sym__END_PERFORM);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(sym__END_PROGRAM);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(sym__END_REWRITE);
      END_STATE();
    case 2043:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2143);
      END_STATE();
    case 2044:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2144);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(sym__ENVIRONMENT);
      if (lookahead == '-') ADVANCE(2145);
      END_STATE();
    case 2046:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2146);
      END_STATE();
    case 2047:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2147);
      END_STATE();
    case 2048:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2148);
      END_STATE();
    case 2049:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2149);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym__FUNCTION_ID);
      END_STATE();
    case 2051:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2150);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym__I_O_CONTROL);
      END_STATE();
    case 2053:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2151);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym__INITIALIZED);
      END_STATE();
    case 2055:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2152);
      END_STATE();
    case 2056:
      ACCEPT_TOKEN(sym__INVALID_KEY);
      END_STATE();
    case 2057:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2153);
      END_STATE();
    case 2058:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2154);
      END_STATE();
    case 2059:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2155);
      END_STATE();
    case 2060:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2156);
      END_STATE();
    case 2061:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2157);
      END_STATE();
    case 2062:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2158);
      END_STATE();
    case 2063:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2159);
      END_STATE();
    case 2064:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2160);
      END_STATE();
    case 2065:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2161);
      END_STATE();
    case 2066:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2162);
      END_STATE();
    case 2067:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2163);
      END_STATE();
    case 2068:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2164);
      END_STATE();
    case 2069:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2165);
      END_STATE();
    case 2070:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2166);
      END_STATE();
    case 2071:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2167);
      END_STATE();
    case 2072:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2168);
      END_STATE();
    case 2073:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2169);
      END_STATE();
    case 2074:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2170);
      END_STATE();
    case 2075:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2171);
      END_STATE();
    case 2076:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2172);
      END_STATE();
    case 2077:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2173);
      END_STATE();
    case 2078:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2174);
      END_STATE();
    case 2079:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2175);
      END_STATE();
    case 2080:
      if (lookahead == '-') ADVANCE(2176);
      END_STATE();
    case 2081:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2177);
      END_STATE();
    case 2082:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2178);
      END_STATE();
    case 2083:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2179);
      END_STATE();
    case 2084:
      ACCEPT_TOKEN(sym__NUMVALC_FUNC);
      END_STATE();
    case 2085:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2180);
      END_STATE();
    case 2086:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2181);
      END_STATE();
    case 2087:
      ACCEPT_TOKEN(sym__NO_ADVANCING);
      END_STATE();
    case 2088:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2182);
      END_STATE();
    case 2089:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2183);
      END_STATE();
    case 2090:
      ACCEPT_TOKEN(sym__NOT_OVERFLOW);
      END_STATE();
    case 2091:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2184);
      END_STATE();
    case 2092:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2185);
      END_STATE();
    case 2093:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2186);
      END_STATE();
    case 2094:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2187);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(sym__SIGNED_SHORT);
      END_STATE();
    case 2096:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2188);
      END_STATE();
    case 2097:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2189);
      END_STATE();
    case 2098:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2190);
      END_STATE();
    case 2099:
      ACCEPT_TOKEN(sym__SYNCHRONIZED);
      END_STATE();
    case 2100:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2191);
      END_STATE();
    case 2101:
      if (lookahead == 'g') ADVANCE(2192);
      END_STATE();
    case 2102:
      if (lookahead == 'l') ADVANCE(2193);
      END_STATE();
    case 2103:
      if (lookahead == 'l') ADVANCE(2194);
      END_STATE();
    case 2104:
      if (lookahead == 't') ADVANCE(2195);
      END_STATE();
    case 2105:
      if (lookahead == 'g') ADVANCE(2196);
      END_STATE();
    case 2106:
      if (lookahead == 'm') ADVANCE(2197);
      END_STATE();
    case 2107:
      if (lookahead == 'l') ADVANCE(2198);
      END_STATE();
    case 2108:
      if (lookahead == 'n') ADVANCE(2199);
      END_STATE();
    case 2109:
      if (lookahead == 'c') ADVANCE(2200);
      END_STATE();
    case 2110:
      if (lookahead == 'e') ADVANCE(2201);
      END_STATE();
    case 2111:
      if (lookahead == 'p') ADVANCE(2202);
      END_STATE();
    case 2112:
      if (lookahead == 'c') ADVANCE(2203);
      END_STATE();
    case 2113:
      if (lookahead == '_') ADVANCE(2204);
      END_STATE();
    case 2114:
      if (lookahead == 'a') ADVANCE(2205);
      END_STATE();
    case 2115:
      if (lookahead == 'n') ADVANCE(2206);
      END_STATE();
    case 2116:
      if (lookahead == 'l') ADVANCE(2207);
      END_STATE();
    case 2117:
      if (lookahead == 'l') ADVANCE(2208);
      END_STATE();
    case 2118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2209);
      END_STATE();
    case 2119:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2210);
      END_STATE();
    case 2120:
      ACCEPT_TOKEN(sym__ALPHANUMERIC);
      if (lookahead == '-') ADVANCE(2211);
      END_STATE();
    case 2121:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2212);
      END_STATE();
    case 2122:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2213);
      END_STATE();
    case 2123:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2214);
      END_STATE();
    case 2124:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2215);
      END_STATE();
    case 2125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2216);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(sym__BINARY_SHORT);
      END_STATE();
    case 2127:
      ACCEPT_TOKEN(sym__BLANK_SCREEN);
      END_STATE();
    case 2128:
      ACCEPT_TOKEN(sym__CLOSE_NOFEED);
      END_STATE();
    case 2129:
      ACCEPT_TOKEN(sym__COMMAND_LINE);
      END_STATE();
    case 2130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2217);
      END_STATE();
    case 2131:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2218);
      END_STATE();
    case 2132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2219);
      END_STATE();
    case 2133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2220);
      END_STATE();
    case 2134:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2221);
      END_STATE();
    case 2135:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2222);
      END_STATE();
    case 2136:
      if (lookahead == '-') ADVANCE(2223);
      END_STATE();
    case 2137:
      ACCEPT_TOKEN(sym__CYL_OVERFLOW);
      END_STATE();
    case 2138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2224);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(sym__DECLARATIVES);
      END_STATE();
    case 2140:
      ACCEPT_TOKEN(sym__END_EVALUATE);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(sym__END_FUNCTION);
      END_STATE();
    case 2142:
      ACCEPT_TOKEN(sym__END_MULTIPLY);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(sym__END_SUBTRACT);
      END_STATE();
    case 2144:
      ACCEPT_TOKEN(sym__END_UNSTRING);
      END_STATE();
    case 2145:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2225);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2226);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(sym__EVENT_STATUS);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(sym__FILE_CONTROL);
      END_STATE();
    case 2148:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2227);
      END_STATE();
    case 2149:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2228);
      END_STATE();
    case 2150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2229);
      END_STATE();
    case 2151:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2230);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(sym__INPUT_OUTPUT);
      END_STATE();
    case 2153:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2231);
      END_STATE();
    case 2154:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2232);
      END_STATE();
    case 2155:
      ACCEPT_TOKEN(sym__ORGANIZATION);
      END_STATE();
    case 2156:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2233);
      END_STATE();
    case 2157:
      ACCEPT_TOKEN(sym__PAGE_FOOTING);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(sym__PAGE_HEADING);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(sym__PROGRAM_NAME);
      END_STATE();
    case 2160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2234);
      END_STATE();
    case 2161:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2235);
      END_STATE();
    case 2162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2236);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(sym__REVERSE_FUNC);
      END_STATE();
    case 2164:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2237);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(sym__UNSIGNED_INT);
      END_STATE();
    case 2166:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2238);
      END_STATE();
    case 2167:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2239);
      END_STATE();
    case 2168:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2240);
      END_STATE();
    case 2169:
      if (lookahead == '-') ADVANCE(2241);
      END_STATE();
    case 2170:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2242);
      END_STATE();
    case 2171:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2243);
      END_STATE();
    case 2172:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2244);
      END_STATE();
    case 2173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2245);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(sym__LOCAL_STORAGE);
      END_STATE();
    case 2175:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2246);
      END_STATE();
    case 2176:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2247);
      END_STATE();
    case 2177:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2248);
      END_STATE();
    case 2178:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2249);
      END_STATE();
    case 2179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2250);
      END_STATE();
    case 2180:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2251);
      END_STATE();
    case 2181:
      ACCEPT_TOKEN(sym__NEXT_SENTENCE);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(sym__NOT_EXCEPTION);
      END_STATE();
    case 2183:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2252);
      END_STATE();
    case 2184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2253);
      END_STATE();
    case 2185:
      ACCEPT_TOKEN(sym__SPECIAL_NAMES);
      END_STATE();
    case 2186:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2254);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(sym__SEGMENT_LIMIT);
      END_STATE();
    case 2188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2255);
      END_STATE();
    case 2189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2256);
      END_STATE();
    case 2190:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2257);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(sym__TRIM_FUNCTION);
      END_STATE();
    case 2192:
      if (lookahead == 't') ADVANCE(2258);
      END_STATE();
    case 2193:
      if (lookahead == 'a') ADVANCE(2259);
      END_STATE();
    case 2194:
      if (lookahead == 'a') ADVANCE(2260);
      END_STATE();
    case 2195:
      if (lookahead == '_') ADVANCE(2261);
      END_STATE();
    case 2196:
      if (lookahead == 'r') ADVANCE(2262);
      END_STATE();
    case 2197:
      if (lookahead == 'e') ADVANCE(2263);
      END_STATE();
    case 2198:
      if (lookahead == '_') ADVANCE(2264);
      END_STATE();
    case 2199:
      if (lookahead == '_') ADVANCE(2265);
      END_STATE();
    case 2200:
      if (lookahead == 'l') ADVANCE(2266);
      END_STATE();
    case 2201:
      if (lookahead == 'd') ADVANCE(2267);
      END_STATE();
    case 2202:
      if (lookahead == 'r') ADVANCE(2268);
      END_STATE();
    case 2203:
      if (lookahead == 'l') ADVANCE(2269);
      END_STATE();
    case 2204:
      if (lookahead == 'c') ADVANCE(2270);
      END_STATE();
    case 2205:
      if (lookahead == 'u') ADVANCE(2271);
      END_STATE();
    case 2206:
      if (lookahead == 'i') ADVANCE(2272);
      END_STATE();
    case 2207:
      if (lookahead == 'a') ADVANCE(2273);
      END_STATE();
    case 2208:
      if (lookahead == 'a') ADVANCE(2274);
      END_STATE();
    case 2209:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2275);
      END_STATE();
    case 2210:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2276);
      END_STATE();
    case 2211:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2277);
      END_STATE();
    case 2212:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2278);
      END_STATE();
    case 2213:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2279);
      END_STATE();
    case 2214:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2280);
      END_STATE();
    case 2215:
      ACCEPT_TOKEN(sym__BINARY_C_LONG);
      END_STATE();
    case 2216:
      ACCEPT_TOKEN(sym__BINARY_DOUBLE);
      END_STATE();
    case 2217:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2281);
      END_STATE();
    case 2218:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2282);
      END_STATE();
    case 2219:
      ACCEPT_TOKEN(sym__CONFIGURATION);
      END_STATE();
    case 2220:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2283);
      END_STATE();
    case 2221:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2284);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(sym__CORRESPONDING);
      END_STATE();
    case 2223:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2285);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(sym__DECIMAL_POINT);
      END_STATE();
    case 2225:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2286);
      END_STATE();
    case 2226:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2287);
      END_STATE();
    case 2227:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2288);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(sym__FORMS_OVERLAY);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(sym__FUNCTION_NAME);
      END_STATE();
    case 2230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2289);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(sym__MNEMONIC_NAME);
      END_STATE();
    case 2232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2290);
      END_STATE();
    case 2233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2291);
      END_STATE();
    case 2234:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2292);
      END_STATE();
    case 2235:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2293);
      END_STATE();
    case 2236:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2294);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(sym__REVERSE_VIDEO);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(sym__UNSIGNED_LONG);
      END_STATE();
    case 2239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2295);
      END_STATE();
    case 2240:
      if (lookahead == '-') ADVANCE(2296);
      END_STATE();
    case 2241:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2297);
      END_STATE();
    case 2242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2298);
      END_STATE();
    case 2243:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2299);
      END_STATE();
    case 2244:
      if (lookahead == '-') ADVANCE(2300);
      END_STATE();
    case 2245:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2301);
      END_STATE();
    case 2246:
      ACCEPT_TOKEN(sym__LOCALE_DT_FUNC);
      END_STATE();
    case 2247:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2302);
      END_STATE();
    case 2248:
      if (lookahead == '-') ADVANCE(2303);
      END_STATE();
    case 2249:
      ACCEPT_TOKEN(sym__LINAGE_COUNTER);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(sym__NUMERIC_EDITED);
      END_STATE();
    case 2251:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2304);
      END_STATE();
    case 2252:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2305);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(sym__NOT_SIZE_ERROR);
      END_STATE();
    case 2254:
      ACCEPT_TOKEN(sym__SCREEN_CONTROL);
      END_STATE();
    case 2255:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2306);
      END_STATE();
    case 2256:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2307);
      END_STATE();
    case 2257:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2308);
      END_STATE();
    case 2258:
      if (lookahead == 'h') ADVANCE(2309);
      END_STATE();
    case 2259:
      if (lookahead == 'u') ADVANCE(2310);
      END_STATE();
    case 2260:
      if (lookahead == 'u') ADVANCE(2311);
      END_STATE();
    case 2261:
      if (lookahead == 'e') ADVANCE(2312);
      END_STATE();
    case 2262:
      if (lookahead == 'a') ADVANCE(2313);
      END_STATE();
    case 2263:
      if (lookahead == 'n') ADVANCE(2314);
      END_STATE();
    case 2264:
      if (lookahead == 'c') ADVANCE(2315);
      END_STATE();
    case 2265:
      if (lookahead == 'd') ADVANCE(2316);
      END_STATE();
    case 2266:
      if (lookahead == 'a') ADVANCE(2317);
      END_STATE();
    case 2267:
      if (lookahead == '_') ADVANCE(2318);
      END_STATE();
    case 2268:
      if (lookahead == 'o') ADVANCE(2319);
      END_STATE();
    case 2269:
      if (lookahead == 'a') ADVANCE(2320);
      END_STATE();
    case 2270:
      if (lookahead == 'l') ADVANCE(2321);
      END_STATE();
    case 2271:
      if (lookahead == 's') ADVANCE(2322);
      END_STATE();
    case 2272:
      if (lookahead == 'z') ADVANCE(2323);
      END_STATE();
    case 2273:
      if (lookahead == 'u') ADVANCE(2324);
      END_STATE();
    case 2274:
      if (lookahead == 'u') ADVANCE(2325);
      END_STATE();
    case 2275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2326);
      END_STATE();
    case 2276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2327);
      END_STATE();
    case 2277:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2328);
      END_STATE();
    case 2278:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2329);
      END_STATE();
    case 2279:
      ACCEPT_TOKEN(sym__ARGUMENT_VALUE);
      END_STATE();
    case 2280:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2330);
      END_STATE();
    case 2281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2331);
      END_STATE();
    case 2282:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2332);
      END_STATE();
    case 2283:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2333);
      END_STATE();
    case 2284:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2334);
      END_STATE();
    case 2285:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2335);
      END_STATE();
    case 2286:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2336);
      END_STATE();
    case 2287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2337);
      END_STATE();
    case 2288:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2338);
      END_STATE();
    case 2289:
      ACCEPT_TOKEN(sym__IDENTIFICATION);
      END_STATE();
    case 2290:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2339);
      END_STATE();
    case 2291:
      ACCEPT_TOKEN(sym__PACKED_DECIMAL);
      END_STATE();
    case 2292:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2340);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(sym__REPORT_FOOTING);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(sym__REPORT_HEADING);
      END_STATE();
    case 2295:
      ACCEPT_TOKEN(sym__UNSIGNED_SHORT);
      END_STATE();
    case 2296:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2341);
      END_STATE();
    case 2297:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2342);
      END_STATE();
    case 2298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2343);
      END_STATE();
    case 2299:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2344);
      END_STATE();
    case 2300:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2345);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(sym__LOWER_CASE_FUNC);
      END_STATE();
    case 2302:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2346);
      END_STATE();
    case 2303:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2347);
      END_STATE();
    case 2304:
      ACCEPT_TOKEN(sym__NATIONAL_EDITED);
      END_STATE();
    case 2305:
      ACCEPT_TOKEN(sym__NOT_INVALID_KEY);
      END_STATE();
    case 2306:
      ACCEPT_TOKEN(sym__SOURCE_COMPUTER);
      END_STATE();
    case 2307:
      if (lookahead == '-') ADVANCE(2348);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(sym__SUBSTITUTE_FUNC);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(sym_any_length_clause);
      END_STATE();
    case 2310:
      if (lookahead == 's') ADVANCE(2349);
      END_STATE();
    case 2311:
      if (lookahead == 's') ADVANCE(2350);
      END_STATE();
    case 2312:
      if (lookahead == 'n') ADVANCE(2351);
      END_STATE();
    case 2313:
      if (lookahead == 'm') ADVANCE(2352);
      END_STATE();
    case 2314:
      if (lookahead == 't') ADVANCE(2353);
      END_STATE();
    case 2315:
      if (lookahead == 'l') ADVANCE(2354);
      END_STATE();
    case 2316:
      if (lookahead == 'e') ADVANCE(2355);
      END_STATE();
    case 2317:
      if (lookahead == 'u') ADVANCE(2356);
      END_STATE();
    case 2318:
      if (lookahead == 'c') ADVANCE(2357);
      END_STATE();
    case 2319:
      if (lookahead == 'g') ADVANCE(2358);
      END_STATE();
    case 2320:
      if (lookahead == 'u') ADVANCE(2359);
      END_STATE();
    case 2321:
      if (lookahead == 'a') ADVANCE(2360);
      END_STATE();
    case 2322:
      if (lookahead == 'e') ADVANCE(2361);
      END_STATE();
    case 2323:
      if (lookahead == 'e') ADVANCE(2362);
      END_STATE();
    case 2324:
      if (lookahead == 's') ADVANCE(2363);
      END_STATE();
    case 2325:
      if (lookahead == 's') ADVANCE(2364);
      END_STATE();
    case 2326:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2365);
      END_STATE();
    case 2327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2366);
      END_STATE();
    case 2328:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2367);
      END_STATE();
    case 2329:
      ACCEPT_TOKEN(sym__ARGUMENT_NUMBER);
      END_STATE();
    case 2330:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2368);
      END_STATE();
    case 2331:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2369);
      END_STATE();
    case 2332:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2370);
      END_STATE();
    case 2333:
      ACCEPT_TOKEN(sym__CONTROL_FOOTING);
      END_STATE();
    case 2334:
      ACCEPT_TOKEN(sym__CONTROL_HEADING);
      END_STATE();
    case 2335:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2371);
      END_STATE();
    case 2336:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2372);
      END_STATE();
    case 2337:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2373);
      END_STATE();
    case 2338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2374);
      END_STATE();
    case 2339:
      ACCEPT_TOKEN(sym__OBJECT_COMPUTER);
      END_STATE();
    case 2340:
      ACCEPT_TOKEN(sym__PROGRAM_POINTER);
      END_STATE();
    case 2341:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2375);
      END_STATE();
    case 2342:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2376);
      END_STATE();
    case 2343:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2377);
      END_STATE();
    case 2344:
      ACCEPT_TOKEN(sym__UPPER_CASE_FUNC);
      END_STATE();
    case 2345:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2378);
      END_STATE();
    case 2346:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2379);
      END_STATE();
    case 2347:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2380);
      END_STATE();
    case 2348:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2381);
      END_STATE();
    case 2349:
      if (lookahead == 'e') ADVANCE(2382);
      END_STATE();
    case 2350:
      if (lookahead == 'e') ADVANCE(2383);
      END_STATE();
    case 2351:
      if (lookahead == 't') ADVANCE(2384);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(sym_end_program);
      END_STATE();
    case 2353:
      if (lookahead == '_') ADVANCE(2385);
      END_STATE();
    case 2354:
      if (lookahead == 'a') ADVANCE(2386);
      END_STATE();
    case 2355:
      if (lookahead == 'f') ADVANCE(2387);
      END_STATE();
    case 2356:
      if (lookahead == 's') ADVANCE(2388);
      END_STATE();
    case 2357:
      if (lookahead == 'l') ADVANCE(2389);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(sym_nested_prog);
      END_STATE();
    case 2359:
      if (lookahead == 's') ADVANCE(2390);
      END_STATE();
    case 2360:
      if (lookahead == 'u') ADVANCE(2391);
      END_STATE();
    case 2361:
      ACCEPT_TOKEN(sym_sign_clause);
      END_STATE();
    case 2362:
      if (lookahead == 'd') ADVANCE(2392);
      END_STATE();
    case 2363:
      if (lookahead == 'e') ADVANCE(2393);
      END_STATE();
    case 2364:
      if (lookahead == 'e') ADVANCE(2394);
      END_STATE();
    case 2365:
      ACCEPT_TOKEN(sym__ALPHABETIC_LOWER);
      END_STATE();
    case 2366:
      ACCEPT_TOKEN(sym__ALPHABETIC_UPPER);
      END_STATE();
    case 2367:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2395);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(sym__BACKGROUND_COLOR);
      END_STATE();
    case 2369:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2396);
      END_STATE();
    case 2370:
      ACCEPT_TOKEN(sym__CONCATENATE_FUNC);
      END_STATE();
    case 2371:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2397);
      END_STATE();
    case 2372:
      ACCEPT_TOKEN(sym__ENVIRONMENT_NAME);
      END_STATE();
    case 2373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2398);
      END_STATE();
    case 2374:
      ACCEPT_TOKEN(sym__FOREGROUND_COLOR);
      END_STATE();
    case 2375:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2399);
      END_STATE();
    case 2376:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2400);
      END_STATE();
    case 2377:
      if (lookahead == '-') ADVANCE(2401);
      END_STATE();
    case 2378:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2402);
      END_STATE();
    case 2379:
      ACCEPT_TOKEN(sym__LEVEL_NUMBER_WORD);
      END_STATE();
    case 2380:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2403);
      END_STATE();
    case 2381:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2404);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(sym_based_clause);
      END_STATE();
    case 2383:
      ACCEPT_TOKEN(sym_blank_clause);
      END_STATE();
    case 2384:
      if (lookahead == 'r') ADVANCE(2405);
      END_STATE();
    case 2385:
      if (lookahead == 'd') ADVANCE(2406);
      END_STATE();
    case 2386:
      if (lookahead == 'u') ADVANCE(2407);
      END_STATE();
    case 2387:
      if (lookahead == 'i') ADVANCE(2408);
      END_STATE();
    case 2388:
      if (lookahead == 'e') ADVANCE(2409);
      END_STATE();
    case 2389:
      if (lookahead == 'a') ADVANCE(2410);
      END_STATE();
    case 2390:
      if (lookahead == 'e') ADVANCE(2411);
      END_STATE();
    case 2391:
      if (lookahead == 's') ADVANCE(2412);
      END_STATE();
    case 2392:
      if (lookahead == '_') ADVANCE(2413);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(sym_usage_clause);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(sym_value_clause);
      END_STATE();
    case 2395:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2414);
      END_STATE();
    case 2396:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2415);
      END_STATE();
    case 2397:
      ACCEPT_TOKEN(sym__CURRENT_DATE_FUNC);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(sym__ENVIRONMENT_VALUE);
      END_STATE();
    case 2399:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2416);
      END_STATE();
    case 2400:
      ACCEPT_TOKEN(sym__UPON_COMMAND_LINE);
      END_STATE();
    case 2401:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2417);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2418);
      END_STATE();
    case 2402:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2419);
      END_STATE();
    case 2403:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2420);
      END_STATE();
    case 2404:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2421);
      END_STATE();
    case 2405:
      if (lookahead == 'y') ADVANCE(2422);
      END_STATE();
    case 2406:
      if (lookahead == 'i') ADVANCE(2423);
      END_STATE();
    case 2407:
      if (lookahead == 's') ADVANCE(2424);
      END_STATE();
    case 2408:
      if (lookahead == 'n') ADVANCE(2425);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(sym_global_clause);
      END_STATE();
    case 2410:
      if (lookahead == 'u') ADVANCE(2426);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(sym_occurs_clause);
      END_STATE();
    case 2412:
      if (lookahead == 'e') ADVANCE(2427);
      END_STATE();
    case 2413:
      if (lookahead == 'c') ADVANCE(2428);
      END_STATE();
    case 2414:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2429);
      END_STATE();
    case 2415:
      ACCEPT_TOKEN(sym__COMMITMENT_CONTROL);
      END_STATE();
    case 2416:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2430);
      END_STATE();
    case 2417:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2431);
      END_STATE();
    case 2418:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2432);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(sym__WHEN_COMPILED_FUNC);
      END_STATE();
    case 2420:
      ACCEPT_TOKEN(sym__LEVEL88_NUMBER_WORD);
      END_STATE();
    case 2421:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2433);
      END_STATE();
    case 2422:
      ACCEPT_TOKEN(sym_constant_entry);
      END_STATE();
    case 2423:
      if (lookahead == 'v') ADVANCE(2434);
      END_STATE();
    case 2424:
      if (lookahead == 'e') ADVANCE(2435);
      END_STATE();
    case 2425:
      if (lookahead == 'i') ADVANCE(2436);
      END_STATE();
    case 2426:
      if (lookahead == 's') ADVANCE(2437);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(sym_renames_clause);
      END_STATE();
    case 2428:
      if (lookahead == 'l') ADVANCE(2438);
      END_STATE();
    case 2429:
      ACCEPT_TOKEN(sym__ALPHANUMERIC_EDITED);
      END_STATE();
    case 2430:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2439);
      END_STATE();
    case 2431:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2440);
      END_STATE();
    case 2432:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2441);
      END_STATE();
    case 2433:
      ACCEPT_TOKEN(sym__SUBSTITUTE_CASE_FUNC);
      END_STATE();
    case 2434:
      if (lookahead == 'i') ADVANCE(2442);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(sym_external_clause);
      END_STATE();
    case 2436:
      if (lookahead == 't') ADVANCE(2443);
      END_STATE();
    case 2437:
      if (lookahead == 'e') ADVANCE(2444);
      END_STATE();
    case 2438:
      if (lookahead == 'a') ADVANCE(2445);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(sym__UPON_ARGUMENT_NUMBER);
      END_STATE();
    case 2440:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2446);
      END_STATE();
    case 2441:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2447);
      END_STATE();
    case 2442:
      if (lookahead == 's') ADVANCE(2448);
      END_STATE();
    case 2443:
      if (lookahead == 'i') ADVANCE(2449);
      END_STATE();
    case 2444:
      ACCEPT_TOKEN(sym_justified_clause);
      END_STATE();
    case 2445:
      if (lookahead == 'u') ADVANCE(2450);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(sym__UPON_ENVIRONMENT_NAME);
      END_STATE();
    case 2447:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2451);
      END_STATE();
    case 2448:
      if (lookahead == 'i') ADVANCE(2452);
      END_STATE();
    case 2449:
      if (lookahead == 'o') ADVANCE(2453);
      END_STATE();
    case 2450:
      if (lookahead == 's') ADVANCE(2454);
      END_STATE();
    case 2451:
      ACCEPT_TOKEN(sym__UPON_ENVIRONMENT_VALUE);
      END_STATE();
    case 2452:
      if (lookahead == 'o') ADVANCE(2455);
      END_STATE();
    case 2453:
      if (lookahead == 'n') ADVANCE(2456);
      END_STATE();
    case 2454:
      if (lookahead == 'e') ADVANCE(2457);
      END_STATE();
    case 2455:
      if (lookahead == 'n') ADVANCE(2458);
      END_STATE();
    case 2456:
      ACCEPT_TOKEN(sym_function_definition);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(sym_synchronized_clause);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(sym_environment_division);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 153},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 10},
  [67] = {.lex_state = 10},
  [68] = {.lex_state = 10},
  [69] = {.lex_state = 10},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 10},
  [73] = {.lex_state = 10},
  [74] = {.lex_state = 10},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 10},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 10},
  [80] = {.lex_state = 19},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 10},
  [83] = {.lex_state = 10},
  [84] = {.lex_state = 10},
  [85] = {.lex_state = 19},
  [86] = {.lex_state = 19},
  [87] = {.lex_state = 10},
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 153},
  [90] = {.lex_state = 10},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 153},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 27},
  [95] = {.lex_state = 10},
  [96] = {.lex_state = 19},
  [97] = {.lex_state = 10},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 19},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 153},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 19},
  [107] = {.lex_state = 19},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 19},
  [111] = {.lex_state = 19},
  [112] = {.lex_state = 19},
  [113] = {.lex_state = 19},
  [114] = {.lex_state = 19},
  [115] = {.lex_state = 19},
  [116] = {.lex_state = 19},
  [117] = {.lex_state = 19},
  [118] = {.lex_state = 18},
  [119] = {.lex_state = 19},
  [120] = {.lex_state = 27},
  [121] = {.lex_state = 18},
  [122] = {.lex_state = 18},
  [123] = {.lex_state = 19},
  [124] = {.lex_state = 153},
  [125] = {.lex_state = 19},
  [126] = {.lex_state = 153},
  [127] = {.lex_state = 153},
  [128] = {.lex_state = 19},
  [129] = {.lex_state = 19},
  [130] = {.lex_state = 19},
  [131] = {.lex_state = 153},
  [132] = {.lex_state = 19},
  [133] = {.lex_state = 153},
  [134] = {.lex_state = 153},
  [135] = {.lex_state = 18},
  [136] = {.lex_state = 19},
  [137] = {.lex_state = 19},
  [138] = {.lex_state = 19},
  [139] = {.lex_state = 130},
  [140] = {.lex_state = 153},
  [141] = {.lex_state = 19},
  [142] = {.lex_state = 19},
  [143] = {.lex_state = 153},
  [144] = {.lex_state = 19},
  [145] = {.lex_state = 19},
  [146] = {.lex_state = 153},
  [147] = {.lex_state = 19},
  [148] = {.lex_state = 19},
  [149] = {.lex_state = 153},
  [150] = {.lex_state = 137},
  [151] = {.lex_state = 19},
  [152] = {.lex_state = 153},
  [153] = {.lex_state = 19},
  [154] = {.lex_state = 130},
  [155] = {.lex_state = 153},
  [156] = {.lex_state = 137},
  [157] = {.lex_state = 153},
  [158] = {.lex_state = 19},
  [159] = {.lex_state = 19},
  [160] = {.lex_state = 153},
  [161] = {.lex_state = 153},
  [162] = {.lex_state = 153},
  [163] = {.lex_state = 153},
  [164] = {.lex_state = 153},
  [165] = {.lex_state = 153},
  [166] = {.lex_state = 153},
  [167] = {.lex_state = 153},
  [168] = {.lex_state = 153},
  [169] = {.lex_state = 153},
  [170] = {.lex_state = 19},
  [171] = {.lex_state = 153},
  [172] = {.lex_state = 19},
  [173] = {.lex_state = 153},
  [174] = {.lex_state = 153},
  [175] = {.lex_state = 137},
  [176] = {.lex_state = 153},
  [177] = {.lex_state = 19},
  [178] = {.lex_state = 19},
  [179] = {.lex_state = 153},
  [180] = {.lex_state = 137},
  [181] = {.lex_state = 19},
  [182] = {.lex_state = 153},
  [183] = {.lex_state = 19},
  [184] = {.lex_state = 19},
  [185] = {.lex_state = 19},
  [186] = {.lex_state = 153},
  [187] = {.lex_state = 153},
  [188] = {.lex_state = 153},
  [189] = {.lex_state = 153},
  [190] = {.lex_state = 19},
  [191] = {.lex_state = 153},
  [192] = {.lex_state = 19},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 153},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 153},
  [197] = {.lex_state = 19},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 153},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 19},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 153},
  [224] = {.lex_state = 19},
  [225] = {.lex_state = 153},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 153},
  [229] = {.lex_state = 153},
  [230] = {.lex_state = 19},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 19},
  [233] = {.lex_state = 153},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 153},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 153},
  [239] = {.lex_state = 153},
  [240] = {.lex_state = 153},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 153},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 153},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 153},
  [253] = {.lex_state = 19},
  [254] = {.lex_state = 153},
  [255] = {.lex_state = 153},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_WORD] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_function_definition] = ACTIONS(1),
    [sym_environment_division] = ACTIONS(1),
    [sym_level_number] = ACTIONS(1),
    [sym_level_number_88] = ACTIONS(1),
    [sym_constant_entry] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_external_clause] = ACTIONS(1),
    [sym_global_clause] = ACTIONS(1),
    [sym_picture_x] = ACTIONS(1),
    [sym__picture_9_z] = ACTIONS(1),
    [sym__picture_9_v] = ACTIONS(1),
    [sym_usage_clause] = ACTIONS(1),
    [sym_sign_clause] = ACTIONS(1),
    [sym_occurs_clause] = ACTIONS(1),
    [sym_justified_clause] = ACTIONS(1),
    [sym_synchronized_clause] = ACTIONS(1),
    [sym_blank_clause] = ACTIONS(1),
    [sym_based_clause] = ACTIONS(1),
    [sym_value_clause] = ACTIONS(1),
    [sym_renames_clause] = ACTIONS(1),
    [sym_any_length_clause] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
    [sym_local_storage_section] = ACTIONS(1),
    [sym_linkage_section] = ACTIONS(1),
    [sym_report_section] = ACTIONS(1),
    [sym_screen_section] = ACTIONS(1),
    [sym_nested_prog] = ACTIONS(1),
    [sym_end_program] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_x_string_token1] = ACTIONS(1),
    [aux_sym_x_string_token2] = ACTIONS(1),
    [aux_sym_h_string_token1] = ACTIONS(1),
    [aux_sym_h_string_token2] = ACTIONS(1),
    [aux_sym_n_string_token1] = ACTIONS(1),
    [aux_sym_n_string_token2] = ACTIONS(1),
    [aux_sym_n_string_token3] = ACTIONS(1),
    [aux_sym_n_string_token4] = ACTIONS(1),
    [aux_sym_n_string_token5] = ACTIONS(1),
    [aux_sym_n_string_token6] = ACTIONS(1),
    [aux_sym_n_string_token7] = ACTIONS(1),
    [aux_sym_n_string_token8] = ACTIONS(1),
    [sym__ACCEPT] = ACTIONS(1),
    [sym__ACCESS] = ACTIONS(1),
    [sym__ADD] = ACTIONS(1),
    [sym__ADDRESS] = ACTIONS(1),
    [sym__ADVANCING] = ACTIONS(1),
    [sym__AFTER] = ACTIONS(1),
    [sym__ALL] = ACTIONS(1),
    [sym__ALLOCATE] = ACTIONS(1),
    [sym__ALPHABET] = ACTIONS(1),
    [sym__ALPHABETIC] = ACTIONS(1),
    [sym__ALPHABETIC_LOWER] = ACTIONS(1),
    [sym__ALPHABETIC_UPPER] = ACTIONS(1),
    [sym__ALPHANUMERIC] = ACTIONS(1),
    [sym__ALPHANUMERIC_EDITED] = ACTIONS(1),
    [sym__ALSO] = ACTIONS(1),
    [sym__ALTER] = ACTIONS(1),
    [sym__ALTERNATE] = ACTIONS(1),
    [sym__AND] = ACTIONS(1),
    [sym__ANY] = ACTIONS(1),
    [sym__APPLY] = ACTIONS(1),
    [sym__ARE] = ACTIONS(1),
    [sym__AREA] = ACTIONS(1),
    [sym__ARGUMENT_NUMBER] = ACTIONS(1),
    [sym__ARGUMENT_VALUE] = ACTIONS(1),
    [sym__AS] = ACTIONS(1),
    [sym__ASCENDING] = ACTIONS(1),
    [sym__ASSIGN] = ACTIONS(1),
    [sym__AT] = ACTIONS(1),
    [sym__AUTO] = ACTIONS(1),
    [sym__AUTOMATIC] = ACTIONS(1),
    [sym__BACKGROUND_COLOR] = ACTIONS(1),
    [sym__BASED] = ACTIONS(1),
    [sym__BEFORE] = ACTIONS(1),
    [sym__BELL] = ACTIONS(1),
    [sym__BINARY] = ACTIONS(1),
    [sym__BINARY_C_LONG] = ACTIONS(1),
    [sym__BINARY_CHAR] = ACTIONS(1),
    [sym__BINARY_DOUBLE] = ACTIONS(1),
    [sym__BINARY_LONG] = ACTIONS(1),
    [sym__BINARY_SHORT] = ACTIONS(1),
    [sym__BLANK] = ACTIONS(1),
    [sym__BLANK_LINE] = ACTIONS(1),
    [sym__BLANK_SCREEN] = ACTIONS(1),
    [sym__BLINK] = ACTIONS(1),
    [sym__BLOCK] = ACTIONS(1),
    [sym__BOTTOM] = ACTIONS(1),
    [sym__BY] = ACTIONS(1),
    [sym__BYTE_LENGTH] = ACTIONS(1),
    [sym__CALL] = ACTIONS(1),
    [sym__CANCEL] = ACTIONS(1),
    [sym__CH] = ACTIONS(1),
    [sym__CHAINING] = ACTIONS(1),
    [sym__CHARACTER] = ACTIONS(1),
    [sym__CHARACTERS] = ACTIONS(1),
    [sym__CLASS] = ACTIONS(1),
    [sym__CLASS_NAME] = ACTIONS(1),
    [sym__CLOSE] = ACTIONS(1),
    [sym__CLOSE_NOFEED] = ACTIONS(1),
    [sym__CODE] = ACTIONS(1),
    [sym__CODE_SET] = ACTIONS(1),
    [sym__COLLATING] = ACTIONS(1),
    [sym__COL] = ACTIONS(1),
    [sym__COLS] = ACTIONS(1),
    [sym__COLUMN] = ACTIONS(1),
    [sym__COLUMNS] = ACTIONS(1),
    [sym__COMMA] = ACTIONS(1),
    [sym__COMMAND_LINE] = ACTIONS(1),
    [sym__COMMA_DELIM] = ACTIONS(1),
    [sym__COMMIT] = ACTIONS(1),
    [sym__COMMITMENT_CONTROL] = ACTIONS(1),
    [sym__COMMON] = ACTIONS(1),
    [sym__COMP] = ACTIONS(1),
    [sym__COMPUTE] = ACTIONS(1),
    [sym__COMP_1] = ACTIONS(1),
    [sym__COMP_2] = ACTIONS(1),
    [sym__COMP_3] = ACTIONS(1),
    [sym__COMP_4] = ACTIONS(1),
    [sym__COMP_5] = ACTIONS(1),
    [sym__COMP_X] = ACTIONS(1),
    [sym__CONCATENATE_FUNC] = ACTIONS(1),
    [sym__CONFIGURATION] = ACTIONS(1),
    [sym__CONSTANT] = ACTIONS(1),
    [sym__CONTAINS] = ACTIONS(1),
    [sym__CONTENT] = ACTIONS(1),
    [sym__CONTINUE] = ACTIONS(1),
    [sym__CONTROL] = ACTIONS(1),
    [sym__CONTROLS] = ACTIONS(1),
    [sym__CONTROL_FOOTING] = ACTIONS(1),
    [sym__CONTROL_HEADING] = ACTIONS(1),
    [sym__CONVERTING] = ACTIONS(1),
    [sym__CORE_INDEX] = ACTIONS(1),
    [sym__CORRESPONDING] = ACTIONS(1),
    [sym__COUNT] = ACTIONS(1),
    [sym__CRT] = ACTIONS(1),
    [sym__CURRENCY] = ACTIONS(1),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(1),
    [sym__CURSOR] = ACTIONS(1),
    [sym__CYCLE] = ACTIONS(1),
    [sym__CYL_OVERFLOW] = ACTIONS(1),
    [sym__DATA] = ACTIONS(1),
    [sym__DATE] = ACTIONS(1),
    [sym__DAY] = ACTIONS(1),
    [sym__DAY_OF_WEEK] = ACTIONS(1),
    [sym__DE] = ACTIONS(1),
    [sym__DEBUGGING] = ACTIONS(1),
    [sym__DECIMAL_POINT] = ACTIONS(1),
    [sym__DECLARATIVES] = ACTIONS(1),
    [sym__DEFAULT] = ACTIONS(1),
    [sym__DELETE] = ACTIONS(1),
    [sym__DELIMITED] = ACTIONS(1),
    [sym__DELIMITER] = ACTIONS(1),
    [sym__DEPENDING] = ACTIONS(1),
    [sym__DESCENDING] = ACTIONS(1),
    [sym__DETAIL] = ACTIONS(1),
    [sym__DISK] = ACTIONS(1),
    [sym__DISPLAY] = ACTIONS(1),
    [sym__DIVIDE] = ACTIONS(1),
    [sym__DIVISION] = ACTIONS(1),
    [sym__DOWN] = ACTIONS(1),
    [sym__DUPLICATES] = ACTIONS(1),
    [sym__DYNAMIC] = ACTIONS(1),
    [sym__EBCDIC] = ACTIONS(1),
    [sym__ELSE] = ACTIONS(1),
    [sym__END] = ACTIONS(1),
    [sym__END_ACCEPT] = ACTIONS(1),
    [sym__END_ADD] = ACTIONS(1),
    [sym__END_CALL] = ACTIONS(1),
    [sym__END_COMPUTE] = ACTIONS(1),
    [sym__END_DELETE] = ACTIONS(1),
    [sym__END_DISPLAY] = ACTIONS(1),
    [sym__END_DIVIDE] = ACTIONS(1),
    [sym__END_EVALUATE] = ACTIONS(1),
    [sym__END_FUNCTION] = ACTIONS(1),
    [sym__END_IF] = ACTIONS(1),
    [sym__END_MULTIPLY] = ACTIONS(1),
    [sym__END_PERFORM] = ACTIONS(1),
    [sym__END_PROGRAM] = ACTIONS(1),
    [sym__END_READ] = ACTIONS(1),
    [sym__END_RETURN] = ACTIONS(1),
    [sym__END_REWRITE] = ACTIONS(1),
    [sym__END_SEARCH] = ACTIONS(1),
    [sym__END_START] = ACTIONS(1),
    [sym__END_STRING] = ACTIONS(1),
    [sym__END_SUBTRACT] = ACTIONS(1),
    [sym__END_UNSTRING] = ACTIONS(1),
    [sym__END_WRITE] = ACTIONS(1),
    [sym__ENTRY] = ACTIONS(1),
    [sym__ENVIRONMENT] = ACTIONS(1),
    [sym__ENVIRONMENT_NAME] = ACTIONS(1),
    [sym__ENVIRONMENT_VALUE] = ACTIONS(1),
    [sym__EOL] = ACTIONS(1),
    [sym__EOP] = ACTIONS(1),
    [sym__EOS] = ACTIONS(1),
    [sym__EQUAL] = ACTIONS(1),
    [sym__EQUALS] = ACTIONS(1),
    [sym__ERASE] = ACTIONS(1),
    [sym__ERROR] = ACTIONS(1),
    [sym__ESCAPE] = ACTIONS(1),
    [sym__EVALUATE] = ACTIONS(1),
    [sym__EVENT_STATUS] = ACTIONS(1),
    [sym__EXCEPTION] = ACTIONS(1),
    [sym__EXCLUSIVE] = ACTIONS(1),
    [sym__EXIT] = ACTIONS(1),
    [sym__EXTEND] = ACTIONS(1),
    [sym__EXTERNAL] = ACTIONS(1),
    [sym__FD] = ACTIONS(1),
    [sym__FILE_CONTROL] = ACTIONS(1),
    [sym__FILE_ID] = ACTIONS(1),
    [sym__FILLER] = ACTIONS(1),
    [sym__FINAL] = ACTIONS(1),
    [sym__FIRST] = ACTIONS(1),
    [sym__FOOTING] = ACTIONS(1),
    [sym__FOR] = ACTIONS(1),
    [sym__FOREGROUND_COLOR] = ACTIONS(1),
    [sym__FOREVER] = ACTIONS(1),
    [sym__FORMS_OVERLAY] = ACTIONS(1),
    [sym__FREE] = ACTIONS(1),
    [sym__FROM] = ACTIONS(1),
    [sym__FULL] = ACTIONS(1),
    [sym__FUNCTION] = ACTIONS(1),
    [sym__FUNCTION_ID] = ACTIONS(1),
    [sym__FUNCTION_NAME] = ACTIONS(1),
    [sym__GE] = ACTIONS(1),
    [sym__GENERATE] = ACTIONS(1),
    [sym__GIVING] = ACTIONS(1),
    [sym__GLOBAL] = ACTIONS(1),
    [sym__GO] = ACTIONS(1),
    [sym__GOBACK] = ACTIONS(1),
    [sym__GREATER] = ACTIONS(1),
    [sym__GROUP] = ACTIONS(1),
    [sym__HEADING] = ACTIONS(1),
    [sym__HIGHLIGHT] = ACTIONS(1),
    [anon_sym_high_DASHvalue] = ACTIONS(1),
    [anon_sym_high_DASHValue] = ACTIONS(1),
    [anon_sym_high_DASHVALUE] = ACTIONS(1),
    [anon_sym_High_DASHvalue] = ACTIONS(1),
    [anon_sym_High_DASHValue] = ACTIONS(1),
    [anon_sym_High_DASHVALUE] = ACTIONS(1),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(1),
    [anon_sym_HIGH_DASHValue] = ACTIONS(1),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(1),
    [sym__IDENTIFICATION] = ACTIONS(1),
    [sym__IF] = ACTIONS(1),
    [sym__IGNORE] = ACTIONS(1),
    [sym__IGNORING] = ACTIONS(1),
    [sym__IN] = ACTIONS(1),
    [sym__INDEX] = ACTIONS(1),
    [sym__INDEXED] = ACTIONS(1),
    [sym__INDICATE] = ACTIONS(1),
    [sym__INITIALIZE] = ACTIONS(1),
    [sym__INITIALIZED] = ACTIONS(1),
    [sym__INITIATE] = ACTIONS(1),
    [sym__INPUT] = ACTIONS(1),
    [sym__INPUT_OUTPUT] = ACTIONS(1),
    [sym__INSPECT] = ACTIONS(1),
    [sym__INTO] = ACTIONS(1),
    [sym__INTRINSIC] = ACTIONS(1),
    [sym__INVALID] = ACTIONS(1),
    [sym__INVALID_KEY] = ACTIONS(1),
    [sym__IS] = ACTIONS(1),
    [sym__I_O] = ACTIONS(1),
    [sym__I_O_CONTROL] = ACTIONS(1),
    [sym__JUSTIFIED] = ACTIONS(1),
    [sym__KEY] = ACTIONS(1),
    [sym__LABEL] = ACTIONS(1),
    [sym__LAST] = ACTIONS(1),
    [sym__LAST_DETAIL] = ACTIONS(1),
    [sym__LE] = ACTIONS(1),
    [sym__LEADING] = ACTIONS(1),
    [sym__LEFT] = ACTIONS(1),
    [sym__LENGTH] = ACTIONS(1),
    [sym__LESS] = ACTIONS(1),
    [sym__LEVEL_NUMBER_WORD] = ACTIONS(1),
    [sym__LEVEL88_NUMBER_WORD] = ACTIONS(1),
    [sym__LIMIT] = ACTIONS(1),
    [sym__LIMITS] = ACTIONS(1),
    [sym__LINAGE] = ACTIONS(1),
    [sym__LINAGE_COUNTER] = ACTIONS(1),
    [sym__LINE] = ACTIONS(1),
    [sym__LINES] = ACTIONS(1),
    [sym__LINKAGE] = ACTIONS(1),
    [sym__LOCALE] = ACTIONS(1),
    [sym__LOCALE_DT_FUNC] = ACTIONS(1),
    [sym__LOCAL_STORAGE] = ACTIONS(1),
    [sym__LOCK] = ACTIONS(1),
    [sym__LOWER_CASE_FUNC] = ACTIONS(1),
    [sym__LOWLIGHT] = ACTIONS(1),
    [anon_sym_low_DASHvalue] = ACTIONS(1),
    [anon_sym_low_DASHValue] = ACTIONS(1),
    [anon_sym_low_DASHVALUE] = ACTIONS(1),
    [anon_sym_Low_DASHvalue] = ACTIONS(1),
    [anon_sym_Low_DASHValue] = ACTIONS(1),
    [anon_sym_Low_DASHVALUE] = ACTIONS(1),
    [anon_sym_LOW_DASHvalue] = ACTIONS(1),
    [anon_sym_LOW_DASHValue] = ACTIONS(1),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(1),
    [sym__MANUAL] = ACTIONS(1),
    [sym__MEMORY] = ACTIONS(1),
    [sym__MERGE] = ACTIONS(1),
    [sym__MINUS] = ACTIONS(1),
    [sym__MNEMONIC_NAME] = ACTIONS(1),
    [sym__MODE] = ACTIONS(1),
    [sym__MOVE] = ACTIONS(1),
    [sym__MULTIPLE] = ACTIONS(1),
    [sym__MULTIPLY] = ACTIONS(1),
    [sym__NATIONAL] = ACTIONS(1),
    [sym__NATIONAL_EDITED] = ACTIONS(1),
    [sym__NATIVE] = ACTIONS(1),
    [sym__NE] = ACTIONS(1),
    [sym__NEGATIVE] = ACTIONS(1),
    [sym__NEXT] = ACTIONS(1),
    [sym__NEXT_SENTENCE] = ACTIONS(1),
    [sym__NO] = ACTIONS(1),
    [sym__NOMINAL] = ACTIONS(1),
    [sym__NOT] = ACTIONS(1),
    [sym__NOT_END] = ACTIONS(1),
    [sym__NOT_EOP] = ACTIONS(1),
    [sym__NOT_EXCEPTION] = ACTIONS(1),
    [sym__NOT_INVALID_KEY] = ACTIONS(1),
    [sym__NOT_OVERFLOW] = ACTIONS(1),
    [sym__NOT_SIZE_ERROR] = ACTIONS(1),
    [sym__NO_ADVANCING] = ACTIONS(1),
    [sym__NUMBER] = ACTIONS(1),
    [sym__NUMBERS] = ACTIONS(1),
    [sym__NUMERIC] = ACTIONS(1),
    [sym__NUMERIC_EDITED] = ACTIONS(1),
    [sym__NUMVALC_FUNC] = ACTIONS(1),
    [sym__OBJECT_COMPUTER] = ACTIONS(1),
    [sym__OCCURS] = ACTIONS(1),
    [sym__OF] = ACTIONS(1),
    [sym__OFF] = ACTIONS(1),
    [sym__OMITTED] = ACTIONS(1),
    [sym__ON] = ACTIONS(1),
    [sym__ONLY] = ACTIONS(1),
    [sym__OPEN] = ACTIONS(1),
    [sym__OPTIONAL] = ACTIONS(1),
    [sym__OR] = ACTIONS(1),
    [sym__ORDER] = ACTIONS(1),
    [sym__ORGANIZATION] = ACTIONS(1),
    [sym__OTHER] = ACTIONS(1),
    [sym__OUTPUT] = ACTIONS(1),
    [sym__OVERFLOW] = ACTIONS(1),
    [sym__OVERLINE] = ACTIONS(1),
    [sym__PACKED_DECIMAL] = ACTIONS(1),
    [sym__PADDING] = ACTIONS(1),
    [sym__PAGE] = ACTIONS(1),
    [sym__PAGE_FOOTING] = ACTIONS(1),
    [sym__PAGE_HEADING] = ACTIONS(1),
    [sym__PARAGRAPH] = ACTIONS(1),
    [sym__PERFORM] = ACTIONS(1),
    [sym__PIC] = ACTIONS(1),
    [sym__PICTURE] = ACTIONS(1),
    [sym__PLUS] = ACTIONS(1),
    [sym__POINTER] = ACTIONS(1),
    [sym__POSITION] = ACTIONS(1),
    [sym__POSITIVE] = ACTIONS(1),
    [sym__PRESENT] = ACTIONS(1),
    [sym__PREVIOUS] = ACTIONS(1),
    [sym__PRINTER] = ACTIONS(1),
    [sym__PRINTING] = ACTIONS(1),
    [sym__PROCEDURE] = ACTIONS(1),
    [sym__PROCEDURES] = ACTIONS(1),
    [sym__PROCEED] = ACTIONS(1),
    [sym__PROGRAM] = ACTIONS(1),
    [sym__PROGRAM_ID] = ACTIONS(1),
    [sym__PROGRAM_NAME] = ACTIONS(1),
    [sym__PROGRAM_POINTER] = ACTIONS(1),
    [sym__PROMPT] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_QUOTE] = ACTIONS(1),
    [anon_sym_Quote] = ACTIONS(1),
    [sym__RANDOM] = ACTIONS(1),
    [sym__RD] = ACTIONS(1),
    [sym__READ] = ACTIONS(1),
    [sym__RECORD] = ACTIONS(1),
    [sym__RECORDING] = ACTIONS(1),
    [sym__RECORDS] = ACTIONS(1),
    [sym__RECURSIVE] = ACTIONS(1),
    [sym__REDEFINES] = ACTIONS(1),
    [sym__REEL] = ACTIONS(1),
    [sym__REFERENCE] = ACTIONS(1),
    [sym__RELATIVE] = ACTIONS(1),
    [sym__RELEASE] = ACTIONS(1),
    [sym__REMAINDER] = ACTIONS(1),
    [sym__REMOVAL] = ACTIONS(1),
    [sym__RENAMES] = ACTIONS(1),
    [sym__REPLACING] = ACTIONS(1),
    [sym__REPORT] = ACTIONS(1),
    [sym__REPORTING] = ACTIONS(1),
    [sym__REPORTS] = ACTIONS(1),
    [sym__REPORT_FOOTING] = ACTIONS(1),
    [sym__REPORT_HEADING] = ACTIONS(1),
    [sym__REPOSITORY] = ACTIONS(1),
    [sym__REQUIRED] = ACTIONS(1),
    [sym__RESERVE] = ACTIONS(1),
    [sym__RETURN] = ACTIONS(1),
    [sym__RETURNING] = ACTIONS(1),
    [sym__REVERSE_FUNC] = ACTIONS(1),
    [sym__REVERSE_VIDEO] = ACTIONS(1),
    [sym__REWIND] = ACTIONS(1),
    [sym__REWRITE] = ACTIONS(1),
    [sym__RIGHT] = ACTIONS(1),
    [sym__ROLLBACK] = ACTIONS(1),
    [sym__ROUNDED] = ACTIONS(1),
    [sym__RUN] = ACTIONS(1),
    [sym__SAME] = ACTIONS(1),
    [sym__SCREEN] = ACTIONS(1),
    [sym__SCREEN_CONTROL] = ACTIONS(1),
    [sym__SCROLL] = ACTIONS(1),
    [sym__SD] = ACTIONS(1),
    [sym__SEARCH] = ACTIONS(1),
    [sym__SECTION] = ACTIONS(1),
    [sym__SECURE] = ACTIONS(1),
    [sym__SEGMENT_LIMIT] = ACTIONS(1),
    [sym__SELECT] = ACTIONS(1),
    [sym__SEMI_COLON] = ACTIONS(1),
    [sym__SENTENCE] = ACTIONS(1),
    [sym__SEPARATE] = ACTIONS(1),
    [sym__SEQUENCE] = ACTIONS(1),
    [sym__SEQUENTIAL] = ACTIONS(1),
    [sym__SET] = ACTIONS(1),
    [sym__SHARING] = ACTIONS(1),
    [sym__SIGN] = ACTIONS(1),
    [sym__SIGNED] = ACTIONS(1),
    [sym__SIGNED_INT] = ACTIONS(1),
    [sym__SIGNED_LONG] = ACTIONS(1),
    [sym__SIGNED_SHORT] = ACTIONS(1),
    [sym__SIZE] = ACTIONS(1),
    [sym__SIZE_ERROR] = ACTIONS(1),
    [sym__SORT] = ACTIONS(1),
    [sym__SORT_MERGE] = ACTIONS(1),
    [sym__SOURCE] = ACTIONS(1),
    [sym__SOURCE_COMPUTER] = ACTIONS(1),
    [anon_sym_space] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_Space] = ACTIONS(1),
    [sym__SPECIAL_NAMES] = ACTIONS(1),
    [sym__STANDARD] = ACTIONS(1),
    [sym__STANDARD_1] = ACTIONS(1),
    [sym__STANDARD_2] = ACTIONS(1),
    [sym__START] = ACTIONS(1),
    [sym__STATUS] = ACTIONS(1),
    [sym__STOP] = ACTIONS(1),
    [sym__STRING] = ACTIONS(1),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(1),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(1),
    [sym__SUBTRACT] = ACTIONS(1),
    [sym__SUM] = ACTIONS(1),
    [sym__SUPPRESS] = ACTIONS(1),
    [sym__SYMBOLIC] = ACTIONS(1),
    [sym__SYNCHRONIZED] = ACTIONS(1),
    [sym__TALLYING] = ACTIONS(1),
    [sym__TAPE] = ACTIONS(1),
    [sym__TERMINATE] = ACTIONS(1),
    [sym__TEST] = ACTIONS(1),
    [sym__THAN] = ACTIONS(1),
    [sym__THEN] = ACTIONS(1),
    [sym__THRU] = ACTIONS(1),
    [sym__TIME] = ACTIONS(1),
    [sym__TIMES] = ACTIONS(1),
    [sym__TO] = ACTIONS(1),
    [sym__TOK_FALSE] = ACTIONS(1),
    [sym__TOK_FILE] = ACTIONS(1),
    [sym__TOK_INITIAL] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_Null] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [sym__TOK_TRUE] = ACTIONS(1),
    [sym__TOP] = ACTIONS(1),
    [sym__TRACKS] = ACTIONS(1),
    [sym__TRAILING] = ACTIONS(1),
    [sym__TRANSFORM] = ACTIONS(1),
    [sym__TRIM_FUNCTION] = ACTIONS(1),
    [sym__TYPE] = ACTIONS(1),
    [sym__UNDERLINE] = ACTIONS(1),
    [sym__UNIT] = ACTIONS(1),
    [sym__UNLOCK] = ACTIONS(1),
    [sym__UNSIGNED] = ACTIONS(1),
    [sym__UNSIGNED_INT] = ACTIONS(1),
    [sym__UNSIGNED_LONG] = ACTIONS(1),
    [sym__UNSIGNED_SHORT] = ACTIONS(1),
    [sym__UNSTRING] = ACTIONS(1),
    [sym__UNTIL] = ACTIONS(1),
    [sym__UP] = ACTIONS(1),
    [sym__UPDATE] = ACTIONS(1),
    [sym__UPON] = ACTIONS(1),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(1),
    [sym__UPON_COMMAND_LINE] = ACTIONS(1),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(1),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(1),
    [sym__UPPER_CASE_FUNC] = ACTIONS(1),
    [sym__USAGE] = ACTIONS(1),
    [sym__USE] = ACTIONS(1),
    [sym__USING] = ACTIONS(1),
    [sym__VALUE] = ACTIONS(1),
    [sym__VARYING] = ACTIONS(1),
    [sym__WAIT] = ACTIONS(1),
    [sym__WHEN] = ACTIONS(1),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(1),
    [sym__WHEN_OTHER] = ACTIONS(1),
    [sym__WITH] = ACTIONS(1),
    [sym__WORDS] = ACTIONS(1),
    [sym__WORKING_STORAGE] = ACTIONS(1),
    [sym__WRITE] = ACTIONS(1),
    [sym__YYYYDDD] = ACTIONS(1),
    [sym__YYYYMMDD] = ACTIONS(1),
    [anon_sym_zero] = ACTIONS(1),
    [anon_sym_ZERO] = ACTIONS(1),
    [anon_sym_Zero] = ACTIONS(1),
  },
  [1] = {
    [sym_start] = STATE(257),
    [sym_program_definition] = STATE(149),
    [sym_identification_division] = STATE(150),
    [aux_sym_start_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__IDENTIFICATION] = ACTIONS(5),
  },
  [2] = {
    [sym__identifier] = STATE(100),
    [sym_qualified_word] = STATE(64),
    [sym__exp_list] = STATE(231),
    [sym__exp] = STATE(100),
    [sym__binary_exp] = STATE(100),
    [sym__unary_exp] = STATE(100),
    [sym_positive_exp] = STATE(100),
    [sym_negative_exp] = STATE(100),
    [sym_add_exp] = STATE(100),
    [sym_sub_exp] = STATE(100),
    [sym_mul_exp] = STATE(100),
    [sym_div_exp] = STATE(100),
    [sym_pow_exp] = STATE(100),
    [sym__arith_x] = STATE(100),
    [sym__basic_literal] = STATE(100),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(100),
    [sym_linage_counter] = STATE(100),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [3] = {
    [sym__identifier] = STATE(141),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(141),
    [sym__binary_exp] = STATE(141),
    [sym__unary_exp] = STATE(141),
    [sym_positive_exp] = STATE(141),
    [sym_negative_exp] = STATE(141),
    [sym_add_exp] = STATE(141),
    [sym_sub_exp] = STATE(141),
    [sym_mul_exp] = STATE(141),
    [sym_div_exp] = STATE(141),
    [sym_pow_exp] = STATE(141),
    [sym__arith_x] = STATE(141),
    [sym__basic_literal] = STATE(141),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(141),
    [sym_linage_counter] = STATE(141),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [4] = {
    [sym__identifier] = STATE(85),
    [sym_qualified_word] = STATE(64),
    [sym__exp_list] = STATE(241),
    [sym__exp] = STATE(85),
    [sym__binary_exp] = STATE(85),
    [sym__unary_exp] = STATE(85),
    [sym_positive_exp] = STATE(85),
    [sym_negative_exp] = STATE(85),
    [sym_add_exp] = STATE(85),
    [sym_sub_exp] = STATE(85),
    [sym_mul_exp] = STATE(85),
    [sym_div_exp] = STATE(85),
    [sym_pow_exp] = STATE(85),
    [sym__arith_x] = STATE(85),
    [sym__basic_literal] = STATE(85),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(85),
    [sym_linage_counter] = STATE(85),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [5] = {
    [sym__identifier] = STATE(100),
    [sym_qualified_word] = STATE(64),
    [sym__exp_list] = STATE(210),
    [sym__exp] = STATE(100),
    [sym__binary_exp] = STATE(100),
    [sym__unary_exp] = STATE(100),
    [sym_positive_exp] = STATE(100),
    [sym_negative_exp] = STATE(100),
    [sym_add_exp] = STATE(100),
    [sym_sub_exp] = STATE(100),
    [sym_mul_exp] = STATE(100),
    [sym_div_exp] = STATE(100),
    [sym_pow_exp] = STATE(100),
    [sym__arith_x] = STATE(100),
    [sym__basic_literal] = STATE(100),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(100),
    [sym_linage_counter] = STATE(100),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [6] = {
    [sym__identifier] = STATE(109),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(109),
    [sym__binary_exp] = STATE(109),
    [sym__unary_exp] = STATE(109),
    [sym_positive_exp] = STATE(109),
    [sym_negative_exp] = STATE(109),
    [sym_add_exp] = STATE(109),
    [sym_sub_exp] = STATE(109),
    [sym_mul_exp] = STATE(109),
    [sym_div_exp] = STATE(109),
    [sym_pow_exp] = STATE(109),
    [sym__arith_x] = STATE(109),
    [sym__basic_literal] = STATE(109),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(109),
    [sym__locale_dt_args] = STATE(210),
    [sym_linage_counter] = STATE(109),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [7] = {
    [sym__identifier] = STATE(80),
    [sym_qualified_word] = STATE(64),
    [sym__exp_list] = STATE(249),
    [sym__exp] = STATE(80),
    [sym__binary_exp] = STATE(80),
    [sym__unary_exp] = STATE(80),
    [sym_positive_exp] = STATE(80),
    [sym_negative_exp] = STATE(80),
    [sym_add_exp] = STATE(80),
    [sym_sub_exp] = STATE(80),
    [sym_mul_exp] = STATE(80),
    [sym_div_exp] = STATE(80),
    [sym_pow_exp] = STATE(80),
    [sym__arith_x] = STATE(80),
    [sym__basic_literal] = STATE(80),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(80),
    [sym_linage_counter] = STATE(80),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [8] = {
    [sym__identifier] = STATE(96),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(96),
    [sym__binary_exp] = STATE(96),
    [sym__unary_exp] = STATE(96),
    [sym_positive_exp] = STATE(96),
    [sym_negative_exp] = STATE(96),
    [sym_add_exp] = STATE(96),
    [sym_sub_exp] = STATE(96),
    [sym_mul_exp] = STATE(96),
    [sym_div_exp] = STATE(96),
    [sym_pow_exp] = STATE(96),
    [sym__arith_x] = STATE(96),
    [sym__basic_literal] = STATE(96),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(96),
    [sym__numvalc_args] = STATE(236),
    [sym_linage_counter] = STATE(96),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [9] = {
    [sym__identifier] = STATE(110),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(110),
    [sym__binary_exp] = STATE(110),
    [sym__unary_exp] = STATE(110),
    [sym_positive_exp] = STATE(110),
    [sym_negative_exp] = STATE(110),
    [sym_add_exp] = STATE(110),
    [sym_sub_exp] = STATE(110),
    [sym_mul_exp] = STATE(110),
    [sym_div_exp] = STATE(110),
    [sym_pow_exp] = STATE(110),
    [sym__arith_x] = STATE(110),
    [sym__basic_literal] = STATE(110),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(110),
    [sym__trim_args] = STATE(210),
    [sym_linage_counter] = STATE(110),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [10] = {
    [sym__identifier] = STATE(86),
    [sym_qualified_word] = STATE(64),
    [sym__exp_list] = STATE(245),
    [sym__exp] = STATE(86),
    [sym__binary_exp] = STATE(86),
    [sym__unary_exp] = STATE(86),
    [sym_positive_exp] = STATE(86),
    [sym_negative_exp] = STATE(86),
    [sym_add_exp] = STATE(86),
    [sym_sub_exp] = STATE(86),
    [sym_mul_exp] = STATE(86),
    [sym_div_exp] = STATE(86),
    [sym_pow_exp] = STATE(86),
    [sym__arith_x] = STATE(86),
    [sym__basic_literal] = STATE(86),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(86),
    [sym_linage_counter] = STATE(86),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [11] = {
    [sym__identifier] = STATE(114),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(114),
    [sym__binary_exp] = STATE(114),
    [sym__unary_exp] = STATE(114),
    [sym_positive_exp] = STATE(114),
    [sym_negative_exp] = STATE(114),
    [sym_add_exp] = STATE(114),
    [sym_sub_exp] = STATE(114),
    [sym_mul_exp] = STATE(114),
    [sym_div_exp] = STATE(114),
    [sym_pow_exp] = STATE(114),
    [sym__arith_x] = STATE(114),
    [sym__basic_literal] = STATE(114),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(114),
    [sym_linage_counter] = STATE(114),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [12] = {
    [sym__identifier] = STATE(137),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(137),
    [sym__binary_exp] = STATE(137),
    [sym__unary_exp] = STATE(137),
    [sym_positive_exp] = STATE(137),
    [sym_negative_exp] = STATE(137),
    [sym_add_exp] = STATE(137),
    [sym_sub_exp] = STATE(137),
    [sym_mul_exp] = STATE(137),
    [sym_div_exp] = STATE(137),
    [sym_pow_exp] = STATE(137),
    [sym__arith_x] = STATE(137),
    [sym__basic_literal] = STATE(137),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(137),
    [sym_linage_counter] = STATE(137),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [13] = {
    [sym__identifier] = STATE(116),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(116),
    [sym__binary_exp] = STATE(116),
    [sym__unary_exp] = STATE(116),
    [sym_positive_exp] = STATE(116),
    [sym_negative_exp] = STATE(116),
    [sym_add_exp] = STATE(116),
    [sym_sub_exp] = STATE(116),
    [sym_mul_exp] = STATE(116),
    [sym_div_exp] = STATE(116),
    [sym_pow_exp] = STATE(116),
    [sym__arith_x] = STATE(116),
    [sym__basic_literal] = STATE(116),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(116),
    [sym_linage_counter] = STATE(116),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [14] = {
    [sym__identifier] = STATE(132),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(132),
    [sym__binary_exp] = STATE(132),
    [sym__unary_exp] = STATE(132),
    [sym_positive_exp] = STATE(132),
    [sym_negative_exp] = STATE(132),
    [sym_add_exp] = STATE(132),
    [sym_sub_exp] = STATE(132),
    [sym_mul_exp] = STATE(132),
    [sym_div_exp] = STATE(132),
    [sym_pow_exp] = STATE(132),
    [sym__arith_x] = STATE(132),
    [sym__basic_literal] = STATE(132),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(132),
    [sym_linage_counter] = STATE(132),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [15] = {
    [sym__identifier] = STATE(128),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(128),
    [sym__binary_exp] = STATE(128),
    [sym__unary_exp] = STATE(128),
    [sym_positive_exp] = STATE(128),
    [sym_negative_exp] = STATE(128),
    [sym_add_exp] = STATE(128),
    [sym_sub_exp] = STATE(128),
    [sym_mul_exp] = STATE(128),
    [sym_div_exp] = STATE(128),
    [sym_pow_exp] = STATE(128),
    [sym__arith_x] = STATE(128),
    [sym__basic_literal] = STATE(128),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(128),
    [sym_linage_counter] = STATE(128),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [16] = {
    [sym__identifier] = STATE(129),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(129),
    [sym__binary_exp] = STATE(129),
    [sym__unary_exp] = STATE(129),
    [sym_positive_exp] = STATE(129),
    [sym_negative_exp] = STATE(129),
    [sym_add_exp] = STATE(129),
    [sym_sub_exp] = STATE(129),
    [sym_mul_exp] = STATE(129),
    [sym_div_exp] = STATE(129),
    [sym_pow_exp] = STATE(129),
    [sym__arith_x] = STATE(129),
    [sym__basic_literal] = STATE(129),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(129),
    [sym_linage_counter] = STATE(129),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [17] = {
    [sym__identifier] = STATE(138),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(138),
    [sym__binary_exp] = STATE(138),
    [sym__unary_exp] = STATE(138),
    [sym_positive_exp] = STATE(138),
    [sym_negative_exp] = STATE(138),
    [sym_add_exp] = STATE(138),
    [sym_sub_exp] = STATE(138),
    [sym_mul_exp] = STATE(138),
    [sym_div_exp] = STATE(138),
    [sym_pow_exp] = STATE(138),
    [sym__arith_x] = STATE(138),
    [sym__basic_literal] = STATE(138),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(138),
    [sym_linage_counter] = STATE(138),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [18] = {
    [sym__identifier] = STATE(136),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(136),
    [sym__binary_exp] = STATE(136),
    [sym__unary_exp] = STATE(136),
    [sym_positive_exp] = STATE(136),
    [sym_negative_exp] = STATE(136),
    [sym_add_exp] = STATE(136),
    [sym_sub_exp] = STATE(136),
    [sym_mul_exp] = STATE(136),
    [sym_div_exp] = STATE(136),
    [sym_pow_exp] = STATE(136),
    [sym__arith_x] = STATE(136),
    [sym__basic_literal] = STATE(136),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(136),
    [sym_linage_counter] = STATE(136),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [19] = {
    [sym__identifier] = STATE(107),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(107),
    [sym__binary_exp] = STATE(107),
    [sym__unary_exp] = STATE(107),
    [sym_positive_exp] = STATE(107),
    [sym_negative_exp] = STATE(107),
    [sym_add_exp] = STATE(107),
    [sym_sub_exp] = STATE(107),
    [sym_mul_exp] = STATE(107),
    [sym_div_exp] = STATE(107),
    [sym_pow_exp] = STATE(107),
    [sym__arith_x] = STATE(107),
    [sym__basic_literal] = STATE(107),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(107),
    [sym_linage_counter] = STATE(107),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [20] = {
    [sym__identifier] = STATE(119),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(119),
    [sym__binary_exp] = STATE(119),
    [sym__unary_exp] = STATE(119),
    [sym_positive_exp] = STATE(119),
    [sym_negative_exp] = STATE(119),
    [sym_add_exp] = STATE(119),
    [sym_sub_exp] = STATE(119),
    [sym_mul_exp] = STATE(119),
    [sym_div_exp] = STATE(119),
    [sym_pow_exp] = STATE(119),
    [sym__arith_x] = STATE(119),
    [sym__basic_literal] = STATE(119),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(119),
    [sym_linage_counter] = STATE(119),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [21] = {
    [sym__identifier] = STATE(111),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(111),
    [sym__binary_exp] = STATE(111),
    [sym__unary_exp] = STATE(111),
    [sym_positive_exp] = STATE(111),
    [sym_negative_exp] = STATE(111),
    [sym_add_exp] = STATE(111),
    [sym_sub_exp] = STATE(111),
    [sym_mul_exp] = STATE(111),
    [sym_div_exp] = STATE(111),
    [sym_pow_exp] = STATE(111),
    [sym__arith_x] = STATE(111),
    [sym__basic_literal] = STATE(111),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(111),
    [sym_linage_counter] = STATE(111),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [22] = {
    [sym__identifier] = STATE(112),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(112),
    [sym__binary_exp] = STATE(112),
    [sym__unary_exp] = STATE(112),
    [sym_positive_exp] = STATE(112),
    [sym_negative_exp] = STATE(112),
    [sym_add_exp] = STATE(112),
    [sym_sub_exp] = STATE(112),
    [sym_mul_exp] = STATE(112),
    [sym_div_exp] = STATE(112),
    [sym_pow_exp] = STATE(112),
    [sym__arith_x] = STATE(112),
    [sym__basic_literal] = STATE(112),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(112),
    [sym_linage_counter] = STATE(112),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [23] = {
    [sym__identifier] = STATE(113),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(113),
    [sym__binary_exp] = STATE(113),
    [sym__unary_exp] = STATE(113),
    [sym_positive_exp] = STATE(113),
    [sym_negative_exp] = STATE(113),
    [sym_add_exp] = STATE(113),
    [sym_sub_exp] = STATE(113),
    [sym_mul_exp] = STATE(113),
    [sym_div_exp] = STATE(113),
    [sym_pow_exp] = STATE(113),
    [sym__arith_x] = STATE(113),
    [sym__basic_literal] = STATE(113),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(113),
    [sym_linage_counter] = STATE(113),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [24] = {
    [sym__identifier] = STATE(115),
    [sym_qualified_word] = STATE(64),
    [sym__exp] = STATE(115),
    [sym__binary_exp] = STATE(115),
    [sym__unary_exp] = STATE(115),
    [sym_positive_exp] = STATE(115),
    [sym_negative_exp] = STATE(115),
    [sym_add_exp] = STATE(115),
    [sym_sub_exp] = STATE(115),
    [sym_mul_exp] = STATE(115),
    [sym_div_exp] = STATE(115),
    [sym_pow_exp] = STATE(115),
    [sym__arith_x] = STATE(115),
    [sym__basic_literal] = STATE(115),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(115),
    [sym_linage_counter] = STATE(115),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LENGTH_] = STATE(28),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(33),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [25] = {
    [sym__identifier] = STATE(205),
    [sym_qualified_word] = STATE(64),
    [sym__move_body] = STATE(206),
    [sym__x] = STATE(205),
    [sym__basic_literal] = STATE(205),
    [sym__basic_value] = STATE(66),
    [sym__literal] = STATE(205),
    [sym_function_] = STATE(205),
    [sym_linage_counter] = STATE(205),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_ALL_] = STATE(32),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__ADDRESS] = ACTIONS(67),
    [sym__ALL] = ACTIONS(69),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CORRESPONDING] = ACTIONS(71),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(73),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [26] = {
    [sym__identifier] = STATE(196),
    [sym_qualified_word] = STATE(64),
    [sym__x] = STATE(196),
    [sym__basic_literal] = STATE(196),
    [sym__basic_value] = STATE(66),
    [sym__literal] = STATE(196),
    [sym_function_] = STATE(196),
    [sym_linage_counter] = STATE(196),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_ALL_] = STATE(32),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__ADDRESS] = ACTIONS(67),
    [sym__ALL] = ACTIONS(69),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LENGTH] = ACTIONS(73),
    [sym__LINAGE_COUNTER] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [27] = {
    [sym__identifier] = STATE(225),
    [sym_qualified_word] = STATE(64),
    [sym__basic_literal] = STATE(225),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(225),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [sym__OF] = ACTIONS(75),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [28] = {
    [sym__identifier] = STATE(108),
    [sym_qualified_word] = STATE(64),
    [sym__basic_literal] = STATE(108),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(108),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [sym__OF] = ACTIONS(77),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [29] = {
    [sym__identifier] = STATE(106),
    [sym_qualified_word] = STATE(64),
    [sym__basic_literal] = STATE(106),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(106),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
  [30] = {
    [sym__identifier] = STATE(240),
    [sym_qualified_word] = STATE(64),
    [sym__basic_literal] = STATE(240),
    [sym__basic_value] = STATE(66),
    [sym_function_] = STATE(240),
    [sym__LITERAL] = STATE(66),
    [sym__string] = STATE(66),
    [sym_x_string] = STATE(66),
    [sym_h_string] = STATE(66),
    [sym_n_string] = STATE(66),
    [sym__HIGH_VALUE] = STATE(74),
    [sym__LOW_VALUE] = STATE(75),
    [sym__QUOTE] = STATE(76),
    [sym__SPACE] = STATE(77),
    [sym__TOK_NULL] = STATE(78),
    [sym__ZERO] = STATE(79),
    [sym_CONCATENATE_FUNC_] = STATE(204),
    [sym_CURRENT_DATE_FUNC_] = STATE(70),
    [sym_FUNCTION_NAME_] = STATE(69),
    [sym_HIGH_VALUE_] = STATE(66),
    [sym_LOCALE_DT_FUNC_] = STATE(203),
    [sym_LOWER_CASE_FUNC_] = STATE(202),
    [sym_LOW_VALUE_] = STATE(66),
    [sym_NUMVALC_FUNC_] = STATE(201),
    [sym_QUOTE_] = STATE(66),
    [sym_REVERSE_FUNC_] = STATE(202),
    [sym_SPACE_] = STATE(66),
    [sym_SUBSTITUTE_FUNC_] = STATE(204),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(204),
    [sym_TOK_NULL_] = STATE(66),
    [sym_TRIM_FUNCTION_] = STATE(200),
    [sym_UPPER_CASE_FUNC_] = STATE(202),
    [sym_WHEN_COMPILED_FUNC_] = STATE(70),
    [sym_ZERO_] = STATE(66),
    [sym_WORD] = ACTIONS(7),
    [sym_number] = ACTIONS(17),
    [aux_sym_x_string_token1] = ACTIONS(19),
    [aux_sym_x_string_token2] = ACTIONS(19),
    [aux_sym_h_string_token1] = ACTIONS(21),
    [aux_sym_h_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token1] = ACTIONS(23),
    [aux_sym_n_string_token2] = ACTIONS(23),
    [aux_sym_n_string_token3] = ACTIONS(23),
    [aux_sym_n_string_token4] = ACTIONS(23),
    [aux_sym_n_string_token5] = ACTIONS(23),
    [aux_sym_n_string_token6] = ACTIONS(23),
    [aux_sym_n_string_token7] = ACTIONS(23),
    [aux_sym_n_string_token8] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(29),
    [anon_sym_high_DASHvalue] = ACTIONS(31),
    [anon_sym_high_DASHValue] = ACTIONS(31),
    [anon_sym_high_DASHVALUE] = ACTIONS(31),
    [anon_sym_High_DASHvalue] = ACTIONS(31),
    [anon_sym_High_DASHValue] = ACTIONS(31),
    [anon_sym_High_DASHVALUE] = ACTIONS(31),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(31),
    [anon_sym_HIGH_DASHValue] = ACTIONS(31),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(31),
    [sym__LOCALE_DT_FUNC] = ACTIONS(37),
    [sym__LOWER_CASE_FUNC] = ACTIONS(39),
    [anon_sym_low_DASHvalue] = ACTIONS(41),
    [anon_sym_low_DASHValue] = ACTIONS(41),
    [anon_sym_low_DASHVALUE] = ACTIONS(41),
    [anon_sym_Low_DASHvalue] = ACTIONS(41),
    [anon_sym_Low_DASHValue] = ACTIONS(41),
    [anon_sym_Low_DASHVALUE] = ACTIONS(41),
    [anon_sym_LOW_DASHvalue] = ACTIONS(41),
    [anon_sym_LOW_DASHValue] = ACTIONS(41),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(41),
    [sym__NUMVALC_FUNC] = ACTIONS(43),
    [anon_sym_quote] = ACTIONS(45),
    [anon_sym_QUOTE] = ACTIONS(45),
    [anon_sym_Quote] = ACTIONS(45),
    [sym__REVERSE_FUNC] = ACTIONS(47),
    [anon_sym_space] = ACTIONS(49),
    [anon_sym_SPACE] = ACTIONS(49),
    [anon_sym_Space] = ACTIONS(49),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(51),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(53),
    [anon_sym_null] = ACTIONS(55),
    [anon_sym_Null] = ACTIONS(55),
    [anon_sym_NULL] = ACTIONS(55),
    [sym__TRIM_FUNCTION] = ACTIONS(57),
    [sym__UPPER_CASE_FUNC] = ACTIONS(59),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(61),
    [anon_sym_zero] = ACTIONS(63),
    [anon_sym_ZERO] = ACTIONS(63),
    [anon_sym_Zero] = ACTIONS(63),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(79), 1,
      sym_number,
    STATE(74), 1,
      sym__HIGH_VALUE,
    STATE(75), 1,
      sym__LOW_VALUE,
    STATE(76), 1,
      sym__QUOTE,
    STATE(77), 1,
      sym__SPACE,
    STATE(78), 1,
      sym__TOK_NULL,
    STATE(79), 1,
      sym__ZERO,
    ACTIONS(19), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(21), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    ACTIONS(85), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(87), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(89), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(91), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    ACTIONS(23), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(81), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(83), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
    STATE(81), 12,
      sym__basic_value,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
      sym_HIGH_VALUE_,
      sym_LOW_VALUE_,
      sym_QUOTE_,
      sym_SPACE_,
      sym_TOK_NULL_,
      sym_ZERO_,
  [96] = 17,
    ACTIONS(93), 1,
      sym_number,
    STATE(74), 1,
      sym__HIGH_VALUE,
    STATE(75), 1,
      sym__LOW_VALUE,
    STATE(76), 1,
      sym__QUOTE,
    STATE(77), 1,
      sym__SPACE,
    STATE(78), 1,
      sym__TOK_NULL,
    STATE(79), 1,
      sym__ZERO,
    ACTIONS(19), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(21), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    ACTIONS(85), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(87), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(89), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(91), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    ACTIONS(23), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(81), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(83), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
    STATE(239), 12,
      sym__basic_value,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
      sym_HIGH_VALUE_,
      sym_LOW_VALUE_,
      sym_QUOTE_,
      sym_SPACE_,
      sym_TOK_NULL_,
      sym_ZERO_,
  [192] = 2,
    ACTIONS(97), 13,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(95), 44,
      sym__CONCATENATE_FUNC,
      sym__CURRENT_DATE_FUNC,
      sym__FUNCTION_NAME,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
      sym__LOCALE_DT_FUNC,
      sym__LOWER_CASE_FUNC,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
      sym__NUMVALC_FUNC,
      sym__OF,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
      sym__REVERSE_FUNC,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
      sym__SUBSTITUTE_FUNC,
      sym__SUBSTITUTE_CASE_FUNC,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
      sym__TRIM_FUNCTION,
      sym__UPPER_CASE_FUNC,
      sym__WHEN_COMPILED_FUNC,
      sym_WORD,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
  [254] = 1,
    ACTIONS(99), 43,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
  [300] = 11,
    ACTIONS(101), 1,
      anon_sym_DOT,
    ACTIONS(105), 1,
      sym_number,
    ACTIONS(107), 1,
      sym__PIC,
    ACTIONS(109), 1,
      sym__PICTURE,
    ACTIONS(111), 1,
      sym__REDEFINES,
    ACTIONS(19), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(21), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(36), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    STATE(198), 5,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(23), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(103), 13,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
  [362] = 11,
    ACTIONS(107), 1,
      sym__PIC,
    ACTIONS(109), 1,
      sym__PICTURE,
    ACTIONS(111), 1,
      sym__REDEFINES,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(117), 1,
      sym_number,
    ACTIONS(19), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(21), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(40), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    STATE(195), 5,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(23), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(115), 13,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
  [424] = 5,
    ACTIONS(123), 1,
      sym__PIC,
    STATE(38), 1,
      aux_sym_qualified_word_repeat1,
    STATE(248), 1,
      sym__in_of,
    ACTIONS(121), 2,
      sym__IN,
      sym__OF,
    ACTIONS(119), 30,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [470] = 5,
    ACTIONS(130), 1,
      sym__PIC,
    STATE(38), 1,
      aux_sym_qualified_word_repeat1,
    STATE(248), 1,
      sym__in_of,
    ACTIONS(127), 2,
      sym__IN,
      sym__OF,
    ACTIONS(125), 30,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [516] = 5,
    ACTIONS(134), 1,
      sym__PIC,
    STATE(37), 1,
      aux_sym_qualified_word_repeat1,
    STATE(248), 1,
      sym__in_of,
    ACTIONS(121), 2,
      sym__IN,
      sym__OF,
    ACTIONS(132), 30,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [562] = 6,
    ACTIONS(141), 1,
      sym__PIC,
    ACTIONS(144), 1,
      sym__PICTURE,
    ACTIONS(147), 1,
      sym__REDEFINES,
    STATE(40), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    ACTIONS(138), 13,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
    ACTIONS(136), 14,
      anon_sym_DOT,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [609] = 5,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      sym__PIC,
    STATE(43), 1,
      sym_subref,
    STATE(46), 1,
      sym_refmod,
    ACTIONS(150), 29,
      anon_sym_DOT,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [653] = 2,
    ACTIONS(130), 1,
      sym__PIC,
    ACTIONS(125), 32,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__IN,
      sym__OF,
      sym__PICTURE,
      sym__REDEFINES,
  [691] = 4,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    ACTIONS(160), 1,
      sym__PIC,
    STATE(47), 1,
      sym_refmod,
    ACTIONS(156), 29,
      anon_sym_DOT,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [732] = 2,
    ACTIONS(164), 1,
      sym__PIC,
    ACTIONS(162), 30,
      anon_sym_DOT,
      anon_sym_LPAREN,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [768] = 2,
    ACTIONS(168), 1,
      sym__PIC,
    ACTIONS(166), 29,
      anon_sym_DOT,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [803] = 2,
    ACTIONS(160), 1,
      sym__PIC,
    ACTIONS(156), 29,
      anon_sym_DOT,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [838] = 2,
    ACTIONS(172), 1,
      sym__PIC,
    ACTIONS(170), 29,
      anon_sym_DOT,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [873] = 2,
    ACTIONS(176), 1,
      sym__PIC,
    ACTIONS(174), 29,
      anon_sym_DOT,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [908] = 2,
    ACTIONS(180), 1,
      sym__PIC,
    ACTIONS(178), 29,
      anon_sym_DOT,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [943] = 2,
    ACTIONS(184), 1,
      sym__PIC,
    ACTIONS(182), 29,
      anon_sym_DOT,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [978] = 2,
    ACTIONS(188), 1,
      sym__PIC,
    ACTIONS(186), 29,
      anon_sym_DOT,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [1013] = 2,
    ACTIONS(192), 1,
      sym__PIC,
    ACTIONS(190), 29,
      anon_sym_DOT,
      sym_external_clause,
      sym_global_clause,
      sym_usage_clause,
      sym_sign_clause,
      sym_occurs_clause,
      sym_justified_clause,
      sym_synchronized_clause,
      sym_blank_clause,
      sym_based_clause,
      sym_value_clause,
      sym_renames_clause,
      sym_any_length_clause,
      sym_error,
      sym_number,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
      sym__PICTURE,
      sym__REDEFINES,
  [1048] = 7,
    ACTIONS(7), 1,
      sym_WORD,
    ACTIONS(194), 1,
      sym_number,
    STATE(64), 1,
      sym_qualified_word,
    ACTIONS(19), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(21), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(240), 6,
      sym__identifier,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(23), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1084] = 7,
    ACTIONS(7), 1,
      sym_WORD,
    ACTIONS(196), 1,
      sym_number,
    STATE(64), 1,
      sym_qualified_word,
    ACTIONS(19), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(21), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(238), 6,
      sym__identifier,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(23), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1120] = 7,
    ACTIONS(198), 1,
      sym_WORD,
    ACTIONS(200), 1,
      sym_number,
    STATE(171), 1,
      sym_program_name,
    ACTIONS(19), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(21), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(189), 5,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(23), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1155] = 5,
    ACTIONS(202), 1,
      sym_number,
    ACTIONS(19), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(21), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(251), 5,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(23), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1184] = 4,
    STATE(58), 1,
      aux_sym_qualified_word_repeat1,
    STATE(235), 1,
      sym__in_of,
    ACTIONS(204), 2,
      sym__IN,
      sym__OF,
    ACTIONS(119), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1208] = 4,
    STATE(58), 1,
      aux_sym_qualified_word_repeat1,
    STATE(235), 1,
      sym__in_of,
    ACTIONS(206), 2,
      sym__IN,
      sym__OF,
    ACTIONS(125), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1232] = 4,
    STATE(57), 1,
      aux_sym_qualified_word_repeat1,
    STATE(235), 1,
      sym__in_of,
    ACTIONS(204), 2,
      sym__IN,
      sym__OF,
    ACTIONS(132), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1256] = 1,
    ACTIONS(209), 13,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_AMP,
      sym__AS,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1272] = 3,
    STATE(233), 1,
      sym__in_of,
    ACTIONS(213), 2,
      sym__IN,
      sym__OF,
    ACTIONS(211), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1292] = 1,
    ACTIONS(125), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__IN,
      sym__OF,
      sym__SEMI_COLON,
      sym__TO,
  [1308] = 1,
    ACTIONS(215), 13,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_AMP,
      sym__AS,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1324] = 4,
    ACTIONS(217), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_subref,
    STATE(97), 1,
      sym_refmod,
    ACTIONS(150), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1346] = 1,
    ACTIONS(219), 13,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_AMP,
      sym__AS,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1362] = 3,
    ACTIONS(223), 1,
      anon_sym_AMP,
    STATE(72), 1,
      aux_sym__basic_literal_repeat1,
    ACTIONS(221), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1381] = 3,
    ACTIONS(227), 1,
      anon_sym_AMP,
    STATE(67), 1,
      aux_sym__basic_literal_repeat1,
    ACTIONS(225), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1400] = 3,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_func_refmod,
    ACTIONS(232), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1419] = 3,
    ACTIONS(234), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym__func_args,
    ACTIONS(236), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1438] = 3,
    ACTIONS(230), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
      sym_func_refmod,
    ACTIONS(236), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1457] = 3,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_refmod,
    ACTIONS(156), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1476] = 3,
    ACTIONS(223), 1,
      anon_sym_AMP,
    STATE(67), 1,
      aux_sym__basic_literal_repeat1,
    ACTIONS(240), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1495] = 1,
    ACTIONS(162), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1509] = 1,
    ACTIONS(242), 11,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_AMP,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1523] = 1,
    ACTIONS(244), 11,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_AMP,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1537] = 1,
    ACTIONS(246), 11,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_AMP,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1551] = 1,
    ACTIONS(248), 11,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_AMP,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1565] = 1,
    ACTIONS(250), 11,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_AMP,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1579] = 1,
    ACTIONS(252), 11,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_AMP,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1593] = 10,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(256), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    STATE(20), 1,
      sym__e_sep,
    STATE(145), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(268), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [1625] = 1,
    ACTIONS(225), 11,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      anon_sym_AMP,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1639] = 1,
    ACTIONS(270), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1653] = 1,
    ACTIONS(272), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1667] = 1,
    ACTIONS(274), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1681] = 10,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(276), 1,
      anon_sym_COLON,
    STATE(20), 1,
      sym__e_sep,
    STATE(145), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(268), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [1713] = 10,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(278), 1,
      anon_sym_COLON,
    STATE(20), 1,
      sym__e_sep,
    STATE(145), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(268), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [1745] = 1,
    ACTIONS(190), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1758] = 1,
    ACTIONS(280), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1771] = 5,
    ACTIONS(284), 1,
      sym__MOVE,
    ACTIONS(286), 1,
      sym__STOP,
    STATE(92), 1,
      aux_sym_procedure_division_repeat1,
    STATE(227), 3,
      sym__statement,
      sym_stop_run_statement,
      sym_move_statement,
    ACTIONS(282), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
  [1792] = 1,
    ACTIONS(288), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1805] = 6,
    ACTIONS(290), 1,
      sym_level_number,
    ACTIONS(293), 1,
      sym_level_number_88,
    ACTIONS(296), 1,
      sym_constant_entry,
    STATE(91), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(234), 1,
      sym_data_description,
    ACTIONS(299), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [1828] = 5,
    ACTIONS(303), 1,
      sym__MOVE,
    ACTIONS(306), 1,
      sym__STOP,
    STATE(92), 1,
      aux_sym_procedure_division_repeat1,
    STATE(227), 3,
      sym__statement,
      sym_stop_run_statement,
      sym_move_statement,
    ACTIONS(301), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
  [1849] = 1,
    ACTIONS(232), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1862] = 6,
    ACTIONS(309), 1,
      sym_level_number,
    ACTIONS(311), 1,
      sym_level_number_88,
    ACTIONS(313), 1,
      sym_constant_entry,
    STATE(91), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(234), 1,
      sym_data_description,
    ACTIONS(315), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [1885] = 1,
    ACTIONS(317), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1898] = 9,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym__e_sep,
    STATE(151), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(268), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [1927] = 1,
    ACTIONS(156), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1940] = 6,
    ACTIONS(309), 1,
      sym_level_number,
    ACTIONS(311), 1,
      sym_level_number_88,
    ACTIONS(313), 1,
      sym_constant_entry,
    STATE(94), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(234), 1,
      sym_data_description,
    ACTIONS(321), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [1963] = 1,
    ACTIONS(323), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [1976] = 9,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    STATE(20), 1,
      sym__e_sep,
    STATE(145), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(268), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2005] = 1,
    ACTIONS(325), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [2018] = 5,
    ACTIONS(284), 1,
      sym__MOVE,
    ACTIONS(286), 1,
      sym__STOP,
    STATE(89), 1,
      aux_sym_procedure_division_repeat1,
    STATE(227), 3,
      sym__statement,
      sym_stop_run_statement,
      sym_move_statement,
    ACTIONS(327), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
  [2039] = 1,
    ACTIONS(170), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [2052] = 1,
    ACTIONS(329), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [2065] = 1,
    ACTIONS(331), 10,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
      sym__TO,
  [2078] = 1,
    ACTIONS(333), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2090] = 4,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(335), 6,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2108] = 1,
    ACTIONS(337), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2120] = 8,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      sym__e_sep,
    ACTIONS(341), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2146] = 8,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym__e_sep,
    ACTIONS(345), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2172] = 4,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(347), 6,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2190] = 2,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(349), 8,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2204] = 1,
    ACTIONS(351), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2216] = 6,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(353), 4,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2238] = 2,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(355), 8,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2252] = 6,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(357), 4,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2274] = 1,
    ACTIONS(359), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2286] = 5,
    STATE(122), 1,
      aux_sym_qualified_word_repeat1,
    STATE(244), 1,
      sym__in_of,
    ACTIONS(132), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(134), 2,
      sym__ADDRESS,
      sym_WORD,
    ACTIONS(361), 2,
      sym__IN,
      sym__OF,
  [2305] = 6,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(363), 3,
      anon_sym_RPAREN,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2326] = 2,
    ACTIONS(365), 1,
      sym_level_number_88,
    ACTIONS(299), 7,
      sym_level_number,
      sym_constant_entry,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [2339] = 5,
    STATE(121), 1,
      aux_sym_qualified_word_repeat1,
    STATE(244), 1,
      sym__in_of,
    ACTIONS(125), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(130), 2,
      sym__ADDRESS,
      sym_WORD,
    ACTIONS(367), 2,
      sym__IN,
      sym__OF,
  [2358] = 5,
    STATE(121), 1,
      aux_sym_qualified_word_repeat1,
    STATE(244), 1,
      sym__in_of,
    ACTIONS(119), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(123), 2,
      sym__ADDRESS,
      sym_WORD,
    ACTIONS(361), 2,
      sym__IN,
      sym__OF,
  [2377] = 8,
    ACTIONS(370), 1,
      sym_file_section,
    ACTIONS(372), 1,
      sym_local_storage_section,
    ACTIONS(374), 1,
      sym_linkage_section,
    ACTIONS(376), 1,
      sym_report_section,
    ACTIONS(378), 1,
      sym_screen_section,
    ACTIONS(380), 1,
      sym__PROCEDURE,
    ACTIONS(382), 1,
      sym__WORKING_STORAGE,
    STATE(142), 1,
      sym_working_storage_section,
  [2402] = 5,
    ACTIONS(384), 1,
      sym_WORD,
    ACTIONS(386), 1,
      anon_sym_DOT,
    ACTIONS(388), 1,
      sym__ADDRESS,
    STATE(140), 1,
      sym_qualified_word,
    STATE(126), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [2420] = 7,
    ACTIONS(382), 1,
      sym__WORKING_STORAGE,
    ACTIONS(390), 1,
      sym_local_storage_section,
    ACTIONS(392), 1,
      sym_linkage_section,
    ACTIONS(394), 1,
      sym_report_section,
    ACTIONS(396), 1,
      sym_screen_section,
    ACTIONS(398), 1,
      sym__PROCEDURE,
    STATE(144), 1,
      sym_working_storage_section,
  [2442] = 5,
    ACTIONS(400), 1,
      sym_WORD,
    ACTIONS(403), 1,
      anon_sym_DOT,
    ACTIONS(405), 1,
      sym__ADDRESS,
    STATE(140), 1,
      sym_qualified_word,
    STATE(126), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [2460] = 5,
    ACTIONS(384), 1,
      sym_WORD,
    ACTIONS(388), 1,
      sym__ADDRESS,
    ACTIONS(408), 1,
      anon_sym_DOT,
    STATE(140), 1,
      sym_qualified_word,
    STATE(126), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [2478] = 6,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(410), 1,
      anon_sym_COLON,
  [2497] = 6,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(276), 1,
      anon_sym_COLON,
  [2516] = 5,
    ACTIONS(412), 1,
      sym_picture_x,
    ACTIONS(414), 1,
      sym__picture_9_z,
    ACTIONS(416), 1,
      sym__picture_9_v,
    ACTIONS(418), 1,
      sym__IS,
    STATE(49), 2,
      sym__picture_string,
      sym_picture_9,
  [2533] = 1,
    ACTIONS(301), 6,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
      sym__MOVE,
      sym__STOP,
  [2542] = 6,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
  [2561] = 4,
    ACTIONS(384), 1,
      sym_WORD,
    ACTIONS(388), 1,
      sym__ADDRESS,
    STATE(140), 1,
      sym_qualified_word,
    STATE(124), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [2576] = 4,
    ACTIONS(384), 1,
      sym_WORD,
    ACTIONS(388), 1,
      sym__ADDRESS,
    STATE(140), 1,
      sym_qualified_word,
    STATE(127), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [2591] = 2,
    ACTIONS(125), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(130), 4,
      sym__ADDRESS,
      sym__IN,
      sym__OF,
      sym_WORD,
  [2602] = 6,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [2621] = 6,
    ACTIONS(256), 1,
      anon_sym_COLON,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
  [2640] = 6,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
  [2659] = 5,
    ACTIONS(7), 1,
      sym_WORD,
    ACTIONS(426), 1,
      sym__OF,
    STATE(64), 1,
      sym_qualified_word,
    STATE(225), 1,
      sym__identifier,
    ACTIONS(424), 2,
      sym__ENTRY,
      sym__PROGRAM,
  [2676] = 5,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_subref,
    STATE(167), 1,
      sym_refmod,
    ACTIONS(154), 2,
      sym__ADDRESS,
      sym_WORD,
  [2693] = 6,
    ACTIONS(258), 1,
      anon_sym_PLUS,
    ACTIONS(260), 1,
      anon_sym_DASH,
    ACTIONS(262), 1,
      anon_sym_STAR,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(266), 1,
      anon_sym_CARET,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
  [2712] = 5,
    ACTIONS(390), 1,
      sym_local_storage_section,
    ACTIONS(392), 1,
      sym_linkage_section,
    ACTIONS(394), 1,
      sym_report_section,
    ACTIONS(396), 1,
      sym_screen_section,
    ACTIONS(398), 1,
      sym__PROCEDURE,
  [2728] = 4,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(432), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_refmod,
    ACTIONS(160), 2,
      sym__ADDRESS,
      sym_WORD,
  [2742] = 5,
    ACTIONS(434), 1,
      sym_local_storage_section,
    ACTIONS(436), 1,
      sym_linkage_section,
    ACTIONS(438), 1,
      sym_report_section,
    ACTIONS(440), 1,
      sym_screen_section,
    ACTIONS(442), 1,
      sym__PROCEDURE,
  [2758] = 4,
    ACTIONS(444), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym__e_sep,
    STATE(147), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(268), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2772] = 4,
    ACTIONS(7), 1,
      sym_WORD,
    STATE(64), 1,
      sym_qualified_word,
    STATE(240), 1,
      sym__identifier,
    ACTIONS(446), 2,
      sym__ENTRY,
      sym__PROGRAM,
  [2786] = 4,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym__e_sep,
    STATE(147), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(448), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2800] = 4,
    ACTIONS(414), 1,
      sym__picture_9_z,
    ACTIONS(416), 1,
      sym__picture_9_v,
    ACTIONS(451), 1,
      sym_picture_x,
    STATE(45), 2,
      sym__picture_string,
      sym_picture_9,
  [2814] = 4,
    ACTIONS(5), 1,
      sym__IDENTIFICATION,
    ACTIONS(453), 1,
      ts_builtin_sym_end,
    STATE(150), 1,
      sym_identification_division,
    STATE(152), 2,
      sym_program_definition,
      aux_sym_start_repeat1,
  [2828] = 5,
    ACTIONS(455), 1,
      sym_environment_division,
    ACTIONS(457), 1,
      sym__DATA,
    ACTIONS(459), 1,
      sym__PROCEDURE,
    STATE(157), 1,
      sym_procedure_division,
    STATE(183), 1,
      sym_data_division,
  [2844] = 4,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      sym__e_sep,
    STATE(147), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(268), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2858] = 4,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(465), 1,
      sym__IDENTIFICATION,
    STATE(150), 1,
      sym_identification_division,
    STATE(152), 2,
      sym_program_definition,
      aux_sym_start_repeat1,
  [2872] = 4,
    ACTIONS(436), 1,
      sym_linkage_section,
    ACTIONS(438), 1,
      sym_report_section,
    ACTIONS(440), 1,
      sym_screen_section,
    ACTIONS(442), 1,
      sym__PROCEDURE,
  [2885] = 4,
    ACTIONS(384), 1,
      sym_WORD,
    ACTIONS(468), 1,
      sym__OF,
    STATE(140), 1,
      sym_qualified_word,
    STATE(163), 1,
      sym__identifier,
  [2898] = 3,
    ACTIONS(472), 1,
      sym_nested_prog,
    ACTIONS(474), 1,
      sym_end_program,
    ACTIONS(470), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [2909] = 4,
    ACTIONS(457), 1,
      sym__DATA,
    ACTIONS(459), 1,
      sym__PROCEDURE,
    STATE(160), 1,
      sym_procedure_division,
    STATE(184), 1,
      sym_data_division,
  [2922] = 3,
    ACTIONS(478), 1,
      sym_nested_prog,
    ACTIONS(480), 1,
      sym_end_program,
    ACTIONS(476), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [2933] = 4,
    ACTIONS(482), 1,
      sym_linkage_section,
    ACTIONS(484), 1,
      sym_report_section,
    ACTIONS(486), 1,
      sym_screen_section,
    ACTIONS(488), 1,
      sym__PROCEDURE,
  [2946] = 4,
    ACTIONS(392), 1,
      sym_linkage_section,
    ACTIONS(394), 1,
      sym_report_section,
    ACTIONS(396), 1,
      sym_screen_section,
    ACTIONS(398), 1,
      sym__PROCEDURE,
  [2959] = 3,
    ACTIONS(492), 1,
      sym_nested_prog,
    ACTIONS(494), 1,
      sym_end_program,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [2970] = 2,
    ACTIONS(162), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(164), 2,
      sym__ADDRESS,
      sym_WORD,
  [2979] = 2,
    STATE(243), 1,
      sym_entry_name,
    ACTIONS(496), 2,
      sym__FILLER,
      sym_WORD,
  [2987] = 2,
    ACTIONS(500), 1,
      anon_sym_DOT,
    ACTIONS(498), 2,
      sym__ADDRESS,
      sym_WORD,
  [2995] = 2,
    ACTIONS(190), 1,
      anon_sym_DOT,
    ACTIONS(192), 2,
      sym__ADDRESS,
      sym_WORD,
  [3003] = 2,
    ACTIONS(170), 1,
      anon_sym_DOT,
    ACTIONS(172), 2,
      sym__ADDRESS,
      sym_WORD,
  [3011] = 2,
    ACTIONS(494), 1,
      sym_end_program,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [3019] = 2,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(160), 2,
      sym__ADDRESS,
      sym_WORD,
  [3027] = 2,
    ACTIONS(474), 1,
      sym_end_program,
    ACTIONS(470), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [3035] = 2,
    ACTIONS(504), 1,
      sym_end_program,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [3043] = 3,
    ACTIONS(394), 1,
      sym_report_section,
    ACTIONS(396), 1,
      sym_screen_section,
    ACTIONS(398), 1,
      sym__PROCEDURE,
  [3053] = 3,
    ACTIONS(506), 1,
      anon_sym_DOT,
    ACTIONS(508), 1,
      sym__AS,
    STATE(226), 1,
      sym_as_literal,
  [3063] = 3,
    ACTIONS(438), 1,
      sym_report_section,
    ACTIONS(440), 1,
      sym_screen_section,
    ACTIONS(442), 1,
      sym__PROCEDURE,
  [3073] = 2,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(510), 2,
      sym__ADDRESS,
      sym_WORD,
  [3081] = 3,
    ACTIONS(514), 1,
      sym_WORD,
    STATE(41), 1,
      sym_qualified_word,
    STATE(48), 1,
      sym__identifier,
  [3091] = 1,
    ACTIONS(516), 3,
      sym_environment_division,
      sym__DATA,
      sym__PROCEDURE,
  [3097] = 2,
    STATE(35), 1,
      sym_entry_name,
    ACTIONS(496), 2,
      sym__FILLER,
      sym_WORD,
  [3105] = 3,
    ACTIONS(518), 1,
      sym_report_section,
    ACTIONS(520), 1,
      sym_screen_section,
    ACTIONS(522), 1,
      sym__PROCEDURE,
  [3115] = 3,
    ACTIONS(484), 1,
      sym_report_section,
    ACTIONS(486), 1,
      sym_screen_section,
    ACTIONS(488), 1,
      sym__PROCEDURE,
  [3125] = 3,
    ACTIONS(524), 1,
      sym_WORD,
    STATE(140), 1,
      sym_qualified_word,
    STATE(173), 1,
      sym__identifier,
  [3135] = 1,
    ACTIONS(526), 3,
      sym_environment_division,
      sym__DATA,
      sym__PROCEDURE,
  [3141] = 2,
    ACTIONS(396), 1,
      sym_screen_section,
    ACTIONS(398), 1,
      sym__PROCEDURE,
  [3148] = 1,
    ACTIONS(528), 2,
      sym__LEADING,
      sym__TRAILING,
  [3153] = 2,
    ACTIONS(459), 1,
      sym__PROCEDURE,
    STATE(160), 1,
      sym_procedure_division,
  [3160] = 2,
    ACTIONS(459), 1,
      sym__PROCEDURE,
    STATE(155), 1,
      sym_procedure_division,
  [3167] = 2,
    ACTIONS(520), 1,
      sym_screen_section,
    ACTIONS(522), 1,
      sym__PROCEDURE,
  [3174] = 1,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [3179] = 1,
    ACTIONS(470), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [3184] = 1,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [3189] = 1,
    ACTIONS(530), 2,
      anon_sym_DOT,
      sym__AS,
  [3194] = 2,
    ACTIONS(532), 1,
      sym_screen_section,
    ACTIONS(534), 1,
      sym__PROCEDURE,
  [3201] = 1,
    ACTIONS(536), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [3206] = 2,
    ACTIONS(440), 1,
      sym_screen_section,
    ACTIONS(442), 1,
      sym__PROCEDURE,
  [3213] = 2,
    ACTIONS(486), 1,
      sym_screen_section,
    ACTIONS(488), 1,
      sym__PROCEDURE,
  [3220] = 2,
    ACTIONS(538), 1,
      sym_WORD,
    STATE(214), 1,
      sym_qualified_word,
  [3227] = 1,
    ACTIONS(540), 1,
      anon_sym_DOT,
  [3231] = 1,
    ACTIONS(542), 1,
      sym__TO,
  [3235] = 1,
    ACTIONS(544), 1,
      sym__PROCEDURE,
  [3239] = 1,
    ACTIONS(113), 1,
      anon_sym_DOT,
  [3243] = 1,
    ACTIONS(546), 1,
      anon_sym_DOT,
  [3247] = 1,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
  [3251] = 1,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
  [3255] = 1,
    ACTIONS(552), 1,
      anon_sym_LPAREN,
  [3259] = 1,
    ACTIONS(554), 1,
      anon_sym_LPAREN,
  [3263] = 1,
    ACTIONS(556), 1,
      anon_sym_LPAREN,
  [3267] = 1,
    ACTIONS(558), 1,
      sym__TO,
  [3271] = 1,
    ACTIONS(560), 1,
      anon_sym_DOT,
  [3275] = 1,
    ACTIONS(562), 1,
      anon_sym_LPAREN,
  [3279] = 1,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
  [3283] = 1,
    ACTIONS(566), 1,
      anon_sym_LPAREN,
  [3287] = 1,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
  [3291] = 1,
    ACTIONS(568), 1,
      anon_sym_LPAREN,
  [3295] = 1,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
  [3299] = 1,
    ACTIONS(572), 1,
      anon_sym_LPAREN,
  [3303] = 1,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
  [3307] = 1,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [3311] = 1,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
  [3315] = 1,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
  [3319] = 1,
    ACTIONS(582), 1,
      anon_sym_LPAREN,
  [3323] = 1,
    ACTIONS(584), 1,
      anon_sym_DOT,
  [3327] = 1,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
  [3331] = 1,
    ACTIONS(442), 1,
      sym__PROCEDURE,
  [3335] = 1,
    ACTIONS(588), 1,
      anon_sym_DOT,
  [3339] = 1,
    ACTIONS(590), 1,
      sym__DIVISION,
  [3343] = 1,
    ACTIONS(488), 1,
      sym__PROCEDURE,
  [3347] = 1,
    ACTIONS(592), 1,
      sym__TO,
  [3351] = 1,
    ACTIONS(594), 1,
      anon_sym_DOT,
  [3355] = 1,
    ACTIONS(596), 1,
      anon_sym_DOT,
  [3359] = 1,
    ACTIONS(598), 1,
      sym__RUN,
  [3363] = 1,
    ACTIONS(600), 1,
      sym__SECTION,
  [3367] = 1,
    ACTIONS(398), 1,
      sym__PROCEDURE,
  [3371] = 1,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
  [3375] = 1,
    ACTIONS(534), 1,
      sym__PROCEDURE,
  [3379] = 1,
    ACTIONS(604), 1,
      sym_WORD,
  [3383] = 1,
    ACTIONS(606), 1,
      anon_sym_DOT,
  [3387] = 1,
    ACTIONS(608), 1,
      sym_WORD,
  [3391] = 1,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
  [3395] = 1,
    ACTIONS(612), 1,
      anon_sym_DOT,
  [3399] = 1,
    ACTIONS(614), 1,
      sym__TO,
  [3403] = 1,
    ACTIONS(616), 1,
      sym__TO,
  [3407] = 1,
    ACTIONS(618), 1,
      sym__TO,
  [3411] = 1,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
  [3415] = 1,
    ACTIONS(622), 1,
      anon_sym_DOT,
  [3419] = 1,
    ACTIONS(101), 1,
      anon_sym_DOT,
  [3423] = 1,
    ACTIONS(624), 1,
      sym_WORD,
  [3427] = 1,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
  [3431] = 1,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
  [3435] = 1,
    ACTIONS(630), 1,
      anon_sym_DOT,
  [3439] = 1,
    ACTIONS(632), 1,
      sym_WORD,
  [3443] = 1,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
  [3447] = 1,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [3451] = 1,
    ACTIONS(638), 1,
      anon_sym_DOT,
  [3455] = 1,
    ACTIONS(640), 1,
      sym__PROGRAM_ID,
  [3459] = 1,
    ACTIONS(522), 1,
      sym__PROCEDURE,
  [3463] = 1,
    ACTIONS(642), 1,
      sym__DIVISION,
  [3467] = 1,
    ACTIONS(644), 1,
      sym__DIVISION,
  [3471] = 1,
    ACTIONS(646), 1,
      anon_sym_DOT,
  [3475] = 1,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(31)] = 0,
  [SMALL_STATE(32)] = 96,
  [SMALL_STATE(33)] = 192,
  [SMALL_STATE(34)] = 254,
  [SMALL_STATE(35)] = 300,
  [SMALL_STATE(36)] = 362,
  [SMALL_STATE(37)] = 424,
  [SMALL_STATE(38)] = 470,
  [SMALL_STATE(39)] = 516,
  [SMALL_STATE(40)] = 562,
  [SMALL_STATE(41)] = 609,
  [SMALL_STATE(42)] = 653,
  [SMALL_STATE(43)] = 691,
  [SMALL_STATE(44)] = 732,
  [SMALL_STATE(45)] = 768,
  [SMALL_STATE(46)] = 803,
  [SMALL_STATE(47)] = 838,
  [SMALL_STATE(48)] = 873,
  [SMALL_STATE(49)] = 908,
  [SMALL_STATE(50)] = 943,
  [SMALL_STATE(51)] = 978,
  [SMALL_STATE(52)] = 1013,
  [SMALL_STATE(53)] = 1048,
  [SMALL_STATE(54)] = 1084,
  [SMALL_STATE(55)] = 1120,
  [SMALL_STATE(56)] = 1155,
  [SMALL_STATE(57)] = 1184,
  [SMALL_STATE(58)] = 1208,
  [SMALL_STATE(59)] = 1232,
  [SMALL_STATE(60)] = 1256,
  [SMALL_STATE(61)] = 1272,
  [SMALL_STATE(62)] = 1292,
  [SMALL_STATE(63)] = 1308,
  [SMALL_STATE(64)] = 1324,
  [SMALL_STATE(65)] = 1346,
  [SMALL_STATE(66)] = 1362,
  [SMALL_STATE(67)] = 1381,
  [SMALL_STATE(68)] = 1400,
  [SMALL_STATE(69)] = 1419,
  [SMALL_STATE(70)] = 1438,
  [SMALL_STATE(71)] = 1457,
  [SMALL_STATE(72)] = 1476,
  [SMALL_STATE(73)] = 1495,
  [SMALL_STATE(74)] = 1509,
  [SMALL_STATE(75)] = 1523,
  [SMALL_STATE(76)] = 1537,
  [SMALL_STATE(77)] = 1551,
  [SMALL_STATE(78)] = 1565,
  [SMALL_STATE(79)] = 1579,
  [SMALL_STATE(80)] = 1593,
  [SMALL_STATE(81)] = 1625,
  [SMALL_STATE(82)] = 1639,
  [SMALL_STATE(83)] = 1653,
  [SMALL_STATE(84)] = 1667,
  [SMALL_STATE(85)] = 1681,
  [SMALL_STATE(86)] = 1713,
  [SMALL_STATE(87)] = 1745,
  [SMALL_STATE(88)] = 1758,
  [SMALL_STATE(89)] = 1771,
  [SMALL_STATE(90)] = 1792,
  [SMALL_STATE(91)] = 1805,
  [SMALL_STATE(92)] = 1828,
  [SMALL_STATE(93)] = 1849,
  [SMALL_STATE(94)] = 1862,
  [SMALL_STATE(95)] = 1885,
  [SMALL_STATE(96)] = 1898,
  [SMALL_STATE(97)] = 1927,
  [SMALL_STATE(98)] = 1940,
  [SMALL_STATE(99)] = 1963,
  [SMALL_STATE(100)] = 1976,
  [SMALL_STATE(101)] = 2005,
  [SMALL_STATE(102)] = 2018,
  [SMALL_STATE(103)] = 2039,
  [SMALL_STATE(104)] = 2052,
  [SMALL_STATE(105)] = 2065,
  [SMALL_STATE(106)] = 2078,
  [SMALL_STATE(107)] = 2090,
  [SMALL_STATE(108)] = 2108,
  [SMALL_STATE(109)] = 2120,
  [SMALL_STATE(110)] = 2146,
  [SMALL_STATE(111)] = 2172,
  [SMALL_STATE(112)] = 2190,
  [SMALL_STATE(113)] = 2204,
  [SMALL_STATE(114)] = 2216,
  [SMALL_STATE(115)] = 2238,
  [SMALL_STATE(116)] = 2252,
  [SMALL_STATE(117)] = 2274,
  [SMALL_STATE(118)] = 2286,
  [SMALL_STATE(119)] = 2305,
  [SMALL_STATE(120)] = 2326,
  [SMALL_STATE(121)] = 2339,
  [SMALL_STATE(122)] = 2358,
  [SMALL_STATE(123)] = 2377,
  [SMALL_STATE(124)] = 2402,
  [SMALL_STATE(125)] = 2420,
  [SMALL_STATE(126)] = 2442,
  [SMALL_STATE(127)] = 2460,
  [SMALL_STATE(128)] = 2478,
  [SMALL_STATE(129)] = 2497,
  [SMALL_STATE(130)] = 2516,
  [SMALL_STATE(131)] = 2533,
  [SMALL_STATE(132)] = 2542,
  [SMALL_STATE(133)] = 2561,
  [SMALL_STATE(134)] = 2576,
  [SMALL_STATE(135)] = 2591,
  [SMALL_STATE(136)] = 2602,
  [SMALL_STATE(137)] = 2621,
  [SMALL_STATE(138)] = 2640,
  [SMALL_STATE(139)] = 2659,
  [SMALL_STATE(140)] = 2676,
  [SMALL_STATE(141)] = 2693,
  [SMALL_STATE(142)] = 2712,
  [SMALL_STATE(143)] = 2728,
  [SMALL_STATE(144)] = 2742,
  [SMALL_STATE(145)] = 2758,
  [SMALL_STATE(146)] = 2772,
  [SMALL_STATE(147)] = 2786,
  [SMALL_STATE(148)] = 2800,
  [SMALL_STATE(149)] = 2814,
  [SMALL_STATE(150)] = 2828,
  [SMALL_STATE(151)] = 2844,
  [SMALL_STATE(152)] = 2858,
  [SMALL_STATE(153)] = 2872,
  [SMALL_STATE(154)] = 2885,
  [SMALL_STATE(155)] = 2898,
  [SMALL_STATE(156)] = 2909,
  [SMALL_STATE(157)] = 2922,
  [SMALL_STATE(158)] = 2933,
  [SMALL_STATE(159)] = 2946,
  [SMALL_STATE(160)] = 2959,
  [SMALL_STATE(161)] = 2970,
  [SMALL_STATE(162)] = 2979,
  [SMALL_STATE(163)] = 2987,
  [SMALL_STATE(164)] = 2995,
  [SMALL_STATE(165)] = 3003,
  [SMALL_STATE(166)] = 3011,
  [SMALL_STATE(167)] = 3019,
  [SMALL_STATE(168)] = 3027,
  [SMALL_STATE(169)] = 3035,
  [SMALL_STATE(170)] = 3043,
  [SMALL_STATE(171)] = 3053,
  [SMALL_STATE(172)] = 3063,
  [SMALL_STATE(173)] = 3073,
  [SMALL_STATE(174)] = 3081,
  [SMALL_STATE(175)] = 3091,
  [SMALL_STATE(176)] = 3097,
  [SMALL_STATE(177)] = 3105,
  [SMALL_STATE(178)] = 3115,
  [SMALL_STATE(179)] = 3125,
  [SMALL_STATE(180)] = 3135,
  [SMALL_STATE(181)] = 3141,
  [SMALL_STATE(182)] = 3148,
  [SMALL_STATE(183)] = 3153,
  [SMALL_STATE(184)] = 3160,
  [SMALL_STATE(185)] = 3167,
  [SMALL_STATE(186)] = 3174,
  [SMALL_STATE(187)] = 3179,
  [SMALL_STATE(188)] = 3184,
  [SMALL_STATE(189)] = 3189,
  [SMALL_STATE(190)] = 3194,
  [SMALL_STATE(191)] = 3201,
  [SMALL_STATE(192)] = 3206,
  [SMALL_STATE(193)] = 3213,
  [SMALL_STATE(194)] = 3220,
  [SMALL_STATE(195)] = 3227,
  [SMALL_STATE(196)] = 3231,
  [SMALL_STATE(197)] = 3235,
  [SMALL_STATE(198)] = 3239,
  [SMALL_STATE(199)] = 3243,
  [SMALL_STATE(200)] = 3247,
  [SMALL_STATE(201)] = 3251,
  [SMALL_STATE(202)] = 3255,
  [SMALL_STATE(203)] = 3259,
  [SMALL_STATE(204)] = 3263,
  [SMALL_STATE(205)] = 3267,
  [SMALL_STATE(206)] = 3271,
  [SMALL_STATE(207)] = 3275,
  [SMALL_STATE(208)] = 3279,
  [SMALL_STATE(209)] = 3283,
  [SMALL_STATE(210)] = 3287,
  [SMALL_STATE(211)] = 3291,
  [SMALL_STATE(212)] = 3295,
  [SMALL_STATE(213)] = 3299,
  [SMALL_STATE(214)] = 3303,
  [SMALL_STATE(215)] = 3307,
  [SMALL_STATE(216)] = 3311,
  [SMALL_STATE(217)] = 3315,
  [SMALL_STATE(218)] = 3319,
  [SMALL_STATE(219)] = 3323,
  [SMALL_STATE(220)] = 3327,
  [SMALL_STATE(221)] = 3331,
  [SMALL_STATE(222)] = 3335,
  [SMALL_STATE(223)] = 3339,
  [SMALL_STATE(224)] = 3343,
  [SMALL_STATE(225)] = 3347,
  [SMALL_STATE(226)] = 3351,
  [SMALL_STATE(227)] = 3355,
  [SMALL_STATE(228)] = 3359,
  [SMALL_STATE(229)] = 3363,
  [SMALL_STATE(230)] = 3367,
  [SMALL_STATE(231)] = 3371,
  [SMALL_STATE(232)] = 3375,
  [SMALL_STATE(233)] = 3379,
  [SMALL_STATE(234)] = 3383,
  [SMALL_STATE(235)] = 3387,
  [SMALL_STATE(236)] = 3391,
  [SMALL_STATE(237)] = 3395,
  [SMALL_STATE(238)] = 3399,
  [SMALL_STATE(239)] = 3403,
  [SMALL_STATE(240)] = 3407,
  [SMALL_STATE(241)] = 3411,
  [SMALL_STATE(242)] = 3415,
  [SMALL_STATE(243)] = 3419,
  [SMALL_STATE(244)] = 3423,
  [SMALL_STATE(245)] = 3427,
  [SMALL_STATE(246)] = 3431,
  [SMALL_STATE(247)] = 3435,
  [SMALL_STATE(248)] = 3439,
  [SMALL_STATE(249)] = 3443,
  [SMALL_STATE(250)] = 3447,
  [SMALL_STATE(251)] = 3451,
  [SMALL_STATE(252)] = 3455,
  [SMALL_STATE(253)] = 3459,
  [SMALL_STATE(254)] = 3463,
  [SMALL_STATE(255)] = 3467,
  [SMALL_STATE(256)] = 3471,
  [SMALL_STATE(257)] = 3475,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LENGTH_, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LENGTH_, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ALL_, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_word, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_word, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_word_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(248),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_word_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_word, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_word, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(40),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(130),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(130),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(174),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subref, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subref, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_clause, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redefines_clause, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redefines_clause, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_clause, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_9, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_9, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_name, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_name, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refmod, 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refmod, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(235),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h_string, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linage_counter, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x_string, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_n_string, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_literal, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_literal_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_literal_repeat1, 2), SHIFT_REPEAT(31),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_literal, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HIGH_VALUE_, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOW_VALUE_, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_QUOTE_, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SPACE_, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TOK_NULL_, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ZERO_, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp_list, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WHEN_COMPILED_FUNC_, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FUNCTION_NAME_, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CURRENT_DATE_FUNC_, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 5),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(176),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(162),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(222),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(25),
  [306] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(228),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 4),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_args, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numvalc_args, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_args, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_refmod, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linage_counter, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_refmod, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arith_x, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_exp, 3, .production_id = 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arith_x, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__locale_dt_args, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trim_args, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_exp, 3, .production_id = 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_exp, 3, .production_id = 5),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pow_exp, 3, .production_id = 5),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_exp, 2, .production_id = 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_exp, 3, .production_id = 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_exp, 2, .production_id = 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__exp_list_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_working_storage_section_repeat1, 2),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(244),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_body, 4, .production_id = 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 4),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_x_list, 2), SHIFT_REPEAT(118),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_x_list, 2),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_x_list, 2), SHIFT_REPEAT(154),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_body, 3, .production_id = 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 5),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp_list, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__exp_list_repeat1, 2), SHIFT_REPEAT(20),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numvalc_args, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(223),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 6),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__target_x, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target_x, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__target_x, 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target_x, 3),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 7),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 7),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 8),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_name, 1),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 8),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 6),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 4),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 9),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop_run_statement, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_statement, 2, .production_id = 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UPPER_CASE_FUNC_, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRIM_FUNCTION_, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SUBSTITUTE_CASE_FUNC_, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SUBSTITUTE_FUNC_, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_REVERSE_FUNC_, 1),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMVALC_FUNC_, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__locale_dt_args, 3),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trim_args, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOWER_CASE_FUNC_, 1),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOCALE_DT_FUNC_, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CONCATENATE_FUNC_, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_literal, 2),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [648] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_COBOL(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_WORD,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
