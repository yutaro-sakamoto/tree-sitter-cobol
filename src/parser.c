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
#define STATE_COUNT 458
#define LARGE_STATE_COUNT 88
#define SYMBOL_COUNT 672
#define ALIAS_COUNT 0
#define TOKEN_COUNT 524
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 7

enum {
  sym__WORD = 1,
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
  sym_at_line_column = 39,
  anon_sym_AMP = 40,
  sym_integer = 41,
  sym_decimal = 42,
  aux_sym_x_string_token1 = 43,
  aux_sym_x_string_token2 = 44,
  aux_sym_h_string_token1 = 45,
  aux_sym_h_string_token2 = 46,
  aux_sym_n_string_token1 = 47,
  aux_sym_n_string_token2 = 48,
  aux_sym_n_string_token3 = 49,
  aux_sym_n_string_token4 = 50,
  aux_sym_n_string_token5 = 51,
  aux_sym_n_string_token6 = 52,
  aux_sym_n_string_token7 = 53,
  aux_sym_n_string_token8 = 54,
  sym__ACCEPT = 55,
  sym__ACCESS = 56,
  sym__ADD = 57,
  sym__ADDRESS = 58,
  sym__ADVANCING = 59,
  sym__AFTER = 60,
  sym__ALL = 61,
  sym__ALLOCATE = 62,
  sym__ALPHABET = 63,
  sym__ALPHABETIC = 64,
  sym__ALPHABETIC_LOWER = 65,
  sym__ALPHABETIC_UPPER = 66,
  sym__ALPHANUMERIC = 67,
  sym__ALPHANUMERIC_EDITED = 68,
  sym__ALSO = 69,
  sym__ALTER = 70,
  sym__ALTERNATE = 71,
  sym__AND = 72,
  sym__ANY = 73,
  sym__APPLY = 74,
  sym__ARE = 75,
  sym__AREA = 76,
  sym__ARGUMENT_NUMBER = 77,
  sym__ARGUMENT_VALUE = 78,
  sym__AS = 79,
  sym__ASCENDING = 80,
  sym__ASSIGN = 81,
  sym__AT = 82,
  sym__AUTO = 83,
  sym__AUTOMATIC = 84,
  sym__BACKGROUND_COLOR = 85,
  sym__BASED = 86,
  sym__BEFORE = 87,
  sym__BELL = 88,
  sym__BINARY = 89,
  sym__BINARY_C_LONG = 90,
  sym__BINARY_CHAR = 91,
  sym__BINARY_DOUBLE = 92,
  sym__BINARY_LONG = 93,
  sym__BINARY_SHORT = 94,
  sym__BLANK = 95,
  sym__BLANK_LINE = 96,
  sym__BLANK_SCREEN = 97,
  sym__BLINK = 98,
  sym__BLOCK = 99,
  sym__BOTTOM = 100,
  sym__BY = 101,
  sym__BYTE_LENGTH = 102,
  sym__CALL = 103,
  sym__CANCEL = 104,
  sym__CH = 105,
  sym__CHAINING = 106,
  sym__CHARACTER = 107,
  sym__CHARACTERS = 108,
  sym__CLASS = 109,
  sym__CLASS_NAME = 110,
  sym__CLOSE = 111,
  sym__CLOSE_NOFEED = 112,
  sym__CODE = 113,
  sym__CODE_SET = 114,
  sym__COLLATING = 115,
  sym__COL = 116,
  sym__COLS = 117,
  sym__COLUMN = 118,
  sym__COLUMNS = 119,
  sym__COMMA = 120,
  sym__COMMAND_LINE = 121,
  sym__COMMA_DELIM = 122,
  sym__COMMIT = 123,
  sym__COMMITMENT_CONTROL = 124,
  sym__COMMON = 125,
  sym__COMP = 126,
  sym__COMPUTE = 127,
  sym__COMP_1 = 128,
  sym__COMP_2 = 129,
  sym__COMP_3 = 130,
  sym__COMP_4 = 131,
  sym__COMP_5 = 132,
  sym__COMP_X = 133,
  sym__CONCATENATE_FUNC = 134,
  sym__CONFIGURATION = 135,
  sym__CONSTANT = 136,
  sym__CONTAINS = 137,
  sym__CONTENT = 138,
  sym__CONTINUE = 139,
  sym__CONTROL = 140,
  sym__CONTROLS = 141,
  sym__CONTROL_FOOTING = 142,
  sym__CONTROL_HEADING = 143,
  sym__CONVERTING = 144,
  sym__CORE_INDEX = 145,
  sym__CORRESPONDING = 146,
  sym__COUNT = 147,
  sym__CRT = 148,
  sym__CURRENCY = 149,
  sym__CURRENT_DATE_FUNC = 150,
  sym__CURSOR = 151,
  sym__CYCLE = 152,
  sym__CYL_OVERFLOW = 153,
  sym__DATA = 154,
  sym__DATE = 155,
  sym__DAY = 156,
  sym__DAY_OF_WEEK = 157,
  sym__DE = 158,
  sym__DEBUGGING = 159,
  sym__DECIMAL_POINT = 160,
  sym__DECLARATIVES = 161,
  sym__DEFAULT = 162,
  sym__DELETE = 163,
  sym__DELIMITED = 164,
  sym__DELIMITER = 165,
  sym__DEPENDING = 166,
  sym__DESCENDING = 167,
  sym__DETAIL = 168,
  sym__DISK = 169,
  sym__DISPLAY = 170,
  sym__DIVIDE = 171,
  sym__DIVISION = 172,
  sym__DOWN = 173,
  sym__DUPLICATES = 174,
  sym__DYNAMIC = 175,
  sym__EBCDIC = 176,
  sym__ELSE = 177,
  sym__END = 178,
  sym__END_ACCEPT = 179,
  sym__END_ADD = 180,
  sym__END_CALL = 181,
  sym__END_COMPUTE = 182,
  sym__END_DELETE = 183,
  sym__END_DISPLAY = 184,
  sym__END_DIVIDE = 185,
  sym__END_EVALUATE = 186,
  sym__END_FUNCTION = 187,
  sym__END_IF = 188,
  sym__END_MULTIPLY = 189,
  sym__END_PERFORM = 190,
  sym__END_PROGRAM = 191,
  sym__END_READ = 192,
  sym__END_RETURN = 193,
  sym__END_REWRITE = 194,
  sym__END_SEARCH = 195,
  sym__END_START = 196,
  sym__END_STRING = 197,
  sym__END_SUBTRACT = 198,
  sym__END_UNSTRING = 199,
  sym__END_WRITE = 200,
  sym__ENTRY = 201,
  sym__ENVIRONMENT = 202,
  sym__ENVIRONMENT_NAME = 203,
  sym__ENVIRONMENT_VALUE = 204,
  sym__EOL = 205,
  sym__EOP = 206,
  sym__EOS = 207,
  sym__EQUAL = 208,
  sym__EQUALS = 209,
  sym__ERASE = 210,
  sym__ERROR = 211,
  sym__ESCAPE = 212,
  sym__EVALUATE = 213,
  sym__EVENT_STATUS = 214,
  sym__EXCEPTION = 215,
  sym__EXCLUSIVE = 216,
  sym__EXIT = 217,
  sym__EXTEND = 218,
  sym__EXTERNAL = 219,
  sym__FD = 220,
  sym__FILE_CONTROL = 221,
  sym__FILE_ID = 222,
  sym__FILLER = 223,
  sym__FINAL = 224,
  sym__FIRST = 225,
  sym__FOOTING = 226,
  sym__FOR = 227,
  sym__FOREGROUND_COLOR = 228,
  sym__FOREVER = 229,
  sym__FORMS_OVERLAY = 230,
  sym__FREE = 231,
  sym__FROM = 232,
  sym__FULL = 233,
  sym__FUNCTION = 234,
  sym__FUNCTION_ID = 235,
  sym__FUNCTION_NAME = 236,
  sym__GE = 237,
  sym__GENERATE = 238,
  sym__GIVING = 239,
  sym__GLOBAL = 240,
  sym__GO = 241,
  sym__GOBACK = 242,
  sym__GREATER = 243,
  sym__GROUP = 244,
  sym__HEADING = 245,
  sym__HIGHLIGHT = 246,
  anon_sym_high_DASHvalue = 247,
  anon_sym_high_DASHValue = 248,
  anon_sym_high_DASHVALUE = 249,
  anon_sym_High_DASHvalue = 250,
  anon_sym_High_DASHValue = 251,
  anon_sym_High_DASHVALUE = 252,
  anon_sym_HIGH_DASHvalue = 253,
  anon_sym_HIGH_DASHValue = 254,
  anon_sym_HIGH_DASHVALUE = 255,
  sym__IDENTIFICATION = 256,
  sym__IF = 257,
  sym__IGNORE = 258,
  sym__IGNORING = 259,
  sym__IN = 260,
  sym__INDEX = 261,
  sym__INDEXED = 262,
  sym__INDICATE = 263,
  sym__INITIALIZE = 264,
  sym__INITIALIZED = 265,
  sym__INITIATE = 266,
  sym__INPUT = 267,
  sym__INPUT_OUTPUT = 268,
  sym__INSPECT = 269,
  sym__INTO = 270,
  sym__INTRINSIC = 271,
  sym__INVALID = 272,
  sym__INVALID_KEY = 273,
  sym__IS = 274,
  sym__I_O = 275,
  sym__I_O_CONTROL = 276,
  sym__JUSTIFIED = 277,
  sym__KEY = 278,
  sym__LABEL = 279,
  sym__LAST = 280,
  sym__LAST_DETAIL = 281,
  sym__LE = 282,
  sym__LEADING = 283,
  sym__LEFT = 284,
  sym__LENGTH = 285,
  sym__LESS = 286,
  sym__LEVEL_NUMBER_WORD = 287,
  sym__LEVEL88_NUMBER_WORD = 288,
  sym__LIMIT = 289,
  sym__LIMITS = 290,
  sym__LINAGE = 291,
  sym__LINAGE_COUNTER = 292,
  sym__LINE = 293,
  sym__LINES = 294,
  sym__LINKAGE = 295,
  sym__LOCALE = 296,
  sym__LOCALE_DT_FUNC = 297,
  sym__LOCAL_STORAGE = 298,
  sym__LOCK = 299,
  sym__LOWER_CASE_FUNC = 300,
  sym__LOWLIGHT = 301,
  anon_sym_low_DASHvalue = 302,
  anon_sym_low_DASHValue = 303,
  anon_sym_low_DASHVALUE = 304,
  anon_sym_Low_DASHvalue = 305,
  anon_sym_Low_DASHValue = 306,
  anon_sym_Low_DASHVALUE = 307,
  anon_sym_LOW_DASHvalue = 308,
  anon_sym_LOW_DASHValue = 309,
  anon_sym_LOW_DASHVALUE = 310,
  sym__MANUAL = 311,
  sym__MEMORY = 312,
  sym__MERGE = 313,
  sym__MINUS = 314,
  sym__MNEMONIC_NAME = 315,
  sym__MODE = 316,
  sym__MOVE = 317,
  sym__MULTIPLE = 318,
  sym__MULTIPLY = 319,
  sym__NATIONAL = 320,
  sym__NATIONAL_EDITED = 321,
  sym__NATIVE = 322,
  sym__NE = 323,
  sym__NEGATIVE = 324,
  sym__NEXT = 325,
  sym__NEXT_SENTENCE = 326,
  sym__NO = 327,
  sym__NOMINAL = 328,
  sym__NOT = 329,
  sym__NOT_END = 330,
  sym__NOT_EOP = 331,
  sym__NOT_EXCEPTION = 332,
  sym__NOT_INVALID_KEY = 333,
  sym__NOT_OVERFLOW = 334,
  sym__NOT_SIZE_ERROR = 335,
  sym__NO_ADVANCING = 336,
  sym__NUMBER = 337,
  sym__NUMBERS = 338,
  sym__NUMERIC = 339,
  sym__NUMERIC_EDITED = 340,
  sym__NUMVALC_FUNC = 341,
  sym__OBJECT_COMPUTER = 342,
  sym__OCCURS = 343,
  sym__OF = 344,
  sym__OFF = 345,
  sym__OMITTED = 346,
  sym__ON = 347,
  sym__ONLY = 348,
  sym__OPEN = 349,
  sym__OPTIONAL = 350,
  sym__OR = 351,
  sym__ORDER = 352,
  sym__ORGANIZATION = 353,
  sym__OTHER = 354,
  sym__OUTPUT = 355,
  sym__OVERFLOW = 356,
  sym__OVERLINE = 357,
  sym__PACKED_DECIMAL = 358,
  sym__PADDING = 359,
  sym__PAGE = 360,
  sym__PAGE_FOOTING = 361,
  sym__PAGE_HEADING = 362,
  sym__PARAGRAPH = 363,
  sym__PERFORM = 364,
  sym__PIC = 365,
  sym__PICTURE = 366,
  sym__PLUS = 367,
  sym__POINTER = 368,
  sym__POSITION = 369,
  sym__POSITIVE = 370,
  sym__PRESENT = 371,
  sym__PREVIOUS = 372,
  sym__PRINTER = 373,
  sym__PRINTING = 374,
  sym__PROCEDURE = 375,
  sym__PROCEDURES = 376,
  sym__PROCEED = 377,
  sym__PROGRAM = 378,
  sym__PROGRAM_ID = 379,
  sym__PROGRAM_NAME = 380,
  sym__PROGRAM_POINTER = 381,
  sym__PROMPT = 382,
  anon_sym_quote = 383,
  anon_sym_QUOTE = 384,
  anon_sym_Quote = 385,
  sym__RANDOM = 386,
  sym__RD = 387,
  sym__READ = 388,
  sym__RECORD = 389,
  sym__RECORDING = 390,
  sym__RECORDS = 391,
  sym__RECURSIVE = 392,
  sym__REDEFINES = 393,
  sym__REEL = 394,
  sym__REFERENCE = 395,
  sym__RELATIVE = 396,
  sym__RELEASE = 397,
  sym__REMAINDER = 398,
  sym__REMOVAL = 399,
  sym__RENAMES = 400,
  sym__REPLACING = 401,
  sym__REPORT = 402,
  sym__REPORTING = 403,
  sym__REPORTS = 404,
  sym__REPORT_FOOTING = 405,
  sym__REPORT_HEADING = 406,
  sym__REPOSITORY = 407,
  sym__REQUIRED = 408,
  sym__RESERVE = 409,
  sym__RETURN = 410,
  sym__RETURNING = 411,
  sym__REVERSE_FUNC = 412,
  sym__REVERSE_VIDEO = 413,
  sym__REWIND = 414,
  sym__REWRITE = 415,
  sym__RIGHT = 416,
  sym__ROLLBACK = 417,
  sym__ROUNDED = 418,
  sym__RUN = 419,
  sym__SAME = 420,
  sym__SCREEN = 421,
  sym__SCREEN_CONTROL = 422,
  sym__SCROLL = 423,
  sym__SD = 424,
  sym__SEARCH = 425,
  sym__SECTION = 426,
  sym__SECURE = 427,
  sym__SEGMENT_LIMIT = 428,
  sym__SELECT = 429,
  sym__SEMI_COLON = 430,
  sym__SENTENCE = 431,
  sym__SEPARATE = 432,
  sym__SEQUENCE = 433,
  sym__SEQUENTIAL = 434,
  sym__SET = 435,
  sym__SHARING = 436,
  sym__SIGN = 437,
  sym__SIGNED = 438,
  sym__SIGNED_INT = 439,
  sym__SIGNED_LONG = 440,
  sym__SIGNED_SHORT = 441,
  sym__SIZE = 442,
  sym__SIZE_ERROR = 443,
  sym__SORT = 444,
  sym__SORT_MERGE = 445,
  sym__SOURCE = 446,
  sym__SOURCE_COMPUTER = 447,
  anon_sym_space = 448,
  anon_sym_SPACE = 449,
  anon_sym_Space = 450,
  sym__SPECIAL_NAMES = 451,
  sym__STANDARD = 452,
  sym__STANDARD_1 = 453,
  sym__STANDARD_2 = 454,
  sym__START = 455,
  sym__STATUS = 456,
  sym__STOP = 457,
  sym__STRING = 458,
  sym__SUBSTITUTE_FUNC = 459,
  sym__SUBSTITUTE_CASE_FUNC = 460,
  sym__SUBTRACT = 461,
  sym__SUM = 462,
  sym__SUPPRESS = 463,
  sym__SYMBOLIC = 464,
  sym__SYNCHRONIZED = 465,
  sym__TALLYING = 466,
  sym__TAPE = 467,
  sym__TERMINATE = 468,
  sym__TEST = 469,
  sym__THAN = 470,
  sym__THEN = 471,
  sym__THRU = 472,
  sym__TIME = 473,
  sym__TIMES = 474,
  sym__TO = 475,
  sym__TOK_FALSE = 476,
  sym__TOK_FILE = 477,
  sym__TOK_INITIAL = 478,
  anon_sym_null = 479,
  anon_sym_Null = 480,
  anon_sym_NULL = 481,
  sym__TOK_TRUE = 482,
  sym__TOP = 483,
  sym__TRACKS = 484,
  sym__TRAILING = 485,
  sym__TRANSFORM = 486,
  sym__TRIM_FUNCTION = 487,
  sym__TYPE = 488,
  sym__UNDERLINE = 489,
  sym__UNIT = 490,
  sym__UNLOCK = 491,
  sym__UNSIGNED = 492,
  sym__UNSIGNED_INT = 493,
  sym__UNSIGNED_LONG = 494,
  sym__UNSIGNED_SHORT = 495,
  sym__UNSTRING = 496,
  sym__UNTIL = 497,
  sym__UP = 498,
  sym__UPDATE = 499,
  sym__UPON = 500,
  sym__UPON_ARGUMENT_NUMBER = 501,
  sym__UPON_COMMAND_LINE = 502,
  sym__UPON_ENVIRONMENT_NAME = 503,
  sym__UPON_ENVIRONMENT_VALUE = 504,
  sym__UPPER_CASE_FUNC = 505,
  sym__USAGE = 506,
  sym__USE = 507,
  sym__USING = 508,
  sym__VALUE = 509,
  sym__VARYING = 510,
  sym__WAIT = 511,
  sym__WHEN = 512,
  sym__WHEN_COMPILED_FUNC = 513,
  sym__WHEN_OTHER = 514,
  sym__WITH = 515,
  sym__WORDS = 516,
  sym__WORKING_STORAGE = 517,
  sym__WRITE = 518,
  sym__YYYYDDD = 519,
  sym__YYYYMMDD = 520,
  anon_sym_zero = 521,
  anon_sym_ZERO = 522,
  anon_sym_Zero = 523,
  sym_start = 524,
  sym_program_definition = 525,
  sym_identification_division = 526,
  sym_program_name = 527,
  sym_as_literal = 528,
  sym_data_division = 529,
  sym_working_storage_section = 530,
  sym_data_description = 531,
  sym_entry_name = 532,
  sym__data_description_clause = 533,
  sym_redefines_clause = 534,
  sym__identifier = 535,
  sym_qualified_word = 536,
  sym__in_of = 537,
  sym_subref = 538,
  sym_refmod = 539,
  sym__exp_list = 540,
  sym__exp = 541,
  sym__binary_exp = 542,
  sym__unary_exp = 543,
  sym_positive_exp = 544,
  sym_negative_exp = 545,
  sym_add_exp = 546,
  sym_sub_exp = 547,
  sym_mul_exp = 548,
  sym_div_exp = 549,
  sym_pow_exp = 550,
  sym__arith_x = 551,
  sym_picture_clause = 552,
  sym__picture_string = 553,
  sym_picture_9 = 554,
  sym_procedure_division = 555,
  sym_procedure_using_chaining = 556,
  sym_procedure_param = 557,
  sym_procedure_type = 558,
  sym_size = 559,
  sym_procedure_returning = 560,
  sym_procedure_declaratives = 561,
  sym__procedure = 562,
  sym_section_header = 563,
  sym_paragraph_header = 564,
  sym_invalid_statement = 565,
  sym__statement = 566,
  sym_stop_statement = 567,
  sym_display_statement = 568,
  sym__display_body = 569,
  sym__id_or_lit = 570,
  sym_on_disp_exception = 571,
  sym_with_clause = 572,
  sym_disp_attr = 573,
  sym__num_or_id_or_lit = 574,
  sym_scroll_lines = 575,
  sym_line_or_lines = 576,
  sym_move_statement = 577,
  sym__move_body = 578,
  sym__x = 579,
  aux_sym__target_x_list = 580,
  sym__target_x = 581,
  sym__basic_literal = 582,
  sym__basic_value = 583,
  sym__literal = 584,
  sym_function_ = 585,
  sym_func_refmod = 586,
  sym__trim_args = 587,
  sym__e_sep = 588,
  sym__numvalc_args = 589,
  sym__locale_dt_args = 590,
  sym_linage_counter = 591,
  sym__func_args = 592,
  sym__LITERAL = 593,
  sym_number = 594,
  sym__string = 595,
  sym_x_string = 596,
  sym_h_string = 597,
  sym_n_string = 598,
  sym__HIGH_VALUE = 599,
  sym__LOW_VALUE = 600,
  sym__QUOTE = 601,
  sym__SPACE = 602,
  sym__TOK_NULL = 603,
  sym__ZERO = 604,
  sym_ALL = 605,
  sym_AUTO = 606,
  sym_BACKGROUND_COLOR = 607,
  sym_BELL = 608,
  sym_BLANK_LINE = 609,
  sym_BLANK_SCREEN = 610,
  sym_BLINK = 611,
  sym_CHAINING = 612,
  sym_CONCATENATE_FUNC = 613,
  sym_CRT = 614,
  sym_CURRENT_DATE_FUNC = 615,
  sym_DEFAULT = 616,
  sym_DOWN = 617,
  sym_EOL = 618,
  sym_EOS = 619,
  sym_ERASE = 620,
  sym_EXCEPTION = 621,
  sym_FOREGROUND_COLOR = 622,
  sym_FUNCTION_NAME = 623,
  sym_HIGHLIGHT = 624,
  sym_HIGH_VALUE = 625,
  sym_LENGTH = 626,
  sym_LINE = 627,
  sym_LINES = 628,
  sym_LOCALE_DT_FUNC = 629,
  sym_LOWER_CASE_FUNC = 630,
  sym_LOWLIGHT = 631,
  sym_LOW_VALUE = 632,
  sym_MNEMONIC_NAME = 633,
  sym_NOT_EXCEPTION = 634,
  sym_NO_ADVANCING = 635,
  sym_NUMVALC_FUNC = 636,
  sym_OPTIONAL = 637,
  sym_OVERLINE = 638,
  sym_PRINTER = 639,
  sym_QUOTE = 640,
  sym_REFERENCE = 641,
  sym_REVERSE_FUNC = 642,
  sym_REVERSE_VIDEO = 643,
  sym_SCROLL = 644,
  sym_SIZE = 645,
  sym_SPACE = 646,
  sym_SUBSTITUTE_FUNC = 647,
  sym_SUBSTITUTE_CASE_FUNC = 648,
  sym_TOK_NULL = 649,
  sym_TRIM_FUNCTION = 650,
  sym_UNDERLINE = 651,
  sym_UNSIGNED = 652,
  sym_UP = 653,
  sym_UPON = 654,
  sym_UPPER_CASE_FUNC = 655,
  sym_USING = 656,
  sym_VALUE = 657,
  sym_WHEN_COMPILED_FUNC = 658,
  sym_WITH = 659,
  sym_ZERO = 660,
  aux_sym_start_repeat1 = 661,
  aux_sym_working_storage_section_repeat1 = 662,
  aux_sym_data_description_repeat1 = 663,
  aux_sym_qualified_word_repeat1 = 664,
  aux_sym__exp_list_repeat1 = 665,
  aux_sym_procedure_division_repeat1 = 666,
  aux_sym_procedure_using_chaining_repeat1 = 667,
  aux_sym__display_body_repeat1 = 668,
  aux_sym_on_disp_exception_repeat1 = 669,
  aux_sym_with_clause_repeat1 = 670,
  aux_sym__basic_literal_repeat1 = 671,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__WORD] = "_WORD",
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
  [sym_at_line_column] = "at_line_column",
  [anon_sym_AMP] = "&",
  [sym_integer] = "integer",
  [sym_decimal] = "decimal",
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
  [sym_procedure_using_chaining] = "procedure_using_chaining",
  [sym_procedure_param] = "procedure_param",
  [sym_procedure_type] = "procedure_type",
  [sym_size] = "size",
  [sym_procedure_returning] = "procedure_returning",
  [sym_procedure_declaratives] = "procedure_declaratives",
  [sym__procedure] = "_procedure",
  [sym_section_header] = "section_header",
  [sym_paragraph_header] = "paragraph_header",
  [sym_invalid_statement] = "invalid_statement",
  [sym__statement] = "_statement",
  [sym_stop_statement] = "stop_statement",
  [sym_display_statement] = "display_statement",
  [sym__display_body] = "_display_body",
  [sym__id_or_lit] = "_id_or_lit",
  [sym_on_disp_exception] = "on_disp_exception",
  [sym_with_clause] = "with_clause",
  [sym_disp_attr] = "disp_attr",
  [sym__num_or_id_or_lit] = "_num_or_id_or_lit",
  [sym_scroll_lines] = "scroll_lines",
  [sym_line_or_lines] = "line_or_lines",
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
  [sym_number] = "number",
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
  [sym_ALL] = "ALL",
  [sym_AUTO] = "AUTO",
  [sym_BACKGROUND_COLOR] = "BACKGROUND_COLOR",
  [sym_BELL] = "BELL",
  [sym_BLANK_LINE] = "BLANK_LINE",
  [sym_BLANK_SCREEN] = "BLANK_SCREEN",
  [sym_BLINK] = "BLINK",
  [sym_CHAINING] = "CHAINING",
  [sym_CONCATENATE_FUNC] = "CONCATENATE_FUNC",
  [sym_CRT] = "CRT",
  [sym_CURRENT_DATE_FUNC] = "CURRENT_DATE_FUNC",
  [sym_DEFAULT] = "DEFAULT",
  [sym_DOWN] = "DOWN",
  [sym_EOL] = "EOL",
  [sym_EOS] = "EOS",
  [sym_ERASE] = "ERASE",
  [sym_EXCEPTION] = "EXCEPTION",
  [sym_FOREGROUND_COLOR] = "FOREGROUND_COLOR",
  [sym_FUNCTION_NAME] = "FUNCTION_NAME",
  [sym_HIGHLIGHT] = "HIGHLIGHT",
  [sym_HIGH_VALUE] = "HIGH_VALUE",
  [sym_LENGTH] = "LENGTH",
  [sym_LINE] = "LINE",
  [sym_LINES] = "LINES",
  [sym_LOCALE_DT_FUNC] = "LOCALE_DT_FUNC",
  [sym_LOWER_CASE_FUNC] = "LOWER_CASE_FUNC",
  [sym_LOWLIGHT] = "LOWLIGHT",
  [sym_LOW_VALUE] = "LOW_VALUE",
  [sym_MNEMONIC_NAME] = "MNEMONIC_NAME",
  [sym_NOT_EXCEPTION] = "NOT_EXCEPTION",
  [sym_NO_ADVANCING] = "NO_ADVANCING",
  [sym_NUMVALC_FUNC] = "NUMVALC_FUNC",
  [sym_OPTIONAL] = "OPTIONAL",
  [sym_OVERLINE] = "OVERLINE",
  [sym_PRINTER] = "PRINTER",
  [sym_QUOTE] = "QUOTE",
  [sym_REFERENCE] = "REFERENCE",
  [sym_REVERSE_FUNC] = "REVERSE_FUNC",
  [sym_REVERSE_VIDEO] = "REVERSE_VIDEO",
  [sym_SCROLL] = "SCROLL",
  [sym_SIZE] = "SIZE",
  [sym_SPACE] = "SPACE",
  [sym_SUBSTITUTE_FUNC] = "SUBSTITUTE_FUNC",
  [sym_SUBSTITUTE_CASE_FUNC] = "SUBSTITUTE_CASE_FUNC",
  [sym_TOK_NULL] = "TOK_NULL",
  [sym_TRIM_FUNCTION] = "TRIM_FUNCTION",
  [sym_UNDERLINE] = "UNDERLINE",
  [sym_UNSIGNED] = "UNSIGNED",
  [sym_UP] = "UP",
  [sym_UPON] = "UPON",
  [sym_UPPER_CASE_FUNC] = "UPPER_CASE_FUNC",
  [sym_USING] = "USING",
  [sym_VALUE] = "VALUE",
  [sym_WHEN_COMPILED_FUNC] = "WHEN_COMPILED_FUNC",
  [sym_WITH] = "WITH",
  [sym_ZERO] = "ZERO",
  [aux_sym_start_repeat1] = "start_repeat1",
  [aux_sym_working_storage_section_repeat1] = "working_storage_section_repeat1",
  [aux_sym_data_description_repeat1] = "data_description_repeat1",
  [aux_sym_qualified_word_repeat1] = "qualified_word_repeat1",
  [aux_sym__exp_list_repeat1] = "_exp_list_repeat1",
  [aux_sym_procedure_division_repeat1] = "procedure_division_repeat1",
  [aux_sym_procedure_using_chaining_repeat1] = "procedure_using_chaining_repeat1",
  [aux_sym__display_body_repeat1] = "_display_body_repeat1",
  [aux_sym_on_disp_exception_repeat1] = "on_disp_exception_repeat1",
  [aux_sym_with_clause_repeat1] = "with_clause_repeat1",
  [aux_sym__basic_literal_repeat1] = "_basic_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__WORD] = sym__WORD,
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
  [sym_at_line_column] = sym_at_line_column,
  [anon_sym_AMP] = anon_sym_AMP,
  [sym_integer] = sym_integer,
  [sym_decimal] = sym_decimal,
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
  [sym_procedure_using_chaining] = sym_procedure_using_chaining,
  [sym_procedure_param] = sym_procedure_param,
  [sym_procedure_type] = sym_procedure_type,
  [sym_size] = sym_size,
  [sym_procedure_returning] = sym_procedure_returning,
  [sym_procedure_declaratives] = sym_procedure_declaratives,
  [sym__procedure] = sym__procedure,
  [sym_section_header] = sym_section_header,
  [sym_paragraph_header] = sym_paragraph_header,
  [sym_invalid_statement] = sym_invalid_statement,
  [sym__statement] = sym__statement,
  [sym_stop_statement] = sym_stop_statement,
  [sym_display_statement] = sym_display_statement,
  [sym__display_body] = sym__display_body,
  [sym__id_or_lit] = sym__id_or_lit,
  [sym_on_disp_exception] = sym_on_disp_exception,
  [sym_with_clause] = sym_with_clause,
  [sym_disp_attr] = sym_disp_attr,
  [sym__num_or_id_or_lit] = sym__num_or_id_or_lit,
  [sym_scroll_lines] = sym_scroll_lines,
  [sym_line_or_lines] = sym_line_or_lines,
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
  [sym_number] = sym_number,
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
  [sym_ALL] = sym_ALL,
  [sym_AUTO] = sym_AUTO,
  [sym_BACKGROUND_COLOR] = sym_BACKGROUND_COLOR,
  [sym_BELL] = sym_BELL,
  [sym_BLANK_LINE] = sym_BLANK_LINE,
  [sym_BLANK_SCREEN] = sym_BLANK_SCREEN,
  [sym_BLINK] = sym_BLINK,
  [sym_CHAINING] = sym_CHAINING,
  [sym_CONCATENATE_FUNC] = sym_CONCATENATE_FUNC,
  [sym_CRT] = sym_CRT,
  [sym_CURRENT_DATE_FUNC] = sym_CURRENT_DATE_FUNC,
  [sym_DEFAULT] = sym_DEFAULT,
  [sym_DOWN] = sym_DOWN,
  [sym_EOL] = sym_EOL,
  [sym_EOS] = sym_EOS,
  [sym_ERASE] = sym_ERASE,
  [sym_EXCEPTION] = sym_EXCEPTION,
  [sym_FOREGROUND_COLOR] = sym_FOREGROUND_COLOR,
  [sym_FUNCTION_NAME] = sym_FUNCTION_NAME,
  [sym_HIGHLIGHT] = sym_HIGHLIGHT,
  [sym_HIGH_VALUE] = sym_HIGH_VALUE,
  [sym_LENGTH] = sym_LENGTH,
  [sym_LINE] = sym_LINE,
  [sym_LINES] = sym_LINES,
  [sym_LOCALE_DT_FUNC] = sym_LOCALE_DT_FUNC,
  [sym_LOWER_CASE_FUNC] = sym_LOWER_CASE_FUNC,
  [sym_LOWLIGHT] = sym_LOWLIGHT,
  [sym_LOW_VALUE] = sym_LOW_VALUE,
  [sym_MNEMONIC_NAME] = sym_MNEMONIC_NAME,
  [sym_NOT_EXCEPTION] = sym_NOT_EXCEPTION,
  [sym_NO_ADVANCING] = sym_NO_ADVANCING,
  [sym_NUMVALC_FUNC] = sym_NUMVALC_FUNC,
  [sym_OPTIONAL] = sym_OPTIONAL,
  [sym_OVERLINE] = sym_OVERLINE,
  [sym_PRINTER] = sym_PRINTER,
  [sym_QUOTE] = sym_QUOTE,
  [sym_REFERENCE] = sym_REFERENCE,
  [sym_REVERSE_FUNC] = sym_REVERSE_FUNC,
  [sym_REVERSE_VIDEO] = sym_REVERSE_VIDEO,
  [sym_SCROLL] = sym_SCROLL,
  [sym_SIZE] = sym_SIZE,
  [sym_SPACE] = sym_SPACE,
  [sym_SUBSTITUTE_FUNC] = sym_SUBSTITUTE_FUNC,
  [sym_SUBSTITUTE_CASE_FUNC] = sym_SUBSTITUTE_CASE_FUNC,
  [sym_TOK_NULL] = sym_TOK_NULL,
  [sym_TRIM_FUNCTION] = sym_TRIM_FUNCTION,
  [sym_UNDERLINE] = sym_UNDERLINE,
  [sym_UNSIGNED] = sym_UNSIGNED,
  [sym_UP] = sym_UP,
  [sym_UPON] = sym_UPON,
  [sym_UPPER_CASE_FUNC] = sym_UPPER_CASE_FUNC,
  [sym_USING] = sym_USING,
  [sym_VALUE] = sym_VALUE,
  [sym_WHEN_COMPILED_FUNC] = sym_WHEN_COMPILED_FUNC,
  [sym_WITH] = sym_WITH,
  [sym_ZERO] = sym_ZERO,
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
  [aux_sym_working_storage_section_repeat1] = aux_sym_working_storage_section_repeat1,
  [aux_sym_data_description_repeat1] = aux_sym_data_description_repeat1,
  [aux_sym_qualified_word_repeat1] = aux_sym_qualified_word_repeat1,
  [aux_sym__exp_list_repeat1] = aux_sym__exp_list_repeat1,
  [aux_sym_procedure_division_repeat1] = aux_sym_procedure_division_repeat1,
  [aux_sym_procedure_using_chaining_repeat1] = aux_sym_procedure_using_chaining_repeat1,
  [aux_sym__display_body_repeat1] = aux_sym__display_body_repeat1,
  [aux_sym_on_disp_exception_repeat1] = aux_sym_on_disp_exception_repeat1,
  [aux_sym_with_clause_repeat1] = aux_sym_with_clause_repeat1,
  [aux_sym__basic_literal_repeat1] = aux_sym__basic_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__WORD] = {
    .visible = false,
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
  [sym_at_line_column] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
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
  [sym_procedure_using_chaining] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_param] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_type] = {
    .visible = true,
    .named = true,
  },
  [sym_size] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_returning] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_declaratives] = {
    .visible = true,
    .named = true,
  },
  [sym__procedure] = {
    .visible = false,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_header] = {
    .visible = true,
    .named = true,
  },
  [sym_invalid_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_stop_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_display_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__display_body] = {
    .visible = false,
    .named = true,
  },
  [sym__id_or_lit] = {
    .visible = false,
    .named = true,
  },
  [sym_on_disp_exception] = {
    .visible = true,
    .named = true,
  },
  [sym_with_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_disp_attr] = {
    .visible = true,
    .named = true,
  },
  [sym__num_or_id_or_lit] = {
    .visible = false,
    .named = true,
  },
  [sym_scroll_lines] = {
    .visible = true,
    .named = true,
  },
  [sym_line_or_lines] = {
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
  [sym_number] = {
    .visible = true,
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
  [sym_ALL] = {
    .visible = true,
    .named = true,
  },
  [sym_AUTO] = {
    .visible = true,
    .named = true,
  },
  [sym_BACKGROUND_COLOR] = {
    .visible = true,
    .named = true,
  },
  [sym_BELL] = {
    .visible = true,
    .named = true,
  },
  [sym_BLANK_LINE] = {
    .visible = true,
    .named = true,
  },
  [sym_BLANK_SCREEN] = {
    .visible = true,
    .named = true,
  },
  [sym_BLINK] = {
    .visible = true,
    .named = true,
  },
  [sym_CHAINING] = {
    .visible = true,
    .named = true,
  },
  [sym_CONCATENATE_FUNC] = {
    .visible = true,
    .named = true,
  },
  [sym_CRT] = {
    .visible = true,
    .named = true,
  },
  [sym_CURRENT_DATE_FUNC] = {
    .visible = true,
    .named = true,
  },
  [sym_DEFAULT] = {
    .visible = true,
    .named = true,
  },
  [sym_DOWN] = {
    .visible = true,
    .named = true,
  },
  [sym_EOL] = {
    .visible = true,
    .named = true,
  },
  [sym_EOS] = {
    .visible = true,
    .named = true,
  },
  [sym_ERASE] = {
    .visible = true,
    .named = true,
  },
  [sym_EXCEPTION] = {
    .visible = true,
    .named = true,
  },
  [sym_FOREGROUND_COLOR] = {
    .visible = true,
    .named = true,
  },
  [sym_FUNCTION_NAME] = {
    .visible = true,
    .named = true,
  },
  [sym_HIGHLIGHT] = {
    .visible = true,
    .named = true,
  },
  [sym_HIGH_VALUE] = {
    .visible = true,
    .named = true,
  },
  [sym_LENGTH] = {
    .visible = true,
    .named = true,
  },
  [sym_LINE] = {
    .visible = true,
    .named = true,
  },
  [sym_LINES] = {
    .visible = true,
    .named = true,
  },
  [sym_LOCALE_DT_FUNC] = {
    .visible = true,
    .named = true,
  },
  [sym_LOWER_CASE_FUNC] = {
    .visible = true,
    .named = true,
  },
  [sym_LOWLIGHT] = {
    .visible = true,
    .named = true,
  },
  [sym_LOW_VALUE] = {
    .visible = true,
    .named = true,
  },
  [sym_MNEMONIC_NAME] = {
    .visible = true,
    .named = true,
  },
  [sym_NOT_EXCEPTION] = {
    .visible = true,
    .named = true,
  },
  [sym_NO_ADVANCING] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMVALC_FUNC] = {
    .visible = true,
    .named = true,
  },
  [sym_OPTIONAL] = {
    .visible = true,
    .named = true,
  },
  [sym_OVERLINE] = {
    .visible = true,
    .named = true,
  },
  [sym_PRINTER] = {
    .visible = true,
    .named = true,
  },
  [sym_QUOTE] = {
    .visible = true,
    .named = true,
  },
  [sym_REFERENCE] = {
    .visible = true,
    .named = true,
  },
  [sym_REVERSE_FUNC] = {
    .visible = true,
    .named = true,
  },
  [sym_REVERSE_VIDEO] = {
    .visible = true,
    .named = true,
  },
  [sym_SCROLL] = {
    .visible = true,
    .named = true,
  },
  [sym_SIZE] = {
    .visible = true,
    .named = true,
  },
  [sym_SPACE] = {
    .visible = true,
    .named = true,
  },
  [sym_SUBSTITUTE_FUNC] = {
    .visible = true,
    .named = true,
  },
  [sym_SUBSTITUTE_CASE_FUNC] = {
    .visible = true,
    .named = true,
  },
  [sym_TOK_NULL] = {
    .visible = true,
    .named = true,
  },
  [sym_TRIM_FUNCTION] = {
    .visible = true,
    .named = true,
  },
  [sym_UNDERLINE] = {
    .visible = true,
    .named = true,
  },
  [sym_UNSIGNED] = {
    .visible = true,
    .named = true,
  },
  [sym_UP] = {
    .visible = true,
    .named = true,
  },
  [sym_UPON] = {
    .visible = true,
    .named = true,
  },
  [sym_UPPER_CASE_FUNC] = {
    .visible = true,
    .named = true,
  },
  [sym_USING] = {
    .visible = true,
    .named = true,
  },
  [sym_VALUE] = {
    .visible = true,
    .named = true,
  },
  [sym_WHEN_COMPILED_FUNC] = {
    .visible = true,
    .named = true,
  },
  [sym_WITH] = {
    .visible = true,
    .named = true,
  },
  [sym_ZERO] = {
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
  [aux_sym_procedure_using_chaining_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__display_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_on_disp_exception_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_with_clause_repeat1] = {
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
  field_name = 3,
  field_right = 4,
  field_src = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_dst] = "dst",
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
  [field_src] = "src",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_dst, 1, .inherited = true},
    {field_src, 1, .inherited = true},
  [3] =
    {field_dst, 2},
    {field_src, 0},
  [5] =
    {field_value, 1},
  [6] =
    {field_dst, 3},
    {field_src, 1},
  [8] =
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
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 8,
  [12] = 6,
  [13] = 13,
  [14] = 14,
  [15] = 6,
  [16] = 7,
  [17] = 13,
  [18] = 14,
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
  [30] = 19,
  [31] = 21,
  [32] = 32,
  [33] = 24,
  [34] = 19,
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
  [47] = 44,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
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
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 88,
  [90] = 90,
  [91] = 90,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 52,
  [97] = 53,
  [98] = 54,
  [99] = 52,
  [100] = 54,
  [101] = 53,
  [102] = 102,
  [103] = 103,
  [104] = 55,
  [105] = 105,
  [106] = 106,
  [107] = 55,
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
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 119,
  [122] = 120,
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
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
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
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 70,
  [168] = 35,
  [169] = 52,
  [170] = 72,
  [171] = 59,
  [172] = 71,
  [173] = 73,
  [174] = 57,
  [175] = 58,
  [176] = 36,
  [177] = 53,
  [178] = 178,
  [179] = 54,
  [180] = 180,
  [181] = 63,
  [182] = 74,
  [183] = 64,
  [184] = 184,
  [185] = 184,
  [186] = 186,
  [187] = 187,
  [188] = 66,
  [189] = 67,
  [190] = 65,
  [191] = 62,
  [192] = 49,
  [193] = 193,
  [194] = 184,
  [195] = 195,
  [196] = 46,
  [197] = 37,
  [198] = 60,
  [199] = 61,
  [200] = 56,
  [201] = 76,
  [202] = 75,
  [203] = 83,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 39,
  [209] = 85,
  [210] = 80,
  [211] = 78,
  [212] = 77,
  [213] = 40,
  [214] = 79,
  [215] = 215,
  [216] = 38,
  [217] = 82,
  [218] = 86,
  [219] = 219,
  [220] = 220,
  [221] = 35,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 55,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 36,
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
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 37,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 39,
  [270] = 270,
  [271] = 38,
  [272] = 272,
  [273] = 273,
  [274] = 40,
  [275] = 275,
  [276] = 276,
  [277] = 276,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 279,
  [286] = 286,
  [287] = 281,
  [288] = 283,
  [289] = 275,
  [290] = 283,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 298,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 81,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 69,
  [389] = 389,
  [390] = 84,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 87,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 409,
  [410] = 410,
  [411] = 411,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 414,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 424,
  [436] = 426,
  [437] = 431,
  [438] = 438,
  [439] = 424,
  [440] = 426,
  [441] = 441,
  [442] = 427,
  [443] = 428,
  [444] = 430,
  [445] = 445,
  [446] = 446,
  [447] = 424,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 431,
  [452] = 386,
  [453] = 387,
  [454] = 389,
  [455] = 392,
  [456] = 393,
  [457] = 457,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(159);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '8') ADVANCE(196);
      if (lookahead == '9') ADVANCE(181);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == 'H') ADVANCE(223);
      if (lookahead == 'N') ADVANCE(224);
      if (lookahead == 'S') ADVANCE(302);
      if (lookahead == '^') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(320);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(331);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(326);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(176);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'H') ADVANCE(223);
      if (lookahead == 'N') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == 'H') ADVANCE(223);
      if (lookahead == 'N') ADVANCE(224);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(223);
      if (lookahead == 'N') ADVANCE(224);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '+') ADVANCE(168);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == '^') ADVANCE(175);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '+') ADVANCE(168);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == '^') ADVANCE(175);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(327);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(321);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '+') ADVANCE(168);
      if (lookahead == '-') ADVANCE(170);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '9') ADVANCE(183);
      if (lookahead == ':') ADVANCE(167);
      if (lookahead == 'S') ADVANCE(115);
      if (lookahead == '^') ADVANCE(174);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(138);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(137);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(147);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(114);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 28:
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 29:
      if (lookahead == '8') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 30:
      if (lookahead == '9') ADVANCE(184);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(60);
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
      if (lookahead == '_') ADVANCE(98);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(99);
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
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(50);
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
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(57);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(83);
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
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(92);
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
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(51);
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
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(84);
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
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 106:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(106)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 107:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(335);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(107)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 108:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(108)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 111:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 113:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 114:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(119);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 118:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 120:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 121:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 125:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(123);
      END_STATE();
    case 126:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 127:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 128:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 129:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 130:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 131:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 132:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 133:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(134)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 139:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 140:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 141:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 146:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      END_STATE();
    case 147:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(140);
      END_STATE();
    case 149:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 158:
      if (eof) ADVANCE(159);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == '.') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_file_section);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_level_number);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_level_number);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '9') ADVANCE(182);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(198);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_level_number);
      if (lookahead == '.') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__picture_9_z);
      if (lookahead == '(') ADVANCE(156);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__picture_9_z);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '9') ADVANCE(163);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(164);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '9') ADVANCE(182);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == '9') ADVANCE(183);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(179);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(157);
      if (lookahead == '9') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '9') ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '9') ADVANCE(183);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(179);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_local_storage_section);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_local_storage_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_linkage_section);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_linkage_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_report_section);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_report_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_screen_section);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_screen_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(150);
      if (lookahead == '8') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_x_string_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_x_string_token2);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_h_string_token1);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_h_string_token2);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_n_string_token1);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_n_string_token2);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_n_string_token3);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_n_string_token4);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_n_string_token5);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_n_string_token6);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_n_string_token7);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_n_string_token8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__COMMA_DELIM);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__COMMA_DELIM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__IN);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__IS);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__IS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__OF);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__PROCEDURE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__PROCEDURE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__SEMI_COLON);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__SEMI_COLON);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(225);
      if (lookahead == 'D') ADVANCE(226);
      if (lookahead == 'X') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '-') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '-') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '-') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'a') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'a') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'a') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(278);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(289);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'g') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'g') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'k') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'p') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 's') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 's') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 's') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 's') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(325);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(339);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(300);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(337);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(322);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(315);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(330);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(343);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(329);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(340);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(341);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(343);
      END_STATE();
    case 344:
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
      if (lookahead == 't') ADVANCE(1274);
      END_STATE();
    case 1014:
      if (lookahead == 'a') ADVANCE(1275);
      if (lookahead == 'l') ADVANCE(1276);
      END_STATE();
    case 1015:
      if (lookahead == 'o') ADVANCE(1277);
      END_STATE();
    case 1016:
      if (lookahead == 'n') ADVANCE(1278);
      if (lookahead == 'r') ADVANCE(1279);
      if (lookahead == 'x') ADVANCE(1280);
      END_STATE();
    case 1017:
      if (lookahead == 'u') ADVANCE(1281);
      END_STATE();
    case 1018:
      if (lookahead == 'l') ADVANCE(1282);
      END_STATE();
    case 1019:
      if (lookahead == 'u') ADVANCE(1283);
      END_STATE();
    case 1020:
      if (lookahead == 'e') ADVANCE(1284);
      END_STATE();
    case 1021:
      if (lookahead == 'c') ADVANCE(1285);
      END_STATE();
    case 1022:
      if (lookahead == 'e') ADVANCE(1286);
      END_STATE();
    case 1023:
      if (lookahead == 'i') ADVANCE(1287);
      if (lookahead == 'y') ADVANCE(1288);
      END_STATE();
    case 1024:
      if (lookahead == 's') ADVANCE(1289);
      END_STATE();
    case 1025:
      if (lookahead == 'a') ADVANCE(1290);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__ACCEPT);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym__ACCESS);
      END_STATE();
    case 1028:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1291);
      END_STATE();
    case 1029:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1292);
      END_STATE();
    case 1030:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1293);
      END_STATE();
    case 1031:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1294);
      END_STATE();
    case 1032:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1295);
      END_STATE();
    case 1033:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1296);
      END_STATE();
    case 1034:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1297);
      END_STATE();
    case 1035:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1298);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym__ASSIGN);
      END_STATE();
    case 1037:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1299);
      END_STATE();
    case 1038:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1300);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__BEFORE);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym__BINARY);
      if (lookahead == '-') ADVANCE(1301);
      END_STATE();
    case 1041:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1302);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1303);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym__BOTTOM);
      END_STATE();
    case 1043:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1304);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__CANCEL);
      END_STATE();
    case 1045:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1305);
      END_STATE();
    case 1046:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1306);
      END_STATE();
    case 1047:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1307);
      END_STATE();
    case 1048:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1308);
      END_STATE();
    case 1049:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1309);
      END_STATE();
    case 1050:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1310);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym__COLUMN);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1311);
      END_STATE();
    case 1052:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1312);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym__COMMIT);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1313);
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
          lookahead == 'e') ADVANCE(1314);
      END_STATE();
    case 1062:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1315);
      END_STATE();
    case 1063:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1316);
      END_STATE();
    case 1064:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1317);
      END_STATE();
    case 1065:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1318);
      END_STATE();
    case 1066:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1319);
      END_STATE();
    case 1067:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1320);
      END_STATE();
    case 1068:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1321);
      END_STATE();
    case 1069:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1322);
      END_STATE();
    case 1070:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1323);
      END_STATE();
    case 1071:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1324);
      END_STATE();
    case 1072:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1325);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1326);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym__CURSOR);
      END_STATE();
    case 1074:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1327);
      END_STATE();
    case 1075:
      if (lookahead == '-') ADVANCE(1328);
      END_STATE();
    case 1076:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1329);
      END_STATE();
    case 1077:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1330);
      END_STATE();
    case 1078:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1331);
      END_STATE();
    case 1079:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1332);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym__DELETE);
      END_STATE();
    case 1081:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1333);
      END_STATE();
    case 1082:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1334);
      END_STATE();
    case 1083:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1335);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym__DETAIL);
      END_STATE();
    case 1085:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1336);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym__DIVIDE);
      END_STATE();
    case 1087:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1337);
      END_STATE();
    case 1088:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1338);
      END_STATE();
    case 1089:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1339);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym__EBCDIC);
      END_STATE();
    case 1091:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1340);
      END_STATE();
    case 1092:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1341);
      END_STATE();
    case 1093:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1342);
      END_STATE();
    case 1094:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1343);
      END_STATE();
    case 1095:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1344);
      END_STATE();
    case 1096:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1345);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1346);
      END_STATE();
    case 1097:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1347);
      END_STATE();
    case 1098:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1348);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__END_IF);
      END_STATE();
    case 1100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1349);
      END_STATE();
    case 1101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1350);
      END_STATE();
    case 1102:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1351);
      END_STATE();
    case 1103:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1352);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1353);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1354);
      END_STATE();
    case 1104:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1355);
      END_STATE();
    case 1105:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1356);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1357);
      END_STATE();
    case 1106:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1358);
      END_STATE();
    case 1107:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1359);
      END_STATE();
    case 1108:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1360);
      END_STATE();
    case 1109:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1361);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym__EQUALS);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym__ESCAPE);
      END_STATE();
    case 1112:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1362);
      END_STATE();
    case 1113:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1363);
      END_STATE();
    case 1114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1364);
      END_STATE();
    case 1115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1365);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym__EXTEND);
      END_STATE();
    case 1117:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1366);
      END_STATE();
    case 1118:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1367);
      END_STATE();
    case 1119:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1368);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__FILLER);
      END_STATE();
    case 1121:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1369);
      END_STATE();
    case 1122:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1370);
      END_STATE();
    case 1123:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1371);
      END_STATE();
    case 1124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1372);
      END_STATE();
    case 1125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1373);
      END_STATE();
    case 1126:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1374);
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
          lookahead == 'r') ADVANCE(1375);
      END_STATE();
    case 1131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1376);
      END_STATE();
    case 1132:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1377);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym__IGNORE);
      END_STATE();
    case 1134:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1378);
      END_STATE();
    case 1135:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1379);
      END_STATE();
    case 1136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1380);
      END_STATE();
    case 1137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1381);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1382);
      END_STATE();
    case 1138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1383);
      END_STATE();
    case 1139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1384);
      END_STATE();
    case 1140:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1385);
      END_STATE();
    case 1141:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1386);
      END_STATE();
    case 1142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1387);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym__MANUAL);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym__MEMORY);
      END_STATE();
    case 1145:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1388);
      END_STATE();
    case 1146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1389);
      END_STATE();
    case 1147:
      if (lookahead == '-') ADVANCE(1390);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym__OCCURS);
      END_STATE();
    case 1149:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1391);
      END_STATE();
    case 1150:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1392);
      END_STATE();
    case 1151:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1393);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__OUTPUT);
      END_STATE();
    case 1153:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1394);
      END_STATE();
    case 1154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1395);
      END_STATE();
    case 1155:
      if (lookahead == '-') ADVANCE(1396);
      END_STATE();
    case 1156:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1397);
      END_STATE();
    case 1157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1398);
      END_STATE();
    case 1158:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1399);
      END_STATE();
    case 1159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1400);
      END_STATE();
    case 1160:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1401);
      END_STATE();
    case 1161:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1402);
      END_STATE();
    case 1162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1403);
      END_STATE();
    case 1163:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1404);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1405);
      END_STATE();
    case 1164:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1406);
      END_STATE();
    case 1165:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1407);
      END_STATE();
    case 1166:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1408);
      END_STATE();
    case 1167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1409);
      END_STATE();
    case 1168:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1410);
      END_STATE();
    case 1169:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1411);
      END_STATE();
    case 1170:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1412);
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
          lookahead == 'i') ADVANCE(1413);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1414);
      END_STATE();
    case 1174:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1415);
      END_STATE();
    case 1175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1416);
      END_STATE();
    case 1176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1417);
      END_STATE();
    case 1177:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1418);
      END_STATE();
    case 1178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1419);
      END_STATE();
    case 1179:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1420);
      END_STATE();
    case 1180:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1421);
      END_STATE();
    case 1181:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1422);
      END_STATE();
    case 1182:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1423);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(sym__REPORT);
      if (lookahead == '-') ADVANCE(1424);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1425);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1426);
      END_STATE();
    case 1184:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1427);
      END_STATE();
    case 1185:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1428);
      END_STATE();
    case 1186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1429);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__RETURN);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1430);
      END_STATE();
    case 1188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1431);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(sym__REWIND);
      END_STATE();
    case 1190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1432);
      END_STATE();
    case 1191:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1433);
      END_STATE();
    case 1192:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1434);
      END_STATE();
    case 1193:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1435);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(sym__UNLOCK);
      END_STATE();
    case 1195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1436);
      END_STATE();
    case 1196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1437);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(sym__UPDATE);
      END_STATE();
    case 1198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1438);
      END_STATE();
    case 1199:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1439);
      END_STATE();
    case 1200:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1440);
      END_STATE();
    case 1201:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1441);
      END_STATE();
    case 1202:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1442);
      END_STATE();
    case 1203:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1443);
      END_STATE();
    case 1204:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1444);
      END_STATE();
    case 1205:
      if (lookahead == 'L') ADVANCE(1445);
      END_STATE();
    case 1206:
      if (lookahead == 'l') ADVANCE(1446);
      END_STATE();
    case 1207:
      if (lookahead == 'l') ADVANCE(1447);
      END_STATE();
    case 1208:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1448);
      END_STATE();
    case 1209:
      if (lookahead == 'L') ADVANCE(1449);
      END_STATE();
    case 1210:
      if (lookahead == 'l') ADVANCE(1450);
      END_STATE();
    case 1211:
      if (lookahead == 'l') ADVANCE(1451);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(sym__HEADING);
      END_STATE();
    case 1213:
      if (lookahead == 'U') ADVANCE(1452);
      END_STATE();
    case 1214:
      if (lookahead == 'u') ADVANCE(1453);
      END_STATE();
    case 1215:
      if (lookahead == 'u') ADVANCE(1454);
      END_STATE();
    case 1216:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1455);
      END_STATE();
    case 1217:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1456);
      END_STATE();
    case 1218:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1457);
      END_STATE();
    case 1219:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1458);
      END_STATE();
    case 1220:
      if (lookahead == 'U') ADVANCE(1459);
      END_STATE();
    case 1221:
      if (lookahead == 'u') ADVANCE(1460);
      END_STATE();
    case 1222:
      if (lookahead == 'u') ADVANCE(1461);
      END_STATE();
    case 1223:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1462);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(sym__LEADING);
      END_STATE();
    case 1225:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1463);
      END_STATE();
    case 1226:
      if (lookahead == '-') ADVANCE(1464);
      END_STATE();
    case 1227:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1465);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(sym__LINKAGE);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(sym__NUMBERS);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(sym__NUMERIC);
      if (lookahead == '-') ADVANCE(1466);
      END_STATE();
    case 1231:
      if (lookahead == '-') ADVANCE(1467);
      END_STATE();
    case 1232:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1468);
      END_STATE();
    case 1233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1469);
      END_STATE();
    case 1234:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1470);
      END_STATE();
    case 1235:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1471);
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
          lookahead == 'e') ADVANCE(1472);
      END_STATE();
    case 1240:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1473);
      END_STATE();
    case 1241:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1474);
      END_STATE();
    case 1242:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1475);
      END_STATE();
    case 1243:
      if (lookahead == '-') ADVANCE(1476);
      END_STATE();
    case 1244:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1477);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym__SECTION);
      END_STATE();
    case 1246:
      if (lookahead == '-') ADVANCE(1478);
      END_STATE();
    case 1247:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1479);
      END_STATE();
    case 1248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1480);
      END_STATE();
    case 1249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1481);
      END_STATE();
    case 1250:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1482);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(sym__SHARING);
      END_STATE();
    case 1252:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1483);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1484);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1485);
      END_STATE();
    case 1253:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1486);
      END_STATE();
    case 1254:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1487);
      END_STATE();
    case 1255:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1488);
      END_STATE();
    case 1256:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1489);
      END_STATE();
    case 1257:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1490);
      END_STATE();
    case 1258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1491);
      END_STATE();
    case 1259:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1492);
      END_STATE();
    case 1260:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1493);
      END_STATE();
    case 1261:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1494);
      END_STATE();
    case 1262:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1495);
      END_STATE();
    case 1263:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1496);
      END_STATE();
    case 1264:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1497);
      END_STATE();
    case 1265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1498);
      END_STATE();
    case 1266:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1499);
      END_STATE();
    case 1267:
      if (lookahead == 'L') ADVANCE(1500);
      END_STATE();
    case 1268:
      if (lookahead == 'l') ADVANCE(1501);
      END_STATE();
    case 1269:
      if (lookahead == 'l') ADVANCE(1502);
      END_STATE();
    case 1270:
      if (lookahead == 'U') ADVANCE(1503);
      END_STATE();
    case 1271:
      if (lookahead == 'u') ADVANCE(1504);
      END_STATE();
    case 1272:
      if (lookahead == 'u') ADVANCE(1505);
      END_STATE();
    case 1273:
      if (lookahead == 'y') ADVANCE(1506);
      END_STATE();
    case 1274:
      if (lookahead == '_') ADVANCE(1507);
      END_STATE();
    case 1275:
      if (lookahead == 's') ADVANCE(1508);
      END_STATE();
    case 1276:
      if (lookahead == 'a') ADVANCE(1509);
      END_STATE();
    case 1277:
      if (lookahead == 'n') ADVANCE(1510);
      END_STATE();
    case 1278:
      if (lookahead == 'd') ADVANCE(1511);
      if (lookahead == 'v') ADVANCE(1512);
      END_STATE();
    case 1279:
      if (lookahead == 'r') ADVANCE(1513);
      END_STATE();
    case 1280:
      if (lookahead == 't') ADVANCE(1514);
      END_STATE();
    case 1281:
      if (lookahead == 'n') ADVANCE(1515);
      END_STATE();
    case 1282:
      if (lookahead == 'o') ADVANCE(1516);
      END_STATE();
    case 1283:
      if (lookahead == 's') ADVANCE(1517);
      END_STATE();
    case 1284:
      if (lookahead == 's') ADVANCE(1518);
      END_STATE();
    case 1285:
      if (lookahead == 'c') ADVANCE(1519);
      END_STATE();
    case 1286:
      if (lookahead == 'n') ADVANCE(1520);
      END_STATE();
    case 1287:
      if (lookahead == 'g') ADVANCE(1521);
      END_STATE();
    case 1288:
      if (lookahead == 'n') ADVANCE(1522);
      END_STATE();
    case 1289:
      if (lookahead == 'a') ADVANCE(1523);
      END_STATE();
    case 1290:
      if (lookahead == 'l') ADVANCE(1524);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym__ADDRESS);
      END_STATE();
    case 1292:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1525);
      END_STATE();
    case 1293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1526);
      END_STATE();
    case 1294:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1527);
      END_STATE();
    case 1295:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1528);
      END_STATE();
    case 1296:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1529);
      END_STATE();
    case 1297:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1530);
      END_STATE();
    case 1298:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1531);
      END_STATE();
    case 1299:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1532);
      END_STATE();
    case 1300:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1533);
      END_STATE();
    case 1301:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1534);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1535);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1536);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1537);
      END_STATE();
    case 1302:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1538);
      END_STATE();
    case 1303:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1539);
      END_STATE();
    case 1304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1540);
      END_STATE();
    case 1305:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1541);
      END_STATE();
    case 1306:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1542);
      END_STATE();
    case 1307:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1543);
      END_STATE();
    case 1308:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1544);
      END_STATE();
    case 1309:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1545);
      END_STATE();
    case 1310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1546);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(sym__COLUMNS);
      END_STATE();
    case 1312:
      if (lookahead == '-') ADVANCE(1547);
      END_STATE();
    case 1313:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1548);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym__COMPUTE);
      END_STATE();
    case 1315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1549);
      END_STATE();
    case 1316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1550);
      END_STATE();
    case 1317:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1551);
      END_STATE();
    case 1318:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1552);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(sym__CONTENT);
      END_STATE();
    case 1320:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1553);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym__CONTROL);
      if (lookahead == '-') ADVANCE(1554);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1555);
      END_STATE();
    case 1322:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1556);
      END_STATE();
    case 1323:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1557);
      END_STATE();
    case 1324:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1558);
      END_STATE();
    case 1325:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1559);
      END_STATE();
    case 1326:
      if (lookahead == '-') ADVANCE(1560);
      END_STATE();
    case 1327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1561);
      END_STATE();
    case 1328:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1562);
      END_STATE();
    case 1329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1563);
      END_STATE();
    case 1330:
      if (lookahead == '-') ADVANCE(1564);
      END_STATE();
    case 1331:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1565);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym__DEFAULT);
      END_STATE();
    case 1333:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1566);
      END_STATE();
    case 1334:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1567);
      END_STATE();
    case 1335:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1568);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(sym__DISPLAY);
      END_STATE();
    case 1337:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1569);
      END_STATE();
    case 1338:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1570);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(sym__DYNAMIC);
      END_STATE();
    case 1340:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1571);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(sym__END_ADD);
      END_STATE();
    case 1342:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1572);
      END_STATE();
    case 1343:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1573);
      END_STATE();
    case 1344:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1574);
      END_STATE();
    case 1345:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1575);
      END_STATE();
    case 1346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1576);
      END_STATE();
    case 1347:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1577);
      END_STATE();
    case 1348:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1578);
      END_STATE();
    case 1349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1579);
      END_STATE();
    case 1350:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1580);
      END_STATE();
    case 1351:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1581);
      END_STATE();
    case 1352:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1582);
      END_STATE();
    case 1353:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1583);
      END_STATE();
    case 1354:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1584);
      END_STATE();
    case 1355:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1585);
      END_STATE();
    case 1356:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1586);
      END_STATE();
    case 1357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1587);
      END_STATE();
    case 1358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1588);
      END_STATE();
    case 1359:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1589);
      END_STATE();
    case 1360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1590);
      END_STATE();
    case 1361:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1591);
      END_STATE();
    case 1362:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1592);
      END_STATE();
    case 1363:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1593);
      END_STATE();
    case 1364:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1594);
      END_STATE();
    case 1365:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1595);
      END_STATE();
    case 1366:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1596);
      END_STATE();
    case 1367:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1597);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym__FILE_ID);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(sym__FOOTING);
      END_STATE();
    case 1370:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1598);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym__FOREVER);
      END_STATE();
    case 1372:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1599);
      END_STATE();
    case 1373:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1600);
      END_STATE();
    case 1374:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1601);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(sym__GREATER);
      END_STATE();
    case 1376:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1602);
      END_STATE();
    case 1377:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1603);
      END_STATE();
    case 1378:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1604);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym__INDEXED);
      END_STATE();
    case 1380:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1605);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(sym__TOK_INITIAL);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1606);
      END_STATE();
    case 1382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1607);
      END_STATE();
    case 1383:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1608);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(sym__INSPECT);
      END_STATE();
    case 1385:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1609);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym__INVALID);
      if (lookahead == '-') ADVANCE(1610);
      END_STATE();
    case 1387:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1611);
      END_STATE();
    case 1388:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1612);
      END_STATE();
    case 1389:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1613);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1614);
      END_STATE();
    case 1390:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1615);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(sym__OMITTED);
      END_STATE();
    case 1392:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1616);
      END_STATE();
    case 1393:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1617);
      END_STATE();
    case 1394:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1618);
      END_STATE();
    case 1395:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1619);
      END_STATE();
    case 1396:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1620);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym__PADDING);
      END_STATE();
    case 1398:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1621);
      END_STATE();
    case 1399:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1622);
      END_STATE();
    case 1400:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1623);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym__PERFORM);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym__PICTURE);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(sym__POINTER);
      END_STATE();
    case 1404:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1624);
      END_STATE();
    case 1405:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1625);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(sym__PRESENT);
      END_STATE();
    case 1407:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1626);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym__PRINTER);
      END_STATE();
    case 1409:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1627);
      END_STATE();
    case 1410:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1628);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(sym__PROCEED);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym__PROGRAM);
      if (lookahead == '-') ADVANCE(1629);
      END_STATE();
    case 1413:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1630);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym__RECORDS);
      END_STATE();
    case 1415:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1631);
      END_STATE();
    case 1416:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1632);
      END_STATE();
    case 1417:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1633);
      END_STATE();
    case 1418:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1634);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym__RELEASE);
      END_STATE();
    case 1420:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1635);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(sym__REMOVAL);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym__RENAMES);
      END_STATE();
    case 1423:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1636);
      END_STATE();
    case 1424:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1637);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1638);
      END_STATE();
    case 1425:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1639);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym__REPORTS);
      END_STATE();
    case 1427:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1640);
      END_STATE();
    case 1428:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1641);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(sym__RESERVE);
      END_STATE();
    case 1430:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1642);
      END_STATE();
    case 1431:
      if (lookahead == '-') ADVANCE(1643);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym__REWRITE);
      END_STATE();
    case 1433:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1644);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym__ROUNDED);
      END_STATE();
    case 1435:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1645);
      END_STATE();
    case 1436:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1646);
      END_STATE();
    case 1437:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1647);
      END_STATE();
    case 1438:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1648);
      END_STATE();
    case 1439:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1649);
      END_STATE();
    case 1440:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1650);
      END_STATE();
    case 1441:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1651);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(sym__VARYING);
      END_STATE();
    case 1443:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1652);
      END_STATE();
    case 1444:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1653);
      END_STATE();
    case 1445:
      if (lookahead == 'U') ADVANCE(1654);
      END_STATE();
    case 1446:
      if (lookahead == 'u') ADVANCE(1655);
      END_STATE();
    case 1447:
      if (lookahead == 'u') ADVANCE(1656);
      END_STATE();
    case 1448:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1657);
      END_STATE();
    case 1449:
      if (lookahead == 'U') ADVANCE(1658);
      END_STATE();
    case 1450:
      if (lookahead == 'u') ADVANCE(1659);
      END_STATE();
    case 1451:
      if (lookahead == 'u') ADVANCE(1660);
      END_STATE();
    case 1452:
      if (lookahead == 'E') ADVANCE(1661);
      END_STATE();
    case 1453:
      if (lookahead == 'e') ADVANCE(1662);
      END_STATE();
    case 1454:
      if (lookahead == 'e') ADVANCE(1663);
      END_STATE();
    case 1455:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1664);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(sym__LOWLIGHT);
      END_STATE();
    case 1457:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1665);
      END_STATE();
    case 1458:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1666);
      END_STATE();
    case 1459:
      if (lookahead == 'E') ADVANCE(1667);
      END_STATE();
    case 1460:
      if (lookahead == 'e') ADVANCE(1668);
      END_STATE();
    case 1461:
      if (lookahead == 'e') ADVANCE(1669);
      END_STATE();
    case 1462:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1670);
      END_STATE();
    case 1463:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1671);
      END_STATE();
    case 1464:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1672);
      END_STATE();
    case 1465:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1673);
      END_STATE();
    case 1466:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1674);
      END_STATE();
    case 1467:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1675);
      END_STATE();
    case 1468:
      ACCEPT_TOKEN(sym__NATIONAL);
      if (lookahead == '-') ADVANCE(1676);
      END_STATE();
    case 1469:
      ACCEPT_TOKEN(sym__NEGATIVE);
      END_STATE();
    case 1470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1677);
      END_STATE();
    case 1471:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1678);
      END_STATE();
    case 1472:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1679);
      END_STATE();
    case 1473:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1680);
      END_STATE();
    case 1474:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1681);
      END_STATE();
    case 1475:
      if (lookahead == '-') ADVANCE(1682);
      END_STATE();
    case 1476:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1683);
      END_STATE();
    case 1477:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1684);
      END_STATE();
    case 1478:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1685);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym__SENTENCE);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym__SEPARATE);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym__SEQUENCE);
      END_STATE();
    case 1482:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1686);
      END_STATE();
    case 1483:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1687);
      END_STATE();
    case 1484:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1688);
      END_STATE();
    case 1485:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1689);
      END_STATE();
    case 1486:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1690);
      END_STATE();
    case 1487:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1691);
      END_STATE();
    case 1488:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1692);
      END_STATE();
    case 1489:
      ACCEPT_TOKEN(sym__STANDARD);
      if (lookahead == '-') ADVANCE(1693);
      END_STATE();
    case 1490:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1694);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym__SUBTRACT);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym__SUPPRESS);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym__SYMBOLIC);
      END_STATE();
    case 1494:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1695);
      END_STATE();
    case 1495:
      ACCEPT_TOKEN(sym__TALLYING);
      END_STATE();
    case 1496:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1696);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym__TRAILING);
      END_STATE();
    case 1498:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1697);
      END_STATE();
    case 1499:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1698);
      END_STATE();
    case 1500:
      if (lookahead == 'U') ADVANCE(1699);
      END_STATE();
    case 1501:
      if (lookahead == 'u') ADVANCE(1700);
      END_STATE();
    case 1502:
      if (lookahead == 'u') ADVANCE(1701);
      END_STATE();
    case 1503:
      if (lookahead == 'E') ADVANCE(1702);
      END_STATE();
    case 1504:
      if (lookahead == 'e') ADVANCE(1703);
      END_STATE();
    case 1505:
      if (lookahead == 'e') ADVANCE(1704);
      END_STATE();
    case 1506:
      if (lookahead == '_') ADVANCE(1705);
      END_STATE();
    case 1507:
      if (lookahead == 'l') ADVANCE(1706);
      END_STATE();
    case 1508:
      if (lookahead == 'e') ADVANCE(1707);
      END_STATE();
    case 1509:
      if (lookahead == 'n') ADVANCE(1708);
      END_STATE();
    case 1510:
      if (lookahead == 's') ADVANCE(1709);
      END_STATE();
    case 1511:
      if (lookahead == '_') ADVANCE(1710);
      END_STATE();
    case 1512:
      if (lookahead == 'i') ADVANCE(1711);
      END_STATE();
    case 1513:
      if (lookahead == 'o') ADVANCE(1712);
      END_STATE();
    case 1514:
      if (lookahead == 'e') ADVANCE(1713);
      END_STATE();
    case 1515:
      if (lookahead == 'c') ADVANCE(1714);
      END_STATE();
    case 1516:
      if (lookahead == 'b') ADVANCE(1715);
      END_STATE();
    case 1517:
      if (lookahead == 't') ADVANCE(1716);
      END_STATE();
    case 1518:
      if (lookahead == 't') ADVANCE(1717);
      END_STATE();
    case 1519:
      if (lookahead == 'u') ADVANCE(1718);
      END_STATE();
    case 1520:
      if (lookahead == 'a') ADVANCE(1719);
      END_STATE();
    case 1521:
      if (lookahead == 'n') ADVANCE(1720);
      END_STATE();
    case 1522:
      if (lookahead == 'c') ADVANCE(1721);
      END_STATE();
    case 1523:
      if (lookahead == 'g') ADVANCE(1722);
      END_STATE();
    case 1524:
      if (lookahead == 'u') ADVANCE(1723);
      END_STATE();
    case 1525:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1724);
      END_STATE();
    case 1526:
      ACCEPT_TOKEN(sym__ALLOCATE);
      END_STATE();
    case 1527:
      ACCEPT_TOKEN(sym__ALPHABET);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1725);
      END_STATE();
    case 1528:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1726);
      END_STATE();
    case 1529:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1727);
      END_STATE();
    case 1530:
      if (lookahead == '-') ADVANCE(1728);
      END_STATE();
    case 1531:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1729);
      END_STATE();
    case 1532:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1730);
      END_STATE();
    case 1533:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1731);
      END_STATE();
    case 1534:
      if (lookahead == '-') ADVANCE(1732);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1733);
      END_STATE();
    case 1535:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1734);
      END_STATE();
    case 1536:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1735);
      END_STATE();
    case 1537:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1736);
      END_STATE();
    case 1538:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1737);
      END_STATE();
    case 1539:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1738);
      END_STATE();
    case 1540:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1739);
      END_STATE();
    case 1541:
      ACCEPT_TOKEN(sym__CHAINING);
      END_STATE();
    case 1542:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1740);
      END_STATE();
    case 1543:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1741);
      END_STATE();
    case 1544:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1742);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym__CODE_SET);
      END_STATE();
    case 1546:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1743);
      END_STATE();
    case 1547:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1744);
      END_STATE();
    case 1548:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1745);
      END_STATE();
    case 1549:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1746);
      END_STATE();
    case 1550:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1747);
      END_STATE();
    case 1551:
      ACCEPT_TOKEN(sym__CONSTANT);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym__CONTAINS);
      END_STATE();
    case 1553:
      ACCEPT_TOKEN(sym__CONTINUE);
      END_STATE();
    case 1554:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1748);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1749);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym__CONTROLS);
      END_STATE();
    case 1556:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1750);
      END_STATE();
    case 1557:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1751);
      END_STATE();
    case 1558:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1752);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym__CURRENCY);
      END_STATE();
    case 1560:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1753);
      END_STATE();
    case 1561:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1754);
      END_STATE();
    case 1562:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1755);
      END_STATE();
    case 1563:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1756);
      END_STATE();
    case 1564:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1757);
      END_STATE();
    case 1565:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1758);
      END_STATE();
    case 1566:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1759);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1760);
      END_STATE();
    case 1567:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1761);
      END_STATE();
    case 1568:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1762);
      END_STATE();
    case 1569:
      ACCEPT_TOKEN(sym__DIVISION);
      END_STATE();
    case 1570:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1763);
      END_STATE();
    case 1571:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1764);
      END_STATE();
    case 1572:
      ACCEPT_TOKEN(sym__END_CALL);
      END_STATE();
    case 1573:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1765);
      END_STATE();
    case 1574:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1766);
      END_STATE();
    case 1575:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1767);
      END_STATE();
    case 1576:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1768);
      END_STATE();
    case 1577:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1769);
      END_STATE();
    case 1578:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1770);
      END_STATE();
    case 1579:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1771);
      END_STATE();
    case 1580:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1772);
      END_STATE();
    case 1581:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1773);
      END_STATE();
    case 1582:
      ACCEPT_TOKEN(sym__END_READ);
      END_STATE();
    case 1583:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1774);
      END_STATE();
    case 1584:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1775);
      END_STATE();
    case 1585:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1776);
      END_STATE();
    case 1586:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1777);
      END_STATE();
    case 1587:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1778);
      END_STATE();
    case 1588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1779);
      END_STATE();
    case 1589:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1780);
      END_STATE();
    case 1590:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1781);
      END_STATE();
    case 1591:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1782);
      END_STATE();
    case 1592:
      ACCEPT_TOKEN(sym__EVALUATE);
      END_STATE();
    case 1593:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1783);
      END_STATE();
    case 1594:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1784);
      END_STATE();
    case 1595:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1785);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(sym__EXTERNAL);
      END_STATE();
    case 1597:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1786);
      END_STATE();
    case 1598:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1787);
      END_STATE();
    case 1599:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1788);
      END_STATE();
    case 1600:
      ACCEPT_TOKEN(sym__FUNCTION);
      if (lookahead == '-') ADVANCE(1789);
      END_STATE();
    case 1601:
      ACCEPT_TOKEN(sym__GENERATE);
      END_STATE();
    case 1602:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1790);
      END_STATE();
    case 1603:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1791);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(sym__IGNORING);
      END_STATE();
    case 1605:
      ACCEPT_TOKEN(sym__INDICATE);
      END_STATE();
    case 1606:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1792);
      END_STATE();
    case 1607:
      ACCEPT_TOKEN(sym__INITIATE);
      END_STATE();
    case 1608:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1793);
      END_STATE();
    case 1609:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1794);
      END_STATE();
    case 1610:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1795);
      END_STATE();
    case 1611:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1796);
      END_STATE();
    case 1612:
      if (lookahead == '-') ADVANCE(1797);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(sym__MULTIPLE);
      END_STATE();
    case 1614:
      ACCEPT_TOKEN(sym__MULTIPLY);
      END_STATE();
    case 1615:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1798);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(sym__OPTIONAL);
      END_STATE();
    case 1617:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1799);
      END_STATE();
    case 1618:
      ACCEPT_TOKEN(sym__OVERFLOW);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(sym__OVERLINE);
      END_STATE();
    case 1620:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1800);
      END_STATE();
    case 1621:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1801);
      END_STATE();
    case 1622:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1802);
      END_STATE();
    case 1623:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1803);
      END_STATE();
    case 1624:
      ACCEPT_TOKEN(sym__POSITION);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(sym__POSITIVE);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(sym__PREVIOUS);
      END_STATE();
    case 1627:
      ACCEPT_TOKEN(sym__PRINTING);
      END_STATE();
    case 1628:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1804);
      END_STATE();
    case 1629:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1805);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1806);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1807);
      END_STATE();
    case 1630:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1808);
      END_STATE();
    case 1631:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1809);
      END_STATE();
    case 1632:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1810);
      END_STATE();
    case 1633:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1811);
      END_STATE();
    case 1634:
      ACCEPT_TOKEN(sym__RELATIVE);
      END_STATE();
    case 1635:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1812);
      END_STATE();
    case 1636:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1813);
      END_STATE();
    case 1637:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1814);
      END_STATE();
    case 1638:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1815);
      END_STATE();
    case 1639:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1816);
      END_STATE();
    case 1640:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1817);
      END_STATE();
    case 1641:
      ACCEPT_TOKEN(sym__REQUIRED);
      END_STATE();
    case 1642:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1818);
      END_STATE();
    case 1643:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1819);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1820);
      END_STATE();
    case 1644:
      ACCEPT_TOKEN(sym__ROLLBACK);
      END_STATE();
    case 1645:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1821);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(sym__UNSIGNED);
      if (lookahead == '-') ADVANCE(1822);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(sym__UNSTRING);
      END_STATE();
    case 1648:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1823);
      END_STATE();
    case 1649:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1824);
      END_STATE();
    case 1650:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1825);
      END_STATE();
    case 1651:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1826);
      END_STATE();
    case 1652:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1827);
      END_STATE();
    case 1653:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1828);
      END_STATE();
    case 1654:
      if (lookahead == 'E') ADVANCE(1829);
      END_STATE();
    case 1655:
      if (lookahead == 'e') ADVANCE(1830);
      END_STATE();
    case 1656:
      if (lookahead == 'e') ADVANCE(1831);
      END_STATE();
    case 1657:
      ACCEPT_TOKEN(sym__HIGHLIGHT);
      END_STATE();
    case 1658:
      if (lookahead == 'E') ADVANCE(1832);
      END_STATE();
    case 1659:
      if (lookahead == 'e') ADVANCE(1833);
      END_STATE();
    case 1660:
      if (lookahead == 'e') ADVANCE(1834);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(anon_sym_LOW_DASHVALUE);
      END_STATE();
    case 1662:
      ACCEPT_TOKEN(anon_sym_LOW_DASHValue);
      END_STATE();
    case 1663:
      ACCEPT_TOKEN(anon_sym_LOW_DASHvalue);
      END_STATE();
    case 1664:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1835);
      END_STATE();
    case 1665:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1836);
      END_STATE();
    case 1666:
      if (lookahead == '-') ADVANCE(1837);
      END_STATE();
    case 1667:
      ACCEPT_TOKEN(anon_sym_Low_DASHVALUE);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(anon_sym_Low_DASHValue);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(anon_sym_Low_DASHvalue);
      END_STATE();
    case 1670:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1838);
      END_STATE();
    case 1671:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1839);
      END_STATE();
    case 1672:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1840);
      END_STATE();
    case 1673:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1841);
      END_STATE();
    case 1674:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1842);
      END_STATE();
    case 1675:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1843);
      END_STATE();
    case 1676:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1844);
      END_STATE();
    case 1677:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1845);
      END_STATE();
    case 1678:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1846);
      END_STATE();
    case 1679:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1847);
      END_STATE();
    case 1680:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1848);
      END_STATE();
    case 1681:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1849);
      END_STATE();
    case 1682:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1850);
      END_STATE();
    case 1683:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1851);
      END_STATE();
    case 1684:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1852);
      END_STATE();
    case 1685:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1853);
      END_STATE();
    case 1686:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1854);
      END_STATE();
    case 1687:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1855);
      END_STATE();
    case 1688:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1856);
      END_STATE();
    case 1689:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1857);
      END_STATE();
    case 1690:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1858);
      END_STATE();
    case 1691:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1859);
      END_STATE();
    case 1692:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1860);
      END_STATE();
    case 1693:
      if (lookahead == '1') ADVANCE(1861);
      if (lookahead == '2') ADVANCE(1862);
      END_STATE();
    case 1694:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1863);
      END_STATE();
    case 1695:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1864);
      END_STATE();
    case 1696:
      ACCEPT_TOKEN(sym__TERMINATE);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(sym__TRANSFORM);
      END_STATE();
    case 1698:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1865);
      END_STATE();
    case 1699:
      if (lookahead == 'E') ADVANCE(1866);
      END_STATE();
    case 1700:
      if (lookahead == 'e') ADVANCE(1867);
      END_STATE();
    case 1701:
      if (lookahead == 'e') ADVANCE(1868);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(anon_sym_low_DASHVALUE);
      END_STATE();
    case 1703:
      ACCEPT_TOKEN(anon_sym_low_DASHValue);
      END_STATE();
    case 1704:
      ACCEPT_TOKEN(anon_sym_low_DASHvalue);
      END_STATE();
    case 1705:
      if (lookahead == 'l') ADVANCE(1869);
      END_STATE();
    case 1706:
      if (lookahead == 'i') ADVANCE(1870);
      END_STATE();
    case 1707:
      if (lookahead == 'd') ADVANCE(1871);
      END_STATE();
    case 1708:
      if (lookahead == 'k') ADVANCE(1872);
      END_STATE();
    case 1709:
      if (lookahead == 't') ADVANCE(1873);
      END_STATE();
    case 1710:
      if (lookahead == 'p') ADVANCE(1874);
      END_STATE();
    case 1711:
      if (lookahead == 'r') ADVANCE(1875);
      END_STATE();
    case 1712:
      if (lookahead == 'r') ADVANCE(1876);
      END_STATE();
    case 1713:
      if (lookahead == 'r') ADVANCE(1877);
      END_STATE();
    case 1714:
      if (lookahead == 't') ADVANCE(1878);
      END_STATE();
    case 1715:
      if (lookahead == 'a') ADVANCE(1879);
      END_STATE();
    case 1716:
      if (lookahead == 'i') ADVANCE(1880);
      END_STATE();
    case 1717:
      if (lookahead == 'e') ADVANCE(1881);
      END_STATE();
    case 1718:
      if (lookahead == 'r') ADVANCE(1882);
      END_STATE();
    case 1719:
      if (lookahead == 'm') ADVANCE(1883);
      END_STATE();
    case 1720:
      if (lookahead == '_') ADVANCE(1884);
      END_STATE();
    case 1721:
      if (lookahead == 'h') ADVANCE(1885);
      END_STATE();
    case 1722:
      if (lookahead == 'e') ADVANCE(1886);
      END_STATE();
    case 1723:
      if (lookahead == 'e') ADVANCE(1887);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(sym__ADVANCING);
      END_STATE();
    case 1725:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1888);
      END_STATE();
    case 1726:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1889);
      END_STATE();
    case 1727:
      ACCEPT_TOKEN(sym__ALTERNATE);
      END_STATE();
    case 1728:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1890);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1891);
      END_STATE();
    case 1729:
      ACCEPT_TOKEN(sym__ASCENDING);
      END_STATE();
    case 1730:
      ACCEPT_TOKEN(sym__AUTOMATIC);
      END_STATE();
    case 1731:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1892);
      END_STATE();
    case 1732:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1893);
      END_STATE();
    case 1733:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1894);
      END_STATE();
    case 1734:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1895);
      END_STATE();
    case 1735:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1896);
      END_STATE();
    case 1736:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1897);
      END_STATE();
    case 1737:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1898);
      END_STATE();
    case 1738:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1899);
      END_STATE();
    case 1739:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1900);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(sym__CHARACTER);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1901);
      END_STATE();
    case 1741:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1902);
      END_STATE();
    case 1742:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1903);
      END_STATE();
    case 1743:
      ACCEPT_TOKEN(sym__COLLATING);
      END_STATE();
    case 1744:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1904);
      END_STATE();
    case 1745:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1905);
      END_STATE();
    case 1746:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1906);
      END_STATE();
    case 1747:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1907);
      END_STATE();
    case 1748:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1908);
      END_STATE();
    case 1749:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1909);
      END_STATE();
    case 1750:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1910);
      END_STATE();
    case 1751:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1911);
      END_STATE();
    case 1752:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1912);
      END_STATE();
    case 1753:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1913);
      END_STATE();
    case 1754:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1914);
      END_STATE();
    case 1755:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1915);
      END_STATE();
    case 1756:
      ACCEPT_TOKEN(sym__DEBUGGING);
      END_STATE();
    case 1757:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1916);
      END_STATE();
    case 1758:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1917);
      END_STATE();
    case 1759:
      ACCEPT_TOKEN(sym__DELIMITED);
      END_STATE();
    case 1760:
      ACCEPT_TOKEN(sym__DELIMITER);
      END_STATE();
    case 1761:
      ACCEPT_TOKEN(sym__DEPENDING);
      END_STATE();
    case 1762:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1918);
      END_STATE();
    case 1763:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1919);
      END_STATE();
    case 1764:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1920);
      END_STATE();
    case 1765:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1921);
      END_STATE();
    case 1766:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1922);
      END_STATE();
    case 1767:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1923);
      END_STATE();
    case 1768:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1924);
      END_STATE();
    case 1769:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1925);
      END_STATE();
    case 1770:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1926);
      END_STATE();
    case 1771:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1927);
      END_STATE();
    case 1772:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1928);
      END_STATE();
    case 1773:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1929);
      END_STATE();
    case 1774:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1930);
      END_STATE();
    case 1775:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1931);
      END_STATE();
    case 1776:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1932);
      END_STATE();
    case 1777:
      ACCEPT_TOKEN(sym__END_START);
      END_STATE();
    case 1778:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1933);
      END_STATE();
    case 1779:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1934);
      END_STATE();
    case 1780:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1935);
      END_STATE();
    case 1781:
      ACCEPT_TOKEN(sym__END_WRITE);
      END_STATE();
    case 1782:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1936);
      END_STATE();
    case 1783:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1937);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(sym__EXCEPTION);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(sym__EXCLUSIVE);
      END_STATE();
    case 1786:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1938);
      END_STATE();
    case 1787:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1939);
      END_STATE();
    case 1788:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1940);
      END_STATE();
    case 1789:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1941);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1942);
      END_STATE();
    case 1790:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1943);
      END_STATE();
    case 1791:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1944);
      END_STATE();
    case 1792:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1945);
      END_STATE();
    case 1793:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1946);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(sym__INTRINSIC);
      END_STATE();
    case 1795:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1947);
      END_STATE();
    case 1796:
      ACCEPT_TOKEN(sym__JUSTIFIED);
      END_STATE();
    case 1797:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1948);
      END_STATE();
    case 1798:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1949);
      END_STATE();
    case 1799:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1950);
      END_STATE();
    case 1800:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1951);
      END_STATE();
    case 1801:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1952);
      END_STATE();
    case 1802:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1953);
      END_STATE();
    case 1803:
      ACCEPT_TOKEN(sym__PARAGRAPH);
      END_STATE();
    case 1804:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1954);
      END_STATE();
    case 1805:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1955);
      END_STATE();
    case 1806:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1956);
      END_STATE();
    case 1807:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1957);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(sym__RECORDING);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(sym__RECURSIVE);
      END_STATE();
    case 1810:
      ACCEPT_TOKEN(sym__REDEFINES);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(sym__REFERENCE);
      END_STATE();
    case 1812:
      ACCEPT_TOKEN(sym__REMAINDER);
      END_STATE();
    case 1813:
      ACCEPT_TOKEN(sym__REPLACING);
      END_STATE();
    case 1814:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1958);
      END_STATE();
    case 1815:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1959);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(sym__REPORTING);
      END_STATE();
    case 1817:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1960);
      END_STATE();
    case 1818:
      ACCEPT_TOKEN(sym__RETURNING);
      END_STATE();
    case 1819:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1961);
      END_STATE();
    case 1820:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1962);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(sym__UNDERLINE);
      END_STATE();
    case 1822:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1963);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1964);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1965);
      END_STATE();
    case 1823:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1966);
      END_STATE();
    case 1824:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1967);
      END_STATE();
    case 1825:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1968);
      END_STATE();
    case 1826:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1969);
      END_STATE();
    case 1827:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1970);
      END_STATE();
    case 1828:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1971);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(anon_sym_HIGH_DASHVALUE);
      END_STATE();
    case 1830:
      ACCEPT_TOKEN(anon_sym_HIGH_DASHValue);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(anon_sym_HIGH_DASHvalue);
      END_STATE();
    case 1832:
      ACCEPT_TOKEN(anon_sym_High_DASHVALUE);
      END_STATE();
    case 1833:
      ACCEPT_TOKEN(anon_sym_High_DASHValue);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(anon_sym_High_DASHvalue);
      END_STATE();
    case 1835:
      if (lookahead == '-') ADVANCE(1972);
      END_STATE();
    case 1836:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1973);
      END_STATE();
    case 1837:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1974);
      END_STATE();
    case 1838:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1975);
      END_STATE();
    case 1839:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1976);
      END_STATE();
    case 1840:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1977);
      END_STATE();
    case 1841:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1978);
      END_STATE();
    case 1842:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1979);
      END_STATE();
    case 1843:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1980);
      END_STATE();
    case 1844:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1981);
      END_STATE();
    case 1845:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1982);
      END_STATE();
    case 1846:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1983);
      END_STATE();
    case 1847:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1984);
      END_STATE();
    case 1848:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1985);
      END_STATE();
    case 1849:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1986);
      END_STATE();
    case 1850:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1987);
      END_STATE();
    case 1851:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1988);
      END_STATE();
    case 1852:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1989);
      END_STATE();
    case 1853:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1990);
      END_STATE();
    case 1854:
      ACCEPT_TOKEN(sym__SEQUENTIAL);
      END_STATE();
    case 1855:
      ACCEPT_TOKEN(sym__SIGNED_INT);
      END_STATE();
    case 1856:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1991);
      END_STATE();
    case 1857:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1992);
      END_STATE();
    case 1858:
      ACCEPT_TOKEN(sym__SIZE_ERROR);
      END_STATE();
    case 1859:
      ACCEPT_TOKEN(sym__SORT_MERGE);
      END_STATE();
    case 1860:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1993);
      END_STATE();
    case 1861:
      ACCEPT_TOKEN(sym__STANDARD_1);
      END_STATE();
    case 1862:
      ACCEPT_TOKEN(sym__STANDARD_2);
      END_STATE();
    case 1863:
      if (lookahead == '-') ADVANCE(1994);
      END_STATE();
    case 1864:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1995);
      END_STATE();
    case 1865:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1996);
      END_STATE();
    case 1866:
      ACCEPT_TOKEN(anon_sym_high_DASHVALUE);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(anon_sym_high_DASHValue);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(anon_sym_high_DASHvalue);
      END_STATE();
    case 1869:
      if (lookahead == 'e') ADVANCE(1997);
      END_STATE();
    case 1870:
      if (lookahead == 'n') ADVANCE(1998);
      END_STATE();
    case 1871:
      if (lookahead == '_') ADVANCE(1999);
      END_STATE();
    case 1872:
      if (lookahead == '_') ADVANCE(2000);
      END_STATE();
    case 1873:
      if (lookahead == 'a') ADVANCE(2001);
      END_STATE();
    case 1874:
      if (lookahead == 'r') ADVANCE(2002);
      END_STATE();
    case 1875:
      if (lookahead == 'o') ADVANCE(2003);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    case 1877:
      if (lookahead == 'n') ADVANCE(2004);
      END_STATE();
    case 1878:
      if (lookahead == 'i') ADVANCE(2005);
      END_STATE();
    case 1879:
      if (lookahead == 'l') ADVANCE(2006);
      END_STATE();
    case 1880:
      if (lookahead == 'f') ADVANCE(2007);
      END_STATE();
    case 1881:
      if (lookahead == 'd') ADVANCE(2008);
      END_STATE();
    case 1882:
      if (lookahead == 's') ADVANCE(2009);
      END_STATE();
    case 1883:
      if (lookahead == 'e') ADVANCE(2010);
      END_STATE();
    case 1884:
      if (lookahead == 'c') ADVANCE(2011);
      END_STATE();
    case 1885:
      if (lookahead == 'r') ADVANCE(2012);
      END_STATE();
    case 1886:
      if (lookahead == '_') ADVANCE(2013);
      END_STATE();
    case 1887:
      if (lookahead == '_') ADVANCE(2014);
      END_STATE();
    case 1888:
      ACCEPT_TOKEN(sym__ALPHABETIC);
      if (lookahead == '-') ADVANCE(2015);
      END_STATE();
    case 1889:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2016);
      END_STATE();
    case 1890:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2017);
      END_STATE();
    case 1891:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2018);
      END_STATE();
    case 1892:
      if (lookahead == '-') ADVANCE(2019);
      END_STATE();
    case 1893:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2020);
      END_STATE();
    case 1894:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2021);
      END_STATE();
    case 1895:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2022);
      END_STATE();
    case 1896:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2023);
      END_STATE();
    case 1897:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2024);
      END_STATE();
    case 1898:
      ACCEPT_TOKEN(sym__BLANK_LINE);
      END_STATE();
    case 1899:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2025);
      END_STATE();
    case 1900:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2026);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(sym__CHARACTERS);
      END_STATE();
    case 1902:
      ACCEPT_TOKEN(sym__CLASS_NAME);
      END_STATE();
    case 1903:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2027);
      END_STATE();
    case 1904:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2028);
      END_STATE();
    case 1905:
      if (lookahead == '-') ADVANCE(2029);
      END_STATE();
    case 1906:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2030);
      END_STATE();
    case 1907:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2031);
      END_STATE();
    case 1908:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2032);
      END_STATE();
    case 1909:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2033);
      END_STATE();
    case 1910:
      ACCEPT_TOKEN(sym__CONVERTING);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(sym__CORE_INDEX);
      END_STATE();
    case 1912:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2034);
      END_STATE();
    case 1913:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2035);
      END_STATE();
    case 1914:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2036);
      END_STATE();
    case 1915:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2037);
      END_STATE();
    case 1916:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2038);
      END_STATE();
    case 1917:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2039);
      END_STATE();
    case 1918:
      ACCEPT_TOKEN(sym__DESCENDING);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(sym__DUPLICATES);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(sym__END_ACCEPT);
      END_STATE();
    case 1921:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2040);
      END_STATE();
    case 1922:
      ACCEPT_TOKEN(sym__END_DELETE);
      END_STATE();
    case 1923:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2041);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(sym__END_DIVIDE);
      END_STATE();
    case 1925:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2042);
      END_STATE();
    case 1926:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2043);
      END_STATE();
    case 1927:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2044);
      END_STATE();
    case 1928:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2045);
      END_STATE();
    case 1929:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2046);
      END_STATE();
    case 1930:
      ACCEPT_TOKEN(sym__END_RETURN);
      END_STATE();
    case 1931:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2047);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(sym__END_SEARCH);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(sym__END_STRING);
      END_STATE();
    case 1934:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2048);
      END_STATE();
    case 1935:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2049);
      END_STATE();
    case 1936:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2050);
      END_STATE();
    case 1937:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2051);
      END_STATE();
    case 1938:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2052);
      END_STATE();
    case 1939:
      if (lookahead == '-') ADVANCE(2053);
      END_STATE();
    case 1940:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2054);
      END_STATE();
    case 1941:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2055);
      END_STATE();
    case 1942:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2056);
      END_STATE();
    case 1943:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2057);
      END_STATE();
    case 1944:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2058);
      END_STATE();
    case 1945:
      ACCEPT_TOKEN(sym__INITIALIZE);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2059);
      END_STATE();
    case 1946:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2060);
      END_STATE();
    case 1947:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2061);
      END_STATE();
    case 1948:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2062);
      END_STATE();
    case 1949:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2063);
      END_STATE();
    case 1950:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2064);
      END_STATE();
    case 1951:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2065);
      END_STATE();
    case 1952:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2066);
      END_STATE();
    case 1953:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2067);
      END_STATE();
    case 1954:
      ACCEPT_TOKEN(sym__PROCEDURES);
      END_STATE();
    case 1955:
      ACCEPT_TOKEN(sym__PROGRAM_ID);
      END_STATE();
    case 1956:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2068);
      END_STATE();
    case 1957:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2069);
      END_STATE();
    case 1958:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2070);
      END_STATE();
    case 1959:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2071);
      END_STATE();
    case 1960:
      ACCEPT_TOKEN(sym__REPOSITORY);
      END_STATE();
    case 1961:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2072);
      END_STATE();
    case 1962:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2073);
      END_STATE();
    case 1963:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2074);
      END_STATE();
    case 1964:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2075);
      END_STATE();
    case 1965:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2076);
      END_STATE();
    case 1966:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2077);
      END_STATE();
    case 1967:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2078);
      END_STATE();
    case 1968:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2079);
      END_STATE();
    case 1969:
      if (lookahead == '-') ADVANCE(2080);
      END_STATE();
    case 1970:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2081);
      END_STATE();
    case 1971:
      ACCEPT_TOKEN(sym__WHEN_OTHER);
      END_STATE();
    case 1972:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2082);
      END_STATE();
    case 1973:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2083);
      END_STATE();
    case 1974:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2084);
      END_STATE();
    case 1975:
      ACCEPT_TOKEN(sym__LAST_DETAIL);
      END_STATE();
    case 1976:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2085);
      END_STATE();
    case 1977:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2086);
      END_STATE();
    case 1978:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2087);
      END_STATE();
    case 1979:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2088);
      END_STATE();
    case 1980:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2089);
      END_STATE();
    case 1981:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2090);
      END_STATE();
    case 1982:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2091);
      END_STATE();
    case 1983:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2092);
      END_STATE();
    case 1984:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2093);
      END_STATE();
    case 1985:
      if (lookahead == '-') ADVANCE(2094);
      END_STATE();
    case 1986:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2095);
      END_STATE();
    case 1987:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2096);
      END_STATE();
    case 1988:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2097);
      END_STATE();
    case 1989:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2098);
      END_STATE();
    case 1990:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2099);
      END_STATE();
    case 1991:
      ACCEPT_TOKEN(sym__SIGNED_LONG);
      END_STATE();
    case 1992:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2100);
      END_STATE();
    case 1993:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2101);
      END_STATE();
    case 1994:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2102);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2103);
      END_STATE();
    case 1995:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2104);
      END_STATE();
    case 1996:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2105);
      END_STATE();
    case 1997:
      if (lookahead == 'n') ADVANCE(2106);
      END_STATE();
    case 1998:
      if (lookahead == 'e') ADVANCE(2107);
      END_STATE();
    case 1999:
      if (lookahead == 'c') ADVANCE(2108);
      END_STATE();
    case 2000:
      if (lookahead == 'c') ADVANCE(2109);
      END_STATE();
    case 2001:
      if (lookahead == 'n') ADVANCE(2110);
      END_STATE();
    case 2002:
      if (lookahead == 'o') ADVANCE(2111);
      END_STATE();
    case 2003:
      if (lookahead == 'n') ADVANCE(2112);
      END_STATE();
    case 2004:
      if (lookahead == 'a') ADVANCE(2113);
      END_STATE();
    case 2005:
      if (lookahead == 'o') ADVANCE(2114);
      END_STATE();
    case 2006:
      if (lookahead == '_') ADVANCE(2115);
      END_STATE();
    case 2007:
      if (lookahead == 'i') ADVANCE(2116);
      END_STATE();
    case 2008:
      if (lookahead == '_') ADVANCE(2117);
      END_STATE();
    case 2009:
      if (lookahead == '_') ADVANCE(2118);
      END_STATE();
    case 2010:
      if (lookahead == 's') ADVANCE(2119);
      END_STATE();
    case 2011:
      if (lookahead == 'l') ADVANCE(2120);
      END_STATE();
    case 2012:
      if (lookahead == 'o') ADVANCE(2121);
      END_STATE();
    case 2013:
      if (lookahead == 'c') ADVANCE(2122);
      END_STATE();
    case 2014:
      if (lookahead == 'c') ADVANCE(2123);
      END_STATE();
    case 2015:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2124);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2125);
      END_STATE();
    case 2016:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2126);
      END_STATE();
    case 2017:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2127);
      END_STATE();
    case 2018:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2128);
      END_STATE();
    case 2019:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2129);
      END_STATE();
    case 2020:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2130);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym__BINARY_CHAR);
      END_STATE();
    case 2022:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2131);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym__BINARY_LONG);
      END_STATE();
    case 2024:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2132);
      END_STATE();
    case 2025:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2133);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym__BYTE_LENGTH);
      END_STATE();
    case 2027:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2134);
      END_STATE();
    case 2028:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2135);
      END_STATE();
    case 2029:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2136);
      END_STATE();
    case 2030:
      if (lookahead == '-') ADVANCE(2137);
      END_STATE();
    case 2031:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2138);
      END_STATE();
    case 2032:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2139);
      END_STATE();
    case 2033:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2140);
      END_STATE();
    case 2034:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2141);
      END_STATE();
    case 2035:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2142);
      END_STATE();
    case 2036:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2143);
      END_STATE();
    case 2037:
      ACCEPT_TOKEN(sym__DAY_OF_WEEK);
      END_STATE();
    case 2038:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2144);
      END_STATE();
    case 2039:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2145);
      END_STATE();
    case 2040:
      ACCEPT_TOKEN(sym__END_COMPUTE);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(sym__END_DISPLAY);
      END_STATE();
    case 2042:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2146);
      END_STATE();
    case 2043:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2147);
      END_STATE();
    case 2044:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2148);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(sym__END_PERFORM);
      END_STATE();
    case 2046:
      ACCEPT_TOKEN(sym__END_PROGRAM);
      END_STATE();
    case 2047:
      ACCEPT_TOKEN(sym__END_REWRITE);
      END_STATE();
    case 2048:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2149);
      END_STATE();
    case 2049:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2150);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym__ENVIRONMENT);
      if (lookahead == '-') ADVANCE(2151);
      END_STATE();
    case 2051:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2152);
      END_STATE();
    case 2052:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2153);
      END_STATE();
    case 2053:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2154);
      END_STATE();
    case 2054:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2155);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(sym__FUNCTION_ID);
      END_STATE();
    case 2056:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2156);
      END_STATE();
    case 2057:
      ACCEPT_TOKEN(sym__I_O_CONTROL);
      END_STATE();
    case 2058:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2157);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(sym__INITIALIZED);
      END_STATE();
    case 2060:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2158);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(sym__INVALID_KEY);
      END_STATE();
    case 2062:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2159);
      END_STATE();
    case 2063:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2160);
      END_STATE();
    case 2064:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2161);
      END_STATE();
    case 2065:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2162);
      END_STATE();
    case 2066:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2163);
      END_STATE();
    case 2067:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2164);
      END_STATE();
    case 2068:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2165);
      END_STATE();
    case 2069:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2166);
      END_STATE();
    case 2070:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2167);
      END_STATE();
    case 2071:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2168);
      END_STATE();
    case 2072:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2169);
      END_STATE();
    case 2073:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2170);
      END_STATE();
    case 2074:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2171);
      END_STATE();
    case 2075:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2172);
      END_STATE();
    case 2076:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2173);
      END_STATE();
    case 2077:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2174);
      END_STATE();
    case 2078:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2175);
      END_STATE();
    case 2079:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2176);
      END_STATE();
    case 2080:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2177);
      END_STATE();
    case 2081:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2178);
      END_STATE();
    case 2082:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2179);
      END_STATE();
    case 2083:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2180);
      END_STATE();
    case 2084:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2181);
      END_STATE();
    case 2085:
      if (lookahead == '-') ADVANCE(2182);
      END_STATE();
    case 2086:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2183);
      END_STATE();
    case 2087:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2184);
      END_STATE();
    case 2088:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2185);
      END_STATE();
    case 2089:
      ACCEPT_TOKEN(sym__NUMVALC_FUNC);
      END_STATE();
    case 2090:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2186);
      END_STATE();
    case 2091:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2187);
      END_STATE();
    case 2092:
      ACCEPT_TOKEN(sym__NO_ADVANCING);
      END_STATE();
    case 2093:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2188);
      END_STATE();
    case 2094:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2189);
      END_STATE();
    case 2095:
      ACCEPT_TOKEN(sym__NOT_OVERFLOW);
      END_STATE();
    case 2096:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2190);
      END_STATE();
    case 2097:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2191);
      END_STATE();
    case 2098:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2192);
      END_STATE();
    case 2099:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2193);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(sym__SIGNED_SHORT);
      END_STATE();
    case 2101:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2194);
      END_STATE();
    case 2102:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2195);
      END_STATE();
    case 2103:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2196);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(sym__SYNCHRONIZED);
      END_STATE();
    case 2105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2197);
      END_STATE();
    case 2106:
      if (lookahead == 'g') ADVANCE(2198);
      END_STATE();
    case 2107:
      if (lookahead == '_') ADVANCE(2199);
      END_STATE();
    case 2108:
      if (lookahead == 'l') ADVANCE(2200);
      END_STATE();
    case 2109:
      if (lookahead == 'l') ADVANCE(2201);
      END_STATE();
    case 2110:
      if (lookahead == 't') ADVANCE(2202);
      END_STATE();
    case 2111:
      if (lookahead == 'g') ADVANCE(2203);
      END_STATE();
    case 2112:
      if (lookahead == 'm') ADVANCE(2204);
      END_STATE();
    case 2113:
      if (lookahead == 'l') ADVANCE(2205);
      END_STATE();
    case 2114:
      if (lookahead == 'n') ADVANCE(2206);
      END_STATE();
    case 2115:
      if (lookahead == 'c') ADVANCE(2207);
      END_STATE();
    case 2116:
      if (lookahead == 'e') ADVANCE(2208);
      END_STATE();
    case 2117:
      if (lookahead == 'p') ADVANCE(2209);
      END_STATE();
    case 2118:
      if (lookahead == 'c') ADVANCE(2210);
      END_STATE();
    case 2119:
      if (lookahead == '_') ADVANCE(2211);
      END_STATE();
    case 2120:
      if (lookahead == 'a') ADVANCE(2212);
      END_STATE();
    case 2121:
      if (lookahead == 'n') ADVANCE(2213);
      END_STATE();
    case 2122:
      if (lookahead == 'l') ADVANCE(2214);
      END_STATE();
    case 2123:
      if (lookahead == 'l') ADVANCE(2215);
      END_STATE();
    case 2124:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2216);
      END_STATE();
    case 2125:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2217);
      END_STATE();
    case 2126:
      ACCEPT_TOKEN(sym__ALPHANUMERIC);
      if (lookahead == '-') ADVANCE(2218);
      END_STATE();
    case 2127:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2219);
      END_STATE();
    case 2128:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2220);
      END_STATE();
    case 2129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2221);
      END_STATE();
    case 2130:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2222);
      END_STATE();
    case 2131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2223);
      END_STATE();
    case 2132:
      ACCEPT_TOKEN(sym__BINARY_SHORT);
      END_STATE();
    case 2133:
      ACCEPT_TOKEN(sym__BLANK_SCREEN);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(sym__CLOSE_NOFEED);
      END_STATE();
    case 2135:
      ACCEPT_TOKEN(sym__COMMAND_LINE);
      END_STATE();
    case 2136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2224);
      END_STATE();
    case 2137:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2225);
      END_STATE();
    case 2138:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2226);
      END_STATE();
    case 2139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2227);
      END_STATE();
    case 2140:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2228);
      END_STATE();
    case 2141:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2229);
      END_STATE();
    case 2142:
      if (lookahead == '-') ADVANCE(2230);
      END_STATE();
    case 2143:
      ACCEPT_TOKEN(sym__CYL_OVERFLOW);
      END_STATE();
    case 2144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2231);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(sym__DECLARATIVES);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(sym__END_EVALUATE);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(sym__END_FUNCTION);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(sym__END_MULTIPLY);
      END_STATE();
    case 2149:
      ACCEPT_TOKEN(sym__END_SUBTRACT);
      END_STATE();
    case 2150:
      ACCEPT_TOKEN(sym__END_UNSTRING);
      END_STATE();
    case 2151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2232);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2233);
      END_STATE();
    case 2152:
      ACCEPT_TOKEN(sym__EVENT_STATUS);
      END_STATE();
    case 2153:
      ACCEPT_TOKEN(sym__FILE_CONTROL);
      END_STATE();
    case 2154:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2234);
      END_STATE();
    case 2155:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2235);
      END_STATE();
    case 2156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2236);
      END_STATE();
    case 2157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2237);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(sym__INPUT_OUTPUT);
      END_STATE();
    case 2159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2238);
      END_STATE();
    case 2160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2239);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(sym__ORGANIZATION);
      END_STATE();
    case 2162:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2240);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(sym__PAGE_FOOTING);
      END_STATE();
    case 2164:
      ACCEPT_TOKEN(sym__PAGE_HEADING);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(sym__PROGRAM_NAME);
      END_STATE();
    case 2166:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2241);
      END_STATE();
    case 2167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2242);
      END_STATE();
    case 2168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2243);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(sym__REVERSE_FUNC);
      END_STATE();
    case 2170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2244);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(sym__UNSIGNED_INT);
      END_STATE();
    case 2172:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2245);
      END_STATE();
    case 2173:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2246);
      END_STATE();
    case 2174:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2247);
      END_STATE();
    case 2175:
      if (lookahead == '-') ADVANCE(2248);
      END_STATE();
    case 2176:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2249);
      END_STATE();
    case 2177:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2250);
      END_STATE();
    case 2178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2251);
      END_STATE();
    case 2179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2252);
      END_STATE();
    case 2180:
      ACCEPT_TOKEN(sym__LOCAL_STORAGE);
      END_STATE();
    case 2181:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2253);
      END_STATE();
    case 2182:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2254);
      END_STATE();
    case 2183:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2255);
      END_STATE();
    case 2184:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2256);
      END_STATE();
    case 2185:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2257);
      END_STATE();
    case 2186:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2258);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(sym__NEXT_SENTENCE);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(sym__NOT_EXCEPTION);
      END_STATE();
    case 2189:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2259);
      END_STATE();
    case 2190:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2260);
      END_STATE();
    case 2191:
      ACCEPT_TOKEN(sym__SPECIAL_NAMES);
      END_STATE();
    case 2192:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2261);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(sym__SEGMENT_LIMIT);
      END_STATE();
    case 2194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2262);
      END_STATE();
    case 2195:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2263);
      END_STATE();
    case 2196:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2264);
      END_STATE();
    case 2197:
      ACCEPT_TOKEN(sym__TRIM_FUNCTION);
      END_STATE();
    case 2198:
      if (lookahead == 't') ADVANCE(2265);
      END_STATE();
    case 2199:
      if (lookahead == 'c') ADVANCE(2266);
      END_STATE();
    case 2200:
      if (lookahead == 'a') ADVANCE(2267);
      END_STATE();
    case 2201:
      if (lookahead == 'a') ADVANCE(2268);
      END_STATE();
    case 2202:
      if (lookahead == '_') ADVANCE(2269);
      END_STATE();
    case 2203:
      if (lookahead == 'r') ADVANCE(2270);
      END_STATE();
    case 2204:
      if (lookahead == 'e') ADVANCE(2271);
      END_STATE();
    case 2205:
      if (lookahead == '_') ADVANCE(2272);
      END_STATE();
    case 2206:
      if (lookahead == '_') ADVANCE(2273);
      END_STATE();
    case 2207:
      if (lookahead == 'l') ADVANCE(2274);
      END_STATE();
    case 2208:
      if (lookahead == 'd') ADVANCE(2275);
      END_STATE();
    case 2209:
      if (lookahead == 'r') ADVANCE(2276);
      END_STATE();
    case 2210:
      if (lookahead == 'l') ADVANCE(2277);
      END_STATE();
    case 2211:
      if (lookahead == 'c') ADVANCE(2278);
      END_STATE();
    case 2212:
      if (lookahead == 'u') ADVANCE(2279);
      END_STATE();
    case 2213:
      if (lookahead == 'i') ADVANCE(2280);
      END_STATE();
    case 2214:
      if (lookahead == 'a') ADVANCE(2281);
      END_STATE();
    case 2215:
      if (lookahead == 'a') ADVANCE(2282);
      END_STATE();
    case 2216:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2283);
      END_STATE();
    case 2217:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2284);
      END_STATE();
    case 2218:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2285);
      END_STATE();
    case 2219:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2286);
      END_STATE();
    case 2220:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2287);
      END_STATE();
    case 2221:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2288);
      END_STATE();
    case 2222:
      ACCEPT_TOKEN(sym__BINARY_C_LONG);
      END_STATE();
    case 2223:
      ACCEPT_TOKEN(sym__BINARY_DOUBLE);
      END_STATE();
    case 2224:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2289);
      END_STATE();
    case 2225:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2290);
      END_STATE();
    case 2226:
      ACCEPT_TOKEN(sym__CONFIGURATION);
      END_STATE();
    case 2227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2291);
      END_STATE();
    case 2228:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2292);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(sym__CORRESPONDING);
      END_STATE();
    case 2230:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2293);
      END_STATE();
    case 2231:
      ACCEPT_TOKEN(sym__DECIMAL_POINT);
      END_STATE();
    case 2232:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2294);
      END_STATE();
    case 2233:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2295);
      END_STATE();
    case 2234:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2296);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(sym__FORMS_OVERLAY);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(sym__FUNCTION_NAME);
      END_STATE();
    case 2237:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2297);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(sym__MNEMONIC_NAME);
      END_STATE();
    case 2239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2298);
      END_STATE();
    case 2240:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2299);
      END_STATE();
    case 2241:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2300);
      END_STATE();
    case 2242:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2301);
      END_STATE();
    case 2243:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2302);
      END_STATE();
    case 2244:
      ACCEPT_TOKEN(sym__REVERSE_VIDEO);
      END_STATE();
    case 2245:
      ACCEPT_TOKEN(sym__UNSIGNED_LONG);
      END_STATE();
    case 2246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2303);
      END_STATE();
    case 2247:
      if (lookahead == '-') ADVANCE(2304);
      END_STATE();
    case 2248:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2305);
      END_STATE();
    case 2249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2306);
      END_STATE();
    case 2250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2307);
      END_STATE();
    case 2251:
      if (lookahead == '-') ADVANCE(2308);
      END_STATE();
    case 2252:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2309);
      END_STATE();
    case 2253:
      ACCEPT_TOKEN(sym__LOCALE_DT_FUNC);
      END_STATE();
    case 2254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2310);
      END_STATE();
    case 2255:
      if (lookahead == '-') ADVANCE(2311);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(sym__LINAGE_COUNTER);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(sym__NUMERIC_EDITED);
      END_STATE();
    case 2258:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2312);
      END_STATE();
    case 2259:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2313);
      END_STATE();
    case 2260:
      ACCEPT_TOKEN(sym__NOT_SIZE_ERROR);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(sym__SCREEN_CONTROL);
      END_STATE();
    case 2262:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2314);
      END_STATE();
    case 2263:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2315);
      END_STATE();
    case 2264:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2316);
      END_STATE();
    case 2265:
      if (lookahead == 'h') ADVANCE(2317);
      END_STATE();
    case 2266:
      if (lookahead == 'o') ADVANCE(2318);
      END_STATE();
    case 2267:
      if (lookahead == 'u') ADVANCE(2319);
      END_STATE();
    case 2268:
      if (lookahead == 'u') ADVANCE(2320);
      END_STATE();
    case 2269:
      if (lookahead == 'e') ADVANCE(2321);
      END_STATE();
    case 2270:
      if (lookahead == 'a') ADVANCE(2322);
      END_STATE();
    case 2271:
      if (lookahead == 'n') ADVANCE(2323);
      END_STATE();
    case 2272:
      if (lookahead == 'c') ADVANCE(2324);
      END_STATE();
    case 2273:
      if (lookahead == 'd') ADVANCE(2325);
      END_STATE();
    case 2274:
      if (lookahead == 'a') ADVANCE(2326);
      END_STATE();
    case 2275:
      if (lookahead == '_') ADVANCE(2327);
      END_STATE();
    case 2276:
      if (lookahead == 'o') ADVANCE(2328);
      END_STATE();
    case 2277:
      if (lookahead == 'a') ADVANCE(2329);
      END_STATE();
    case 2278:
      if (lookahead == 'l') ADVANCE(2330);
      END_STATE();
    case 2279:
      if (lookahead == 's') ADVANCE(2331);
      END_STATE();
    case 2280:
      if (lookahead == 'z') ADVANCE(2332);
      END_STATE();
    case 2281:
      if (lookahead == 'u') ADVANCE(2333);
      END_STATE();
    case 2282:
      if (lookahead == 'u') ADVANCE(2334);
      END_STATE();
    case 2283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2335);
      END_STATE();
    case 2284:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2336);
      END_STATE();
    case 2285:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2337);
      END_STATE();
    case 2286:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2338);
      END_STATE();
    case 2287:
      ACCEPT_TOKEN(sym__ARGUMENT_VALUE);
      END_STATE();
    case 2288:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2339);
      END_STATE();
    case 2289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2340);
      END_STATE();
    case 2290:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2341);
      END_STATE();
    case 2291:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2342);
      END_STATE();
    case 2292:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2343);
      END_STATE();
    case 2293:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2344);
      END_STATE();
    case 2294:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2345);
      END_STATE();
    case 2295:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2346);
      END_STATE();
    case 2296:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2347);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(sym__IDENTIFICATION);
      END_STATE();
    case 2298:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2348);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(sym__PACKED_DECIMAL);
      END_STATE();
    case 2300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2349);
      END_STATE();
    case 2301:
      ACCEPT_TOKEN(sym__REPORT_FOOTING);
      END_STATE();
    case 2302:
      ACCEPT_TOKEN(sym__REPORT_HEADING);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(sym__UNSIGNED_SHORT);
      END_STATE();
    case 2304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2350);
      END_STATE();
    case 2305:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2351);
      END_STATE();
    case 2306:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2352);
      END_STATE();
    case 2307:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2353);
      END_STATE();
    case 2308:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2354);
      END_STATE();
    case 2309:
      ACCEPT_TOKEN(sym__LOWER_CASE_FUNC);
      END_STATE();
    case 2310:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2355);
      END_STATE();
    case 2311:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2356);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(sym__NATIONAL_EDITED);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(sym__NOT_INVALID_KEY);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(sym__SOURCE_COMPUTER);
      END_STATE();
    case 2315:
      if (lookahead == '-') ADVANCE(2357);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(sym__SUBSTITUTE_FUNC);
      END_STATE();
    case 2317:
      ACCEPT_TOKEN(sym_any_length_clause);
      END_STATE();
    case 2318:
      if (lookahead == 'l') ADVANCE(2358);
      END_STATE();
    case 2319:
      if (lookahead == 's') ADVANCE(2359);
      END_STATE();
    case 2320:
      if (lookahead == 's') ADVANCE(2360);
      END_STATE();
    case 2321:
      if (lookahead == 'n') ADVANCE(2361);
      END_STATE();
    case 2322:
      if (lookahead == 'm') ADVANCE(2362);
      END_STATE();
    case 2323:
      if (lookahead == 't') ADVANCE(2363);
      END_STATE();
    case 2324:
      if (lookahead == 'l') ADVANCE(2364);
      END_STATE();
    case 2325:
      if (lookahead == 'e') ADVANCE(2365);
      END_STATE();
    case 2326:
      if (lookahead == 'u') ADVANCE(2366);
      END_STATE();
    case 2327:
      if (lookahead == 'c') ADVANCE(2367);
      END_STATE();
    case 2328:
      if (lookahead == 'g') ADVANCE(2368);
      END_STATE();
    case 2329:
      if (lookahead == 'u') ADVANCE(2369);
      END_STATE();
    case 2330:
      if (lookahead == 'a') ADVANCE(2370);
      END_STATE();
    case 2331:
      if (lookahead == 'e') ADVANCE(2371);
      END_STATE();
    case 2332:
      if (lookahead == 'e') ADVANCE(2372);
      END_STATE();
    case 2333:
      if (lookahead == 's') ADVANCE(2373);
      END_STATE();
    case 2334:
      if (lookahead == 's') ADVANCE(2374);
      END_STATE();
    case 2335:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2375);
      END_STATE();
    case 2336:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2376);
      END_STATE();
    case 2337:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2377);
      END_STATE();
    case 2338:
      ACCEPT_TOKEN(sym__ARGUMENT_NUMBER);
      END_STATE();
    case 2339:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2378);
      END_STATE();
    case 2340:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2379);
      END_STATE();
    case 2341:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2380);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(sym__CONTROL_FOOTING);
      END_STATE();
    case 2343:
      ACCEPT_TOKEN(sym__CONTROL_HEADING);
      END_STATE();
    case 2344:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2381);
      END_STATE();
    case 2345:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2382);
      END_STATE();
    case 2346:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2383);
      END_STATE();
    case 2347:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2384);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(sym__OBJECT_COMPUTER);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(sym__PROGRAM_POINTER);
      END_STATE();
    case 2350:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2385);
      END_STATE();
    case 2351:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2386);
      END_STATE();
    case 2352:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2387);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(sym__UPPER_CASE_FUNC);
      END_STATE();
    case 2354:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2388);
      END_STATE();
    case 2355:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2389);
      END_STATE();
    case 2356:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2390);
      END_STATE();
    case 2357:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2391);
      END_STATE();
    case 2358:
      if (lookahead == 'u') ADVANCE(2392);
      END_STATE();
    case 2359:
      if (lookahead == 'e') ADVANCE(2393);
      END_STATE();
    case 2360:
      if (lookahead == 'e') ADVANCE(2394);
      END_STATE();
    case 2361:
      if (lookahead == 't') ADVANCE(2395);
      END_STATE();
    case 2362:
      ACCEPT_TOKEN(sym_end_program);
      END_STATE();
    case 2363:
      if (lookahead == '_') ADVANCE(2396);
      END_STATE();
    case 2364:
      if (lookahead == 'a') ADVANCE(2397);
      END_STATE();
    case 2365:
      if (lookahead == 'f') ADVANCE(2398);
      END_STATE();
    case 2366:
      if (lookahead == 's') ADVANCE(2399);
      END_STATE();
    case 2367:
      if (lookahead == 'l') ADVANCE(2400);
      END_STATE();
    case 2368:
      ACCEPT_TOKEN(sym_nested_prog);
      END_STATE();
    case 2369:
      if (lookahead == 's') ADVANCE(2401);
      END_STATE();
    case 2370:
      if (lookahead == 'u') ADVANCE(2402);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(sym_sign_clause);
      END_STATE();
    case 2372:
      if (lookahead == 'd') ADVANCE(2403);
      END_STATE();
    case 2373:
      if (lookahead == 'e') ADVANCE(2404);
      END_STATE();
    case 2374:
      if (lookahead == 'e') ADVANCE(2405);
      END_STATE();
    case 2375:
      ACCEPT_TOKEN(sym__ALPHABETIC_LOWER);
      END_STATE();
    case 2376:
      ACCEPT_TOKEN(sym__ALPHABETIC_UPPER);
      END_STATE();
    case 2377:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2406);
      END_STATE();
    case 2378:
      ACCEPT_TOKEN(sym__BACKGROUND_COLOR);
      END_STATE();
    case 2379:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2407);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(sym__CONCATENATE_FUNC);
      END_STATE();
    case 2381:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2408);
      END_STATE();
    case 2382:
      ACCEPT_TOKEN(sym__ENVIRONMENT_NAME);
      END_STATE();
    case 2383:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2409);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(sym__FOREGROUND_COLOR);
      END_STATE();
    case 2385:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2410);
      END_STATE();
    case 2386:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2411);
      END_STATE();
    case 2387:
      if (lookahead == '-') ADVANCE(2412);
      END_STATE();
    case 2388:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2413);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(sym__LEVEL_NUMBER_WORD);
      END_STATE();
    case 2390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2414);
      END_STATE();
    case 2391:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2415);
      END_STATE();
    case 2392:
      if (lookahead == 'm') ADVANCE(2416);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(sym_based_clause);
      END_STATE();
    case 2394:
      ACCEPT_TOKEN(sym_blank_clause);
      END_STATE();
    case 2395:
      if (lookahead == 'r') ADVANCE(2417);
      END_STATE();
    case 2396:
      if (lookahead == 'd') ADVANCE(2418);
      END_STATE();
    case 2397:
      if (lookahead == 'u') ADVANCE(2419);
      END_STATE();
    case 2398:
      if (lookahead == 'i') ADVANCE(2420);
      END_STATE();
    case 2399:
      if (lookahead == 'e') ADVANCE(2421);
      END_STATE();
    case 2400:
      if (lookahead == 'a') ADVANCE(2422);
      END_STATE();
    case 2401:
      if (lookahead == 'e') ADVANCE(2423);
      END_STATE();
    case 2402:
      if (lookahead == 's') ADVANCE(2424);
      END_STATE();
    case 2403:
      if (lookahead == '_') ADVANCE(2425);
      END_STATE();
    case 2404:
      ACCEPT_TOKEN(sym_usage_clause);
      END_STATE();
    case 2405:
      ACCEPT_TOKEN(sym_value_clause);
      END_STATE();
    case 2406:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2426);
      END_STATE();
    case 2407:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2427);
      END_STATE();
    case 2408:
      ACCEPT_TOKEN(sym__CURRENT_DATE_FUNC);
      END_STATE();
    case 2409:
      ACCEPT_TOKEN(sym__ENVIRONMENT_VALUE);
      END_STATE();
    case 2410:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2428);
      END_STATE();
    case 2411:
      ACCEPT_TOKEN(sym__UPON_COMMAND_LINE);
      END_STATE();
    case 2412:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2429);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2430);
      END_STATE();
    case 2413:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2431);
      END_STATE();
    case 2414:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2432);
      END_STATE();
    case 2415:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2433);
      END_STATE();
    case 2416:
      if (lookahead == 'n') ADVANCE(2434);
      END_STATE();
    case 2417:
      if (lookahead == 'y') ADVANCE(2435);
      END_STATE();
    case 2418:
      if (lookahead == 'i') ADVANCE(2436);
      END_STATE();
    case 2419:
      if (lookahead == 's') ADVANCE(2437);
      END_STATE();
    case 2420:
      if (lookahead == 'n') ADVANCE(2438);
      END_STATE();
    case 2421:
      ACCEPT_TOKEN(sym_global_clause);
      END_STATE();
    case 2422:
      if (lookahead == 'u') ADVANCE(2439);
      END_STATE();
    case 2423:
      ACCEPT_TOKEN(sym_occurs_clause);
      END_STATE();
    case 2424:
      if (lookahead == 'e') ADVANCE(2440);
      END_STATE();
    case 2425:
      if (lookahead == 'c') ADVANCE(2441);
      END_STATE();
    case 2426:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2442);
      END_STATE();
    case 2427:
      ACCEPT_TOKEN(sym__COMMITMENT_CONTROL);
      END_STATE();
    case 2428:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2443);
      END_STATE();
    case 2429:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2444);
      END_STATE();
    case 2430:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2445);
      END_STATE();
    case 2431:
      ACCEPT_TOKEN(sym__WHEN_COMPILED_FUNC);
      END_STATE();
    case 2432:
      ACCEPT_TOKEN(sym__LEVEL88_NUMBER_WORD);
      END_STATE();
    case 2433:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2446);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(sym_at_line_column);
      END_STATE();
    case 2435:
      ACCEPT_TOKEN(sym_constant_entry);
      END_STATE();
    case 2436:
      if (lookahead == 'v') ADVANCE(2447);
      END_STATE();
    case 2437:
      if (lookahead == 'e') ADVANCE(2448);
      END_STATE();
    case 2438:
      if (lookahead == 'i') ADVANCE(2449);
      END_STATE();
    case 2439:
      if (lookahead == 's') ADVANCE(2450);
      END_STATE();
    case 2440:
      ACCEPT_TOKEN(sym_renames_clause);
      END_STATE();
    case 2441:
      if (lookahead == 'l') ADVANCE(2451);
      END_STATE();
    case 2442:
      ACCEPT_TOKEN(sym__ALPHANUMERIC_EDITED);
      END_STATE();
    case 2443:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2452);
      END_STATE();
    case 2444:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2453);
      END_STATE();
    case 2445:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2454);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(sym__SUBSTITUTE_CASE_FUNC);
      END_STATE();
    case 2447:
      if (lookahead == 'i') ADVANCE(2455);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(sym_external_clause);
      END_STATE();
    case 2449:
      if (lookahead == 't') ADVANCE(2456);
      END_STATE();
    case 2450:
      if (lookahead == 'e') ADVANCE(2457);
      END_STATE();
    case 2451:
      if (lookahead == 'a') ADVANCE(2458);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(sym__UPON_ARGUMENT_NUMBER);
      END_STATE();
    case 2453:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2459);
      END_STATE();
    case 2454:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2460);
      END_STATE();
    case 2455:
      if (lookahead == 's') ADVANCE(2461);
      END_STATE();
    case 2456:
      if (lookahead == 'i') ADVANCE(2462);
      END_STATE();
    case 2457:
      ACCEPT_TOKEN(sym_justified_clause);
      END_STATE();
    case 2458:
      if (lookahead == 'u') ADVANCE(2463);
      END_STATE();
    case 2459:
      ACCEPT_TOKEN(sym__UPON_ENVIRONMENT_NAME);
      END_STATE();
    case 2460:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2464);
      END_STATE();
    case 2461:
      if (lookahead == 'i') ADVANCE(2465);
      END_STATE();
    case 2462:
      if (lookahead == 'o') ADVANCE(2466);
      END_STATE();
    case 2463:
      if (lookahead == 's') ADVANCE(2467);
      END_STATE();
    case 2464:
      ACCEPT_TOKEN(sym__UPON_ENVIRONMENT_VALUE);
      END_STATE();
    case 2465:
      if (lookahead == 'o') ADVANCE(2468);
      END_STATE();
    case 2466:
      if (lookahead == 'n') ADVANCE(2469);
      END_STATE();
    case 2467:
      if (lookahead == 'e') ADVANCE(2470);
      END_STATE();
    case 2468:
      if (lookahead == 'n') ADVANCE(2471);
      END_STATE();
    case 2469:
      ACCEPT_TOKEN(sym_function_definition);
      END_STATE();
    case 2470:
      ACCEPT_TOKEN(sym_synchronized_clause);
      END_STATE();
    case 2471:
      ACCEPT_TOKEN(sym_environment_division);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
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
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 158},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 17},
  [105] = {.lex_state = 158},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 158},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 158},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 27},
  [117] = {.lex_state = 158},
  [118] = {.lex_state = 158},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 158},
  [126] = {.lex_state = 158},
  [127] = {.lex_state = 158},
  [128] = {.lex_state = 158},
  [129] = {.lex_state = 158},
  [130] = {.lex_state = 158},
  [131] = {.lex_state = 158},
  [132] = {.lex_state = 158},
  [133] = {.lex_state = 158},
  [134] = {.lex_state = 158},
  [135] = {.lex_state = 158},
  [136] = {.lex_state = 158},
  [137] = {.lex_state = 158},
  [138] = {.lex_state = 158},
  [139] = {.lex_state = 158},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 158},
  [142] = {.lex_state = 158},
  [143] = {.lex_state = 158},
  [144] = {.lex_state = 158},
  [145] = {.lex_state = 158},
  [146] = {.lex_state = 158},
  [147] = {.lex_state = 158},
  [148] = {.lex_state = 158},
  [149] = {.lex_state = 158},
  [150] = {.lex_state = 158},
  [151] = {.lex_state = 158},
  [152] = {.lex_state = 158},
  [153] = {.lex_state = 158},
  [154] = {.lex_state = 158},
  [155] = {.lex_state = 158},
  [156] = {.lex_state = 158},
  [157] = {.lex_state = 158},
  [158] = {.lex_state = 158},
  [159] = {.lex_state = 158},
  [160] = {.lex_state = 158},
  [161] = {.lex_state = 158},
  [162] = {.lex_state = 158},
  [163] = {.lex_state = 158},
  [164] = {.lex_state = 158},
  [165] = {.lex_state = 158},
  [166] = {.lex_state = 27},
  [167] = {.lex_state = 17},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 18},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 18},
  [178] = {.lex_state = 158},
  [179] = {.lex_state = 18},
  [180] = {.lex_state = 158},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 19},
  [185] = {.lex_state = 19},
  [186] = {.lex_state = 158},
  [187] = {.lex_state = 158},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 10},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 158},
  [194] = {.lex_state = 19},
  [195] = {.lex_state = 158},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 158},
  [205] = {.lex_state = 158},
  [206] = {.lex_state = 28},
  [207] = {.lex_state = 158},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 158},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 28},
  [220] = {.lex_state = 158},
  [221] = {.lex_state = 158},
  [222] = {.lex_state = 28},
  [223] = {.lex_state = 158},
  [224] = {.lex_state = 19},
  [225] = {.lex_state = 18},
  [226] = {.lex_state = 158},
  [227] = {.lex_state = 19},
  [228] = {.lex_state = 19},
  [229] = {.lex_state = 19},
  [230] = {.lex_state = 158},
  [231] = {.lex_state = 19},
  [232] = {.lex_state = 19},
  [233] = {.lex_state = 158},
  [234] = {.lex_state = 158},
  [235] = {.lex_state = 158},
  [236] = {.lex_state = 158},
  [237] = {.lex_state = 158},
  [238] = {.lex_state = 158},
  [239] = {.lex_state = 19},
  [240] = {.lex_state = 19},
  [241] = {.lex_state = 158},
  [242] = {.lex_state = 19},
  [243] = {.lex_state = 19},
  [244] = {.lex_state = 19},
  [245] = {.lex_state = 158},
  [246] = {.lex_state = 158},
  [247] = {.lex_state = 19},
  [248] = {.lex_state = 158},
  [249] = {.lex_state = 158},
  [250] = {.lex_state = 19},
  [251] = {.lex_state = 158},
  [252] = {.lex_state = 19},
  [253] = {.lex_state = 158},
  [254] = {.lex_state = 19},
  [255] = {.lex_state = 158},
  [256] = {.lex_state = 19},
  [257] = {.lex_state = 28},
  [258] = {.lex_state = 158},
  [259] = {.lex_state = 158},
  [260] = {.lex_state = 158},
  [261] = {.lex_state = 158},
  [262] = {.lex_state = 158},
  [263] = {.lex_state = 158},
  [264] = {.lex_state = 27},
  [265] = {.lex_state = 158},
  [266] = {.lex_state = 27},
  [267] = {.lex_state = 158},
  [268] = {.lex_state = 158},
  [269] = {.lex_state = 158},
  [270] = {.lex_state = 158},
  [271] = {.lex_state = 158},
  [272] = {.lex_state = 19},
  [273] = {.lex_state = 158},
  [274] = {.lex_state = 158},
  [275] = {.lex_state = 19},
  [276] = {.lex_state = 134},
  [277] = {.lex_state = 134},
  [278] = {.lex_state = 107},
  [279] = {.lex_state = 19},
  [280] = {.lex_state = 158},
  [281] = {.lex_state = 19},
  [282] = {.lex_state = 19},
  [283] = {.lex_state = 19},
  [284] = {.lex_state = 158},
  [285] = {.lex_state = 19},
  [286] = {.lex_state = 19},
  [287] = {.lex_state = 19},
  [288] = {.lex_state = 19},
  [289] = {.lex_state = 19},
  [290] = {.lex_state = 19},
  [291] = {.lex_state = 158},
  [292] = {.lex_state = 158},
  [293] = {.lex_state = 158},
  [294] = {.lex_state = 158},
  [295] = {.lex_state = 19},
  [296] = {.lex_state = 19},
  [297] = {.lex_state = 158},
  [298] = {.lex_state = 158},
  [299] = {.lex_state = 19},
  [300] = {.lex_state = 158},
  [301] = {.lex_state = 158},
  [302] = {.lex_state = 141},
  [303] = {.lex_state = 19},
  [304] = {.lex_state = 158},
  [305] = {.lex_state = 158},
  [306] = {.lex_state = 158},
  [307] = {.lex_state = 158},
  [308] = {.lex_state = 158},
  [309] = {.lex_state = 19},
  [310] = {.lex_state = 158},
  [311] = {.lex_state = 19},
  [312] = {.lex_state = 158},
  [313] = {.lex_state = 108},
  [314] = {.lex_state = 107},
  [315] = {.lex_state = 158},
  [316] = {.lex_state = 158},
  [317] = {.lex_state = 158},
  [318] = {.lex_state = 158},
  [319] = {.lex_state = 158},
  [320] = {.lex_state = 158},
  [321] = {.lex_state = 19},
  [322] = {.lex_state = 134},
  [323] = {.lex_state = 158},
  [324] = {.lex_state = 158},
  [325] = {.lex_state = 158},
  [326] = {.lex_state = 158},
  [327] = {.lex_state = 158},
  [328] = {.lex_state = 158},
  [329] = {.lex_state = 19},
  [330] = {.lex_state = 141},
  [331] = {.lex_state = 19},
  [332] = {.lex_state = 158},
  [333] = {.lex_state = 158},
  [334] = {.lex_state = 19},
  [335] = {.lex_state = 158},
  [336] = {.lex_state = 158},
  [337] = {.lex_state = 19},
  [338] = {.lex_state = 158},
  [339] = {.lex_state = 158},
  [340] = {.lex_state = 158},
  [341] = {.lex_state = 19},
  [342] = {.lex_state = 158},
  [343] = {.lex_state = 19},
  [344] = {.lex_state = 141},
  [345] = {.lex_state = 141},
  [346] = {.lex_state = 158},
  [347] = {.lex_state = 158},
  [348] = {.lex_state = 158},
  [349] = {.lex_state = 158},
  [350] = {.lex_state = 158},
  [351] = {.lex_state = 158},
  [352] = {.lex_state = 158},
  [353] = {.lex_state = 19},
  [354] = {.lex_state = 158},
  [355] = {.lex_state = 19},
  [356] = {.lex_state = 19},
  [357] = {.lex_state = 106},
  [358] = {.lex_state = 158},
  [359] = {.lex_state = 158},
  [360] = {.lex_state = 158},
  [361] = {.lex_state = 158},
  [362] = {.lex_state = 158},
  [363] = {.lex_state = 19},
  [364] = {.lex_state = 19},
  [365] = {.lex_state = 158},
  [366] = {.lex_state = 158},
  [367] = {.lex_state = 19},
  [368] = {.lex_state = 19},
  [369] = {.lex_state = 158},
  [370] = {.lex_state = 158},
  [371] = {.lex_state = 158},
  [372] = {.lex_state = 158},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 19},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 158},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 158},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 158},
  [391] = {.lex_state = 158},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 158},
  [395] = {.lex_state = 158},
  [396] = {.lex_state = 158},
  [397] = {.lex_state = 158},
  [398] = {.lex_state = 158},
  [399] = {.lex_state = 158},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 158},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 158},
  [407] = {.lex_state = 19},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 19},
  [410] = {.lex_state = 158},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 158},
  [415] = {.lex_state = 158},
  [416] = {.lex_state = 158},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 18},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 19},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 158},
  [424] = {.lex_state = 158},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 19},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 158},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 158},
  [439] = {.lex_state = 158},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 158},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 158},
  [446] = {.lex_state = 158},
  [447] = {.lex_state = 158},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 19},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__WORD] = ACTIONS(1),
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
    [sym_at_line_column] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
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
    [sym_start] = STATE(457),
    [sym_program_definition] = STATE(312),
    [sym_identification_division] = STATE(302),
    [aux_sym_start_repeat1] = STATE(312),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__IDENTIFICATION] = ACTIONS(5),
  },
  [2] = {
    [sym__identifier] = STATE(4),
    [sym_qualified_word] = STATE(35),
    [sym_on_disp_exception] = STATE(306),
    [sym_with_clause] = STATE(207),
    [sym__x] = STATE(4),
    [sym__basic_literal] = STATE(4),
    [sym__basic_value] = STATE(57),
    [sym__literal] = STATE(4),
    [sym_function_] = STATE(4),
    [sym_linage_counter] = STATE(4),
    [sym__LITERAL] = STATE(57),
    [sym_number] = STATE(57),
    [sym__string] = STATE(57),
    [sym_x_string] = STATE(57),
    [sym_h_string] = STATE(57),
    [sym_n_string] = STATE(57),
    [sym__HIGH_VALUE] = STATE(63),
    [sym__LOW_VALUE] = STATE(62),
    [sym__QUOTE] = STATE(66),
    [sym__SPACE] = STATE(67),
    [sym__TOK_NULL] = STATE(65),
    [sym__ZERO] = STATE(49),
    [sym_ALL] = STATE(88),
    [sym_CONCATENATE_FUNC] = STATE(386),
    [sym_CURRENT_DATE_FUNC] = STATE(72),
    [sym_EXCEPTION] = STATE(226),
    [sym_FUNCTION_NAME] = STATE(71),
    [sym_HIGH_VALUE] = STATE(57),
    [sym_LOCALE_DT_FUNC] = STATE(387),
    [sym_LOWER_CASE_FUNC] = STATE(389),
    [sym_LOW_VALUE] = STATE(57),
    [sym_NOT_EXCEPTION] = STATE(226),
    [sym_NO_ADVANCING] = STATE(270),
    [sym_NUMVALC_FUNC] = STATE(392),
    [sym_QUOTE] = STATE(57),
    [sym_REVERSE_FUNC] = STATE(389),
    [sym_SPACE] = STATE(57),
    [sym_SUBSTITUTE_FUNC] = STATE(386),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(386),
    [sym_TOK_NULL] = STATE(57),
    [sym_TRIM_FUNCTION] = STATE(393),
    [sym_UPON] = STATE(273),
    [sym_UPPER_CASE_FUNC] = STATE(389),
    [sym_WHEN_COMPILED_FUNC] = STATE(72),
    [sym_WITH] = STATE(114),
    [sym_ZERO] = STATE(57),
    [aux_sym__display_body_repeat1] = STATE(4),
    [sym__WORD] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [sym_at_line_column] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_decimal] = ACTIONS(15),
    [aux_sym_x_string_token1] = ACTIONS(17),
    [aux_sym_x_string_token2] = ACTIONS(17),
    [aux_sym_h_string_token1] = ACTIONS(19),
    [aux_sym_h_string_token2] = ACTIONS(19),
    [aux_sym_n_string_token1] = ACTIONS(21),
    [aux_sym_n_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token3] = ACTIONS(21),
    [aux_sym_n_string_token4] = ACTIONS(21),
    [aux_sym_n_string_token5] = ACTIONS(21),
    [aux_sym_n_string_token6] = ACTIONS(21),
    [aux_sym_n_string_token7] = ACTIONS(21),
    [aux_sym_n_string_token8] = ACTIONS(21),
    [sym__ADDRESS] = ACTIONS(23),
    [sym__ALL] = ACTIONS(25),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(29),
    [sym__DISPLAY] = ACTIONS(31),
    [sym__END_DISPLAY] = ACTIONS(31),
    [sym__EXCEPTION] = ACTIONS(33),
    [sym__FUNCTION_NAME] = ACTIONS(35),
    [anon_sym_high_DASHvalue] = ACTIONS(37),
    [anon_sym_high_DASHValue] = ACTIONS(37),
    [anon_sym_high_DASHVALUE] = ACTIONS(37),
    [anon_sym_High_DASHvalue] = ACTIONS(37),
    [anon_sym_High_DASHValue] = ACTIONS(37),
    [anon_sym_High_DASHVALUE] = ACTIONS(37),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(37),
    [anon_sym_HIGH_DASHValue] = ACTIONS(37),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(37),
    [sym__LENGTH] = ACTIONS(39),
    [sym__LINAGE_COUNTER] = ACTIONS(41),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(47),
    [anon_sym_low_DASHValue] = ACTIONS(47),
    [anon_sym_low_DASHVALUE] = ACTIONS(47),
    [anon_sym_Low_DASHvalue] = ACTIONS(47),
    [anon_sym_Low_DASHValue] = ACTIONS(47),
    [anon_sym_Low_DASHVALUE] = ACTIONS(47),
    [anon_sym_LOW_DASHvalue] = ACTIONS(47),
    [anon_sym_LOW_DASHValue] = ACTIONS(47),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(47),
    [sym__MOVE] = ACTIONS(31),
    [sym__NOT_EXCEPTION] = ACTIONS(49),
    [sym__NO_ADVANCING] = ACTIONS(51),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(55),
    [anon_sym_QUOTE] = ACTIONS(55),
    [anon_sym_Quote] = ACTIONS(55),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(59),
    [anon_sym_SPACE] = ACTIONS(59),
    [anon_sym_Space] = ACTIONS(59),
    [sym__STOP] = ACTIONS(31),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(65),
    [anon_sym_Null] = ACTIONS(65),
    [anon_sym_NULL] = ACTIONS(65),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPON] = ACTIONS(69),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(73),
    [sym__WITH] = ACTIONS(75),
    [anon_sym_zero] = ACTIONS(77),
    [anon_sym_ZERO] = ACTIONS(77),
    [anon_sym_Zero] = ACTIONS(77),
  },
  [3] = {
    [sym__identifier] = STATE(224),
    [sym_qualified_word] = STATE(168),
    [sym__exp_list] = STATE(443),
    [sym__exp] = STATE(224),
    [sym__binary_exp] = STATE(224),
    [sym__unary_exp] = STATE(224),
    [sym_positive_exp] = STATE(224),
    [sym_negative_exp] = STATE(224),
    [sym_add_exp] = STATE(224),
    [sym_sub_exp] = STATE(224),
    [sym_mul_exp] = STATE(224),
    [sym_div_exp] = STATE(224),
    [sym_pow_exp] = STATE(224),
    [sym__arith_x] = STATE(224),
    [sym__basic_literal] = STATE(224),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(224),
    [sym_linage_counter] = STATE(224),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [4] = {
    [sym__identifier] = STATE(4),
    [sym_qualified_word] = STATE(35),
    [sym__x] = STATE(4),
    [sym__basic_literal] = STATE(4),
    [sym__basic_value] = STATE(57),
    [sym__literal] = STATE(4),
    [sym_function_] = STATE(4),
    [sym_linage_counter] = STATE(4),
    [sym__LITERAL] = STATE(57),
    [sym_number] = STATE(57),
    [sym__string] = STATE(57),
    [sym_x_string] = STATE(57),
    [sym_h_string] = STATE(57),
    [sym_n_string] = STATE(57),
    [sym__HIGH_VALUE] = STATE(63),
    [sym__LOW_VALUE] = STATE(62),
    [sym__QUOTE] = STATE(66),
    [sym__SPACE] = STATE(67),
    [sym__TOK_NULL] = STATE(65),
    [sym__ZERO] = STATE(49),
    [sym_ALL] = STATE(88),
    [sym_CONCATENATE_FUNC] = STATE(386),
    [sym_CURRENT_DATE_FUNC] = STATE(72),
    [sym_FUNCTION_NAME] = STATE(71),
    [sym_HIGH_VALUE] = STATE(57),
    [sym_LOCALE_DT_FUNC] = STATE(387),
    [sym_LOWER_CASE_FUNC] = STATE(389),
    [sym_LOW_VALUE] = STATE(57),
    [sym_NUMVALC_FUNC] = STATE(392),
    [sym_QUOTE] = STATE(57),
    [sym_REVERSE_FUNC] = STATE(389),
    [sym_SPACE] = STATE(57),
    [sym_SUBSTITUTE_FUNC] = STATE(386),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(386),
    [sym_TOK_NULL] = STATE(57),
    [sym_TRIM_FUNCTION] = STATE(393),
    [sym_UPPER_CASE_FUNC] = STATE(389),
    [sym_WHEN_COMPILED_FUNC] = STATE(72),
    [sym_ZERO] = STATE(57),
    [aux_sym__display_body_repeat1] = STATE(4),
    [sym__WORD] = ACTIONS(121),
    [anon_sym_DOT] = ACTIONS(124),
    [sym_at_line_column] = ACTIONS(126),
    [sym_integer] = ACTIONS(128),
    [sym_decimal] = ACTIONS(131),
    [aux_sym_x_string_token1] = ACTIONS(134),
    [aux_sym_x_string_token2] = ACTIONS(134),
    [aux_sym_h_string_token1] = ACTIONS(137),
    [aux_sym_h_string_token2] = ACTIONS(137),
    [aux_sym_n_string_token1] = ACTIONS(140),
    [aux_sym_n_string_token2] = ACTIONS(140),
    [aux_sym_n_string_token3] = ACTIONS(140),
    [aux_sym_n_string_token4] = ACTIONS(140),
    [aux_sym_n_string_token5] = ACTIONS(140),
    [aux_sym_n_string_token6] = ACTIONS(140),
    [aux_sym_n_string_token7] = ACTIONS(140),
    [aux_sym_n_string_token8] = ACTIONS(140),
    [sym__ADDRESS] = ACTIONS(143),
    [sym__ALL] = ACTIONS(146),
    [sym__CONCATENATE_FUNC] = ACTIONS(149),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(152),
    [sym__DISPLAY] = ACTIONS(126),
    [sym__END_DISPLAY] = ACTIONS(126),
    [sym__EXCEPTION] = ACTIONS(126),
    [sym__FUNCTION_NAME] = ACTIONS(155),
    [anon_sym_high_DASHvalue] = ACTIONS(158),
    [anon_sym_high_DASHValue] = ACTIONS(158),
    [anon_sym_high_DASHVALUE] = ACTIONS(158),
    [anon_sym_High_DASHvalue] = ACTIONS(158),
    [anon_sym_High_DASHValue] = ACTIONS(158),
    [anon_sym_High_DASHVALUE] = ACTIONS(158),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(158),
    [anon_sym_HIGH_DASHValue] = ACTIONS(158),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(158),
    [sym__LENGTH] = ACTIONS(161),
    [sym__LINAGE_COUNTER] = ACTIONS(164),
    [sym__LOCALE_DT_FUNC] = ACTIONS(167),
    [sym__LOWER_CASE_FUNC] = ACTIONS(170),
    [anon_sym_low_DASHvalue] = ACTIONS(173),
    [anon_sym_low_DASHValue] = ACTIONS(173),
    [anon_sym_low_DASHVALUE] = ACTIONS(173),
    [anon_sym_Low_DASHvalue] = ACTIONS(173),
    [anon_sym_Low_DASHValue] = ACTIONS(173),
    [anon_sym_Low_DASHVALUE] = ACTIONS(173),
    [anon_sym_LOW_DASHvalue] = ACTIONS(173),
    [anon_sym_LOW_DASHValue] = ACTIONS(173),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(173),
    [sym__MOVE] = ACTIONS(126),
    [sym__NOT_EXCEPTION] = ACTIONS(126),
    [sym__NO_ADVANCING] = ACTIONS(126),
    [sym__NUMVALC_FUNC] = ACTIONS(176),
    [anon_sym_quote] = ACTIONS(179),
    [anon_sym_QUOTE] = ACTIONS(179),
    [anon_sym_Quote] = ACTIONS(179),
    [sym__REVERSE_FUNC] = ACTIONS(182),
    [anon_sym_space] = ACTIONS(185),
    [anon_sym_SPACE] = ACTIONS(185),
    [anon_sym_Space] = ACTIONS(185),
    [sym__STOP] = ACTIONS(126),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(188),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(191),
    [anon_sym_null] = ACTIONS(194),
    [anon_sym_Null] = ACTIONS(194),
    [anon_sym_NULL] = ACTIONS(194),
    [sym__TRIM_FUNCTION] = ACTIONS(197),
    [sym__UPON] = ACTIONS(126),
    [sym__UPPER_CASE_FUNC] = ACTIONS(200),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(203),
    [sym__WITH] = ACTIONS(126),
    [anon_sym_zero] = ACTIONS(206),
    [anon_sym_ZERO] = ACTIONS(206),
    [anon_sym_Zero] = ACTIONS(206),
  },
  [5] = {
    [sym__identifier] = STATE(224),
    [sym_qualified_word] = STATE(168),
    [sym__exp_list] = STATE(428),
    [sym__exp] = STATE(224),
    [sym__binary_exp] = STATE(224),
    [sym__unary_exp] = STATE(224),
    [sym_positive_exp] = STATE(224),
    [sym_negative_exp] = STATE(224),
    [sym_add_exp] = STATE(224),
    [sym_sub_exp] = STATE(224),
    [sym_mul_exp] = STATE(224),
    [sym_div_exp] = STATE(224),
    [sym_pow_exp] = STATE(224),
    [sym__arith_x] = STATE(224),
    [sym__basic_literal] = STATE(224),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(224),
    [sym_linage_counter] = STATE(224),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [6] = {
    [sym__identifier] = STATE(184),
    [sym_qualified_word] = STATE(168),
    [sym__exp_list] = STATE(440),
    [sym__exp] = STATE(184),
    [sym__binary_exp] = STATE(184),
    [sym__unary_exp] = STATE(184),
    [sym_positive_exp] = STATE(184),
    [sym_negative_exp] = STATE(184),
    [sym_add_exp] = STATE(184),
    [sym_sub_exp] = STATE(184),
    [sym_mul_exp] = STATE(184),
    [sym_div_exp] = STATE(184),
    [sym_pow_exp] = STATE(184),
    [sym__arith_x] = STATE(184),
    [sym__basic_literal] = STATE(184),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(184),
    [sym_linage_counter] = STATE(184),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [7] = {
    [sym__identifier] = STATE(279),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(279),
    [sym__binary_exp] = STATE(279),
    [sym__unary_exp] = STATE(279),
    [sym_positive_exp] = STATE(279),
    [sym_negative_exp] = STATE(279),
    [sym_add_exp] = STATE(279),
    [sym_sub_exp] = STATE(279),
    [sym_mul_exp] = STATE(279),
    [sym_div_exp] = STATE(279),
    [sym_pow_exp] = STATE(279),
    [sym__arith_x] = STATE(279),
    [sym__basic_literal] = STATE(279),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(279),
    [sym_linage_counter] = STATE(279),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [8] = {
    [sym__identifier] = STATE(227),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(227),
    [sym__binary_exp] = STATE(227),
    [sym__unary_exp] = STATE(227),
    [sym_positive_exp] = STATE(227),
    [sym_negative_exp] = STATE(227),
    [sym_add_exp] = STATE(227),
    [sym_sub_exp] = STATE(227),
    [sym_mul_exp] = STATE(227),
    [sym_div_exp] = STATE(227),
    [sym_pow_exp] = STATE(227),
    [sym__arith_x] = STATE(227),
    [sym__basic_literal] = STATE(227),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(227),
    [sym__numvalc_args] = STATE(444),
    [sym_linage_counter] = STATE(227),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [9] = {
    [sym__identifier] = STATE(232),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(232),
    [sym__binary_exp] = STATE(232),
    [sym__unary_exp] = STATE(232),
    [sym_positive_exp] = STATE(232),
    [sym_negative_exp] = STATE(232),
    [sym_add_exp] = STATE(232),
    [sym_sub_exp] = STATE(232),
    [sym_mul_exp] = STATE(232),
    [sym_div_exp] = STATE(232),
    [sym_pow_exp] = STATE(232),
    [sym__arith_x] = STATE(232),
    [sym__basic_literal] = STATE(232),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(232),
    [sym__trim_args] = STATE(442),
    [sym_linage_counter] = STATE(232),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [10] = {
    [sym__identifier] = STATE(232),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(232),
    [sym__binary_exp] = STATE(232),
    [sym__unary_exp] = STATE(232),
    [sym_positive_exp] = STATE(232),
    [sym_negative_exp] = STATE(232),
    [sym_add_exp] = STATE(232),
    [sym_sub_exp] = STATE(232),
    [sym_mul_exp] = STATE(232),
    [sym_div_exp] = STATE(232),
    [sym_pow_exp] = STATE(232),
    [sym__arith_x] = STATE(232),
    [sym__basic_literal] = STATE(232),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(232),
    [sym__trim_args] = STATE(427),
    [sym_linage_counter] = STATE(232),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [11] = {
    [sym__identifier] = STATE(227),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(227),
    [sym__binary_exp] = STATE(227),
    [sym__unary_exp] = STATE(227),
    [sym_positive_exp] = STATE(227),
    [sym_negative_exp] = STATE(227),
    [sym_add_exp] = STATE(227),
    [sym_sub_exp] = STATE(227),
    [sym_mul_exp] = STATE(227),
    [sym_div_exp] = STATE(227),
    [sym_pow_exp] = STATE(227),
    [sym__arith_x] = STATE(227),
    [sym__basic_literal] = STATE(227),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(227),
    [sym__numvalc_args] = STATE(430),
    [sym_linage_counter] = STATE(227),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [12] = {
    [sym__identifier] = STATE(185),
    [sym_qualified_word] = STATE(168),
    [sym__exp_list] = STATE(436),
    [sym__exp] = STATE(185),
    [sym__binary_exp] = STATE(185),
    [sym__unary_exp] = STATE(185),
    [sym_positive_exp] = STATE(185),
    [sym_negative_exp] = STATE(185),
    [sym_add_exp] = STATE(185),
    [sym_sub_exp] = STATE(185),
    [sym_mul_exp] = STATE(185),
    [sym_div_exp] = STATE(185),
    [sym_pow_exp] = STATE(185),
    [sym__arith_x] = STATE(185),
    [sym__basic_literal] = STATE(185),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(185),
    [sym_linage_counter] = STATE(185),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [13] = {
    [sym__identifier] = STATE(228),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(228),
    [sym__binary_exp] = STATE(228),
    [sym__unary_exp] = STATE(228),
    [sym_positive_exp] = STATE(228),
    [sym_negative_exp] = STATE(228),
    [sym_add_exp] = STATE(228),
    [sym_sub_exp] = STATE(228),
    [sym_mul_exp] = STATE(228),
    [sym_div_exp] = STATE(228),
    [sym_pow_exp] = STATE(228),
    [sym__arith_x] = STATE(228),
    [sym__basic_literal] = STATE(228),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(228),
    [sym__locale_dt_args] = STATE(427),
    [sym_linage_counter] = STATE(228),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [14] = {
    [sym__identifier] = STATE(224),
    [sym_qualified_word] = STATE(168),
    [sym__exp_list] = STATE(427),
    [sym__exp] = STATE(224),
    [sym__binary_exp] = STATE(224),
    [sym__unary_exp] = STATE(224),
    [sym_positive_exp] = STATE(224),
    [sym_negative_exp] = STATE(224),
    [sym_add_exp] = STATE(224),
    [sym_sub_exp] = STATE(224),
    [sym_mul_exp] = STATE(224),
    [sym_div_exp] = STATE(224),
    [sym_pow_exp] = STATE(224),
    [sym__arith_x] = STATE(224),
    [sym__basic_literal] = STATE(224),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(224),
    [sym_linage_counter] = STATE(224),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [15] = {
    [sym__identifier] = STATE(194),
    [sym_qualified_word] = STATE(168),
    [sym__exp_list] = STATE(426),
    [sym__exp] = STATE(194),
    [sym__binary_exp] = STATE(194),
    [sym__unary_exp] = STATE(194),
    [sym_positive_exp] = STATE(194),
    [sym_negative_exp] = STATE(194),
    [sym_add_exp] = STATE(194),
    [sym_sub_exp] = STATE(194),
    [sym_mul_exp] = STATE(194),
    [sym_div_exp] = STATE(194),
    [sym_pow_exp] = STATE(194),
    [sym__arith_x] = STATE(194),
    [sym__basic_literal] = STATE(194),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(194),
    [sym_linage_counter] = STATE(194),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [16] = {
    [sym__identifier] = STATE(285),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(285),
    [sym__binary_exp] = STATE(285),
    [sym__unary_exp] = STATE(285),
    [sym_positive_exp] = STATE(285),
    [sym_negative_exp] = STATE(285),
    [sym_add_exp] = STATE(285),
    [sym_sub_exp] = STATE(285),
    [sym_mul_exp] = STATE(285),
    [sym_div_exp] = STATE(285),
    [sym_pow_exp] = STATE(285),
    [sym__arith_x] = STATE(285),
    [sym__basic_literal] = STATE(285),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(285),
    [sym_linage_counter] = STATE(285),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [17] = {
    [sym__identifier] = STATE(228),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(228),
    [sym__binary_exp] = STATE(228),
    [sym__unary_exp] = STATE(228),
    [sym_positive_exp] = STATE(228),
    [sym_negative_exp] = STATE(228),
    [sym_add_exp] = STATE(228),
    [sym_sub_exp] = STATE(228),
    [sym_mul_exp] = STATE(228),
    [sym_div_exp] = STATE(228),
    [sym_pow_exp] = STATE(228),
    [sym__arith_x] = STATE(228),
    [sym__basic_literal] = STATE(228),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(228),
    [sym__locale_dt_args] = STATE(442),
    [sym_linage_counter] = STATE(228),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [18] = {
    [sym__identifier] = STATE(224),
    [sym_qualified_word] = STATE(168),
    [sym__exp_list] = STATE(442),
    [sym__exp] = STATE(224),
    [sym__binary_exp] = STATE(224),
    [sym__unary_exp] = STATE(224),
    [sym_positive_exp] = STATE(224),
    [sym_negative_exp] = STATE(224),
    [sym_add_exp] = STATE(224),
    [sym_sub_exp] = STATE(224),
    [sym_mul_exp] = STATE(224),
    [sym_div_exp] = STATE(224),
    [sym_pow_exp] = STATE(224),
    [sym__arith_x] = STATE(224),
    [sym__basic_literal] = STATE(224),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(224),
    [sym_linage_counter] = STATE(224),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [19] = {
    [sym__identifier] = STATE(290),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(290),
    [sym__binary_exp] = STATE(290),
    [sym__unary_exp] = STATE(290),
    [sym_positive_exp] = STATE(290),
    [sym_negative_exp] = STATE(290),
    [sym_add_exp] = STATE(290),
    [sym_sub_exp] = STATE(290),
    [sym_mul_exp] = STATE(290),
    [sym_div_exp] = STATE(290),
    [sym_pow_exp] = STATE(290),
    [sym__arith_x] = STATE(290),
    [sym__basic_literal] = STATE(290),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(290),
    [sym_linage_counter] = STATE(290),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [20] = {
    [sym__identifier] = STATE(240),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(240),
    [sym__binary_exp] = STATE(240),
    [sym__unary_exp] = STATE(240),
    [sym_positive_exp] = STATE(240),
    [sym_negative_exp] = STATE(240),
    [sym_add_exp] = STATE(240),
    [sym_sub_exp] = STATE(240),
    [sym_mul_exp] = STATE(240),
    [sym_div_exp] = STATE(240),
    [sym_pow_exp] = STATE(240),
    [sym__arith_x] = STATE(240),
    [sym__basic_literal] = STATE(240),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(240),
    [sym_linage_counter] = STATE(240),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [21] = {
    [sym__identifier] = STATE(275),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(275),
    [sym__binary_exp] = STATE(275),
    [sym__unary_exp] = STATE(275),
    [sym_positive_exp] = STATE(275),
    [sym_negative_exp] = STATE(275),
    [sym_add_exp] = STATE(275),
    [sym_sub_exp] = STATE(275),
    [sym_mul_exp] = STATE(275),
    [sym_div_exp] = STATE(275),
    [sym_pow_exp] = STATE(275),
    [sym__arith_x] = STATE(275),
    [sym__basic_literal] = STATE(275),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(275),
    [sym_linage_counter] = STATE(275),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [22] = {
    [sym__identifier] = STATE(229),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(229),
    [sym__binary_exp] = STATE(229),
    [sym__unary_exp] = STATE(229),
    [sym_positive_exp] = STATE(229),
    [sym_negative_exp] = STATE(229),
    [sym_add_exp] = STATE(229),
    [sym_sub_exp] = STATE(229),
    [sym_mul_exp] = STATE(229),
    [sym_div_exp] = STATE(229),
    [sym_pow_exp] = STATE(229),
    [sym__arith_x] = STATE(229),
    [sym__basic_literal] = STATE(229),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(229),
    [sym_linage_counter] = STATE(229),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [23] = {
    [sym__identifier] = STATE(231),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(231),
    [sym__binary_exp] = STATE(231),
    [sym__unary_exp] = STATE(231),
    [sym_positive_exp] = STATE(231),
    [sym_negative_exp] = STATE(231),
    [sym_add_exp] = STATE(231),
    [sym_sub_exp] = STATE(231),
    [sym_mul_exp] = STATE(231),
    [sym_div_exp] = STATE(231),
    [sym_pow_exp] = STATE(231),
    [sym__arith_x] = STATE(231),
    [sym__basic_literal] = STATE(231),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(231),
    [sym_linage_counter] = STATE(231),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [24] = {
    [sym__identifier] = STATE(281),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(281),
    [sym__binary_exp] = STATE(281),
    [sym__unary_exp] = STATE(281),
    [sym_positive_exp] = STATE(281),
    [sym_negative_exp] = STATE(281),
    [sym_add_exp] = STATE(281),
    [sym_sub_exp] = STATE(281),
    [sym_mul_exp] = STATE(281),
    [sym_div_exp] = STATE(281),
    [sym_pow_exp] = STATE(281),
    [sym__arith_x] = STATE(281),
    [sym__basic_literal] = STATE(281),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(281),
    [sym_linage_counter] = STATE(281),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [25] = {
    [sym__identifier] = STATE(242),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(242),
    [sym__binary_exp] = STATE(242),
    [sym__unary_exp] = STATE(242),
    [sym_positive_exp] = STATE(242),
    [sym_negative_exp] = STATE(242),
    [sym_add_exp] = STATE(242),
    [sym_sub_exp] = STATE(242),
    [sym_mul_exp] = STATE(242),
    [sym_div_exp] = STATE(242),
    [sym_pow_exp] = STATE(242),
    [sym__arith_x] = STATE(242),
    [sym__basic_literal] = STATE(242),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(242),
    [sym_linage_counter] = STATE(242),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [26] = {
    [sym__identifier] = STATE(254),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(254),
    [sym__binary_exp] = STATE(254),
    [sym__unary_exp] = STATE(254),
    [sym_positive_exp] = STATE(254),
    [sym_negative_exp] = STATE(254),
    [sym_add_exp] = STATE(254),
    [sym_sub_exp] = STATE(254),
    [sym_mul_exp] = STATE(254),
    [sym_div_exp] = STATE(254),
    [sym_pow_exp] = STATE(254),
    [sym__arith_x] = STATE(254),
    [sym__basic_literal] = STATE(254),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(254),
    [sym_linage_counter] = STATE(254),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [27] = {
    [sym__identifier] = STATE(282),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(282),
    [sym__binary_exp] = STATE(282),
    [sym__unary_exp] = STATE(282),
    [sym_positive_exp] = STATE(282),
    [sym_negative_exp] = STATE(282),
    [sym_add_exp] = STATE(282),
    [sym_sub_exp] = STATE(282),
    [sym_mul_exp] = STATE(282),
    [sym_div_exp] = STATE(282),
    [sym_pow_exp] = STATE(282),
    [sym__arith_x] = STATE(282),
    [sym__basic_literal] = STATE(282),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(282),
    [sym_linage_counter] = STATE(282),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [28] = {
    [sym__identifier] = STATE(250),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(250),
    [sym__binary_exp] = STATE(250),
    [sym__unary_exp] = STATE(250),
    [sym_positive_exp] = STATE(250),
    [sym_negative_exp] = STATE(250),
    [sym_add_exp] = STATE(250),
    [sym_sub_exp] = STATE(250),
    [sym_mul_exp] = STATE(250),
    [sym_div_exp] = STATE(250),
    [sym_pow_exp] = STATE(250),
    [sym__arith_x] = STATE(250),
    [sym__basic_literal] = STATE(250),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(250),
    [sym_linage_counter] = STATE(250),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [29] = {
    [sym__identifier] = STATE(239),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(239),
    [sym__binary_exp] = STATE(239),
    [sym__unary_exp] = STATE(239),
    [sym_positive_exp] = STATE(239),
    [sym_negative_exp] = STATE(239),
    [sym_add_exp] = STATE(239),
    [sym_sub_exp] = STATE(239),
    [sym_mul_exp] = STATE(239),
    [sym_div_exp] = STATE(239),
    [sym_pow_exp] = STATE(239),
    [sym__arith_x] = STATE(239),
    [sym__basic_literal] = STATE(239),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(239),
    [sym_linage_counter] = STATE(239),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [30] = {
    [sym__identifier] = STATE(288),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(288),
    [sym__binary_exp] = STATE(288),
    [sym__unary_exp] = STATE(288),
    [sym_positive_exp] = STATE(288),
    [sym_negative_exp] = STATE(288),
    [sym_add_exp] = STATE(288),
    [sym_sub_exp] = STATE(288),
    [sym_mul_exp] = STATE(288),
    [sym_div_exp] = STATE(288),
    [sym_pow_exp] = STATE(288),
    [sym__arith_x] = STATE(288),
    [sym__basic_literal] = STATE(288),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(288),
    [sym_linage_counter] = STATE(288),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [31] = {
    [sym__identifier] = STATE(289),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(289),
    [sym__binary_exp] = STATE(289),
    [sym__unary_exp] = STATE(289),
    [sym_positive_exp] = STATE(289),
    [sym_negative_exp] = STATE(289),
    [sym_add_exp] = STATE(289),
    [sym_sub_exp] = STATE(289),
    [sym_mul_exp] = STATE(289),
    [sym_div_exp] = STATE(289),
    [sym_pow_exp] = STATE(289),
    [sym__arith_x] = STATE(289),
    [sym__basic_literal] = STATE(289),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(289),
    [sym_linage_counter] = STATE(289),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [32] = {
    [sym__identifier] = STATE(243),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(243),
    [sym__binary_exp] = STATE(243),
    [sym__unary_exp] = STATE(243),
    [sym_positive_exp] = STATE(243),
    [sym_negative_exp] = STATE(243),
    [sym_add_exp] = STATE(243),
    [sym_sub_exp] = STATE(243),
    [sym_mul_exp] = STATE(243),
    [sym_div_exp] = STATE(243),
    [sym_pow_exp] = STATE(243),
    [sym__arith_x] = STATE(243),
    [sym__basic_literal] = STATE(243),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(243),
    [sym_linage_counter] = STATE(243),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [33] = {
    [sym__identifier] = STATE(287),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(287),
    [sym__binary_exp] = STATE(287),
    [sym__unary_exp] = STATE(287),
    [sym_positive_exp] = STATE(287),
    [sym_negative_exp] = STATE(287),
    [sym_add_exp] = STATE(287),
    [sym_sub_exp] = STATE(287),
    [sym_mul_exp] = STATE(287),
    [sym_div_exp] = STATE(287),
    [sym_pow_exp] = STATE(287),
    [sym__arith_x] = STATE(287),
    [sym__basic_literal] = STATE(287),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(287),
    [sym_linage_counter] = STATE(287),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [34] = {
    [sym__identifier] = STATE(283),
    [sym_qualified_word] = STATE(168),
    [sym__exp] = STATE(283),
    [sym__binary_exp] = STATE(283),
    [sym__unary_exp] = STATE(283),
    [sym_positive_exp] = STATE(283),
    [sym_negative_exp] = STATE(283),
    [sym_add_exp] = STATE(283),
    [sym_sub_exp] = STATE(283),
    [sym_mul_exp] = STATE(283),
    [sym_div_exp] = STATE(283),
    [sym_pow_exp] = STATE(283),
    [sym__arith_x] = STATE(283),
    [sym__basic_literal] = STATE(283),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(283),
    [sym_linage_counter] = STATE(283),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LENGTH] = STATE(45),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(105),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [35] = {
    [sym_subref] = STATE(36),
    [sym_refmod] = STATE(39),
    [sym__WORD] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_LPAREN] = ACTIONS(219),
    [sym_external_clause] = ACTIONS(215),
    [sym_global_clause] = ACTIONS(215),
    [sym_usage_clause] = ACTIONS(215),
    [sym_sign_clause] = ACTIONS(215),
    [sym_occurs_clause] = ACTIONS(215),
    [sym_justified_clause] = ACTIONS(215),
    [sym_synchronized_clause] = ACTIONS(215),
    [sym_blank_clause] = ACTIONS(215),
    [sym_based_clause] = ACTIONS(215),
    [sym_value_clause] = ACTIONS(215),
    [sym_renames_clause] = ACTIONS(215),
    [sym_any_length_clause] = ACTIONS(215),
    [sym_error] = ACTIONS(215),
    [sym_at_line_column] = ACTIONS(215),
    [sym_integer] = ACTIONS(215),
    [sym_decimal] = ACTIONS(217),
    [aux_sym_x_string_token1] = ACTIONS(217),
    [aux_sym_x_string_token2] = ACTIONS(217),
    [aux_sym_h_string_token1] = ACTIONS(217),
    [aux_sym_h_string_token2] = ACTIONS(217),
    [aux_sym_n_string_token1] = ACTIONS(217),
    [aux_sym_n_string_token2] = ACTIONS(217),
    [aux_sym_n_string_token3] = ACTIONS(217),
    [aux_sym_n_string_token4] = ACTIONS(217),
    [aux_sym_n_string_token5] = ACTIONS(217),
    [aux_sym_n_string_token6] = ACTIONS(217),
    [aux_sym_n_string_token7] = ACTIONS(217),
    [aux_sym_n_string_token8] = ACTIONS(217),
    [sym__ADDRESS] = ACTIONS(215),
    [sym__ALL] = ACTIONS(215),
    [sym__BACKGROUND_COLOR] = ACTIONS(215),
    [sym__BELL] = ACTIONS(215),
    [sym__BLANK_LINE] = ACTIONS(215),
    [sym__BLANK_SCREEN] = ACTIONS(215),
    [sym__BLINK] = ACTIONS(215),
    [sym__CONCATENATE_FUNC] = ACTIONS(215),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(215),
    [sym__DISPLAY] = ACTIONS(215),
    [sym__END_DISPLAY] = ACTIONS(215),
    [sym__ERASE] = ACTIONS(215),
    [sym__EXCEPTION] = ACTIONS(215),
    [sym__FOREGROUND_COLOR] = ACTIONS(215),
    [sym__FUNCTION_NAME] = ACTIONS(215),
    [sym__HIGHLIGHT] = ACTIONS(215),
    [anon_sym_high_DASHvalue] = ACTIONS(215),
    [anon_sym_high_DASHValue] = ACTIONS(215),
    [anon_sym_high_DASHVALUE] = ACTIONS(215),
    [anon_sym_High_DASHvalue] = ACTIONS(215),
    [anon_sym_High_DASHValue] = ACTIONS(215),
    [anon_sym_High_DASHVALUE] = ACTIONS(215),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(215),
    [anon_sym_HIGH_DASHValue] = ACTIONS(215),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(215),
    [sym__LENGTH] = ACTIONS(215),
    [sym__LINAGE_COUNTER] = ACTIONS(215),
    [sym__LINE] = ACTIONS(215),
    [sym__LINES] = ACTIONS(215),
    [sym__LOCALE_DT_FUNC] = ACTIONS(215),
    [sym__LOWER_CASE_FUNC] = ACTIONS(215),
    [sym__LOWLIGHT] = ACTIONS(215),
    [anon_sym_low_DASHvalue] = ACTIONS(215),
    [anon_sym_low_DASHValue] = ACTIONS(215),
    [anon_sym_low_DASHVALUE] = ACTIONS(215),
    [anon_sym_Low_DASHvalue] = ACTIONS(215),
    [anon_sym_Low_DASHValue] = ACTIONS(215),
    [anon_sym_Low_DASHVALUE] = ACTIONS(215),
    [anon_sym_LOW_DASHvalue] = ACTIONS(215),
    [anon_sym_LOW_DASHValue] = ACTIONS(215),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(215),
    [sym__MOVE] = ACTIONS(215),
    [sym__NOT_EXCEPTION] = ACTIONS(215),
    [sym__NO_ADVANCING] = ACTIONS(215),
    [sym__NUMVALC_FUNC] = ACTIONS(215),
    [sym__OVERLINE] = ACTIONS(215),
    [sym__PIC] = ACTIONS(215),
    [sym__PICTURE] = ACTIONS(215),
    [anon_sym_quote] = ACTIONS(215),
    [anon_sym_QUOTE] = ACTIONS(215),
    [anon_sym_Quote] = ACTIONS(215),
    [sym__REDEFINES] = ACTIONS(215),
    [sym__REVERSE_FUNC] = ACTIONS(215),
    [sym__REVERSE_VIDEO] = ACTIONS(215),
    [sym__SCROLL] = ACTIONS(215),
    [anon_sym_space] = ACTIONS(215),
    [anon_sym_SPACE] = ACTIONS(215),
    [anon_sym_Space] = ACTIONS(215),
    [sym__STOP] = ACTIONS(215),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(215),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(215),
    [anon_sym_null] = ACTIONS(215),
    [anon_sym_Null] = ACTIONS(215),
    [anon_sym_NULL] = ACTIONS(215),
    [sym__TRIM_FUNCTION] = ACTIONS(215),
    [sym__UNDERLINE] = ACTIONS(215),
    [sym__UPON] = ACTIONS(215),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(215),
    [sym__UPON_COMMAND_LINE] = ACTIONS(215),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(215),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(215),
    [sym__UPPER_CASE_FUNC] = ACTIONS(215),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(215),
    [sym__WITH] = ACTIONS(215),
    [anon_sym_zero] = ACTIONS(215),
    [anon_sym_ZERO] = ACTIONS(215),
    [anon_sym_Zero] = ACTIONS(215),
  },
  [36] = {
    [sym_refmod] = STATE(38),
    [sym__WORD] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(225),
    [sym_external_clause] = ACTIONS(221),
    [sym_global_clause] = ACTIONS(221),
    [sym_usage_clause] = ACTIONS(221),
    [sym_sign_clause] = ACTIONS(221),
    [sym_occurs_clause] = ACTIONS(221),
    [sym_justified_clause] = ACTIONS(221),
    [sym_synchronized_clause] = ACTIONS(221),
    [sym_blank_clause] = ACTIONS(221),
    [sym_based_clause] = ACTIONS(221),
    [sym_value_clause] = ACTIONS(221),
    [sym_renames_clause] = ACTIONS(221),
    [sym_any_length_clause] = ACTIONS(221),
    [sym_error] = ACTIONS(221),
    [sym_at_line_column] = ACTIONS(221),
    [sym_integer] = ACTIONS(221),
    [sym_decimal] = ACTIONS(223),
    [aux_sym_x_string_token1] = ACTIONS(223),
    [aux_sym_x_string_token2] = ACTIONS(223),
    [aux_sym_h_string_token1] = ACTIONS(223),
    [aux_sym_h_string_token2] = ACTIONS(223),
    [aux_sym_n_string_token1] = ACTIONS(223),
    [aux_sym_n_string_token2] = ACTIONS(223),
    [aux_sym_n_string_token3] = ACTIONS(223),
    [aux_sym_n_string_token4] = ACTIONS(223),
    [aux_sym_n_string_token5] = ACTIONS(223),
    [aux_sym_n_string_token6] = ACTIONS(223),
    [aux_sym_n_string_token7] = ACTIONS(223),
    [aux_sym_n_string_token8] = ACTIONS(223),
    [sym__ADDRESS] = ACTIONS(221),
    [sym__ALL] = ACTIONS(221),
    [sym__BACKGROUND_COLOR] = ACTIONS(221),
    [sym__BELL] = ACTIONS(221),
    [sym__BLANK_LINE] = ACTIONS(221),
    [sym__BLANK_SCREEN] = ACTIONS(221),
    [sym__BLINK] = ACTIONS(221),
    [sym__CONCATENATE_FUNC] = ACTIONS(221),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(221),
    [sym__DISPLAY] = ACTIONS(221),
    [sym__END_DISPLAY] = ACTIONS(221),
    [sym__ERASE] = ACTIONS(221),
    [sym__EXCEPTION] = ACTIONS(221),
    [sym__FOREGROUND_COLOR] = ACTIONS(221),
    [sym__FUNCTION_NAME] = ACTIONS(221),
    [sym__HIGHLIGHT] = ACTIONS(221),
    [anon_sym_high_DASHvalue] = ACTIONS(221),
    [anon_sym_high_DASHValue] = ACTIONS(221),
    [anon_sym_high_DASHVALUE] = ACTIONS(221),
    [anon_sym_High_DASHvalue] = ACTIONS(221),
    [anon_sym_High_DASHValue] = ACTIONS(221),
    [anon_sym_High_DASHVALUE] = ACTIONS(221),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(221),
    [anon_sym_HIGH_DASHValue] = ACTIONS(221),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(221),
    [sym__LENGTH] = ACTIONS(221),
    [sym__LINAGE_COUNTER] = ACTIONS(221),
    [sym__LINE] = ACTIONS(221),
    [sym__LINES] = ACTIONS(221),
    [sym__LOCALE_DT_FUNC] = ACTIONS(221),
    [sym__LOWER_CASE_FUNC] = ACTIONS(221),
    [sym__LOWLIGHT] = ACTIONS(221),
    [anon_sym_low_DASHvalue] = ACTIONS(221),
    [anon_sym_low_DASHValue] = ACTIONS(221),
    [anon_sym_low_DASHVALUE] = ACTIONS(221),
    [anon_sym_Low_DASHvalue] = ACTIONS(221),
    [anon_sym_Low_DASHValue] = ACTIONS(221),
    [anon_sym_Low_DASHVALUE] = ACTIONS(221),
    [anon_sym_LOW_DASHvalue] = ACTIONS(221),
    [anon_sym_LOW_DASHValue] = ACTIONS(221),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(221),
    [sym__MOVE] = ACTIONS(221),
    [sym__NOT_EXCEPTION] = ACTIONS(221),
    [sym__NO_ADVANCING] = ACTIONS(221),
    [sym__NUMVALC_FUNC] = ACTIONS(221),
    [sym__OVERLINE] = ACTIONS(221),
    [sym__PIC] = ACTIONS(221),
    [sym__PICTURE] = ACTIONS(221),
    [anon_sym_quote] = ACTIONS(221),
    [anon_sym_QUOTE] = ACTIONS(221),
    [anon_sym_Quote] = ACTIONS(221),
    [sym__REDEFINES] = ACTIONS(221),
    [sym__REVERSE_FUNC] = ACTIONS(221),
    [sym__REVERSE_VIDEO] = ACTIONS(221),
    [sym__SCROLL] = ACTIONS(221),
    [anon_sym_space] = ACTIONS(221),
    [anon_sym_SPACE] = ACTIONS(221),
    [anon_sym_Space] = ACTIONS(221),
    [sym__STOP] = ACTIONS(221),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(221),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(221),
    [anon_sym_null] = ACTIONS(221),
    [anon_sym_Null] = ACTIONS(221),
    [anon_sym_NULL] = ACTIONS(221),
    [sym__TRIM_FUNCTION] = ACTIONS(221),
    [sym__UNDERLINE] = ACTIONS(221),
    [sym__UPON] = ACTIONS(221),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(221),
    [sym__UPON_COMMAND_LINE] = ACTIONS(221),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(221),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(221),
    [sym__UPPER_CASE_FUNC] = ACTIONS(221),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(221),
    [sym__WITH] = ACTIONS(221),
    [anon_sym_zero] = ACTIONS(221),
    [anon_sym_ZERO] = ACTIONS(221),
    [anon_sym_Zero] = ACTIONS(221),
  },
  [37] = {
    [sym__WORD] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(229),
    [anon_sym_LPAREN] = ACTIONS(229),
    [sym_external_clause] = ACTIONS(227),
    [sym_global_clause] = ACTIONS(227),
    [sym_usage_clause] = ACTIONS(227),
    [sym_sign_clause] = ACTIONS(227),
    [sym_occurs_clause] = ACTIONS(227),
    [sym_justified_clause] = ACTIONS(227),
    [sym_synchronized_clause] = ACTIONS(227),
    [sym_blank_clause] = ACTIONS(227),
    [sym_based_clause] = ACTIONS(227),
    [sym_value_clause] = ACTIONS(227),
    [sym_renames_clause] = ACTIONS(227),
    [sym_any_length_clause] = ACTIONS(227),
    [sym_error] = ACTIONS(227),
    [sym_at_line_column] = ACTIONS(227),
    [sym_integer] = ACTIONS(227),
    [sym_decimal] = ACTIONS(229),
    [aux_sym_x_string_token1] = ACTIONS(229),
    [aux_sym_x_string_token2] = ACTIONS(229),
    [aux_sym_h_string_token1] = ACTIONS(229),
    [aux_sym_h_string_token2] = ACTIONS(229),
    [aux_sym_n_string_token1] = ACTIONS(229),
    [aux_sym_n_string_token2] = ACTIONS(229),
    [aux_sym_n_string_token3] = ACTIONS(229),
    [aux_sym_n_string_token4] = ACTIONS(229),
    [aux_sym_n_string_token5] = ACTIONS(229),
    [aux_sym_n_string_token6] = ACTIONS(229),
    [aux_sym_n_string_token7] = ACTIONS(229),
    [aux_sym_n_string_token8] = ACTIONS(229),
    [sym__ADDRESS] = ACTIONS(227),
    [sym__ALL] = ACTIONS(227),
    [sym__BACKGROUND_COLOR] = ACTIONS(227),
    [sym__BELL] = ACTIONS(227),
    [sym__BLANK_LINE] = ACTIONS(227),
    [sym__BLANK_SCREEN] = ACTIONS(227),
    [sym__BLINK] = ACTIONS(227),
    [sym__CONCATENATE_FUNC] = ACTIONS(227),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(227),
    [sym__DISPLAY] = ACTIONS(227),
    [sym__END_DISPLAY] = ACTIONS(227),
    [sym__ERASE] = ACTIONS(227),
    [sym__EXCEPTION] = ACTIONS(227),
    [sym__FOREGROUND_COLOR] = ACTIONS(227),
    [sym__FUNCTION_NAME] = ACTIONS(227),
    [sym__HIGHLIGHT] = ACTIONS(227),
    [anon_sym_high_DASHvalue] = ACTIONS(227),
    [anon_sym_high_DASHValue] = ACTIONS(227),
    [anon_sym_high_DASHVALUE] = ACTIONS(227),
    [anon_sym_High_DASHvalue] = ACTIONS(227),
    [anon_sym_High_DASHValue] = ACTIONS(227),
    [anon_sym_High_DASHVALUE] = ACTIONS(227),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(227),
    [anon_sym_HIGH_DASHValue] = ACTIONS(227),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(227),
    [sym__LENGTH] = ACTIONS(227),
    [sym__LINAGE_COUNTER] = ACTIONS(227),
    [sym__LINE] = ACTIONS(227),
    [sym__LINES] = ACTIONS(227),
    [sym__LOCALE_DT_FUNC] = ACTIONS(227),
    [sym__LOWER_CASE_FUNC] = ACTIONS(227),
    [sym__LOWLIGHT] = ACTIONS(227),
    [anon_sym_low_DASHvalue] = ACTIONS(227),
    [anon_sym_low_DASHValue] = ACTIONS(227),
    [anon_sym_low_DASHVALUE] = ACTIONS(227),
    [anon_sym_Low_DASHvalue] = ACTIONS(227),
    [anon_sym_Low_DASHValue] = ACTIONS(227),
    [anon_sym_Low_DASHVALUE] = ACTIONS(227),
    [anon_sym_LOW_DASHvalue] = ACTIONS(227),
    [anon_sym_LOW_DASHValue] = ACTIONS(227),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(227),
    [sym__MOVE] = ACTIONS(227),
    [sym__NOT_EXCEPTION] = ACTIONS(227),
    [sym__NO_ADVANCING] = ACTIONS(227),
    [sym__NUMVALC_FUNC] = ACTIONS(227),
    [sym__OVERLINE] = ACTIONS(227),
    [sym__PIC] = ACTIONS(227),
    [sym__PICTURE] = ACTIONS(227),
    [anon_sym_quote] = ACTIONS(227),
    [anon_sym_QUOTE] = ACTIONS(227),
    [anon_sym_Quote] = ACTIONS(227),
    [sym__REDEFINES] = ACTIONS(227),
    [sym__REVERSE_FUNC] = ACTIONS(227),
    [sym__REVERSE_VIDEO] = ACTIONS(227),
    [sym__SCROLL] = ACTIONS(227),
    [anon_sym_space] = ACTIONS(227),
    [anon_sym_SPACE] = ACTIONS(227),
    [anon_sym_Space] = ACTIONS(227),
    [sym__STOP] = ACTIONS(227),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(227),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(227),
    [anon_sym_null] = ACTIONS(227),
    [anon_sym_Null] = ACTIONS(227),
    [anon_sym_NULL] = ACTIONS(227),
    [sym__TRIM_FUNCTION] = ACTIONS(227),
    [sym__UNDERLINE] = ACTIONS(227),
    [sym__UPON] = ACTIONS(227),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(227),
    [sym__UPON_COMMAND_LINE] = ACTIONS(227),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(227),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(227),
    [sym__UPPER_CASE_FUNC] = ACTIONS(227),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(227),
    [sym__WITH] = ACTIONS(227),
    [anon_sym_zero] = ACTIONS(227),
    [anon_sym_ZERO] = ACTIONS(227),
    [anon_sym_Zero] = ACTIONS(227),
  },
  [38] = {
    [sym__WORD] = ACTIONS(231),
    [anon_sym_DOT] = ACTIONS(233),
    [sym_external_clause] = ACTIONS(231),
    [sym_global_clause] = ACTIONS(231),
    [sym_usage_clause] = ACTIONS(231),
    [sym_sign_clause] = ACTIONS(231),
    [sym_occurs_clause] = ACTIONS(231),
    [sym_justified_clause] = ACTIONS(231),
    [sym_synchronized_clause] = ACTIONS(231),
    [sym_blank_clause] = ACTIONS(231),
    [sym_based_clause] = ACTIONS(231),
    [sym_value_clause] = ACTIONS(231),
    [sym_renames_clause] = ACTIONS(231),
    [sym_any_length_clause] = ACTIONS(231),
    [sym_error] = ACTIONS(231),
    [sym_at_line_column] = ACTIONS(231),
    [sym_integer] = ACTIONS(231),
    [sym_decimal] = ACTIONS(233),
    [aux_sym_x_string_token1] = ACTIONS(233),
    [aux_sym_x_string_token2] = ACTIONS(233),
    [aux_sym_h_string_token1] = ACTIONS(233),
    [aux_sym_h_string_token2] = ACTIONS(233),
    [aux_sym_n_string_token1] = ACTIONS(233),
    [aux_sym_n_string_token2] = ACTIONS(233),
    [aux_sym_n_string_token3] = ACTIONS(233),
    [aux_sym_n_string_token4] = ACTIONS(233),
    [aux_sym_n_string_token5] = ACTIONS(233),
    [aux_sym_n_string_token6] = ACTIONS(233),
    [aux_sym_n_string_token7] = ACTIONS(233),
    [aux_sym_n_string_token8] = ACTIONS(233),
    [sym__ADDRESS] = ACTIONS(231),
    [sym__ALL] = ACTIONS(231),
    [sym__BACKGROUND_COLOR] = ACTIONS(231),
    [sym__BELL] = ACTIONS(231),
    [sym__BLANK_LINE] = ACTIONS(231),
    [sym__BLANK_SCREEN] = ACTIONS(231),
    [sym__BLINK] = ACTIONS(231),
    [sym__CONCATENATE_FUNC] = ACTIONS(231),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(231),
    [sym__DISPLAY] = ACTIONS(231),
    [sym__END_DISPLAY] = ACTIONS(231),
    [sym__ERASE] = ACTIONS(231),
    [sym__EXCEPTION] = ACTIONS(231),
    [sym__FOREGROUND_COLOR] = ACTIONS(231),
    [sym__FUNCTION_NAME] = ACTIONS(231),
    [sym__HIGHLIGHT] = ACTIONS(231),
    [anon_sym_high_DASHvalue] = ACTIONS(231),
    [anon_sym_high_DASHValue] = ACTIONS(231),
    [anon_sym_high_DASHVALUE] = ACTIONS(231),
    [anon_sym_High_DASHvalue] = ACTIONS(231),
    [anon_sym_High_DASHValue] = ACTIONS(231),
    [anon_sym_High_DASHVALUE] = ACTIONS(231),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(231),
    [anon_sym_HIGH_DASHValue] = ACTIONS(231),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(231),
    [sym__LENGTH] = ACTIONS(231),
    [sym__LINAGE_COUNTER] = ACTIONS(231),
    [sym__LINE] = ACTIONS(231),
    [sym__LINES] = ACTIONS(231),
    [sym__LOCALE_DT_FUNC] = ACTIONS(231),
    [sym__LOWER_CASE_FUNC] = ACTIONS(231),
    [sym__LOWLIGHT] = ACTIONS(231),
    [anon_sym_low_DASHvalue] = ACTIONS(231),
    [anon_sym_low_DASHValue] = ACTIONS(231),
    [anon_sym_low_DASHVALUE] = ACTIONS(231),
    [anon_sym_Low_DASHvalue] = ACTIONS(231),
    [anon_sym_Low_DASHValue] = ACTIONS(231),
    [anon_sym_Low_DASHVALUE] = ACTIONS(231),
    [anon_sym_LOW_DASHvalue] = ACTIONS(231),
    [anon_sym_LOW_DASHValue] = ACTIONS(231),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(231),
    [sym__MOVE] = ACTIONS(231),
    [sym__NOT_EXCEPTION] = ACTIONS(231),
    [sym__NO_ADVANCING] = ACTIONS(231),
    [sym__NUMVALC_FUNC] = ACTIONS(231),
    [sym__OVERLINE] = ACTIONS(231),
    [sym__PIC] = ACTIONS(231),
    [sym__PICTURE] = ACTIONS(231),
    [anon_sym_quote] = ACTIONS(231),
    [anon_sym_QUOTE] = ACTIONS(231),
    [anon_sym_Quote] = ACTIONS(231),
    [sym__REDEFINES] = ACTIONS(231),
    [sym__REVERSE_FUNC] = ACTIONS(231),
    [sym__REVERSE_VIDEO] = ACTIONS(231),
    [sym__SCROLL] = ACTIONS(231),
    [anon_sym_space] = ACTIONS(231),
    [anon_sym_SPACE] = ACTIONS(231),
    [anon_sym_Space] = ACTIONS(231),
    [sym__STOP] = ACTIONS(231),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(231),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(231),
    [anon_sym_null] = ACTIONS(231),
    [anon_sym_Null] = ACTIONS(231),
    [anon_sym_NULL] = ACTIONS(231),
    [sym__TRIM_FUNCTION] = ACTIONS(231),
    [sym__UNDERLINE] = ACTIONS(231),
    [sym__UPON] = ACTIONS(231),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(231),
    [sym__UPON_COMMAND_LINE] = ACTIONS(231),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(231),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(231),
    [sym__UPPER_CASE_FUNC] = ACTIONS(231),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(231),
    [sym__WITH] = ACTIONS(231),
    [anon_sym_zero] = ACTIONS(231),
    [anon_sym_ZERO] = ACTIONS(231),
    [anon_sym_Zero] = ACTIONS(231),
  },
  [39] = {
    [sym__WORD] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(223),
    [sym_external_clause] = ACTIONS(221),
    [sym_global_clause] = ACTIONS(221),
    [sym_usage_clause] = ACTIONS(221),
    [sym_sign_clause] = ACTIONS(221),
    [sym_occurs_clause] = ACTIONS(221),
    [sym_justified_clause] = ACTIONS(221),
    [sym_synchronized_clause] = ACTIONS(221),
    [sym_blank_clause] = ACTIONS(221),
    [sym_based_clause] = ACTIONS(221),
    [sym_value_clause] = ACTIONS(221),
    [sym_renames_clause] = ACTIONS(221),
    [sym_any_length_clause] = ACTIONS(221),
    [sym_error] = ACTIONS(221),
    [sym_at_line_column] = ACTIONS(221),
    [sym_integer] = ACTIONS(221),
    [sym_decimal] = ACTIONS(223),
    [aux_sym_x_string_token1] = ACTIONS(223),
    [aux_sym_x_string_token2] = ACTIONS(223),
    [aux_sym_h_string_token1] = ACTIONS(223),
    [aux_sym_h_string_token2] = ACTIONS(223),
    [aux_sym_n_string_token1] = ACTIONS(223),
    [aux_sym_n_string_token2] = ACTIONS(223),
    [aux_sym_n_string_token3] = ACTIONS(223),
    [aux_sym_n_string_token4] = ACTIONS(223),
    [aux_sym_n_string_token5] = ACTIONS(223),
    [aux_sym_n_string_token6] = ACTIONS(223),
    [aux_sym_n_string_token7] = ACTIONS(223),
    [aux_sym_n_string_token8] = ACTIONS(223),
    [sym__ADDRESS] = ACTIONS(221),
    [sym__ALL] = ACTIONS(221),
    [sym__BACKGROUND_COLOR] = ACTIONS(221),
    [sym__BELL] = ACTIONS(221),
    [sym__BLANK_LINE] = ACTIONS(221),
    [sym__BLANK_SCREEN] = ACTIONS(221),
    [sym__BLINK] = ACTIONS(221),
    [sym__CONCATENATE_FUNC] = ACTIONS(221),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(221),
    [sym__DISPLAY] = ACTIONS(221),
    [sym__END_DISPLAY] = ACTIONS(221),
    [sym__ERASE] = ACTIONS(221),
    [sym__EXCEPTION] = ACTIONS(221),
    [sym__FOREGROUND_COLOR] = ACTIONS(221),
    [sym__FUNCTION_NAME] = ACTIONS(221),
    [sym__HIGHLIGHT] = ACTIONS(221),
    [anon_sym_high_DASHvalue] = ACTIONS(221),
    [anon_sym_high_DASHValue] = ACTIONS(221),
    [anon_sym_high_DASHVALUE] = ACTIONS(221),
    [anon_sym_High_DASHvalue] = ACTIONS(221),
    [anon_sym_High_DASHValue] = ACTIONS(221),
    [anon_sym_High_DASHVALUE] = ACTIONS(221),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(221),
    [anon_sym_HIGH_DASHValue] = ACTIONS(221),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(221),
    [sym__LENGTH] = ACTIONS(221),
    [sym__LINAGE_COUNTER] = ACTIONS(221),
    [sym__LINE] = ACTIONS(221),
    [sym__LINES] = ACTIONS(221),
    [sym__LOCALE_DT_FUNC] = ACTIONS(221),
    [sym__LOWER_CASE_FUNC] = ACTIONS(221),
    [sym__LOWLIGHT] = ACTIONS(221),
    [anon_sym_low_DASHvalue] = ACTIONS(221),
    [anon_sym_low_DASHValue] = ACTIONS(221),
    [anon_sym_low_DASHVALUE] = ACTIONS(221),
    [anon_sym_Low_DASHvalue] = ACTIONS(221),
    [anon_sym_Low_DASHValue] = ACTIONS(221),
    [anon_sym_Low_DASHVALUE] = ACTIONS(221),
    [anon_sym_LOW_DASHvalue] = ACTIONS(221),
    [anon_sym_LOW_DASHValue] = ACTIONS(221),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(221),
    [sym__MOVE] = ACTIONS(221),
    [sym__NOT_EXCEPTION] = ACTIONS(221),
    [sym__NO_ADVANCING] = ACTIONS(221),
    [sym__NUMVALC_FUNC] = ACTIONS(221),
    [sym__OVERLINE] = ACTIONS(221),
    [sym__PIC] = ACTIONS(221),
    [sym__PICTURE] = ACTIONS(221),
    [anon_sym_quote] = ACTIONS(221),
    [anon_sym_QUOTE] = ACTIONS(221),
    [anon_sym_Quote] = ACTIONS(221),
    [sym__REDEFINES] = ACTIONS(221),
    [sym__REVERSE_FUNC] = ACTIONS(221),
    [sym__REVERSE_VIDEO] = ACTIONS(221),
    [sym__SCROLL] = ACTIONS(221),
    [anon_sym_space] = ACTIONS(221),
    [anon_sym_SPACE] = ACTIONS(221),
    [anon_sym_Space] = ACTIONS(221),
    [sym__STOP] = ACTIONS(221),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(221),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(221),
    [anon_sym_null] = ACTIONS(221),
    [anon_sym_Null] = ACTIONS(221),
    [anon_sym_NULL] = ACTIONS(221),
    [sym__TRIM_FUNCTION] = ACTIONS(221),
    [sym__UNDERLINE] = ACTIONS(221),
    [sym__UPON] = ACTIONS(221),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(221),
    [sym__UPON_COMMAND_LINE] = ACTIONS(221),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(221),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(221),
    [sym__UPPER_CASE_FUNC] = ACTIONS(221),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(221),
    [sym__WITH] = ACTIONS(221),
    [anon_sym_zero] = ACTIONS(221),
    [anon_sym_ZERO] = ACTIONS(221),
    [anon_sym_Zero] = ACTIONS(221),
  },
  [40] = {
    [sym__WORD] = ACTIONS(235),
    [anon_sym_DOT] = ACTIONS(237),
    [sym_external_clause] = ACTIONS(235),
    [sym_global_clause] = ACTIONS(235),
    [sym_usage_clause] = ACTIONS(235),
    [sym_sign_clause] = ACTIONS(235),
    [sym_occurs_clause] = ACTIONS(235),
    [sym_justified_clause] = ACTIONS(235),
    [sym_synchronized_clause] = ACTIONS(235),
    [sym_blank_clause] = ACTIONS(235),
    [sym_based_clause] = ACTIONS(235),
    [sym_value_clause] = ACTIONS(235),
    [sym_renames_clause] = ACTIONS(235),
    [sym_any_length_clause] = ACTIONS(235),
    [sym_error] = ACTIONS(235),
    [sym_at_line_column] = ACTIONS(235),
    [sym_integer] = ACTIONS(235),
    [sym_decimal] = ACTIONS(237),
    [aux_sym_x_string_token1] = ACTIONS(237),
    [aux_sym_x_string_token2] = ACTIONS(237),
    [aux_sym_h_string_token1] = ACTIONS(237),
    [aux_sym_h_string_token2] = ACTIONS(237),
    [aux_sym_n_string_token1] = ACTIONS(237),
    [aux_sym_n_string_token2] = ACTIONS(237),
    [aux_sym_n_string_token3] = ACTIONS(237),
    [aux_sym_n_string_token4] = ACTIONS(237),
    [aux_sym_n_string_token5] = ACTIONS(237),
    [aux_sym_n_string_token6] = ACTIONS(237),
    [aux_sym_n_string_token7] = ACTIONS(237),
    [aux_sym_n_string_token8] = ACTIONS(237),
    [sym__ADDRESS] = ACTIONS(235),
    [sym__ALL] = ACTIONS(235),
    [sym__BACKGROUND_COLOR] = ACTIONS(235),
    [sym__BELL] = ACTIONS(235),
    [sym__BLANK_LINE] = ACTIONS(235),
    [sym__BLANK_SCREEN] = ACTIONS(235),
    [sym__BLINK] = ACTIONS(235),
    [sym__CONCATENATE_FUNC] = ACTIONS(235),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(235),
    [sym__DISPLAY] = ACTIONS(235),
    [sym__END_DISPLAY] = ACTIONS(235),
    [sym__ERASE] = ACTIONS(235),
    [sym__EXCEPTION] = ACTIONS(235),
    [sym__FOREGROUND_COLOR] = ACTIONS(235),
    [sym__FUNCTION_NAME] = ACTIONS(235),
    [sym__HIGHLIGHT] = ACTIONS(235),
    [anon_sym_high_DASHvalue] = ACTIONS(235),
    [anon_sym_high_DASHValue] = ACTIONS(235),
    [anon_sym_high_DASHVALUE] = ACTIONS(235),
    [anon_sym_High_DASHvalue] = ACTIONS(235),
    [anon_sym_High_DASHValue] = ACTIONS(235),
    [anon_sym_High_DASHVALUE] = ACTIONS(235),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(235),
    [anon_sym_HIGH_DASHValue] = ACTIONS(235),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(235),
    [sym__LENGTH] = ACTIONS(235),
    [sym__LINAGE_COUNTER] = ACTIONS(235),
    [sym__LINE] = ACTIONS(235),
    [sym__LINES] = ACTIONS(235),
    [sym__LOCALE_DT_FUNC] = ACTIONS(235),
    [sym__LOWER_CASE_FUNC] = ACTIONS(235),
    [sym__LOWLIGHT] = ACTIONS(235),
    [anon_sym_low_DASHvalue] = ACTIONS(235),
    [anon_sym_low_DASHValue] = ACTIONS(235),
    [anon_sym_low_DASHVALUE] = ACTIONS(235),
    [anon_sym_Low_DASHvalue] = ACTIONS(235),
    [anon_sym_Low_DASHValue] = ACTIONS(235),
    [anon_sym_Low_DASHVALUE] = ACTIONS(235),
    [anon_sym_LOW_DASHvalue] = ACTIONS(235),
    [anon_sym_LOW_DASHValue] = ACTIONS(235),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(235),
    [sym__MOVE] = ACTIONS(235),
    [sym__NOT_EXCEPTION] = ACTIONS(235),
    [sym__NO_ADVANCING] = ACTIONS(235),
    [sym__NUMVALC_FUNC] = ACTIONS(235),
    [sym__OVERLINE] = ACTIONS(235),
    [sym__PIC] = ACTIONS(235),
    [sym__PICTURE] = ACTIONS(235),
    [anon_sym_quote] = ACTIONS(235),
    [anon_sym_QUOTE] = ACTIONS(235),
    [anon_sym_Quote] = ACTIONS(235),
    [sym__REDEFINES] = ACTIONS(235),
    [sym__REVERSE_FUNC] = ACTIONS(235),
    [sym__REVERSE_VIDEO] = ACTIONS(235),
    [sym__SCROLL] = ACTIONS(235),
    [anon_sym_space] = ACTIONS(235),
    [anon_sym_SPACE] = ACTIONS(235),
    [anon_sym_Space] = ACTIONS(235),
    [sym__STOP] = ACTIONS(235),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(235),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(235),
    [anon_sym_null] = ACTIONS(235),
    [anon_sym_Null] = ACTIONS(235),
    [anon_sym_NULL] = ACTIONS(235),
    [sym__TRIM_FUNCTION] = ACTIONS(235),
    [sym__UNDERLINE] = ACTIONS(235),
    [sym__UPON] = ACTIONS(235),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(235),
    [sym__UPON_COMMAND_LINE] = ACTIONS(235),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(235),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(235),
    [sym__UPPER_CASE_FUNC] = ACTIONS(235),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(235),
    [sym__WITH] = ACTIONS(235),
    [anon_sym_zero] = ACTIONS(235),
    [anon_sym_ZERO] = ACTIONS(235),
    [anon_sym_Zero] = ACTIONS(235),
  },
  [41] = {
    [sym__identifier] = STATE(68),
    [sym_qualified_word] = STATE(35),
    [sym__display_body] = STATE(304),
    [sym__id_or_lit] = STATE(324),
    [sym__x] = STATE(2),
    [sym__basic_literal] = STATE(68),
    [sym__basic_value] = STATE(57),
    [sym__literal] = STATE(68),
    [sym_function_] = STATE(2),
    [sym_linage_counter] = STATE(2),
    [sym__LITERAL] = STATE(57),
    [sym_number] = STATE(57),
    [sym__string] = STATE(57),
    [sym_x_string] = STATE(57),
    [sym_h_string] = STATE(57),
    [sym_n_string] = STATE(57),
    [sym__HIGH_VALUE] = STATE(63),
    [sym__LOW_VALUE] = STATE(62),
    [sym__QUOTE] = STATE(66),
    [sym__SPACE] = STATE(67),
    [sym__TOK_NULL] = STATE(65),
    [sym__ZERO] = STATE(49),
    [sym_ALL] = STATE(88),
    [sym_CONCATENATE_FUNC] = STATE(386),
    [sym_CURRENT_DATE_FUNC] = STATE(72),
    [sym_FUNCTION_NAME] = STATE(71),
    [sym_HIGH_VALUE] = STATE(57),
    [sym_LOCALE_DT_FUNC] = STATE(387),
    [sym_LOWER_CASE_FUNC] = STATE(389),
    [sym_LOW_VALUE] = STATE(57),
    [sym_NUMVALC_FUNC] = STATE(392),
    [sym_QUOTE] = STATE(57),
    [sym_REVERSE_FUNC] = STATE(389),
    [sym_SPACE] = STATE(57),
    [sym_SUBSTITUTE_FUNC] = STATE(386),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(386),
    [sym_TOK_NULL] = STATE(57),
    [sym_TRIM_FUNCTION] = STATE(393),
    [sym_UPPER_CASE_FUNC] = STATE(389),
    [sym_WHEN_COMPILED_FUNC] = STATE(72),
    [sym_ZERO] = STATE(57),
    [aux_sym__display_body_repeat1] = STATE(2),
    [sym__WORD] = ACTIONS(7),
    [sym_integer] = ACTIONS(13),
    [sym_decimal] = ACTIONS(15),
    [aux_sym_x_string_token1] = ACTIONS(17),
    [aux_sym_x_string_token2] = ACTIONS(17),
    [aux_sym_h_string_token1] = ACTIONS(19),
    [aux_sym_h_string_token2] = ACTIONS(19),
    [aux_sym_n_string_token1] = ACTIONS(21),
    [aux_sym_n_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token3] = ACTIONS(21),
    [aux_sym_n_string_token4] = ACTIONS(21),
    [aux_sym_n_string_token5] = ACTIONS(21),
    [aux_sym_n_string_token6] = ACTIONS(21),
    [aux_sym_n_string_token7] = ACTIONS(21),
    [aux_sym_n_string_token8] = ACTIONS(21),
    [sym__ADDRESS] = ACTIONS(23),
    [sym__ALL] = ACTIONS(25),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(29),
    [sym__FUNCTION_NAME] = ACTIONS(35),
    [anon_sym_high_DASHvalue] = ACTIONS(37),
    [anon_sym_high_DASHValue] = ACTIONS(37),
    [anon_sym_high_DASHVALUE] = ACTIONS(37),
    [anon_sym_High_DASHvalue] = ACTIONS(37),
    [anon_sym_High_DASHValue] = ACTIONS(37),
    [anon_sym_High_DASHVALUE] = ACTIONS(37),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(37),
    [anon_sym_HIGH_DASHValue] = ACTIONS(37),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(37),
    [sym__LENGTH] = ACTIONS(39),
    [sym__LINAGE_COUNTER] = ACTIONS(41),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(47),
    [anon_sym_low_DASHValue] = ACTIONS(47),
    [anon_sym_low_DASHVALUE] = ACTIONS(47),
    [anon_sym_Low_DASHvalue] = ACTIONS(47),
    [anon_sym_Low_DASHValue] = ACTIONS(47),
    [anon_sym_Low_DASHVALUE] = ACTIONS(47),
    [anon_sym_LOW_DASHvalue] = ACTIONS(47),
    [anon_sym_LOW_DASHValue] = ACTIONS(47),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(47),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(55),
    [anon_sym_QUOTE] = ACTIONS(55),
    [anon_sym_Quote] = ACTIONS(55),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(59),
    [anon_sym_SPACE] = ACTIONS(59),
    [anon_sym_Space] = ACTIONS(59),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(65),
    [anon_sym_Null] = ACTIONS(65),
    [anon_sym_NULL] = ACTIONS(65),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(73),
    [anon_sym_zero] = ACTIONS(77),
    [anon_sym_ZERO] = ACTIONS(77),
    [anon_sym_Zero] = ACTIONS(77),
  },
  [42] = {
    [sym__identifier] = STATE(395),
    [sym_qualified_word] = STATE(168),
    [sym__move_body] = STATE(310),
    [sym__x] = STATE(395),
    [sym__basic_literal] = STATE(395),
    [sym__basic_value] = STATE(174),
    [sym__literal] = STATE(395),
    [sym_function_] = STATE(395),
    [sym_linage_counter] = STATE(395),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_ALL] = STATE(89),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__ADDRESS] = ACTIONS(239),
    [sym__ALL] = ACTIONS(25),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CORRESPONDING] = ACTIONS(241),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(243),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [43] = {
    [sym__identifier] = STATE(416),
    [sym_qualified_word] = STATE(168),
    [sym__x] = STATE(416),
    [sym__basic_literal] = STATE(416),
    [sym__basic_value] = STATE(174),
    [sym__literal] = STATE(416),
    [sym_function_] = STATE(416),
    [sym_linage_counter] = STATE(416),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_ALL] = STATE(89),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__ADDRESS] = ACTIONS(239),
    [sym__ALL] = ACTIONS(25),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LENGTH] = ACTIONS(243),
    [sym__LINAGE_COUNTER] = ACTIONS(107),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [44] = {
    [sym__identifier] = STATE(381),
    [sym_qualified_word] = STATE(168),
    [sym__basic_literal] = STATE(381),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(381),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [sym__OF] = ACTIONS(245),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [45] = {
    [sym__identifier] = STATE(244),
    [sym_qualified_word] = STATE(168),
    [sym__basic_literal] = STATE(244),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(244),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [sym__OF] = ACTIONS(247),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [46] = {
    [sym__WORD] = ACTIONS(249),
    [anon_sym_DOT] = ACTIONS(251),
    [sym_at_line_column] = ACTIONS(249),
    [anon_sym_AMP] = ACTIONS(251),
    [sym_integer] = ACTIONS(249),
    [sym_decimal] = ACTIONS(251),
    [aux_sym_x_string_token1] = ACTIONS(251),
    [aux_sym_x_string_token2] = ACTIONS(251),
    [aux_sym_h_string_token1] = ACTIONS(251),
    [aux_sym_h_string_token2] = ACTIONS(251),
    [aux_sym_n_string_token1] = ACTIONS(251),
    [aux_sym_n_string_token2] = ACTIONS(251),
    [aux_sym_n_string_token3] = ACTIONS(251),
    [aux_sym_n_string_token4] = ACTIONS(251),
    [aux_sym_n_string_token5] = ACTIONS(251),
    [aux_sym_n_string_token6] = ACTIONS(251),
    [aux_sym_n_string_token7] = ACTIONS(251),
    [aux_sym_n_string_token8] = ACTIONS(251),
    [sym__ADDRESS] = ACTIONS(249),
    [sym__ALL] = ACTIONS(249),
    [sym__AS] = ACTIONS(249),
    [sym__BACKGROUND_COLOR] = ACTIONS(249),
    [sym__BELL] = ACTIONS(249),
    [sym__BLANK_LINE] = ACTIONS(249),
    [sym__BLANK_SCREEN] = ACTIONS(249),
    [sym__BLINK] = ACTIONS(249),
    [sym__CONCATENATE_FUNC] = ACTIONS(249),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(249),
    [sym__DISPLAY] = ACTIONS(249),
    [sym__END_DISPLAY] = ACTIONS(249),
    [sym__ERASE] = ACTIONS(249),
    [sym__EXCEPTION] = ACTIONS(249),
    [sym__FOREGROUND_COLOR] = ACTIONS(249),
    [sym__FUNCTION_NAME] = ACTIONS(249),
    [sym__HIGHLIGHT] = ACTIONS(249),
    [anon_sym_high_DASHvalue] = ACTIONS(249),
    [anon_sym_high_DASHValue] = ACTIONS(249),
    [anon_sym_high_DASHVALUE] = ACTIONS(249),
    [anon_sym_High_DASHvalue] = ACTIONS(249),
    [anon_sym_High_DASHValue] = ACTIONS(249),
    [anon_sym_High_DASHVALUE] = ACTIONS(249),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(249),
    [anon_sym_HIGH_DASHValue] = ACTIONS(249),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(249),
    [sym__LENGTH] = ACTIONS(249),
    [sym__LINAGE_COUNTER] = ACTIONS(249),
    [sym__LINE] = ACTIONS(249),
    [sym__LINES] = ACTIONS(249),
    [sym__LOCALE_DT_FUNC] = ACTIONS(249),
    [sym__LOWER_CASE_FUNC] = ACTIONS(249),
    [sym__LOWLIGHT] = ACTIONS(249),
    [anon_sym_low_DASHvalue] = ACTIONS(249),
    [anon_sym_low_DASHValue] = ACTIONS(249),
    [anon_sym_low_DASHVALUE] = ACTIONS(249),
    [anon_sym_Low_DASHvalue] = ACTIONS(249),
    [anon_sym_Low_DASHValue] = ACTIONS(249),
    [anon_sym_Low_DASHVALUE] = ACTIONS(249),
    [anon_sym_LOW_DASHvalue] = ACTIONS(249),
    [anon_sym_LOW_DASHValue] = ACTIONS(249),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(249),
    [sym__MOVE] = ACTIONS(249),
    [sym__NOT_EXCEPTION] = ACTIONS(249),
    [sym__NO_ADVANCING] = ACTIONS(249),
    [sym__NUMVALC_FUNC] = ACTIONS(249),
    [sym__OVERLINE] = ACTIONS(249),
    [anon_sym_quote] = ACTIONS(249),
    [anon_sym_QUOTE] = ACTIONS(249),
    [anon_sym_Quote] = ACTIONS(249),
    [sym__REVERSE_FUNC] = ACTIONS(249),
    [sym__REVERSE_VIDEO] = ACTIONS(249),
    [sym__SCROLL] = ACTIONS(249),
    [anon_sym_space] = ACTIONS(249),
    [anon_sym_SPACE] = ACTIONS(249),
    [anon_sym_Space] = ACTIONS(249),
    [sym__STOP] = ACTIONS(249),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(249),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(249),
    [anon_sym_null] = ACTIONS(249),
    [anon_sym_Null] = ACTIONS(249),
    [anon_sym_NULL] = ACTIONS(249),
    [sym__TRIM_FUNCTION] = ACTIONS(249),
    [sym__UNDERLINE] = ACTIONS(249),
    [sym__UPON] = ACTIONS(249),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(249),
    [sym__UPON_COMMAND_LINE] = ACTIONS(249),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(249),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(249),
    [sym__UPPER_CASE_FUNC] = ACTIONS(249),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(249),
    [sym__WITH] = ACTIONS(249),
    [anon_sym_zero] = ACTIONS(249),
    [anon_sym_ZERO] = ACTIONS(249),
    [anon_sym_Zero] = ACTIONS(249),
  },
  [47] = {
    [sym__identifier] = STATE(81),
    [sym_qualified_word] = STATE(35),
    [sym__basic_literal] = STATE(81),
    [sym__basic_value] = STATE(57),
    [sym_function_] = STATE(81),
    [sym__LITERAL] = STATE(57),
    [sym_number] = STATE(57),
    [sym__string] = STATE(57),
    [sym_x_string] = STATE(57),
    [sym_h_string] = STATE(57),
    [sym_n_string] = STATE(57),
    [sym__HIGH_VALUE] = STATE(63),
    [sym__LOW_VALUE] = STATE(62),
    [sym__QUOTE] = STATE(66),
    [sym__SPACE] = STATE(67),
    [sym__TOK_NULL] = STATE(65),
    [sym__ZERO] = STATE(49),
    [sym_CONCATENATE_FUNC] = STATE(386),
    [sym_CURRENT_DATE_FUNC] = STATE(72),
    [sym_FUNCTION_NAME] = STATE(71),
    [sym_HIGH_VALUE] = STATE(57),
    [sym_LOCALE_DT_FUNC] = STATE(387),
    [sym_LOWER_CASE_FUNC] = STATE(389),
    [sym_LOW_VALUE] = STATE(57),
    [sym_NUMVALC_FUNC] = STATE(392),
    [sym_QUOTE] = STATE(57),
    [sym_REVERSE_FUNC] = STATE(389),
    [sym_SPACE] = STATE(57),
    [sym_SUBSTITUTE_FUNC] = STATE(386),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(386),
    [sym_TOK_NULL] = STATE(57),
    [sym_TRIM_FUNCTION] = STATE(393),
    [sym_UPPER_CASE_FUNC] = STATE(389),
    [sym_WHEN_COMPILED_FUNC] = STATE(72),
    [sym_ZERO] = STATE(57),
    [sym__WORD] = ACTIONS(7),
    [sym_integer] = ACTIONS(13),
    [sym_decimal] = ACTIONS(15),
    [aux_sym_x_string_token1] = ACTIONS(17),
    [aux_sym_x_string_token2] = ACTIONS(17),
    [aux_sym_h_string_token1] = ACTIONS(19),
    [aux_sym_h_string_token2] = ACTIONS(19),
    [aux_sym_n_string_token1] = ACTIONS(21),
    [aux_sym_n_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token3] = ACTIONS(21),
    [aux_sym_n_string_token4] = ACTIONS(21),
    [aux_sym_n_string_token5] = ACTIONS(21),
    [aux_sym_n_string_token6] = ACTIONS(21),
    [aux_sym_n_string_token7] = ACTIONS(21),
    [aux_sym_n_string_token8] = ACTIONS(21),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(29),
    [sym__FUNCTION_NAME] = ACTIONS(35),
    [anon_sym_high_DASHvalue] = ACTIONS(37),
    [anon_sym_high_DASHValue] = ACTIONS(37),
    [anon_sym_high_DASHVALUE] = ACTIONS(37),
    [anon_sym_High_DASHvalue] = ACTIONS(37),
    [anon_sym_High_DASHValue] = ACTIONS(37),
    [anon_sym_High_DASHVALUE] = ACTIONS(37),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(37),
    [anon_sym_HIGH_DASHValue] = ACTIONS(37),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(37),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(47),
    [anon_sym_low_DASHValue] = ACTIONS(47),
    [anon_sym_low_DASHVALUE] = ACTIONS(47),
    [anon_sym_Low_DASHvalue] = ACTIONS(47),
    [anon_sym_Low_DASHValue] = ACTIONS(47),
    [anon_sym_Low_DASHVALUE] = ACTIONS(47),
    [anon_sym_LOW_DASHvalue] = ACTIONS(47),
    [anon_sym_LOW_DASHValue] = ACTIONS(47),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(47),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [sym__OF] = ACTIONS(253),
    [anon_sym_quote] = ACTIONS(55),
    [anon_sym_QUOTE] = ACTIONS(55),
    [anon_sym_Quote] = ACTIONS(55),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(59),
    [anon_sym_SPACE] = ACTIONS(59),
    [anon_sym_Space] = ACTIONS(59),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(65),
    [anon_sym_Null] = ACTIONS(65),
    [anon_sym_NULL] = ACTIONS(65),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(73),
    [anon_sym_zero] = ACTIONS(77),
    [anon_sym_ZERO] = ACTIONS(77),
    [anon_sym_Zero] = ACTIONS(77),
  },
  [48] = {
    [sym__identifier] = STATE(252),
    [sym_qualified_word] = STATE(168),
    [sym__basic_literal] = STATE(252),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(252),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [49] = {
    [sym__WORD] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(257),
    [sym_at_line_column] = ACTIONS(255),
    [anon_sym_AMP] = ACTIONS(257),
    [sym_integer] = ACTIONS(255),
    [sym_decimal] = ACTIONS(257),
    [aux_sym_x_string_token1] = ACTIONS(257),
    [aux_sym_x_string_token2] = ACTIONS(257),
    [aux_sym_h_string_token1] = ACTIONS(257),
    [aux_sym_h_string_token2] = ACTIONS(257),
    [aux_sym_n_string_token1] = ACTIONS(257),
    [aux_sym_n_string_token2] = ACTIONS(257),
    [aux_sym_n_string_token3] = ACTIONS(257),
    [aux_sym_n_string_token4] = ACTIONS(257),
    [aux_sym_n_string_token5] = ACTIONS(257),
    [aux_sym_n_string_token6] = ACTIONS(257),
    [aux_sym_n_string_token7] = ACTIONS(257),
    [aux_sym_n_string_token8] = ACTIONS(257),
    [sym__ADDRESS] = ACTIONS(255),
    [sym__ALL] = ACTIONS(255),
    [sym__BACKGROUND_COLOR] = ACTIONS(255),
    [sym__BELL] = ACTIONS(255),
    [sym__BLANK_LINE] = ACTIONS(255),
    [sym__BLANK_SCREEN] = ACTIONS(255),
    [sym__BLINK] = ACTIONS(255),
    [sym__CONCATENATE_FUNC] = ACTIONS(255),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(255),
    [sym__DISPLAY] = ACTIONS(255),
    [sym__END_DISPLAY] = ACTIONS(255),
    [sym__ERASE] = ACTIONS(255),
    [sym__EXCEPTION] = ACTIONS(255),
    [sym__FOREGROUND_COLOR] = ACTIONS(255),
    [sym__FUNCTION_NAME] = ACTIONS(255),
    [sym__HIGHLIGHT] = ACTIONS(255),
    [anon_sym_high_DASHvalue] = ACTIONS(255),
    [anon_sym_high_DASHValue] = ACTIONS(255),
    [anon_sym_high_DASHVALUE] = ACTIONS(255),
    [anon_sym_High_DASHvalue] = ACTIONS(255),
    [anon_sym_High_DASHValue] = ACTIONS(255),
    [anon_sym_High_DASHVALUE] = ACTIONS(255),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(255),
    [anon_sym_HIGH_DASHValue] = ACTIONS(255),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(255),
    [sym__LENGTH] = ACTIONS(255),
    [sym__LINAGE_COUNTER] = ACTIONS(255),
    [sym__LINE] = ACTIONS(255),
    [sym__LINES] = ACTIONS(255),
    [sym__LOCALE_DT_FUNC] = ACTIONS(255),
    [sym__LOWER_CASE_FUNC] = ACTIONS(255),
    [sym__LOWLIGHT] = ACTIONS(255),
    [anon_sym_low_DASHvalue] = ACTIONS(255),
    [anon_sym_low_DASHValue] = ACTIONS(255),
    [anon_sym_low_DASHVALUE] = ACTIONS(255),
    [anon_sym_Low_DASHvalue] = ACTIONS(255),
    [anon_sym_Low_DASHValue] = ACTIONS(255),
    [anon_sym_Low_DASHVALUE] = ACTIONS(255),
    [anon_sym_LOW_DASHvalue] = ACTIONS(255),
    [anon_sym_LOW_DASHValue] = ACTIONS(255),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(255),
    [sym__MOVE] = ACTIONS(255),
    [sym__NOT_EXCEPTION] = ACTIONS(255),
    [sym__NO_ADVANCING] = ACTIONS(255),
    [sym__NUMVALC_FUNC] = ACTIONS(255),
    [sym__OVERLINE] = ACTIONS(255),
    [anon_sym_quote] = ACTIONS(255),
    [anon_sym_QUOTE] = ACTIONS(255),
    [anon_sym_Quote] = ACTIONS(255),
    [sym__REVERSE_FUNC] = ACTIONS(255),
    [sym__REVERSE_VIDEO] = ACTIONS(255),
    [sym__SCROLL] = ACTIONS(255),
    [anon_sym_space] = ACTIONS(255),
    [anon_sym_SPACE] = ACTIONS(255),
    [anon_sym_Space] = ACTIONS(255),
    [sym__STOP] = ACTIONS(255),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(255),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(255),
    [anon_sym_null] = ACTIONS(255),
    [anon_sym_Null] = ACTIONS(255),
    [anon_sym_NULL] = ACTIONS(255),
    [sym__TRIM_FUNCTION] = ACTIONS(255),
    [sym__UNDERLINE] = ACTIONS(255),
    [sym__UPON] = ACTIONS(255),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(255),
    [sym__UPON_COMMAND_LINE] = ACTIONS(255),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(255),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(255),
    [sym__UPPER_CASE_FUNC] = ACTIONS(255),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(255),
    [sym__WITH] = ACTIONS(255),
    [anon_sym_zero] = ACTIONS(255),
    [anon_sym_ZERO] = ACTIONS(255),
    [anon_sym_Zero] = ACTIONS(255),
  },
  [50] = {
    [sym__identifier] = STATE(84),
    [sym_qualified_word] = STATE(35),
    [sym__basic_literal] = STATE(84),
    [sym__basic_value] = STATE(57),
    [sym_function_] = STATE(84),
    [sym__LITERAL] = STATE(57),
    [sym_number] = STATE(57),
    [sym__string] = STATE(57),
    [sym_x_string] = STATE(57),
    [sym_h_string] = STATE(57),
    [sym_n_string] = STATE(57),
    [sym__HIGH_VALUE] = STATE(63),
    [sym__LOW_VALUE] = STATE(62),
    [sym__QUOTE] = STATE(66),
    [sym__SPACE] = STATE(67),
    [sym__TOK_NULL] = STATE(65),
    [sym__ZERO] = STATE(49),
    [sym_CONCATENATE_FUNC] = STATE(386),
    [sym_CURRENT_DATE_FUNC] = STATE(72),
    [sym_FUNCTION_NAME] = STATE(71),
    [sym_HIGH_VALUE] = STATE(57),
    [sym_LOCALE_DT_FUNC] = STATE(387),
    [sym_LOWER_CASE_FUNC] = STATE(389),
    [sym_LOW_VALUE] = STATE(57),
    [sym_NUMVALC_FUNC] = STATE(392),
    [sym_QUOTE] = STATE(57),
    [sym_REVERSE_FUNC] = STATE(389),
    [sym_SPACE] = STATE(57),
    [sym_SUBSTITUTE_FUNC] = STATE(386),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(386),
    [sym_TOK_NULL] = STATE(57),
    [sym_TRIM_FUNCTION] = STATE(393),
    [sym_UPPER_CASE_FUNC] = STATE(389),
    [sym_WHEN_COMPILED_FUNC] = STATE(72),
    [sym_ZERO] = STATE(57),
    [sym__WORD] = ACTIONS(7),
    [sym_integer] = ACTIONS(13),
    [sym_decimal] = ACTIONS(15),
    [aux_sym_x_string_token1] = ACTIONS(17),
    [aux_sym_x_string_token2] = ACTIONS(17),
    [aux_sym_h_string_token1] = ACTIONS(19),
    [aux_sym_h_string_token2] = ACTIONS(19),
    [aux_sym_n_string_token1] = ACTIONS(21),
    [aux_sym_n_string_token2] = ACTIONS(21),
    [aux_sym_n_string_token3] = ACTIONS(21),
    [aux_sym_n_string_token4] = ACTIONS(21),
    [aux_sym_n_string_token5] = ACTIONS(21),
    [aux_sym_n_string_token6] = ACTIONS(21),
    [aux_sym_n_string_token7] = ACTIONS(21),
    [aux_sym_n_string_token8] = ACTIONS(21),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(29),
    [sym__FUNCTION_NAME] = ACTIONS(35),
    [anon_sym_high_DASHvalue] = ACTIONS(37),
    [anon_sym_high_DASHValue] = ACTIONS(37),
    [anon_sym_high_DASHVALUE] = ACTIONS(37),
    [anon_sym_High_DASHvalue] = ACTIONS(37),
    [anon_sym_High_DASHValue] = ACTIONS(37),
    [anon_sym_High_DASHVALUE] = ACTIONS(37),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(37),
    [anon_sym_HIGH_DASHValue] = ACTIONS(37),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(37),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(47),
    [anon_sym_low_DASHValue] = ACTIONS(47),
    [anon_sym_low_DASHVALUE] = ACTIONS(47),
    [anon_sym_Low_DASHvalue] = ACTIONS(47),
    [anon_sym_Low_DASHValue] = ACTIONS(47),
    [anon_sym_Low_DASHVALUE] = ACTIONS(47),
    [anon_sym_LOW_DASHvalue] = ACTIONS(47),
    [anon_sym_LOW_DASHValue] = ACTIONS(47),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(47),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(55),
    [anon_sym_QUOTE] = ACTIONS(55),
    [anon_sym_Quote] = ACTIONS(55),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(59),
    [anon_sym_SPACE] = ACTIONS(59),
    [anon_sym_Space] = ACTIONS(59),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(65),
    [anon_sym_Null] = ACTIONS(65),
    [anon_sym_NULL] = ACTIONS(65),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(73),
    [anon_sym_zero] = ACTIONS(77),
    [anon_sym_ZERO] = ACTIONS(77),
    [anon_sym_Zero] = ACTIONS(77),
  },
  [51] = {
    [sym__identifier] = STATE(390),
    [sym_qualified_word] = STATE(168),
    [sym__basic_literal] = STATE(390),
    [sym__basic_value] = STATE(174),
    [sym_function_] = STATE(390),
    [sym__LITERAL] = STATE(174),
    [sym_number] = STATE(174),
    [sym__string] = STATE(174),
    [sym_x_string] = STATE(174),
    [sym_h_string] = STATE(174),
    [sym_n_string] = STATE(174),
    [sym__HIGH_VALUE] = STATE(181),
    [sym__LOW_VALUE] = STATE(191),
    [sym__QUOTE] = STATE(188),
    [sym__SPACE] = STATE(189),
    [sym__TOK_NULL] = STATE(190),
    [sym__ZERO] = STATE(192),
    [sym_CONCATENATE_FUNC] = STATE(452),
    [sym_CURRENT_DATE_FUNC] = STATE(170),
    [sym_FUNCTION_NAME] = STATE(172),
    [sym_HIGH_VALUE] = STATE(174),
    [sym_LOCALE_DT_FUNC] = STATE(453),
    [sym_LOWER_CASE_FUNC] = STATE(454),
    [sym_LOW_VALUE] = STATE(174),
    [sym_NUMVALC_FUNC] = STATE(455),
    [sym_QUOTE] = STATE(174),
    [sym_REVERSE_FUNC] = STATE(454),
    [sym_SPACE] = STATE(174),
    [sym_SUBSTITUTE_FUNC] = STATE(452),
    [sym_SUBSTITUTE_CASE_FUNC] = STATE(452),
    [sym_TOK_NULL] = STATE(174),
    [sym_TRIM_FUNCTION] = STATE(456),
    [sym_UPPER_CASE_FUNC] = STATE(454),
    [sym_WHEN_COMPILED_FUNC] = STATE(170),
    [sym_ZERO] = STATE(174),
    [sym__WORD] = ACTIONS(79),
    [sym_integer] = ACTIONS(89),
    [sym_decimal] = ACTIONS(91),
    [aux_sym_x_string_token1] = ACTIONS(93),
    [aux_sym_x_string_token2] = ACTIONS(93),
    [aux_sym_h_string_token1] = ACTIONS(95),
    [aux_sym_h_string_token2] = ACTIONS(95),
    [aux_sym_n_string_token1] = ACTIONS(97),
    [aux_sym_n_string_token2] = ACTIONS(97),
    [aux_sym_n_string_token3] = ACTIONS(97),
    [aux_sym_n_string_token4] = ACTIONS(97),
    [aux_sym_n_string_token5] = ACTIONS(97),
    [aux_sym_n_string_token6] = ACTIONS(97),
    [aux_sym_n_string_token7] = ACTIONS(97),
    [aux_sym_n_string_token8] = ACTIONS(97),
    [sym__CONCATENATE_FUNC] = ACTIONS(27),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(99),
    [sym__FUNCTION_NAME] = ACTIONS(101),
    [anon_sym_high_DASHvalue] = ACTIONS(103),
    [anon_sym_high_DASHValue] = ACTIONS(103),
    [anon_sym_high_DASHVALUE] = ACTIONS(103),
    [anon_sym_High_DASHvalue] = ACTIONS(103),
    [anon_sym_High_DASHValue] = ACTIONS(103),
    [anon_sym_High_DASHVALUE] = ACTIONS(103),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(103),
    [anon_sym_HIGH_DASHValue] = ACTIONS(103),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(43),
    [sym__LOWER_CASE_FUNC] = ACTIONS(45),
    [anon_sym_low_DASHvalue] = ACTIONS(109),
    [anon_sym_low_DASHValue] = ACTIONS(109),
    [anon_sym_low_DASHVALUE] = ACTIONS(109),
    [anon_sym_Low_DASHvalue] = ACTIONS(109),
    [anon_sym_Low_DASHValue] = ACTIONS(109),
    [anon_sym_Low_DASHVALUE] = ACTIONS(109),
    [anon_sym_LOW_DASHvalue] = ACTIONS(109),
    [anon_sym_LOW_DASHValue] = ACTIONS(109),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(109),
    [sym__NUMVALC_FUNC] = ACTIONS(53),
    [anon_sym_quote] = ACTIONS(111),
    [anon_sym_QUOTE] = ACTIONS(111),
    [anon_sym_Quote] = ACTIONS(111),
    [sym__REVERSE_FUNC] = ACTIONS(57),
    [anon_sym_space] = ACTIONS(113),
    [anon_sym_SPACE] = ACTIONS(113),
    [anon_sym_Space] = ACTIONS(113),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(61),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(63),
    [anon_sym_null] = ACTIONS(115),
    [anon_sym_Null] = ACTIONS(115),
    [anon_sym_NULL] = ACTIONS(115),
    [sym__TRIM_FUNCTION] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(71),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(117),
    [anon_sym_zero] = ACTIONS(119),
    [anon_sym_ZERO] = ACTIONS(119),
    [anon_sym_Zero] = ACTIONS(119),
  },
  [52] = {
    [sym__in_of] = STATE(447),
    [aux_sym_qualified_word_repeat1] = STATE(54),
    [sym__WORD] = ACTIONS(259),
    [anon_sym_DOT] = ACTIONS(261),
    [anon_sym_LPAREN] = ACTIONS(261),
    [sym_at_line_column] = ACTIONS(259),
    [sym_integer] = ACTIONS(259),
    [sym_decimal] = ACTIONS(261),
    [aux_sym_x_string_token1] = ACTIONS(261),
    [aux_sym_x_string_token2] = ACTIONS(261),
    [aux_sym_h_string_token1] = ACTIONS(261),
    [aux_sym_h_string_token2] = ACTIONS(261),
    [aux_sym_n_string_token1] = ACTIONS(261),
    [aux_sym_n_string_token2] = ACTIONS(261),
    [aux_sym_n_string_token3] = ACTIONS(261),
    [aux_sym_n_string_token4] = ACTIONS(261),
    [aux_sym_n_string_token5] = ACTIONS(261),
    [aux_sym_n_string_token6] = ACTIONS(261),
    [aux_sym_n_string_token7] = ACTIONS(261),
    [aux_sym_n_string_token8] = ACTIONS(261),
    [sym__ADDRESS] = ACTIONS(259),
    [sym__ALL] = ACTIONS(259),
    [sym__CONCATENATE_FUNC] = ACTIONS(259),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(259),
    [sym__DISPLAY] = ACTIONS(259),
    [sym__END_DISPLAY] = ACTIONS(259),
    [sym__EXCEPTION] = ACTIONS(259),
    [sym__FUNCTION_NAME] = ACTIONS(259),
    [anon_sym_high_DASHvalue] = ACTIONS(259),
    [anon_sym_high_DASHValue] = ACTIONS(259),
    [anon_sym_high_DASHVALUE] = ACTIONS(259),
    [anon_sym_High_DASHvalue] = ACTIONS(259),
    [anon_sym_High_DASHValue] = ACTIONS(259),
    [anon_sym_High_DASHVALUE] = ACTIONS(259),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(259),
    [anon_sym_HIGH_DASHValue] = ACTIONS(259),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(259),
    [sym__IN] = ACTIONS(263),
    [sym__LENGTH] = ACTIONS(259),
    [sym__LINAGE_COUNTER] = ACTIONS(259),
    [sym__LOCALE_DT_FUNC] = ACTIONS(259),
    [sym__LOWER_CASE_FUNC] = ACTIONS(259),
    [anon_sym_low_DASHvalue] = ACTIONS(259),
    [anon_sym_low_DASHValue] = ACTIONS(259),
    [anon_sym_low_DASHVALUE] = ACTIONS(259),
    [anon_sym_Low_DASHvalue] = ACTIONS(259),
    [anon_sym_Low_DASHValue] = ACTIONS(259),
    [anon_sym_Low_DASHVALUE] = ACTIONS(259),
    [anon_sym_LOW_DASHvalue] = ACTIONS(259),
    [anon_sym_LOW_DASHValue] = ACTIONS(259),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(259),
    [sym__MOVE] = ACTIONS(259),
    [sym__NOT_EXCEPTION] = ACTIONS(259),
    [sym__NO_ADVANCING] = ACTIONS(259),
    [sym__NUMVALC_FUNC] = ACTIONS(259),
    [sym__OF] = ACTIONS(263),
    [anon_sym_quote] = ACTIONS(259),
    [anon_sym_QUOTE] = ACTIONS(259),
    [anon_sym_Quote] = ACTIONS(259),
    [sym__REVERSE_FUNC] = ACTIONS(259),
    [anon_sym_space] = ACTIONS(259),
    [anon_sym_SPACE] = ACTIONS(259),
    [anon_sym_Space] = ACTIONS(259),
    [sym__STOP] = ACTIONS(259),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(259),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(259),
    [anon_sym_null] = ACTIONS(259),
    [anon_sym_Null] = ACTIONS(259),
    [anon_sym_NULL] = ACTIONS(259),
    [sym__TRIM_FUNCTION] = ACTIONS(259),
    [sym__UPON] = ACTIONS(259),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(259),
    [sym__UPON_COMMAND_LINE] = ACTIONS(259),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(259),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(259),
    [sym__UPPER_CASE_FUNC] = ACTIONS(259),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(259),
    [sym__WITH] = ACTIONS(259),
    [anon_sym_zero] = ACTIONS(259),
    [anon_sym_ZERO] = ACTIONS(259),
    [anon_sym_Zero] = ACTIONS(259),
  },
  [53] = {
    [sym__in_of] = STATE(447),
    [aux_sym_qualified_word_repeat1] = STATE(53),
    [sym__WORD] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_at_line_column] = ACTIONS(265),
    [sym_integer] = ACTIONS(265),
    [sym_decimal] = ACTIONS(267),
    [aux_sym_x_string_token1] = ACTIONS(267),
    [aux_sym_x_string_token2] = ACTIONS(267),
    [aux_sym_h_string_token1] = ACTIONS(267),
    [aux_sym_h_string_token2] = ACTIONS(267),
    [aux_sym_n_string_token1] = ACTIONS(267),
    [aux_sym_n_string_token2] = ACTIONS(267),
    [aux_sym_n_string_token3] = ACTIONS(267),
    [aux_sym_n_string_token4] = ACTIONS(267),
    [aux_sym_n_string_token5] = ACTIONS(267),
    [aux_sym_n_string_token6] = ACTIONS(267),
    [aux_sym_n_string_token7] = ACTIONS(267),
    [aux_sym_n_string_token8] = ACTIONS(267),
    [sym__ADDRESS] = ACTIONS(265),
    [sym__ALL] = ACTIONS(265),
    [sym__CONCATENATE_FUNC] = ACTIONS(265),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(265),
    [sym__DISPLAY] = ACTIONS(265),
    [sym__END_DISPLAY] = ACTIONS(265),
    [sym__EXCEPTION] = ACTIONS(265),
    [sym__FUNCTION_NAME] = ACTIONS(265),
    [anon_sym_high_DASHvalue] = ACTIONS(265),
    [anon_sym_high_DASHValue] = ACTIONS(265),
    [anon_sym_high_DASHVALUE] = ACTIONS(265),
    [anon_sym_High_DASHvalue] = ACTIONS(265),
    [anon_sym_High_DASHValue] = ACTIONS(265),
    [anon_sym_High_DASHVALUE] = ACTIONS(265),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(265),
    [anon_sym_HIGH_DASHValue] = ACTIONS(265),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(265),
    [sym__IN] = ACTIONS(269),
    [sym__LENGTH] = ACTIONS(265),
    [sym__LINAGE_COUNTER] = ACTIONS(265),
    [sym__LOCALE_DT_FUNC] = ACTIONS(265),
    [sym__LOWER_CASE_FUNC] = ACTIONS(265),
    [anon_sym_low_DASHvalue] = ACTIONS(265),
    [anon_sym_low_DASHValue] = ACTIONS(265),
    [anon_sym_low_DASHVALUE] = ACTIONS(265),
    [anon_sym_Low_DASHvalue] = ACTIONS(265),
    [anon_sym_Low_DASHValue] = ACTIONS(265),
    [anon_sym_Low_DASHVALUE] = ACTIONS(265),
    [anon_sym_LOW_DASHvalue] = ACTIONS(265),
    [anon_sym_LOW_DASHValue] = ACTIONS(265),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(265),
    [sym__MOVE] = ACTIONS(265),
    [sym__NOT_EXCEPTION] = ACTIONS(265),
    [sym__NO_ADVANCING] = ACTIONS(265),
    [sym__NUMVALC_FUNC] = ACTIONS(265),
    [sym__OF] = ACTIONS(269),
    [anon_sym_quote] = ACTIONS(265),
    [anon_sym_QUOTE] = ACTIONS(265),
    [anon_sym_Quote] = ACTIONS(265),
    [sym__REVERSE_FUNC] = ACTIONS(265),
    [anon_sym_space] = ACTIONS(265),
    [anon_sym_SPACE] = ACTIONS(265),
    [anon_sym_Space] = ACTIONS(265),
    [sym__STOP] = ACTIONS(265),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(265),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(265),
    [anon_sym_null] = ACTIONS(265),
    [anon_sym_Null] = ACTIONS(265),
    [anon_sym_NULL] = ACTIONS(265),
    [sym__TRIM_FUNCTION] = ACTIONS(265),
    [sym__UPON] = ACTIONS(265),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(265),
    [sym__UPON_COMMAND_LINE] = ACTIONS(265),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(265),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(265),
    [sym__UPPER_CASE_FUNC] = ACTIONS(265),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(265),
    [sym__WITH] = ACTIONS(265),
    [anon_sym_zero] = ACTIONS(265),
    [anon_sym_ZERO] = ACTIONS(265),
    [anon_sym_Zero] = ACTIONS(265),
  },
  [54] = {
    [sym__in_of] = STATE(447),
    [aux_sym_qualified_word_repeat1] = STATE(53),
    [sym__WORD] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(274),
    [anon_sym_LPAREN] = ACTIONS(274),
    [sym_at_line_column] = ACTIONS(272),
    [sym_integer] = ACTIONS(272),
    [sym_decimal] = ACTIONS(274),
    [aux_sym_x_string_token1] = ACTIONS(274),
    [aux_sym_x_string_token2] = ACTIONS(274),
    [aux_sym_h_string_token1] = ACTIONS(274),
    [aux_sym_h_string_token2] = ACTIONS(274),
    [aux_sym_n_string_token1] = ACTIONS(274),
    [aux_sym_n_string_token2] = ACTIONS(274),
    [aux_sym_n_string_token3] = ACTIONS(274),
    [aux_sym_n_string_token4] = ACTIONS(274),
    [aux_sym_n_string_token5] = ACTIONS(274),
    [aux_sym_n_string_token6] = ACTIONS(274),
    [aux_sym_n_string_token7] = ACTIONS(274),
    [aux_sym_n_string_token8] = ACTIONS(274),
    [sym__ADDRESS] = ACTIONS(272),
    [sym__ALL] = ACTIONS(272),
    [sym__CONCATENATE_FUNC] = ACTIONS(272),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(272),
    [sym__DISPLAY] = ACTIONS(272),
    [sym__END_DISPLAY] = ACTIONS(272),
    [sym__EXCEPTION] = ACTIONS(272),
    [sym__FUNCTION_NAME] = ACTIONS(272),
    [anon_sym_high_DASHvalue] = ACTIONS(272),
    [anon_sym_high_DASHValue] = ACTIONS(272),
    [anon_sym_high_DASHVALUE] = ACTIONS(272),
    [anon_sym_High_DASHvalue] = ACTIONS(272),
    [anon_sym_High_DASHValue] = ACTIONS(272),
    [anon_sym_High_DASHVALUE] = ACTIONS(272),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(272),
    [anon_sym_HIGH_DASHValue] = ACTIONS(272),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(272),
    [sym__IN] = ACTIONS(263),
    [sym__LENGTH] = ACTIONS(272),
    [sym__LINAGE_COUNTER] = ACTIONS(272),
    [sym__LOCALE_DT_FUNC] = ACTIONS(272),
    [sym__LOWER_CASE_FUNC] = ACTIONS(272),
    [anon_sym_low_DASHvalue] = ACTIONS(272),
    [anon_sym_low_DASHValue] = ACTIONS(272),
    [anon_sym_low_DASHVALUE] = ACTIONS(272),
    [anon_sym_Low_DASHvalue] = ACTIONS(272),
    [anon_sym_Low_DASHValue] = ACTIONS(272),
    [anon_sym_Low_DASHVALUE] = ACTIONS(272),
    [anon_sym_LOW_DASHvalue] = ACTIONS(272),
    [anon_sym_LOW_DASHValue] = ACTIONS(272),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(272),
    [sym__MOVE] = ACTIONS(272),
    [sym__NOT_EXCEPTION] = ACTIONS(272),
    [sym__NO_ADVANCING] = ACTIONS(272),
    [sym__NUMVALC_FUNC] = ACTIONS(272),
    [sym__OF] = ACTIONS(263),
    [anon_sym_quote] = ACTIONS(272),
    [anon_sym_QUOTE] = ACTIONS(272),
    [anon_sym_Quote] = ACTIONS(272),
    [sym__REVERSE_FUNC] = ACTIONS(272),
    [anon_sym_space] = ACTIONS(272),
    [anon_sym_SPACE] = ACTIONS(272),
    [anon_sym_Space] = ACTIONS(272),
    [sym__STOP] = ACTIONS(272),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(272),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(272),
    [anon_sym_null] = ACTIONS(272),
    [anon_sym_Null] = ACTIONS(272),
    [anon_sym_NULL] = ACTIONS(272),
    [sym__TRIM_FUNCTION] = ACTIONS(272),
    [sym__UPON] = ACTIONS(272),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(272),
    [sym__UPON_COMMAND_LINE] = ACTIONS(272),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(272),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(272),
    [sym__UPPER_CASE_FUNC] = ACTIONS(272),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(272),
    [sym__WITH] = ACTIONS(272),
    [anon_sym_zero] = ACTIONS(272),
    [anon_sym_ZERO] = ACTIONS(272),
    [anon_sym_Zero] = ACTIONS(272),
  },
  [55] = {
    [sym__WORD] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(267),
    [anon_sym_LPAREN] = ACTIONS(267),
    [sym_at_line_column] = ACTIONS(265),
    [sym_integer] = ACTIONS(265),
    [sym_decimal] = ACTIONS(267),
    [aux_sym_x_string_token1] = ACTIONS(267),
    [aux_sym_x_string_token2] = ACTIONS(267),
    [aux_sym_h_string_token1] = ACTIONS(267),
    [aux_sym_h_string_token2] = ACTIONS(267),
    [aux_sym_n_string_token1] = ACTIONS(267),
    [aux_sym_n_string_token2] = ACTIONS(267),
    [aux_sym_n_string_token3] = ACTIONS(267),
    [aux_sym_n_string_token4] = ACTIONS(267),
    [aux_sym_n_string_token5] = ACTIONS(267),
    [aux_sym_n_string_token6] = ACTIONS(267),
    [aux_sym_n_string_token7] = ACTIONS(267),
    [aux_sym_n_string_token8] = ACTIONS(267),
    [sym__ADDRESS] = ACTIONS(265),
    [sym__ALL] = ACTIONS(265),
    [sym__CONCATENATE_FUNC] = ACTIONS(265),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(265),
    [sym__DISPLAY] = ACTIONS(265),
    [sym__END_DISPLAY] = ACTIONS(265),
    [sym__EXCEPTION] = ACTIONS(265),
    [sym__FUNCTION_NAME] = ACTIONS(265),
    [anon_sym_high_DASHvalue] = ACTIONS(265),
    [anon_sym_high_DASHValue] = ACTIONS(265),
    [anon_sym_high_DASHVALUE] = ACTIONS(265),
    [anon_sym_High_DASHvalue] = ACTIONS(265),
    [anon_sym_High_DASHValue] = ACTIONS(265),
    [anon_sym_High_DASHVALUE] = ACTIONS(265),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(265),
    [anon_sym_HIGH_DASHValue] = ACTIONS(265),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(265),
    [sym__IN] = ACTIONS(265),
    [sym__LENGTH] = ACTIONS(265),
    [sym__LINAGE_COUNTER] = ACTIONS(265),
    [sym__LOCALE_DT_FUNC] = ACTIONS(265),
    [sym__LOWER_CASE_FUNC] = ACTIONS(265),
    [anon_sym_low_DASHvalue] = ACTIONS(265),
    [anon_sym_low_DASHValue] = ACTIONS(265),
    [anon_sym_low_DASHVALUE] = ACTIONS(265),
    [anon_sym_Low_DASHvalue] = ACTIONS(265),
    [anon_sym_Low_DASHValue] = ACTIONS(265),
    [anon_sym_Low_DASHVALUE] = ACTIONS(265),
    [anon_sym_LOW_DASHvalue] = ACTIONS(265),
    [anon_sym_LOW_DASHValue] = ACTIONS(265),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(265),
    [sym__MOVE] = ACTIONS(265),
    [sym__NOT_EXCEPTION] = ACTIONS(265),
    [sym__NO_ADVANCING] = ACTIONS(265),
    [sym__NUMVALC_FUNC] = ACTIONS(265),
    [sym__OF] = ACTIONS(265),
    [anon_sym_quote] = ACTIONS(265),
    [anon_sym_QUOTE] = ACTIONS(265),
    [anon_sym_Quote] = ACTIONS(265),
    [sym__REVERSE_FUNC] = ACTIONS(265),
    [anon_sym_space] = ACTIONS(265),
    [anon_sym_SPACE] = ACTIONS(265),
    [anon_sym_Space] = ACTIONS(265),
    [sym__STOP] = ACTIONS(265),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(265),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(265),
    [anon_sym_null] = ACTIONS(265),
    [anon_sym_Null] = ACTIONS(265),
    [anon_sym_NULL] = ACTIONS(265),
    [sym__TRIM_FUNCTION] = ACTIONS(265),
    [sym__UPON] = ACTIONS(265),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(265),
    [sym__UPON_COMMAND_LINE] = ACTIONS(265),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(265),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(265),
    [sym__UPPER_CASE_FUNC] = ACTIONS(265),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(265),
    [sym__WITH] = ACTIONS(265),
    [anon_sym_zero] = ACTIONS(265),
    [anon_sym_ZERO] = ACTIONS(265),
    [anon_sym_Zero] = ACTIONS(265),
  },
  [56] = {
    [sym__WORD] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(278),
    [sym_at_line_column] = ACTIONS(276),
    [anon_sym_AMP] = ACTIONS(278),
    [sym_integer] = ACTIONS(276),
    [sym_decimal] = ACTIONS(278),
    [aux_sym_x_string_token1] = ACTIONS(278),
    [aux_sym_x_string_token2] = ACTIONS(278),
    [aux_sym_h_string_token1] = ACTIONS(278),
    [aux_sym_h_string_token2] = ACTIONS(278),
    [aux_sym_n_string_token1] = ACTIONS(278),
    [aux_sym_n_string_token2] = ACTIONS(278),
    [aux_sym_n_string_token3] = ACTIONS(278),
    [aux_sym_n_string_token4] = ACTIONS(278),
    [aux_sym_n_string_token5] = ACTIONS(278),
    [aux_sym_n_string_token6] = ACTIONS(278),
    [aux_sym_n_string_token7] = ACTIONS(278),
    [aux_sym_n_string_token8] = ACTIONS(278),
    [sym__ADDRESS] = ACTIONS(276),
    [sym__ALL] = ACTIONS(276),
    [sym__AS] = ACTIONS(276),
    [sym__CONCATENATE_FUNC] = ACTIONS(276),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(276),
    [sym__DISPLAY] = ACTIONS(276),
    [sym__END_DISPLAY] = ACTIONS(276),
    [sym__EXCEPTION] = ACTIONS(276),
    [sym__FUNCTION_NAME] = ACTIONS(276),
    [anon_sym_high_DASHvalue] = ACTIONS(276),
    [anon_sym_high_DASHValue] = ACTIONS(276),
    [anon_sym_high_DASHVALUE] = ACTIONS(276),
    [anon_sym_High_DASHvalue] = ACTIONS(276),
    [anon_sym_High_DASHValue] = ACTIONS(276),
    [anon_sym_High_DASHVALUE] = ACTIONS(276),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(276),
    [anon_sym_HIGH_DASHValue] = ACTIONS(276),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(276),
    [sym__LENGTH] = ACTIONS(276),
    [sym__LINAGE_COUNTER] = ACTIONS(276),
    [sym__LOCALE_DT_FUNC] = ACTIONS(276),
    [sym__LOWER_CASE_FUNC] = ACTIONS(276),
    [anon_sym_low_DASHvalue] = ACTIONS(276),
    [anon_sym_low_DASHValue] = ACTIONS(276),
    [anon_sym_low_DASHVALUE] = ACTIONS(276),
    [anon_sym_Low_DASHvalue] = ACTIONS(276),
    [anon_sym_Low_DASHValue] = ACTIONS(276),
    [anon_sym_Low_DASHVALUE] = ACTIONS(276),
    [anon_sym_LOW_DASHvalue] = ACTIONS(276),
    [anon_sym_LOW_DASHValue] = ACTIONS(276),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(276),
    [sym__MOVE] = ACTIONS(276),
    [sym__NOT_EXCEPTION] = ACTIONS(276),
    [sym__NO_ADVANCING] = ACTIONS(276),
    [sym__NUMVALC_FUNC] = ACTIONS(276),
    [anon_sym_quote] = ACTIONS(276),
    [anon_sym_QUOTE] = ACTIONS(276),
    [anon_sym_Quote] = ACTIONS(276),
    [sym__REVERSE_FUNC] = ACTIONS(276),
    [anon_sym_space] = ACTIONS(276),
    [anon_sym_SPACE] = ACTIONS(276),
    [anon_sym_Space] = ACTIONS(276),
    [sym__STOP] = ACTIONS(276),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(276),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(276),
    [anon_sym_null] = ACTIONS(276),
    [anon_sym_Null] = ACTIONS(276),
    [anon_sym_NULL] = ACTIONS(276),
    [sym__TRIM_FUNCTION] = ACTIONS(276),
    [sym__UPON] = ACTIONS(276),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(276),
    [sym__UPON_COMMAND_LINE] = ACTIONS(276),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(276),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(276),
    [sym__UPPER_CASE_FUNC] = ACTIONS(276),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(276),
    [sym__WITH] = ACTIONS(276),
    [anon_sym_zero] = ACTIONS(276),
    [anon_sym_ZERO] = ACTIONS(276),
    [anon_sym_Zero] = ACTIONS(276),
  },
  [57] = {
    [aux_sym__basic_literal_repeat1] = STATE(59),
    [sym__WORD] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(282),
    [sym_at_line_column] = ACTIONS(280),
    [anon_sym_AMP] = ACTIONS(284),
    [sym_integer] = ACTIONS(280),
    [sym_decimal] = ACTIONS(282),
    [aux_sym_x_string_token1] = ACTIONS(282),
    [aux_sym_x_string_token2] = ACTIONS(282),
    [aux_sym_h_string_token1] = ACTIONS(282),
    [aux_sym_h_string_token2] = ACTIONS(282),
    [aux_sym_n_string_token1] = ACTIONS(282),
    [aux_sym_n_string_token2] = ACTIONS(282),
    [aux_sym_n_string_token3] = ACTIONS(282),
    [aux_sym_n_string_token4] = ACTIONS(282),
    [aux_sym_n_string_token5] = ACTIONS(282),
    [aux_sym_n_string_token6] = ACTIONS(282),
    [aux_sym_n_string_token7] = ACTIONS(282),
    [aux_sym_n_string_token8] = ACTIONS(282),
    [sym__ADDRESS] = ACTIONS(280),
    [sym__ALL] = ACTIONS(280),
    [sym__CONCATENATE_FUNC] = ACTIONS(280),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(280),
    [sym__DISPLAY] = ACTIONS(280),
    [sym__END_DISPLAY] = ACTIONS(280),
    [sym__EXCEPTION] = ACTIONS(280),
    [sym__FUNCTION_NAME] = ACTIONS(280),
    [anon_sym_high_DASHvalue] = ACTIONS(280),
    [anon_sym_high_DASHValue] = ACTIONS(280),
    [anon_sym_high_DASHVALUE] = ACTIONS(280),
    [anon_sym_High_DASHvalue] = ACTIONS(280),
    [anon_sym_High_DASHValue] = ACTIONS(280),
    [anon_sym_High_DASHVALUE] = ACTIONS(280),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(280),
    [anon_sym_HIGH_DASHValue] = ACTIONS(280),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(280),
    [sym__LENGTH] = ACTIONS(280),
    [sym__LINAGE_COUNTER] = ACTIONS(280),
    [sym__LOCALE_DT_FUNC] = ACTIONS(280),
    [sym__LOWER_CASE_FUNC] = ACTIONS(280),
    [anon_sym_low_DASHvalue] = ACTIONS(280),
    [anon_sym_low_DASHValue] = ACTIONS(280),
    [anon_sym_low_DASHVALUE] = ACTIONS(280),
    [anon_sym_Low_DASHvalue] = ACTIONS(280),
    [anon_sym_Low_DASHValue] = ACTIONS(280),
    [anon_sym_Low_DASHVALUE] = ACTIONS(280),
    [anon_sym_LOW_DASHvalue] = ACTIONS(280),
    [anon_sym_LOW_DASHValue] = ACTIONS(280),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(280),
    [sym__MOVE] = ACTIONS(280),
    [sym__NOT_EXCEPTION] = ACTIONS(280),
    [sym__NO_ADVANCING] = ACTIONS(280),
    [sym__NUMVALC_FUNC] = ACTIONS(280),
    [anon_sym_quote] = ACTIONS(280),
    [anon_sym_QUOTE] = ACTIONS(280),
    [anon_sym_Quote] = ACTIONS(280),
    [sym__REVERSE_FUNC] = ACTIONS(280),
    [anon_sym_space] = ACTIONS(280),
    [anon_sym_SPACE] = ACTIONS(280),
    [anon_sym_Space] = ACTIONS(280),
    [sym__STOP] = ACTIONS(280),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(280),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(280),
    [anon_sym_null] = ACTIONS(280),
    [anon_sym_Null] = ACTIONS(280),
    [anon_sym_NULL] = ACTIONS(280),
    [sym__TRIM_FUNCTION] = ACTIONS(280),
    [sym__UPON] = ACTIONS(280),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(280),
    [sym__UPON_COMMAND_LINE] = ACTIONS(280),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(280),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(280),
    [sym__UPPER_CASE_FUNC] = ACTIONS(280),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(280),
    [sym__WITH] = ACTIONS(280),
    [anon_sym_zero] = ACTIONS(280),
    [anon_sym_ZERO] = ACTIONS(280),
    [anon_sym_Zero] = ACTIONS(280),
  },
  [58] = {
    [aux_sym__basic_literal_repeat1] = STATE(58),
    [sym__WORD] = ACTIONS(286),
    [anon_sym_DOT] = ACTIONS(288),
    [sym_at_line_column] = ACTIONS(286),
    [anon_sym_AMP] = ACTIONS(290),
    [sym_integer] = ACTIONS(286),
    [sym_decimal] = ACTIONS(288),
    [aux_sym_x_string_token1] = ACTIONS(288),
    [aux_sym_x_string_token2] = ACTIONS(288),
    [aux_sym_h_string_token1] = ACTIONS(288),
    [aux_sym_h_string_token2] = ACTIONS(288),
    [aux_sym_n_string_token1] = ACTIONS(288),
    [aux_sym_n_string_token2] = ACTIONS(288),
    [aux_sym_n_string_token3] = ACTIONS(288),
    [aux_sym_n_string_token4] = ACTIONS(288),
    [aux_sym_n_string_token5] = ACTIONS(288),
    [aux_sym_n_string_token6] = ACTIONS(288),
    [aux_sym_n_string_token7] = ACTIONS(288),
    [aux_sym_n_string_token8] = ACTIONS(288),
    [sym__ADDRESS] = ACTIONS(286),
    [sym__ALL] = ACTIONS(286),
    [sym__CONCATENATE_FUNC] = ACTIONS(286),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(286),
    [sym__DISPLAY] = ACTIONS(286),
    [sym__END_DISPLAY] = ACTIONS(286),
    [sym__EXCEPTION] = ACTIONS(286),
    [sym__FUNCTION_NAME] = ACTIONS(286),
    [anon_sym_high_DASHvalue] = ACTIONS(286),
    [anon_sym_high_DASHValue] = ACTIONS(286),
    [anon_sym_high_DASHVALUE] = ACTIONS(286),
    [anon_sym_High_DASHvalue] = ACTIONS(286),
    [anon_sym_High_DASHValue] = ACTIONS(286),
    [anon_sym_High_DASHVALUE] = ACTIONS(286),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(286),
    [anon_sym_HIGH_DASHValue] = ACTIONS(286),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(286),
    [sym__LENGTH] = ACTIONS(286),
    [sym__LINAGE_COUNTER] = ACTIONS(286),
    [sym__LOCALE_DT_FUNC] = ACTIONS(286),
    [sym__LOWER_CASE_FUNC] = ACTIONS(286),
    [anon_sym_low_DASHvalue] = ACTIONS(286),
    [anon_sym_low_DASHValue] = ACTIONS(286),
    [anon_sym_low_DASHVALUE] = ACTIONS(286),
    [anon_sym_Low_DASHvalue] = ACTIONS(286),
    [anon_sym_Low_DASHValue] = ACTIONS(286),
    [anon_sym_Low_DASHVALUE] = ACTIONS(286),
    [anon_sym_LOW_DASHvalue] = ACTIONS(286),
    [anon_sym_LOW_DASHValue] = ACTIONS(286),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(286),
    [sym__MOVE] = ACTIONS(286),
    [sym__NOT_EXCEPTION] = ACTIONS(286),
    [sym__NO_ADVANCING] = ACTIONS(286),
    [sym__NUMVALC_FUNC] = ACTIONS(286),
    [anon_sym_quote] = ACTIONS(286),
    [anon_sym_QUOTE] = ACTIONS(286),
    [anon_sym_Quote] = ACTIONS(286),
    [sym__REVERSE_FUNC] = ACTIONS(286),
    [anon_sym_space] = ACTIONS(286),
    [anon_sym_SPACE] = ACTIONS(286),
    [anon_sym_Space] = ACTIONS(286),
    [sym__STOP] = ACTIONS(286),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(286),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(286),
    [anon_sym_null] = ACTIONS(286),
    [anon_sym_Null] = ACTIONS(286),
    [anon_sym_NULL] = ACTIONS(286),
    [sym__TRIM_FUNCTION] = ACTIONS(286),
    [sym__UPON] = ACTIONS(286),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(286),
    [sym__UPON_COMMAND_LINE] = ACTIONS(286),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(286),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(286),
    [sym__UPPER_CASE_FUNC] = ACTIONS(286),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(286),
    [sym__WITH] = ACTIONS(286),
    [anon_sym_zero] = ACTIONS(286),
    [anon_sym_ZERO] = ACTIONS(286),
    [anon_sym_Zero] = ACTIONS(286),
  },
  [59] = {
    [aux_sym__basic_literal_repeat1] = STATE(58),
    [sym__WORD] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(295),
    [sym_at_line_column] = ACTIONS(293),
    [anon_sym_AMP] = ACTIONS(284),
    [sym_integer] = ACTIONS(293),
    [sym_decimal] = ACTIONS(295),
    [aux_sym_x_string_token1] = ACTIONS(295),
    [aux_sym_x_string_token2] = ACTIONS(295),
    [aux_sym_h_string_token1] = ACTIONS(295),
    [aux_sym_h_string_token2] = ACTIONS(295),
    [aux_sym_n_string_token1] = ACTIONS(295),
    [aux_sym_n_string_token2] = ACTIONS(295),
    [aux_sym_n_string_token3] = ACTIONS(295),
    [aux_sym_n_string_token4] = ACTIONS(295),
    [aux_sym_n_string_token5] = ACTIONS(295),
    [aux_sym_n_string_token6] = ACTIONS(295),
    [aux_sym_n_string_token7] = ACTIONS(295),
    [aux_sym_n_string_token8] = ACTIONS(295),
    [sym__ADDRESS] = ACTIONS(293),
    [sym__ALL] = ACTIONS(293),
    [sym__CONCATENATE_FUNC] = ACTIONS(293),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(293),
    [sym__DISPLAY] = ACTIONS(293),
    [sym__END_DISPLAY] = ACTIONS(293),
    [sym__EXCEPTION] = ACTIONS(293),
    [sym__FUNCTION_NAME] = ACTIONS(293),
    [anon_sym_high_DASHvalue] = ACTIONS(293),
    [anon_sym_high_DASHValue] = ACTIONS(293),
    [anon_sym_high_DASHVALUE] = ACTIONS(293),
    [anon_sym_High_DASHvalue] = ACTIONS(293),
    [anon_sym_High_DASHValue] = ACTIONS(293),
    [anon_sym_High_DASHVALUE] = ACTIONS(293),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(293),
    [anon_sym_HIGH_DASHValue] = ACTIONS(293),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(293),
    [sym__LENGTH] = ACTIONS(293),
    [sym__LINAGE_COUNTER] = ACTIONS(293),
    [sym__LOCALE_DT_FUNC] = ACTIONS(293),
    [sym__LOWER_CASE_FUNC] = ACTIONS(293),
    [anon_sym_low_DASHvalue] = ACTIONS(293),
    [anon_sym_low_DASHValue] = ACTIONS(293),
    [anon_sym_low_DASHVALUE] = ACTIONS(293),
    [anon_sym_Low_DASHvalue] = ACTIONS(293),
    [anon_sym_Low_DASHValue] = ACTIONS(293),
    [anon_sym_Low_DASHVALUE] = ACTIONS(293),
    [anon_sym_LOW_DASHvalue] = ACTIONS(293),
    [anon_sym_LOW_DASHValue] = ACTIONS(293),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(293),
    [sym__MOVE] = ACTIONS(293),
    [sym__NOT_EXCEPTION] = ACTIONS(293),
    [sym__NO_ADVANCING] = ACTIONS(293),
    [sym__NUMVALC_FUNC] = ACTIONS(293),
    [anon_sym_quote] = ACTIONS(293),
    [anon_sym_QUOTE] = ACTIONS(293),
    [anon_sym_Quote] = ACTIONS(293),
    [sym__REVERSE_FUNC] = ACTIONS(293),
    [anon_sym_space] = ACTIONS(293),
    [anon_sym_SPACE] = ACTIONS(293),
    [anon_sym_Space] = ACTIONS(293),
    [sym__STOP] = ACTIONS(293),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(293),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(293),
    [anon_sym_null] = ACTIONS(293),
    [anon_sym_Null] = ACTIONS(293),
    [anon_sym_NULL] = ACTIONS(293),
    [sym__TRIM_FUNCTION] = ACTIONS(293),
    [sym__UPON] = ACTIONS(293),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(293),
    [sym__UPON_COMMAND_LINE] = ACTIONS(293),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(293),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(293),
    [sym__UPPER_CASE_FUNC] = ACTIONS(293),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(293),
    [sym__WITH] = ACTIONS(293),
    [anon_sym_zero] = ACTIONS(293),
    [anon_sym_ZERO] = ACTIONS(293),
    [anon_sym_Zero] = ACTIONS(293),
  },
  [60] = {
    [sym__WORD] = ACTIONS(297),
    [anon_sym_DOT] = ACTIONS(299),
    [sym_at_line_column] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(299),
    [sym_integer] = ACTIONS(297),
    [sym_decimal] = ACTIONS(299),
    [aux_sym_x_string_token1] = ACTIONS(299),
    [aux_sym_x_string_token2] = ACTIONS(299),
    [aux_sym_h_string_token1] = ACTIONS(299),
    [aux_sym_h_string_token2] = ACTIONS(299),
    [aux_sym_n_string_token1] = ACTIONS(299),
    [aux_sym_n_string_token2] = ACTIONS(299),
    [aux_sym_n_string_token3] = ACTIONS(299),
    [aux_sym_n_string_token4] = ACTIONS(299),
    [aux_sym_n_string_token5] = ACTIONS(299),
    [aux_sym_n_string_token6] = ACTIONS(299),
    [aux_sym_n_string_token7] = ACTIONS(299),
    [aux_sym_n_string_token8] = ACTIONS(299),
    [sym__ADDRESS] = ACTIONS(297),
    [sym__ALL] = ACTIONS(297),
    [sym__AS] = ACTIONS(297),
    [sym__CONCATENATE_FUNC] = ACTIONS(297),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(297),
    [sym__DISPLAY] = ACTIONS(297),
    [sym__END_DISPLAY] = ACTIONS(297),
    [sym__EXCEPTION] = ACTIONS(297),
    [sym__FUNCTION_NAME] = ACTIONS(297),
    [anon_sym_high_DASHvalue] = ACTIONS(297),
    [anon_sym_high_DASHValue] = ACTIONS(297),
    [anon_sym_high_DASHVALUE] = ACTIONS(297),
    [anon_sym_High_DASHvalue] = ACTIONS(297),
    [anon_sym_High_DASHValue] = ACTIONS(297),
    [anon_sym_High_DASHVALUE] = ACTIONS(297),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(297),
    [anon_sym_HIGH_DASHValue] = ACTIONS(297),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(297),
    [sym__LENGTH] = ACTIONS(297),
    [sym__LINAGE_COUNTER] = ACTIONS(297),
    [sym__LOCALE_DT_FUNC] = ACTIONS(297),
    [sym__LOWER_CASE_FUNC] = ACTIONS(297),
    [anon_sym_low_DASHvalue] = ACTIONS(297),
    [anon_sym_low_DASHValue] = ACTIONS(297),
    [anon_sym_low_DASHVALUE] = ACTIONS(297),
    [anon_sym_Low_DASHvalue] = ACTIONS(297),
    [anon_sym_Low_DASHValue] = ACTIONS(297),
    [anon_sym_Low_DASHVALUE] = ACTIONS(297),
    [anon_sym_LOW_DASHvalue] = ACTIONS(297),
    [anon_sym_LOW_DASHValue] = ACTIONS(297),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(297),
    [sym__MOVE] = ACTIONS(297),
    [sym__NOT_EXCEPTION] = ACTIONS(297),
    [sym__NO_ADVANCING] = ACTIONS(297),
    [sym__NUMVALC_FUNC] = ACTIONS(297),
    [anon_sym_quote] = ACTIONS(297),
    [anon_sym_QUOTE] = ACTIONS(297),
    [anon_sym_Quote] = ACTIONS(297),
    [sym__REVERSE_FUNC] = ACTIONS(297),
    [anon_sym_space] = ACTIONS(297),
    [anon_sym_SPACE] = ACTIONS(297),
    [anon_sym_Space] = ACTIONS(297),
    [sym__STOP] = ACTIONS(297),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(297),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(297),
    [anon_sym_null] = ACTIONS(297),
    [anon_sym_Null] = ACTIONS(297),
    [anon_sym_NULL] = ACTIONS(297),
    [sym__TRIM_FUNCTION] = ACTIONS(297),
    [sym__UPON] = ACTIONS(297),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(297),
    [sym__UPON_COMMAND_LINE] = ACTIONS(297),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(297),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(297),
    [sym__UPPER_CASE_FUNC] = ACTIONS(297),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(297),
    [sym__WITH] = ACTIONS(297),
    [anon_sym_zero] = ACTIONS(297),
    [anon_sym_ZERO] = ACTIONS(297),
    [anon_sym_Zero] = ACTIONS(297),
  },
  [61] = {
    [sym__WORD] = ACTIONS(301),
    [anon_sym_DOT] = ACTIONS(303),
    [sym_at_line_column] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(303),
    [sym_integer] = ACTIONS(301),
    [sym_decimal] = ACTIONS(303),
    [aux_sym_x_string_token1] = ACTIONS(303),
    [aux_sym_x_string_token2] = ACTIONS(303),
    [aux_sym_h_string_token1] = ACTIONS(303),
    [aux_sym_h_string_token2] = ACTIONS(303),
    [aux_sym_n_string_token1] = ACTIONS(303),
    [aux_sym_n_string_token2] = ACTIONS(303),
    [aux_sym_n_string_token3] = ACTIONS(303),
    [aux_sym_n_string_token4] = ACTIONS(303),
    [aux_sym_n_string_token5] = ACTIONS(303),
    [aux_sym_n_string_token6] = ACTIONS(303),
    [aux_sym_n_string_token7] = ACTIONS(303),
    [aux_sym_n_string_token8] = ACTIONS(303),
    [sym__ADDRESS] = ACTIONS(301),
    [sym__ALL] = ACTIONS(301),
    [sym__AS] = ACTIONS(301),
    [sym__CONCATENATE_FUNC] = ACTIONS(301),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(301),
    [sym__DISPLAY] = ACTIONS(301),
    [sym__END_DISPLAY] = ACTIONS(301),
    [sym__EXCEPTION] = ACTIONS(301),
    [sym__FUNCTION_NAME] = ACTIONS(301),
    [anon_sym_high_DASHvalue] = ACTIONS(301),
    [anon_sym_high_DASHValue] = ACTIONS(301),
    [anon_sym_high_DASHVALUE] = ACTIONS(301),
    [anon_sym_High_DASHvalue] = ACTIONS(301),
    [anon_sym_High_DASHValue] = ACTIONS(301),
    [anon_sym_High_DASHVALUE] = ACTIONS(301),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(301),
    [anon_sym_HIGH_DASHValue] = ACTIONS(301),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(301),
    [sym__LENGTH] = ACTIONS(301),
    [sym__LINAGE_COUNTER] = ACTIONS(301),
    [sym__LOCALE_DT_FUNC] = ACTIONS(301),
    [sym__LOWER_CASE_FUNC] = ACTIONS(301),
    [anon_sym_low_DASHvalue] = ACTIONS(301),
    [anon_sym_low_DASHValue] = ACTIONS(301),
    [anon_sym_low_DASHVALUE] = ACTIONS(301),
    [anon_sym_Low_DASHvalue] = ACTIONS(301),
    [anon_sym_Low_DASHValue] = ACTIONS(301),
    [anon_sym_Low_DASHVALUE] = ACTIONS(301),
    [anon_sym_LOW_DASHvalue] = ACTIONS(301),
    [anon_sym_LOW_DASHValue] = ACTIONS(301),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(301),
    [sym__MOVE] = ACTIONS(301),
    [sym__NOT_EXCEPTION] = ACTIONS(301),
    [sym__NO_ADVANCING] = ACTIONS(301),
    [sym__NUMVALC_FUNC] = ACTIONS(301),
    [anon_sym_quote] = ACTIONS(301),
    [anon_sym_QUOTE] = ACTIONS(301),
    [anon_sym_Quote] = ACTIONS(301),
    [sym__REVERSE_FUNC] = ACTIONS(301),
    [anon_sym_space] = ACTIONS(301),
    [anon_sym_SPACE] = ACTIONS(301),
    [anon_sym_Space] = ACTIONS(301),
    [sym__STOP] = ACTIONS(301),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(301),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(301),
    [anon_sym_null] = ACTIONS(301),
    [anon_sym_Null] = ACTIONS(301),
    [anon_sym_NULL] = ACTIONS(301),
    [sym__TRIM_FUNCTION] = ACTIONS(301),
    [sym__UPON] = ACTIONS(301),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(301),
    [sym__UPON_COMMAND_LINE] = ACTIONS(301),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(301),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(301),
    [sym__UPPER_CASE_FUNC] = ACTIONS(301),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(301),
    [sym__WITH] = ACTIONS(301),
    [anon_sym_zero] = ACTIONS(301),
    [anon_sym_ZERO] = ACTIONS(301),
    [anon_sym_Zero] = ACTIONS(301),
  },
  [62] = {
    [sym__WORD] = ACTIONS(305),
    [anon_sym_DOT] = ACTIONS(307),
    [sym_at_line_column] = ACTIONS(305),
    [anon_sym_AMP] = ACTIONS(307),
    [sym_integer] = ACTIONS(305),
    [sym_decimal] = ACTIONS(307),
    [aux_sym_x_string_token1] = ACTIONS(307),
    [aux_sym_x_string_token2] = ACTIONS(307),
    [aux_sym_h_string_token1] = ACTIONS(307),
    [aux_sym_h_string_token2] = ACTIONS(307),
    [aux_sym_n_string_token1] = ACTIONS(307),
    [aux_sym_n_string_token2] = ACTIONS(307),
    [aux_sym_n_string_token3] = ACTIONS(307),
    [aux_sym_n_string_token4] = ACTIONS(307),
    [aux_sym_n_string_token5] = ACTIONS(307),
    [aux_sym_n_string_token6] = ACTIONS(307),
    [aux_sym_n_string_token7] = ACTIONS(307),
    [aux_sym_n_string_token8] = ACTIONS(307),
    [sym__ADDRESS] = ACTIONS(305),
    [sym__ALL] = ACTIONS(305),
    [sym__CONCATENATE_FUNC] = ACTIONS(305),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(305),
    [sym__DISPLAY] = ACTIONS(305),
    [sym__END_DISPLAY] = ACTIONS(305),
    [sym__EXCEPTION] = ACTIONS(305),
    [sym__FUNCTION_NAME] = ACTIONS(305),
    [anon_sym_high_DASHvalue] = ACTIONS(305),
    [anon_sym_high_DASHValue] = ACTIONS(305),
    [anon_sym_high_DASHVALUE] = ACTIONS(305),
    [anon_sym_High_DASHvalue] = ACTIONS(305),
    [anon_sym_High_DASHValue] = ACTIONS(305),
    [anon_sym_High_DASHVALUE] = ACTIONS(305),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(305),
    [anon_sym_HIGH_DASHValue] = ACTIONS(305),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(305),
    [sym__LENGTH] = ACTIONS(305),
    [sym__LINAGE_COUNTER] = ACTIONS(305),
    [sym__LOCALE_DT_FUNC] = ACTIONS(305),
    [sym__LOWER_CASE_FUNC] = ACTIONS(305),
    [anon_sym_low_DASHvalue] = ACTIONS(305),
    [anon_sym_low_DASHValue] = ACTIONS(305),
    [anon_sym_low_DASHVALUE] = ACTIONS(305),
    [anon_sym_Low_DASHvalue] = ACTIONS(305),
    [anon_sym_Low_DASHValue] = ACTIONS(305),
    [anon_sym_Low_DASHVALUE] = ACTIONS(305),
    [anon_sym_LOW_DASHvalue] = ACTIONS(305),
    [anon_sym_LOW_DASHValue] = ACTIONS(305),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(305),
    [sym__MOVE] = ACTIONS(305),
    [sym__NOT_EXCEPTION] = ACTIONS(305),
    [sym__NO_ADVANCING] = ACTIONS(305),
    [sym__NUMVALC_FUNC] = ACTIONS(305),
    [anon_sym_quote] = ACTIONS(305),
    [anon_sym_QUOTE] = ACTIONS(305),
    [anon_sym_Quote] = ACTIONS(305),
    [sym__REVERSE_FUNC] = ACTIONS(305),
    [anon_sym_space] = ACTIONS(305),
    [anon_sym_SPACE] = ACTIONS(305),
    [anon_sym_Space] = ACTIONS(305),
    [sym__STOP] = ACTIONS(305),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(305),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(305),
    [anon_sym_null] = ACTIONS(305),
    [anon_sym_Null] = ACTIONS(305),
    [anon_sym_NULL] = ACTIONS(305),
    [sym__TRIM_FUNCTION] = ACTIONS(305),
    [sym__UPON] = ACTIONS(305),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(305),
    [sym__UPON_COMMAND_LINE] = ACTIONS(305),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(305),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(305),
    [sym__UPPER_CASE_FUNC] = ACTIONS(305),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(305),
    [sym__WITH] = ACTIONS(305),
    [anon_sym_zero] = ACTIONS(305),
    [anon_sym_ZERO] = ACTIONS(305),
    [anon_sym_Zero] = ACTIONS(305),
  },
  [63] = {
    [sym__WORD] = ACTIONS(309),
    [anon_sym_DOT] = ACTIONS(311),
    [sym_at_line_column] = ACTIONS(309),
    [anon_sym_AMP] = ACTIONS(311),
    [sym_integer] = ACTIONS(309),
    [sym_decimal] = ACTIONS(311),
    [aux_sym_x_string_token1] = ACTIONS(311),
    [aux_sym_x_string_token2] = ACTIONS(311),
    [aux_sym_h_string_token1] = ACTIONS(311),
    [aux_sym_h_string_token2] = ACTIONS(311),
    [aux_sym_n_string_token1] = ACTIONS(311),
    [aux_sym_n_string_token2] = ACTIONS(311),
    [aux_sym_n_string_token3] = ACTIONS(311),
    [aux_sym_n_string_token4] = ACTIONS(311),
    [aux_sym_n_string_token5] = ACTIONS(311),
    [aux_sym_n_string_token6] = ACTIONS(311),
    [aux_sym_n_string_token7] = ACTIONS(311),
    [aux_sym_n_string_token8] = ACTIONS(311),
    [sym__ADDRESS] = ACTIONS(309),
    [sym__ALL] = ACTIONS(309),
    [sym__CONCATENATE_FUNC] = ACTIONS(309),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(309),
    [sym__DISPLAY] = ACTIONS(309),
    [sym__END_DISPLAY] = ACTIONS(309),
    [sym__EXCEPTION] = ACTIONS(309),
    [sym__FUNCTION_NAME] = ACTIONS(309),
    [anon_sym_high_DASHvalue] = ACTIONS(309),
    [anon_sym_high_DASHValue] = ACTIONS(309),
    [anon_sym_high_DASHVALUE] = ACTIONS(309),
    [anon_sym_High_DASHvalue] = ACTIONS(309),
    [anon_sym_High_DASHValue] = ACTIONS(309),
    [anon_sym_High_DASHVALUE] = ACTIONS(309),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(309),
    [anon_sym_HIGH_DASHValue] = ACTIONS(309),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(309),
    [sym__LENGTH] = ACTIONS(309),
    [sym__LINAGE_COUNTER] = ACTIONS(309),
    [sym__LOCALE_DT_FUNC] = ACTIONS(309),
    [sym__LOWER_CASE_FUNC] = ACTIONS(309),
    [anon_sym_low_DASHvalue] = ACTIONS(309),
    [anon_sym_low_DASHValue] = ACTIONS(309),
    [anon_sym_low_DASHVALUE] = ACTIONS(309),
    [anon_sym_Low_DASHvalue] = ACTIONS(309),
    [anon_sym_Low_DASHValue] = ACTIONS(309),
    [anon_sym_Low_DASHVALUE] = ACTIONS(309),
    [anon_sym_LOW_DASHvalue] = ACTIONS(309),
    [anon_sym_LOW_DASHValue] = ACTIONS(309),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(309),
    [sym__MOVE] = ACTIONS(309),
    [sym__NOT_EXCEPTION] = ACTIONS(309),
    [sym__NO_ADVANCING] = ACTIONS(309),
    [sym__NUMVALC_FUNC] = ACTIONS(309),
    [anon_sym_quote] = ACTIONS(309),
    [anon_sym_QUOTE] = ACTIONS(309),
    [anon_sym_Quote] = ACTIONS(309),
    [sym__REVERSE_FUNC] = ACTIONS(309),
    [anon_sym_space] = ACTIONS(309),
    [anon_sym_SPACE] = ACTIONS(309),
    [anon_sym_Space] = ACTIONS(309),
    [sym__STOP] = ACTIONS(309),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(309),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(309),
    [anon_sym_null] = ACTIONS(309),
    [anon_sym_Null] = ACTIONS(309),
    [anon_sym_NULL] = ACTIONS(309),
    [sym__TRIM_FUNCTION] = ACTIONS(309),
    [sym__UPON] = ACTIONS(309),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(309),
    [sym__UPON_COMMAND_LINE] = ACTIONS(309),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(309),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(309),
    [sym__UPPER_CASE_FUNC] = ACTIONS(309),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(309),
    [sym__WITH] = ACTIONS(309),
    [anon_sym_zero] = ACTIONS(309),
    [anon_sym_ZERO] = ACTIONS(309),
    [anon_sym_Zero] = ACTIONS(309),
  },
  [64] = {
    [sym__WORD] = ACTIONS(286),
    [anon_sym_DOT] = ACTIONS(288),
    [sym_at_line_column] = ACTIONS(286),
    [anon_sym_AMP] = ACTIONS(288),
    [sym_integer] = ACTIONS(286),
    [sym_decimal] = ACTIONS(288),
    [aux_sym_x_string_token1] = ACTIONS(288),
    [aux_sym_x_string_token2] = ACTIONS(288),
    [aux_sym_h_string_token1] = ACTIONS(288),
    [aux_sym_h_string_token2] = ACTIONS(288),
    [aux_sym_n_string_token1] = ACTIONS(288),
    [aux_sym_n_string_token2] = ACTIONS(288),
    [aux_sym_n_string_token3] = ACTIONS(288),
    [aux_sym_n_string_token4] = ACTIONS(288),
    [aux_sym_n_string_token5] = ACTIONS(288),
    [aux_sym_n_string_token6] = ACTIONS(288),
    [aux_sym_n_string_token7] = ACTIONS(288),
    [aux_sym_n_string_token8] = ACTIONS(288),
    [sym__ADDRESS] = ACTIONS(286),
    [sym__ALL] = ACTIONS(286),
    [sym__CONCATENATE_FUNC] = ACTIONS(286),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(286),
    [sym__DISPLAY] = ACTIONS(286),
    [sym__END_DISPLAY] = ACTIONS(286),
    [sym__EXCEPTION] = ACTIONS(286),
    [sym__FUNCTION_NAME] = ACTIONS(286),
    [anon_sym_high_DASHvalue] = ACTIONS(286),
    [anon_sym_high_DASHValue] = ACTIONS(286),
    [anon_sym_high_DASHVALUE] = ACTIONS(286),
    [anon_sym_High_DASHvalue] = ACTIONS(286),
    [anon_sym_High_DASHValue] = ACTIONS(286),
    [anon_sym_High_DASHVALUE] = ACTIONS(286),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(286),
    [anon_sym_HIGH_DASHValue] = ACTIONS(286),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(286),
    [sym__LENGTH] = ACTIONS(286),
    [sym__LINAGE_COUNTER] = ACTIONS(286),
    [sym__LOCALE_DT_FUNC] = ACTIONS(286),
    [sym__LOWER_CASE_FUNC] = ACTIONS(286),
    [anon_sym_low_DASHvalue] = ACTIONS(286),
    [anon_sym_low_DASHValue] = ACTIONS(286),
    [anon_sym_low_DASHVALUE] = ACTIONS(286),
    [anon_sym_Low_DASHvalue] = ACTIONS(286),
    [anon_sym_Low_DASHValue] = ACTIONS(286),
    [anon_sym_Low_DASHVALUE] = ACTIONS(286),
    [anon_sym_LOW_DASHvalue] = ACTIONS(286),
    [anon_sym_LOW_DASHValue] = ACTIONS(286),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(286),
    [sym__MOVE] = ACTIONS(286),
    [sym__NOT_EXCEPTION] = ACTIONS(286),
    [sym__NO_ADVANCING] = ACTIONS(286),
    [sym__NUMVALC_FUNC] = ACTIONS(286),
    [anon_sym_quote] = ACTIONS(286),
    [anon_sym_QUOTE] = ACTIONS(286),
    [anon_sym_Quote] = ACTIONS(286),
    [sym__REVERSE_FUNC] = ACTIONS(286),
    [anon_sym_space] = ACTIONS(286),
    [anon_sym_SPACE] = ACTIONS(286),
    [anon_sym_Space] = ACTIONS(286),
    [sym__STOP] = ACTIONS(286),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(286),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(286),
    [anon_sym_null] = ACTIONS(286),
    [anon_sym_Null] = ACTIONS(286),
    [anon_sym_NULL] = ACTIONS(286),
    [sym__TRIM_FUNCTION] = ACTIONS(286),
    [sym__UPON] = ACTIONS(286),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(286),
    [sym__UPON_COMMAND_LINE] = ACTIONS(286),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(286),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(286),
    [sym__UPPER_CASE_FUNC] = ACTIONS(286),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(286),
    [sym__WITH] = ACTIONS(286),
    [anon_sym_zero] = ACTIONS(286),
    [anon_sym_ZERO] = ACTIONS(286),
    [anon_sym_Zero] = ACTIONS(286),
  },
  [65] = {
    [sym__WORD] = ACTIONS(313),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_at_line_column] = ACTIONS(313),
    [anon_sym_AMP] = ACTIONS(315),
    [sym_integer] = ACTIONS(313),
    [sym_decimal] = ACTIONS(315),
    [aux_sym_x_string_token1] = ACTIONS(315),
    [aux_sym_x_string_token2] = ACTIONS(315),
    [aux_sym_h_string_token1] = ACTIONS(315),
    [aux_sym_h_string_token2] = ACTIONS(315),
    [aux_sym_n_string_token1] = ACTIONS(315),
    [aux_sym_n_string_token2] = ACTIONS(315),
    [aux_sym_n_string_token3] = ACTIONS(315),
    [aux_sym_n_string_token4] = ACTIONS(315),
    [aux_sym_n_string_token5] = ACTIONS(315),
    [aux_sym_n_string_token6] = ACTIONS(315),
    [aux_sym_n_string_token7] = ACTIONS(315),
    [aux_sym_n_string_token8] = ACTIONS(315),
    [sym__ADDRESS] = ACTIONS(313),
    [sym__ALL] = ACTIONS(313),
    [sym__CONCATENATE_FUNC] = ACTIONS(313),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(313),
    [sym__DISPLAY] = ACTIONS(313),
    [sym__END_DISPLAY] = ACTIONS(313),
    [sym__EXCEPTION] = ACTIONS(313),
    [sym__FUNCTION_NAME] = ACTIONS(313),
    [anon_sym_high_DASHvalue] = ACTIONS(313),
    [anon_sym_high_DASHValue] = ACTIONS(313),
    [anon_sym_high_DASHVALUE] = ACTIONS(313),
    [anon_sym_High_DASHvalue] = ACTIONS(313),
    [anon_sym_High_DASHValue] = ACTIONS(313),
    [anon_sym_High_DASHVALUE] = ACTIONS(313),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(313),
    [anon_sym_HIGH_DASHValue] = ACTIONS(313),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(313),
    [sym__LENGTH] = ACTIONS(313),
    [sym__LINAGE_COUNTER] = ACTIONS(313),
    [sym__LOCALE_DT_FUNC] = ACTIONS(313),
    [sym__LOWER_CASE_FUNC] = ACTIONS(313),
    [anon_sym_low_DASHvalue] = ACTIONS(313),
    [anon_sym_low_DASHValue] = ACTIONS(313),
    [anon_sym_low_DASHVALUE] = ACTIONS(313),
    [anon_sym_Low_DASHvalue] = ACTIONS(313),
    [anon_sym_Low_DASHValue] = ACTIONS(313),
    [anon_sym_Low_DASHVALUE] = ACTIONS(313),
    [anon_sym_LOW_DASHvalue] = ACTIONS(313),
    [anon_sym_LOW_DASHValue] = ACTIONS(313),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(313),
    [sym__MOVE] = ACTIONS(313),
    [sym__NOT_EXCEPTION] = ACTIONS(313),
    [sym__NO_ADVANCING] = ACTIONS(313),
    [sym__NUMVALC_FUNC] = ACTIONS(313),
    [anon_sym_quote] = ACTIONS(313),
    [anon_sym_QUOTE] = ACTIONS(313),
    [anon_sym_Quote] = ACTIONS(313),
    [sym__REVERSE_FUNC] = ACTIONS(313),
    [anon_sym_space] = ACTIONS(313),
    [anon_sym_SPACE] = ACTIONS(313),
    [anon_sym_Space] = ACTIONS(313),
    [sym__STOP] = ACTIONS(313),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(313),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(313),
    [anon_sym_null] = ACTIONS(313),
    [anon_sym_Null] = ACTIONS(313),
    [anon_sym_NULL] = ACTIONS(313),
    [sym__TRIM_FUNCTION] = ACTIONS(313),
    [sym__UPON] = ACTIONS(313),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(313),
    [sym__UPON_COMMAND_LINE] = ACTIONS(313),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(313),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(313),
    [sym__UPPER_CASE_FUNC] = ACTIONS(313),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(313),
    [sym__WITH] = ACTIONS(313),
    [anon_sym_zero] = ACTIONS(313),
    [anon_sym_ZERO] = ACTIONS(313),
    [anon_sym_Zero] = ACTIONS(313),
  },
  [66] = {
    [sym__WORD] = ACTIONS(317),
    [anon_sym_DOT] = ACTIONS(319),
    [sym_at_line_column] = ACTIONS(317),
    [anon_sym_AMP] = ACTIONS(319),
    [sym_integer] = ACTIONS(317),
    [sym_decimal] = ACTIONS(319),
    [aux_sym_x_string_token1] = ACTIONS(319),
    [aux_sym_x_string_token2] = ACTIONS(319),
    [aux_sym_h_string_token1] = ACTIONS(319),
    [aux_sym_h_string_token2] = ACTIONS(319),
    [aux_sym_n_string_token1] = ACTIONS(319),
    [aux_sym_n_string_token2] = ACTIONS(319),
    [aux_sym_n_string_token3] = ACTIONS(319),
    [aux_sym_n_string_token4] = ACTIONS(319),
    [aux_sym_n_string_token5] = ACTIONS(319),
    [aux_sym_n_string_token6] = ACTIONS(319),
    [aux_sym_n_string_token7] = ACTIONS(319),
    [aux_sym_n_string_token8] = ACTIONS(319),
    [sym__ADDRESS] = ACTIONS(317),
    [sym__ALL] = ACTIONS(317),
    [sym__CONCATENATE_FUNC] = ACTIONS(317),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(317),
    [sym__DISPLAY] = ACTIONS(317),
    [sym__END_DISPLAY] = ACTIONS(317),
    [sym__EXCEPTION] = ACTIONS(317),
    [sym__FUNCTION_NAME] = ACTIONS(317),
    [anon_sym_high_DASHvalue] = ACTIONS(317),
    [anon_sym_high_DASHValue] = ACTIONS(317),
    [anon_sym_high_DASHVALUE] = ACTIONS(317),
    [anon_sym_High_DASHvalue] = ACTIONS(317),
    [anon_sym_High_DASHValue] = ACTIONS(317),
    [anon_sym_High_DASHVALUE] = ACTIONS(317),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(317),
    [anon_sym_HIGH_DASHValue] = ACTIONS(317),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(317),
    [sym__LENGTH] = ACTIONS(317),
    [sym__LINAGE_COUNTER] = ACTIONS(317),
    [sym__LOCALE_DT_FUNC] = ACTIONS(317),
    [sym__LOWER_CASE_FUNC] = ACTIONS(317),
    [anon_sym_low_DASHvalue] = ACTIONS(317),
    [anon_sym_low_DASHValue] = ACTIONS(317),
    [anon_sym_low_DASHVALUE] = ACTIONS(317),
    [anon_sym_Low_DASHvalue] = ACTIONS(317),
    [anon_sym_Low_DASHValue] = ACTIONS(317),
    [anon_sym_Low_DASHVALUE] = ACTIONS(317),
    [anon_sym_LOW_DASHvalue] = ACTIONS(317),
    [anon_sym_LOW_DASHValue] = ACTIONS(317),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(317),
    [sym__MOVE] = ACTIONS(317),
    [sym__NOT_EXCEPTION] = ACTIONS(317),
    [sym__NO_ADVANCING] = ACTIONS(317),
    [sym__NUMVALC_FUNC] = ACTIONS(317),
    [anon_sym_quote] = ACTIONS(317),
    [anon_sym_QUOTE] = ACTIONS(317),
    [anon_sym_Quote] = ACTIONS(317),
    [sym__REVERSE_FUNC] = ACTIONS(317),
    [anon_sym_space] = ACTIONS(317),
    [anon_sym_SPACE] = ACTIONS(317),
    [anon_sym_Space] = ACTIONS(317),
    [sym__STOP] = ACTIONS(317),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(317),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(317),
    [anon_sym_null] = ACTIONS(317),
    [anon_sym_Null] = ACTIONS(317),
    [anon_sym_NULL] = ACTIONS(317),
    [sym__TRIM_FUNCTION] = ACTIONS(317),
    [sym__UPON] = ACTIONS(317),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(317),
    [sym__UPON_COMMAND_LINE] = ACTIONS(317),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(317),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(317),
    [sym__UPPER_CASE_FUNC] = ACTIONS(317),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(317),
    [sym__WITH] = ACTIONS(317),
    [anon_sym_zero] = ACTIONS(317),
    [anon_sym_ZERO] = ACTIONS(317),
    [anon_sym_Zero] = ACTIONS(317),
  },
  [67] = {
    [sym__WORD] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(323),
    [sym_at_line_column] = ACTIONS(321),
    [anon_sym_AMP] = ACTIONS(323),
    [sym_integer] = ACTIONS(321),
    [sym_decimal] = ACTIONS(323),
    [aux_sym_x_string_token1] = ACTIONS(323),
    [aux_sym_x_string_token2] = ACTIONS(323),
    [aux_sym_h_string_token1] = ACTIONS(323),
    [aux_sym_h_string_token2] = ACTIONS(323),
    [aux_sym_n_string_token1] = ACTIONS(323),
    [aux_sym_n_string_token2] = ACTIONS(323),
    [aux_sym_n_string_token3] = ACTIONS(323),
    [aux_sym_n_string_token4] = ACTIONS(323),
    [aux_sym_n_string_token5] = ACTIONS(323),
    [aux_sym_n_string_token6] = ACTIONS(323),
    [aux_sym_n_string_token7] = ACTIONS(323),
    [aux_sym_n_string_token8] = ACTIONS(323),
    [sym__ADDRESS] = ACTIONS(321),
    [sym__ALL] = ACTIONS(321),
    [sym__CONCATENATE_FUNC] = ACTIONS(321),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(321),
    [sym__DISPLAY] = ACTIONS(321),
    [sym__END_DISPLAY] = ACTIONS(321),
    [sym__EXCEPTION] = ACTIONS(321),
    [sym__FUNCTION_NAME] = ACTIONS(321),
    [anon_sym_high_DASHvalue] = ACTIONS(321),
    [anon_sym_high_DASHValue] = ACTIONS(321),
    [anon_sym_high_DASHVALUE] = ACTIONS(321),
    [anon_sym_High_DASHvalue] = ACTIONS(321),
    [anon_sym_High_DASHValue] = ACTIONS(321),
    [anon_sym_High_DASHVALUE] = ACTIONS(321),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(321),
    [anon_sym_HIGH_DASHValue] = ACTIONS(321),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(321),
    [sym__LENGTH] = ACTIONS(321),
    [sym__LINAGE_COUNTER] = ACTIONS(321),
    [sym__LOCALE_DT_FUNC] = ACTIONS(321),
    [sym__LOWER_CASE_FUNC] = ACTIONS(321),
    [anon_sym_low_DASHvalue] = ACTIONS(321),
    [anon_sym_low_DASHValue] = ACTIONS(321),
    [anon_sym_low_DASHVALUE] = ACTIONS(321),
    [anon_sym_Low_DASHvalue] = ACTIONS(321),
    [anon_sym_Low_DASHValue] = ACTIONS(321),
    [anon_sym_Low_DASHVALUE] = ACTIONS(321),
    [anon_sym_LOW_DASHvalue] = ACTIONS(321),
    [anon_sym_LOW_DASHValue] = ACTIONS(321),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(321),
    [sym__MOVE] = ACTIONS(321),
    [sym__NOT_EXCEPTION] = ACTIONS(321),
    [sym__NO_ADVANCING] = ACTIONS(321),
    [sym__NUMVALC_FUNC] = ACTIONS(321),
    [anon_sym_quote] = ACTIONS(321),
    [anon_sym_QUOTE] = ACTIONS(321),
    [anon_sym_Quote] = ACTIONS(321),
    [sym__REVERSE_FUNC] = ACTIONS(321),
    [anon_sym_space] = ACTIONS(321),
    [anon_sym_SPACE] = ACTIONS(321),
    [anon_sym_Space] = ACTIONS(321),
    [sym__STOP] = ACTIONS(321),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(321),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(321),
    [anon_sym_null] = ACTIONS(321),
    [anon_sym_Null] = ACTIONS(321),
    [anon_sym_NULL] = ACTIONS(321),
    [sym__TRIM_FUNCTION] = ACTIONS(321),
    [sym__UPON] = ACTIONS(321),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(321),
    [sym__UPON_COMMAND_LINE] = ACTIONS(321),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(321),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(321),
    [sym__UPPER_CASE_FUNC] = ACTIONS(321),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(321),
    [sym__WITH] = ACTIONS(321),
    [anon_sym_zero] = ACTIONS(321),
    [anon_sym_ZERO] = ACTIONS(321),
    [anon_sym_Zero] = ACTIONS(321),
  },
  [68] = {
    [sym__WORD] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(327),
    [sym_at_line_column] = ACTIONS(325),
    [sym_integer] = ACTIONS(325),
    [sym_decimal] = ACTIONS(327),
    [aux_sym_x_string_token1] = ACTIONS(327),
    [aux_sym_x_string_token2] = ACTIONS(327),
    [aux_sym_h_string_token1] = ACTIONS(327),
    [aux_sym_h_string_token2] = ACTIONS(327),
    [aux_sym_n_string_token1] = ACTIONS(327),
    [aux_sym_n_string_token2] = ACTIONS(327),
    [aux_sym_n_string_token3] = ACTIONS(327),
    [aux_sym_n_string_token4] = ACTIONS(327),
    [aux_sym_n_string_token5] = ACTIONS(327),
    [aux_sym_n_string_token6] = ACTIONS(327),
    [aux_sym_n_string_token7] = ACTIONS(327),
    [aux_sym_n_string_token8] = ACTIONS(327),
    [sym__ADDRESS] = ACTIONS(325),
    [sym__ALL] = ACTIONS(325),
    [sym__CONCATENATE_FUNC] = ACTIONS(325),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(325),
    [sym__DISPLAY] = ACTIONS(325),
    [sym__END_DISPLAY] = ACTIONS(325),
    [sym__EXCEPTION] = ACTIONS(325),
    [sym__FUNCTION_NAME] = ACTIONS(325),
    [anon_sym_high_DASHvalue] = ACTIONS(325),
    [anon_sym_high_DASHValue] = ACTIONS(325),
    [anon_sym_high_DASHVALUE] = ACTIONS(325),
    [anon_sym_High_DASHvalue] = ACTIONS(325),
    [anon_sym_High_DASHValue] = ACTIONS(325),
    [anon_sym_High_DASHVALUE] = ACTIONS(325),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(325),
    [anon_sym_HIGH_DASHValue] = ACTIONS(325),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(325),
    [sym__LENGTH] = ACTIONS(325),
    [sym__LINAGE_COUNTER] = ACTIONS(325),
    [sym__LOCALE_DT_FUNC] = ACTIONS(325),
    [sym__LOWER_CASE_FUNC] = ACTIONS(325),
    [anon_sym_low_DASHvalue] = ACTIONS(325),
    [anon_sym_low_DASHValue] = ACTIONS(325),
    [anon_sym_low_DASHVALUE] = ACTIONS(325),
    [anon_sym_Low_DASHvalue] = ACTIONS(325),
    [anon_sym_Low_DASHValue] = ACTIONS(325),
    [anon_sym_Low_DASHVALUE] = ACTIONS(325),
    [anon_sym_LOW_DASHvalue] = ACTIONS(325),
    [anon_sym_LOW_DASHValue] = ACTIONS(325),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(325),
    [sym__MOVE] = ACTIONS(325),
    [sym__NOT_EXCEPTION] = ACTIONS(325),
    [sym__NO_ADVANCING] = ACTIONS(325),
    [sym__NUMVALC_FUNC] = ACTIONS(325),
    [anon_sym_quote] = ACTIONS(325),
    [anon_sym_QUOTE] = ACTIONS(325),
    [anon_sym_Quote] = ACTIONS(325),
    [sym__REVERSE_FUNC] = ACTIONS(325),
    [anon_sym_space] = ACTIONS(325),
    [anon_sym_SPACE] = ACTIONS(325),
    [anon_sym_Space] = ACTIONS(325),
    [sym__STOP] = ACTIONS(325),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(325),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(325),
    [anon_sym_null] = ACTIONS(325),
    [anon_sym_Null] = ACTIONS(325),
    [anon_sym_NULL] = ACTIONS(325),
    [sym__TRIM_FUNCTION] = ACTIONS(325),
    [sym__UPON] = ACTIONS(325),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(329),
    [sym__UPON_COMMAND_LINE] = ACTIONS(329),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(329),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(329),
    [sym__UPPER_CASE_FUNC] = ACTIONS(325),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(325),
    [sym__WITH] = ACTIONS(325),
    [anon_sym_zero] = ACTIONS(325),
    [anon_sym_ZERO] = ACTIONS(325),
    [anon_sym_Zero] = ACTIONS(325),
  },
  [69] = {
    [sym__WORD] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(333),
    [sym_at_line_column] = ACTIONS(331),
    [sym_integer] = ACTIONS(331),
    [sym_decimal] = ACTIONS(333),
    [aux_sym_x_string_token1] = ACTIONS(333),
    [aux_sym_x_string_token2] = ACTIONS(333),
    [aux_sym_h_string_token1] = ACTIONS(333),
    [aux_sym_h_string_token2] = ACTIONS(333),
    [aux_sym_n_string_token1] = ACTIONS(333),
    [aux_sym_n_string_token2] = ACTIONS(333),
    [aux_sym_n_string_token3] = ACTIONS(333),
    [aux_sym_n_string_token4] = ACTIONS(333),
    [aux_sym_n_string_token5] = ACTIONS(333),
    [aux_sym_n_string_token6] = ACTIONS(333),
    [aux_sym_n_string_token7] = ACTIONS(333),
    [aux_sym_n_string_token8] = ACTIONS(333),
    [sym__ADDRESS] = ACTIONS(331),
    [sym__ALL] = ACTIONS(331),
    [sym__CONCATENATE_FUNC] = ACTIONS(331),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(331),
    [sym__DISPLAY] = ACTIONS(331),
    [sym__END_DISPLAY] = ACTIONS(331),
    [sym__EXCEPTION] = ACTIONS(331),
    [sym__FUNCTION_NAME] = ACTIONS(331),
    [anon_sym_high_DASHvalue] = ACTIONS(331),
    [anon_sym_high_DASHValue] = ACTIONS(331),
    [anon_sym_high_DASHVALUE] = ACTIONS(331),
    [anon_sym_High_DASHvalue] = ACTIONS(331),
    [anon_sym_High_DASHValue] = ACTIONS(331),
    [anon_sym_High_DASHVALUE] = ACTIONS(331),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(331),
    [anon_sym_HIGH_DASHValue] = ACTIONS(331),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(331),
    [sym__LENGTH] = ACTIONS(331),
    [sym__LINAGE_COUNTER] = ACTIONS(331),
    [sym__LOCALE_DT_FUNC] = ACTIONS(331),
    [sym__LOWER_CASE_FUNC] = ACTIONS(331),
    [anon_sym_low_DASHvalue] = ACTIONS(331),
    [anon_sym_low_DASHValue] = ACTIONS(331),
    [anon_sym_low_DASHVALUE] = ACTIONS(331),
    [anon_sym_Low_DASHvalue] = ACTIONS(331),
    [anon_sym_Low_DASHValue] = ACTIONS(331),
    [anon_sym_Low_DASHVALUE] = ACTIONS(331),
    [anon_sym_LOW_DASHvalue] = ACTIONS(331),
    [anon_sym_LOW_DASHValue] = ACTIONS(331),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(331),
    [sym__MOVE] = ACTIONS(331),
    [sym__NOT_EXCEPTION] = ACTIONS(331),
    [sym__NO_ADVANCING] = ACTIONS(331),
    [sym__NUMVALC_FUNC] = ACTIONS(331),
    [anon_sym_quote] = ACTIONS(331),
    [anon_sym_QUOTE] = ACTIONS(331),
    [anon_sym_Quote] = ACTIONS(331),
    [sym__REVERSE_FUNC] = ACTIONS(331),
    [anon_sym_space] = ACTIONS(331),
    [anon_sym_SPACE] = ACTIONS(331),
    [anon_sym_Space] = ACTIONS(331),
    [sym__STOP] = ACTIONS(331),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(331),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(331),
    [anon_sym_null] = ACTIONS(331),
    [anon_sym_Null] = ACTIONS(331),
    [anon_sym_NULL] = ACTIONS(331),
    [sym__TRIM_FUNCTION] = ACTIONS(331),
    [sym__UPON] = ACTIONS(331),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(331),
    [sym__UPON_COMMAND_LINE] = ACTIONS(331),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(331),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(331),
    [sym__UPPER_CASE_FUNC] = ACTIONS(331),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(331),
    [sym__WITH] = ACTIONS(331),
    [anon_sym_zero] = ACTIONS(331),
    [anon_sym_ZERO] = ACTIONS(331),
    [anon_sym_Zero] = ACTIONS(331),
  },
  [70] = {
    [sym__in_of] = STATE(414),
    [sym__WORD] = ACTIONS(335),
    [anon_sym_DOT] = ACTIONS(337),
    [sym_at_line_column] = ACTIONS(335),
    [sym_integer] = ACTIONS(335),
    [sym_decimal] = ACTIONS(337),
    [aux_sym_x_string_token1] = ACTIONS(337),
    [aux_sym_x_string_token2] = ACTIONS(337),
    [aux_sym_h_string_token1] = ACTIONS(337),
    [aux_sym_h_string_token2] = ACTIONS(337),
    [aux_sym_n_string_token1] = ACTIONS(337),
    [aux_sym_n_string_token2] = ACTIONS(337),
    [aux_sym_n_string_token3] = ACTIONS(337),
    [aux_sym_n_string_token4] = ACTIONS(337),
    [aux_sym_n_string_token5] = ACTIONS(337),
    [aux_sym_n_string_token6] = ACTIONS(337),
    [aux_sym_n_string_token7] = ACTIONS(337),
    [aux_sym_n_string_token8] = ACTIONS(337),
    [sym__ADDRESS] = ACTIONS(335),
    [sym__ALL] = ACTIONS(335),
    [sym__CONCATENATE_FUNC] = ACTIONS(335),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(335),
    [sym__DISPLAY] = ACTIONS(335),
    [sym__END_DISPLAY] = ACTIONS(335),
    [sym__EXCEPTION] = ACTIONS(335),
    [sym__FUNCTION_NAME] = ACTIONS(335),
    [anon_sym_high_DASHvalue] = ACTIONS(335),
    [anon_sym_high_DASHValue] = ACTIONS(335),
    [anon_sym_high_DASHVALUE] = ACTIONS(335),
    [anon_sym_High_DASHvalue] = ACTIONS(335),
    [anon_sym_High_DASHValue] = ACTIONS(335),
    [anon_sym_High_DASHVALUE] = ACTIONS(335),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(335),
    [anon_sym_HIGH_DASHValue] = ACTIONS(335),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(335),
    [sym__IN] = ACTIONS(339),
    [sym__LENGTH] = ACTIONS(335),
    [sym__LINAGE_COUNTER] = ACTIONS(335),
    [sym__LOCALE_DT_FUNC] = ACTIONS(335),
    [sym__LOWER_CASE_FUNC] = ACTIONS(335),
    [anon_sym_low_DASHvalue] = ACTIONS(335),
    [anon_sym_low_DASHValue] = ACTIONS(335),
    [anon_sym_low_DASHVALUE] = ACTIONS(335),
    [anon_sym_Low_DASHvalue] = ACTIONS(335),
    [anon_sym_Low_DASHValue] = ACTIONS(335),
    [anon_sym_Low_DASHVALUE] = ACTIONS(335),
    [anon_sym_LOW_DASHvalue] = ACTIONS(335),
    [anon_sym_LOW_DASHValue] = ACTIONS(335),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(335),
    [sym__MOVE] = ACTIONS(335),
    [sym__NOT_EXCEPTION] = ACTIONS(335),
    [sym__NO_ADVANCING] = ACTIONS(335),
    [sym__NUMVALC_FUNC] = ACTIONS(335),
    [sym__OF] = ACTIONS(339),
    [anon_sym_quote] = ACTIONS(335),
    [anon_sym_QUOTE] = ACTIONS(335),
    [anon_sym_Quote] = ACTIONS(335),
    [sym__REVERSE_FUNC] = ACTIONS(335),
    [anon_sym_space] = ACTIONS(335),
    [anon_sym_SPACE] = ACTIONS(335),
    [anon_sym_Space] = ACTIONS(335),
    [sym__STOP] = ACTIONS(335),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(335),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(335),
    [anon_sym_null] = ACTIONS(335),
    [anon_sym_Null] = ACTIONS(335),
    [anon_sym_NULL] = ACTIONS(335),
    [sym__TRIM_FUNCTION] = ACTIONS(335),
    [sym__UPON] = ACTIONS(335),
    [sym__UPPER_CASE_FUNC] = ACTIONS(335),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(335),
    [sym__WITH] = ACTIONS(335),
    [anon_sym_zero] = ACTIONS(335),
    [anon_sym_ZERO] = ACTIONS(335),
    [anon_sym_Zero] = ACTIONS(335),
  },
  [71] = {
    [sym__func_args] = STATE(85),
    [sym__WORD] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(345),
    [sym_at_line_column] = ACTIONS(341),
    [sym_integer] = ACTIONS(341),
    [sym_decimal] = ACTIONS(343),
    [aux_sym_x_string_token1] = ACTIONS(343),
    [aux_sym_x_string_token2] = ACTIONS(343),
    [aux_sym_h_string_token1] = ACTIONS(343),
    [aux_sym_h_string_token2] = ACTIONS(343),
    [aux_sym_n_string_token1] = ACTIONS(343),
    [aux_sym_n_string_token2] = ACTIONS(343),
    [aux_sym_n_string_token3] = ACTIONS(343),
    [aux_sym_n_string_token4] = ACTIONS(343),
    [aux_sym_n_string_token5] = ACTIONS(343),
    [aux_sym_n_string_token6] = ACTIONS(343),
    [aux_sym_n_string_token7] = ACTIONS(343),
    [aux_sym_n_string_token8] = ACTIONS(343),
    [sym__ADDRESS] = ACTIONS(341),
    [sym__ALL] = ACTIONS(341),
    [sym__CONCATENATE_FUNC] = ACTIONS(341),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(341),
    [sym__DISPLAY] = ACTIONS(341),
    [sym__END_DISPLAY] = ACTIONS(341),
    [sym__EXCEPTION] = ACTIONS(341),
    [sym__FUNCTION_NAME] = ACTIONS(341),
    [anon_sym_high_DASHvalue] = ACTIONS(341),
    [anon_sym_high_DASHValue] = ACTIONS(341),
    [anon_sym_high_DASHVALUE] = ACTIONS(341),
    [anon_sym_High_DASHvalue] = ACTIONS(341),
    [anon_sym_High_DASHValue] = ACTIONS(341),
    [anon_sym_High_DASHVALUE] = ACTIONS(341),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(341),
    [anon_sym_HIGH_DASHValue] = ACTIONS(341),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(341),
    [sym__LENGTH] = ACTIONS(341),
    [sym__LINAGE_COUNTER] = ACTIONS(341),
    [sym__LOCALE_DT_FUNC] = ACTIONS(341),
    [sym__LOWER_CASE_FUNC] = ACTIONS(341),
    [anon_sym_low_DASHvalue] = ACTIONS(341),
    [anon_sym_low_DASHValue] = ACTIONS(341),
    [anon_sym_low_DASHVALUE] = ACTIONS(341),
    [anon_sym_Low_DASHvalue] = ACTIONS(341),
    [anon_sym_Low_DASHValue] = ACTIONS(341),
    [anon_sym_Low_DASHVALUE] = ACTIONS(341),
    [anon_sym_LOW_DASHvalue] = ACTIONS(341),
    [anon_sym_LOW_DASHValue] = ACTIONS(341),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(341),
    [sym__MOVE] = ACTIONS(341),
    [sym__NOT_EXCEPTION] = ACTIONS(341),
    [sym__NO_ADVANCING] = ACTIONS(341),
    [sym__NUMVALC_FUNC] = ACTIONS(341),
    [anon_sym_quote] = ACTIONS(341),
    [anon_sym_QUOTE] = ACTIONS(341),
    [anon_sym_Quote] = ACTIONS(341),
    [sym__REVERSE_FUNC] = ACTIONS(341),
    [anon_sym_space] = ACTIONS(341),
    [anon_sym_SPACE] = ACTIONS(341),
    [anon_sym_Space] = ACTIONS(341),
    [sym__STOP] = ACTIONS(341),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(341),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(341),
    [anon_sym_null] = ACTIONS(341),
    [anon_sym_Null] = ACTIONS(341),
    [anon_sym_NULL] = ACTIONS(341),
    [sym__TRIM_FUNCTION] = ACTIONS(341),
    [sym__UPON] = ACTIONS(341),
    [sym__UPPER_CASE_FUNC] = ACTIONS(341),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(341),
    [sym__WITH] = ACTIONS(341),
    [anon_sym_zero] = ACTIONS(341),
    [anon_sym_ZERO] = ACTIONS(341),
    [anon_sym_Zero] = ACTIONS(341),
  },
  [72] = {
    [sym_func_refmod] = STATE(85),
    [sym__WORD] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(347),
    [sym_at_line_column] = ACTIONS(341),
    [sym_integer] = ACTIONS(341),
    [sym_decimal] = ACTIONS(343),
    [aux_sym_x_string_token1] = ACTIONS(343),
    [aux_sym_x_string_token2] = ACTIONS(343),
    [aux_sym_h_string_token1] = ACTIONS(343),
    [aux_sym_h_string_token2] = ACTIONS(343),
    [aux_sym_n_string_token1] = ACTIONS(343),
    [aux_sym_n_string_token2] = ACTIONS(343),
    [aux_sym_n_string_token3] = ACTIONS(343),
    [aux_sym_n_string_token4] = ACTIONS(343),
    [aux_sym_n_string_token5] = ACTIONS(343),
    [aux_sym_n_string_token6] = ACTIONS(343),
    [aux_sym_n_string_token7] = ACTIONS(343),
    [aux_sym_n_string_token8] = ACTIONS(343),
    [sym__ADDRESS] = ACTIONS(341),
    [sym__ALL] = ACTIONS(341),
    [sym__CONCATENATE_FUNC] = ACTIONS(341),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(341),
    [sym__DISPLAY] = ACTIONS(341),
    [sym__END_DISPLAY] = ACTIONS(341),
    [sym__EXCEPTION] = ACTIONS(341),
    [sym__FUNCTION_NAME] = ACTIONS(341),
    [anon_sym_high_DASHvalue] = ACTIONS(341),
    [anon_sym_high_DASHValue] = ACTIONS(341),
    [anon_sym_high_DASHVALUE] = ACTIONS(341),
    [anon_sym_High_DASHvalue] = ACTIONS(341),
    [anon_sym_High_DASHValue] = ACTIONS(341),
    [anon_sym_High_DASHVALUE] = ACTIONS(341),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(341),
    [anon_sym_HIGH_DASHValue] = ACTIONS(341),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(341),
    [sym__LENGTH] = ACTIONS(341),
    [sym__LINAGE_COUNTER] = ACTIONS(341),
    [sym__LOCALE_DT_FUNC] = ACTIONS(341),
    [sym__LOWER_CASE_FUNC] = ACTIONS(341),
    [anon_sym_low_DASHvalue] = ACTIONS(341),
    [anon_sym_low_DASHValue] = ACTIONS(341),
    [anon_sym_low_DASHVALUE] = ACTIONS(341),
    [anon_sym_Low_DASHvalue] = ACTIONS(341),
    [anon_sym_Low_DASHValue] = ACTIONS(341),
    [anon_sym_Low_DASHVALUE] = ACTIONS(341),
    [anon_sym_LOW_DASHvalue] = ACTIONS(341),
    [anon_sym_LOW_DASHValue] = ACTIONS(341),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(341),
    [sym__MOVE] = ACTIONS(341),
    [sym__NOT_EXCEPTION] = ACTIONS(341),
    [sym__NO_ADVANCING] = ACTIONS(341),
    [sym__NUMVALC_FUNC] = ACTIONS(341),
    [anon_sym_quote] = ACTIONS(341),
    [anon_sym_QUOTE] = ACTIONS(341),
    [anon_sym_Quote] = ACTIONS(341),
    [sym__REVERSE_FUNC] = ACTIONS(341),
    [anon_sym_space] = ACTIONS(341),
    [anon_sym_SPACE] = ACTIONS(341),
    [anon_sym_Space] = ACTIONS(341),
    [sym__STOP] = ACTIONS(341),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(341),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(341),
    [anon_sym_null] = ACTIONS(341),
    [anon_sym_Null] = ACTIONS(341),
    [anon_sym_NULL] = ACTIONS(341),
    [sym__TRIM_FUNCTION] = ACTIONS(341),
    [sym__UPON] = ACTIONS(341),
    [sym__UPPER_CASE_FUNC] = ACTIONS(341),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(341),
    [sym__WITH] = ACTIONS(341),
    [anon_sym_zero] = ACTIONS(341),
    [anon_sym_ZERO] = ACTIONS(341),
    [anon_sym_Zero] = ACTIONS(341),
  },
  [73] = {
    [sym_func_refmod] = STATE(79),
    [sym__WORD] = ACTIONS(349),
    [anon_sym_DOT] = ACTIONS(351),
    [anon_sym_LPAREN] = ACTIONS(347),
    [sym_at_line_column] = ACTIONS(349),
    [sym_integer] = ACTIONS(349),
    [sym_decimal] = ACTIONS(351),
    [aux_sym_x_string_token1] = ACTIONS(351),
    [aux_sym_x_string_token2] = ACTIONS(351),
    [aux_sym_h_string_token1] = ACTIONS(351),
    [aux_sym_h_string_token2] = ACTIONS(351),
    [aux_sym_n_string_token1] = ACTIONS(351),
    [aux_sym_n_string_token2] = ACTIONS(351),
    [aux_sym_n_string_token3] = ACTIONS(351),
    [aux_sym_n_string_token4] = ACTIONS(351),
    [aux_sym_n_string_token5] = ACTIONS(351),
    [aux_sym_n_string_token6] = ACTIONS(351),
    [aux_sym_n_string_token7] = ACTIONS(351),
    [aux_sym_n_string_token8] = ACTIONS(351),
    [sym__ADDRESS] = ACTIONS(349),
    [sym__ALL] = ACTIONS(349),
    [sym__CONCATENATE_FUNC] = ACTIONS(349),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(349),
    [sym__DISPLAY] = ACTIONS(349),
    [sym__END_DISPLAY] = ACTIONS(349),
    [sym__EXCEPTION] = ACTIONS(349),
    [sym__FUNCTION_NAME] = ACTIONS(349),
    [anon_sym_high_DASHvalue] = ACTIONS(349),
    [anon_sym_high_DASHValue] = ACTIONS(349),
    [anon_sym_high_DASHVALUE] = ACTIONS(349),
    [anon_sym_High_DASHvalue] = ACTIONS(349),
    [anon_sym_High_DASHValue] = ACTIONS(349),
    [anon_sym_High_DASHVALUE] = ACTIONS(349),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(349),
    [anon_sym_HIGH_DASHValue] = ACTIONS(349),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(349),
    [sym__LENGTH] = ACTIONS(349),
    [sym__LINAGE_COUNTER] = ACTIONS(349),
    [sym__LOCALE_DT_FUNC] = ACTIONS(349),
    [sym__LOWER_CASE_FUNC] = ACTIONS(349),
    [anon_sym_low_DASHvalue] = ACTIONS(349),
    [anon_sym_low_DASHValue] = ACTIONS(349),
    [anon_sym_low_DASHVALUE] = ACTIONS(349),
    [anon_sym_Low_DASHvalue] = ACTIONS(349),
    [anon_sym_Low_DASHValue] = ACTIONS(349),
    [anon_sym_Low_DASHVALUE] = ACTIONS(349),
    [anon_sym_LOW_DASHvalue] = ACTIONS(349),
    [anon_sym_LOW_DASHValue] = ACTIONS(349),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(349),
    [sym__MOVE] = ACTIONS(349),
    [sym__NOT_EXCEPTION] = ACTIONS(349),
    [sym__NO_ADVANCING] = ACTIONS(349),
    [sym__NUMVALC_FUNC] = ACTIONS(349),
    [anon_sym_quote] = ACTIONS(349),
    [anon_sym_QUOTE] = ACTIONS(349),
    [anon_sym_Quote] = ACTIONS(349),
    [sym__REVERSE_FUNC] = ACTIONS(349),
    [anon_sym_space] = ACTIONS(349),
    [anon_sym_SPACE] = ACTIONS(349),
    [anon_sym_Space] = ACTIONS(349),
    [sym__STOP] = ACTIONS(349),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(349),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(349),
    [anon_sym_null] = ACTIONS(349),
    [anon_sym_Null] = ACTIONS(349),
    [anon_sym_NULL] = ACTIONS(349),
    [sym__TRIM_FUNCTION] = ACTIONS(349),
    [sym__UPON] = ACTIONS(349),
    [sym__UPPER_CASE_FUNC] = ACTIONS(349),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(349),
    [sym__WITH] = ACTIONS(349),
    [anon_sym_zero] = ACTIONS(349),
    [anon_sym_ZERO] = ACTIONS(349),
    [anon_sym_Zero] = ACTIONS(349),
  },
  [74] = {
    [sym__WORD] = ACTIONS(353),
    [anon_sym_DOT] = ACTIONS(355),
    [anon_sym_LPAREN] = ACTIONS(355),
    [sym_at_line_column] = ACTIONS(353),
    [sym_integer] = ACTIONS(353),
    [sym_decimal] = ACTIONS(355),
    [aux_sym_x_string_token1] = ACTIONS(355),
    [aux_sym_x_string_token2] = ACTIONS(355),
    [aux_sym_h_string_token1] = ACTIONS(355),
    [aux_sym_h_string_token2] = ACTIONS(355),
    [aux_sym_n_string_token1] = ACTIONS(355),
    [aux_sym_n_string_token2] = ACTIONS(355),
    [aux_sym_n_string_token3] = ACTIONS(355),
    [aux_sym_n_string_token4] = ACTIONS(355),
    [aux_sym_n_string_token5] = ACTIONS(355),
    [aux_sym_n_string_token6] = ACTIONS(355),
    [aux_sym_n_string_token7] = ACTIONS(355),
    [aux_sym_n_string_token8] = ACTIONS(355),
    [sym__ADDRESS] = ACTIONS(353),
    [sym__ALL] = ACTIONS(353),
    [sym__CONCATENATE_FUNC] = ACTIONS(353),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(353),
    [sym__DISPLAY] = ACTIONS(353),
    [sym__END_DISPLAY] = ACTIONS(353),
    [sym__EXCEPTION] = ACTIONS(353),
    [sym__FUNCTION_NAME] = ACTIONS(353),
    [anon_sym_high_DASHvalue] = ACTIONS(353),
    [anon_sym_high_DASHValue] = ACTIONS(353),
    [anon_sym_high_DASHVALUE] = ACTIONS(353),
    [anon_sym_High_DASHvalue] = ACTIONS(353),
    [anon_sym_High_DASHValue] = ACTIONS(353),
    [anon_sym_High_DASHVALUE] = ACTIONS(353),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(353),
    [anon_sym_HIGH_DASHValue] = ACTIONS(353),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(353),
    [sym__LENGTH] = ACTIONS(353),
    [sym__LINAGE_COUNTER] = ACTIONS(353),
    [sym__LOCALE_DT_FUNC] = ACTIONS(353),
    [sym__LOWER_CASE_FUNC] = ACTIONS(353),
    [anon_sym_low_DASHvalue] = ACTIONS(353),
    [anon_sym_low_DASHValue] = ACTIONS(353),
    [anon_sym_low_DASHVALUE] = ACTIONS(353),
    [anon_sym_Low_DASHvalue] = ACTIONS(353),
    [anon_sym_Low_DASHValue] = ACTIONS(353),
    [anon_sym_Low_DASHVALUE] = ACTIONS(353),
    [anon_sym_LOW_DASHvalue] = ACTIONS(353),
    [anon_sym_LOW_DASHValue] = ACTIONS(353),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(353),
    [sym__MOVE] = ACTIONS(353),
    [sym__NOT_EXCEPTION] = ACTIONS(353),
    [sym__NO_ADVANCING] = ACTIONS(353),
    [sym__NUMVALC_FUNC] = ACTIONS(353),
    [anon_sym_quote] = ACTIONS(353),
    [anon_sym_QUOTE] = ACTIONS(353),
    [anon_sym_Quote] = ACTIONS(353),
    [sym__REVERSE_FUNC] = ACTIONS(353),
    [anon_sym_space] = ACTIONS(353),
    [anon_sym_SPACE] = ACTIONS(353),
    [anon_sym_Space] = ACTIONS(353),
    [sym__STOP] = ACTIONS(353),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(353),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(353),
    [anon_sym_null] = ACTIONS(353),
    [anon_sym_Null] = ACTIONS(353),
    [anon_sym_NULL] = ACTIONS(353),
    [sym__TRIM_FUNCTION] = ACTIONS(353),
    [sym__UPON] = ACTIONS(353),
    [sym__UPPER_CASE_FUNC] = ACTIONS(353),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(353),
    [sym__WITH] = ACTIONS(353),
    [anon_sym_zero] = ACTIONS(353),
    [anon_sym_ZERO] = ACTIONS(353),
    [anon_sym_Zero] = ACTIONS(353),
  },
  [75] = {
    [sym__WORD] = ACTIONS(357),
    [anon_sym_DOT] = ACTIONS(359),
    [anon_sym_LPAREN] = ACTIONS(359),
    [sym_at_line_column] = ACTIONS(357),
    [sym_integer] = ACTIONS(357),
    [sym_decimal] = ACTIONS(359),
    [aux_sym_x_string_token1] = ACTIONS(359),
    [aux_sym_x_string_token2] = ACTIONS(359),
    [aux_sym_h_string_token1] = ACTIONS(359),
    [aux_sym_h_string_token2] = ACTIONS(359),
    [aux_sym_n_string_token1] = ACTIONS(359),
    [aux_sym_n_string_token2] = ACTIONS(359),
    [aux_sym_n_string_token3] = ACTIONS(359),
    [aux_sym_n_string_token4] = ACTIONS(359),
    [aux_sym_n_string_token5] = ACTIONS(359),
    [aux_sym_n_string_token6] = ACTIONS(359),
    [aux_sym_n_string_token7] = ACTIONS(359),
    [aux_sym_n_string_token8] = ACTIONS(359),
    [sym__ADDRESS] = ACTIONS(357),
    [sym__ALL] = ACTIONS(357),
    [sym__CONCATENATE_FUNC] = ACTIONS(357),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(357),
    [sym__DISPLAY] = ACTIONS(357),
    [sym__END_DISPLAY] = ACTIONS(357),
    [sym__EXCEPTION] = ACTIONS(357),
    [sym__FUNCTION_NAME] = ACTIONS(357),
    [anon_sym_high_DASHvalue] = ACTIONS(357),
    [anon_sym_high_DASHValue] = ACTIONS(357),
    [anon_sym_high_DASHVALUE] = ACTIONS(357),
    [anon_sym_High_DASHvalue] = ACTIONS(357),
    [anon_sym_High_DASHValue] = ACTIONS(357),
    [anon_sym_High_DASHVALUE] = ACTIONS(357),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(357),
    [anon_sym_HIGH_DASHValue] = ACTIONS(357),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(357),
    [sym__LENGTH] = ACTIONS(357),
    [sym__LINAGE_COUNTER] = ACTIONS(357),
    [sym__LOCALE_DT_FUNC] = ACTIONS(357),
    [sym__LOWER_CASE_FUNC] = ACTIONS(357),
    [anon_sym_low_DASHvalue] = ACTIONS(357),
    [anon_sym_low_DASHValue] = ACTIONS(357),
    [anon_sym_low_DASHVALUE] = ACTIONS(357),
    [anon_sym_Low_DASHvalue] = ACTIONS(357),
    [anon_sym_Low_DASHValue] = ACTIONS(357),
    [anon_sym_Low_DASHVALUE] = ACTIONS(357),
    [anon_sym_LOW_DASHvalue] = ACTIONS(357),
    [anon_sym_LOW_DASHValue] = ACTIONS(357),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(357),
    [sym__MOVE] = ACTIONS(357),
    [sym__NOT_EXCEPTION] = ACTIONS(357),
    [sym__NO_ADVANCING] = ACTIONS(357),
    [sym__NUMVALC_FUNC] = ACTIONS(357),
    [anon_sym_quote] = ACTIONS(357),
    [anon_sym_QUOTE] = ACTIONS(357),
    [anon_sym_Quote] = ACTIONS(357),
    [sym__REVERSE_FUNC] = ACTIONS(357),
    [anon_sym_space] = ACTIONS(357),
    [anon_sym_SPACE] = ACTIONS(357),
    [anon_sym_Space] = ACTIONS(357),
    [sym__STOP] = ACTIONS(357),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(357),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(357),
    [anon_sym_null] = ACTIONS(357),
    [anon_sym_Null] = ACTIONS(357),
    [anon_sym_NULL] = ACTIONS(357),
    [sym__TRIM_FUNCTION] = ACTIONS(357),
    [sym__UPON] = ACTIONS(357),
    [sym__UPPER_CASE_FUNC] = ACTIONS(357),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(357),
    [sym__WITH] = ACTIONS(357),
    [anon_sym_zero] = ACTIONS(357),
    [anon_sym_ZERO] = ACTIONS(357),
    [anon_sym_Zero] = ACTIONS(357),
  },
  [76] = {
    [sym__WORD] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(363),
    [sym_at_line_column] = ACTIONS(361),
    [sym_integer] = ACTIONS(361),
    [sym_decimal] = ACTIONS(363),
    [aux_sym_x_string_token1] = ACTIONS(363),
    [aux_sym_x_string_token2] = ACTIONS(363),
    [aux_sym_h_string_token1] = ACTIONS(363),
    [aux_sym_h_string_token2] = ACTIONS(363),
    [aux_sym_n_string_token1] = ACTIONS(363),
    [aux_sym_n_string_token2] = ACTIONS(363),
    [aux_sym_n_string_token3] = ACTIONS(363),
    [aux_sym_n_string_token4] = ACTIONS(363),
    [aux_sym_n_string_token5] = ACTIONS(363),
    [aux_sym_n_string_token6] = ACTIONS(363),
    [aux_sym_n_string_token7] = ACTIONS(363),
    [aux_sym_n_string_token8] = ACTIONS(363),
    [sym__ADDRESS] = ACTIONS(361),
    [sym__ALL] = ACTIONS(361),
    [sym__CONCATENATE_FUNC] = ACTIONS(361),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(361),
    [sym__DISPLAY] = ACTIONS(361),
    [sym__END_DISPLAY] = ACTIONS(361),
    [sym__EXCEPTION] = ACTIONS(361),
    [sym__FUNCTION_NAME] = ACTIONS(361),
    [anon_sym_high_DASHvalue] = ACTIONS(361),
    [anon_sym_high_DASHValue] = ACTIONS(361),
    [anon_sym_high_DASHVALUE] = ACTIONS(361),
    [anon_sym_High_DASHvalue] = ACTIONS(361),
    [anon_sym_High_DASHValue] = ACTIONS(361),
    [anon_sym_High_DASHVALUE] = ACTIONS(361),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(361),
    [anon_sym_HIGH_DASHValue] = ACTIONS(361),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(361),
    [sym__LENGTH] = ACTIONS(361),
    [sym__LINAGE_COUNTER] = ACTIONS(361),
    [sym__LOCALE_DT_FUNC] = ACTIONS(361),
    [sym__LOWER_CASE_FUNC] = ACTIONS(361),
    [anon_sym_low_DASHvalue] = ACTIONS(361),
    [anon_sym_low_DASHValue] = ACTIONS(361),
    [anon_sym_low_DASHVALUE] = ACTIONS(361),
    [anon_sym_Low_DASHvalue] = ACTIONS(361),
    [anon_sym_Low_DASHValue] = ACTIONS(361),
    [anon_sym_Low_DASHVALUE] = ACTIONS(361),
    [anon_sym_LOW_DASHvalue] = ACTIONS(361),
    [anon_sym_LOW_DASHValue] = ACTIONS(361),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(361),
    [sym__MOVE] = ACTIONS(361),
    [sym__NOT_EXCEPTION] = ACTIONS(361),
    [sym__NO_ADVANCING] = ACTIONS(361),
    [sym__NUMVALC_FUNC] = ACTIONS(361),
    [anon_sym_quote] = ACTIONS(361),
    [anon_sym_QUOTE] = ACTIONS(361),
    [anon_sym_Quote] = ACTIONS(361),
    [sym__REVERSE_FUNC] = ACTIONS(361),
    [anon_sym_space] = ACTIONS(361),
    [anon_sym_SPACE] = ACTIONS(361),
    [anon_sym_Space] = ACTIONS(361),
    [sym__STOP] = ACTIONS(361),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(361),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(361),
    [anon_sym_null] = ACTIONS(361),
    [anon_sym_Null] = ACTIONS(361),
    [anon_sym_NULL] = ACTIONS(361),
    [sym__TRIM_FUNCTION] = ACTIONS(361),
    [sym__UPON] = ACTIONS(361),
    [sym__UPPER_CASE_FUNC] = ACTIONS(361),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(361),
    [sym__WITH] = ACTIONS(361),
    [anon_sym_zero] = ACTIONS(361),
    [anon_sym_ZERO] = ACTIONS(361),
    [anon_sym_Zero] = ACTIONS(361),
  },
  [77] = {
    [sym__WORD] = ACTIONS(349),
    [anon_sym_DOT] = ACTIONS(351),
    [sym_at_line_column] = ACTIONS(349),
    [sym_integer] = ACTIONS(349),
    [sym_decimal] = ACTIONS(351),
    [aux_sym_x_string_token1] = ACTIONS(351),
    [aux_sym_x_string_token2] = ACTIONS(351),
    [aux_sym_h_string_token1] = ACTIONS(351),
    [aux_sym_h_string_token2] = ACTIONS(351),
    [aux_sym_n_string_token1] = ACTIONS(351),
    [aux_sym_n_string_token2] = ACTIONS(351),
    [aux_sym_n_string_token3] = ACTIONS(351),
    [aux_sym_n_string_token4] = ACTIONS(351),
    [aux_sym_n_string_token5] = ACTIONS(351),
    [aux_sym_n_string_token6] = ACTIONS(351),
    [aux_sym_n_string_token7] = ACTIONS(351),
    [aux_sym_n_string_token8] = ACTIONS(351),
    [sym__ADDRESS] = ACTIONS(349),
    [sym__ALL] = ACTIONS(349),
    [sym__CONCATENATE_FUNC] = ACTIONS(349),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(349),
    [sym__DISPLAY] = ACTIONS(349),
    [sym__END_DISPLAY] = ACTIONS(349),
    [sym__EXCEPTION] = ACTIONS(349),
    [sym__FUNCTION_NAME] = ACTIONS(349),
    [anon_sym_high_DASHvalue] = ACTIONS(349),
    [anon_sym_high_DASHValue] = ACTIONS(349),
    [anon_sym_high_DASHVALUE] = ACTIONS(349),
    [anon_sym_High_DASHvalue] = ACTIONS(349),
    [anon_sym_High_DASHValue] = ACTIONS(349),
    [anon_sym_High_DASHVALUE] = ACTIONS(349),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(349),
    [anon_sym_HIGH_DASHValue] = ACTIONS(349),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(349),
    [sym__LENGTH] = ACTIONS(349),
    [sym__LINAGE_COUNTER] = ACTIONS(349),
    [sym__LOCALE_DT_FUNC] = ACTIONS(349),
    [sym__LOWER_CASE_FUNC] = ACTIONS(349),
    [anon_sym_low_DASHvalue] = ACTIONS(349),
    [anon_sym_low_DASHValue] = ACTIONS(349),
    [anon_sym_low_DASHVALUE] = ACTIONS(349),
    [anon_sym_Low_DASHvalue] = ACTIONS(349),
    [anon_sym_Low_DASHValue] = ACTIONS(349),
    [anon_sym_Low_DASHVALUE] = ACTIONS(349),
    [anon_sym_LOW_DASHvalue] = ACTIONS(349),
    [anon_sym_LOW_DASHValue] = ACTIONS(349),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(349),
    [sym__MOVE] = ACTIONS(349),
    [sym__NOT_EXCEPTION] = ACTIONS(349),
    [sym__NO_ADVANCING] = ACTIONS(349),
    [sym__NUMVALC_FUNC] = ACTIONS(349),
    [anon_sym_quote] = ACTIONS(349),
    [anon_sym_QUOTE] = ACTIONS(349),
    [anon_sym_Quote] = ACTIONS(349),
    [sym__REVERSE_FUNC] = ACTIONS(349),
    [anon_sym_space] = ACTIONS(349),
    [anon_sym_SPACE] = ACTIONS(349),
    [anon_sym_Space] = ACTIONS(349),
    [sym__STOP] = ACTIONS(349),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(349),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(349),
    [anon_sym_null] = ACTIONS(349),
    [anon_sym_Null] = ACTIONS(349),
    [anon_sym_NULL] = ACTIONS(349),
    [sym__TRIM_FUNCTION] = ACTIONS(349),
    [sym__UPON] = ACTIONS(349),
    [sym__UPPER_CASE_FUNC] = ACTIONS(349),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(349),
    [sym__WITH] = ACTIONS(349),
    [anon_sym_zero] = ACTIONS(349),
    [anon_sym_ZERO] = ACTIONS(349),
    [anon_sym_Zero] = ACTIONS(349),
  },
  [78] = {
    [sym__WORD] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(367),
    [sym_at_line_column] = ACTIONS(365),
    [sym_integer] = ACTIONS(365),
    [sym_decimal] = ACTIONS(367),
    [aux_sym_x_string_token1] = ACTIONS(367),
    [aux_sym_x_string_token2] = ACTIONS(367),
    [aux_sym_h_string_token1] = ACTIONS(367),
    [aux_sym_h_string_token2] = ACTIONS(367),
    [aux_sym_n_string_token1] = ACTIONS(367),
    [aux_sym_n_string_token2] = ACTIONS(367),
    [aux_sym_n_string_token3] = ACTIONS(367),
    [aux_sym_n_string_token4] = ACTIONS(367),
    [aux_sym_n_string_token5] = ACTIONS(367),
    [aux_sym_n_string_token6] = ACTIONS(367),
    [aux_sym_n_string_token7] = ACTIONS(367),
    [aux_sym_n_string_token8] = ACTIONS(367),
    [sym__ADDRESS] = ACTIONS(365),
    [sym__ALL] = ACTIONS(365),
    [sym__CONCATENATE_FUNC] = ACTIONS(365),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(365),
    [sym__DISPLAY] = ACTIONS(365),
    [sym__END_DISPLAY] = ACTIONS(365),
    [sym__EXCEPTION] = ACTIONS(365),
    [sym__FUNCTION_NAME] = ACTIONS(365),
    [anon_sym_high_DASHvalue] = ACTIONS(365),
    [anon_sym_high_DASHValue] = ACTIONS(365),
    [anon_sym_high_DASHVALUE] = ACTIONS(365),
    [anon_sym_High_DASHvalue] = ACTIONS(365),
    [anon_sym_High_DASHValue] = ACTIONS(365),
    [anon_sym_High_DASHVALUE] = ACTIONS(365),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(365),
    [anon_sym_HIGH_DASHValue] = ACTIONS(365),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(365),
    [sym__LENGTH] = ACTIONS(365),
    [sym__LINAGE_COUNTER] = ACTIONS(365),
    [sym__LOCALE_DT_FUNC] = ACTIONS(365),
    [sym__LOWER_CASE_FUNC] = ACTIONS(365),
    [anon_sym_low_DASHvalue] = ACTIONS(365),
    [anon_sym_low_DASHValue] = ACTIONS(365),
    [anon_sym_low_DASHVALUE] = ACTIONS(365),
    [anon_sym_Low_DASHvalue] = ACTIONS(365),
    [anon_sym_Low_DASHValue] = ACTIONS(365),
    [anon_sym_Low_DASHVALUE] = ACTIONS(365),
    [anon_sym_LOW_DASHvalue] = ACTIONS(365),
    [anon_sym_LOW_DASHValue] = ACTIONS(365),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(365),
    [sym__MOVE] = ACTIONS(365),
    [sym__NOT_EXCEPTION] = ACTIONS(365),
    [sym__NO_ADVANCING] = ACTIONS(365),
    [sym__NUMVALC_FUNC] = ACTIONS(365),
    [anon_sym_quote] = ACTIONS(365),
    [anon_sym_QUOTE] = ACTIONS(365),
    [anon_sym_Quote] = ACTIONS(365),
    [sym__REVERSE_FUNC] = ACTIONS(365),
    [anon_sym_space] = ACTIONS(365),
    [anon_sym_SPACE] = ACTIONS(365),
    [anon_sym_Space] = ACTIONS(365),
    [sym__STOP] = ACTIONS(365),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(365),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(365),
    [anon_sym_null] = ACTIONS(365),
    [anon_sym_Null] = ACTIONS(365),
    [anon_sym_NULL] = ACTIONS(365),
    [sym__TRIM_FUNCTION] = ACTIONS(365),
    [sym__UPON] = ACTIONS(365),
    [sym__UPPER_CASE_FUNC] = ACTIONS(365),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(365),
    [sym__WITH] = ACTIONS(365),
    [anon_sym_zero] = ACTIONS(365),
    [anon_sym_ZERO] = ACTIONS(365),
    [anon_sym_Zero] = ACTIONS(365),
  },
  [79] = {
    [sym__WORD] = ACTIONS(369),
    [anon_sym_DOT] = ACTIONS(371),
    [sym_at_line_column] = ACTIONS(369),
    [sym_integer] = ACTIONS(369),
    [sym_decimal] = ACTIONS(371),
    [aux_sym_x_string_token1] = ACTIONS(371),
    [aux_sym_x_string_token2] = ACTIONS(371),
    [aux_sym_h_string_token1] = ACTIONS(371),
    [aux_sym_h_string_token2] = ACTIONS(371),
    [aux_sym_n_string_token1] = ACTIONS(371),
    [aux_sym_n_string_token2] = ACTIONS(371),
    [aux_sym_n_string_token3] = ACTIONS(371),
    [aux_sym_n_string_token4] = ACTIONS(371),
    [aux_sym_n_string_token5] = ACTIONS(371),
    [aux_sym_n_string_token6] = ACTIONS(371),
    [aux_sym_n_string_token7] = ACTIONS(371),
    [aux_sym_n_string_token8] = ACTIONS(371),
    [sym__ADDRESS] = ACTIONS(369),
    [sym__ALL] = ACTIONS(369),
    [sym__CONCATENATE_FUNC] = ACTIONS(369),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(369),
    [sym__DISPLAY] = ACTIONS(369),
    [sym__END_DISPLAY] = ACTIONS(369),
    [sym__EXCEPTION] = ACTIONS(369),
    [sym__FUNCTION_NAME] = ACTIONS(369),
    [anon_sym_high_DASHvalue] = ACTIONS(369),
    [anon_sym_high_DASHValue] = ACTIONS(369),
    [anon_sym_high_DASHVALUE] = ACTIONS(369),
    [anon_sym_High_DASHvalue] = ACTIONS(369),
    [anon_sym_High_DASHValue] = ACTIONS(369),
    [anon_sym_High_DASHVALUE] = ACTIONS(369),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(369),
    [anon_sym_HIGH_DASHValue] = ACTIONS(369),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(369),
    [sym__LENGTH] = ACTIONS(369),
    [sym__LINAGE_COUNTER] = ACTIONS(369),
    [sym__LOCALE_DT_FUNC] = ACTIONS(369),
    [sym__LOWER_CASE_FUNC] = ACTIONS(369),
    [anon_sym_low_DASHvalue] = ACTIONS(369),
    [anon_sym_low_DASHValue] = ACTIONS(369),
    [anon_sym_low_DASHVALUE] = ACTIONS(369),
    [anon_sym_Low_DASHvalue] = ACTIONS(369),
    [anon_sym_Low_DASHValue] = ACTIONS(369),
    [anon_sym_Low_DASHVALUE] = ACTIONS(369),
    [anon_sym_LOW_DASHvalue] = ACTIONS(369),
    [anon_sym_LOW_DASHValue] = ACTIONS(369),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(369),
    [sym__MOVE] = ACTIONS(369),
    [sym__NOT_EXCEPTION] = ACTIONS(369),
    [sym__NO_ADVANCING] = ACTIONS(369),
    [sym__NUMVALC_FUNC] = ACTIONS(369),
    [anon_sym_quote] = ACTIONS(369),
    [anon_sym_QUOTE] = ACTIONS(369),
    [anon_sym_Quote] = ACTIONS(369),
    [sym__REVERSE_FUNC] = ACTIONS(369),
    [anon_sym_space] = ACTIONS(369),
    [anon_sym_SPACE] = ACTIONS(369),
    [anon_sym_Space] = ACTIONS(369),
    [sym__STOP] = ACTIONS(369),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(369),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(369),
    [anon_sym_null] = ACTIONS(369),
    [anon_sym_Null] = ACTIONS(369),
    [anon_sym_NULL] = ACTIONS(369),
    [sym__TRIM_FUNCTION] = ACTIONS(369),
    [sym__UPON] = ACTIONS(369),
    [sym__UPPER_CASE_FUNC] = ACTIONS(369),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(369),
    [sym__WITH] = ACTIONS(369),
    [anon_sym_zero] = ACTIONS(369),
    [anon_sym_ZERO] = ACTIONS(369),
    [anon_sym_Zero] = ACTIONS(369),
  },
  [80] = {
    [sym__WORD] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(375),
    [sym_at_line_column] = ACTIONS(373),
    [sym_integer] = ACTIONS(373),
    [sym_decimal] = ACTIONS(375),
    [aux_sym_x_string_token1] = ACTIONS(375),
    [aux_sym_x_string_token2] = ACTIONS(375),
    [aux_sym_h_string_token1] = ACTIONS(375),
    [aux_sym_h_string_token2] = ACTIONS(375),
    [aux_sym_n_string_token1] = ACTIONS(375),
    [aux_sym_n_string_token2] = ACTIONS(375),
    [aux_sym_n_string_token3] = ACTIONS(375),
    [aux_sym_n_string_token4] = ACTIONS(375),
    [aux_sym_n_string_token5] = ACTIONS(375),
    [aux_sym_n_string_token6] = ACTIONS(375),
    [aux_sym_n_string_token7] = ACTIONS(375),
    [aux_sym_n_string_token8] = ACTIONS(375),
    [sym__ADDRESS] = ACTIONS(373),
    [sym__ALL] = ACTIONS(373),
    [sym__CONCATENATE_FUNC] = ACTIONS(373),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(373),
    [sym__DISPLAY] = ACTIONS(373),
    [sym__END_DISPLAY] = ACTIONS(373),
    [sym__EXCEPTION] = ACTIONS(373),
    [sym__FUNCTION_NAME] = ACTIONS(373),
    [anon_sym_high_DASHvalue] = ACTIONS(373),
    [anon_sym_high_DASHValue] = ACTIONS(373),
    [anon_sym_high_DASHVALUE] = ACTIONS(373),
    [anon_sym_High_DASHvalue] = ACTIONS(373),
    [anon_sym_High_DASHValue] = ACTIONS(373),
    [anon_sym_High_DASHVALUE] = ACTIONS(373),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(373),
    [anon_sym_HIGH_DASHValue] = ACTIONS(373),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(373),
    [sym__LENGTH] = ACTIONS(373),
    [sym__LINAGE_COUNTER] = ACTIONS(373),
    [sym__LOCALE_DT_FUNC] = ACTIONS(373),
    [sym__LOWER_CASE_FUNC] = ACTIONS(373),
    [anon_sym_low_DASHvalue] = ACTIONS(373),
    [anon_sym_low_DASHValue] = ACTIONS(373),
    [anon_sym_low_DASHVALUE] = ACTIONS(373),
    [anon_sym_Low_DASHvalue] = ACTIONS(373),
    [anon_sym_Low_DASHValue] = ACTIONS(373),
    [anon_sym_Low_DASHVALUE] = ACTIONS(373),
    [anon_sym_LOW_DASHvalue] = ACTIONS(373),
    [anon_sym_LOW_DASHValue] = ACTIONS(373),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(373),
    [sym__MOVE] = ACTIONS(373),
    [sym__NOT_EXCEPTION] = ACTIONS(373),
    [sym__NO_ADVANCING] = ACTIONS(373),
    [sym__NUMVALC_FUNC] = ACTIONS(373),
    [anon_sym_quote] = ACTIONS(373),
    [anon_sym_QUOTE] = ACTIONS(373),
    [anon_sym_Quote] = ACTIONS(373),
    [sym__REVERSE_FUNC] = ACTIONS(373),
    [anon_sym_space] = ACTIONS(373),
    [anon_sym_SPACE] = ACTIONS(373),
    [anon_sym_Space] = ACTIONS(373),
    [sym__STOP] = ACTIONS(373),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(373),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(373),
    [anon_sym_null] = ACTIONS(373),
    [anon_sym_Null] = ACTIONS(373),
    [anon_sym_NULL] = ACTIONS(373),
    [sym__TRIM_FUNCTION] = ACTIONS(373),
    [sym__UPON] = ACTIONS(373),
    [sym__UPPER_CASE_FUNC] = ACTIONS(373),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(373),
    [sym__WITH] = ACTIONS(373),
    [anon_sym_zero] = ACTIONS(373),
    [anon_sym_ZERO] = ACTIONS(373),
    [anon_sym_Zero] = ACTIONS(373),
  },
  [81] = {
    [sym__WORD] = ACTIONS(377),
    [anon_sym_DOT] = ACTIONS(379),
    [sym_at_line_column] = ACTIONS(377),
    [sym_integer] = ACTIONS(377),
    [sym_decimal] = ACTIONS(379),
    [aux_sym_x_string_token1] = ACTIONS(379),
    [aux_sym_x_string_token2] = ACTIONS(379),
    [aux_sym_h_string_token1] = ACTIONS(379),
    [aux_sym_h_string_token2] = ACTIONS(379),
    [aux_sym_n_string_token1] = ACTIONS(379),
    [aux_sym_n_string_token2] = ACTIONS(379),
    [aux_sym_n_string_token3] = ACTIONS(379),
    [aux_sym_n_string_token4] = ACTIONS(379),
    [aux_sym_n_string_token5] = ACTIONS(379),
    [aux_sym_n_string_token6] = ACTIONS(379),
    [aux_sym_n_string_token7] = ACTIONS(379),
    [aux_sym_n_string_token8] = ACTIONS(379),
    [sym__ADDRESS] = ACTIONS(377),
    [sym__ALL] = ACTIONS(377),
    [sym__CONCATENATE_FUNC] = ACTIONS(377),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(377),
    [sym__DISPLAY] = ACTIONS(377),
    [sym__END_DISPLAY] = ACTIONS(377),
    [sym__EXCEPTION] = ACTIONS(377),
    [sym__FUNCTION_NAME] = ACTIONS(377),
    [anon_sym_high_DASHvalue] = ACTIONS(377),
    [anon_sym_high_DASHValue] = ACTIONS(377),
    [anon_sym_high_DASHVALUE] = ACTIONS(377),
    [anon_sym_High_DASHvalue] = ACTIONS(377),
    [anon_sym_High_DASHValue] = ACTIONS(377),
    [anon_sym_High_DASHVALUE] = ACTIONS(377),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(377),
    [anon_sym_HIGH_DASHValue] = ACTIONS(377),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(377),
    [sym__LENGTH] = ACTIONS(377),
    [sym__LINAGE_COUNTER] = ACTIONS(377),
    [sym__LOCALE_DT_FUNC] = ACTIONS(377),
    [sym__LOWER_CASE_FUNC] = ACTIONS(377),
    [anon_sym_low_DASHvalue] = ACTIONS(377),
    [anon_sym_low_DASHValue] = ACTIONS(377),
    [anon_sym_low_DASHVALUE] = ACTIONS(377),
    [anon_sym_Low_DASHvalue] = ACTIONS(377),
    [anon_sym_Low_DASHValue] = ACTIONS(377),
    [anon_sym_Low_DASHVALUE] = ACTIONS(377),
    [anon_sym_LOW_DASHvalue] = ACTIONS(377),
    [anon_sym_LOW_DASHValue] = ACTIONS(377),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(377),
    [sym__MOVE] = ACTIONS(377),
    [sym__NOT_EXCEPTION] = ACTIONS(377),
    [sym__NO_ADVANCING] = ACTIONS(377),
    [sym__NUMVALC_FUNC] = ACTIONS(377),
    [anon_sym_quote] = ACTIONS(377),
    [anon_sym_QUOTE] = ACTIONS(377),
    [anon_sym_Quote] = ACTIONS(377),
    [sym__REVERSE_FUNC] = ACTIONS(377),
    [anon_sym_space] = ACTIONS(377),
    [anon_sym_SPACE] = ACTIONS(377),
    [anon_sym_Space] = ACTIONS(377),
    [sym__STOP] = ACTIONS(377),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(377),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(377),
    [anon_sym_null] = ACTIONS(377),
    [anon_sym_Null] = ACTIONS(377),
    [anon_sym_NULL] = ACTIONS(377),
    [sym__TRIM_FUNCTION] = ACTIONS(377),
    [sym__UPON] = ACTIONS(377),
    [sym__UPPER_CASE_FUNC] = ACTIONS(377),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(377),
    [sym__WITH] = ACTIONS(377),
    [anon_sym_zero] = ACTIONS(377),
    [anon_sym_ZERO] = ACTIONS(377),
    [anon_sym_Zero] = ACTIONS(377),
  },
  [82] = {
    [sym__WORD] = ACTIONS(381),
    [anon_sym_DOT] = ACTIONS(383),
    [sym_at_line_column] = ACTIONS(381),
    [sym_integer] = ACTIONS(381),
    [sym_decimal] = ACTIONS(383),
    [aux_sym_x_string_token1] = ACTIONS(383),
    [aux_sym_x_string_token2] = ACTIONS(383),
    [aux_sym_h_string_token1] = ACTIONS(383),
    [aux_sym_h_string_token2] = ACTIONS(383),
    [aux_sym_n_string_token1] = ACTIONS(383),
    [aux_sym_n_string_token2] = ACTIONS(383),
    [aux_sym_n_string_token3] = ACTIONS(383),
    [aux_sym_n_string_token4] = ACTIONS(383),
    [aux_sym_n_string_token5] = ACTIONS(383),
    [aux_sym_n_string_token6] = ACTIONS(383),
    [aux_sym_n_string_token7] = ACTIONS(383),
    [aux_sym_n_string_token8] = ACTIONS(383),
    [sym__ADDRESS] = ACTIONS(381),
    [sym__ALL] = ACTIONS(381),
    [sym__CONCATENATE_FUNC] = ACTIONS(381),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(381),
    [sym__DISPLAY] = ACTIONS(381),
    [sym__END_DISPLAY] = ACTIONS(381),
    [sym__EXCEPTION] = ACTIONS(381),
    [sym__FUNCTION_NAME] = ACTIONS(381),
    [anon_sym_high_DASHvalue] = ACTIONS(381),
    [anon_sym_high_DASHValue] = ACTIONS(381),
    [anon_sym_high_DASHVALUE] = ACTIONS(381),
    [anon_sym_High_DASHvalue] = ACTIONS(381),
    [anon_sym_High_DASHValue] = ACTIONS(381),
    [anon_sym_High_DASHVALUE] = ACTIONS(381),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(381),
    [anon_sym_HIGH_DASHValue] = ACTIONS(381),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(381),
    [sym__LENGTH] = ACTIONS(381),
    [sym__LINAGE_COUNTER] = ACTIONS(381),
    [sym__LOCALE_DT_FUNC] = ACTIONS(381),
    [sym__LOWER_CASE_FUNC] = ACTIONS(381),
    [anon_sym_low_DASHvalue] = ACTIONS(381),
    [anon_sym_low_DASHValue] = ACTIONS(381),
    [anon_sym_low_DASHVALUE] = ACTIONS(381),
    [anon_sym_Low_DASHvalue] = ACTIONS(381),
    [anon_sym_Low_DASHValue] = ACTIONS(381),
    [anon_sym_Low_DASHVALUE] = ACTIONS(381),
    [anon_sym_LOW_DASHvalue] = ACTIONS(381),
    [anon_sym_LOW_DASHValue] = ACTIONS(381),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(381),
    [sym__MOVE] = ACTIONS(381),
    [sym__NOT_EXCEPTION] = ACTIONS(381),
    [sym__NO_ADVANCING] = ACTIONS(381),
    [sym__NUMVALC_FUNC] = ACTIONS(381),
    [anon_sym_quote] = ACTIONS(381),
    [anon_sym_QUOTE] = ACTIONS(381),
    [anon_sym_Quote] = ACTIONS(381),
    [sym__REVERSE_FUNC] = ACTIONS(381),
    [anon_sym_space] = ACTIONS(381),
    [anon_sym_SPACE] = ACTIONS(381),
    [anon_sym_Space] = ACTIONS(381),
    [sym__STOP] = ACTIONS(381),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(381),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(381),
    [anon_sym_null] = ACTIONS(381),
    [anon_sym_Null] = ACTIONS(381),
    [anon_sym_NULL] = ACTIONS(381),
    [sym__TRIM_FUNCTION] = ACTIONS(381),
    [sym__UPON] = ACTIONS(381),
    [sym__UPPER_CASE_FUNC] = ACTIONS(381),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(381),
    [sym__WITH] = ACTIONS(381),
    [anon_sym_zero] = ACTIONS(381),
    [anon_sym_ZERO] = ACTIONS(381),
    [anon_sym_Zero] = ACTIONS(381),
  },
  [83] = {
    [sym__WORD] = ACTIONS(385),
    [anon_sym_DOT] = ACTIONS(387),
    [sym_at_line_column] = ACTIONS(385),
    [sym_integer] = ACTIONS(385),
    [sym_decimal] = ACTIONS(387),
    [aux_sym_x_string_token1] = ACTIONS(387),
    [aux_sym_x_string_token2] = ACTIONS(387),
    [aux_sym_h_string_token1] = ACTIONS(387),
    [aux_sym_h_string_token2] = ACTIONS(387),
    [aux_sym_n_string_token1] = ACTIONS(387),
    [aux_sym_n_string_token2] = ACTIONS(387),
    [aux_sym_n_string_token3] = ACTIONS(387),
    [aux_sym_n_string_token4] = ACTIONS(387),
    [aux_sym_n_string_token5] = ACTIONS(387),
    [aux_sym_n_string_token6] = ACTIONS(387),
    [aux_sym_n_string_token7] = ACTIONS(387),
    [aux_sym_n_string_token8] = ACTIONS(387),
    [sym__ADDRESS] = ACTIONS(385),
    [sym__ALL] = ACTIONS(385),
    [sym__CONCATENATE_FUNC] = ACTIONS(385),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(385),
    [sym__DISPLAY] = ACTIONS(385),
    [sym__END_DISPLAY] = ACTIONS(385),
    [sym__EXCEPTION] = ACTIONS(385),
    [sym__FUNCTION_NAME] = ACTIONS(385),
    [anon_sym_high_DASHvalue] = ACTIONS(385),
    [anon_sym_high_DASHValue] = ACTIONS(385),
    [anon_sym_high_DASHVALUE] = ACTIONS(385),
    [anon_sym_High_DASHvalue] = ACTIONS(385),
    [anon_sym_High_DASHValue] = ACTIONS(385),
    [anon_sym_High_DASHVALUE] = ACTIONS(385),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(385),
    [anon_sym_HIGH_DASHValue] = ACTIONS(385),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(385),
    [sym__LENGTH] = ACTIONS(385),
    [sym__LINAGE_COUNTER] = ACTIONS(385),
    [sym__LOCALE_DT_FUNC] = ACTIONS(385),
    [sym__LOWER_CASE_FUNC] = ACTIONS(385),
    [anon_sym_low_DASHvalue] = ACTIONS(385),
    [anon_sym_low_DASHValue] = ACTIONS(385),
    [anon_sym_low_DASHVALUE] = ACTIONS(385),
    [anon_sym_Low_DASHvalue] = ACTIONS(385),
    [anon_sym_Low_DASHValue] = ACTIONS(385),
    [anon_sym_Low_DASHVALUE] = ACTIONS(385),
    [anon_sym_LOW_DASHvalue] = ACTIONS(385),
    [anon_sym_LOW_DASHValue] = ACTIONS(385),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(385),
    [sym__MOVE] = ACTIONS(385),
    [sym__NOT_EXCEPTION] = ACTIONS(385),
    [sym__NO_ADVANCING] = ACTIONS(385),
    [sym__NUMVALC_FUNC] = ACTIONS(385),
    [anon_sym_quote] = ACTIONS(385),
    [anon_sym_QUOTE] = ACTIONS(385),
    [anon_sym_Quote] = ACTIONS(385),
    [sym__REVERSE_FUNC] = ACTIONS(385),
    [anon_sym_space] = ACTIONS(385),
    [anon_sym_SPACE] = ACTIONS(385),
    [anon_sym_Space] = ACTIONS(385),
    [sym__STOP] = ACTIONS(385),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(385),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(385),
    [anon_sym_null] = ACTIONS(385),
    [anon_sym_Null] = ACTIONS(385),
    [anon_sym_NULL] = ACTIONS(385),
    [sym__TRIM_FUNCTION] = ACTIONS(385),
    [sym__UPON] = ACTIONS(385),
    [sym__UPPER_CASE_FUNC] = ACTIONS(385),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(385),
    [sym__WITH] = ACTIONS(385),
    [anon_sym_zero] = ACTIONS(385),
    [anon_sym_ZERO] = ACTIONS(385),
    [anon_sym_Zero] = ACTIONS(385),
  },
  [84] = {
    [sym__WORD] = ACTIONS(389),
    [anon_sym_DOT] = ACTIONS(391),
    [sym_at_line_column] = ACTIONS(389),
    [sym_integer] = ACTIONS(389),
    [sym_decimal] = ACTIONS(391),
    [aux_sym_x_string_token1] = ACTIONS(391),
    [aux_sym_x_string_token2] = ACTIONS(391),
    [aux_sym_h_string_token1] = ACTIONS(391),
    [aux_sym_h_string_token2] = ACTIONS(391),
    [aux_sym_n_string_token1] = ACTIONS(391),
    [aux_sym_n_string_token2] = ACTIONS(391),
    [aux_sym_n_string_token3] = ACTIONS(391),
    [aux_sym_n_string_token4] = ACTIONS(391),
    [aux_sym_n_string_token5] = ACTIONS(391),
    [aux_sym_n_string_token6] = ACTIONS(391),
    [aux_sym_n_string_token7] = ACTIONS(391),
    [aux_sym_n_string_token8] = ACTIONS(391),
    [sym__ADDRESS] = ACTIONS(389),
    [sym__ALL] = ACTIONS(389),
    [sym__CONCATENATE_FUNC] = ACTIONS(389),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(389),
    [sym__DISPLAY] = ACTIONS(389),
    [sym__END_DISPLAY] = ACTIONS(389),
    [sym__EXCEPTION] = ACTIONS(389),
    [sym__FUNCTION_NAME] = ACTIONS(389),
    [anon_sym_high_DASHvalue] = ACTIONS(389),
    [anon_sym_high_DASHValue] = ACTIONS(389),
    [anon_sym_high_DASHVALUE] = ACTIONS(389),
    [anon_sym_High_DASHvalue] = ACTIONS(389),
    [anon_sym_High_DASHValue] = ACTIONS(389),
    [anon_sym_High_DASHVALUE] = ACTIONS(389),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(389),
    [anon_sym_HIGH_DASHValue] = ACTIONS(389),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(389),
    [sym__LENGTH] = ACTIONS(389),
    [sym__LINAGE_COUNTER] = ACTIONS(389),
    [sym__LOCALE_DT_FUNC] = ACTIONS(389),
    [sym__LOWER_CASE_FUNC] = ACTIONS(389),
    [anon_sym_low_DASHvalue] = ACTIONS(389),
    [anon_sym_low_DASHValue] = ACTIONS(389),
    [anon_sym_low_DASHVALUE] = ACTIONS(389),
    [anon_sym_Low_DASHvalue] = ACTIONS(389),
    [anon_sym_Low_DASHValue] = ACTIONS(389),
    [anon_sym_Low_DASHVALUE] = ACTIONS(389),
    [anon_sym_LOW_DASHvalue] = ACTIONS(389),
    [anon_sym_LOW_DASHValue] = ACTIONS(389),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(389),
    [sym__MOVE] = ACTIONS(389),
    [sym__NOT_EXCEPTION] = ACTIONS(389),
    [sym__NO_ADVANCING] = ACTIONS(389),
    [sym__NUMVALC_FUNC] = ACTIONS(389),
    [anon_sym_quote] = ACTIONS(389),
    [anon_sym_QUOTE] = ACTIONS(389),
    [anon_sym_Quote] = ACTIONS(389),
    [sym__REVERSE_FUNC] = ACTIONS(389),
    [anon_sym_space] = ACTIONS(389),
    [anon_sym_SPACE] = ACTIONS(389),
    [anon_sym_Space] = ACTIONS(389),
    [sym__STOP] = ACTIONS(389),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(389),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(389),
    [anon_sym_null] = ACTIONS(389),
    [anon_sym_Null] = ACTIONS(389),
    [anon_sym_NULL] = ACTIONS(389),
    [sym__TRIM_FUNCTION] = ACTIONS(389),
    [sym__UPON] = ACTIONS(389),
    [sym__UPPER_CASE_FUNC] = ACTIONS(389),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(389),
    [sym__WITH] = ACTIONS(389),
    [anon_sym_zero] = ACTIONS(389),
    [anon_sym_ZERO] = ACTIONS(389),
    [anon_sym_Zero] = ACTIONS(389),
  },
  [85] = {
    [sym__WORD] = ACTIONS(393),
    [anon_sym_DOT] = ACTIONS(395),
    [sym_at_line_column] = ACTIONS(393),
    [sym_integer] = ACTIONS(393),
    [sym_decimal] = ACTIONS(395),
    [aux_sym_x_string_token1] = ACTIONS(395),
    [aux_sym_x_string_token2] = ACTIONS(395),
    [aux_sym_h_string_token1] = ACTIONS(395),
    [aux_sym_h_string_token2] = ACTIONS(395),
    [aux_sym_n_string_token1] = ACTIONS(395),
    [aux_sym_n_string_token2] = ACTIONS(395),
    [aux_sym_n_string_token3] = ACTIONS(395),
    [aux_sym_n_string_token4] = ACTIONS(395),
    [aux_sym_n_string_token5] = ACTIONS(395),
    [aux_sym_n_string_token6] = ACTIONS(395),
    [aux_sym_n_string_token7] = ACTIONS(395),
    [aux_sym_n_string_token8] = ACTIONS(395),
    [sym__ADDRESS] = ACTIONS(393),
    [sym__ALL] = ACTIONS(393),
    [sym__CONCATENATE_FUNC] = ACTIONS(393),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(393),
    [sym__DISPLAY] = ACTIONS(393),
    [sym__END_DISPLAY] = ACTIONS(393),
    [sym__EXCEPTION] = ACTIONS(393),
    [sym__FUNCTION_NAME] = ACTIONS(393),
    [anon_sym_high_DASHvalue] = ACTIONS(393),
    [anon_sym_high_DASHValue] = ACTIONS(393),
    [anon_sym_high_DASHVALUE] = ACTIONS(393),
    [anon_sym_High_DASHvalue] = ACTIONS(393),
    [anon_sym_High_DASHValue] = ACTIONS(393),
    [anon_sym_High_DASHVALUE] = ACTIONS(393),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(393),
    [anon_sym_HIGH_DASHValue] = ACTIONS(393),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(393),
    [sym__LENGTH] = ACTIONS(393),
    [sym__LINAGE_COUNTER] = ACTIONS(393),
    [sym__LOCALE_DT_FUNC] = ACTIONS(393),
    [sym__LOWER_CASE_FUNC] = ACTIONS(393),
    [anon_sym_low_DASHvalue] = ACTIONS(393),
    [anon_sym_low_DASHValue] = ACTIONS(393),
    [anon_sym_low_DASHVALUE] = ACTIONS(393),
    [anon_sym_Low_DASHvalue] = ACTIONS(393),
    [anon_sym_Low_DASHValue] = ACTIONS(393),
    [anon_sym_Low_DASHVALUE] = ACTIONS(393),
    [anon_sym_LOW_DASHvalue] = ACTIONS(393),
    [anon_sym_LOW_DASHValue] = ACTIONS(393),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(393),
    [sym__MOVE] = ACTIONS(393),
    [sym__NOT_EXCEPTION] = ACTIONS(393),
    [sym__NO_ADVANCING] = ACTIONS(393),
    [sym__NUMVALC_FUNC] = ACTIONS(393),
    [anon_sym_quote] = ACTIONS(393),
    [anon_sym_QUOTE] = ACTIONS(393),
    [anon_sym_Quote] = ACTIONS(393),
    [sym__REVERSE_FUNC] = ACTIONS(393),
    [anon_sym_space] = ACTIONS(393),
    [anon_sym_SPACE] = ACTIONS(393),
    [anon_sym_Space] = ACTIONS(393),
    [sym__STOP] = ACTIONS(393),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(393),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(393),
    [anon_sym_null] = ACTIONS(393),
    [anon_sym_Null] = ACTIONS(393),
    [anon_sym_NULL] = ACTIONS(393),
    [sym__TRIM_FUNCTION] = ACTIONS(393),
    [sym__UPON] = ACTIONS(393),
    [sym__UPPER_CASE_FUNC] = ACTIONS(393),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(393),
    [sym__WITH] = ACTIONS(393),
    [anon_sym_zero] = ACTIONS(393),
    [anon_sym_ZERO] = ACTIONS(393),
    [anon_sym_Zero] = ACTIONS(393),
  },
  [86] = {
    [sym__WORD] = ACTIONS(397),
    [anon_sym_DOT] = ACTIONS(399),
    [sym_at_line_column] = ACTIONS(397),
    [sym_integer] = ACTIONS(397),
    [sym_decimal] = ACTIONS(399),
    [aux_sym_x_string_token1] = ACTIONS(399),
    [aux_sym_x_string_token2] = ACTIONS(399),
    [aux_sym_h_string_token1] = ACTIONS(399),
    [aux_sym_h_string_token2] = ACTIONS(399),
    [aux_sym_n_string_token1] = ACTIONS(399),
    [aux_sym_n_string_token2] = ACTIONS(399),
    [aux_sym_n_string_token3] = ACTIONS(399),
    [aux_sym_n_string_token4] = ACTIONS(399),
    [aux_sym_n_string_token5] = ACTIONS(399),
    [aux_sym_n_string_token6] = ACTIONS(399),
    [aux_sym_n_string_token7] = ACTIONS(399),
    [aux_sym_n_string_token8] = ACTIONS(399),
    [sym__ADDRESS] = ACTIONS(397),
    [sym__ALL] = ACTIONS(397),
    [sym__CONCATENATE_FUNC] = ACTIONS(397),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(397),
    [sym__DISPLAY] = ACTIONS(397),
    [sym__END_DISPLAY] = ACTIONS(397),
    [sym__EXCEPTION] = ACTIONS(397),
    [sym__FUNCTION_NAME] = ACTIONS(397),
    [anon_sym_high_DASHvalue] = ACTIONS(397),
    [anon_sym_high_DASHValue] = ACTIONS(397),
    [anon_sym_high_DASHVALUE] = ACTIONS(397),
    [anon_sym_High_DASHvalue] = ACTIONS(397),
    [anon_sym_High_DASHValue] = ACTIONS(397),
    [anon_sym_High_DASHVALUE] = ACTIONS(397),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(397),
    [anon_sym_HIGH_DASHValue] = ACTIONS(397),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(397),
    [sym__LENGTH] = ACTIONS(397),
    [sym__LINAGE_COUNTER] = ACTIONS(397),
    [sym__LOCALE_DT_FUNC] = ACTIONS(397),
    [sym__LOWER_CASE_FUNC] = ACTIONS(397),
    [anon_sym_low_DASHvalue] = ACTIONS(397),
    [anon_sym_low_DASHValue] = ACTIONS(397),
    [anon_sym_low_DASHVALUE] = ACTIONS(397),
    [anon_sym_Low_DASHvalue] = ACTIONS(397),
    [anon_sym_Low_DASHValue] = ACTIONS(397),
    [anon_sym_Low_DASHVALUE] = ACTIONS(397),
    [anon_sym_LOW_DASHvalue] = ACTIONS(397),
    [anon_sym_LOW_DASHValue] = ACTIONS(397),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(397),
    [sym__MOVE] = ACTIONS(397),
    [sym__NOT_EXCEPTION] = ACTIONS(397),
    [sym__NO_ADVANCING] = ACTIONS(397),
    [sym__NUMVALC_FUNC] = ACTIONS(397),
    [anon_sym_quote] = ACTIONS(397),
    [anon_sym_QUOTE] = ACTIONS(397),
    [anon_sym_Quote] = ACTIONS(397),
    [sym__REVERSE_FUNC] = ACTIONS(397),
    [anon_sym_space] = ACTIONS(397),
    [anon_sym_SPACE] = ACTIONS(397),
    [anon_sym_Space] = ACTIONS(397),
    [sym__STOP] = ACTIONS(397),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(397),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(397),
    [anon_sym_null] = ACTIONS(397),
    [anon_sym_Null] = ACTIONS(397),
    [anon_sym_NULL] = ACTIONS(397),
    [sym__TRIM_FUNCTION] = ACTIONS(397),
    [sym__UPON] = ACTIONS(397),
    [sym__UPPER_CASE_FUNC] = ACTIONS(397),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(397),
    [sym__WITH] = ACTIONS(397),
    [anon_sym_zero] = ACTIONS(397),
    [anon_sym_ZERO] = ACTIONS(397),
    [anon_sym_Zero] = ACTIONS(397),
  },
  [87] = {
    [sym__WORD] = ACTIONS(401),
    [anon_sym_DOT] = ACTIONS(403),
    [sym_at_line_column] = ACTIONS(401),
    [sym_integer] = ACTIONS(401),
    [sym_decimal] = ACTIONS(403),
    [aux_sym_x_string_token1] = ACTIONS(403),
    [aux_sym_x_string_token2] = ACTIONS(403),
    [aux_sym_h_string_token1] = ACTIONS(403),
    [aux_sym_h_string_token2] = ACTIONS(403),
    [aux_sym_n_string_token1] = ACTIONS(403),
    [aux_sym_n_string_token2] = ACTIONS(403),
    [aux_sym_n_string_token3] = ACTIONS(403),
    [aux_sym_n_string_token4] = ACTIONS(403),
    [aux_sym_n_string_token5] = ACTIONS(403),
    [aux_sym_n_string_token6] = ACTIONS(403),
    [aux_sym_n_string_token7] = ACTIONS(403),
    [aux_sym_n_string_token8] = ACTIONS(403),
    [sym__ADDRESS] = ACTIONS(401),
    [sym__ALL] = ACTIONS(401),
    [sym__CONCATENATE_FUNC] = ACTIONS(401),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(401),
    [sym__DISPLAY] = ACTIONS(401),
    [sym__END_DISPLAY] = ACTIONS(401),
    [sym__EXCEPTION] = ACTIONS(401),
    [sym__FUNCTION_NAME] = ACTIONS(401),
    [anon_sym_high_DASHvalue] = ACTIONS(401),
    [anon_sym_high_DASHValue] = ACTIONS(401),
    [anon_sym_high_DASHVALUE] = ACTIONS(401),
    [anon_sym_High_DASHvalue] = ACTIONS(401),
    [anon_sym_High_DASHValue] = ACTIONS(401),
    [anon_sym_High_DASHVALUE] = ACTIONS(401),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(401),
    [anon_sym_HIGH_DASHValue] = ACTIONS(401),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(401),
    [sym__LENGTH] = ACTIONS(401),
    [sym__LINAGE_COUNTER] = ACTIONS(401),
    [sym__LOCALE_DT_FUNC] = ACTIONS(401),
    [sym__LOWER_CASE_FUNC] = ACTIONS(401),
    [anon_sym_low_DASHvalue] = ACTIONS(401),
    [anon_sym_low_DASHValue] = ACTIONS(401),
    [anon_sym_low_DASHVALUE] = ACTIONS(401),
    [anon_sym_Low_DASHvalue] = ACTIONS(401),
    [anon_sym_Low_DASHValue] = ACTIONS(401),
    [anon_sym_Low_DASHVALUE] = ACTIONS(401),
    [anon_sym_LOW_DASHvalue] = ACTIONS(401),
    [anon_sym_LOW_DASHValue] = ACTIONS(401),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(401),
    [sym__MOVE] = ACTIONS(401),
    [sym__NOT_EXCEPTION] = ACTIONS(401),
    [sym__NO_ADVANCING] = ACTIONS(401),
    [sym__NUMVALC_FUNC] = ACTIONS(401),
    [anon_sym_quote] = ACTIONS(401),
    [anon_sym_QUOTE] = ACTIONS(401),
    [anon_sym_Quote] = ACTIONS(401),
    [sym__REVERSE_FUNC] = ACTIONS(401),
    [anon_sym_space] = ACTIONS(401),
    [anon_sym_SPACE] = ACTIONS(401),
    [anon_sym_Space] = ACTIONS(401),
    [sym__STOP] = ACTIONS(401),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(401),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(401),
    [anon_sym_null] = ACTIONS(401),
    [anon_sym_Null] = ACTIONS(401),
    [anon_sym_NULL] = ACTIONS(401),
    [sym__TRIM_FUNCTION] = ACTIONS(401),
    [sym__UPON] = ACTIONS(401),
    [sym__UPPER_CASE_FUNC] = ACTIONS(401),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(401),
    [sym__WITH] = ACTIONS(401),
    [anon_sym_zero] = ACTIONS(401),
    [anon_sym_ZERO] = ACTIONS(401),
    [anon_sym_Zero] = ACTIONS(401),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    STATE(49), 1,
      sym__ZERO,
    STATE(62), 1,
      sym__LOW_VALUE,
    STATE(63), 1,
      sym__HIGH_VALUE,
    STATE(65), 1,
      sym__TOK_NULL,
    STATE(66), 1,
      sym__QUOTE,
    STATE(67), 1,
      sym__SPACE,
    ACTIONS(17), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(19), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    ACTIONS(409), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(411), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(413), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(415), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    ACTIONS(21), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(405), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(407), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
    STATE(69), 13,
      sym__basic_value,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
      sym_HIGH_VALUE,
      sym_LOW_VALUE,
      sym_QUOTE,
      sym_SPACE,
      sym_TOK_NULL,
      sym_ZERO,
  [100] = 18,
    ACTIONS(89), 1,
      sym_integer,
    ACTIONS(91), 1,
      sym_decimal,
    STATE(181), 1,
      sym__HIGH_VALUE,
    STATE(188), 1,
      sym__QUOTE,
    STATE(189), 1,
      sym__SPACE,
    STATE(190), 1,
      sym__TOK_NULL,
    STATE(191), 1,
      sym__LOW_VALUE,
    STATE(192), 1,
      sym__ZERO,
    ACTIONS(93), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(95), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    ACTIONS(421), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(423), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(425), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(427), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    ACTIONS(97), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(417), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(419), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
    STATE(388), 13,
      sym__basic_value,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
      sym_HIGH_VALUE,
      sym_LOW_VALUE,
      sym_QUOTE,
      sym_SPACE,
      sym_TOK_NULL,
      sym_ZERO,
  [200] = 18,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    STATE(49), 1,
      sym__ZERO,
    STATE(62), 1,
      sym__LOW_VALUE,
    STATE(63), 1,
      sym__HIGH_VALUE,
    STATE(65), 1,
      sym__TOK_NULL,
    STATE(66), 1,
      sym__QUOTE,
    STATE(67), 1,
      sym__SPACE,
    ACTIONS(17), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(19), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    ACTIONS(409), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(411), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(413), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(415), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    ACTIONS(21), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(405), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(407), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
    STATE(64), 13,
      sym__basic_value,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
      sym_HIGH_VALUE,
      sym_LOW_VALUE,
      sym_QUOTE,
      sym_SPACE,
      sym_TOK_NULL,
      sym_ZERO,
  [300] = 18,
    ACTIONS(89), 1,
      sym_integer,
    ACTIONS(91), 1,
      sym_decimal,
    STATE(181), 1,
      sym__HIGH_VALUE,
    STATE(188), 1,
      sym__QUOTE,
    STATE(189), 1,
      sym__SPACE,
    STATE(190), 1,
      sym__TOK_NULL,
    STATE(191), 1,
      sym__LOW_VALUE,
    STATE(192), 1,
      sym__ZERO,
    ACTIONS(93), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(95), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    ACTIONS(421), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(423), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(425), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(427), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    ACTIONS(97), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(417), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(419), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
    STATE(183), 13,
      sym__basic_value,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
      sym_HIGH_VALUE,
      sym_LOW_VALUE,
      sym_QUOTE,
      sym_SPACE,
      sym_TOK_NULL,
      sym_ZERO,
  [400] = 2,
    ACTIONS(431), 13,
      sym_decimal,
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
    ACTIONS(429), 45,
      sym_integer,
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
      sym__WORD,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
  [463] = 2,
    ACTIONS(433), 1,
      sym_integer,
    ACTIONS(435), 43,
      sym_decimal,
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
  [512] = 12,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    ACTIONS(437), 1,
      anon_sym_DOT,
    ACTIONS(441), 1,
      sym__PIC,
    ACTIONS(443), 1,
      sym__PICTURE,
    ACTIONS(445), 1,
      sym__REDEFINES,
    ACTIONS(17), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(19), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(103), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    STATE(405), 6,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(21), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(439), 13,
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
  [578] = 12,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    ACTIONS(441), 1,
      sym__PIC,
    ACTIONS(443), 1,
      sym__PICTURE,
    ACTIONS(445), 1,
      sym__REDEFINES,
    ACTIONS(447), 1,
      anon_sym_DOT,
    ACTIONS(17), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(19), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(94), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    STATE(420), 6,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(21), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(449), 13,
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
  [644] = 5,
    ACTIONS(259), 1,
      sym__LINE,
    STATE(98), 1,
      aux_sym_qualified_word_repeat1,
    STATE(424), 1,
      sym__in_of,
    ACTIONS(451), 2,
      sym__IN,
      sym__OF,
    ACTIONS(261), 32,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__COMMA_DELIM,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LINES,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__SEMI_COLON,
      sym__STOP,
      sym__TO,
      sym__UNDERLINE,
  [692] = 5,
    ACTIONS(265), 1,
      sym__LINE,
    STATE(97), 1,
      aux_sym_qualified_word_repeat1,
    STATE(424), 1,
      sym__in_of,
    ACTIONS(453), 2,
      sym__IN,
      sym__OF,
    ACTIONS(267), 32,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__COMMA_DELIM,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LINES,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__SEMI_COLON,
      sym__STOP,
      sym__TO,
      sym__UNDERLINE,
  [740] = 5,
    ACTIONS(272), 1,
      sym__LINE,
    STATE(97), 1,
      aux_sym_qualified_word_repeat1,
    STATE(424), 1,
      sym__in_of,
    ACTIONS(451), 2,
      sym__IN,
      sym__OF,
    ACTIONS(274), 32,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__COMMA_DELIM,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LINES,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__SEMI_COLON,
      sym__STOP,
      sym__TO,
      sym__UNDERLINE,
  [788] = 5,
    STATE(100), 1,
      aux_sym_qualified_word_repeat1,
    STATE(439), 1,
      sym__in_of,
    ACTIONS(259), 2,
      sym_integer,
      sym__PIC,
    ACTIONS(456), 2,
      sym__IN,
      sym__OF,
    ACTIONS(261), 30,
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
      sym_decimal,
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
  [835] = 5,
    STATE(101), 1,
      aux_sym_qualified_word_repeat1,
    STATE(439), 1,
      sym__in_of,
    ACTIONS(272), 2,
      sym_integer,
      sym__PIC,
    ACTIONS(456), 2,
      sym__IN,
      sym__OF,
    ACTIONS(274), 30,
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
      sym_decimal,
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
  [882] = 5,
    STATE(101), 1,
      aux_sym_qualified_word_repeat1,
    STATE(439), 1,
      sym__in_of,
    ACTIONS(265), 2,
      sym_integer,
      sym__PIC,
    ACTIONS(458), 2,
      sym__IN,
      sym__OF,
    ACTIONS(267), 30,
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
      sym_decimal,
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
  [929] = 19,
    ACTIONS(463), 1,
      sym__BACKGROUND_COLOR,
    ACTIONS(465), 1,
      sym__BELL,
    ACTIONS(467), 1,
      sym__BLANK_LINE,
    ACTIONS(469), 1,
      sym__BLANK_SCREEN,
    ACTIONS(471), 1,
      sym__BLINK,
    ACTIONS(473), 1,
      sym__ERASE,
    ACTIONS(475), 1,
      sym__FOREGROUND_COLOR,
    ACTIONS(477), 1,
      sym__HIGHLIGHT,
    ACTIONS(479), 1,
      sym__LOWLIGHT,
    ACTIONS(481), 1,
      sym__OVERLINE,
    ACTIONS(483), 1,
      sym__REVERSE_VIDEO,
    ACTIONS(485), 1,
      sym__SCROLL,
    ACTIONS(487), 1,
      sym__UNDERLINE,
    STATE(327), 1,
      sym_ERASE,
    STATE(328), 1,
      sym_SCROLL,
    STATE(105), 2,
      sym_disp_attr,
      aux_sym_with_clause_repeat1,
    STATE(166), 2,
      sym_BACKGROUND_COLOR,
      sym_FOREGROUND_COLOR,
    ACTIONS(461), 7,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__STOP,
    STATE(138), 9,
      sym_BELL,
      sym_BLANK_LINE,
      sym_BLANK_SCREEN,
      sym_BLINK,
      sym_HIGHLIGHT,
      sym_LOWLIGHT,
      sym_OVERLINE,
      sym_REVERSE_VIDEO,
      sym_UNDERLINE,
  [1003] = 7,
    ACTIONS(494), 1,
      sym_integer,
    ACTIONS(496), 1,
      sym__PIC,
    ACTIONS(499), 1,
      sym__PICTURE,
    ACTIONS(502), 1,
      sym__REDEFINES,
    STATE(103), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    ACTIONS(491), 13,
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
    ACTIONS(489), 14,
      anon_sym_DOT,
      sym_decimal,
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
  [1053] = 2,
    ACTIONS(265), 1,
      sym__LINE,
    ACTIONS(267), 34,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__COMMA_DELIM,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__IN,
      sym__LINES,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OF,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__SEMI_COLON,
      sym__STOP,
      sym__TO,
      sym__UNDERLINE,
  [1093] = 19,
    ACTIONS(507), 1,
      sym__BACKGROUND_COLOR,
    ACTIONS(510), 1,
      sym__BELL,
    ACTIONS(513), 1,
      sym__BLANK_LINE,
    ACTIONS(516), 1,
      sym__BLANK_SCREEN,
    ACTIONS(519), 1,
      sym__BLINK,
    ACTIONS(522), 1,
      sym__ERASE,
    ACTIONS(525), 1,
      sym__FOREGROUND_COLOR,
    ACTIONS(528), 1,
      sym__HIGHLIGHT,
    ACTIONS(531), 1,
      sym__LOWLIGHT,
    ACTIONS(534), 1,
      sym__OVERLINE,
    ACTIONS(537), 1,
      sym__REVERSE_VIDEO,
    ACTIONS(540), 1,
      sym__SCROLL,
    ACTIONS(543), 1,
      sym__UNDERLINE,
    STATE(327), 1,
      sym_ERASE,
    STATE(328), 1,
      sym_SCROLL,
    STATE(105), 2,
      sym_disp_attr,
      aux_sym_with_clause_repeat1,
    STATE(166), 2,
      sym_BACKGROUND_COLOR,
      sym_FOREGROUND_COLOR,
    ACTIONS(505), 7,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__STOP,
    STATE(138), 9,
      sym_BELL,
      sym_BLANK_LINE,
      sym_BLANK_SCREEN,
      sym_BLINK,
      sym_HIGHLIGHT,
      sym_LOWLIGHT,
      sym_OVERLINE,
      sym_REVERSE_VIDEO,
      sym_UNDERLINE,
  [1167] = 12,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    ACTIONS(79), 1,
      sym__WORD,
    ACTIONS(546), 1,
      anon_sym_DOT,
    ACTIONS(550), 1,
      sym__BY,
    ACTIONS(552), 1,
      sym__IS,
    STATE(35), 1,
      sym_qualified_word,
    STATE(49), 1,
      sym__ZERO,
    STATE(144), 1,
      sym_scroll_lines,
    ACTIONS(77), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(117), 4,
      sym__identifier,
      sym__num_or_id_or_lit,
      sym_number,
      sym_ZERO,
    ACTIONS(548), 19,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [1227] = 2,
    ACTIONS(265), 2,
      sym_integer,
      sym__PIC,
    ACTIONS(267), 32,
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
      sym_decimal,
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
  [1266] = 11,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    ACTIONS(79), 1,
      sym__WORD,
    ACTIONS(550), 1,
      sym__BY,
    ACTIONS(554), 1,
      anon_sym_DOT,
    STATE(35), 1,
      sym_qualified_word,
    STATE(49), 1,
      sym__ZERO,
    STATE(133), 1,
      sym_scroll_lines,
    ACTIONS(77), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(117), 4,
      sym__identifier,
      sym__num_or_id_or_lit,
      sym_number,
      sym_ZERO,
    ACTIONS(556), 19,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [1323] = 2,
    ACTIONS(560), 2,
      sym_integer,
      sym__PIC,
    ACTIONS(558), 29,
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
      sym_decimal,
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
  [1359] = 2,
    ACTIONS(564), 2,
      sym_integer,
      sym__PIC,
    ACTIONS(562), 29,
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
      sym_decimal,
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
  [1395] = 2,
    ACTIONS(568), 2,
      sym_integer,
      sym__PIC,
    ACTIONS(566), 29,
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
      sym_decimal,
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
  [1431] = 2,
    ACTIONS(572), 2,
      sym_integer,
      sym__PIC,
    ACTIONS(570), 29,
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
      sym_decimal,
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
  [1467] = 2,
    ACTIONS(576), 2,
      sym_integer,
      sym__PIC,
    ACTIONS(574), 29,
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
      sym_decimal,
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
  [1503] = 20,
    ACTIONS(463), 1,
      sym__BACKGROUND_COLOR,
    ACTIONS(465), 1,
      sym__BELL,
    ACTIONS(467), 1,
      sym__BLANK_LINE,
    ACTIONS(469), 1,
      sym__BLANK_SCREEN,
    ACTIONS(471), 1,
      sym__BLINK,
    ACTIONS(473), 1,
      sym__ERASE,
    ACTIONS(475), 1,
      sym__FOREGROUND_COLOR,
    ACTIONS(477), 1,
      sym__HIGHLIGHT,
    ACTIONS(479), 1,
      sym__LOWLIGHT,
    ACTIONS(481), 1,
      sym__OVERLINE,
    ACTIONS(483), 1,
      sym__REVERSE_VIDEO,
    ACTIONS(485), 1,
      sym__SCROLL,
    ACTIONS(487), 1,
      sym__UNDERLINE,
    ACTIONS(578), 1,
      sym__NO_ADVANCING,
    STATE(262), 1,
      sym_NO_ADVANCING,
    STATE(327), 1,
      sym_ERASE,
    STATE(328), 1,
      sym_SCROLL,
    STATE(102), 2,
      sym_disp_attr,
      aux_sym_with_clause_repeat1,
    STATE(166), 2,
      sym_BACKGROUND_COLOR,
      sym_FOREGROUND_COLOR,
    STATE(138), 9,
      sym_BELL,
      sym_BLANK_LINE,
      sym_BLANK_SCREEN,
      sym_BLINK,
      sym_HIGHLIGHT,
      sym_LOWLIGHT,
      sym_OVERLINE,
      sym_REVERSE_VIDEO,
      sym_UNDERLINE,
  [1574] = 2,
    ACTIONS(582), 2,
      anon_sym_DOT,
      sym_decimal,
    ACTIONS(580), 26,
      sym_integer,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__BY,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__IS,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
      sym__WORD,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
  [1607] = 2,
    ACTIONS(586), 2,
      anon_sym_DOT,
      sym_decimal,
    ACTIONS(584), 26,
      sym_integer,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__BY,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__IS,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
      sym__WORD,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
  [1640] = 5,
    ACTIONS(590), 1,
      sym__LINE,
    ACTIONS(592), 1,
      sym__LINES,
    STATE(139), 1,
      sym_line_or_lines,
    STATE(141), 2,
      sym_LINE,
      sym_LINES,
    ACTIONS(588), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [1676] = 5,
    ACTIONS(590), 1,
      sym__LINE,
    ACTIONS(592), 1,
      sym__LINES,
    STATE(142), 1,
      sym_line_or_lines,
    STATE(141), 2,
      sym_LINE,
      sym_LINES,
    ACTIONS(594), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [1712] = 8,
    ACTIONS(79), 1,
      sym__WORD,
    ACTIONS(89), 1,
      sym_integer,
    ACTIONS(91), 1,
      sym_decimal,
    STATE(168), 1,
      sym_qualified_word,
    ACTIONS(93), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(95), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(390), 7,
      sym__identifier,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(97), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1752] = 8,
    ACTIONS(79), 1,
      sym__WORD,
    ACTIONS(89), 1,
      sym_integer,
    ACTIONS(91), 1,
      sym_decimal,
    STATE(168), 1,
      sym_qualified_word,
    ACTIONS(93), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(95), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(399), 7,
      sym__identifier,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(97), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1792] = 8,
    ACTIONS(7), 1,
      sym__WORD,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    STATE(35), 1,
      sym_qualified_word,
    ACTIONS(17), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(19), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(84), 7,
      sym__identifier,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(21), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1832] = 8,
    ACTIONS(7), 1,
      sym__WORD,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    STATE(35), 1,
      sym_qualified_word,
    ACTIONS(17), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(19), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(87), 7,
      sym__identifier,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(21), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1872] = 8,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    ACTIONS(596), 1,
      sym__WORD,
    STATE(333), 1,
      sym_program_name,
    ACTIONS(17), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(19), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(362), 6,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(21), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1911] = 7,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    ACTIONS(598), 1,
      anon_sym_DOT,
    ACTIONS(17), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(19), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(417), 6,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(21), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1947] = 1,
    ACTIONS(600), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [1970] = 1,
    ACTIONS(602), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [1993] = 1,
    ACTIONS(604), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2016] = 1,
    ACTIONS(606), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2039] = 1,
    ACTIONS(608), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2062] = 1,
    ACTIONS(610), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2085] = 1,
    ACTIONS(612), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2108] = 1,
    ACTIONS(614), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2131] = 1,
    ACTIONS(616), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2154] = 1,
    ACTIONS(618), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2177] = 1,
    ACTIONS(620), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2200] = 1,
    ACTIONS(622), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2223] = 1,
    ACTIONS(546), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2246] = 1,
    ACTIONS(624), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2269] = 1,
    ACTIONS(594), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2292] = 6,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    ACTIONS(17), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(19), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(422), 6,
      sym__LITERAL,
      sym_number,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(21), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [2325] = 1,
    ACTIONS(626), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2348] = 1,
    ACTIONS(628), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2371] = 1,
    ACTIONS(630), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2394] = 1,
    ACTIONS(554), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2417] = 1,
    ACTIONS(632), 20,
      anon_sym_DOT,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__ERASE,
      sym__EXCEPTION,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__STOP,
      sym__UNDERLINE,
  [2440] = 10,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(640), 1,
      sym__DECLARATIVES,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    STATE(157), 1,
      sym_procedure_declaratives,
    ACTIONS(638), 3,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(156), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [2480] = 10,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(640), 1,
      sym__DECLARATIVES,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    STATE(153), 1,
      sym_procedure_declaratives,
    ACTIONS(650), 3,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(158), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [2520] = 10,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(640), 1,
      sym__DECLARATIVES,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
    STATE(155), 1,
      sym_procedure_declaratives,
    ACTIONS(654), 3,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(159), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [2560] = 16,
    ACTIONS(656), 1,
      sym__WORD,
    ACTIONS(659), 1,
      anon_sym_DOT,
    ACTIONS(661), 1,
      sym__BY,
    ACTIONS(664), 1,
      sym__OPTIONAL,
    ACTIONS(667), 1,
      sym__REFERENCE,
    ACTIONS(670), 1,
      sym__RETURNING,
    ACTIONS(672), 1,
      sym__SIZE,
    ACTIONS(675), 1,
      sym__UNSIGNED,
    ACTIONS(678), 1,
      sym__VALUE,
    STATE(255), 1,
      sym_procedure_type,
    STATE(278), 1,
      sym_SIZE,
    STATE(342), 1,
      sym_size,
    STATE(361), 1,
      sym_UNSIGNED,
    STATE(391), 1,
      sym_OPTIONAL,
    STATE(149), 2,
      sym_procedure_param,
      aux_sym_procedure_using_chaining_repeat1,
    STATE(320), 2,
      sym_REFERENCE,
      sym_VALUE,
  [2611] = 16,
    ACTIONS(681), 1,
      sym__WORD,
    ACTIONS(683), 1,
      anon_sym_DOT,
    ACTIONS(685), 1,
      sym__BY,
    ACTIONS(687), 1,
      sym__OPTIONAL,
    ACTIONS(689), 1,
      sym__REFERENCE,
    ACTIONS(691), 1,
      sym__RETURNING,
    ACTIONS(693), 1,
      sym__SIZE,
    ACTIONS(695), 1,
      sym__UNSIGNED,
    ACTIONS(697), 1,
      sym__VALUE,
    STATE(255), 1,
      sym_procedure_type,
    STATE(278), 1,
      sym_SIZE,
    STATE(342), 1,
      sym_size,
    STATE(361), 1,
      sym_UNSIGNED,
    STATE(391), 1,
      sym_OPTIONAL,
    STATE(152), 2,
      sym_procedure_param,
      aux_sym_procedure_using_chaining_repeat1,
    STATE(320), 2,
      sym_REFERENCE,
      sym_VALUE,
  [2662] = 8,
    ACTIONS(699), 1,
      ts_builtin_sym_end,
    ACTIONS(701), 1,
      sym__WORD,
    ACTIONS(706), 1,
      sym__DISPLAY,
    ACTIONS(709), 1,
      sym__MOVE,
    ACTIONS(712), 1,
      sym__STOP,
    ACTIONS(704), 4,
      sym_nested_prog,
      sym_end_program,
      sym__END,
      sym__IDENTIFICATION,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(151), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [2697] = 16,
    ACTIONS(681), 1,
      sym__WORD,
    ACTIONS(685), 1,
      sym__BY,
    ACTIONS(687), 1,
      sym__OPTIONAL,
    ACTIONS(689), 1,
      sym__REFERENCE,
    ACTIONS(693), 1,
      sym__SIZE,
    ACTIONS(695), 1,
      sym__UNSIGNED,
    ACTIONS(697), 1,
      sym__VALUE,
    ACTIONS(715), 1,
      anon_sym_DOT,
    ACTIONS(717), 1,
      sym__RETURNING,
    STATE(255), 1,
      sym_procedure_type,
    STATE(278), 1,
      sym_SIZE,
    STATE(342), 1,
      sym_size,
    STATE(361), 1,
      sym_UNSIGNED,
    STATE(391), 1,
      sym_OPTIONAL,
    STATE(149), 2,
      sym_procedure_param,
      aux_sym_procedure_using_chaining_repeat1,
    STATE(320), 2,
      sym_REFERENCE,
      sym_VALUE,
  [2748] = 8,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    ACTIONS(719), 1,
      ts_builtin_sym_end,
    ACTIONS(721), 3,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(160), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [2782] = 12,
    ACTIONS(578), 1,
      sym__NO_ADVANCING,
    ACTIONS(725), 1,
      sym__EXCEPTION,
    ACTIONS(727), 1,
      sym__NOT_EXCEPTION,
    ACTIONS(729), 1,
      sym__UPON,
    ACTIONS(731), 1,
      sym__WITH,
    STATE(114), 1,
      sym_WITH,
    STATE(223), 1,
      sym_with_clause,
    STATE(268), 1,
      sym_UPON,
    STATE(270), 1,
      sym_NO_ADVANCING,
    STATE(307), 1,
      sym_on_disp_exception,
    STATE(226), 2,
      sym_EXCEPTION,
      sym_NOT_EXCEPTION,
    ACTIONS(723), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [2824] = 8,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    ACTIONS(650), 3,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(158), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [2858] = 8,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
    ACTIONS(654), 3,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(151), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [2892] = 8,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
    ACTIONS(654), 3,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(159), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [2926] = 8,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    ACTIONS(719), 1,
      ts_builtin_sym_end,
    ACTIONS(721), 3,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(151), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [2960] = 8,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    ACTIONS(648), 1,
      ts_builtin_sym_end,
    ACTIONS(650), 3,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(151), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [2994] = 8,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    ACTIONS(735), 3,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(151), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [3028] = 10,
    ACTIONS(578), 1,
      sym__NO_ADVANCING,
    ACTIONS(725), 1,
      sym__EXCEPTION,
    ACTIONS(727), 1,
      sym__NOT_EXCEPTION,
    ACTIONS(731), 1,
      sym__WITH,
    STATE(114), 1,
      sym_WITH,
    STATE(204), 1,
      sym_with_clause,
    STATE(270), 1,
      sym_NO_ADVANCING,
    STATE(293), 1,
      sym_on_disp_exception,
    STATE(226), 2,
      sym_EXCEPTION,
      sym_NOT_EXCEPTION,
    ACTIONS(737), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3064] = 10,
    ACTIONS(578), 1,
      sym__NO_ADVANCING,
    ACTIONS(725), 1,
      sym__EXCEPTION,
    ACTIONS(727), 1,
      sym__NOT_EXCEPTION,
    ACTIONS(731), 1,
      sym__WITH,
    STATE(114), 1,
      sym_WITH,
    STATE(205), 1,
      sym_with_clause,
    STATE(270), 1,
      sym_NO_ADVANCING,
    STATE(305), 1,
      sym_on_disp_exception,
    STATE(226), 2,
      sym_EXCEPTION,
      sym_NOT_EXCEPTION,
    ACTIONS(739), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3100] = 7,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    ACTIONS(741), 1,
      sym__END,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(164), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [3129] = 7,
    ACTIONS(636), 1,
      sym__WORD,
    ACTIONS(642), 1,
      sym__DISPLAY,
    ACTIONS(644), 1,
      sym__MOVE,
    ACTIONS(646), 1,
      sym__STOP,
    ACTIONS(743), 1,
      sym__END,
    STATE(402), 4,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
    STATE(151), 5,
      sym__procedure,
      sym_section_header,
      sym_paragraph_header,
      sym_invalid_statement,
      aux_sym_procedure_division_repeat1,
  [3158] = 1,
    ACTIONS(745), 14,
      sym__BACKGROUND_COLOR,
      sym__BELL,
      sym__BLANK_LINE,
      sym__BLANK_SCREEN,
      sym__BLINK,
      sym__ERASE,
      sym__FOREGROUND_COLOR,
      sym__HIGHLIGHT,
      sym__LOWLIGHT,
      sym__NO_ADVANCING,
      sym__OVERLINE,
      sym__REVERSE_VIDEO,
      sym__SCROLL,
      sym__UNDERLINE,
  [3175] = 8,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    ACTIONS(79), 1,
      sym__WORD,
    ACTIONS(747), 1,
      sym__IS,
    STATE(35), 1,
      sym_qualified_word,
    STATE(49), 1,
      sym__ZERO,
    ACTIONS(77), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(137), 4,
      sym__identifier,
      sym__num_or_id_or_lit,
      sym_number,
      sym_ZERO,
  [3205] = 3,
    STATE(423), 1,
      sym__in_of,
    ACTIONS(749), 2,
      sym__IN,
      sym__OF,
    ACTIONS(337), 10,
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
  [3225] = 4,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_subref,
    STATE(208), 1,
      sym_refmod,
    ACTIONS(217), 10,
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
  [3247] = 5,
    STATE(179), 1,
      aux_sym_qualified_word_repeat1,
    STATE(435), 1,
      sym__in_of,
    ACTIONS(261), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(753), 2,
      sym__IN,
      sym__OF,
    ACTIONS(259), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [3270] = 3,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym_func_refmod,
    ACTIONS(343), 10,
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
  [3289] = 3,
    ACTIONS(757), 1,
      anon_sym_AMP,
    STATE(175), 1,
      aux_sym__basic_literal_repeat1,
    ACTIONS(295), 10,
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
  [3308] = 3,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      sym__func_args,
    ACTIONS(343), 10,
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
  [3327] = 3,
    ACTIONS(755), 1,
      anon_sym_LPAREN,
    STATE(214), 1,
      sym_func_refmod,
    ACTIONS(351), 10,
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
  [3346] = 3,
    ACTIONS(757), 1,
      anon_sym_AMP,
    STATE(171), 1,
      aux_sym__basic_literal_repeat1,
    ACTIONS(282), 10,
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
  [3365] = 3,
    ACTIONS(761), 1,
      anon_sym_AMP,
    STATE(175), 1,
      aux_sym__basic_literal_repeat1,
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
  [3384] = 3,
    ACTIONS(764), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_refmod,
    ACTIONS(223), 10,
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
  [3403] = 5,
    STATE(177), 1,
      aux_sym_qualified_word_repeat1,
    STATE(435), 1,
      sym__in_of,
    ACTIONS(267), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(766), 2,
      sym__IN,
      sym__OF,
    ACTIONS(265), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [3426] = 7,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    ACTIONS(79), 1,
      sym__WORD,
    STATE(35), 1,
      sym_qualified_word,
    STATE(49), 1,
      sym__ZERO,
    ACTIONS(77), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(118), 4,
      sym__identifier,
      sym__num_or_id_or_lit,
      sym_number,
      sym_ZERO,
  [3453] = 5,
    STATE(177), 1,
      aux_sym_qualified_word_repeat1,
    STATE(435), 1,
      sym__in_of,
    ACTIONS(274), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(753), 2,
      sym__IN,
      sym__OF,
    ACTIONS(272), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [3476] = 7,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_decimal,
    ACTIONS(79), 1,
      sym__WORD,
    STATE(35), 1,
      sym_qualified_word,
    STATE(49), 1,
      sym__ZERO,
    ACTIONS(77), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(144), 4,
      sym__identifier,
      sym__num_or_id_or_lit,
      sym_number,
      sym_ZERO,
  [3503] = 1,
    ACTIONS(311), 11,
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
  [3517] = 1,
    ACTIONS(355), 11,
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
  [3531] = 1,
    ACTIONS(288), 11,
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
  [3545] = 10,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    ACTIONS(771), 1,
      anon_sym_COLON,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym__e_sep,
    STATE(296), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(783), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3577] = 10,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(785), 1,
      anon_sym_COLON,
    STATE(26), 1,
      sym__e_sep,
    STATE(296), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(783), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3609] = 4,
    ACTIONS(787), 1,
      ts_builtin_sym_end,
    ACTIONS(791), 1,
      anon_sym_DOT,
    ACTIONS(793), 1,
      sym__SECTION,
    ACTIONS(789), 8,
      sym_nested_prog,
      sym_end_program,
      sym__DISPLAY,
      sym__END,
      sym__IDENTIFICATION,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [3629] = 6,
    ACTIONS(795), 1,
      sym__WORD,
    ACTIONS(797), 1,
      anon_sym_DOT,
    ACTIONS(799), 1,
      sym__ADDRESS,
    STATE(221), 1,
      sym_qualified_word,
    STATE(193), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
    ACTIONS(801), 4,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3653] = 1,
    ACTIONS(319), 11,
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
  [3667] = 1,
    ACTIONS(323), 11,
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
  [3681] = 1,
    ACTIONS(315), 11,
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
  [3695] = 1,
    ACTIONS(307), 11,
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
  [3709] = 1,
    ACTIONS(257), 11,
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
  [3723] = 6,
    ACTIONS(803), 1,
      sym__WORD,
    ACTIONS(806), 1,
      anon_sym_DOT,
    ACTIONS(808), 1,
      sym__ADDRESS,
    STATE(221), 1,
      sym_qualified_word,
    STATE(193), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
    ACTIONS(811), 4,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3747] = 10,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(813), 1,
      anon_sym_COLON,
    STATE(26), 1,
      sym__e_sep,
    STATE(296), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(783), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3779] = 6,
    ACTIONS(795), 1,
      sym__WORD,
    ACTIONS(799), 1,
      sym__ADDRESS,
    ACTIONS(815), 1,
      anon_sym_DOT,
    STATE(221), 1,
      sym_qualified_word,
    STATE(193), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
    ACTIONS(817), 4,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3803] = 1,
    ACTIONS(251), 11,
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
  [3817] = 1,
    ACTIONS(229), 11,
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
  [3831] = 1,
    ACTIONS(299), 11,
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
  [3845] = 1,
    ACTIONS(303), 11,
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
  [3859] = 1,
    ACTIONS(278), 11,
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
  [3873] = 1,
    ACTIONS(363), 11,
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
  [3887] = 1,
    ACTIONS(359), 11,
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
  [3901] = 1,
    ACTIONS(387), 10,
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
  [3914] = 5,
    ACTIONS(725), 1,
      sym__EXCEPTION,
    ACTIONS(727), 1,
      sym__NOT_EXCEPTION,
    STATE(291), 1,
      sym_on_disp_exception,
    STATE(226), 2,
      sym_EXCEPTION,
      sym_NOT_EXCEPTION,
    ACTIONS(819), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3935] = 5,
    ACTIONS(725), 1,
      sym__EXCEPTION,
    ACTIONS(727), 1,
      sym__NOT_EXCEPTION,
    STATE(293), 1,
      sym_on_disp_exception,
    STATE(226), 2,
      sym_EXCEPTION,
      sym_NOT_EXCEPTION,
    ACTIONS(737), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3956] = 6,
    ACTIONS(821), 1,
      sym_level_number,
    ACTIONS(823), 1,
      sym_level_number_88,
    ACTIONS(825), 1,
      sym_constant_entry,
    STATE(222), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(433), 1,
      sym_data_description,
    ACTIONS(827), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [3979] = 5,
    ACTIONS(725), 1,
      sym__EXCEPTION,
    ACTIONS(727), 1,
      sym__NOT_EXCEPTION,
    STATE(307), 1,
      sym_on_disp_exception,
    STATE(226), 2,
      sym_EXCEPTION,
      sym_NOT_EXCEPTION,
    ACTIONS(723), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4000] = 1,
    ACTIONS(223), 10,
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
  [4013] = 1,
    ACTIONS(395), 10,
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
  [4026] = 1,
    ACTIONS(375), 10,
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
  [4039] = 1,
    ACTIONS(367), 10,
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
  [4052] = 1,
    ACTIONS(351), 10,
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
  [4065] = 1,
    ACTIONS(237), 10,
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
  [4078] = 1,
    ACTIONS(371), 10,
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
  [4091] = 5,
    ACTIONS(831), 1,
      sym__DISPLAY,
    ACTIONS(834), 1,
      sym__MOVE,
    ACTIONS(837), 1,
      sym__STOP,
    ACTIONS(829), 2,
      anon_sym_DOT,
      sym__END_DISPLAY,
    STATE(215), 5,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
      aux_sym_on_disp_exception_repeat1,
  [4112] = 1,
    ACTIONS(233), 10,
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
  [4125] = 1,
    ACTIONS(383), 10,
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
  [4138] = 1,
    ACTIONS(399), 10,
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
  [4151] = 6,
    ACTIONS(821), 1,
      sym_level_number,
    ACTIONS(823), 1,
      sym_level_number_88,
    ACTIONS(825), 1,
      sym_constant_entry,
    STATE(206), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(433), 1,
      sym_data_description,
    ACTIONS(840), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [4174] = 5,
    ACTIONS(844), 1,
      sym__DISPLAY,
    ACTIONS(846), 1,
      sym__MOVE,
    ACTIONS(848), 1,
      sym__STOP,
    ACTIONS(842), 2,
      anon_sym_DOT,
      sym__END_DISPLAY,
    STATE(215), 5,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
      aux_sym_on_disp_exception_repeat1,
  [4195] = 5,
    ACTIONS(217), 1,
      anon_sym_DOT,
    ACTIONS(850), 1,
      anon_sym_LPAREN,
    STATE(233), 1,
      sym_subref,
    STATE(269), 1,
      sym_refmod,
    ACTIONS(215), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [4216] = 6,
    ACTIONS(852), 1,
      sym_level_number,
    ACTIONS(855), 1,
      sym_level_number_88,
    ACTIONS(858), 1,
      sym_constant_entry,
    STATE(222), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(433), 1,
      sym_data_description,
    ACTIONS(861), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [4239] = 5,
    ACTIONS(725), 1,
      sym__EXCEPTION,
    ACTIONS(727), 1,
      sym__NOT_EXCEPTION,
    STATE(305), 1,
      sym_on_disp_exception,
    STATE(226), 2,
      sym_EXCEPTION,
      sym_NOT_EXCEPTION,
    ACTIONS(739), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4260] = 9,
    ACTIONS(769), 1,
      anon_sym_RPAREN,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    STATE(26), 1,
      sym__e_sep,
    STATE(296), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(783), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4289] = 2,
    ACTIONS(267), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(265), 8,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__IN,
      sym__MOVE,
      sym__OF,
      sym__STOP,
      sym__WORD,
  [4304] = 5,
    ACTIONS(844), 1,
      sym__DISPLAY,
    ACTIONS(846), 1,
      sym__MOVE,
    ACTIONS(848), 1,
      sym__STOP,
    ACTIONS(863), 2,
      anon_sym_DOT,
      sym__END_DISPLAY,
    STATE(220), 5,
      sym__statement,
      sym_stop_statement,
      sym_display_statement,
      sym_move_statement,
      aux_sym_on_disp_exception_repeat1,
  [4325] = 9,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(865), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym__e_sep,
    STATE(303), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(783), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4354] = 8,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(867), 1,
      anon_sym_RPAREN,
    STATE(366), 1,
      sym__e_sep,
    ACTIONS(869), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4380] = 2,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(871), 8,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4394] = 2,
    ACTIONS(873), 1,
      ts_builtin_sym_end,
    ACTIONS(875), 8,
      sym_nested_prog,
      sym_end_program,
      sym__DISPLAY,
      sym__END,
      sym__IDENTIFICATION,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [4408] = 4,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(877), 6,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4426] = 8,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
    STATE(365), 1,
      sym__e_sep,
    ACTIONS(881), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4452] = 4,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
    STATE(271), 1,
      sym_refmod,
    ACTIONS(221), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [4470] = 2,
    ACTIONS(885), 1,
      ts_builtin_sym_end,
    ACTIONS(887), 8,
      sym_nested_prog,
      sym_end_program,
      sym__DISPLAY,
      sym__END,
      sym__IDENTIFICATION,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [4484] = 2,
    ACTIONS(891), 1,
      anon_sym_DOT,
    ACTIONS(889), 8,
      sym__BY,
      sym__OPTIONAL,
      sym__REFERENCE,
      sym__RETURNING,
      sym__SIZE,
      sym__UNSIGNED,
      sym__VALUE,
      sym__WORD,
  [4498] = 1,
    ACTIONS(893), 9,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__NO_ADVANCING,
      sym__STOP,
      sym__WITH,
  [4510] = 1,
    ACTIONS(895), 9,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__NO_ADVANCING,
      sym__STOP,
      sym__WITH,
  [4522] = 1,
    ACTIONS(897), 9,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__NO_ADVANCING,
      sym__STOP,
      sym__WITH,
  [4534] = 2,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(899), 8,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4548] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(901), 4,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4570] = 2,
    ACTIONS(905), 1,
      anon_sym_DOT,
    ACTIONS(903), 8,
      sym__BY,
      sym__OPTIONAL,
      sym__REFERENCE,
      sym__RETURNING,
      sym__SIZE,
      sym__UNSIGNED,
      sym__VALUE,
      sym__WORD,
  [4584] = 1,
    ACTIONS(907), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4596] = 4,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(909), 6,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4614] = 1,
    ACTIONS(911), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4626] = 2,
    ACTIONS(913), 1,
      ts_builtin_sym_end,
    ACTIONS(915), 8,
      sym_nested_prog,
      sym_end_program,
      sym__DISPLAY,
      sym__END,
      sym__IDENTIFICATION,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [4640] = 2,
    ACTIONS(919), 1,
      anon_sym_DOT,
    ACTIONS(917), 8,
      sym__BY,
      sym__OPTIONAL,
      sym__REFERENCE,
      sym__RETURNING,
      sym__SIZE,
      sym__UNSIGNED,
      sym__VALUE,
      sym__WORD,
  [4654] = 1,
    ACTIONS(921), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4666] = 2,
    ACTIONS(925), 1,
      anon_sym_DOT,
    ACTIONS(923), 8,
      sym__BY,
      sym__OPTIONAL,
      sym__REFERENCE,
      sym__RETURNING,
      sym__SIZE,
      sym__UNSIGNED,
      sym__VALUE,
      sym__WORD,
  [4680] = 2,
    ACTIONS(929), 1,
      anon_sym_DOT,
    ACTIONS(927), 8,
      sym__BY,
      sym__OPTIONAL,
      sym__REFERENCE,
      sym__RETURNING,
      sym__SIZE,
      sym__UNSIGNED,
      sym__VALUE,
      sym__WORD,
  [4694] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(931), 4,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4716] = 2,
    ACTIONS(933), 1,
      ts_builtin_sym_end,
    ACTIONS(935), 8,
      sym_nested_prog,
      sym_end_program,
      sym__DISPLAY,
      sym__END,
      sym__IDENTIFICATION,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [4730] = 1,
    ACTIONS(937), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4742] = 2,
    ACTIONS(941), 1,
      anon_sym_DOT,
    ACTIONS(939), 8,
      sym__BY,
      sym__OPTIONAL,
      sym__REFERENCE,
      sym__RETURNING,
      sym__SIZE,
      sym__UNSIGNED,
      sym__VALUE,
      sym__WORD,
  [4756] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(943), 3,
      anon_sym_RPAREN,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4777] = 8,
    ACTIONS(687), 1,
      sym__OPTIONAL,
    ACTIONS(693), 1,
      sym__SIZE,
    ACTIONS(695), 1,
      sym__UNSIGNED,
    ACTIONS(945), 1,
      sym__WORD,
    STATE(278), 1,
      sym_SIZE,
    STATE(336), 1,
      sym_size,
    STATE(361), 1,
      sym_UNSIGNED,
    STATE(398), 1,
      sym_OPTIONAL,
  [4802] = 8,
    ACTIONS(947), 1,
      sym_file_section,
    ACTIONS(949), 1,
      sym_local_storage_section,
    ACTIONS(951), 1,
      sym_linkage_section,
    ACTIONS(953), 1,
      sym_report_section,
    ACTIONS(955), 1,
      sym_screen_section,
    ACTIONS(957), 1,
      sym__PROCEDURE,
    ACTIONS(959), 1,
      sym__WORKING_STORAGE,
    STATE(309), 1,
      sym_working_storage_section,
  [4827] = 2,
    ACTIONS(961), 1,
      sym_level_number_88,
    ACTIONS(861), 7,
      sym_level_number,
      sym_constant_entry,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [4840] = 2,
    ACTIONS(963), 1,
      ts_builtin_sym_end,
    ACTIONS(965), 7,
      sym_nested_prog,
      sym_end_program,
      sym__DISPLAY,
      sym__IDENTIFICATION,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [4853] = 2,
    ACTIONS(229), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(227), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [4866] = 7,
    ACTIONS(967), 1,
      anon_sym_DOT,
    ACTIONS(969), 1,
      sym__CHAINING,
    ACTIONS(971), 1,
      sym__RETURNING,
    ACTIONS(973), 1,
      sym__USING,
    STATE(338), 1,
      sym_procedure_using_chaining,
    STATE(413), 1,
      sym_procedure_returning,
    STATE(150), 2,
      sym_CHAINING,
      sym_USING,
  [4889] = 2,
    ACTIONS(975), 1,
      ts_builtin_sym_end,
    ACTIONS(977), 7,
      sym_nested_prog,
      sym_end_program,
      sym__DISPLAY,
      sym__IDENTIFICATION,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [4902] = 1,
    ACTIONS(461), 7,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__STOP,
  [4912] = 1,
    ACTIONS(979), 7,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__STOP,
  [4922] = 2,
    ACTIONS(983), 1,
      sym_decimal,
    ACTIONS(981), 6,
      sym_integer,
      sym__IS,
      sym__WORD,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
  [4934] = 2,
    ACTIONS(987), 1,
      anon_sym_DOT,
    ACTIONS(985), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [4946] = 2,
    ACTIONS(991), 1,
      sym_decimal,
    ACTIONS(989), 6,
      sym_integer,
      sym__IS,
      sym__WORD,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
  [4958] = 2,
    ACTIONS(995), 1,
      anon_sym_DOT,
    ACTIONS(993), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [4970] = 5,
    ACTIONS(997), 1,
      sym__WORD,
    ACTIONS(999), 1,
      sym__CRT,
    ACTIONS(1001), 1,
      sym__MNEMONIC_NAME,
    ACTIONS(1003), 1,
      sym__PRINTER,
    STATE(161), 3,
      sym_CRT,
      sym_MNEMONIC_NAME,
      sym_PRINTER,
  [4988] = 2,
    ACTIONS(223), 1,
      anon_sym_DOT,
    ACTIONS(221), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [5000] = 1,
    ACTIONS(1005), 7,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__STOP,
  [5010] = 2,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(231), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [5022] = 7,
    ACTIONS(959), 1,
      sym__WORKING_STORAGE,
    ACTIONS(1007), 1,
      sym_local_storage_section,
    ACTIONS(1009), 1,
      sym_linkage_section,
    ACTIONS(1011), 1,
      sym_report_section,
    ACTIONS(1013), 1,
      sym_screen_section,
    ACTIONS(1015), 1,
      sym__PROCEDURE,
    STATE(299), 1,
      sym_working_storage_section,
  [5044] = 5,
    ACTIONS(999), 1,
      sym__CRT,
    ACTIONS(1001), 1,
      sym__MNEMONIC_NAME,
    ACTIONS(1003), 1,
      sym__PRINTER,
    ACTIONS(1017), 1,
      sym__WORD,
    STATE(162), 3,
      sym_CRT,
      sym_MNEMONIC_NAME,
      sym_PRINTER,
  [5062] = 2,
    ACTIONS(237), 1,
      anon_sym_DOT,
    ACTIONS(235), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym__WORD,
  [5074] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [5093] = 5,
    ACTIONS(79), 1,
      sym__WORD,
    ACTIONS(1023), 1,
      sym__OF,
    STATE(168), 1,
      sym_qualified_word,
    STATE(381), 1,
      sym__identifier,
    ACTIONS(1021), 2,
      sym__ENTRY,
      sym__PROGRAM,
  [5110] = 5,
    ACTIONS(7), 1,
      sym__WORD,
    ACTIONS(1027), 1,
      sym__OF,
    STATE(35), 1,
      sym_qualified_word,
    STATE(81), 1,
      sym__identifier,
    ACTIONS(1025), 2,
      sym__ENTRY,
      sym__PROGRAM,
  [5127] = 5,
    ACTIONS(1029), 1,
      sym_integer,
    ACTIONS(1031), 1,
      sym__AUTO,
    ACTIONS(1033), 1,
      sym__DEFAULT,
    ACTIONS(1035), 1,
      sym__IS,
    STATE(349), 2,
      sym_AUTO,
      sym_DEFAULT,
  [5144] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(1037), 1,
      anon_sym_RPAREN,
  [5163] = 4,
    ACTIONS(795), 1,
      sym__WORD,
    ACTIONS(799), 1,
      sym__ADDRESS,
    STATE(221), 1,
      sym_qualified_word,
    STATE(187), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [5178] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(1039), 1,
      anon_sym_COLON,
  [5197] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
  [5216] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(785), 1,
      anon_sym_COLON,
  [5235] = 4,
    ACTIONS(795), 1,
      sym__WORD,
    ACTIONS(799), 1,
      sym__ADDRESS,
    STATE(221), 1,
      sym_qualified_word,
    STATE(195), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [5250] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(1043), 1,
      anon_sym_RPAREN,
  [5269] = 5,
    ACTIONS(1045), 1,
      sym_picture_x,
    ACTIONS(1047), 1,
      sym__picture_9_z,
    ACTIONS(1049), 1,
      sym__picture_9_v,
    ACTIONS(1051), 1,
      sym__IS,
    STATE(113), 2,
      sym__picture_string,
      sym_picture_9,
  [5286] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(1053), 1,
      anon_sym_COLON,
  [5305] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(813), 1,
      anon_sym_COLON,
  [5324] = 6,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
  [5343] = 6,
    ACTIONS(771), 1,
      anon_sym_COLON,
    ACTIONS(773), 1,
      anon_sym_PLUS,
    ACTIONS(775), 1,
      anon_sym_DASH,
    ACTIONS(777), 1,
      anon_sym_STAR,
    ACTIONS(779), 1,
      anon_sym_SLASH,
    ACTIONS(781), 1,
      anon_sym_CARET,
  [5362] = 1,
    ACTIONS(1057), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [5370] = 1,
    ACTIONS(1059), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [5378] = 1,
    ACTIONS(819), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [5386] = 1,
    ACTIONS(1061), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [5394] = 4,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym__e_sep,
    STATE(295), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(1063), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [5408] = 4,
    ACTIONS(1066), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym__e_sep,
    STATE(295), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(783), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [5422] = 1,
    ACTIONS(1068), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [5430] = 4,
    ACTIONS(79), 1,
      sym__WORD,
    STATE(168), 1,
      sym_qualified_word,
    STATE(390), 1,
      sym__identifier,
    ACTIONS(1070), 2,
      sym__ENTRY,
      sym__PROGRAM,
  [5444] = 5,
    ACTIONS(1072), 1,
      sym_local_storage_section,
    ACTIONS(1074), 1,
      sym_linkage_section,
    ACTIONS(1076), 1,
      sym_report_section,
    ACTIONS(1078), 1,
      sym_screen_section,
    ACTIONS(1080), 1,
      sym__PROCEDURE,
  [5460] = 1,
    ACTIONS(1082), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [5468] = 4,
    ACTIONS(1084), 1,
      ts_builtin_sym_end,
    ACTIONS(1086), 1,
      sym__IDENTIFICATION,
    STATE(302), 1,
      sym_identification_division,
    STATE(301), 2,
      sym_program_definition,
      aux_sym_start_repeat1,
  [5482] = 5,
    ACTIONS(1089), 1,
      sym_environment_division,
    ACTIONS(1091), 1,
      sym__DATA,
    ACTIONS(1093), 1,
      sym__PROCEDURE,
    STATE(326), 1,
      sym_procedure_division,
    STATE(353), 1,
      sym_data_division,
  [5498] = 4,
    ACTIONS(1095), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym__e_sep,
    STATE(295), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(783), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [5512] = 2,
    ACTIONS(1099), 1,
      sym__END_DISPLAY,
    ACTIONS(1097), 4,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__MOVE,
      sym__STOP,
  [5522] = 1,
    ACTIONS(737), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [5530] = 1,
    ACTIONS(723), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [5538] = 1,
    ACTIONS(739), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [5546] = 4,
    ACTIONS(7), 1,
      sym__WORD,
    STATE(35), 1,
      sym_qualified_word,
    STATE(84), 1,
      sym__identifier,
    ACTIONS(1101), 2,
      sym__ENTRY,
      sym__PROGRAM,
  [5560] = 5,
    ACTIONS(1007), 1,
      sym_local_storage_section,
    ACTIONS(1009), 1,
      sym_linkage_section,
    ACTIONS(1011), 1,
      sym_report_section,
    ACTIONS(1013), 1,
      sym_screen_section,
    ACTIONS(1015), 1,
      sym__PROCEDURE,
  [5576] = 1,
    ACTIONS(1103), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [5584] = 4,
    ACTIONS(1047), 1,
      sym__picture_9_z,
    ACTIONS(1049), 1,
      sym__picture_9_v,
    ACTIONS(1105), 1,
      sym_picture_x,
    STATE(111), 2,
      sym__picture_string,
      sym_picture_9,
  [5598] = 4,
    ACTIONS(5), 1,
      sym__IDENTIFICATION,
    ACTIONS(1107), 1,
      ts_builtin_sym_end,
    STATE(302), 1,
      sym_identification_division,
    STATE(301), 2,
      sym_program_definition,
      aux_sym_start_repeat1,
  [5612] = 4,
    ACTIONS(1031), 1,
      sym__AUTO,
    ACTIONS(1033), 1,
      sym__DEFAULT,
    ACTIONS(1109), 1,
      sym_integer,
    STATE(358), 2,
      sym_AUTO,
      sym_DEFAULT,
  [5626] = 1,
    ACTIONS(1111), 4,
      sym_integer,
      sym__AUTO,
      sym__DEFAULT,
      sym__IS,
  [5633] = 1,
    ACTIONS(1113), 4,
      sym__OPTIONAL,
      sym__SIZE,
      sym__UNSIGNED,
      sym__WORD,
  [5640] = 1,
    ACTIONS(1115), 4,
      sym__OPTIONAL,
      sym__SIZE,
      sym__UNSIGNED,
      sym__WORD,
  [5647] = 3,
    ACTIONS(1117), 1,
      sym__REFERENCE,
    ACTIONS(1119), 1,
      sym__VALUE,
    STATE(316), 2,
      sym_REFERENCE,
      sym_VALUE,
  [5658] = 3,
    ACTIONS(1123), 1,
      sym_nested_prog,
    ACTIONS(1125), 1,
      sym_end_program,
    ACTIONS(1121), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [5669] = 1,
    ACTIONS(1127), 4,
      sym__OPTIONAL,
      sym__SIZE,
      sym__UNSIGNED,
      sym__WORD,
  [5676] = 1,
    ACTIONS(1129), 4,
      sym__OPTIONAL,
      sym__SIZE,
      sym__UNSIGNED,
      sym__WORD,
  [5683] = 4,
    ACTIONS(1131), 1,
      sym_linkage_section,
    ACTIONS(1133), 1,
      sym_report_section,
    ACTIONS(1135), 1,
      sym_screen_section,
    ACTIONS(1137), 1,
      sym__PROCEDURE,
  [5696] = 4,
    ACTIONS(795), 1,
      sym__WORD,
    ACTIONS(1139), 1,
      sym__OF,
    STATE(221), 1,
      sym_qualified_word,
    STATE(265), 1,
      sym__identifier,
  [5709] = 3,
    ACTIONS(1143), 1,
      sym_nested_prog,
    ACTIONS(1145), 1,
      sym_end_program,
    ACTIONS(1141), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [5720] = 1,
    ACTIONS(1147), 4,
      sym__UPON_ARGUMENT_NUMBER,
      sym__UPON_COMMAND_LINE,
      sym__UPON_ENVIRONMENT_NAME,
      sym__UPON_ENVIRONMENT_VALUE,
  [5727] = 1,
    ACTIONS(1149), 4,
      sym__CRT,
      sym__MNEMONIC_NAME,
      sym__PRINTER,
      sym__WORD,
  [5734] = 3,
    ACTIONS(1153), 1,
      sym_nested_prog,
    ACTIONS(1155), 1,
      sym_end_program,
    ACTIONS(1151), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [5745] = 3,
    ACTIONS(1157), 1,
      sym__EOL,
    ACTIONS(1159), 1,
      sym__EOS,
    STATE(137), 2,
      sym_EOL,
      sym_EOS,
  [5756] = 3,
    ACTIONS(1161), 1,
      sym__DOWN,
    ACTIONS(1163), 1,
      sym__UP,
    STATE(106), 2,
      sym_DOWN,
      sym_UP,
  [5767] = 4,
    ACTIONS(1074), 1,
      sym_linkage_section,
    ACTIONS(1076), 1,
      sym_report_section,
    ACTIONS(1078), 1,
      sym_screen_section,
    ACTIONS(1080), 1,
      sym__PROCEDURE,
  [5780] = 4,
    ACTIONS(1091), 1,
      sym__DATA,
    ACTIONS(1093), 1,
      sym__PROCEDURE,
    STATE(323), 1,
      sym_procedure_division,
    STATE(364), 1,
      sym_data_division,
  [5793] = 4,
    ACTIONS(1009), 1,
      sym_linkage_section,
    ACTIONS(1011), 1,
      sym_report_section,
    ACTIONS(1013), 1,
      sym_screen_section,
    ACTIONS(1015), 1,
      sym__PROCEDURE,
  [5806] = 3,
    ACTIONS(1165), 1,
      sym__WORD,
    STATE(221), 1,
      sym_qualified_word,
    STATE(267), 1,
      sym__identifier,
  [5816] = 3,
    ACTIONS(1167), 1,
      anon_sym_DOT,
    ACTIONS(1169), 1,
      sym__AS,
    STATE(408), 1,
      sym_as_literal,
  [5826] = 3,
    ACTIONS(1076), 1,
      sym_report_section,
    ACTIONS(1078), 1,
      sym_screen_section,
    ACTIONS(1080), 1,
      sym__PROCEDURE,
  [5836] = 2,
    ACTIONS(1173), 1,
      sym_end_program,
    ACTIONS(1171), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [5844] = 3,
    ACTIONS(687), 1,
      sym__OPTIONAL,
    ACTIONS(1175), 1,
      sym__WORD,
    STATE(372), 1,
      sym_OPTIONAL,
  [5854] = 3,
    ACTIONS(1011), 1,
      sym_report_section,
    ACTIONS(1013), 1,
      sym_screen_section,
    ACTIONS(1015), 1,
      sym__PROCEDURE,
  [5864] = 3,
    ACTIONS(971), 1,
      sym__RETURNING,
    ACTIONS(1177), 1,
      anon_sym_DOT,
    STATE(400), 1,
      sym_procedure_returning,
  [5874] = 2,
    STATE(385), 1,
      sym_entry_name,
    ACTIONS(1179), 2,
      sym__FILLER,
      sym__WORD,
  [5882] = 2,
    STATE(95), 1,
      sym_entry_name,
    ACTIONS(1179), 2,
      sym__FILLER,
      sym__WORD,
  [5890] = 3,
    ACTIONS(1133), 1,
      sym_report_section,
    ACTIONS(1135), 1,
      sym_screen_section,
    ACTIONS(1137), 1,
      sym__PROCEDURE,
  [5900] = 3,
    ACTIONS(687), 1,
      sym__OPTIONAL,
    ACTIONS(945), 1,
      sym__WORD,
    STATE(398), 1,
      sym_OPTIONAL,
  [5910] = 3,
    ACTIONS(1181), 1,
      sym_report_section,
    ACTIONS(1183), 1,
      sym_screen_section,
    ACTIONS(1185), 1,
      sym__PROCEDURE,
  [5920] = 1,
    ACTIONS(1187), 3,
      sym_environment_division,
      sym__DATA,
      sym__PROCEDURE,
  [5926] = 1,
    ACTIONS(1189), 3,
      sym_environment_division,
      sym__DATA,
      sym__PROCEDURE,
  [5932] = 2,
    ACTIONS(1125), 1,
      sym_end_program,
    ACTIONS(1121), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [5940] = 3,
    ACTIONS(1191), 1,
      sym__WORD,
    STATE(35), 1,
      sym_qualified_word,
    STATE(109), 1,
      sym__identifier,
  [5950] = 2,
    ACTIONS(1145), 1,
      sym_end_program,
    ACTIONS(1141), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [5958] = 1,
    ACTIONS(1193), 2,
      sym__OPTIONAL,
      sym__WORD,
  [5963] = 1,
    ACTIONS(1195), 2,
      sym__OPTIONAL,
      sym__WORD,
  [5968] = 1,
    ACTIONS(1171), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [5973] = 1,
    ACTIONS(1141), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [5978] = 2,
    ACTIONS(1093), 1,
      sym__PROCEDURE,
    STATE(323), 1,
      sym_procedure_division,
  [5985] = 1,
    ACTIONS(1197), 2,
      sym__OPTIONAL,
      sym__WORD,
  [5990] = 2,
    ACTIONS(1199), 1,
      sym_screen_section,
    ACTIONS(1201), 1,
      sym__PROCEDURE,
  [5997] = 2,
    ACTIONS(1183), 1,
      sym_screen_section,
    ACTIONS(1185), 1,
      sym__PROCEDURE,
  [6004] = 2,
    ACTIONS(1109), 1,
      sym_integer,
    ACTIONS(1203), 1,
      sym__IS,
  [6011] = 1,
    ACTIONS(1205), 2,
      sym__OPTIONAL,
      sym__WORD,
  [6016] = 1,
    ACTIONS(1121), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [6021] = 1,
    ACTIONS(1207), 2,
      sym__OPTIONAL,
      sym__WORD,
  [6026] = 2,
    ACTIONS(1209), 1,
      sym__SIZE,
    STATE(357), 1,
      sym_SIZE,
  [6033] = 1,
    ACTIONS(1211), 2,
      anon_sym_DOT,
      sym__AS,
  [6038] = 2,
    ACTIONS(1135), 1,
      sym_screen_section,
    ACTIONS(1137), 1,
      sym__PROCEDURE,
  [6045] = 2,
    ACTIONS(1093), 1,
      sym__PROCEDURE,
    STATE(318), 1,
      sym_procedure_division,
  [6052] = 1,
    ACTIONS(1213), 2,
      sym__LEADING,
      sym__TRAILING,
  [6057] = 2,
    ACTIONS(1215), 1,
      sym__WORD,
    STATE(412), 1,
      sym_qualified_word,
  [6064] = 2,
    ACTIONS(1078), 1,
      sym_screen_section,
    ACTIONS(1080), 1,
      sym__PROCEDURE,
  [6071] = 2,
    ACTIONS(1013), 1,
      sym_screen_section,
    ACTIONS(1015), 1,
      sym__PROCEDURE,
  [6078] = 1,
    ACTIONS(1217), 2,
      sym__EOL,
      sym__EOS,
  [6083] = 1,
    ACTIONS(1219), 2,
      sym__DOWN,
      sym__UP,
  [6088] = 1,
    ACTIONS(1221), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [6093] = 1,
    ACTIONS(1223), 1,
      sym__WORD,
  [6097] = 1,
    ACTIONS(1225), 1,
      anon_sym_LPAREN,
  [6101] = 1,
    ACTIONS(1227), 1,
      anon_sym_LPAREN,
  [6105] = 1,
    ACTIONS(1229), 1,
      anon_sym_DOT,
  [6109] = 1,
    ACTIONS(1231), 1,
      anon_sym_LPAREN,
  [6113] = 1,
    ACTIONS(1080), 1,
      sym__PROCEDURE,
  [6117] = 1,
    ACTIONS(1233), 1,
      anon_sym_LPAREN,
  [6121] = 1,
    ACTIONS(1235), 1,
      anon_sym_LPAREN,
  [6125] = 1,
    ACTIONS(1237), 1,
      anon_sym_LPAREN,
  [6129] = 1,
    ACTIONS(379), 1,
      sym__TO,
  [6133] = 1,
    ACTIONS(1239), 1,
      anon_sym_LPAREN,
  [6137] = 1,
    ACTIONS(1241), 1,
      anon_sym_LPAREN,
  [6141] = 1,
    ACTIONS(1243), 1,
      anon_sym_LPAREN,
  [6145] = 1,
    ACTIONS(447), 1,
      anon_sym_DOT,
  [6149] = 1,
    ACTIONS(1245), 1,
      anon_sym_LPAREN,
  [6153] = 1,
    ACTIONS(1247), 1,
      anon_sym_LPAREN,
  [6157] = 1,
    ACTIONS(333), 1,
      sym__TO,
  [6161] = 1,
    ACTIONS(1249), 1,
      anon_sym_LPAREN,
  [6165] = 1,
    ACTIONS(391), 1,
      sym__TO,
  [6169] = 1,
    ACTIONS(1251), 1,
      sym__WORD,
  [6173] = 1,
    ACTIONS(1253), 1,
      anon_sym_LPAREN,
  [6177] = 1,
    ACTIONS(1255), 1,
      anon_sym_LPAREN,
  [6181] = 1,
    ACTIONS(1257), 1,
      sym__SIZE,
  [6185] = 1,
    ACTIONS(1259), 1,
      sym__TO,
  [6189] = 1,
    ACTIONS(1261), 1,
      sym__DIVISION,
  [6193] = 1,
    ACTIONS(1263), 1,
      sym__WORD,
  [6197] = 1,
    ACTIONS(1265), 1,
      sym__WORD,
  [6201] = 1,
    ACTIONS(403), 1,
      sym__TO,
  [6205] = 1,
    ACTIONS(1267), 1,
      anon_sym_DOT,
  [6209] = 1,
    ACTIONS(1269), 1,
      anon_sym_DOT,
  [6213] = 1,
    ACTIONS(1271), 1,
      anon_sym_DOT,
  [6217] = 1,
    ACTIONS(1273), 1,
      sym__RUN,
  [6221] = 1,
    ACTIONS(1275), 1,
      anon_sym_DOT,
  [6225] = 1,
    ACTIONS(1277), 1,
      anon_sym_DOT,
  [6229] = 1,
    ACTIONS(1279), 1,
      sym__SECTION,
  [6233] = 1,
    ACTIONS(1015), 1,
      sym__PROCEDURE,
  [6237] = 1,
    ACTIONS(1281), 1,
      anon_sym_DOT,
  [6241] = 1,
    ACTIONS(1137), 1,
      sym__PROCEDURE,
  [6245] = 1,
    ACTIONS(1283), 1,
      sym__DECLARATIVES,
  [6249] = 1,
    ACTIONS(1285), 1,
      anon_sym_RPAREN,
  [6253] = 1,
    ACTIONS(1287), 1,
      anon_sym_RPAREN,
  [6257] = 1,
    ACTIONS(1177), 1,
      anon_sym_DOT,
  [6261] = 1,
    ACTIONS(1289), 1,
      sym__WORD,
  [6265] = 1,
    ACTIONS(1291), 1,
      sym__WORD,
  [6269] = 1,
    ACTIONS(1293), 1,
      sym__TO,
  [6273] = 1,
    ACTIONS(1295), 1,
      anon_sym_DOT,
  [6277] = 1,
    ACTIONS(1297), 1,
      sym_integer,
  [6281] = 1,
    ACTIONS(1299), 1,
      anon_sym_DOT,
  [6285] = 1,
    ACTIONS(437), 1,
      anon_sym_DOT,
  [6289] = 1,
    ACTIONS(1301), 1,
      sym__PROCEDURE,
  [6293] = 1,
    ACTIONS(1303), 1,
      anon_sym_DOT,
  [6297] = 1,
    ACTIONS(1305), 1,
      sym__WORD,
  [6301] = 1,
    ACTIONS(1307), 1,
      sym__WORD,
  [6305] = 1,
    ACTIONS(1309), 1,
      anon_sym_DOT,
  [6309] = 1,
    ACTIONS(1311), 1,
      anon_sym_RPAREN,
  [6313] = 1,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
  [6317] = 1,
    ACTIONS(1313), 1,
      anon_sym_RPAREN,
  [6321] = 1,
    ACTIONS(1185), 1,
      sym__PROCEDURE,
  [6325] = 1,
    ACTIONS(1315), 1,
      anon_sym_RPAREN,
  [6329] = 1,
    ACTIONS(1317), 1,
      anon_sym_RPAREN,
  [6333] = 1,
    ACTIONS(1319), 1,
      anon_sym_DOT,
  [6337] = 1,
    ACTIONS(1321), 1,
      anon_sym_DOT,
  [6341] = 1,
    ACTIONS(1323), 1,
      anon_sym_DOT,
  [6345] = 1,
    ACTIONS(1325), 1,
      sym__WORD,
  [6349] = 1,
    ACTIONS(1327), 1,
      anon_sym_RPAREN,
  [6353] = 1,
    ACTIONS(1329), 1,
      anon_sym_RPAREN,
  [6357] = 1,
    ACTIONS(1331), 1,
      sym__DECLARATIVES,
  [6361] = 1,
    ACTIONS(1333), 1,
      sym__WORD,
  [6365] = 1,
    ACTIONS(1335), 1,
      anon_sym_RPAREN,
  [6369] = 1,
    ACTIONS(1337), 1,
      sym__PROGRAM_ID,
  [6373] = 1,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
  [6377] = 1,
    ACTIONS(1339), 1,
      anon_sym_RPAREN,
  [6381] = 1,
    ACTIONS(1341), 1,
      anon_sym_RPAREN,
  [6385] = 1,
    ACTIONS(1343), 1,
      sym__DIVISION,
  [6389] = 1,
    ACTIONS(1345), 1,
      sym__DIVISION,
  [6393] = 1,
    ACTIONS(1347), 1,
      sym__WORD,
  [6397] = 1,
    ACTIONS(1349), 1,
      anon_sym_DOT,
  [6401] = 1,
    ACTIONS(1351), 1,
      anon_sym_DOT,
  [6405] = 1,
    ACTIONS(1201), 1,
      sym__PROCEDURE,
  [6409] = 1,
    ACTIONS(1353), 1,
      anon_sym_RPAREN,
  [6413] = 1,
    ACTIONS(1355), 1,
      anon_sym_LPAREN,
  [6417] = 1,
    ACTIONS(1357), 1,
      anon_sym_LPAREN,
  [6421] = 1,
    ACTIONS(1359), 1,
      anon_sym_LPAREN,
  [6425] = 1,
    ACTIONS(1361), 1,
      anon_sym_LPAREN,
  [6429] = 1,
    ACTIONS(1363), 1,
      anon_sym_LPAREN,
  [6433] = 1,
    ACTIONS(1365), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(88)] = 0,
  [SMALL_STATE(89)] = 100,
  [SMALL_STATE(90)] = 200,
  [SMALL_STATE(91)] = 300,
  [SMALL_STATE(92)] = 400,
  [SMALL_STATE(93)] = 463,
  [SMALL_STATE(94)] = 512,
  [SMALL_STATE(95)] = 578,
  [SMALL_STATE(96)] = 644,
  [SMALL_STATE(97)] = 692,
  [SMALL_STATE(98)] = 740,
  [SMALL_STATE(99)] = 788,
  [SMALL_STATE(100)] = 835,
  [SMALL_STATE(101)] = 882,
  [SMALL_STATE(102)] = 929,
  [SMALL_STATE(103)] = 1003,
  [SMALL_STATE(104)] = 1053,
  [SMALL_STATE(105)] = 1093,
  [SMALL_STATE(106)] = 1167,
  [SMALL_STATE(107)] = 1227,
  [SMALL_STATE(108)] = 1266,
  [SMALL_STATE(109)] = 1323,
  [SMALL_STATE(110)] = 1359,
  [SMALL_STATE(111)] = 1395,
  [SMALL_STATE(112)] = 1431,
  [SMALL_STATE(113)] = 1467,
  [SMALL_STATE(114)] = 1503,
  [SMALL_STATE(115)] = 1574,
  [SMALL_STATE(116)] = 1607,
  [SMALL_STATE(117)] = 1640,
  [SMALL_STATE(118)] = 1676,
  [SMALL_STATE(119)] = 1712,
  [SMALL_STATE(120)] = 1752,
  [SMALL_STATE(121)] = 1792,
  [SMALL_STATE(122)] = 1832,
  [SMALL_STATE(123)] = 1872,
  [SMALL_STATE(124)] = 1911,
  [SMALL_STATE(125)] = 1947,
  [SMALL_STATE(126)] = 1970,
  [SMALL_STATE(127)] = 1993,
  [SMALL_STATE(128)] = 2016,
  [SMALL_STATE(129)] = 2039,
  [SMALL_STATE(130)] = 2062,
  [SMALL_STATE(131)] = 2085,
  [SMALL_STATE(132)] = 2108,
  [SMALL_STATE(133)] = 2131,
  [SMALL_STATE(134)] = 2154,
  [SMALL_STATE(135)] = 2177,
  [SMALL_STATE(136)] = 2200,
  [SMALL_STATE(137)] = 2223,
  [SMALL_STATE(138)] = 2246,
  [SMALL_STATE(139)] = 2269,
  [SMALL_STATE(140)] = 2292,
  [SMALL_STATE(141)] = 2325,
  [SMALL_STATE(142)] = 2348,
  [SMALL_STATE(143)] = 2371,
  [SMALL_STATE(144)] = 2394,
  [SMALL_STATE(145)] = 2417,
  [SMALL_STATE(146)] = 2440,
  [SMALL_STATE(147)] = 2480,
  [SMALL_STATE(148)] = 2520,
  [SMALL_STATE(149)] = 2560,
  [SMALL_STATE(150)] = 2611,
  [SMALL_STATE(151)] = 2662,
  [SMALL_STATE(152)] = 2697,
  [SMALL_STATE(153)] = 2748,
  [SMALL_STATE(154)] = 2782,
  [SMALL_STATE(155)] = 2824,
  [SMALL_STATE(156)] = 2858,
  [SMALL_STATE(157)] = 2892,
  [SMALL_STATE(158)] = 2926,
  [SMALL_STATE(159)] = 2960,
  [SMALL_STATE(160)] = 2994,
  [SMALL_STATE(161)] = 3028,
  [SMALL_STATE(162)] = 3064,
  [SMALL_STATE(163)] = 3100,
  [SMALL_STATE(164)] = 3129,
  [SMALL_STATE(165)] = 3158,
  [SMALL_STATE(166)] = 3175,
  [SMALL_STATE(167)] = 3205,
  [SMALL_STATE(168)] = 3225,
  [SMALL_STATE(169)] = 3247,
  [SMALL_STATE(170)] = 3270,
  [SMALL_STATE(171)] = 3289,
  [SMALL_STATE(172)] = 3308,
  [SMALL_STATE(173)] = 3327,
  [SMALL_STATE(174)] = 3346,
  [SMALL_STATE(175)] = 3365,
  [SMALL_STATE(176)] = 3384,
  [SMALL_STATE(177)] = 3403,
  [SMALL_STATE(178)] = 3426,
  [SMALL_STATE(179)] = 3453,
  [SMALL_STATE(180)] = 3476,
  [SMALL_STATE(181)] = 3503,
  [SMALL_STATE(182)] = 3517,
  [SMALL_STATE(183)] = 3531,
  [SMALL_STATE(184)] = 3545,
  [SMALL_STATE(185)] = 3577,
  [SMALL_STATE(186)] = 3609,
  [SMALL_STATE(187)] = 3629,
  [SMALL_STATE(188)] = 3653,
  [SMALL_STATE(189)] = 3667,
  [SMALL_STATE(190)] = 3681,
  [SMALL_STATE(191)] = 3695,
  [SMALL_STATE(192)] = 3709,
  [SMALL_STATE(193)] = 3723,
  [SMALL_STATE(194)] = 3747,
  [SMALL_STATE(195)] = 3779,
  [SMALL_STATE(196)] = 3803,
  [SMALL_STATE(197)] = 3817,
  [SMALL_STATE(198)] = 3831,
  [SMALL_STATE(199)] = 3845,
  [SMALL_STATE(200)] = 3859,
  [SMALL_STATE(201)] = 3873,
  [SMALL_STATE(202)] = 3887,
  [SMALL_STATE(203)] = 3901,
  [SMALL_STATE(204)] = 3914,
  [SMALL_STATE(205)] = 3935,
  [SMALL_STATE(206)] = 3956,
  [SMALL_STATE(207)] = 3979,
  [SMALL_STATE(208)] = 4000,
  [SMALL_STATE(209)] = 4013,
  [SMALL_STATE(210)] = 4026,
  [SMALL_STATE(211)] = 4039,
  [SMALL_STATE(212)] = 4052,
  [SMALL_STATE(213)] = 4065,
  [SMALL_STATE(214)] = 4078,
  [SMALL_STATE(215)] = 4091,
  [SMALL_STATE(216)] = 4112,
  [SMALL_STATE(217)] = 4125,
  [SMALL_STATE(218)] = 4138,
  [SMALL_STATE(219)] = 4151,
  [SMALL_STATE(220)] = 4174,
  [SMALL_STATE(221)] = 4195,
  [SMALL_STATE(222)] = 4216,
  [SMALL_STATE(223)] = 4239,
  [SMALL_STATE(224)] = 4260,
  [SMALL_STATE(225)] = 4289,
  [SMALL_STATE(226)] = 4304,
  [SMALL_STATE(227)] = 4325,
  [SMALL_STATE(228)] = 4354,
  [SMALL_STATE(229)] = 4380,
  [SMALL_STATE(230)] = 4394,
  [SMALL_STATE(231)] = 4408,
  [SMALL_STATE(232)] = 4426,
  [SMALL_STATE(233)] = 4452,
  [SMALL_STATE(234)] = 4470,
  [SMALL_STATE(235)] = 4484,
  [SMALL_STATE(236)] = 4498,
  [SMALL_STATE(237)] = 4510,
  [SMALL_STATE(238)] = 4522,
  [SMALL_STATE(239)] = 4534,
  [SMALL_STATE(240)] = 4548,
  [SMALL_STATE(241)] = 4570,
  [SMALL_STATE(242)] = 4584,
  [SMALL_STATE(243)] = 4596,
  [SMALL_STATE(244)] = 4614,
  [SMALL_STATE(245)] = 4626,
  [SMALL_STATE(246)] = 4640,
  [SMALL_STATE(247)] = 4654,
  [SMALL_STATE(248)] = 4666,
  [SMALL_STATE(249)] = 4680,
  [SMALL_STATE(250)] = 4694,
  [SMALL_STATE(251)] = 4716,
  [SMALL_STATE(252)] = 4730,
  [SMALL_STATE(253)] = 4742,
  [SMALL_STATE(254)] = 4756,
  [SMALL_STATE(255)] = 4777,
  [SMALL_STATE(256)] = 4802,
  [SMALL_STATE(257)] = 4827,
  [SMALL_STATE(258)] = 4840,
  [SMALL_STATE(259)] = 4853,
  [SMALL_STATE(260)] = 4866,
  [SMALL_STATE(261)] = 4889,
  [SMALL_STATE(262)] = 4902,
  [SMALL_STATE(263)] = 4912,
  [SMALL_STATE(264)] = 4922,
  [SMALL_STATE(265)] = 4934,
  [SMALL_STATE(266)] = 4946,
  [SMALL_STATE(267)] = 4958,
  [SMALL_STATE(268)] = 4970,
  [SMALL_STATE(269)] = 4988,
  [SMALL_STATE(270)] = 5000,
  [SMALL_STATE(271)] = 5010,
  [SMALL_STATE(272)] = 5022,
  [SMALL_STATE(273)] = 5044,
  [SMALL_STATE(274)] = 5062,
  [SMALL_STATE(275)] = 5074,
  [SMALL_STATE(276)] = 5093,
  [SMALL_STATE(277)] = 5110,
  [SMALL_STATE(278)] = 5127,
  [SMALL_STATE(279)] = 5144,
  [SMALL_STATE(280)] = 5163,
  [SMALL_STATE(281)] = 5178,
  [SMALL_STATE(282)] = 5197,
  [SMALL_STATE(283)] = 5216,
  [SMALL_STATE(284)] = 5235,
  [SMALL_STATE(285)] = 5250,
  [SMALL_STATE(286)] = 5269,
  [SMALL_STATE(287)] = 5286,
  [SMALL_STATE(288)] = 5305,
  [SMALL_STATE(289)] = 5324,
  [SMALL_STATE(290)] = 5343,
  [SMALL_STATE(291)] = 5362,
  [SMALL_STATE(292)] = 5370,
  [SMALL_STATE(293)] = 5378,
  [SMALL_STATE(294)] = 5386,
  [SMALL_STATE(295)] = 5394,
  [SMALL_STATE(296)] = 5408,
  [SMALL_STATE(297)] = 5422,
  [SMALL_STATE(298)] = 5430,
  [SMALL_STATE(299)] = 5444,
  [SMALL_STATE(300)] = 5460,
  [SMALL_STATE(301)] = 5468,
  [SMALL_STATE(302)] = 5482,
  [SMALL_STATE(303)] = 5498,
  [SMALL_STATE(304)] = 5512,
  [SMALL_STATE(305)] = 5522,
  [SMALL_STATE(306)] = 5530,
  [SMALL_STATE(307)] = 5538,
  [SMALL_STATE(308)] = 5546,
  [SMALL_STATE(309)] = 5560,
  [SMALL_STATE(310)] = 5576,
  [SMALL_STATE(311)] = 5584,
  [SMALL_STATE(312)] = 5598,
  [SMALL_STATE(313)] = 5612,
  [SMALL_STATE(314)] = 5626,
  [SMALL_STATE(315)] = 5633,
  [SMALL_STATE(316)] = 5640,
  [SMALL_STATE(317)] = 5647,
  [SMALL_STATE(318)] = 5658,
  [SMALL_STATE(319)] = 5669,
  [SMALL_STATE(320)] = 5676,
  [SMALL_STATE(321)] = 5683,
  [SMALL_STATE(322)] = 5696,
  [SMALL_STATE(323)] = 5709,
  [SMALL_STATE(324)] = 5720,
  [SMALL_STATE(325)] = 5727,
  [SMALL_STATE(326)] = 5734,
  [SMALL_STATE(327)] = 5745,
  [SMALL_STATE(328)] = 5756,
  [SMALL_STATE(329)] = 5767,
  [SMALL_STATE(330)] = 5780,
  [SMALL_STATE(331)] = 5793,
  [SMALL_STATE(332)] = 5806,
  [SMALL_STATE(333)] = 5816,
  [SMALL_STATE(334)] = 5826,
  [SMALL_STATE(335)] = 5836,
  [SMALL_STATE(336)] = 5844,
  [SMALL_STATE(337)] = 5854,
  [SMALL_STATE(338)] = 5864,
  [SMALL_STATE(339)] = 5874,
  [SMALL_STATE(340)] = 5882,
  [SMALL_STATE(341)] = 5890,
  [SMALL_STATE(342)] = 5900,
  [SMALL_STATE(343)] = 5910,
  [SMALL_STATE(344)] = 5920,
  [SMALL_STATE(345)] = 5926,
  [SMALL_STATE(346)] = 5932,
  [SMALL_STATE(347)] = 5940,
  [SMALL_STATE(348)] = 5950,
  [SMALL_STATE(349)] = 5958,
  [SMALL_STATE(350)] = 5963,
  [SMALL_STATE(351)] = 5968,
  [SMALL_STATE(352)] = 5973,
  [SMALL_STATE(353)] = 5978,
  [SMALL_STATE(354)] = 5985,
  [SMALL_STATE(355)] = 5990,
  [SMALL_STATE(356)] = 5997,
  [SMALL_STATE(357)] = 6004,
  [SMALL_STATE(358)] = 6011,
  [SMALL_STATE(359)] = 6016,
  [SMALL_STATE(360)] = 6021,
  [SMALL_STATE(361)] = 6026,
  [SMALL_STATE(362)] = 6033,
  [SMALL_STATE(363)] = 6038,
  [SMALL_STATE(364)] = 6045,
  [SMALL_STATE(365)] = 6052,
  [SMALL_STATE(366)] = 6057,
  [SMALL_STATE(367)] = 6064,
  [SMALL_STATE(368)] = 6071,
  [SMALL_STATE(369)] = 6078,
  [SMALL_STATE(370)] = 6083,
  [SMALL_STATE(371)] = 6088,
  [SMALL_STATE(372)] = 6093,
  [SMALL_STATE(373)] = 6097,
  [SMALL_STATE(374)] = 6101,
  [SMALL_STATE(375)] = 6105,
  [SMALL_STATE(376)] = 6109,
  [SMALL_STATE(377)] = 6113,
  [SMALL_STATE(378)] = 6117,
  [SMALL_STATE(379)] = 6121,
  [SMALL_STATE(380)] = 6125,
  [SMALL_STATE(381)] = 6129,
  [SMALL_STATE(382)] = 6133,
  [SMALL_STATE(383)] = 6137,
  [SMALL_STATE(384)] = 6141,
  [SMALL_STATE(385)] = 6145,
  [SMALL_STATE(386)] = 6149,
  [SMALL_STATE(387)] = 6153,
  [SMALL_STATE(388)] = 6157,
  [SMALL_STATE(389)] = 6161,
  [SMALL_STATE(390)] = 6165,
  [SMALL_STATE(391)] = 6169,
  [SMALL_STATE(392)] = 6173,
  [SMALL_STATE(393)] = 6177,
  [SMALL_STATE(394)] = 6181,
  [SMALL_STATE(395)] = 6185,
  [SMALL_STATE(396)] = 6189,
  [SMALL_STATE(397)] = 6193,
  [SMALL_STATE(398)] = 6197,
  [SMALL_STATE(399)] = 6201,
  [SMALL_STATE(400)] = 6205,
  [SMALL_STATE(401)] = 6209,
  [SMALL_STATE(402)] = 6213,
  [SMALL_STATE(403)] = 6217,
  [SMALL_STATE(404)] = 6221,
  [SMALL_STATE(405)] = 6225,
  [SMALL_STATE(406)] = 6229,
  [SMALL_STATE(407)] = 6233,
  [SMALL_STATE(408)] = 6237,
  [SMALL_STATE(409)] = 6241,
  [SMALL_STATE(410)] = 6245,
  [SMALL_STATE(411)] = 6249,
  [SMALL_STATE(412)] = 6253,
  [SMALL_STATE(413)] = 6257,
  [SMALL_STATE(414)] = 6261,
  [SMALL_STATE(415)] = 6265,
  [SMALL_STATE(416)] = 6269,
  [SMALL_STATE(417)] = 6273,
  [SMALL_STATE(418)] = 6277,
  [SMALL_STATE(419)] = 6281,
  [SMALL_STATE(420)] = 6285,
  [SMALL_STATE(421)] = 6289,
  [SMALL_STATE(422)] = 6293,
  [SMALL_STATE(423)] = 6297,
  [SMALL_STATE(424)] = 6301,
  [SMALL_STATE(425)] = 6305,
  [SMALL_STATE(426)] = 6309,
  [SMALL_STATE(427)] = 6313,
  [SMALL_STATE(428)] = 6317,
  [SMALL_STATE(429)] = 6321,
  [SMALL_STATE(430)] = 6325,
  [SMALL_STATE(431)] = 6329,
  [SMALL_STATE(432)] = 6333,
  [SMALL_STATE(433)] = 6337,
  [SMALL_STATE(434)] = 6341,
  [SMALL_STATE(435)] = 6345,
  [SMALL_STATE(436)] = 6349,
  [SMALL_STATE(437)] = 6353,
  [SMALL_STATE(438)] = 6357,
  [SMALL_STATE(439)] = 6361,
  [SMALL_STATE(440)] = 6365,
  [SMALL_STATE(441)] = 6369,
  [SMALL_STATE(442)] = 6373,
  [SMALL_STATE(443)] = 6377,
  [SMALL_STATE(444)] = 6381,
  [SMALL_STATE(445)] = 6385,
  [SMALL_STATE(446)] = 6389,
  [SMALL_STATE(447)] = 6393,
  [SMALL_STATE(448)] = 6397,
  [SMALL_STATE(449)] = 6401,
  [SMALL_STATE(450)] = 6405,
  [SMALL_STATE(451)] = 6409,
  [SMALL_STATE(452)] = 6413,
  [SMALL_STATE(453)] = 6417,
  [SMALL_STATE(454)] = 6421,
  [SMALL_STATE(455)] = 6425,
  [SMALL_STATE(456)] = 6429,
  [SMALL_STATE(457)] = 6433,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__display_body, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(52),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__display_body_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(46),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(46),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(60),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(61),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(56),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(277),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(93),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(373),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(76),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(75),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(63),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(47),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(70),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(384),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(383),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(62),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(382),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(66),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(380),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(67),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(379),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(378),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(65),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(376),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(374),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(74),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(49),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subref, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subref, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refmod, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refmod, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ZERO, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ZERO, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_word, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_word, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(447),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_word_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_word_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(447),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_word, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_word, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_n_string, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_n_string, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__basic_literal, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_literal, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__basic_literal_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_literal_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_literal_repeat1, 2), SHIFT_REPEAT(90),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__basic_literal, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_literal, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_x_string, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x_string, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h_string, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h_string, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LOW_VALUE, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOW_VALUE, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HIGH_VALUE, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HIGH_VALUE, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TOK_NULL, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TOK_NULL, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_QUOTE, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_QUOTE, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SPACE, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SPACE, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__x, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_or_lit, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_linage_counter, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linage_counter, 1),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_WHEN_COMPILED_FUNC, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WHEN_COMPILED_FUNC, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FUNCTION_NAME, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FUNCTION_NAME, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CURRENT_DATE_FUNC, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CURRENT_DATE_FUNC, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func_args, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_args, 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_, 5),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 5),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_linage_counter, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linage_counter, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__x, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_refmod, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_refmod, 4),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func_args, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_args, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__x, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_refmod, 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_refmod, 5),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__x, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 4),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LENGTH, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LENGTH, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ALL, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ALL, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(424),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(439),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(103),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_description_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(286),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(286),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(347),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(266),
  [510] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(125),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(129),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(136),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(131),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(369),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(264),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(127),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(143),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(145),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(128),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(370),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(135),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disp_attr, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disp_attr, 2),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disp_attr, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disp_attr, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redefines_clause, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redefines_clause, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_name, 1),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_name, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 3),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_clause, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_9, 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_9, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 2),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_clause, 2),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOWN, 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOWN, 1),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_UP, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UP, 1),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scroll_lines, 1),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scroll_lines, 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BELL, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EOS, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HIGHLIGHT, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_REVERSE_VIDEO, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BLANK_LINE, 1),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LINES, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BLINK, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LINE, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disp_attr, 4),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EOL, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UNDERLINE, 1),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BLANK_SCREEN, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disp_attr, 1),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_or_lines, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scroll_lines, 3),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOWLIGHT, 1),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OVERLINE, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_division, 3),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 5),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_division, 5),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 4),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_division, 4),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_using_chaining_repeat1, 2), SHIFT_REPEAT(246),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_using_chaining_repeat1, 2),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_using_chaining_repeat1, 2), SHIFT_REPEAT(317),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_using_chaining_repeat1, 2), SHIFT_REPEAT(397),
  [667] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_using_chaining_repeat1, 2), SHIFT_REPEAT(315),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_procedure_using_chaining_repeat1, 2),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_using_chaining_repeat1, 2), SHIFT_REPEAT(314),
  [675] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_using_chaining_repeat1, 2), SHIFT_REPEAT(394),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_using_chaining_repeat1, 2), SHIFT_REPEAT(319),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_using_chaining, 1),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_using_chaining, 1),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2),
  [701] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(186),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_procedure_division_repeat1, 2),
  [706] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(41),
  [709] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(42),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(403),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_using_chaining, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_using_chaining, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 6),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_division, 6),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 7),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_division, 7),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 4),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 3),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(438),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH, 1),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [761] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_literal_repeat1, 2), SHIFT_REPEAT(91),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [766] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(435),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp_list, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_invalid_statement, 1, .production_id = 1),
  [789] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_invalid_statement, 1, .production_id = 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_body, 3, .production_id = 3),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__move_body, 3, .production_id = 3),
  [803] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_x_list, 2), SHIFT_REPEAT(169),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_x_list, 2),
  [808] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_x_list, 2), SHIFT_REPEAT(322),
  [811] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_x_list, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_body, 4, .production_id = 5),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__move_body, 4, .production_id = 5),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 5),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_on_disp_exception_repeat1, 2),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_on_disp_exception_repeat1, 2), SHIFT_REPEAT(41),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_on_disp_exception_repeat1, 2), SHIFT_REPEAT(42),
  [837] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_on_disp_exception_repeat1, 2), SHIFT_REPEAT(403),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 3),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_disp_exception, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [852] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(340),
  [855] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(339),
  [858] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(432),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_disp_exception, 1),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numvalc_args, 1),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__locale_dt_args, 1),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_exp, 3, .production_id = 6),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_header, 2, .production_id = 1),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_header, 2, .production_id = 1),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_exp, 3, .production_id = 6),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trim_args, 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4, .production_id = 1),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 4, .production_id = 1),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_param, 2),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_param, 2),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CRT, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MNEMONIC_NAME, 1),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PRINTER, 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_exp, 3, .production_id = 6),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_exp, 2, .production_id = 4),
  [903] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_param, 4),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_param, 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pow_exp, 3, .production_id = 6),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_exp, 3, .production_id = 6),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arith_x, 2),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3, .production_id = 1),
  [915] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_header, 3, .production_id = 1),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_param, 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_param, 1),
  [921] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [923] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_USING, 1),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_USING, 1),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_param, 3),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_param, 3),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_exp, 2, .production_id = 4),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__procedure, 2),
  [935] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__procedure, 2),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arith_x, 3),
  [939] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CHAINING, 1),
  [941] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CHAINING, 1),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__exp_list_repeat1, 2),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 3),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_working_storage_section_repeat1, 2),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaratives, 5),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_declaratives, 5),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_declaratives, 6),
  [977] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_declaratives, 6),
  [979] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NO_ADVANCING, 1),
  [981] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FOREGROUND_COLOR, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FOREGROUND_COLOR, 1),
  [985] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__target_x, 2),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target_x, 2),
  [989] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BACKGROUND_COLOR, 1),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BACKGROUND_COLOR, 1),
  [993] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__target_x, 3),
  [995] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target_x, 3),
  [997] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [999] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 1),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 4),
  [1017] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1049] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1057] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 6),
  [1059] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop_statement, 2),
  [1061] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_statement, 3),
  [1063] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__exp_list_repeat1, 2), SHIFT_REPEAT(26),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp_list, 2),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EXCEPTION, 1),
  [1070] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 5),
  [1082] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NOT_EXCEPTION, 1),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2),
  [1086] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(396),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1095] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numvalc_args, 2),
  [1097] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_statement, 2),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_statement, 2, .production_id = 2),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SIZE, 1),
  [1113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_REFERENCE, 1),
  [1115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_type, 2),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_VALUE, 1),
  [1129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_procedure_type, 1),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 6),
  [1139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [1141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_UPON, 1),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 2),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 5),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 7),
  [1187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 7),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 8),
  [1191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_size, 2),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_size, 4),
  [1197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DEFAULT, 1),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 8),
  [1203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_size, 3),
  [1207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_AUTO, 1),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_name, 1),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ERASE, 1),
  [1219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SCROLL, 1),
  [1221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 6),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CONCATENATE_FUNC, 1),
  [1227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UPPER_CASE_FUNC, 1),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRIM_FUNCTION, 1),
  [1233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SUBSTITUTE_CASE_FUNC, 1),
  [1235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SUBSTITUTE_FUNC, 1),
  [1237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_REVERSE_FUNC, 1),
  [1239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMVALC_FUNC, 1),
  [1241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOWER_CASE_FUNC, 1),
  [1243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOCALE_DT_FUNC, 1),
  [1245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UNSIGNED, 1),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OPTIONAL, 1),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_returning, 2),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 4),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trim_args, 3),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__locale_dt_args, 3),
  [1289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 9),
  [1303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_literal, 2),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 1),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1365] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
    .keyword_capture_token = sym__WORD,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
