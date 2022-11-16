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
#define STATE_COUNT 395
#define LARGE_STATE_COUNT 87
#define SYMBOL_COUNT 650
#define ALIAS_COUNT 0
#define TOKEN_COUNT 523
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
  sym_at_line_column = 39,
  anon_sym_AMP = 40,
  sym_number = 41,
  aux_sym_x_string_token1 = 42,
  aux_sym_x_string_token2 = 43,
  aux_sym_h_string_token1 = 44,
  aux_sym_h_string_token2 = 45,
  aux_sym_n_string_token1 = 46,
  aux_sym_n_string_token2 = 47,
  aux_sym_n_string_token3 = 48,
  aux_sym_n_string_token4 = 49,
  aux_sym_n_string_token5 = 50,
  aux_sym_n_string_token6 = 51,
  aux_sym_n_string_token7 = 52,
  aux_sym_n_string_token8 = 53,
  sym__ACCEPT = 54,
  sym__ACCESS = 55,
  sym__ADD = 56,
  sym__ADDRESS = 57,
  sym__ADVANCING = 58,
  sym__AFTER = 59,
  sym__ALL = 60,
  sym__ALLOCATE = 61,
  sym__ALPHABET = 62,
  sym__ALPHABETIC = 63,
  sym__ALPHABETIC_LOWER = 64,
  sym__ALPHABETIC_UPPER = 65,
  sym__ALPHANUMERIC = 66,
  sym__ALPHANUMERIC_EDITED = 67,
  sym__ALSO = 68,
  sym__ALTER = 69,
  sym__ALTERNATE = 70,
  sym__AND = 71,
  sym__ANY = 72,
  sym__APPLY = 73,
  sym__ARE = 74,
  sym__AREA = 75,
  sym__ARGUMENT_NUMBER = 76,
  sym__ARGUMENT_VALUE = 77,
  sym__AS = 78,
  sym__ASCENDING = 79,
  sym__ASSIGN = 80,
  sym__AT = 81,
  sym__AUTO = 82,
  sym__AUTOMATIC = 83,
  sym__BACKGROUND_COLOR = 84,
  sym__BASED = 85,
  sym__BEFORE = 86,
  sym__BELL = 87,
  sym__BINARY = 88,
  sym__BINARY_C_LONG = 89,
  sym__BINARY_CHAR = 90,
  sym__BINARY_DOUBLE = 91,
  sym__BINARY_LONG = 92,
  sym__BINARY_SHORT = 93,
  sym__BLANK = 94,
  sym__BLANK_LINE = 95,
  sym__BLANK_SCREEN = 96,
  sym__BLINK = 97,
  sym__BLOCK = 98,
  sym__BOTTOM = 99,
  sym__BY = 100,
  sym__BYTE_LENGTH = 101,
  sym__CALL = 102,
  sym__CANCEL = 103,
  sym__CH = 104,
  sym__CHAINING = 105,
  sym__CHARACTER = 106,
  sym__CHARACTERS = 107,
  sym__CLASS = 108,
  sym__CLASS_NAME = 109,
  sym__CLOSE = 110,
  sym__CLOSE_NOFEED = 111,
  sym__CODE = 112,
  sym__CODE_SET = 113,
  sym__COLLATING = 114,
  sym__COL = 115,
  sym__COLS = 116,
  sym__COLUMN = 117,
  sym__COLUMNS = 118,
  sym__COMMA = 119,
  sym__COMMAND_LINE = 120,
  sym__COMMA_DELIM = 121,
  sym__COMMIT = 122,
  sym__COMMITMENT_CONTROL = 123,
  sym__COMMON = 124,
  sym__COMP = 125,
  sym__COMPUTE = 126,
  sym__COMP_1 = 127,
  sym__COMP_2 = 128,
  sym__COMP_3 = 129,
  sym__COMP_4 = 130,
  sym__COMP_5 = 131,
  sym__COMP_X = 132,
  sym__CONCATENATE_FUNC = 133,
  sym__CONFIGURATION = 134,
  sym__CONSTANT = 135,
  sym__CONTAINS = 136,
  sym__CONTENT = 137,
  sym__CONTINUE = 138,
  sym__CONTROL = 139,
  sym__CONTROLS = 140,
  sym__CONTROL_FOOTING = 141,
  sym__CONTROL_HEADING = 142,
  sym__CONVERTING = 143,
  sym__CORE_INDEX = 144,
  sym__CORRESPONDING = 145,
  sym__COUNT = 146,
  sym__CRT = 147,
  sym__CURRENCY = 148,
  sym__CURRENT_DATE_FUNC = 149,
  sym__CURSOR = 150,
  sym__CYCLE = 151,
  sym__CYL_OVERFLOW = 152,
  sym__DATA = 153,
  sym__DATE = 154,
  sym__DAY = 155,
  sym__DAY_OF_WEEK = 156,
  sym__DE = 157,
  sym__DEBUGGING = 158,
  sym__DECIMAL_POINT = 159,
  sym__DECLARATIVES = 160,
  sym__DEFAULT = 161,
  sym__DELETE = 162,
  sym__DELIMITED = 163,
  sym__DELIMITER = 164,
  sym__DEPENDING = 165,
  sym__DESCENDING = 166,
  sym__DETAIL = 167,
  sym__DISK = 168,
  sym__DISPLAY = 169,
  sym__DIVIDE = 170,
  sym__DIVISION = 171,
  sym__DOWN = 172,
  sym__DUPLICATES = 173,
  sym__DYNAMIC = 174,
  sym__EBCDIC = 175,
  sym__ELSE = 176,
  sym__END = 177,
  sym__END_ACCEPT = 178,
  sym__END_ADD = 179,
  sym__END_CALL = 180,
  sym__END_COMPUTE = 181,
  sym__END_DELETE = 182,
  sym__END_DISPLAY = 183,
  sym__END_DIVIDE = 184,
  sym__END_EVALUATE = 185,
  sym__END_FUNCTION = 186,
  sym__END_IF = 187,
  sym__END_MULTIPLY = 188,
  sym__END_PERFORM = 189,
  sym__END_PROGRAM = 190,
  sym__END_READ = 191,
  sym__END_RETURN = 192,
  sym__END_REWRITE = 193,
  sym__END_SEARCH = 194,
  sym__END_START = 195,
  sym__END_STRING = 196,
  sym__END_SUBTRACT = 197,
  sym__END_UNSTRING = 198,
  sym__END_WRITE = 199,
  sym__ENTRY = 200,
  sym__ENVIRONMENT = 201,
  sym__ENVIRONMENT_NAME = 202,
  sym__ENVIRONMENT_VALUE = 203,
  sym__EOL = 204,
  sym__EOP = 205,
  sym__EOS = 206,
  sym__EQUAL = 207,
  sym__EQUALS = 208,
  sym__ERASE = 209,
  sym__ERROR = 210,
  sym__ESCAPE = 211,
  sym__EVALUATE = 212,
  sym__EVENT_STATUS = 213,
  sym__EXCEPTION = 214,
  sym__EXCLUSIVE = 215,
  sym__EXIT = 216,
  sym__EXTEND = 217,
  sym__EXTERNAL = 218,
  sym__FD = 219,
  sym__FILE_CONTROL = 220,
  sym__FILE_ID = 221,
  sym__FILLER = 222,
  sym__FINAL = 223,
  sym__FIRST = 224,
  sym__FOOTING = 225,
  sym__FOR = 226,
  sym__FOREGROUND_COLOR = 227,
  sym__FOREVER = 228,
  sym__FORMS_OVERLAY = 229,
  sym__FREE = 230,
  sym__FROM = 231,
  sym__FULL = 232,
  sym__FUNCTION = 233,
  sym__FUNCTION_ID = 234,
  sym__FUNCTION_NAME = 235,
  sym__GE = 236,
  sym__GENERATE = 237,
  sym__GIVING = 238,
  sym__GLOBAL = 239,
  sym__GO = 240,
  sym__GOBACK = 241,
  sym__GREATER = 242,
  sym__GROUP = 243,
  sym__HEADING = 244,
  sym__HIGHLIGHT = 245,
  anon_sym_high_DASHvalue = 246,
  anon_sym_high_DASHValue = 247,
  anon_sym_high_DASHVALUE = 248,
  anon_sym_High_DASHvalue = 249,
  anon_sym_High_DASHValue = 250,
  anon_sym_High_DASHVALUE = 251,
  anon_sym_HIGH_DASHvalue = 252,
  anon_sym_HIGH_DASHValue = 253,
  anon_sym_HIGH_DASHVALUE = 254,
  sym__IDENTIFICATION = 255,
  sym__IF = 256,
  sym__IGNORE = 257,
  sym__IGNORING = 258,
  sym__IN = 259,
  sym__INDEX = 260,
  sym__INDEXED = 261,
  sym__INDICATE = 262,
  sym__INITIALIZE = 263,
  sym__INITIALIZED = 264,
  sym__INITIATE = 265,
  sym__INPUT = 266,
  sym__INPUT_OUTPUT = 267,
  sym__INSPECT = 268,
  sym__INTO = 269,
  sym__INTRINSIC = 270,
  sym__INVALID = 271,
  sym__INVALID_KEY = 272,
  sym__IS = 273,
  sym__I_O = 274,
  sym__I_O_CONTROL = 275,
  sym__JUSTIFIED = 276,
  sym__KEY = 277,
  sym__LABEL = 278,
  sym__LAST = 279,
  sym__LAST_DETAIL = 280,
  sym__LE = 281,
  sym__LEADING = 282,
  sym__LEFT = 283,
  sym__LENGTH = 284,
  sym__LESS = 285,
  sym__LEVEL_NUMBER_WORD = 286,
  sym__LEVEL88_NUMBER_WORD = 287,
  sym__LIMIT = 288,
  sym__LIMITS = 289,
  sym__LINAGE = 290,
  sym__LINAGE_COUNTER = 291,
  sym__LINE = 292,
  sym__LINES = 293,
  sym__LINKAGE = 294,
  sym__LOCALE = 295,
  sym__LOCALE_DT_FUNC = 296,
  sym__LOCAL_STORAGE = 297,
  sym__LOCK = 298,
  sym__LOWER_CASE_FUNC = 299,
  sym__LOWLIGHT = 300,
  anon_sym_low_DASHvalue = 301,
  anon_sym_low_DASHValue = 302,
  anon_sym_low_DASHVALUE = 303,
  anon_sym_Low_DASHvalue = 304,
  anon_sym_Low_DASHValue = 305,
  anon_sym_Low_DASHVALUE = 306,
  anon_sym_LOW_DASHvalue = 307,
  anon_sym_LOW_DASHValue = 308,
  anon_sym_LOW_DASHVALUE = 309,
  sym__MANUAL = 310,
  sym__MEMORY = 311,
  sym__MERGE = 312,
  sym__MINUS = 313,
  sym__MNEMONIC_NAME = 314,
  sym__MODE = 315,
  sym__MOVE = 316,
  sym__MULTIPLE = 317,
  sym__MULTIPLY = 318,
  sym__NATIONAL = 319,
  sym__NATIONAL_EDITED = 320,
  sym__NATIVE = 321,
  sym__NE = 322,
  sym__NEGATIVE = 323,
  sym__NEXT = 324,
  sym__NEXT_SENTENCE = 325,
  sym__NO = 326,
  sym__NOMINAL = 327,
  sym__NOT = 328,
  sym__NOT_END = 329,
  sym__NOT_EOP = 330,
  sym__NOT_EXCEPTION = 331,
  sym__NOT_INVALID_KEY = 332,
  sym__NOT_OVERFLOW = 333,
  sym__NOT_SIZE_ERROR = 334,
  sym__NO_ADVANCING = 335,
  sym__NUMBER = 336,
  sym__NUMBERS = 337,
  sym__NUMERIC = 338,
  sym__NUMERIC_EDITED = 339,
  sym__NUMVALC_FUNC = 340,
  sym__OBJECT_COMPUTER = 341,
  sym__OCCURS = 342,
  sym__OF = 343,
  sym__OFF = 344,
  sym__OMITTED = 345,
  sym__ON = 346,
  sym__ONLY = 347,
  sym__OPEN = 348,
  sym__OPTIONAL = 349,
  sym__OR = 350,
  sym__ORDER = 351,
  sym__ORGANIZATION = 352,
  sym__OTHER = 353,
  sym__OUTPUT = 354,
  sym__OVERFLOW = 355,
  sym__OVERLINE = 356,
  sym__PACKED_DECIMAL = 357,
  sym__PADDING = 358,
  sym__PAGE = 359,
  sym__PAGE_FOOTING = 360,
  sym__PAGE_HEADING = 361,
  sym__PARAGRAPH = 362,
  sym__PERFORM = 363,
  sym__PIC = 364,
  sym__PICTURE = 365,
  sym__PLUS = 366,
  sym__POINTER = 367,
  sym__POSITION = 368,
  sym__POSITIVE = 369,
  sym__PRESENT = 370,
  sym__PREVIOUS = 371,
  sym__PRINTER = 372,
  sym__PRINTING = 373,
  sym__PROCEDURE = 374,
  sym__PROCEDURES = 375,
  sym__PROCEED = 376,
  sym__PROGRAM = 377,
  sym__PROGRAM_ID = 378,
  sym__PROGRAM_NAME = 379,
  sym__PROGRAM_POINTER = 380,
  sym__PROMPT = 381,
  anon_sym_quote = 382,
  anon_sym_QUOTE = 383,
  anon_sym_Quote = 384,
  sym__RANDOM = 385,
  sym__RD = 386,
  sym__READ = 387,
  sym__RECORD = 388,
  sym__RECORDING = 389,
  sym__RECORDS = 390,
  sym__RECURSIVE = 391,
  sym__REDEFINES = 392,
  sym__REEL = 393,
  sym__REFERENCE = 394,
  sym__RELATIVE = 395,
  sym__RELEASE = 396,
  sym__REMAINDER = 397,
  sym__REMOVAL = 398,
  sym__RENAMES = 399,
  sym__REPLACING = 400,
  sym__REPORT = 401,
  sym__REPORTING = 402,
  sym__REPORTS = 403,
  sym__REPORT_FOOTING = 404,
  sym__REPORT_HEADING = 405,
  sym__REPOSITORY = 406,
  sym__REQUIRED = 407,
  sym__RESERVE = 408,
  sym__RETURN = 409,
  sym__RETURNING = 410,
  sym__REVERSE_FUNC = 411,
  sym__REVERSE_VIDEO = 412,
  sym__REWIND = 413,
  sym__REWRITE = 414,
  sym__RIGHT = 415,
  sym__ROLLBACK = 416,
  sym__ROUNDED = 417,
  sym__RUN = 418,
  sym__SAME = 419,
  sym__SCREEN = 420,
  sym__SCREEN_CONTROL = 421,
  sym__SCROLL = 422,
  sym__SD = 423,
  sym__SEARCH = 424,
  sym__SECTION = 425,
  sym__SECURE = 426,
  sym__SEGMENT_LIMIT = 427,
  sym__SELECT = 428,
  sym__SEMI_COLON = 429,
  sym__SENTENCE = 430,
  sym__SEPARATE = 431,
  sym__SEQUENCE = 432,
  sym__SEQUENTIAL = 433,
  sym__SET = 434,
  sym__SHARING = 435,
  sym__SIGN = 436,
  sym__SIGNED = 437,
  sym__SIGNED_INT = 438,
  sym__SIGNED_LONG = 439,
  sym__SIGNED_SHORT = 440,
  sym__SIZE = 441,
  sym__SIZE_ERROR = 442,
  sym__SORT = 443,
  sym__SORT_MERGE = 444,
  sym__SOURCE = 445,
  sym__SOURCE_COMPUTER = 446,
  anon_sym_space = 447,
  anon_sym_SPACE = 448,
  anon_sym_Space = 449,
  sym__SPECIAL_NAMES = 450,
  sym__STANDARD = 451,
  sym__STANDARD_1 = 452,
  sym__STANDARD_2 = 453,
  sym__START = 454,
  sym__STATUS = 455,
  sym__STOP = 456,
  sym__STRING = 457,
  sym__SUBSTITUTE_FUNC = 458,
  sym__SUBSTITUTE_CASE_FUNC = 459,
  sym__SUBTRACT = 460,
  sym__SUM = 461,
  sym__SUPPRESS = 462,
  sym__SYMBOLIC = 463,
  sym__SYNCHRONIZED = 464,
  sym__TALLYING = 465,
  sym__TAPE = 466,
  sym__TERMINATE = 467,
  sym__TEST = 468,
  sym__THAN = 469,
  sym__THEN = 470,
  sym__THRU = 471,
  sym__TIME = 472,
  sym__TIMES = 473,
  sym__TO = 474,
  sym__TOK_FALSE = 475,
  sym__TOK_FILE = 476,
  sym__TOK_INITIAL = 477,
  anon_sym_null = 478,
  anon_sym_Null = 479,
  anon_sym_NULL = 480,
  sym__TOK_TRUE = 481,
  sym__TOP = 482,
  sym__TRACKS = 483,
  sym__TRAILING = 484,
  sym__TRANSFORM = 485,
  sym__TRIM_FUNCTION = 486,
  sym__TYPE = 487,
  sym__UNDERLINE = 488,
  sym__UNIT = 489,
  sym__UNLOCK = 490,
  sym__UNSIGNED = 491,
  sym__UNSIGNED_INT = 492,
  sym__UNSIGNED_LONG = 493,
  sym__UNSIGNED_SHORT = 494,
  sym__UNSTRING = 495,
  sym__UNTIL = 496,
  sym__UP = 497,
  sym__UPDATE = 498,
  sym__UPON = 499,
  sym__UPON_ARGUMENT_NUMBER = 500,
  sym__UPON_COMMAND_LINE = 501,
  sym__UPON_ENVIRONMENT_NAME = 502,
  sym__UPON_ENVIRONMENT_VALUE = 503,
  sym__UPPER_CASE_FUNC = 504,
  sym__USAGE = 505,
  sym__USE = 506,
  sym__USING = 507,
  sym__VALUE = 508,
  sym__VARYING = 509,
  sym__WAIT = 510,
  sym__WHEN = 511,
  sym__WHEN_COMPILED_FUNC = 512,
  sym__WHEN_OTHER = 513,
  sym__WITH = 514,
  sym__WORDS = 515,
  sym__WORKING_STORAGE = 516,
  sym__WRITE = 517,
  sym__YYYYDDD = 518,
  sym__YYYYMMDD = 519,
  anon_sym_zero = 520,
  anon_sym_ZERO = 521,
  anon_sym_Zero = 522,
  sym_start = 523,
  sym_program_definition = 524,
  sym_identification_division = 525,
  sym_program_name = 526,
  sym_as_literal = 527,
  sym_data_division = 528,
  sym_working_storage_section = 529,
  sym_data_description = 530,
  sym_entry_name = 531,
  sym__data_description_clause = 532,
  sym_redefines_clause = 533,
  sym__identifier = 534,
  sym_qualified_word = 535,
  sym__in_of = 536,
  sym_subref = 537,
  sym_refmod = 538,
  sym__exp_list = 539,
  sym__exp = 540,
  sym__binary_exp = 541,
  sym__unary_exp = 542,
  sym_positive_exp = 543,
  sym_negative_exp = 544,
  sym_add_exp = 545,
  sym_sub_exp = 546,
  sym_mul_exp = 547,
  sym_div_exp = 548,
  sym_pow_exp = 549,
  sym__arith_x = 550,
  sym_picture_clause = 551,
  sym__picture_string = 552,
  sym_picture_9 = 553,
  sym_procedure_division = 554,
  sym__statement = 555,
  sym_stop_run_statement = 556,
  sym_display_statement = 557,
  sym__display_body = 558,
  sym__id_or_lit = 559,
  sym_on_disp_exception = 560,
  sym_with_clause = 561,
  sym_disp_attr = 562,
  sym__num_or_id_or_lit = 563,
  sym_scroll_lines = 564,
  sym_line_or_lines = 565,
  sym_move_statement = 566,
  sym__move_body = 567,
  sym__x = 568,
  aux_sym__target_x_list = 569,
  sym__target_x = 570,
  sym__basic_literal = 571,
  sym__basic_value = 572,
  sym__literal = 573,
  sym_function_ = 574,
  sym_func_refmod = 575,
  sym__trim_args = 576,
  sym__e_sep = 577,
  sym__numvalc_args = 578,
  sym__locale_dt_args = 579,
  sym_linage_counter = 580,
  sym__func_args = 581,
  sym__LITERAL = 582,
  sym__string = 583,
  sym_x_string = 584,
  sym_h_string = 585,
  sym_n_string = 586,
  sym__HIGH_VALUE = 587,
  sym__LOW_VALUE = 588,
  sym__QUOTE = 589,
  sym__SPACE = 590,
  sym__TOK_NULL = 591,
  sym__ZERO = 592,
  sym_ALL_ = 593,
  sym_BACKGROUND_COLOR_ = 594,
  sym_BELL_ = 595,
  sym_BLANK_LINE_ = 596,
  sym_BLANK_SCREEN_ = 597,
  sym_BLINK_ = 598,
  sym_CONCATENATE_FUNC_ = 599,
  sym_CRT_ = 600,
  sym_CURRENT_DATE_FUNC_ = 601,
  sym_DOWN_ = 602,
  sym_EOL_ = 603,
  sym_EOS_ = 604,
  sym_ERASE_ = 605,
  sym_EXCEPTION_ = 606,
  sym_FOREGROUND_COLOR_ = 607,
  sym_FUNCTION_NAME_ = 608,
  sym_HIGHLIGHT_ = 609,
  sym_HIGH_VALUE_ = 610,
  sym_LENGTH_ = 611,
  sym_LINE_ = 612,
  sym_LINES_ = 613,
  sym_LOCALE_DT_FUNC_ = 614,
  sym_LOWER_CASE_FUNC_ = 615,
  sym_LOWLIGHT_ = 616,
  sym_LOW_VALUE_ = 617,
  sym_MNEMONIC_NAME_ = 618,
  sym_NOT_EXCEPTION_ = 619,
  sym_NO_ADVANCING_ = 620,
  sym_NUMVALC_FUNC_ = 621,
  sym_OVERLINE_ = 622,
  sym_PRINTER_ = 623,
  sym_QUOTE_ = 624,
  sym_REVERSE_FUNC_ = 625,
  sym_REVERSE_VIDEO_ = 626,
  sym_SCROLL_ = 627,
  sym_SPACE_ = 628,
  sym_SUBSTITUTE_FUNC_ = 629,
  sym_SUBSTITUTE_CASE_FUNC_ = 630,
  sym_TOK_NULL_ = 631,
  sym_TRIM_FUNCTION_ = 632,
  sym_UNDERLINE_ = 633,
  sym_UP_ = 634,
  sym_UPON_ = 635,
  sym_UPPER_CASE_FUNC_ = 636,
  sym_WHEN_COMPILED_FUNC_ = 637,
  sym_WITH_ = 638,
  sym_ZERO_ = 639,
  aux_sym_start_repeat1 = 640,
  aux_sym_working_storage_section_repeat1 = 641,
  aux_sym_data_description_repeat1 = 642,
  aux_sym_qualified_word_repeat1 = 643,
  aux_sym__exp_list_repeat1 = 644,
  aux_sym_procedure_division_repeat1 = 645,
  aux_sym__display_body_repeat1 = 646,
  aux_sym_on_disp_exception_repeat1 = 647,
  aux_sym_with_clause_repeat1 = 648,
  aux_sym__basic_literal_repeat1 = 649,
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
  [sym_at_line_column] = "at_line_column",
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
  [sym_BACKGROUND_COLOR_] = "BACKGROUND_COLOR_",
  [sym_BELL_] = "BELL_",
  [sym_BLANK_LINE_] = "BLANK_LINE_",
  [sym_BLANK_SCREEN_] = "BLANK_SCREEN_",
  [sym_BLINK_] = "BLINK_",
  [sym_CONCATENATE_FUNC_] = "CONCATENATE_FUNC_",
  [sym_CRT_] = "CRT_",
  [sym_CURRENT_DATE_FUNC_] = "CURRENT_DATE_FUNC_",
  [sym_DOWN_] = "DOWN_",
  [sym_EOL_] = "EOL_",
  [sym_EOS_] = "EOS_",
  [sym_ERASE_] = "ERASE_",
  [sym_EXCEPTION_] = "EXCEPTION_",
  [sym_FOREGROUND_COLOR_] = "FOREGROUND_COLOR_",
  [sym_FUNCTION_NAME_] = "FUNCTION_NAME_",
  [sym_HIGHLIGHT_] = "HIGHLIGHT_",
  [sym_HIGH_VALUE_] = "HIGH_VALUE_",
  [sym_LENGTH_] = "LENGTH_",
  [sym_LINE_] = "LINE_",
  [sym_LINES_] = "LINES_",
  [sym_LOCALE_DT_FUNC_] = "LOCALE_DT_FUNC_",
  [sym_LOWER_CASE_FUNC_] = "LOWER_CASE_FUNC_",
  [sym_LOWLIGHT_] = "LOWLIGHT_",
  [sym_LOW_VALUE_] = "LOW_VALUE_",
  [sym_MNEMONIC_NAME_] = "MNEMONIC_NAME_",
  [sym_NOT_EXCEPTION_] = "NOT_EXCEPTION_",
  [sym_NO_ADVANCING_] = "NO_ADVANCING_",
  [sym_NUMVALC_FUNC_] = "NUMVALC_FUNC_",
  [sym_OVERLINE_] = "OVERLINE_",
  [sym_PRINTER_] = "PRINTER_",
  [sym_QUOTE_] = "QUOTE_",
  [sym_REVERSE_FUNC_] = "REVERSE_FUNC_",
  [sym_REVERSE_VIDEO_] = "REVERSE_VIDEO_",
  [sym_SCROLL_] = "SCROLL_",
  [sym_SPACE_] = "SPACE_",
  [sym_SUBSTITUTE_FUNC_] = "SUBSTITUTE_FUNC_",
  [sym_SUBSTITUTE_CASE_FUNC_] = "SUBSTITUTE_CASE_FUNC_",
  [sym_TOK_NULL_] = "TOK_NULL_",
  [sym_TRIM_FUNCTION_] = "TRIM_FUNCTION_",
  [sym_UNDERLINE_] = "UNDERLINE_",
  [sym_UP_] = "UP_",
  [sym_UPON_] = "UPON_",
  [sym_UPPER_CASE_FUNC_] = "UPPER_CASE_FUNC_",
  [sym_WHEN_COMPILED_FUNC_] = "WHEN_COMPILED_FUNC_",
  [sym_WITH_] = "WITH_",
  [sym_ZERO_] = "ZERO_",
  [aux_sym_start_repeat1] = "start_repeat1",
  [aux_sym_working_storage_section_repeat1] = "working_storage_section_repeat1",
  [aux_sym_data_description_repeat1] = "data_description_repeat1",
  [aux_sym_qualified_word_repeat1] = "qualified_word_repeat1",
  [aux_sym__exp_list_repeat1] = "_exp_list_repeat1",
  [aux_sym_procedure_division_repeat1] = "procedure_division_repeat1",
  [aux_sym__display_body_repeat1] = "_display_body_repeat1",
  [aux_sym_on_disp_exception_repeat1] = "on_disp_exception_repeat1",
  [aux_sym_with_clause_repeat1] = "with_clause_repeat1",
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
  [sym_at_line_column] = sym_at_line_column,
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
  [sym_BACKGROUND_COLOR_] = sym_BACKGROUND_COLOR_,
  [sym_BELL_] = sym_BELL_,
  [sym_BLANK_LINE_] = sym_BLANK_LINE_,
  [sym_BLANK_SCREEN_] = sym_BLANK_SCREEN_,
  [sym_BLINK_] = sym_BLINK_,
  [sym_CONCATENATE_FUNC_] = sym_CONCATENATE_FUNC_,
  [sym_CRT_] = sym_CRT_,
  [sym_CURRENT_DATE_FUNC_] = sym_CURRENT_DATE_FUNC_,
  [sym_DOWN_] = sym_DOWN_,
  [sym_EOL_] = sym_EOL_,
  [sym_EOS_] = sym_EOS_,
  [sym_ERASE_] = sym_ERASE_,
  [sym_EXCEPTION_] = sym_EXCEPTION_,
  [sym_FOREGROUND_COLOR_] = sym_FOREGROUND_COLOR_,
  [sym_FUNCTION_NAME_] = sym_FUNCTION_NAME_,
  [sym_HIGHLIGHT_] = sym_HIGHLIGHT_,
  [sym_HIGH_VALUE_] = sym_HIGH_VALUE_,
  [sym_LENGTH_] = sym_LENGTH_,
  [sym_LINE_] = sym_LINE_,
  [sym_LINES_] = sym_LINES_,
  [sym_LOCALE_DT_FUNC_] = sym_LOCALE_DT_FUNC_,
  [sym_LOWER_CASE_FUNC_] = sym_LOWER_CASE_FUNC_,
  [sym_LOWLIGHT_] = sym_LOWLIGHT_,
  [sym_LOW_VALUE_] = sym_LOW_VALUE_,
  [sym_MNEMONIC_NAME_] = sym_MNEMONIC_NAME_,
  [sym_NOT_EXCEPTION_] = sym_NOT_EXCEPTION_,
  [sym_NO_ADVANCING_] = sym_NO_ADVANCING_,
  [sym_NUMVALC_FUNC_] = sym_NUMVALC_FUNC_,
  [sym_OVERLINE_] = sym_OVERLINE_,
  [sym_PRINTER_] = sym_PRINTER_,
  [sym_QUOTE_] = sym_QUOTE_,
  [sym_REVERSE_FUNC_] = sym_REVERSE_FUNC_,
  [sym_REVERSE_VIDEO_] = sym_REVERSE_VIDEO_,
  [sym_SCROLL_] = sym_SCROLL_,
  [sym_SPACE_] = sym_SPACE_,
  [sym_SUBSTITUTE_FUNC_] = sym_SUBSTITUTE_FUNC_,
  [sym_SUBSTITUTE_CASE_FUNC_] = sym_SUBSTITUTE_CASE_FUNC_,
  [sym_TOK_NULL_] = sym_TOK_NULL_,
  [sym_TRIM_FUNCTION_] = sym_TRIM_FUNCTION_,
  [sym_UNDERLINE_] = sym_UNDERLINE_,
  [sym_UP_] = sym_UP_,
  [sym_UPON_] = sym_UPON_,
  [sym_UPPER_CASE_FUNC_] = sym_UPPER_CASE_FUNC_,
  [sym_WHEN_COMPILED_FUNC_] = sym_WHEN_COMPILED_FUNC_,
  [sym_WITH_] = sym_WITH_,
  [sym_ZERO_] = sym_ZERO_,
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
  [aux_sym_working_storage_section_repeat1] = aux_sym_working_storage_section_repeat1,
  [aux_sym_data_description_repeat1] = aux_sym_data_description_repeat1,
  [aux_sym_qualified_word_repeat1] = aux_sym_qualified_word_repeat1,
  [aux_sym__exp_list_repeat1] = aux_sym__exp_list_repeat1,
  [aux_sym_procedure_division_repeat1] = aux_sym_procedure_division_repeat1,
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
  [sym_at_line_column] = {
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
  [sym_BACKGROUND_COLOR_] = {
    .visible = true,
    .named = true,
  },
  [sym_BELL_] = {
    .visible = true,
    .named = true,
  },
  [sym_BLANK_LINE_] = {
    .visible = true,
    .named = true,
  },
  [sym_BLANK_SCREEN_] = {
    .visible = true,
    .named = true,
  },
  [sym_BLINK_] = {
    .visible = true,
    .named = true,
  },
  [sym_CONCATENATE_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_CRT_] = {
    .visible = true,
    .named = true,
  },
  [sym_CURRENT_DATE_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_DOWN_] = {
    .visible = true,
    .named = true,
  },
  [sym_EOL_] = {
    .visible = true,
    .named = true,
  },
  [sym_EOS_] = {
    .visible = true,
    .named = true,
  },
  [sym_ERASE_] = {
    .visible = true,
    .named = true,
  },
  [sym_EXCEPTION_] = {
    .visible = true,
    .named = true,
  },
  [sym_FOREGROUND_COLOR_] = {
    .visible = true,
    .named = true,
  },
  [sym_FUNCTION_NAME_] = {
    .visible = true,
    .named = true,
  },
  [sym_HIGHLIGHT_] = {
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
  [sym_LINE_] = {
    .visible = true,
    .named = true,
  },
  [sym_LINES_] = {
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
  [sym_LOWLIGHT_] = {
    .visible = true,
    .named = true,
  },
  [sym_LOW_VALUE_] = {
    .visible = true,
    .named = true,
  },
  [sym_MNEMONIC_NAME_] = {
    .visible = true,
    .named = true,
  },
  [sym_NOT_EXCEPTION_] = {
    .visible = true,
    .named = true,
  },
  [sym_NO_ADVANCING_] = {
    .visible = true,
    .named = true,
  },
  [sym_NUMVALC_FUNC_] = {
    .visible = true,
    .named = true,
  },
  [sym_OVERLINE_] = {
    .visible = true,
    .named = true,
  },
  [sym_PRINTER_] = {
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
  [sym_REVERSE_VIDEO_] = {
    .visible = true,
    .named = true,
  },
  [sym_SCROLL_] = {
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
  [sym_UNDERLINE_] = {
    .visible = true,
    .named = true,
  },
  [sym_UP_] = {
    .visible = true,
    .named = true,
  },
  [sym_UPON_] = {
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
  [sym_WITH_] = {
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
  [3] = {.index = 4, .length = 1},
  [4] = {.index = 5, .length = 2},
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
    {field_value, 1},
  [5] =
    {field_dst, 3},
    {field_src, 1},
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
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 6,
  [15] = 7,
  [16] = 13,
  [17] = 10,
  [18] = 11,
  [19] = 12,
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
  [30] = 21,
  [31] = 21,
  [32] = 32,
  [33] = 23,
  [34] = 34,
  [35] = 22,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 44,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 49,
  [51] = 51,
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
  [90] = 87,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 51,
  [96] = 53,
  [97] = 52,
  [98] = 98,
  [99] = 51,
  [100] = 100,
  [101] = 52,
  [102] = 54,
  [103] = 53,
  [104] = 104,
  [105] = 105,
  [106] = 54,
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
  [118] = 118,
  [119] = 119,
  [120] = 119,
  [121] = 118,
  [122] = 122,
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
  [148] = 69,
  [149] = 9,
  [150] = 150,
  [151] = 151,
  [152] = 53,
  [153] = 71,
  [154] = 55,
  [155] = 51,
  [156] = 52,
  [157] = 72,
  [158] = 70,
  [159] = 159,
  [160] = 27,
  [161] = 60,
  [162] = 59,
  [163] = 61,
  [164] = 164,
  [165] = 165,
  [166] = 58,
  [167] = 57,
  [168] = 73,
  [169] = 56,
  [170] = 74,
  [171] = 164,
  [172] = 47,
  [173] = 173,
  [174] = 65,
  [175] = 75,
  [176] = 64,
  [177] = 66,
  [178] = 62,
  [179] = 37,
  [180] = 180,
  [181] = 181,
  [182] = 164,
  [183] = 63,
  [184] = 184,
  [185] = 9,
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
  [197] = 39,
  [198] = 54,
  [199] = 78,
  [200] = 80,
  [201] = 201,
  [202] = 38,
  [203] = 76,
  [204] = 204,
  [205] = 77,
  [206] = 82,
  [207] = 40,
  [208] = 81,
  [209] = 84,
  [210] = 85,
  [211] = 27,
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
  [230] = 37,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 38,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 39,
  [242] = 40,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 248,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 247,
  [256] = 244,
  [257] = 253,
  [258] = 244,
  [259] = 252,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 272,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
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
  [308] = 308,
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
  [330] = 67,
  [331] = 331,
  [332] = 83,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 79,
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
  [359] = 86,
  [360] = 354,
  [361] = 361,
  [362] = 362,
  [363] = 334,
  [364] = 343,
  [365] = 346,
  [366] = 366,
  [367] = 347,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 361,
  [372] = 361,
  [373] = 334,
  [374] = 368,
  [375] = 375,
  [376] = 361,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 368,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 379,
  [390] = 378,
  [391] = 362,
  [392] = 344,
  [393] = 324,
  [394] = 394,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(155);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(191);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(165);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '8') ADVANCE(192);
      if (lookahead == '9') ADVANCE(177);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'N') ADVANCE(219);
      if (lookahead == 'S') ADVANCE(297);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == 's') ADVANCE(234);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(322);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(315);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(326);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(321);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '&') ADVANCE(191);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '+') ADVANCE(165);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'N') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'N') ADVANCE(219);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'N') ADVANCE(219);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(191);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(322);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == '^') ADVANCE(171);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(322);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(316);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(162);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '+') ADVANCE(164);
      if (lookahead == '-') ADVANCE(166);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '9') ADVANCE(179);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == 'S') ADVANCE(112);
      if (lookahead == '^') ADVANCE(170);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(143);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(134);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == ')') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(144);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 27:
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 28:
      if (lookahead == '8') ADVANCE(29);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == 's') ADVANCE(235);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 29:
      if (lookahead == '8') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 30:
      if (lookahead == '9') ADVANCE(180);
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
          lookahead == 'e') ADVANCE(125);
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
      if (lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(157);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(183);
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
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 107:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 109:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(146);
      END_STATE();
    case 111:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 112:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 114:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 115:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 116:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 117:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 118:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      END_STATE();
    case 122:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(120);
      END_STATE();
    case 123:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 124:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 125:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(119);
      END_STATE();
    case 126:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 127:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(208);
      END_STATE();
    case 128:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 129:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 130:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 135:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 136:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 138:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(138)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 143:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(211);
      END_STATE();
    case 144:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 146:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 154:
      if (eof) ADVANCE(155);
      if (lookahead == '(') ADVANCE(161);
      if (lookahead == '.') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(154)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_file_section);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_level_number);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_level_number);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '9') ADVANCE(178);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(194);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_level_number);
      if (lookahead == '.') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == '(') ADVANCE(151);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__picture_9_z);
      if (lookahead == '(') ADVANCE(152);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__picture_9_z);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '9') ADVANCE(159);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(160);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '9') ADVANCE(178);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(194);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(148);
      if (lookahead == '9') ADVANCE(179);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(175);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(153);
      if (lookahead == '9') ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '9') ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '9') ADVANCE(179);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(30);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(175);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_local_storage_section);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_local_storage_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_linkage_section);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_linkage_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_report_section);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_report_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_screen_section);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_screen_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '8') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_x_string_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_x_string_token2);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_h_string_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_h_string_token2);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_n_string_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_n_string_token2);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_n_string_token3);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_n_string_token4);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_n_string_token5);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_n_string_token6);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_n_string_token7);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_n_string_token8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__COMMA_DELIM);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__COMMA_DELIM);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__IN);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__IS);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__IS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__OF);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__PROCEDURE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__PROCEDURE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__SEMI_COLON);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__SEMI_COLON);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == 'C') ADVANCE(220);
      if (lookahead == 'D') ADVANCE(221);
      if (lookahead == 'X') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '-') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '-') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '-') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(275);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(276);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(277);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(278);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(280);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(271);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'g') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'g') ADVANCE(249);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(268);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'k') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(274);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(261);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(262);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'p') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(281);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(302);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(298);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(320);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(329);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(306);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(334);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(295);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(313);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(300);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(290);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(309);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(332);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(317);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(311);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(323);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(307);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(286);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(305);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(303);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(288);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(308);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(325);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(304);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(338);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(333);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(293);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(335);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(336);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(338);
      END_STATE();
    case 339:
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
  [1] = {.lex_state = 154},
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
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 1},
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
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 1},
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
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 17},
  [96] = {.lex_state = 17},
  [97] = {.lex_state = 17},
  [98] = {.lex_state = 154},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 154},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 17},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 27},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 154},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 154},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 27},
  [115] = {.lex_state = 27},
  [116] = {.lex_state = 154},
  [117] = {.lex_state = 154},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 154},
  [123] = {.lex_state = 154},
  [124] = {.lex_state = 154},
  [125] = {.lex_state = 154},
  [126] = {.lex_state = 154},
  [127] = {.lex_state = 154},
  [128] = {.lex_state = 154},
  [129] = {.lex_state = 154},
  [130] = {.lex_state = 154},
  [131] = {.lex_state = 154},
  [132] = {.lex_state = 154},
  [133] = {.lex_state = 154},
  [134] = {.lex_state = 154},
  [135] = {.lex_state = 154},
  [136] = {.lex_state = 154},
  [137] = {.lex_state = 154},
  [138] = {.lex_state = 154},
  [139] = {.lex_state = 154},
  [140] = {.lex_state = 154},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 154},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 154},
  [145] = {.lex_state = 154},
  [146] = {.lex_state = 154},
  [147] = {.lex_state = 154},
  [148] = {.lex_state = 17},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 154},
  [151] = {.lex_state = 154},
  [152] = {.lex_state = 18},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 18},
  [156] = {.lex_state = 18},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 154},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 19},
  [165] = {.lex_state = 27},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 19},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 154},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 154},
  [181] = {.lex_state = 154},
  [182] = {.lex_state = 19},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 28},
  [185] = {.lex_state = 154},
  [186] = {.lex_state = 154},
  [187] = {.lex_state = 154},
  [188] = {.lex_state = 154},
  [189] = {.lex_state = 154},
  [190] = {.lex_state = 154},
  [191] = {.lex_state = 154},
  [192] = {.lex_state = 154},
  [193] = {.lex_state = 19},
  [194] = {.lex_state = 154},
  [195] = {.lex_state = 19},
  [196] = {.lex_state = 28},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 18},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 154},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 28},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 154},
  [212] = {.lex_state = 19},
  [213] = {.lex_state = 154},
  [214] = {.lex_state = 154},
  [215] = {.lex_state = 154},
  [216] = {.lex_state = 19},
  [217] = {.lex_state = 19},
  [218] = {.lex_state = 19},
  [219] = {.lex_state = 19},
  [220] = {.lex_state = 19},
  [221] = {.lex_state = 19},
  [222] = {.lex_state = 19},
  [223] = {.lex_state = 19},
  [224] = {.lex_state = 19},
  [225] = {.lex_state = 19},
  [226] = {.lex_state = 19},
  [227] = {.lex_state = 19},
  [228] = {.lex_state = 28},
  [229] = {.lex_state = 19},
  [230] = {.lex_state = 154},
  [231] = {.lex_state = 19},
  [232] = {.lex_state = 154},
  [233] = {.lex_state = 154},
  [234] = {.lex_state = 154},
  [235] = {.lex_state = 154},
  [236] = {.lex_state = 154},
  [237] = {.lex_state = 154},
  [238] = {.lex_state = 154},
  [239] = {.lex_state = 154},
  [240] = {.lex_state = 154},
  [241] = {.lex_state = 154},
  [242] = {.lex_state = 154},
  [243] = {.lex_state = 27},
  [244] = {.lex_state = 19},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 27},
  [247] = {.lex_state = 19},
  [248] = {.lex_state = 19},
  [249] = {.lex_state = 154},
  [250] = {.lex_state = 19},
  [251] = {.lex_state = 154},
  [252] = {.lex_state = 19},
  [253] = {.lex_state = 131},
  [254] = {.lex_state = 19},
  [255] = {.lex_state = 19},
  [256] = {.lex_state = 19},
  [257] = {.lex_state = 131},
  [258] = {.lex_state = 19},
  [259] = {.lex_state = 19},
  [260] = {.lex_state = 154},
  [261] = {.lex_state = 154},
  [262] = {.lex_state = 154},
  [263] = {.lex_state = 154},
  [264] = {.lex_state = 19},
  [265] = {.lex_state = 154},
  [266] = {.lex_state = 19},
  [267] = {.lex_state = 19},
  [268] = {.lex_state = 19},
  [269] = {.lex_state = 154},
  [270] = {.lex_state = 138},
  [271] = {.lex_state = 154},
  [272] = {.lex_state = 154},
  [273] = {.lex_state = 154},
  [274] = {.lex_state = 154},
  [275] = {.lex_state = 154},
  [276] = {.lex_state = 19},
  [277] = {.lex_state = 154},
  [278] = {.lex_state = 154},
  [279] = {.lex_state = 154},
  [280] = {.lex_state = 154},
  [281] = {.lex_state = 19},
  [282] = {.lex_state = 154},
  [283] = {.lex_state = 19},
  [284] = {.lex_state = 138},
  [285] = {.lex_state = 154},
  [286] = {.lex_state = 154},
  [287] = {.lex_state = 154},
  [288] = {.lex_state = 154},
  [289] = {.lex_state = 131},
  [290] = {.lex_state = 154},
  [291] = {.lex_state = 154},
  [292] = {.lex_state = 19},
  [293] = {.lex_state = 19},
  [294] = {.lex_state = 154},
  [295] = {.lex_state = 154},
  [296] = {.lex_state = 154},
  [297] = {.lex_state = 19},
  [298] = {.lex_state = 154},
  [299] = {.lex_state = 19},
  [300] = {.lex_state = 154},
  [301] = {.lex_state = 138},
  [302] = {.lex_state = 19},
  [303] = {.lex_state = 154},
  [304] = {.lex_state = 154},
  [305] = {.lex_state = 19},
  [306] = {.lex_state = 138},
  [307] = {.lex_state = 154},
  [308] = {.lex_state = 154},
  [309] = {.lex_state = 154},
  [310] = {.lex_state = 154},
  [311] = {.lex_state = 19},
  [312] = {.lex_state = 154},
  [313] = {.lex_state = 19},
  [314] = {.lex_state = 19},
  [315] = {.lex_state = 154},
  [316] = {.lex_state = 19},
  [317] = {.lex_state = 154},
  [318] = {.lex_state = 19},
  [319] = {.lex_state = 154},
  [320] = {.lex_state = 154},
  [321] = {.lex_state = 154},
  [322] = {.lex_state = 19},
  [323] = {.lex_state = 19},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 154},
  [327] = {.lex_state = 154},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 154},
  [330] = {.lex_state = 154},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 154},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 154},
  [338] = {.lex_state = 19},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 19},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 154},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 154},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 154},
  [359] = {.lex_state = 154},
  [360] = {.lex_state = 154},
  [361] = {.lex_state = 154},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 154},
  [371] = {.lex_state = 154},
  [372] = {.lex_state = 154},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 19},
  [376] = {.lex_state = 154},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 154},
  [381] = {.lex_state = 154},
  [382] = {.lex_state = 19},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 19},
  [388] = {.lex_state = 19},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
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
    [sym_at_line_column] = ACTIONS(1),
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
    [sym_start] = STATE(394),
    [sym_program_definition] = STATE(274),
    [sym_identification_division] = STATE(270),
    [aux_sym_start_repeat1] = STATE(274),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__IDENTIFICATION] = ACTIONS(5),
  },
  [2] = {
    [sym__identifier] = STATE(5),
    [sym_qualified_word] = STATE(9),
    [sym_on_disp_exception] = STATE(271),
    [sym_with_clause] = STATE(201),
    [sym__x] = STATE(5),
    [sym__basic_literal] = STATE(5),
    [sym__basic_value] = STATE(60),
    [sym__literal] = STATE(5),
    [sym_function_] = STATE(5),
    [sym_linage_counter] = STATE(5),
    [sym__LITERAL] = STATE(60),
    [sym__string] = STATE(60),
    [sym_x_string] = STATE(60),
    [sym_h_string] = STATE(60),
    [sym_n_string] = STATE(60),
    [sym__HIGH_VALUE] = STATE(66),
    [sym__LOW_VALUE] = STATE(62),
    [sym__QUOTE] = STATE(63),
    [sym__SPACE] = STATE(64),
    [sym__TOK_NULL] = STATE(65),
    [sym__ZERO] = STATE(47),
    [sym_ALL_] = STATE(87),
    [sym_CONCATENATE_FUNC_] = STATE(379),
    [sym_CURRENT_DATE_FUNC_] = STATE(72),
    [sym_EXCEPTION_] = STATE(190),
    [sym_FUNCTION_NAME_] = STATE(70),
    [sym_HIGH_VALUE_] = STATE(60),
    [sym_LOCALE_DT_FUNC_] = STATE(378),
    [sym_LOWER_CASE_FUNC_] = STATE(362),
    [sym_LOW_VALUE_] = STATE(60),
    [sym_NOT_EXCEPTION_] = STATE(190),
    [sym_NO_ADVANCING_] = STATE(232),
    [sym_NUMVALC_FUNC_] = STATE(344),
    [sym_QUOTE_] = STATE(60),
    [sym_REVERSE_FUNC_] = STATE(362),
    [sym_SPACE_] = STATE(60),
    [sym_SUBSTITUTE_FUNC_] = STATE(379),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(379),
    [sym_TOK_NULL_] = STATE(60),
    [sym_TRIM_FUNCTION_] = STATE(324),
    [sym_UPON_] = STATE(233),
    [sym_UPPER_CASE_FUNC_] = STATE(362),
    [sym_WHEN_COMPILED_FUNC_] = STATE(72),
    [sym_WITH_] = STATE(110),
    [sym_ZERO_] = STATE(60),
    [aux_sym__display_body_repeat1] = STATE(5),
    [sym_WORD] = ACTIONS(7),
    [anon_sym_DOT] = ACTIONS(9),
    [sym_at_line_column] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [aux_sym_x_string_token1] = ACTIONS(15),
    [aux_sym_x_string_token2] = ACTIONS(15),
    [aux_sym_h_string_token1] = ACTIONS(17),
    [aux_sym_h_string_token2] = ACTIONS(17),
    [aux_sym_n_string_token1] = ACTIONS(19),
    [aux_sym_n_string_token2] = ACTIONS(19),
    [aux_sym_n_string_token3] = ACTIONS(19),
    [aux_sym_n_string_token4] = ACTIONS(19),
    [aux_sym_n_string_token5] = ACTIONS(19),
    [aux_sym_n_string_token6] = ACTIONS(19),
    [aux_sym_n_string_token7] = ACTIONS(19),
    [aux_sym_n_string_token8] = ACTIONS(19),
    [sym__ADDRESS] = ACTIONS(21),
    [sym__ALL] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__DISPLAY] = ACTIONS(29),
    [sym__END_DISPLAY] = ACTIONS(29),
    [sym__EXCEPTION] = ACTIONS(31),
    [sym__FUNCTION_NAME] = ACTIONS(33),
    [anon_sym_high_DASHvalue] = ACTIONS(35),
    [anon_sym_high_DASHValue] = ACTIONS(35),
    [anon_sym_high_DASHVALUE] = ACTIONS(35),
    [anon_sym_High_DASHvalue] = ACTIONS(35),
    [anon_sym_High_DASHValue] = ACTIONS(35),
    [anon_sym_High_DASHVALUE] = ACTIONS(35),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(35),
    [anon_sym_HIGH_DASHValue] = ACTIONS(35),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(35),
    [sym__LENGTH] = ACTIONS(37),
    [sym__LINAGE_COUNTER] = ACTIONS(39),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(45),
    [anon_sym_low_DASHValue] = ACTIONS(45),
    [anon_sym_low_DASHVALUE] = ACTIONS(45),
    [anon_sym_Low_DASHvalue] = ACTIONS(45),
    [anon_sym_Low_DASHValue] = ACTIONS(45),
    [anon_sym_Low_DASHVALUE] = ACTIONS(45),
    [anon_sym_LOW_DASHvalue] = ACTIONS(45),
    [anon_sym_LOW_DASHValue] = ACTIONS(45),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(45),
    [sym__MOVE] = ACTIONS(29),
    [sym__NOT_EXCEPTION] = ACTIONS(47),
    [sym__NO_ADVANCING] = ACTIONS(49),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(53),
    [anon_sym_QUOTE] = ACTIONS(53),
    [anon_sym_Quote] = ACTIONS(53),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(57),
    [anon_sym_SPACE] = ACTIONS(57),
    [anon_sym_Space] = ACTIONS(57),
    [sym__STOP] = ACTIONS(29),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(63),
    [anon_sym_Null] = ACTIONS(63),
    [anon_sym_NULL] = ACTIONS(63),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPON] = ACTIONS(67),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(71),
    [sym__WITH] = ACTIONS(73),
    [anon_sym_zero] = ACTIONS(75),
    [anon_sym_ZERO] = ACTIONS(75),
    [anon_sym_Zero] = ACTIONS(75),
  },
  [3] = {
    [sym__identifier] = STATE(195),
    [sym_qualified_word] = STATE(149),
    [sym__exp_list] = STATE(346),
    [sym__exp] = STATE(195),
    [sym__binary_exp] = STATE(195),
    [sym__unary_exp] = STATE(195),
    [sym_positive_exp] = STATE(195),
    [sym_negative_exp] = STATE(195),
    [sym_add_exp] = STATE(195),
    [sym_sub_exp] = STATE(195),
    [sym_mul_exp] = STATE(195),
    [sym_div_exp] = STATE(195),
    [sym_pow_exp] = STATE(195),
    [sym__arith_x] = STATE(195),
    [sym__basic_literal] = STATE(195),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(195),
    [sym_linage_counter] = STATE(195),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [4] = {
    [sym__identifier] = STATE(195),
    [sym_qualified_word] = STATE(149),
    [sym__exp_list] = STATE(365),
    [sym__exp] = STATE(195),
    [sym__binary_exp] = STATE(195),
    [sym__unary_exp] = STATE(195),
    [sym_positive_exp] = STATE(195),
    [sym_negative_exp] = STATE(195),
    [sym_add_exp] = STATE(195),
    [sym_sub_exp] = STATE(195),
    [sym_mul_exp] = STATE(195),
    [sym_div_exp] = STATE(195),
    [sym_pow_exp] = STATE(195),
    [sym__arith_x] = STATE(195),
    [sym__basic_literal] = STATE(195),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(195),
    [sym_linage_counter] = STATE(195),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [5] = {
    [sym__identifier] = STATE(5),
    [sym_qualified_word] = STATE(9),
    [sym__x] = STATE(5),
    [sym__basic_literal] = STATE(5),
    [sym__basic_value] = STATE(60),
    [sym__literal] = STATE(5),
    [sym_function_] = STATE(5),
    [sym_linage_counter] = STATE(5),
    [sym__LITERAL] = STATE(60),
    [sym__string] = STATE(60),
    [sym_x_string] = STATE(60),
    [sym_h_string] = STATE(60),
    [sym_n_string] = STATE(60),
    [sym__HIGH_VALUE] = STATE(66),
    [sym__LOW_VALUE] = STATE(62),
    [sym__QUOTE] = STATE(63),
    [sym__SPACE] = STATE(64),
    [sym__TOK_NULL] = STATE(65),
    [sym__ZERO] = STATE(47),
    [sym_ALL_] = STATE(87),
    [sym_CONCATENATE_FUNC_] = STATE(379),
    [sym_CURRENT_DATE_FUNC_] = STATE(72),
    [sym_FUNCTION_NAME_] = STATE(70),
    [sym_HIGH_VALUE_] = STATE(60),
    [sym_LOCALE_DT_FUNC_] = STATE(378),
    [sym_LOWER_CASE_FUNC_] = STATE(362),
    [sym_LOW_VALUE_] = STATE(60),
    [sym_NUMVALC_FUNC_] = STATE(344),
    [sym_QUOTE_] = STATE(60),
    [sym_REVERSE_FUNC_] = STATE(362),
    [sym_SPACE_] = STATE(60),
    [sym_SUBSTITUTE_FUNC_] = STATE(379),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(379),
    [sym_TOK_NULL_] = STATE(60),
    [sym_TRIM_FUNCTION_] = STATE(324),
    [sym_UPPER_CASE_FUNC_] = STATE(362),
    [sym_WHEN_COMPILED_FUNC_] = STATE(72),
    [sym_ZERO_] = STATE(60),
    [aux_sym__display_body_repeat1] = STATE(5),
    [sym_WORD] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(122),
    [sym_at_line_column] = ACTIONS(124),
    [sym_number] = ACTIONS(126),
    [aux_sym_x_string_token1] = ACTIONS(129),
    [aux_sym_x_string_token2] = ACTIONS(129),
    [aux_sym_h_string_token1] = ACTIONS(132),
    [aux_sym_h_string_token2] = ACTIONS(132),
    [aux_sym_n_string_token1] = ACTIONS(135),
    [aux_sym_n_string_token2] = ACTIONS(135),
    [aux_sym_n_string_token3] = ACTIONS(135),
    [aux_sym_n_string_token4] = ACTIONS(135),
    [aux_sym_n_string_token5] = ACTIONS(135),
    [aux_sym_n_string_token6] = ACTIONS(135),
    [aux_sym_n_string_token7] = ACTIONS(135),
    [aux_sym_n_string_token8] = ACTIONS(135),
    [sym__ADDRESS] = ACTIONS(138),
    [sym__ALL] = ACTIONS(141),
    [sym__CONCATENATE_FUNC] = ACTIONS(144),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(147),
    [sym__DISPLAY] = ACTIONS(124),
    [sym__END_DISPLAY] = ACTIONS(124),
    [sym__EXCEPTION] = ACTIONS(124),
    [sym__FUNCTION_NAME] = ACTIONS(150),
    [anon_sym_high_DASHvalue] = ACTIONS(153),
    [anon_sym_high_DASHValue] = ACTIONS(153),
    [anon_sym_high_DASHVALUE] = ACTIONS(153),
    [anon_sym_High_DASHvalue] = ACTIONS(153),
    [anon_sym_High_DASHValue] = ACTIONS(153),
    [anon_sym_High_DASHVALUE] = ACTIONS(153),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(153),
    [anon_sym_HIGH_DASHValue] = ACTIONS(153),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(153),
    [sym__LENGTH] = ACTIONS(156),
    [sym__LINAGE_COUNTER] = ACTIONS(159),
    [sym__LOCALE_DT_FUNC] = ACTIONS(162),
    [sym__LOWER_CASE_FUNC] = ACTIONS(165),
    [anon_sym_low_DASHvalue] = ACTIONS(168),
    [anon_sym_low_DASHValue] = ACTIONS(168),
    [anon_sym_low_DASHVALUE] = ACTIONS(168),
    [anon_sym_Low_DASHvalue] = ACTIONS(168),
    [anon_sym_Low_DASHValue] = ACTIONS(168),
    [anon_sym_Low_DASHVALUE] = ACTIONS(168),
    [anon_sym_LOW_DASHvalue] = ACTIONS(168),
    [anon_sym_LOW_DASHValue] = ACTIONS(168),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(168),
    [sym__MOVE] = ACTIONS(124),
    [sym__NOT_EXCEPTION] = ACTIONS(124),
    [sym__NO_ADVANCING] = ACTIONS(124),
    [sym__NUMVALC_FUNC] = ACTIONS(171),
    [anon_sym_quote] = ACTIONS(174),
    [anon_sym_QUOTE] = ACTIONS(174),
    [anon_sym_Quote] = ACTIONS(174),
    [sym__REVERSE_FUNC] = ACTIONS(177),
    [anon_sym_space] = ACTIONS(180),
    [anon_sym_SPACE] = ACTIONS(180),
    [anon_sym_Space] = ACTIONS(180),
    [sym__STOP] = ACTIONS(124),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(183),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(186),
    [anon_sym_null] = ACTIONS(189),
    [anon_sym_Null] = ACTIONS(189),
    [anon_sym_NULL] = ACTIONS(189),
    [sym__TRIM_FUNCTION] = ACTIONS(192),
    [sym__UPON] = ACTIONS(124),
    [sym__UPPER_CASE_FUNC] = ACTIONS(195),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(198),
    [sym__WITH] = ACTIONS(124),
    [anon_sym_zero] = ACTIONS(201),
    [anon_sym_ZERO] = ACTIONS(201),
    [anon_sym_Zero] = ACTIONS(201),
  },
  [6] = {
    [sym__identifier] = STATE(164),
    [sym_qualified_word] = STATE(149),
    [sym__exp_list] = STATE(334),
    [sym__exp] = STATE(164),
    [sym__binary_exp] = STATE(164),
    [sym__unary_exp] = STATE(164),
    [sym_positive_exp] = STATE(164),
    [sym_negative_exp] = STATE(164),
    [sym_add_exp] = STATE(164),
    [sym_sub_exp] = STATE(164),
    [sym_mul_exp] = STATE(164),
    [sym_div_exp] = STATE(164),
    [sym_pow_exp] = STATE(164),
    [sym__arith_x] = STATE(164),
    [sym__basic_literal] = STATE(164),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(164),
    [sym_linage_counter] = STATE(164),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [7] = {
    [sym__identifier] = STATE(252),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(252),
    [sym__binary_exp] = STATE(252),
    [sym__unary_exp] = STATE(252),
    [sym_positive_exp] = STATE(252),
    [sym_negative_exp] = STATE(252),
    [sym_add_exp] = STATE(252),
    [sym_sub_exp] = STATE(252),
    [sym_mul_exp] = STATE(252),
    [sym_div_exp] = STATE(252),
    [sym_pow_exp] = STATE(252),
    [sym__arith_x] = STATE(252),
    [sym__basic_literal] = STATE(252),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(252),
    [sym_linage_counter] = STATE(252),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [8] = {
    [sym__identifier] = STATE(171),
    [sym_qualified_word] = STATE(149),
    [sym__exp_list] = STATE(373),
    [sym__exp] = STATE(171),
    [sym__binary_exp] = STATE(171),
    [sym__unary_exp] = STATE(171),
    [sym_positive_exp] = STATE(171),
    [sym_negative_exp] = STATE(171),
    [sym_add_exp] = STATE(171),
    [sym_sub_exp] = STATE(171),
    [sym_mul_exp] = STATE(171),
    [sym_div_exp] = STATE(171),
    [sym_pow_exp] = STATE(171),
    [sym__arith_x] = STATE(171),
    [sym__basic_literal] = STATE(171),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(171),
    [sym_linage_counter] = STATE(171),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [9] = {
    [sym_subref] = STATE(27),
    [sym_refmod] = STATE(39),
    [sym_WORD] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_LPAREN] = ACTIONS(210),
    [sym_external_clause] = ACTIONS(206),
    [sym_global_clause] = ACTIONS(206),
    [sym_usage_clause] = ACTIONS(206),
    [sym_sign_clause] = ACTIONS(206),
    [sym_occurs_clause] = ACTIONS(206),
    [sym_justified_clause] = ACTIONS(206),
    [sym_synchronized_clause] = ACTIONS(206),
    [sym_blank_clause] = ACTIONS(206),
    [sym_based_clause] = ACTIONS(206),
    [sym_value_clause] = ACTIONS(206),
    [sym_renames_clause] = ACTIONS(206),
    [sym_any_length_clause] = ACTIONS(206),
    [sym_error] = ACTIONS(206),
    [sym_at_line_column] = ACTIONS(206),
    [sym_number] = ACTIONS(208),
    [aux_sym_x_string_token1] = ACTIONS(208),
    [aux_sym_x_string_token2] = ACTIONS(208),
    [aux_sym_h_string_token1] = ACTIONS(208),
    [aux_sym_h_string_token2] = ACTIONS(208),
    [aux_sym_n_string_token1] = ACTIONS(208),
    [aux_sym_n_string_token2] = ACTIONS(208),
    [aux_sym_n_string_token3] = ACTIONS(208),
    [aux_sym_n_string_token4] = ACTIONS(208),
    [aux_sym_n_string_token5] = ACTIONS(208),
    [aux_sym_n_string_token6] = ACTIONS(208),
    [aux_sym_n_string_token7] = ACTIONS(208),
    [aux_sym_n_string_token8] = ACTIONS(208),
    [sym__ADDRESS] = ACTIONS(206),
    [sym__ALL] = ACTIONS(206),
    [sym__BACKGROUND_COLOR] = ACTIONS(206),
    [sym__BELL] = ACTIONS(206),
    [sym__BLANK_LINE] = ACTIONS(206),
    [sym__BLANK_SCREEN] = ACTIONS(206),
    [sym__BLINK] = ACTIONS(206),
    [sym__CONCATENATE_FUNC] = ACTIONS(206),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(206),
    [sym__DISPLAY] = ACTIONS(206),
    [sym__END_DISPLAY] = ACTIONS(206),
    [sym__ERASE] = ACTIONS(206),
    [sym__EXCEPTION] = ACTIONS(206),
    [sym__FOREGROUND_COLOR] = ACTIONS(206),
    [sym__FUNCTION_NAME] = ACTIONS(206),
    [sym__HIGHLIGHT] = ACTIONS(206),
    [anon_sym_high_DASHvalue] = ACTIONS(206),
    [anon_sym_high_DASHValue] = ACTIONS(206),
    [anon_sym_high_DASHVALUE] = ACTIONS(206),
    [anon_sym_High_DASHvalue] = ACTIONS(206),
    [anon_sym_High_DASHValue] = ACTIONS(206),
    [anon_sym_High_DASHVALUE] = ACTIONS(206),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(206),
    [anon_sym_HIGH_DASHValue] = ACTIONS(206),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(206),
    [sym__LENGTH] = ACTIONS(206),
    [sym__LINAGE_COUNTER] = ACTIONS(206),
    [sym__LINE] = ACTIONS(206),
    [sym__LINES] = ACTIONS(206),
    [sym__LOCALE_DT_FUNC] = ACTIONS(206),
    [sym__LOWER_CASE_FUNC] = ACTIONS(206),
    [sym__LOWLIGHT] = ACTIONS(206),
    [anon_sym_low_DASHvalue] = ACTIONS(206),
    [anon_sym_low_DASHValue] = ACTIONS(206),
    [anon_sym_low_DASHVALUE] = ACTIONS(206),
    [anon_sym_Low_DASHvalue] = ACTIONS(206),
    [anon_sym_Low_DASHValue] = ACTIONS(206),
    [anon_sym_Low_DASHVALUE] = ACTIONS(206),
    [anon_sym_LOW_DASHvalue] = ACTIONS(206),
    [anon_sym_LOW_DASHValue] = ACTIONS(206),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(206),
    [sym__MOVE] = ACTIONS(206),
    [sym__NOT_EXCEPTION] = ACTIONS(206),
    [sym__NO_ADVANCING] = ACTIONS(206),
    [sym__NUMVALC_FUNC] = ACTIONS(206),
    [sym__OVERLINE] = ACTIONS(206),
    [sym__PIC] = ACTIONS(206),
    [sym__PICTURE] = ACTIONS(206),
    [anon_sym_quote] = ACTIONS(206),
    [anon_sym_QUOTE] = ACTIONS(206),
    [anon_sym_Quote] = ACTIONS(206),
    [sym__REDEFINES] = ACTIONS(206),
    [sym__REVERSE_FUNC] = ACTIONS(206),
    [sym__REVERSE_VIDEO] = ACTIONS(206),
    [sym__SCROLL] = ACTIONS(206),
    [anon_sym_space] = ACTIONS(206),
    [anon_sym_SPACE] = ACTIONS(206),
    [anon_sym_Space] = ACTIONS(206),
    [sym__STOP] = ACTIONS(206),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(206),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(206),
    [anon_sym_null] = ACTIONS(206),
    [anon_sym_Null] = ACTIONS(206),
    [anon_sym_NULL] = ACTIONS(206),
    [sym__TRIM_FUNCTION] = ACTIONS(206),
    [sym__UNDERLINE] = ACTIONS(206),
    [sym__UPON] = ACTIONS(206),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(206),
    [sym__UPON_COMMAND_LINE] = ACTIONS(206),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(206),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(206),
    [sym__UPPER_CASE_FUNC] = ACTIONS(206),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(206),
    [sym__WITH] = ACTIONS(206),
    [anon_sym_zero] = ACTIONS(206),
    [anon_sym_ZERO] = ACTIONS(206),
    [anon_sym_Zero] = ACTIONS(206),
  },
  [10] = {
    [sym__identifier] = STATE(218),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(218),
    [sym__binary_exp] = STATE(218),
    [sym__unary_exp] = STATE(218),
    [sym_positive_exp] = STATE(218),
    [sym_negative_exp] = STATE(218),
    [sym_add_exp] = STATE(218),
    [sym_sub_exp] = STATE(218),
    [sym_mul_exp] = STATE(218),
    [sym_div_exp] = STATE(218),
    [sym_pow_exp] = STATE(218),
    [sym__arith_x] = STATE(218),
    [sym__basic_literal] = STATE(218),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(218),
    [sym__trim_args] = STATE(364),
    [sym_linage_counter] = STATE(218),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [11] = {
    [sym__identifier] = STATE(193),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(193),
    [sym__binary_exp] = STATE(193),
    [sym__unary_exp] = STATE(193),
    [sym_positive_exp] = STATE(193),
    [sym_negative_exp] = STATE(193),
    [sym_add_exp] = STATE(193),
    [sym_sub_exp] = STATE(193),
    [sym_mul_exp] = STATE(193),
    [sym_div_exp] = STATE(193),
    [sym_pow_exp] = STATE(193),
    [sym__arith_x] = STATE(193),
    [sym__basic_literal] = STATE(193),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(193),
    [sym__numvalc_args] = STATE(367),
    [sym_linage_counter] = STATE(193),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [12] = {
    [sym__identifier] = STATE(224),
    [sym_qualified_word] = STATE(149),
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
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(224),
    [sym__locale_dt_args] = STATE(364),
    [sym_linage_counter] = STATE(224),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [13] = {
    [sym__identifier] = STATE(195),
    [sym_qualified_word] = STATE(149),
    [sym__exp_list] = STATE(364),
    [sym__exp] = STATE(195),
    [sym__binary_exp] = STATE(195),
    [sym__unary_exp] = STATE(195),
    [sym_positive_exp] = STATE(195),
    [sym_negative_exp] = STATE(195),
    [sym_add_exp] = STATE(195),
    [sym_sub_exp] = STATE(195),
    [sym_mul_exp] = STATE(195),
    [sym_div_exp] = STATE(195),
    [sym_pow_exp] = STATE(195),
    [sym__arith_x] = STATE(195),
    [sym__basic_literal] = STATE(195),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(195),
    [sym_linage_counter] = STATE(195),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [14] = {
    [sym__identifier] = STATE(182),
    [sym_qualified_word] = STATE(149),
    [sym__exp_list] = STATE(363),
    [sym__exp] = STATE(182),
    [sym__binary_exp] = STATE(182),
    [sym__unary_exp] = STATE(182),
    [sym_positive_exp] = STATE(182),
    [sym_negative_exp] = STATE(182),
    [sym_add_exp] = STATE(182),
    [sym_sub_exp] = STATE(182),
    [sym_mul_exp] = STATE(182),
    [sym_div_exp] = STATE(182),
    [sym_pow_exp] = STATE(182),
    [sym__arith_x] = STATE(182),
    [sym__basic_literal] = STATE(182),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(182),
    [sym_linage_counter] = STATE(182),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [15] = {
    [sym__identifier] = STATE(259),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(259),
    [sym__binary_exp] = STATE(259),
    [sym__unary_exp] = STATE(259),
    [sym_positive_exp] = STATE(259),
    [sym_negative_exp] = STATE(259),
    [sym_add_exp] = STATE(259),
    [sym_sub_exp] = STATE(259),
    [sym_mul_exp] = STATE(259),
    [sym_div_exp] = STATE(259),
    [sym_pow_exp] = STATE(259),
    [sym__arith_x] = STATE(259),
    [sym__basic_literal] = STATE(259),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(259),
    [sym_linage_counter] = STATE(259),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [16] = {
    [sym__identifier] = STATE(195),
    [sym_qualified_word] = STATE(149),
    [sym__exp_list] = STATE(343),
    [sym__exp] = STATE(195),
    [sym__binary_exp] = STATE(195),
    [sym__unary_exp] = STATE(195),
    [sym_positive_exp] = STATE(195),
    [sym_negative_exp] = STATE(195),
    [sym_add_exp] = STATE(195),
    [sym_sub_exp] = STATE(195),
    [sym_mul_exp] = STATE(195),
    [sym_div_exp] = STATE(195),
    [sym_pow_exp] = STATE(195),
    [sym__arith_x] = STATE(195),
    [sym__basic_literal] = STATE(195),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(195),
    [sym_linage_counter] = STATE(195),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [17] = {
    [sym__identifier] = STATE(218),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(218),
    [sym__binary_exp] = STATE(218),
    [sym__unary_exp] = STATE(218),
    [sym_positive_exp] = STATE(218),
    [sym_negative_exp] = STATE(218),
    [sym_add_exp] = STATE(218),
    [sym_sub_exp] = STATE(218),
    [sym_mul_exp] = STATE(218),
    [sym_div_exp] = STATE(218),
    [sym_pow_exp] = STATE(218),
    [sym__arith_x] = STATE(218),
    [sym__basic_literal] = STATE(218),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(218),
    [sym__trim_args] = STATE(343),
    [sym_linage_counter] = STATE(218),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [18] = {
    [sym__identifier] = STATE(193),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(193),
    [sym__binary_exp] = STATE(193),
    [sym__unary_exp] = STATE(193),
    [sym_positive_exp] = STATE(193),
    [sym_negative_exp] = STATE(193),
    [sym_add_exp] = STATE(193),
    [sym_sub_exp] = STATE(193),
    [sym_mul_exp] = STATE(193),
    [sym_div_exp] = STATE(193),
    [sym_pow_exp] = STATE(193),
    [sym__arith_x] = STATE(193),
    [sym__basic_literal] = STATE(193),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(193),
    [sym__numvalc_args] = STATE(347),
    [sym_linage_counter] = STATE(193),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [19] = {
    [sym__identifier] = STATE(224),
    [sym_qualified_word] = STATE(149),
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
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(224),
    [sym__locale_dt_args] = STATE(343),
    [sym_linage_counter] = STATE(224),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [20] = {
    [sym__identifier] = STATE(245),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(245),
    [sym__binary_exp] = STATE(245),
    [sym__unary_exp] = STATE(245),
    [sym_positive_exp] = STATE(245),
    [sym_negative_exp] = STATE(245),
    [sym_add_exp] = STATE(245),
    [sym_sub_exp] = STATE(245),
    [sym_mul_exp] = STATE(245),
    [sym_div_exp] = STATE(245),
    [sym_pow_exp] = STATE(245),
    [sym__arith_x] = STATE(245),
    [sym__basic_literal] = STATE(245),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(245),
    [sym_linage_counter] = STATE(245),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [21] = {
    [sym__identifier] = STATE(244),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(244),
    [sym__binary_exp] = STATE(244),
    [sym__unary_exp] = STATE(244),
    [sym_positive_exp] = STATE(244),
    [sym_negative_exp] = STATE(244),
    [sym_add_exp] = STATE(244),
    [sym_sub_exp] = STATE(244),
    [sym_mul_exp] = STATE(244),
    [sym_div_exp] = STATE(244),
    [sym_pow_exp] = STATE(244),
    [sym__arith_x] = STATE(244),
    [sym__basic_literal] = STATE(244),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(244),
    [sym_linage_counter] = STATE(244),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [22] = {
    [sym__identifier] = STATE(247),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(247),
    [sym__binary_exp] = STATE(247),
    [sym__unary_exp] = STATE(247),
    [sym_positive_exp] = STATE(247),
    [sym_negative_exp] = STATE(247),
    [sym_add_exp] = STATE(247),
    [sym_sub_exp] = STATE(247),
    [sym_mul_exp] = STATE(247),
    [sym_div_exp] = STATE(247),
    [sym_pow_exp] = STATE(247),
    [sym__arith_x] = STATE(247),
    [sym__basic_literal] = STATE(247),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(247),
    [sym_linage_counter] = STATE(247),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [23] = {
    [sym__identifier] = STATE(250),
    [sym_qualified_word] = STATE(149),
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
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(250),
    [sym_linage_counter] = STATE(250),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [24] = {
    [sym__identifier] = STATE(221),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(221),
    [sym__binary_exp] = STATE(221),
    [sym__unary_exp] = STATE(221),
    [sym_positive_exp] = STATE(221),
    [sym_negative_exp] = STATE(221),
    [sym_add_exp] = STATE(221),
    [sym_sub_exp] = STATE(221),
    [sym_mul_exp] = STATE(221),
    [sym_div_exp] = STATE(221),
    [sym_pow_exp] = STATE(221),
    [sym__arith_x] = STATE(221),
    [sym__basic_literal] = STATE(221),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(221),
    [sym_linage_counter] = STATE(221),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [25] = {
    [sym__identifier] = STATE(216),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(216),
    [sym__binary_exp] = STATE(216),
    [sym__unary_exp] = STATE(216),
    [sym_positive_exp] = STATE(216),
    [sym_negative_exp] = STATE(216),
    [sym_add_exp] = STATE(216),
    [sym_sub_exp] = STATE(216),
    [sym_mul_exp] = STATE(216),
    [sym_div_exp] = STATE(216),
    [sym_pow_exp] = STATE(216),
    [sym__arith_x] = STATE(216),
    [sym__basic_literal] = STATE(216),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(216),
    [sym_linage_counter] = STATE(216),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [26] = {
    [sym__identifier] = STATE(217),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(217),
    [sym__binary_exp] = STATE(217),
    [sym__unary_exp] = STATE(217),
    [sym_positive_exp] = STATE(217),
    [sym_negative_exp] = STATE(217),
    [sym_add_exp] = STATE(217),
    [sym_sub_exp] = STATE(217),
    [sym_mul_exp] = STATE(217),
    [sym_div_exp] = STATE(217),
    [sym_pow_exp] = STATE(217),
    [sym__arith_x] = STATE(217),
    [sym__basic_literal] = STATE(217),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(217),
    [sym_linage_counter] = STATE(217),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [27] = {
    [sym_refmod] = STATE(38),
    [sym_WORD] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(216),
    [anon_sym_LPAREN] = ACTIONS(218),
    [sym_external_clause] = ACTIONS(214),
    [sym_global_clause] = ACTIONS(214),
    [sym_usage_clause] = ACTIONS(214),
    [sym_sign_clause] = ACTIONS(214),
    [sym_occurs_clause] = ACTIONS(214),
    [sym_justified_clause] = ACTIONS(214),
    [sym_synchronized_clause] = ACTIONS(214),
    [sym_blank_clause] = ACTIONS(214),
    [sym_based_clause] = ACTIONS(214),
    [sym_value_clause] = ACTIONS(214),
    [sym_renames_clause] = ACTIONS(214),
    [sym_any_length_clause] = ACTIONS(214),
    [sym_error] = ACTIONS(214),
    [sym_at_line_column] = ACTIONS(214),
    [sym_number] = ACTIONS(216),
    [aux_sym_x_string_token1] = ACTIONS(216),
    [aux_sym_x_string_token2] = ACTIONS(216),
    [aux_sym_h_string_token1] = ACTIONS(216),
    [aux_sym_h_string_token2] = ACTIONS(216),
    [aux_sym_n_string_token1] = ACTIONS(216),
    [aux_sym_n_string_token2] = ACTIONS(216),
    [aux_sym_n_string_token3] = ACTIONS(216),
    [aux_sym_n_string_token4] = ACTIONS(216),
    [aux_sym_n_string_token5] = ACTIONS(216),
    [aux_sym_n_string_token6] = ACTIONS(216),
    [aux_sym_n_string_token7] = ACTIONS(216),
    [aux_sym_n_string_token8] = ACTIONS(216),
    [sym__ADDRESS] = ACTIONS(214),
    [sym__ALL] = ACTIONS(214),
    [sym__BACKGROUND_COLOR] = ACTIONS(214),
    [sym__BELL] = ACTIONS(214),
    [sym__BLANK_LINE] = ACTIONS(214),
    [sym__BLANK_SCREEN] = ACTIONS(214),
    [sym__BLINK] = ACTIONS(214),
    [sym__CONCATENATE_FUNC] = ACTIONS(214),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(214),
    [sym__DISPLAY] = ACTIONS(214),
    [sym__END_DISPLAY] = ACTIONS(214),
    [sym__ERASE] = ACTIONS(214),
    [sym__EXCEPTION] = ACTIONS(214),
    [sym__FOREGROUND_COLOR] = ACTIONS(214),
    [sym__FUNCTION_NAME] = ACTIONS(214),
    [sym__HIGHLIGHT] = ACTIONS(214),
    [anon_sym_high_DASHvalue] = ACTIONS(214),
    [anon_sym_high_DASHValue] = ACTIONS(214),
    [anon_sym_high_DASHVALUE] = ACTIONS(214),
    [anon_sym_High_DASHvalue] = ACTIONS(214),
    [anon_sym_High_DASHValue] = ACTIONS(214),
    [anon_sym_High_DASHVALUE] = ACTIONS(214),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(214),
    [anon_sym_HIGH_DASHValue] = ACTIONS(214),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(214),
    [sym__LENGTH] = ACTIONS(214),
    [sym__LINAGE_COUNTER] = ACTIONS(214),
    [sym__LINE] = ACTIONS(214),
    [sym__LINES] = ACTIONS(214),
    [sym__LOCALE_DT_FUNC] = ACTIONS(214),
    [sym__LOWER_CASE_FUNC] = ACTIONS(214),
    [sym__LOWLIGHT] = ACTIONS(214),
    [anon_sym_low_DASHvalue] = ACTIONS(214),
    [anon_sym_low_DASHValue] = ACTIONS(214),
    [anon_sym_low_DASHVALUE] = ACTIONS(214),
    [anon_sym_Low_DASHvalue] = ACTIONS(214),
    [anon_sym_Low_DASHValue] = ACTIONS(214),
    [anon_sym_Low_DASHVALUE] = ACTIONS(214),
    [anon_sym_LOW_DASHvalue] = ACTIONS(214),
    [anon_sym_LOW_DASHValue] = ACTIONS(214),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(214),
    [sym__MOVE] = ACTIONS(214),
    [sym__NOT_EXCEPTION] = ACTIONS(214),
    [sym__NO_ADVANCING] = ACTIONS(214),
    [sym__NUMVALC_FUNC] = ACTIONS(214),
    [sym__OVERLINE] = ACTIONS(214),
    [sym__PIC] = ACTIONS(214),
    [sym__PICTURE] = ACTIONS(214),
    [anon_sym_quote] = ACTIONS(214),
    [anon_sym_QUOTE] = ACTIONS(214),
    [anon_sym_Quote] = ACTIONS(214),
    [sym__REDEFINES] = ACTIONS(214),
    [sym__REVERSE_FUNC] = ACTIONS(214),
    [sym__REVERSE_VIDEO] = ACTIONS(214),
    [sym__SCROLL] = ACTIONS(214),
    [anon_sym_space] = ACTIONS(214),
    [anon_sym_SPACE] = ACTIONS(214),
    [anon_sym_Space] = ACTIONS(214),
    [sym__STOP] = ACTIONS(214),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(214),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(214),
    [anon_sym_null] = ACTIONS(214),
    [anon_sym_Null] = ACTIONS(214),
    [anon_sym_NULL] = ACTIONS(214),
    [sym__TRIM_FUNCTION] = ACTIONS(214),
    [sym__UNDERLINE] = ACTIONS(214),
    [sym__UPON] = ACTIONS(214),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(214),
    [sym__UPON_COMMAND_LINE] = ACTIONS(214),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(214),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(214),
    [sym__UPPER_CASE_FUNC] = ACTIONS(214),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(214),
    [sym__WITH] = ACTIONS(214),
    [anon_sym_zero] = ACTIONS(214),
    [anon_sym_ZERO] = ACTIONS(214),
    [anon_sym_Zero] = ACTIONS(214),
  },
  [28] = {
    [sym__identifier] = STATE(222),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(222),
    [sym__binary_exp] = STATE(222),
    [sym__unary_exp] = STATE(222),
    [sym_positive_exp] = STATE(222),
    [sym_negative_exp] = STATE(222),
    [sym_add_exp] = STATE(222),
    [sym_sub_exp] = STATE(222),
    [sym_mul_exp] = STATE(222),
    [sym_div_exp] = STATE(222),
    [sym_pow_exp] = STATE(222),
    [sym__arith_x] = STATE(222),
    [sym__basic_literal] = STATE(222),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(222),
    [sym_linage_counter] = STATE(222),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [29] = {
    [sym__identifier] = STATE(212),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(212),
    [sym__binary_exp] = STATE(212),
    [sym__unary_exp] = STATE(212),
    [sym_positive_exp] = STATE(212),
    [sym_negative_exp] = STATE(212),
    [sym_add_exp] = STATE(212),
    [sym_sub_exp] = STATE(212),
    [sym_mul_exp] = STATE(212),
    [sym_div_exp] = STATE(212),
    [sym_pow_exp] = STATE(212),
    [sym__arith_x] = STATE(212),
    [sym__basic_literal] = STATE(212),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(212),
    [sym_linage_counter] = STATE(212),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [30] = {
    [sym__identifier] = STATE(258),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(258),
    [sym__binary_exp] = STATE(258),
    [sym__unary_exp] = STATE(258),
    [sym_positive_exp] = STATE(258),
    [sym_negative_exp] = STATE(258),
    [sym_add_exp] = STATE(258),
    [sym_sub_exp] = STATE(258),
    [sym_mul_exp] = STATE(258),
    [sym_div_exp] = STATE(258),
    [sym_pow_exp] = STATE(258),
    [sym__arith_x] = STATE(258),
    [sym__basic_literal] = STATE(258),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(258),
    [sym_linage_counter] = STATE(258),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [31] = {
    [sym__identifier] = STATE(256),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(256),
    [sym__binary_exp] = STATE(256),
    [sym__unary_exp] = STATE(256),
    [sym_positive_exp] = STATE(256),
    [sym_negative_exp] = STATE(256),
    [sym_add_exp] = STATE(256),
    [sym_sub_exp] = STATE(256),
    [sym_mul_exp] = STATE(256),
    [sym_div_exp] = STATE(256),
    [sym_pow_exp] = STATE(256),
    [sym__arith_x] = STATE(256),
    [sym__basic_literal] = STATE(256),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(256),
    [sym_linage_counter] = STATE(256),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [32] = {
    [sym__identifier] = STATE(227),
    [sym_qualified_word] = STATE(149),
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
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(227),
    [sym_linage_counter] = STATE(227),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [33] = {
    [sym__identifier] = STATE(248),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(248),
    [sym__binary_exp] = STATE(248),
    [sym__unary_exp] = STATE(248),
    [sym_positive_exp] = STATE(248),
    [sym_negative_exp] = STATE(248),
    [sym_add_exp] = STATE(248),
    [sym_sub_exp] = STATE(248),
    [sym_mul_exp] = STATE(248),
    [sym_div_exp] = STATE(248),
    [sym_pow_exp] = STATE(248),
    [sym__arith_x] = STATE(248),
    [sym__basic_literal] = STATE(248),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(248),
    [sym_linage_counter] = STATE(248),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [34] = {
    [sym__identifier] = STATE(223),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(223),
    [sym__binary_exp] = STATE(223),
    [sym__unary_exp] = STATE(223),
    [sym_positive_exp] = STATE(223),
    [sym_negative_exp] = STATE(223),
    [sym_add_exp] = STATE(223),
    [sym_sub_exp] = STATE(223),
    [sym_mul_exp] = STATE(223),
    [sym_div_exp] = STATE(223),
    [sym_pow_exp] = STATE(223),
    [sym__arith_x] = STATE(223),
    [sym__basic_literal] = STATE(223),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(223),
    [sym_linage_counter] = STATE(223),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [35] = {
    [sym__identifier] = STATE(255),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(255),
    [sym__binary_exp] = STATE(255),
    [sym__unary_exp] = STATE(255),
    [sym_positive_exp] = STATE(255),
    [sym_negative_exp] = STATE(255),
    [sym_add_exp] = STATE(255),
    [sym_sub_exp] = STATE(255),
    [sym_mul_exp] = STATE(255),
    [sym_div_exp] = STATE(255),
    [sym_pow_exp] = STATE(255),
    [sym__arith_x] = STATE(255),
    [sym__basic_literal] = STATE(255),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(255),
    [sym_linage_counter] = STATE(255),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [36] = {
    [sym__identifier] = STATE(220),
    [sym_qualified_word] = STATE(149),
    [sym__exp] = STATE(220),
    [sym__binary_exp] = STATE(220),
    [sym__unary_exp] = STATE(220),
    [sym_positive_exp] = STATE(220),
    [sym_negative_exp] = STATE(220),
    [sym_add_exp] = STATE(220),
    [sym_sub_exp] = STATE(220),
    [sym_mul_exp] = STATE(220),
    [sym_div_exp] = STATE(220),
    [sym_pow_exp] = STATE(220),
    [sym__arith_x] = STATE(220),
    [sym__basic_literal] = STATE(220),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(220),
    [sym_linage_counter] = STATE(220),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LENGTH_] = STATE(46),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(85),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(101),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [37] = {
    [sym_WORD] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_LPAREN] = ACTIONS(222),
    [sym_external_clause] = ACTIONS(220),
    [sym_global_clause] = ACTIONS(220),
    [sym_usage_clause] = ACTIONS(220),
    [sym_sign_clause] = ACTIONS(220),
    [sym_occurs_clause] = ACTIONS(220),
    [sym_justified_clause] = ACTIONS(220),
    [sym_synchronized_clause] = ACTIONS(220),
    [sym_blank_clause] = ACTIONS(220),
    [sym_based_clause] = ACTIONS(220),
    [sym_value_clause] = ACTIONS(220),
    [sym_renames_clause] = ACTIONS(220),
    [sym_any_length_clause] = ACTIONS(220),
    [sym_error] = ACTIONS(220),
    [sym_at_line_column] = ACTIONS(220),
    [sym_number] = ACTIONS(222),
    [aux_sym_x_string_token1] = ACTIONS(222),
    [aux_sym_x_string_token2] = ACTIONS(222),
    [aux_sym_h_string_token1] = ACTIONS(222),
    [aux_sym_h_string_token2] = ACTIONS(222),
    [aux_sym_n_string_token1] = ACTIONS(222),
    [aux_sym_n_string_token2] = ACTIONS(222),
    [aux_sym_n_string_token3] = ACTIONS(222),
    [aux_sym_n_string_token4] = ACTIONS(222),
    [aux_sym_n_string_token5] = ACTIONS(222),
    [aux_sym_n_string_token6] = ACTIONS(222),
    [aux_sym_n_string_token7] = ACTIONS(222),
    [aux_sym_n_string_token8] = ACTIONS(222),
    [sym__ADDRESS] = ACTIONS(220),
    [sym__ALL] = ACTIONS(220),
    [sym__BACKGROUND_COLOR] = ACTIONS(220),
    [sym__BELL] = ACTIONS(220),
    [sym__BLANK_LINE] = ACTIONS(220),
    [sym__BLANK_SCREEN] = ACTIONS(220),
    [sym__BLINK] = ACTIONS(220),
    [sym__CONCATENATE_FUNC] = ACTIONS(220),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(220),
    [sym__DISPLAY] = ACTIONS(220),
    [sym__END_DISPLAY] = ACTIONS(220),
    [sym__ERASE] = ACTIONS(220),
    [sym__EXCEPTION] = ACTIONS(220),
    [sym__FOREGROUND_COLOR] = ACTIONS(220),
    [sym__FUNCTION_NAME] = ACTIONS(220),
    [sym__HIGHLIGHT] = ACTIONS(220),
    [anon_sym_high_DASHvalue] = ACTIONS(220),
    [anon_sym_high_DASHValue] = ACTIONS(220),
    [anon_sym_high_DASHVALUE] = ACTIONS(220),
    [anon_sym_High_DASHvalue] = ACTIONS(220),
    [anon_sym_High_DASHValue] = ACTIONS(220),
    [anon_sym_High_DASHVALUE] = ACTIONS(220),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(220),
    [anon_sym_HIGH_DASHValue] = ACTIONS(220),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(220),
    [sym__LENGTH] = ACTIONS(220),
    [sym__LINAGE_COUNTER] = ACTIONS(220),
    [sym__LINE] = ACTIONS(220),
    [sym__LINES] = ACTIONS(220),
    [sym__LOCALE_DT_FUNC] = ACTIONS(220),
    [sym__LOWER_CASE_FUNC] = ACTIONS(220),
    [sym__LOWLIGHT] = ACTIONS(220),
    [anon_sym_low_DASHvalue] = ACTIONS(220),
    [anon_sym_low_DASHValue] = ACTIONS(220),
    [anon_sym_low_DASHVALUE] = ACTIONS(220),
    [anon_sym_Low_DASHvalue] = ACTIONS(220),
    [anon_sym_Low_DASHValue] = ACTIONS(220),
    [anon_sym_Low_DASHVALUE] = ACTIONS(220),
    [anon_sym_LOW_DASHvalue] = ACTIONS(220),
    [anon_sym_LOW_DASHValue] = ACTIONS(220),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(220),
    [sym__MOVE] = ACTIONS(220),
    [sym__NOT_EXCEPTION] = ACTIONS(220),
    [sym__NO_ADVANCING] = ACTIONS(220),
    [sym__NUMVALC_FUNC] = ACTIONS(220),
    [sym__OVERLINE] = ACTIONS(220),
    [sym__PIC] = ACTIONS(220),
    [sym__PICTURE] = ACTIONS(220),
    [anon_sym_quote] = ACTIONS(220),
    [anon_sym_QUOTE] = ACTIONS(220),
    [anon_sym_Quote] = ACTIONS(220),
    [sym__REDEFINES] = ACTIONS(220),
    [sym__REVERSE_FUNC] = ACTIONS(220),
    [sym__REVERSE_VIDEO] = ACTIONS(220),
    [sym__SCROLL] = ACTIONS(220),
    [anon_sym_space] = ACTIONS(220),
    [anon_sym_SPACE] = ACTIONS(220),
    [anon_sym_Space] = ACTIONS(220),
    [sym__STOP] = ACTIONS(220),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(220),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(220),
    [anon_sym_null] = ACTIONS(220),
    [anon_sym_Null] = ACTIONS(220),
    [anon_sym_NULL] = ACTIONS(220),
    [sym__TRIM_FUNCTION] = ACTIONS(220),
    [sym__UNDERLINE] = ACTIONS(220),
    [sym__UPON] = ACTIONS(220),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(220),
    [sym__UPON_COMMAND_LINE] = ACTIONS(220),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(220),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(220),
    [sym__UPPER_CASE_FUNC] = ACTIONS(220),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(220),
    [sym__WITH] = ACTIONS(220),
    [anon_sym_zero] = ACTIONS(220),
    [anon_sym_ZERO] = ACTIONS(220),
    [anon_sym_Zero] = ACTIONS(220),
  },
  [38] = {
    [sym_WORD] = ACTIONS(224),
    [anon_sym_DOT] = ACTIONS(226),
    [sym_external_clause] = ACTIONS(224),
    [sym_global_clause] = ACTIONS(224),
    [sym_usage_clause] = ACTIONS(224),
    [sym_sign_clause] = ACTIONS(224),
    [sym_occurs_clause] = ACTIONS(224),
    [sym_justified_clause] = ACTIONS(224),
    [sym_synchronized_clause] = ACTIONS(224),
    [sym_blank_clause] = ACTIONS(224),
    [sym_based_clause] = ACTIONS(224),
    [sym_value_clause] = ACTIONS(224),
    [sym_renames_clause] = ACTIONS(224),
    [sym_any_length_clause] = ACTIONS(224),
    [sym_error] = ACTIONS(224),
    [sym_at_line_column] = ACTIONS(224),
    [sym_number] = ACTIONS(226),
    [aux_sym_x_string_token1] = ACTIONS(226),
    [aux_sym_x_string_token2] = ACTIONS(226),
    [aux_sym_h_string_token1] = ACTIONS(226),
    [aux_sym_h_string_token2] = ACTIONS(226),
    [aux_sym_n_string_token1] = ACTIONS(226),
    [aux_sym_n_string_token2] = ACTIONS(226),
    [aux_sym_n_string_token3] = ACTIONS(226),
    [aux_sym_n_string_token4] = ACTIONS(226),
    [aux_sym_n_string_token5] = ACTIONS(226),
    [aux_sym_n_string_token6] = ACTIONS(226),
    [aux_sym_n_string_token7] = ACTIONS(226),
    [aux_sym_n_string_token8] = ACTIONS(226),
    [sym__ADDRESS] = ACTIONS(224),
    [sym__ALL] = ACTIONS(224),
    [sym__BACKGROUND_COLOR] = ACTIONS(224),
    [sym__BELL] = ACTIONS(224),
    [sym__BLANK_LINE] = ACTIONS(224),
    [sym__BLANK_SCREEN] = ACTIONS(224),
    [sym__BLINK] = ACTIONS(224),
    [sym__CONCATENATE_FUNC] = ACTIONS(224),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(224),
    [sym__DISPLAY] = ACTIONS(224),
    [sym__END_DISPLAY] = ACTIONS(224),
    [sym__ERASE] = ACTIONS(224),
    [sym__EXCEPTION] = ACTIONS(224),
    [sym__FOREGROUND_COLOR] = ACTIONS(224),
    [sym__FUNCTION_NAME] = ACTIONS(224),
    [sym__HIGHLIGHT] = ACTIONS(224),
    [anon_sym_high_DASHvalue] = ACTIONS(224),
    [anon_sym_high_DASHValue] = ACTIONS(224),
    [anon_sym_high_DASHVALUE] = ACTIONS(224),
    [anon_sym_High_DASHvalue] = ACTIONS(224),
    [anon_sym_High_DASHValue] = ACTIONS(224),
    [anon_sym_High_DASHVALUE] = ACTIONS(224),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(224),
    [anon_sym_HIGH_DASHValue] = ACTIONS(224),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(224),
    [sym__LENGTH] = ACTIONS(224),
    [sym__LINAGE_COUNTER] = ACTIONS(224),
    [sym__LINE] = ACTIONS(224),
    [sym__LINES] = ACTIONS(224),
    [sym__LOCALE_DT_FUNC] = ACTIONS(224),
    [sym__LOWER_CASE_FUNC] = ACTIONS(224),
    [sym__LOWLIGHT] = ACTIONS(224),
    [anon_sym_low_DASHvalue] = ACTIONS(224),
    [anon_sym_low_DASHValue] = ACTIONS(224),
    [anon_sym_low_DASHVALUE] = ACTIONS(224),
    [anon_sym_Low_DASHvalue] = ACTIONS(224),
    [anon_sym_Low_DASHValue] = ACTIONS(224),
    [anon_sym_Low_DASHVALUE] = ACTIONS(224),
    [anon_sym_LOW_DASHvalue] = ACTIONS(224),
    [anon_sym_LOW_DASHValue] = ACTIONS(224),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(224),
    [sym__MOVE] = ACTIONS(224),
    [sym__NOT_EXCEPTION] = ACTIONS(224),
    [sym__NO_ADVANCING] = ACTIONS(224),
    [sym__NUMVALC_FUNC] = ACTIONS(224),
    [sym__OVERLINE] = ACTIONS(224),
    [sym__PIC] = ACTIONS(224),
    [sym__PICTURE] = ACTIONS(224),
    [anon_sym_quote] = ACTIONS(224),
    [anon_sym_QUOTE] = ACTIONS(224),
    [anon_sym_Quote] = ACTIONS(224),
    [sym__REDEFINES] = ACTIONS(224),
    [sym__REVERSE_FUNC] = ACTIONS(224),
    [sym__REVERSE_VIDEO] = ACTIONS(224),
    [sym__SCROLL] = ACTIONS(224),
    [anon_sym_space] = ACTIONS(224),
    [anon_sym_SPACE] = ACTIONS(224),
    [anon_sym_Space] = ACTIONS(224),
    [sym__STOP] = ACTIONS(224),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(224),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(224),
    [anon_sym_null] = ACTIONS(224),
    [anon_sym_Null] = ACTIONS(224),
    [anon_sym_NULL] = ACTIONS(224),
    [sym__TRIM_FUNCTION] = ACTIONS(224),
    [sym__UNDERLINE] = ACTIONS(224),
    [sym__UPON] = ACTIONS(224),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(224),
    [sym__UPON_COMMAND_LINE] = ACTIONS(224),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(224),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(224),
    [sym__UPPER_CASE_FUNC] = ACTIONS(224),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(224),
    [sym__WITH] = ACTIONS(224),
    [anon_sym_zero] = ACTIONS(224),
    [anon_sym_ZERO] = ACTIONS(224),
    [anon_sym_Zero] = ACTIONS(224),
  },
  [39] = {
    [sym_WORD] = ACTIONS(214),
    [anon_sym_DOT] = ACTIONS(216),
    [sym_external_clause] = ACTIONS(214),
    [sym_global_clause] = ACTIONS(214),
    [sym_usage_clause] = ACTIONS(214),
    [sym_sign_clause] = ACTIONS(214),
    [sym_occurs_clause] = ACTIONS(214),
    [sym_justified_clause] = ACTIONS(214),
    [sym_synchronized_clause] = ACTIONS(214),
    [sym_blank_clause] = ACTIONS(214),
    [sym_based_clause] = ACTIONS(214),
    [sym_value_clause] = ACTIONS(214),
    [sym_renames_clause] = ACTIONS(214),
    [sym_any_length_clause] = ACTIONS(214),
    [sym_error] = ACTIONS(214),
    [sym_at_line_column] = ACTIONS(214),
    [sym_number] = ACTIONS(216),
    [aux_sym_x_string_token1] = ACTIONS(216),
    [aux_sym_x_string_token2] = ACTIONS(216),
    [aux_sym_h_string_token1] = ACTIONS(216),
    [aux_sym_h_string_token2] = ACTIONS(216),
    [aux_sym_n_string_token1] = ACTIONS(216),
    [aux_sym_n_string_token2] = ACTIONS(216),
    [aux_sym_n_string_token3] = ACTIONS(216),
    [aux_sym_n_string_token4] = ACTIONS(216),
    [aux_sym_n_string_token5] = ACTIONS(216),
    [aux_sym_n_string_token6] = ACTIONS(216),
    [aux_sym_n_string_token7] = ACTIONS(216),
    [aux_sym_n_string_token8] = ACTIONS(216),
    [sym__ADDRESS] = ACTIONS(214),
    [sym__ALL] = ACTIONS(214),
    [sym__BACKGROUND_COLOR] = ACTIONS(214),
    [sym__BELL] = ACTIONS(214),
    [sym__BLANK_LINE] = ACTIONS(214),
    [sym__BLANK_SCREEN] = ACTIONS(214),
    [sym__BLINK] = ACTIONS(214),
    [sym__CONCATENATE_FUNC] = ACTIONS(214),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(214),
    [sym__DISPLAY] = ACTIONS(214),
    [sym__END_DISPLAY] = ACTIONS(214),
    [sym__ERASE] = ACTIONS(214),
    [sym__EXCEPTION] = ACTIONS(214),
    [sym__FOREGROUND_COLOR] = ACTIONS(214),
    [sym__FUNCTION_NAME] = ACTIONS(214),
    [sym__HIGHLIGHT] = ACTIONS(214),
    [anon_sym_high_DASHvalue] = ACTIONS(214),
    [anon_sym_high_DASHValue] = ACTIONS(214),
    [anon_sym_high_DASHVALUE] = ACTIONS(214),
    [anon_sym_High_DASHvalue] = ACTIONS(214),
    [anon_sym_High_DASHValue] = ACTIONS(214),
    [anon_sym_High_DASHVALUE] = ACTIONS(214),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(214),
    [anon_sym_HIGH_DASHValue] = ACTIONS(214),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(214),
    [sym__LENGTH] = ACTIONS(214),
    [sym__LINAGE_COUNTER] = ACTIONS(214),
    [sym__LINE] = ACTIONS(214),
    [sym__LINES] = ACTIONS(214),
    [sym__LOCALE_DT_FUNC] = ACTIONS(214),
    [sym__LOWER_CASE_FUNC] = ACTIONS(214),
    [sym__LOWLIGHT] = ACTIONS(214),
    [anon_sym_low_DASHvalue] = ACTIONS(214),
    [anon_sym_low_DASHValue] = ACTIONS(214),
    [anon_sym_low_DASHVALUE] = ACTIONS(214),
    [anon_sym_Low_DASHvalue] = ACTIONS(214),
    [anon_sym_Low_DASHValue] = ACTIONS(214),
    [anon_sym_Low_DASHVALUE] = ACTIONS(214),
    [anon_sym_LOW_DASHvalue] = ACTIONS(214),
    [anon_sym_LOW_DASHValue] = ACTIONS(214),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(214),
    [sym__MOVE] = ACTIONS(214),
    [sym__NOT_EXCEPTION] = ACTIONS(214),
    [sym__NO_ADVANCING] = ACTIONS(214),
    [sym__NUMVALC_FUNC] = ACTIONS(214),
    [sym__OVERLINE] = ACTIONS(214),
    [sym__PIC] = ACTIONS(214),
    [sym__PICTURE] = ACTIONS(214),
    [anon_sym_quote] = ACTIONS(214),
    [anon_sym_QUOTE] = ACTIONS(214),
    [anon_sym_Quote] = ACTIONS(214),
    [sym__REDEFINES] = ACTIONS(214),
    [sym__REVERSE_FUNC] = ACTIONS(214),
    [sym__REVERSE_VIDEO] = ACTIONS(214),
    [sym__SCROLL] = ACTIONS(214),
    [anon_sym_space] = ACTIONS(214),
    [anon_sym_SPACE] = ACTIONS(214),
    [anon_sym_Space] = ACTIONS(214),
    [sym__STOP] = ACTIONS(214),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(214),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(214),
    [anon_sym_null] = ACTIONS(214),
    [anon_sym_Null] = ACTIONS(214),
    [anon_sym_NULL] = ACTIONS(214),
    [sym__TRIM_FUNCTION] = ACTIONS(214),
    [sym__UNDERLINE] = ACTIONS(214),
    [sym__UPON] = ACTIONS(214),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(214),
    [sym__UPON_COMMAND_LINE] = ACTIONS(214),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(214),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(214),
    [sym__UPPER_CASE_FUNC] = ACTIONS(214),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(214),
    [sym__WITH] = ACTIONS(214),
    [anon_sym_zero] = ACTIONS(214),
    [anon_sym_ZERO] = ACTIONS(214),
    [anon_sym_Zero] = ACTIONS(214),
  },
  [40] = {
    [sym_WORD] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(230),
    [sym_external_clause] = ACTIONS(228),
    [sym_global_clause] = ACTIONS(228),
    [sym_usage_clause] = ACTIONS(228),
    [sym_sign_clause] = ACTIONS(228),
    [sym_occurs_clause] = ACTIONS(228),
    [sym_justified_clause] = ACTIONS(228),
    [sym_synchronized_clause] = ACTIONS(228),
    [sym_blank_clause] = ACTIONS(228),
    [sym_based_clause] = ACTIONS(228),
    [sym_value_clause] = ACTIONS(228),
    [sym_renames_clause] = ACTIONS(228),
    [sym_any_length_clause] = ACTIONS(228),
    [sym_error] = ACTIONS(228),
    [sym_at_line_column] = ACTIONS(228),
    [sym_number] = ACTIONS(230),
    [aux_sym_x_string_token1] = ACTIONS(230),
    [aux_sym_x_string_token2] = ACTIONS(230),
    [aux_sym_h_string_token1] = ACTIONS(230),
    [aux_sym_h_string_token2] = ACTIONS(230),
    [aux_sym_n_string_token1] = ACTIONS(230),
    [aux_sym_n_string_token2] = ACTIONS(230),
    [aux_sym_n_string_token3] = ACTIONS(230),
    [aux_sym_n_string_token4] = ACTIONS(230),
    [aux_sym_n_string_token5] = ACTIONS(230),
    [aux_sym_n_string_token6] = ACTIONS(230),
    [aux_sym_n_string_token7] = ACTIONS(230),
    [aux_sym_n_string_token8] = ACTIONS(230),
    [sym__ADDRESS] = ACTIONS(228),
    [sym__ALL] = ACTIONS(228),
    [sym__BACKGROUND_COLOR] = ACTIONS(228),
    [sym__BELL] = ACTIONS(228),
    [sym__BLANK_LINE] = ACTIONS(228),
    [sym__BLANK_SCREEN] = ACTIONS(228),
    [sym__BLINK] = ACTIONS(228),
    [sym__CONCATENATE_FUNC] = ACTIONS(228),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(228),
    [sym__DISPLAY] = ACTIONS(228),
    [sym__END_DISPLAY] = ACTIONS(228),
    [sym__ERASE] = ACTIONS(228),
    [sym__EXCEPTION] = ACTIONS(228),
    [sym__FOREGROUND_COLOR] = ACTIONS(228),
    [sym__FUNCTION_NAME] = ACTIONS(228),
    [sym__HIGHLIGHT] = ACTIONS(228),
    [anon_sym_high_DASHvalue] = ACTIONS(228),
    [anon_sym_high_DASHValue] = ACTIONS(228),
    [anon_sym_high_DASHVALUE] = ACTIONS(228),
    [anon_sym_High_DASHvalue] = ACTIONS(228),
    [anon_sym_High_DASHValue] = ACTIONS(228),
    [anon_sym_High_DASHVALUE] = ACTIONS(228),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(228),
    [anon_sym_HIGH_DASHValue] = ACTIONS(228),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(228),
    [sym__LENGTH] = ACTIONS(228),
    [sym__LINAGE_COUNTER] = ACTIONS(228),
    [sym__LINE] = ACTIONS(228),
    [sym__LINES] = ACTIONS(228),
    [sym__LOCALE_DT_FUNC] = ACTIONS(228),
    [sym__LOWER_CASE_FUNC] = ACTIONS(228),
    [sym__LOWLIGHT] = ACTIONS(228),
    [anon_sym_low_DASHvalue] = ACTIONS(228),
    [anon_sym_low_DASHValue] = ACTIONS(228),
    [anon_sym_low_DASHVALUE] = ACTIONS(228),
    [anon_sym_Low_DASHvalue] = ACTIONS(228),
    [anon_sym_Low_DASHValue] = ACTIONS(228),
    [anon_sym_Low_DASHVALUE] = ACTIONS(228),
    [anon_sym_LOW_DASHvalue] = ACTIONS(228),
    [anon_sym_LOW_DASHValue] = ACTIONS(228),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(228),
    [sym__MOVE] = ACTIONS(228),
    [sym__NOT_EXCEPTION] = ACTIONS(228),
    [sym__NO_ADVANCING] = ACTIONS(228),
    [sym__NUMVALC_FUNC] = ACTIONS(228),
    [sym__OVERLINE] = ACTIONS(228),
    [sym__PIC] = ACTIONS(228),
    [sym__PICTURE] = ACTIONS(228),
    [anon_sym_quote] = ACTIONS(228),
    [anon_sym_QUOTE] = ACTIONS(228),
    [anon_sym_Quote] = ACTIONS(228),
    [sym__REDEFINES] = ACTIONS(228),
    [sym__REVERSE_FUNC] = ACTIONS(228),
    [sym__REVERSE_VIDEO] = ACTIONS(228),
    [sym__SCROLL] = ACTIONS(228),
    [anon_sym_space] = ACTIONS(228),
    [anon_sym_SPACE] = ACTIONS(228),
    [anon_sym_Space] = ACTIONS(228),
    [sym__STOP] = ACTIONS(228),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(228),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(228),
    [anon_sym_null] = ACTIONS(228),
    [anon_sym_Null] = ACTIONS(228),
    [anon_sym_NULL] = ACTIONS(228),
    [sym__TRIM_FUNCTION] = ACTIONS(228),
    [sym__UNDERLINE] = ACTIONS(228),
    [sym__UPON] = ACTIONS(228),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(228),
    [sym__UPON_COMMAND_LINE] = ACTIONS(228),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(228),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(228),
    [sym__UPPER_CASE_FUNC] = ACTIONS(228),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(228),
    [sym__WITH] = ACTIONS(228),
    [anon_sym_zero] = ACTIONS(228),
    [anon_sym_ZERO] = ACTIONS(228),
    [anon_sym_Zero] = ACTIONS(228),
  },
  [41] = {
    [sym__identifier] = STATE(68),
    [sym_qualified_word] = STATE(9),
    [sym__display_body] = STATE(265),
    [sym__id_or_lit] = STATE(290),
    [sym__x] = STATE(2),
    [sym__basic_literal] = STATE(68),
    [sym__basic_value] = STATE(60),
    [sym__literal] = STATE(68),
    [sym_function_] = STATE(2),
    [sym_linage_counter] = STATE(2),
    [sym__LITERAL] = STATE(60),
    [sym__string] = STATE(60),
    [sym_x_string] = STATE(60),
    [sym_h_string] = STATE(60),
    [sym_n_string] = STATE(60),
    [sym__HIGH_VALUE] = STATE(66),
    [sym__LOW_VALUE] = STATE(62),
    [sym__QUOTE] = STATE(63),
    [sym__SPACE] = STATE(64),
    [sym__TOK_NULL] = STATE(65),
    [sym__ZERO] = STATE(47),
    [sym_ALL_] = STATE(87),
    [sym_CONCATENATE_FUNC_] = STATE(379),
    [sym_CURRENT_DATE_FUNC_] = STATE(72),
    [sym_FUNCTION_NAME_] = STATE(70),
    [sym_HIGH_VALUE_] = STATE(60),
    [sym_LOCALE_DT_FUNC_] = STATE(378),
    [sym_LOWER_CASE_FUNC_] = STATE(362),
    [sym_LOW_VALUE_] = STATE(60),
    [sym_NUMVALC_FUNC_] = STATE(344),
    [sym_QUOTE_] = STATE(60),
    [sym_REVERSE_FUNC_] = STATE(362),
    [sym_SPACE_] = STATE(60),
    [sym_SUBSTITUTE_FUNC_] = STATE(379),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(379),
    [sym_TOK_NULL_] = STATE(60),
    [sym_TRIM_FUNCTION_] = STATE(324),
    [sym_UPPER_CASE_FUNC_] = STATE(362),
    [sym_WHEN_COMPILED_FUNC_] = STATE(72),
    [sym_ZERO_] = STATE(60),
    [aux_sym__display_body_repeat1] = STATE(2),
    [sym_WORD] = ACTIONS(7),
    [sym_number] = ACTIONS(13),
    [aux_sym_x_string_token1] = ACTIONS(15),
    [aux_sym_x_string_token2] = ACTIONS(15),
    [aux_sym_h_string_token1] = ACTIONS(17),
    [aux_sym_h_string_token2] = ACTIONS(17),
    [aux_sym_n_string_token1] = ACTIONS(19),
    [aux_sym_n_string_token2] = ACTIONS(19),
    [aux_sym_n_string_token3] = ACTIONS(19),
    [aux_sym_n_string_token4] = ACTIONS(19),
    [aux_sym_n_string_token5] = ACTIONS(19),
    [aux_sym_n_string_token6] = ACTIONS(19),
    [aux_sym_n_string_token7] = ACTIONS(19),
    [aux_sym_n_string_token8] = ACTIONS(19),
    [sym__ADDRESS] = ACTIONS(21),
    [sym__ALL] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(33),
    [anon_sym_high_DASHvalue] = ACTIONS(35),
    [anon_sym_high_DASHValue] = ACTIONS(35),
    [anon_sym_high_DASHVALUE] = ACTIONS(35),
    [anon_sym_High_DASHvalue] = ACTIONS(35),
    [anon_sym_High_DASHValue] = ACTIONS(35),
    [anon_sym_High_DASHVALUE] = ACTIONS(35),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(35),
    [anon_sym_HIGH_DASHValue] = ACTIONS(35),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(35),
    [sym__LENGTH] = ACTIONS(37),
    [sym__LINAGE_COUNTER] = ACTIONS(39),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(45),
    [anon_sym_low_DASHValue] = ACTIONS(45),
    [anon_sym_low_DASHVALUE] = ACTIONS(45),
    [anon_sym_Low_DASHvalue] = ACTIONS(45),
    [anon_sym_Low_DASHValue] = ACTIONS(45),
    [anon_sym_Low_DASHVALUE] = ACTIONS(45),
    [anon_sym_LOW_DASHvalue] = ACTIONS(45),
    [anon_sym_LOW_DASHValue] = ACTIONS(45),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(45),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(53),
    [anon_sym_QUOTE] = ACTIONS(53),
    [anon_sym_Quote] = ACTIONS(53),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(57),
    [anon_sym_SPACE] = ACTIONS(57),
    [anon_sym_Space] = ACTIONS(57),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(63),
    [anon_sym_Null] = ACTIONS(63),
    [anon_sym_NULL] = ACTIONS(63),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(71),
    [anon_sym_zero] = ACTIONS(75),
    [anon_sym_ZERO] = ACTIONS(75),
    [anon_sym_Zero] = ACTIONS(75),
  },
  [42] = {
    [sym__identifier] = STATE(329),
    [sym_qualified_word] = STATE(149),
    [sym__move_body] = STATE(279),
    [sym__x] = STATE(329),
    [sym__basic_literal] = STATE(329),
    [sym__basic_value] = STATE(161),
    [sym__literal] = STATE(329),
    [sym_function_] = STATE(329),
    [sym_linage_counter] = STATE(329),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_ALL_] = STATE(90),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__ADDRESS] = ACTIONS(232),
    [sym__ALL] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CORRESPONDING] = ACTIONS(234),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(236),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [43] = {
    [sym__identifier] = STATE(350),
    [sym_qualified_word] = STATE(149),
    [sym__x] = STATE(350),
    [sym__basic_literal] = STATE(350),
    [sym__basic_value] = STATE(161),
    [sym__literal] = STATE(350),
    [sym_function_] = STATE(350),
    [sym_linage_counter] = STATE(350),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_ALL_] = STATE(90),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__ADDRESS] = ACTIONS(232),
    [sym__ALL] = ACTIONS(23),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LENGTH] = ACTIONS(236),
    [sym__LINAGE_COUNTER] = ACTIONS(103),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [44] = {
    [sym__identifier] = STATE(359),
    [sym_qualified_word] = STATE(149),
    [sym__basic_literal] = STATE(359),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(359),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [sym__OF] = ACTIONS(238),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [45] = {
    [sym__identifier] = STATE(86),
    [sym_qualified_word] = STATE(9),
    [sym__basic_literal] = STATE(86),
    [sym__basic_value] = STATE(60),
    [sym_function_] = STATE(86),
    [sym__LITERAL] = STATE(60),
    [sym__string] = STATE(60),
    [sym_x_string] = STATE(60),
    [sym_h_string] = STATE(60),
    [sym_n_string] = STATE(60),
    [sym__HIGH_VALUE] = STATE(66),
    [sym__LOW_VALUE] = STATE(62),
    [sym__QUOTE] = STATE(63),
    [sym__SPACE] = STATE(64),
    [sym__TOK_NULL] = STATE(65),
    [sym__ZERO] = STATE(47),
    [sym_CONCATENATE_FUNC_] = STATE(379),
    [sym_CURRENT_DATE_FUNC_] = STATE(72),
    [sym_FUNCTION_NAME_] = STATE(70),
    [sym_HIGH_VALUE_] = STATE(60),
    [sym_LOCALE_DT_FUNC_] = STATE(378),
    [sym_LOWER_CASE_FUNC_] = STATE(362),
    [sym_LOW_VALUE_] = STATE(60),
    [sym_NUMVALC_FUNC_] = STATE(344),
    [sym_QUOTE_] = STATE(60),
    [sym_REVERSE_FUNC_] = STATE(362),
    [sym_SPACE_] = STATE(60),
    [sym_SUBSTITUTE_FUNC_] = STATE(379),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(379),
    [sym_TOK_NULL_] = STATE(60),
    [sym_TRIM_FUNCTION_] = STATE(324),
    [sym_UPPER_CASE_FUNC_] = STATE(362),
    [sym_WHEN_COMPILED_FUNC_] = STATE(72),
    [sym_ZERO_] = STATE(60),
    [sym_WORD] = ACTIONS(7),
    [sym_number] = ACTIONS(13),
    [aux_sym_x_string_token1] = ACTIONS(15),
    [aux_sym_x_string_token2] = ACTIONS(15),
    [aux_sym_h_string_token1] = ACTIONS(17),
    [aux_sym_h_string_token2] = ACTIONS(17),
    [aux_sym_n_string_token1] = ACTIONS(19),
    [aux_sym_n_string_token2] = ACTIONS(19),
    [aux_sym_n_string_token3] = ACTIONS(19),
    [aux_sym_n_string_token4] = ACTIONS(19),
    [aux_sym_n_string_token5] = ACTIONS(19),
    [aux_sym_n_string_token6] = ACTIONS(19),
    [aux_sym_n_string_token7] = ACTIONS(19),
    [aux_sym_n_string_token8] = ACTIONS(19),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(33),
    [anon_sym_high_DASHvalue] = ACTIONS(35),
    [anon_sym_high_DASHValue] = ACTIONS(35),
    [anon_sym_high_DASHVALUE] = ACTIONS(35),
    [anon_sym_High_DASHvalue] = ACTIONS(35),
    [anon_sym_High_DASHValue] = ACTIONS(35),
    [anon_sym_High_DASHVALUE] = ACTIONS(35),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(35),
    [anon_sym_HIGH_DASHValue] = ACTIONS(35),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(45),
    [anon_sym_low_DASHValue] = ACTIONS(45),
    [anon_sym_low_DASHVALUE] = ACTIONS(45),
    [anon_sym_Low_DASHvalue] = ACTIONS(45),
    [anon_sym_Low_DASHValue] = ACTIONS(45),
    [anon_sym_Low_DASHVALUE] = ACTIONS(45),
    [anon_sym_LOW_DASHvalue] = ACTIONS(45),
    [anon_sym_LOW_DASHValue] = ACTIONS(45),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(45),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [sym__OF] = ACTIONS(240),
    [anon_sym_quote] = ACTIONS(53),
    [anon_sym_QUOTE] = ACTIONS(53),
    [anon_sym_Quote] = ACTIONS(53),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(57),
    [anon_sym_SPACE] = ACTIONS(57),
    [anon_sym_Space] = ACTIONS(57),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(63),
    [anon_sym_Null] = ACTIONS(63),
    [anon_sym_NULL] = ACTIONS(63),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(71),
    [anon_sym_zero] = ACTIONS(75),
    [anon_sym_ZERO] = ACTIONS(75),
    [anon_sym_Zero] = ACTIONS(75),
  },
  [46] = {
    [sym__identifier] = STATE(226),
    [sym_qualified_word] = STATE(149),
    [sym__basic_literal] = STATE(226),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(226),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [sym__OF] = ACTIONS(242),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [47] = {
    [sym_WORD] = ACTIONS(244),
    [anon_sym_DOT] = ACTIONS(246),
    [sym_at_line_column] = ACTIONS(244),
    [anon_sym_AMP] = ACTIONS(246),
    [sym_number] = ACTIONS(246),
    [aux_sym_x_string_token1] = ACTIONS(246),
    [aux_sym_x_string_token2] = ACTIONS(246),
    [aux_sym_h_string_token1] = ACTIONS(246),
    [aux_sym_h_string_token2] = ACTIONS(246),
    [aux_sym_n_string_token1] = ACTIONS(246),
    [aux_sym_n_string_token2] = ACTIONS(246),
    [aux_sym_n_string_token3] = ACTIONS(246),
    [aux_sym_n_string_token4] = ACTIONS(246),
    [aux_sym_n_string_token5] = ACTIONS(246),
    [aux_sym_n_string_token6] = ACTIONS(246),
    [aux_sym_n_string_token7] = ACTIONS(246),
    [aux_sym_n_string_token8] = ACTIONS(246),
    [sym__ADDRESS] = ACTIONS(244),
    [sym__ALL] = ACTIONS(244),
    [sym__BACKGROUND_COLOR] = ACTIONS(244),
    [sym__BELL] = ACTIONS(244),
    [sym__BLANK_LINE] = ACTIONS(244),
    [sym__BLANK_SCREEN] = ACTIONS(244),
    [sym__BLINK] = ACTIONS(244),
    [sym__CONCATENATE_FUNC] = ACTIONS(244),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(244),
    [sym__DISPLAY] = ACTIONS(244),
    [sym__END_DISPLAY] = ACTIONS(244),
    [sym__ERASE] = ACTIONS(244),
    [sym__EXCEPTION] = ACTIONS(244),
    [sym__FOREGROUND_COLOR] = ACTIONS(244),
    [sym__FUNCTION_NAME] = ACTIONS(244),
    [sym__HIGHLIGHT] = ACTIONS(244),
    [anon_sym_high_DASHvalue] = ACTIONS(244),
    [anon_sym_high_DASHValue] = ACTIONS(244),
    [anon_sym_high_DASHVALUE] = ACTIONS(244),
    [anon_sym_High_DASHvalue] = ACTIONS(244),
    [anon_sym_High_DASHValue] = ACTIONS(244),
    [anon_sym_High_DASHVALUE] = ACTIONS(244),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(244),
    [anon_sym_HIGH_DASHValue] = ACTIONS(244),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(244),
    [sym__LENGTH] = ACTIONS(244),
    [sym__LINAGE_COUNTER] = ACTIONS(244),
    [sym__LINE] = ACTIONS(244),
    [sym__LINES] = ACTIONS(244),
    [sym__LOCALE_DT_FUNC] = ACTIONS(244),
    [sym__LOWER_CASE_FUNC] = ACTIONS(244),
    [sym__LOWLIGHT] = ACTIONS(244),
    [anon_sym_low_DASHvalue] = ACTIONS(244),
    [anon_sym_low_DASHValue] = ACTIONS(244),
    [anon_sym_low_DASHVALUE] = ACTIONS(244),
    [anon_sym_Low_DASHvalue] = ACTIONS(244),
    [anon_sym_Low_DASHValue] = ACTIONS(244),
    [anon_sym_Low_DASHVALUE] = ACTIONS(244),
    [anon_sym_LOW_DASHvalue] = ACTIONS(244),
    [anon_sym_LOW_DASHValue] = ACTIONS(244),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(244),
    [sym__MOVE] = ACTIONS(244),
    [sym__NOT_EXCEPTION] = ACTIONS(244),
    [sym__NO_ADVANCING] = ACTIONS(244),
    [sym__NUMVALC_FUNC] = ACTIONS(244),
    [sym__OVERLINE] = ACTIONS(244),
    [anon_sym_quote] = ACTIONS(244),
    [anon_sym_QUOTE] = ACTIONS(244),
    [anon_sym_Quote] = ACTIONS(244),
    [sym__REVERSE_FUNC] = ACTIONS(244),
    [sym__REVERSE_VIDEO] = ACTIONS(244),
    [sym__SCROLL] = ACTIONS(244),
    [anon_sym_space] = ACTIONS(244),
    [anon_sym_SPACE] = ACTIONS(244),
    [anon_sym_Space] = ACTIONS(244),
    [sym__STOP] = ACTIONS(244),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(244),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(244),
    [anon_sym_null] = ACTIONS(244),
    [anon_sym_Null] = ACTIONS(244),
    [anon_sym_NULL] = ACTIONS(244),
    [sym__TRIM_FUNCTION] = ACTIONS(244),
    [sym__UNDERLINE] = ACTIONS(244),
    [sym__UPON] = ACTIONS(244),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(244),
    [sym__UPON_COMMAND_LINE] = ACTIONS(244),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(244),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(244),
    [sym__UPPER_CASE_FUNC] = ACTIONS(244),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(244),
    [sym__WITH] = ACTIONS(244),
    [anon_sym_zero] = ACTIONS(244),
    [anon_sym_ZERO] = ACTIONS(244),
    [anon_sym_Zero] = ACTIONS(244),
  },
  [48] = {
    [sym__identifier] = STATE(225),
    [sym_qualified_word] = STATE(149),
    [sym__basic_literal] = STATE(225),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(225),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [49] = {
    [sym__identifier] = STATE(332),
    [sym_qualified_word] = STATE(149),
    [sym__basic_literal] = STATE(332),
    [sym__basic_value] = STATE(161),
    [sym_function_] = STATE(332),
    [sym__LITERAL] = STATE(161),
    [sym__string] = STATE(161),
    [sym_x_string] = STATE(161),
    [sym_h_string] = STATE(161),
    [sym_n_string] = STATE(161),
    [sym__HIGH_VALUE] = STATE(177),
    [sym__LOW_VALUE] = STATE(178),
    [sym__QUOTE] = STATE(183),
    [sym__SPACE] = STATE(176),
    [sym__TOK_NULL] = STATE(174),
    [sym__ZERO] = STATE(172),
    [sym_CONCATENATE_FUNC_] = STATE(389),
    [sym_CURRENT_DATE_FUNC_] = STATE(157),
    [sym_FUNCTION_NAME_] = STATE(158),
    [sym_HIGH_VALUE_] = STATE(161),
    [sym_LOCALE_DT_FUNC_] = STATE(390),
    [sym_LOWER_CASE_FUNC_] = STATE(391),
    [sym_LOW_VALUE_] = STATE(161),
    [sym_NUMVALC_FUNC_] = STATE(392),
    [sym_QUOTE_] = STATE(161),
    [sym_REVERSE_FUNC_] = STATE(391),
    [sym_SPACE_] = STATE(161),
    [sym_SUBSTITUTE_FUNC_] = STATE(389),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(389),
    [sym_TOK_NULL_] = STATE(161),
    [sym_TRIM_FUNCTION_] = STATE(393),
    [sym_UPPER_CASE_FUNC_] = STATE(391),
    [sym_WHEN_COMPILED_FUNC_] = STATE(157),
    [sym_ZERO_] = STATE(161),
    [sym_WORD] = ACTIONS(77),
    [sym_number] = ACTIONS(87),
    [aux_sym_x_string_token1] = ACTIONS(89),
    [aux_sym_x_string_token2] = ACTIONS(89),
    [aux_sym_h_string_token1] = ACTIONS(91),
    [aux_sym_h_string_token2] = ACTIONS(91),
    [aux_sym_n_string_token1] = ACTIONS(93),
    [aux_sym_n_string_token2] = ACTIONS(93),
    [aux_sym_n_string_token3] = ACTIONS(93),
    [aux_sym_n_string_token4] = ACTIONS(93),
    [aux_sym_n_string_token5] = ACTIONS(93),
    [aux_sym_n_string_token6] = ACTIONS(93),
    [aux_sym_n_string_token7] = ACTIONS(93),
    [aux_sym_n_string_token8] = ACTIONS(93),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(95),
    [sym__FUNCTION_NAME] = ACTIONS(97),
    [anon_sym_high_DASHvalue] = ACTIONS(99),
    [anon_sym_high_DASHValue] = ACTIONS(99),
    [anon_sym_high_DASHVALUE] = ACTIONS(99),
    [anon_sym_High_DASHvalue] = ACTIONS(99),
    [anon_sym_High_DASHValue] = ACTIONS(99),
    [anon_sym_High_DASHVALUE] = ACTIONS(99),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(99),
    [anon_sym_HIGH_DASHValue] = ACTIONS(99),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(99),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(105),
    [anon_sym_low_DASHValue] = ACTIONS(105),
    [anon_sym_low_DASHVALUE] = ACTIONS(105),
    [anon_sym_Low_DASHvalue] = ACTIONS(105),
    [anon_sym_Low_DASHValue] = ACTIONS(105),
    [anon_sym_Low_DASHVALUE] = ACTIONS(105),
    [anon_sym_LOW_DASHvalue] = ACTIONS(105),
    [anon_sym_LOW_DASHValue] = ACTIONS(105),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(105),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(107),
    [anon_sym_QUOTE] = ACTIONS(107),
    [anon_sym_Quote] = ACTIONS(107),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(109),
    [anon_sym_SPACE] = ACTIONS(109),
    [anon_sym_Space] = ACTIONS(109),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(111),
    [anon_sym_Null] = ACTIONS(111),
    [anon_sym_NULL] = ACTIONS(111),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(113),
    [anon_sym_zero] = ACTIONS(115),
    [anon_sym_ZERO] = ACTIONS(115),
    [anon_sym_Zero] = ACTIONS(115),
  },
  [50] = {
    [sym__identifier] = STATE(83),
    [sym_qualified_word] = STATE(9),
    [sym__basic_literal] = STATE(83),
    [sym__basic_value] = STATE(60),
    [sym_function_] = STATE(83),
    [sym__LITERAL] = STATE(60),
    [sym__string] = STATE(60),
    [sym_x_string] = STATE(60),
    [sym_h_string] = STATE(60),
    [sym_n_string] = STATE(60),
    [sym__HIGH_VALUE] = STATE(66),
    [sym__LOW_VALUE] = STATE(62),
    [sym__QUOTE] = STATE(63),
    [sym__SPACE] = STATE(64),
    [sym__TOK_NULL] = STATE(65),
    [sym__ZERO] = STATE(47),
    [sym_CONCATENATE_FUNC_] = STATE(379),
    [sym_CURRENT_DATE_FUNC_] = STATE(72),
    [sym_FUNCTION_NAME_] = STATE(70),
    [sym_HIGH_VALUE_] = STATE(60),
    [sym_LOCALE_DT_FUNC_] = STATE(378),
    [sym_LOWER_CASE_FUNC_] = STATE(362),
    [sym_LOW_VALUE_] = STATE(60),
    [sym_NUMVALC_FUNC_] = STATE(344),
    [sym_QUOTE_] = STATE(60),
    [sym_REVERSE_FUNC_] = STATE(362),
    [sym_SPACE_] = STATE(60),
    [sym_SUBSTITUTE_FUNC_] = STATE(379),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(379),
    [sym_TOK_NULL_] = STATE(60),
    [sym_TRIM_FUNCTION_] = STATE(324),
    [sym_UPPER_CASE_FUNC_] = STATE(362),
    [sym_WHEN_COMPILED_FUNC_] = STATE(72),
    [sym_ZERO_] = STATE(60),
    [sym_WORD] = ACTIONS(7),
    [sym_number] = ACTIONS(13),
    [aux_sym_x_string_token1] = ACTIONS(15),
    [aux_sym_x_string_token2] = ACTIONS(15),
    [aux_sym_h_string_token1] = ACTIONS(17),
    [aux_sym_h_string_token2] = ACTIONS(17),
    [aux_sym_n_string_token1] = ACTIONS(19),
    [aux_sym_n_string_token2] = ACTIONS(19),
    [aux_sym_n_string_token3] = ACTIONS(19),
    [aux_sym_n_string_token4] = ACTIONS(19),
    [aux_sym_n_string_token5] = ACTIONS(19),
    [aux_sym_n_string_token6] = ACTIONS(19),
    [aux_sym_n_string_token7] = ACTIONS(19),
    [aux_sym_n_string_token8] = ACTIONS(19),
    [sym__CONCATENATE_FUNC] = ACTIONS(25),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(27),
    [sym__FUNCTION_NAME] = ACTIONS(33),
    [anon_sym_high_DASHvalue] = ACTIONS(35),
    [anon_sym_high_DASHValue] = ACTIONS(35),
    [anon_sym_high_DASHVALUE] = ACTIONS(35),
    [anon_sym_High_DASHvalue] = ACTIONS(35),
    [anon_sym_High_DASHValue] = ACTIONS(35),
    [anon_sym_High_DASHVALUE] = ACTIONS(35),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(35),
    [anon_sym_HIGH_DASHValue] = ACTIONS(35),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(35),
    [sym__LOCALE_DT_FUNC] = ACTIONS(41),
    [sym__LOWER_CASE_FUNC] = ACTIONS(43),
    [anon_sym_low_DASHvalue] = ACTIONS(45),
    [anon_sym_low_DASHValue] = ACTIONS(45),
    [anon_sym_low_DASHVALUE] = ACTIONS(45),
    [anon_sym_Low_DASHvalue] = ACTIONS(45),
    [anon_sym_Low_DASHValue] = ACTIONS(45),
    [anon_sym_Low_DASHVALUE] = ACTIONS(45),
    [anon_sym_LOW_DASHvalue] = ACTIONS(45),
    [anon_sym_LOW_DASHValue] = ACTIONS(45),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(45),
    [sym__NUMVALC_FUNC] = ACTIONS(51),
    [anon_sym_quote] = ACTIONS(53),
    [anon_sym_QUOTE] = ACTIONS(53),
    [anon_sym_Quote] = ACTIONS(53),
    [sym__REVERSE_FUNC] = ACTIONS(55),
    [anon_sym_space] = ACTIONS(57),
    [anon_sym_SPACE] = ACTIONS(57),
    [anon_sym_Space] = ACTIONS(57),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(59),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(61),
    [anon_sym_null] = ACTIONS(63),
    [anon_sym_Null] = ACTIONS(63),
    [anon_sym_NULL] = ACTIONS(63),
    [sym__TRIM_FUNCTION] = ACTIONS(65),
    [sym__UPPER_CASE_FUNC] = ACTIONS(69),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(71),
    [anon_sym_zero] = ACTIONS(75),
    [anon_sym_ZERO] = ACTIONS(75),
    [anon_sym_Zero] = ACTIONS(75),
  },
  [51] = {
    [sym__in_of] = STATE(371),
    [aux_sym_qualified_word_repeat1] = STATE(53),
    [sym_WORD] = ACTIONS(248),
    [anon_sym_DOT] = ACTIONS(250),
    [anon_sym_LPAREN] = ACTIONS(250),
    [sym_at_line_column] = ACTIONS(248),
    [sym_number] = ACTIONS(250),
    [aux_sym_x_string_token1] = ACTIONS(250),
    [aux_sym_x_string_token2] = ACTIONS(250),
    [aux_sym_h_string_token1] = ACTIONS(250),
    [aux_sym_h_string_token2] = ACTIONS(250),
    [aux_sym_n_string_token1] = ACTIONS(250),
    [aux_sym_n_string_token2] = ACTIONS(250),
    [aux_sym_n_string_token3] = ACTIONS(250),
    [aux_sym_n_string_token4] = ACTIONS(250),
    [aux_sym_n_string_token5] = ACTIONS(250),
    [aux_sym_n_string_token6] = ACTIONS(250),
    [aux_sym_n_string_token7] = ACTIONS(250),
    [aux_sym_n_string_token8] = ACTIONS(250),
    [sym__ADDRESS] = ACTIONS(248),
    [sym__ALL] = ACTIONS(248),
    [sym__CONCATENATE_FUNC] = ACTIONS(248),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(248),
    [sym__DISPLAY] = ACTIONS(248),
    [sym__END_DISPLAY] = ACTIONS(248),
    [sym__EXCEPTION] = ACTIONS(248),
    [sym__FUNCTION_NAME] = ACTIONS(248),
    [anon_sym_high_DASHvalue] = ACTIONS(248),
    [anon_sym_high_DASHValue] = ACTIONS(248),
    [anon_sym_high_DASHVALUE] = ACTIONS(248),
    [anon_sym_High_DASHvalue] = ACTIONS(248),
    [anon_sym_High_DASHValue] = ACTIONS(248),
    [anon_sym_High_DASHVALUE] = ACTIONS(248),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(248),
    [anon_sym_HIGH_DASHValue] = ACTIONS(248),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(248),
    [sym__IN] = ACTIONS(252),
    [sym__LENGTH] = ACTIONS(248),
    [sym__LINAGE_COUNTER] = ACTIONS(248),
    [sym__LOCALE_DT_FUNC] = ACTIONS(248),
    [sym__LOWER_CASE_FUNC] = ACTIONS(248),
    [anon_sym_low_DASHvalue] = ACTIONS(248),
    [anon_sym_low_DASHValue] = ACTIONS(248),
    [anon_sym_low_DASHVALUE] = ACTIONS(248),
    [anon_sym_Low_DASHvalue] = ACTIONS(248),
    [anon_sym_Low_DASHValue] = ACTIONS(248),
    [anon_sym_Low_DASHVALUE] = ACTIONS(248),
    [anon_sym_LOW_DASHvalue] = ACTIONS(248),
    [anon_sym_LOW_DASHValue] = ACTIONS(248),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(248),
    [sym__MOVE] = ACTIONS(248),
    [sym__NOT_EXCEPTION] = ACTIONS(248),
    [sym__NO_ADVANCING] = ACTIONS(248),
    [sym__NUMVALC_FUNC] = ACTIONS(248),
    [sym__OF] = ACTIONS(252),
    [anon_sym_quote] = ACTIONS(248),
    [anon_sym_QUOTE] = ACTIONS(248),
    [anon_sym_Quote] = ACTIONS(248),
    [sym__REVERSE_FUNC] = ACTIONS(248),
    [anon_sym_space] = ACTIONS(248),
    [anon_sym_SPACE] = ACTIONS(248),
    [anon_sym_Space] = ACTIONS(248),
    [sym__STOP] = ACTIONS(248),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(248),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(248),
    [anon_sym_null] = ACTIONS(248),
    [anon_sym_Null] = ACTIONS(248),
    [anon_sym_NULL] = ACTIONS(248),
    [sym__TRIM_FUNCTION] = ACTIONS(248),
    [sym__UPON] = ACTIONS(248),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(248),
    [sym__UPON_COMMAND_LINE] = ACTIONS(248),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(248),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(248),
    [sym__UPPER_CASE_FUNC] = ACTIONS(248),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(248),
    [sym__WITH] = ACTIONS(248),
    [anon_sym_zero] = ACTIONS(248),
    [anon_sym_ZERO] = ACTIONS(248),
    [anon_sym_Zero] = ACTIONS(248),
  },
  [52] = {
    [sym__in_of] = STATE(371),
    [aux_sym_qualified_word_repeat1] = STATE(51),
    [sym_WORD] = ACTIONS(254),
    [anon_sym_DOT] = ACTIONS(256),
    [anon_sym_LPAREN] = ACTIONS(256),
    [sym_at_line_column] = ACTIONS(254),
    [sym_number] = ACTIONS(256),
    [aux_sym_x_string_token1] = ACTIONS(256),
    [aux_sym_x_string_token2] = ACTIONS(256),
    [aux_sym_h_string_token1] = ACTIONS(256),
    [aux_sym_h_string_token2] = ACTIONS(256),
    [aux_sym_n_string_token1] = ACTIONS(256),
    [aux_sym_n_string_token2] = ACTIONS(256),
    [aux_sym_n_string_token3] = ACTIONS(256),
    [aux_sym_n_string_token4] = ACTIONS(256),
    [aux_sym_n_string_token5] = ACTIONS(256),
    [aux_sym_n_string_token6] = ACTIONS(256),
    [aux_sym_n_string_token7] = ACTIONS(256),
    [aux_sym_n_string_token8] = ACTIONS(256),
    [sym__ADDRESS] = ACTIONS(254),
    [sym__ALL] = ACTIONS(254),
    [sym__CONCATENATE_FUNC] = ACTIONS(254),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(254),
    [sym__DISPLAY] = ACTIONS(254),
    [sym__END_DISPLAY] = ACTIONS(254),
    [sym__EXCEPTION] = ACTIONS(254),
    [sym__FUNCTION_NAME] = ACTIONS(254),
    [anon_sym_high_DASHvalue] = ACTIONS(254),
    [anon_sym_high_DASHValue] = ACTIONS(254),
    [anon_sym_high_DASHVALUE] = ACTIONS(254),
    [anon_sym_High_DASHvalue] = ACTIONS(254),
    [anon_sym_High_DASHValue] = ACTIONS(254),
    [anon_sym_High_DASHVALUE] = ACTIONS(254),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(254),
    [anon_sym_HIGH_DASHValue] = ACTIONS(254),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(254),
    [sym__IN] = ACTIONS(252),
    [sym__LENGTH] = ACTIONS(254),
    [sym__LINAGE_COUNTER] = ACTIONS(254),
    [sym__LOCALE_DT_FUNC] = ACTIONS(254),
    [sym__LOWER_CASE_FUNC] = ACTIONS(254),
    [anon_sym_low_DASHvalue] = ACTIONS(254),
    [anon_sym_low_DASHValue] = ACTIONS(254),
    [anon_sym_low_DASHVALUE] = ACTIONS(254),
    [anon_sym_Low_DASHvalue] = ACTIONS(254),
    [anon_sym_Low_DASHValue] = ACTIONS(254),
    [anon_sym_Low_DASHVALUE] = ACTIONS(254),
    [anon_sym_LOW_DASHvalue] = ACTIONS(254),
    [anon_sym_LOW_DASHValue] = ACTIONS(254),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(254),
    [sym__MOVE] = ACTIONS(254),
    [sym__NOT_EXCEPTION] = ACTIONS(254),
    [sym__NO_ADVANCING] = ACTIONS(254),
    [sym__NUMVALC_FUNC] = ACTIONS(254),
    [sym__OF] = ACTIONS(252),
    [anon_sym_quote] = ACTIONS(254),
    [anon_sym_QUOTE] = ACTIONS(254),
    [anon_sym_Quote] = ACTIONS(254),
    [sym__REVERSE_FUNC] = ACTIONS(254),
    [anon_sym_space] = ACTIONS(254),
    [anon_sym_SPACE] = ACTIONS(254),
    [anon_sym_Space] = ACTIONS(254),
    [sym__STOP] = ACTIONS(254),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(254),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(254),
    [anon_sym_null] = ACTIONS(254),
    [anon_sym_Null] = ACTIONS(254),
    [anon_sym_NULL] = ACTIONS(254),
    [sym__TRIM_FUNCTION] = ACTIONS(254),
    [sym__UPON] = ACTIONS(254),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(254),
    [sym__UPON_COMMAND_LINE] = ACTIONS(254),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(254),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(254),
    [sym__UPPER_CASE_FUNC] = ACTIONS(254),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(254),
    [sym__WITH] = ACTIONS(254),
    [anon_sym_zero] = ACTIONS(254),
    [anon_sym_ZERO] = ACTIONS(254),
    [anon_sym_Zero] = ACTIONS(254),
  },
  [53] = {
    [sym__in_of] = STATE(371),
    [aux_sym_qualified_word_repeat1] = STATE(53),
    [sym_WORD] = ACTIONS(258),
    [anon_sym_DOT] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(260),
    [sym_at_line_column] = ACTIONS(258),
    [sym_number] = ACTIONS(260),
    [aux_sym_x_string_token1] = ACTIONS(260),
    [aux_sym_x_string_token2] = ACTIONS(260),
    [aux_sym_h_string_token1] = ACTIONS(260),
    [aux_sym_h_string_token2] = ACTIONS(260),
    [aux_sym_n_string_token1] = ACTIONS(260),
    [aux_sym_n_string_token2] = ACTIONS(260),
    [aux_sym_n_string_token3] = ACTIONS(260),
    [aux_sym_n_string_token4] = ACTIONS(260),
    [aux_sym_n_string_token5] = ACTIONS(260),
    [aux_sym_n_string_token6] = ACTIONS(260),
    [aux_sym_n_string_token7] = ACTIONS(260),
    [aux_sym_n_string_token8] = ACTIONS(260),
    [sym__ADDRESS] = ACTIONS(258),
    [sym__ALL] = ACTIONS(258),
    [sym__CONCATENATE_FUNC] = ACTIONS(258),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(258),
    [sym__DISPLAY] = ACTIONS(258),
    [sym__END_DISPLAY] = ACTIONS(258),
    [sym__EXCEPTION] = ACTIONS(258),
    [sym__FUNCTION_NAME] = ACTIONS(258),
    [anon_sym_high_DASHvalue] = ACTIONS(258),
    [anon_sym_high_DASHValue] = ACTIONS(258),
    [anon_sym_high_DASHVALUE] = ACTIONS(258),
    [anon_sym_High_DASHvalue] = ACTIONS(258),
    [anon_sym_High_DASHValue] = ACTIONS(258),
    [anon_sym_High_DASHVALUE] = ACTIONS(258),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(258),
    [anon_sym_HIGH_DASHValue] = ACTIONS(258),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(258),
    [sym__IN] = ACTIONS(262),
    [sym__LENGTH] = ACTIONS(258),
    [sym__LINAGE_COUNTER] = ACTIONS(258),
    [sym__LOCALE_DT_FUNC] = ACTIONS(258),
    [sym__LOWER_CASE_FUNC] = ACTIONS(258),
    [anon_sym_low_DASHvalue] = ACTIONS(258),
    [anon_sym_low_DASHValue] = ACTIONS(258),
    [anon_sym_low_DASHVALUE] = ACTIONS(258),
    [anon_sym_Low_DASHvalue] = ACTIONS(258),
    [anon_sym_Low_DASHValue] = ACTIONS(258),
    [anon_sym_Low_DASHVALUE] = ACTIONS(258),
    [anon_sym_LOW_DASHvalue] = ACTIONS(258),
    [anon_sym_LOW_DASHValue] = ACTIONS(258),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(258),
    [sym__MOVE] = ACTIONS(258),
    [sym__NOT_EXCEPTION] = ACTIONS(258),
    [sym__NO_ADVANCING] = ACTIONS(258),
    [sym__NUMVALC_FUNC] = ACTIONS(258),
    [sym__OF] = ACTIONS(262),
    [anon_sym_quote] = ACTIONS(258),
    [anon_sym_QUOTE] = ACTIONS(258),
    [anon_sym_Quote] = ACTIONS(258),
    [sym__REVERSE_FUNC] = ACTIONS(258),
    [anon_sym_space] = ACTIONS(258),
    [anon_sym_SPACE] = ACTIONS(258),
    [anon_sym_Space] = ACTIONS(258),
    [sym__STOP] = ACTIONS(258),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(258),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(258),
    [anon_sym_null] = ACTIONS(258),
    [anon_sym_Null] = ACTIONS(258),
    [anon_sym_NULL] = ACTIONS(258),
    [sym__TRIM_FUNCTION] = ACTIONS(258),
    [sym__UPON] = ACTIONS(258),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(258),
    [sym__UPON_COMMAND_LINE] = ACTIONS(258),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(258),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(258),
    [sym__UPPER_CASE_FUNC] = ACTIONS(258),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(258),
    [sym__WITH] = ACTIONS(258),
    [anon_sym_zero] = ACTIONS(258),
    [anon_sym_ZERO] = ACTIONS(258),
    [anon_sym_Zero] = ACTIONS(258),
  },
  [54] = {
    [sym_WORD] = ACTIONS(258),
    [anon_sym_DOT] = ACTIONS(260),
    [anon_sym_LPAREN] = ACTIONS(260),
    [sym_at_line_column] = ACTIONS(258),
    [sym_number] = ACTIONS(260),
    [aux_sym_x_string_token1] = ACTIONS(260),
    [aux_sym_x_string_token2] = ACTIONS(260),
    [aux_sym_h_string_token1] = ACTIONS(260),
    [aux_sym_h_string_token2] = ACTIONS(260),
    [aux_sym_n_string_token1] = ACTIONS(260),
    [aux_sym_n_string_token2] = ACTIONS(260),
    [aux_sym_n_string_token3] = ACTIONS(260),
    [aux_sym_n_string_token4] = ACTIONS(260),
    [aux_sym_n_string_token5] = ACTIONS(260),
    [aux_sym_n_string_token6] = ACTIONS(260),
    [aux_sym_n_string_token7] = ACTIONS(260),
    [aux_sym_n_string_token8] = ACTIONS(260),
    [sym__ADDRESS] = ACTIONS(258),
    [sym__ALL] = ACTIONS(258),
    [sym__CONCATENATE_FUNC] = ACTIONS(258),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(258),
    [sym__DISPLAY] = ACTIONS(258),
    [sym__END_DISPLAY] = ACTIONS(258),
    [sym__EXCEPTION] = ACTIONS(258),
    [sym__FUNCTION_NAME] = ACTIONS(258),
    [anon_sym_high_DASHvalue] = ACTIONS(258),
    [anon_sym_high_DASHValue] = ACTIONS(258),
    [anon_sym_high_DASHVALUE] = ACTIONS(258),
    [anon_sym_High_DASHvalue] = ACTIONS(258),
    [anon_sym_High_DASHValue] = ACTIONS(258),
    [anon_sym_High_DASHVALUE] = ACTIONS(258),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(258),
    [anon_sym_HIGH_DASHValue] = ACTIONS(258),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(258),
    [sym__IN] = ACTIONS(258),
    [sym__LENGTH] = ACTIONS(258),
    [sym__LINAGE_COUNTER] = ACTIONS(258),
    [sym__LOCALE_DT_FUNC] = ACTIONS(258),
    [sym__LOWER_CASE_FUNC] = ACTIONS(258),
    [anon_sym_low_DASHvalue] = ACTIONS(258),
    [anon_sym_low_DASHValue] = ACTIONS(258),
    [anon_sym_low_DASHVALUE] = ACTIONS(258),
    [anon_sym_Low_DASHvalue] = ACTIONS(258),
    [anon_sym_Low_DASHValue] = ACTIONS(258),
    [anon_sym_Low_DASHVALUE] = ACTIONS(258),
    [anon_sym_LOW_DASHvalue] = ACTIONS(258),
    [anon_sym_LOW_DASHValue] = ACTIONS(258),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(258),
    [sym__MOVE] = ACTIONS(258),
    [sym__NOT_EXCEPTION] = ACTIONS(258),
    [sym__NO_ADVANCING] = ACTIONS(258),
    [sym__NUMVALC_FUNC] = ACTIONS(258),
    [sym__OF] = ACTIONS(258),
    [anon_sym_quote] = ACTIONS(258),
    [anon_sym_QUOTE] = ACTIONS(258),
    [anon_sym_Quote] = ACTIONS(258),
    [sym__REVERSE_FUNC] = ACTIONS(258),
    [anon_sym_space] = ACTIONS(258),
    [anon_sym_SPACE] = ACTIONS(258),
    [anon_sym_Space] = ACTIONS(258),
    [sym__STOP] = ACTIONS(258),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(258),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(258),
    [anon_sym_null] = ACTIONS(258),
    [anon_sym_Null] = ACTIONS(258),
    [anon_sym_NULL] = ACTIONS(258),
    [sym__TRIM_FUNCTION] = ACTIONS(258),
    [sym__UPON] = ACTIONS(258),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(258),
    [sym__UPON_COMMAND_LINE] = ACTIONS(258),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(258),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(258),
    [sym__UPPER_CASE_FUNC] = ACTIONS(258),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(258),
    [sym__WITH] = ACTIONS(258),
    [anon_sym_zero] = ACTIONS(258),
    [anon_sym_ZERO] = ACTIONS(258),
    [anon_sym_Zero] = ACTIONS(258),
  },
  [55] = {
    [aux_sym__basic_literal_repeat1] = STATE(55),
    [sym_WORD] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(267),
    [sym_at_line_column] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(269),
    [sym_number] = ACTIONS(267),
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
    [sym_WORD] = ACTIONS(272),
    [anon_sym_DOT] = ACTIONS(274),
    [sym_at_line_column] = ACTIONS(272),
    [anon_sym_AMP] = ACTIONS(274),
    [sym_number] = ACTIONS(274),
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
    [sym__AS] = ACTIONS(272),
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
  [57] = {
    [sym_WORD] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(278),
    [sym_at_line_column] = ACTIONS(276),
    [anon_sym_AMP] = ACTIONS(278),
    [sym_number] = ACTIONS(278),
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
  [58] = {
    [sym_WORD] = ACTIONS(280),
    [anon_sym_DOT] = ACTIONS(282),
    [sym_at_line_column] = ACTIONS(280),
    [anon_sym_AMP] = ACTIONS(282),
    [sym_number] = ACTIONS(282),
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
    [sym__AS] = ACTIONS(280),
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
  [59] = {
    [aux_sym__basic_literal_repeat1] = STATE(55),
    [sym_WORD] = ACTIONS(284),
    [anon_sym_DOT] = ACTIONS(286),
    [sym_at_line_column] = ACTIONS(284),
    [anon_sym_AMP] = ACTIONS(288),
    [sym_number] = ACTIONS(286),
    [aux_sym_x_string_token1] = ACTIONS(286),
    [aux_sym_x_string_token2] = ACTIONS(286),
    [aux_sym_h_string_token1] = ACTIONS(286),
    [aux_sym_h_string_token2] = ACTIONS(286),
    [aux_sym_n_string_token1] = ACTIONS(286),
    [aux_sym_n_string_token2] = ACTIONS(286),
    [aux_sym_n_string_token3] = ACTIONS(286),
    [aux_sym_n_string_token4] = ACTIONS(286),
    [aux_sym_n_string_token5] = ACTIONS(286),
    [aux_sym_n_string_token6] = ACTIONS(286),
    [aux_sym_n_string_token7] = ACTIONS(286),
    [aux_sym_n_string_token8] = ACTIONS(286),
    [sym__ADDRESS] = ACTIONS(284),
    [sym__ALL] = ACTIONS(284),
    [sym__CONCATENATE_FUNC] = ACTIONS(284),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(284),
    [sym__DISPLAY] = ACTIONS(284),
    [sym__END_DISPLAY] = ACTIONS(284),
    [sym__EXCEPTION] = ACTIONS(284),
    [sym__FUNCTION_NAME] = ACTIONS(284),
    [anon_sym_high_DASHvalue] = ACTIONS(284),
    [anon_sym_high_DASHValue] = ACTIONS(284),
    [anon_sym_high_DASHVALUE] = ACTIONS(284),
    [anon_sym_High_DASHvalue] = ACTIONS(284),
    [anon_sym_High_DASHValue] = ACTIONS(284),
    [anon_sym_High_DASHVALUE] = ACTIONS(284),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(284),
    [anon_sym_HIGH_DASHValue] = ACTIONS(284),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(284),
    [sym__LENGTH] = ACTIONS(284),
    [sym__LINAGE_COUNTER] = ACTIONS(284),
    [sym__LOCALE_DT_FUNC] = ACTIONS(284),
    [sym__LOWER_CASE_FUNC] = ACTIONS(284),
    [anon_sym_low_DASHvalue] = ACTIONS(284),
    [anon_sym_low_DASHValue] = ACTIONS(284),
    [anon_sym_low_DASHVALUE] = ACTIONS(284),
    [anon_sym_Low_DASHvalue] = ACTIONS(284),
    [anon_sym_Low_DASHValue] = ACTIONS(284),
    [anon_sym_Low_DASHVALUE] = ACTIONS(284),
    [anon_sym_LOW_DASHvalue] = ACTIONS(284),
    [anon_sym_LOW_DASHValue] = ACTIONS(284),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(284),
    [sym__MOVE] = ACTIONS(284),
    [sym__NOT_EXCEPTION] = ACTIONS(284),
    [sym__NO_ADVANCING] = ACTIONS(284),
    [sym__NUMVALC_FUNC] = ACTIONS(284),
    [anon_sym_quote] = ACTIONS(284),
    [anon_sym_QUOTE] = ACTIONS(284),
    [anon_sym_Quote] = ACTIONS(284),
    [sym__REVERSE_FUNC] = ACTIONS(284),
    [anon_sym_space] = ACTIONS(284),
    [anon_sym_SPACE] = ACTIONS(284),
    [anon_sym_Space] = ACTIONS(284),
    [sym__STOP] = ACTIONS(284),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(284),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(284),
    [anon_sym_null] = ACTIONS(284),
    [anon_sym_Null] = ACTIONS(284),
    [anon_sym_NULL] = ACTIONS(284),
    [sym__TRIM_FUNCTION] = ACTIONS(284),
    [sym__UPON] = ACTIONS(284),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(284),
    [sym__UPON_COMMAND_LINE] = ACTIONS(284),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(284),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(284),
    [sym__UPPER_CASE_FUNC] = ACTIONS(284),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(284),
    [sym__WITH] = ACTIONS(284),
    [anon_sym_zero] = ACTIONS(284),
    [anon_sym_ZERO] = ACTIONS(284),
    [anon_sym_Zero] = ACTIONS(284),
  },
  [60] = {
    [aux_sym__basic_literal_repeat1] = STATE(59),
    [sym_WORD] = ACTIONS(290),
    [anon_sym_DOT] = ACTIONS(292),
    [sym_at_line_column] = ACTIONS(290),
    [anon_sym_AMP] = ACTIONS(288),
    [sym_number] = ACTIONS(292),
    [aux_sym_x_string_token1] = ACTIONS(292),
    [aux_sym_x_string_token2] = ACTIONS(292),
    [aux_sym_h_string_token1] = ACTIONS(292),
    [aux_sym_h_string_token2] = ACTIONS(292),
    [aux_sym_n_string_token1] = ACTIONS(292),
    [aux_sym_n_string_token2] = ACTIONS(292),
    [aux_sym_n_string_token3] = ACTIONS(292),
    [aux_sym_n_string_token4] = ACTIONS(292),
    [aux_sym_n_string_token5] = ACTIONS(292),
    [aux_sym_n_string_token6] = ACTIONS(292),
    [aux_sym_n_string_token7] = ACTIONS(292),
    [aux_sym_n_string_token8] = ACTIONS(292),
    [sym__ADDRESS] = ACTIONS(290),
    [sym__ALL] = ACTIONS(290),
    [sym__CONCATENATE_FUNC] = ACTIONS(290),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(290),
    [sym__DISPLAY] = ACTIONS(290),
    [sym__END_DISPLAY] = ACTIONS(290),
    [sym__EXCEPTION] = ACTIONS(290),
    [sym__FUNCTION_NAME] = ACTIONS(290),
    [anon_sym_high_DASHvalue] = ACTIONS(290),
    [anon_sym_high_DASHValue] = ACTIONS(290),
    [anon_sym_high_DASHVALUE] = ACTIONS(290),
    [anon_sym_High_DASHvalue] = ACTIONS(290),
    [anon_sym_High_DASHValue] = ACTIONS(290),
    [anon_sym_High_DASHVALUE] = ACTIONS(290),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(290),
    [anon_sym_HIGH_DASHValue] = ACTIONS(290),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(290),
    [sym__LENGTH] = ACTIONS(290),
    [sym__LINAGE_COUNTER] = ACTIONS(290),
    [sym__LOCALE_DT_FUNC] = ACTIONS(290),
    [sym__LOWER_CASE_FUNC] = ACTIONS(290),
    [anon_sym_low_DASHvalue] = ACTIONS(290),
    [anon_sym_low_DASHValue] = ACTIONS(290),
    [anon_sym_low_DASHVALUE] = ACTIONS(290),
    [anon_sym_Low_DASHvalue] = ACTIONS(290),
    [anon_sym_Low_DASHValue] = ACTIONS(290),
    [anon_sym_Low_DASHVALUE] = ACTIONS(290),
    [anon_sym_LOW_DASHvalue] = ACTIONS(290),
    [anon_sym_LOW_DASHValue] = ACTIONS(290),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(290),
    [sym__MOVE] = ACTIONS(290),
    [sym__NOT_EXCEPTION] = ACTIONS(290),
    [sym__NO_ADVANCING] = ACTIONS(290),
    [sym__NUMVALC_FUNC] = ACTIONS(290),
    [anon_sym_quote] = ACTIONS(290),
    [anon_sym_QUOTE] = ACTIONS(290),
    [anon_sym_Quote] = ACTIONS(290),
    [sym__REVERSE_FUNC] = ACTIONS(290),
    [anon_sym_space] = ACTIONS(290),
    [anon_sym_SPACE] = ACTIONS(290),
    [anon_sym_Space] = ACTIONS(290),
    [sym__STOP] = ACTIONS(290),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(290),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(290),
    [anon_sym_null] = ACTIONS(290),
    [anon_sym_Null] = ACTIONS(290),
    [anon_sym_NULL] = ACTIONS(290),
    [sym__TRIM_FUNCTION] = ACTIONS(290),
    [sym__UPON] = ACTIONS(290),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(290),
    [sym__UPON_COMMAND_LINE] = ACTIONS(290),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(290),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(290),
    [sym__UPPER_CASE_FUNC] = ACTIONS(290),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(290),
    [sym__WITH] = ACTIONS(290),
    [anon_sym_zero] = ACTIONS(290),
    [anon_sym_ZERO] = ACTIONS(290),
    [anon_sym_Zero] = ACTIONS(290),
  },
  [61] = {
    [sym_WORD] = ACTIONS(265),
    [anon_sym_DOT] = ACTIONS(267),
    [sym_at_line_column] = ACTIONS(265),
    [anon_sym_AMP] = ACTIONS(267),
    [sym_number] = ACTIONS(267),
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
  [62] = {
    [sym_WORD] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(296),
    [sym_at_line_column] = ACTIONS(294),
    [anon_sym_AMP] = ACTIONS(296),
    [sym_number] = ACTIONS(296),
    [aux_sym_x_string_token1] = ACTIONS(296),
    [aux_sym_x_string_token2] = ACTIONS(296),
    [aux_sym_h_string_token1] = ACTIONS(296),
    [aux_sym_h_string_token2] = ACTIONS(296),
    [aux_sym_n_string_token1] = ACTIONS(296),
    [aux_sym_n_string_token2] = ACTIONS(296),
    [aux_sym_n_string_token3] = ACTIONS(296),
    [aux_sym_n_string_token4] = ACTIONS(296),
    [aux_sym_n_string_token5] = ACTIONS(296),
    [aux_sym_n_string_token6] = ACTIONS(296),
    [aux_sym_n_string_token7] = ACTIONS(296),
    [aux_sym_n_string_token8] = ACTIONS(296),
    [sym__ADDRESS] = ACTIONS(294),
    [sym__ALL] = ACTIONS(294),
    [sym__CONCATENATE_FUNC] = ACTIONS(294),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(294),
    [sym__DISPLAY] = ACTIONS(294),
    [sym__END_DISPLAY] = ACTIONS(294),
    [sym__EXCEPTION] = ACTIONS(294),
    [sym__FUNCTION_NAME] = ACTIONS(294),
    [anon_sym_high_DASHvalue] = ACTIONS(294),
    [anon_sym_high_DASHValue] = ACTIONS(294),
    [anon_sym_high_DASHVALUE] = ACTIONS(294),
    [anon_sym_High_DASHvalue] = ACTIONS(294),
    [anon_sym_High_DASHValue] = ACTIONS(294),
    [anon_sym_High_DASHVALUE] = ACTIONS(294),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(294),
    [anon_sym_HIGH_DASHValue] = ACTIONS(294),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(294),
    [sym__LENGTH] = ACTIONS(294),
    [sym__LINAGE_COUNTER] = ACTIONS(294),
    [sym__LOCALE_DT_FUNC] = ACTIONS(294),
    [sym__LOWER_CASE_FUNC] = ACTIONS(294),
    [anon_sym_low_DASHvalue] = ACTIONS(294),
    [anon_sym_low_DASHValue] = ACTIONS(294),
    [anon_sym_low_DASHVALUE] = ACTIONS(294),
    [anon_sym_Low_DASHvalue] = ACTIONS(294),
    [anon_sym_Low_DASHValue] = ACTIONS(294),
    [anon_sym_Low_DASHVALUE] = ACTIONS(294),
    [anon_sym_LOW_DASHvalue] = ACTIONS(294),
    [anon_sym_LOW_DASHValue] = ACTIONS(294),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(294),
    [sym__MOVE] = ACTIONS(294),
    [sym__NOT_EXCEPTION] = ACTIONS(294),
    [sym__NO_ADVANCING] = ACTIONS(294),
    [sym__NUMVALC_FUNC] = ACTIONS(294),
    [anon_sym_quote] = ACTIONS(294),
    [anon_sym_QUOTE] = ACTIONS(294),
    [anon_sym_Quote] = ACTIONS(294),
    [sym__REVERSE_FUNC] = ACTIONS(294),
    [anon_sym_space] = ACTIONS(294),
    [anon_sym_SPACE] = ACTIONS(294),
    [anon_sym_Space] = ACTIONS(294),
    [sym__STOP] = ACTIONS(294),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(294),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(294),
    [anon_sym_null] = ACTIONS(294),
    [anon_sym_Null] = ACTIONS(294),
    [anon_sym_NULL] = ACTIONS(294),
    [sym__TRIM_FUNCTION] = ACTIONS(294),
    [sym__UPON] = ACTIONS(294),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(294),
    [sym__UPON_COMMAND_LINE] = ACTIONS(294),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(294),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(294),
    [sym__UPPER_CASE_FUNC] = ACTIONS(294),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(294),
    [sym__WITH] = ACTIONS(294),
    [anon_sym_zero] = ACTIONS(294),
    [anon_sym_ZERO] = ACTIONS(294),
    [anon_sym_Zero] = ACTIONS(294),
  },
  [63] = {
    [sym_WORD] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(300),
    [sym_at_line_column] = ACTIONS(298),
    [anon_sym_AMP] = ACTIONS(300),
    [sym_number] = ACTIONS(300),
    [aux_sym_x_string_token1] = ACTIONS(300),
    [aux_sym_x_string_token2] = ACTIONS(300),
    [aux_sym_h_string_token1] = ACTIONS(300),
    [aux_sym_h_string_token2] = ACTIONS(300),
    [aux_sym_n_string_token1] = ACTIONS(300),
    [aux_sym_n_string_token2] = ACTIONS(300),
    [aux_sym_n_string_token3] = ACTIONS(300),
    [aux_sym_n_string_token4] = ACTIONS(300),
    [aux_sym_n_string_token5] = ACTIONS(300),
    [aux_sym_n_string_token6] = ACTIONS(300),
    [aux_sym_n_string_token7] = ACTIONS(300),
    [aux_sym_n_string_token8] = ACTIONS(300),
    [sym__ADDRESS] = ACTIONS(298),
    [sym__ALL] = ACTIONS(298),
    [sym__CONCATENATE_FUNC] = ACTIONS(298),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(298),
    [sym__DISPLAY] = ACTIONS(298),
    [sym__END_DISPLAY] = ACTIONS(298),
    [sym__EXCEPTION] = ACTIONS(298),
    [sym__FUNCTION_NAME] = ACTIONS(298),
    [anon_sym_high_DASHvalue] = ACTIONS(298),
    [anon_sym_high_DASHValue] = ACTIONS(298),
    [anon_sym_high_DASHVALUE] = ACTIONS(298),
    [anon_sym_High_DASHvalue] = ACTIONS(298),
    [anon_sym_High_DASHValue] = ACTIONS(298),
    [anon_sym_High_DASHVALUE] = ACTIONS(298),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(298),
    [anon_sym_HIGH_DASHValue] = ACTIONS(298),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(298),
    [sym__LENGTH] = ACTIONS(298),
    [sym__LINAGE_COUNTER] = ACTIONS(298),
    [sym__LOCALE_DT_FUNC] = ACTIONS(298),
    [sym__LOWER_CASE_FUNC] = ACTIONS(298),
    [anon_sym_low_DASHvalue] = ACTIONS(298),
    [anon_sym_low_DASHValue] = ACTIONS(298),
    [anon_sym_low_DASHVALUE] = ACTIONS(298),
    [anon_sym_Low_DASHvalue] = ACTIONS(298),
    [anon_sym_Low_DASHValue] = ACTIONS(298),
    [anon_sym_Low_DASHVALUE] = ACTIONS(298),
    [anon_sym_LOW_DASHvalue] = ACTIONS(298),
    [anon_sym_LOW_DASHValue] = ACTIONS(298),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(298),
    [sym__MOVE] = ACTIONS(298),
    [sym__NOT_EXCEPTION] = ACTIONS(298),
    [sym__NO_ADVANCING] = ACTIONS(298),
    [sym__NUMVALC_FUNC] = ACTIONS(298),
    [anon_sym_quote] = ACTIONS(298),
    [anon_sym_QUOTE] = ACTIONS(298),
    [anon_sym_Quote] = ACTIONS(298),
    [sym__REVERSE_FUNC] = ACTIONS(298),
    [anon_sym_space] = ACTIONS(298),
    [anon_sym_SPACE] = ACTIONS(298),
    [anon_sym_Space] = ACTIONS(298),
    [sym__STOP] = ACTIONS(298),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(298),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(298),
    [anon_sym_null] = ACTIONS(298),
    [anon_sym_Null] = ACTIONS(298),
    [anon_sym_NULL] = ACTIONS(298),
    [sym__TRIM_FUNCTION] = ACTIONS(298),
    [sym__UPON] = ACTIONS(298),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(298),
    [sym__UPON_COMMAND_LINE] = ACTIONS(298),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(298),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(298),
    [sym__UPPER_CASE_FUNC] = ACTIONS(298),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(298),
    [sym__WITH] = ACTIONS(298),
    [anon_sym_zero] = ACTIONS(298),
    [anon_sym_ZERO] = ACTIONS(298),
    [anon_sym_Zero] = ACTIONS(298),
  },
  [64] = {
    [sym_WORD] = ACTIONS(302),
    [anon_sym_DOT] = ACTIONS(304),
    [sym_at_line_column] = ACTIONS(302),
    [anon_sym_AMP] = ACTIONS(304),
    [sym_number] = ACTIONS(304),
    [aux_sym_x_string_token1] = ACTIONS(304),
    [aux_sym_x_string_token2] = ACTIONS(304),
    [aux_sym_h_string_token1] = ACTIONS(304),
    [aux_sym_h_string_token2] = ACTIONS(304),
    [aux_sym_n_string_token1] = ACTIONS(304),
    [aux_sym_n_string_token2] = ACTIONS(304),
    [aux_sym_n_string_token3] = ACTIONS(304),
    [aux_sym_n_string_token4] = ACTIONS(304),
    [aux_sym_n_string_token5] = ACTIONS(304),
    [aux_sym_n_string_token6] = ACTIONS(304),
    [aux_sym_n_string_token7] = ACTIONS(304),
    [aux_sym_n_string_token8] = ACTIONS(304),
    [sym__ADDRESS] = ACTIONS(302),
    [sym__ALL] = ACTIONS(302),
    [sym__CONCATENATE_FUNC] = ACTIONS(302),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(302),
    [sym__DISPLAY] = ACTIONS(302),
    [sym__END_DISPLAY] = ACTIONS(302),
    [sym__EXCEPTION] = ACTIONS(302),
    [sym__FUNCTION_NAME] = ACTIONS(302),
    [anon_sym_high_DASHvalue] = ACTIONS(302),
    [anon_sym_high_DASHValue] = ACTIONS(302),
    [anon_sym_high_DASHVALUE] = ACTIONS(302),
    [anon_sym_High_DASHvalue] = ACTIONS(302),
    [anon_sym_High_DASHValue] = ACTIONS(302),
    [anon_sym_High_DASHVALUE] = ACTIONS(302),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(302),
    [anon_sym_HIGH_DASHValue] = ACTIONS(302),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(302),
    [sym__LENGTH] = ACTIONS(302),
    [sym__LINAGE_COUNTER] = ACTIONS(302),
    [sym__LOCALE_DT_FUNC] = ACTIONS(302),
    [sym__LOWER_CASE_FUNC] = ACTIONS(302),
    [anon_sym_low_DASHvalue] = ACTIONS(302),
    [anon_sym_low_DASHValue] = ACTIONS(302),
    [anon_sym_low_DASHVALUE] = ACTIONS(302),
    [anon_sym_Low_DASHvalue] = ACTIONS(302),
    [anon_sym_Low_DASHValue] = ACTIONS(302),
    [anon_sym_Low_DASHVALUE] = ACTIONS(302),
    [anon_sym_LOW_DASHvalue] = ACTIONS(302),
    [anon_sym_LOW_DASHValue] = ACTIONS(302),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(302),
    [sym__MOVE] = ACTIONS(302),
    [sym__NOT_EXCEPTION] = ACTIONS(302),
    [sym__NO_ADVANCING] = ACTIONS(302),
    [sym__NUMVALC_FUNC] = ACTIONS(302),
    [anon_sym_quote] = ACTIONS(302),
    [anon_sym_QUOTE] = ACTIONS(302),
    [anon_sym_Quote] = ACTIONS(302),
    [sym__REVERSE_FUNC] = ACTIONS(302),
    [anon_sym_space] = ACTIONS(302),
    [anon_sym_SPACE] = ACTIONS(302),
    [anon_sym_Space] = ACTIONS(302),
    [sym__STOP] = ACTIONS(302),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(302),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(302),
    [anon_sym_null] = ACTIONS(302),
    [anon_sym_Null] = ACTIONS(302),
    [anon_sym_NULL] = ACTIONS(302),
    [sym__TRIM_FUNCTION] = ACTIONS(302),
    [sym__UPON] = ACTIONS(302),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(302),
    [sym__UPON_COMMAND_LINE] = ACTIONS(302),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(302),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(302),
    [sym__UPPER_CASE_FUNC] = ACTIONS(302),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(302),
    [sym__WITH] = ACTIONS(302),
    [anon_sym_zero] = ACTIONS(302),
    [anon_sym_ZERO] = ACTIONS(302),
    [anon_sym_Zero] = ACTIONS(302),
  },
  [65] = {
    [sym_WORD] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(308),
    [sym_at_line_column] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(308),
    [sym_number] = ACTIONS(308),
    [aux_sym_x_string_token1] = ACTIONS(308),
    [aux_sym_x_string_token2] = ACTIONS(308),
    [aux_sym_h_string_token1] = ACTIONS(308),
    [aux_sym_h_string_token2] = ACTIONS(308),
    [aux_sym_n_string_token1] = ACTIONS(308),
    [aux_sym_n_string_token2] = ACTIONS(308),
    [aux_sym_n_string_token3] = ACTIONS(308),
    [aux_sym_n_string_token4] = ACTIONS(308),
    [aux_sym_n_string_token5] = ACTIONS(308),
    [aux_sym_n_string_token6] = ACTIONS(308),
    [aux_sym_n_string_token7] = ACTIONS(308),
    [aux_sym_n_string_token8] = ACTIONS(308),
    [sym__ADDRESS] = ACTIONS(306),
    [sym__ALL] = ACTIONS(306),
    [sym__CONCATENATE_FUNC] = ACTIONS(306),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(306),
    [sym__DISPLAY] = ACTIONS(306),
    [sym__END_DISPLAY] = ACTIONS(306),
    [sym__EXCEPTION] = ACTIONS(306),
    [sym__FUNCTION_NAME] = ACTIONS(306),
    [anon_sym_high_DASHvalue] = ACTIONS(306),
    [anon_sym_high_DASHValue] = ACTIONS(306),
    [anon_sym_high_DASHVALUE] = ACTIONS(306),
    [anon_sym_High_DASHvalue] = ACTIONS(306),
    [anon_sym_High_DASHValue] = ACTIONS(306),
    [anon_sym_High_DASHVALUE] = ACTIONS(306),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(306),
    [anon_sym_HIGH_DASHValue] = ACTIONS(306),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(306),
    [sym__LENGTH] = ACTIONS(306),
    [sym__LINAGE_COUNTER] = ACTIONS(306),
    [sym__LOCALE_DT_FUNC] = ACTIONS(306),
    [sym__LOWER_CASE_FUNC] = ACTIONS(306),
    [anon_sym_low_DASHvalue] = ACTIONS(306),
    [anon_sym_low_DASHValue] = ACTIONS(306),
    [anon_sym_low_DASHVALUE] = ACTIONS(306),
    [anon_sym_Low_DASHvalue] = ACTIONS(306),
    [anon_sym_Low_DASHValue] = ACTIONS(306),
    [anon_sym_Low_DASHVALUE] = ACTIONS(306),
    [anon_sym_LOW_DASHvalue] = ACTIONS(306),
    [anon_sym_LOW_DASHValue] = ACTIONS(306),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(306),
    [sym__MOVE] = ACTIONS(306),
    [sym__NOT_EXCEPTION] = ACTIONS(306),
    [sym__NO_ADVANCING] = ACTIONS(306),
    [sym__NUMVALC_FUNC] = ACTIONS(306),
    [anon_sym_quote] = ACTIONS(306),
    [anon_sym_QUOTE] = ACTIONS(306),
    [anon_sym_Quote] = ACTIONS(306),
    [sym__REVERSE_FUNC] = ACTIONS(306),
    [anon_sym_space] = ACTIONS(306),
    [anon_sym_SPACE] = ACTIONS(306),
    [anon_sym_Space] = ACTIONS(306),
    [sym__STOP] = ACTIONS(306),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(306),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(306),
    [anon_sym_null] = ACTIONS(306),
    [anon_sym_Null] = ACTIONS(306),
    [anon_sym_NULL] = ACTIONS(306),
    [sym__TRIM_FUNCTION] = ACTIONS(306),
    [sym__UPON] = ACTIONS(306),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(306),
    [sym__UPON_COMMAND_LINE] = ACTIONS(306),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(306),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(306),
    [sym__UPPER_CASE_FUNC] = ACTIONS(306),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(306),
    [sym__WITH] = ACTIONS(306),
    [anon_sym_zero] = ACTIONS(306),
    [anon_sym_ZERO] = ACTIONS(306),
    [anon_sym_Zero] = ACTIONS(306),
  },
  [66] = {
    [sym_WORD] = ACTIONS(310),
    [anon_sym_DOT] = ACTIONS(312),
    [sym_at_line_column] = ACTIONS(310),
    [anon_sym_AMP] = ACTIONS(312),
    [sym_number] = ACTIONS(312),
    [aux_sym_x_string_token1] = ACTIONS(312),
    [aux_sym_x_string_token2] = ACTIONS(312),
    [aux_sym_h_string_token1] = ACTIONS(312),
    [aux_sym_h_string_token2] = ACTIONS(312),
    [aux_sym_n_string_token1] = ACTIONS(312),
    [aux_sym_n_string_token2] = ACTIONS(312),
    [aux_sym_n_string_token3] = ACTIONS(312),
    [aux_sym_n_string_token4] = ACTIONS(312),
    [aux_sym_n_string_token5] = ACTIONS(312),
    [aux_sym_n_string_token6] = ACTIONS(312),
    [aux_sym_n_string_token7] = ACTIONS(312),
    [aux_sym_n_string_token8] = ACTIONS(312),
    [sym__ADDRESS] = ACTIONS(310),
    [sym__ALL] = ACTIONS(310),
    [sym__CONCATENATE_FUNC] = ACTIONS(310),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(310),
    [sym__DISPLAY] = ACTIONS(310),
    [sym__END_DISPLAY] = ACTIONS(310),
    [sym__EXCEPTION] = ACTIONS(310),
    [sym__FUNCTION_NAME] = ACTIONS(310),
    [anon_sym_high_DASHvalue] = ACTIONS(310),
    [anon_sym_high_DASHValue] = ACTIONS(310),
    [anon_sym_high_DASHVALUE] = ACTIONS(310),
    [anon_sym_High_DASHvalue] = ACTIONS(310),
    [anon_sym_High_DASHValue] = ACTIONS(310),
    [anon_sym_High_DASHVALUE] = ACTIONS(310),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(310),
    [anon_sym_HIGH_DASHValue] = ACTIONS(310),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(310),
    [sym__LENGTH] = ACTIONS(310),
    [sym__LINAGE_COUNTER] = ACTIONS(310),
    [sym__LOCALE_DT_FUNC] = ACTIONS(310),
    [sym__LOWER_CASE_FUNC] = ACTIONS(310),
    [anon_sym_low_DASHvalue] = ACTIONS(310),
    [anon_sym_low_DASHValue] = ACTIONS(310),
    [anon_sym_low_DASHVALUE] = ACTIONS(310),
    [anon_sym_Low_DASHvalue] = ACTIONS(310),
    [anon_sym_Low_DASHValue] = ACTIONS(310),
    [anon_sym_Low_DASHVALUE] = ACTIONS(310),
    [anon_sym_LOW_DASHvalue] = ACTIONS(310),
    [anon_sym_LOW_DASHValue] = ACTIONS(310),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(310),
    [sym__MOVE] = ACTIONS(310),
    [sym__NOT_EXCEPTION] = ACTIONS(310),
    [sym__NO_ADVANCING] = ACTIONS(310),
    [sym__NUMVALC_FUNC] = ACTIONS(310),
    [anon_sym_quote] = ACTIONS(310),
    [anon_sym_QUOTE] = ACTIONS(310),
    [anon_sym_Quote] = ACTIONS(310),
    [sym__REVERSE_FUNC] = ACTIONS(310),
    [anon_sym_space] = ACTIONS(310),
    [anon_sym_SPACE] = ACTIONS(310),
    [anon_sym_Space] = ACTIONS(310),
    [sym__STOP] = ACTIONS(310),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(310),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(310),
    [anon_sym_null] = ACTIONS(310),
    [anon_sym_Null] = ACTIONS(310),
    [anon_sym_NULL] = ACTIONS(310),
    [sym__TRIM_FUNCTION] = ACTIONS(310),
    [sym__UPON] = ACTIONS(310),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(310),
    [sym__UPON_COMMAND_LINE] = ACTIONS(310),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(310),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(310),
    [sym__UPPER_CASE_FUNC] = ACTIONS(310),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(310),
    [sym__WITH] = ACTIONS(310),
    [anon_sym_zero] = ACTIONS(310),
    [anon_sym_ZERO] = ACTIONS(310),
    [anon_sym_Zero] = ACTIONS(310),
  },
  [67] = {
    [sym_WORD] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(316),
    [sym_at_line_column] = ACTIONS(314),
    [sym_number] = ACTIONS(316),
    [aux_sym_x_string_token1] = ACTIONS(316),
    [aux_sym_x_string_token2] = ACTIONS(316),
    [aux_sym_h_string_token1] = ACTIONS(316),
    [aux_sym_h_string_token2] = ACTIONS(316),
    [aux_sym_n_string_token1] = ACTIONS(316),
    [aux_sym_n_string_token2] = ACTIONS(316),
    [aux_sym_n_string_token3] = ACTIONS(316),
    [aux_sym_n_string_token4] = ACTIONS(316),
    [aux_sym_n_string_token5] = ACTIONS(316),
    [aux_sym_n_string_token6] = ACTIONS(316),
    [aux_sym_n_string_token7] = ACTIONS(316),
    [aux_sym_n_string_token8] = ACTIONS(316),
    [sym__ADDRESS] = ACTIONS(314),
    [sym__ALL] = ACTIONS(314),
    [sym__CONCATENATE_FUNC] = ACTIONS(314),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(314),
    [sym__DISPLAY] = ACTIONS(314),
    [sym__END_DISPLAY] = ACTIONS(314),
    [sym__EXCEPTION] = ACTIONS(314),
    [sym__FUNCTION_NAME] = ACTIONS(314),
    [anon_sym_high_DASHvalue] = ACTIONS(314),
    [anon_sym_high_DASHValue] = ACTIONS(314),
    [anon_sym_high_DASHVALUE] = ACTIONS(314),
    [anon_sym_High_DASHvalue] = ACTIONS(314),
    [anon_sym_High_DASHValue] = ACTIONS(314),
    [anon_sym_High_DASHVALUE] = ACTIONS(314),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(314),
    [anon_sym_HIGH_DASHValue] = ACTIONS(314),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(314),
    [sym__LENGTH] = ACTIONS(314),
    [sym__LINAGE_COUNTER] = ACTIONS(314),
    [sym__LOCALE_DT_FUNC] = ACTIONS(314),
    [sym__LOWER_CASE_FUNC] = ACTIONS(314),
    [anon_sym_low_DASHvalue] = ACTIONS(314),
    [anon_sym_low_DASHValue] = ACTIONS(314),
    [anon_sym_low_DASHVALUE] = ACTIONS(314),
    [anon_sym_Low_DASHvalue] = ACTIONS(314),
    [anon_sym_Low_DASHValue] = ACTIONS(314),
    [anon_sym_Low_DASHVALUE] = ACTIONS(314),
    [anon_sym_LOW_DASHvalue] = ACTIONS(314),
    [anon_sym_LOW_DASHValue] = ACTIONS(314),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(314),
    [sym__MOVE] = ACTIONS(314),
    [sym__NOT_EXCEPTION] = ACTIONS(314),
    [sym__NO_ADVANCING] = ACTIONS(314),
    [sym__NUMVALC_FUNC] = ACTIONS(314),
    [anon_sym_quote] = ACTIONS(314),
    [anon_sym_QUOTE] = ACTIONS(314),
    [anon_sym_Quote] = ACTIONS(314),
    [sym__REVERSE_FUNC] = ACTIONS(314),
    [anon_sym_space] = ACTIONS(314),
    [anon_sym_SPACE] = ACTIONS(314),
    [anon_sym_Space] = ACTIONS(314),
    [sym__STOP] = ACTIONS(314),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(314),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(314),
    [anon_sym_null] = ACTIONS(314),
    [anon_sym_Null] = ACTIONS(314),
    [anon_sym_NULL] = ACTIONS(314),
    [sym__TRIM_FUNCTION] = ACTIONS(314),
    [sym__UPON] = ACTIONS(314),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(314),
    [sym__UPON_COMMAND_LINE] = ACTIONS(314),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(314),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(314),
    [sym__UPPER_CASE_FUNC] = ACTIONS(314),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(314),
    [sym__WITH] = ACTIONS(314),
    [anon_sym_zero] = ACTIONS(314),
    [anon_sym_ZERO] = ACTIONS(314),
    [anon_sym_Zero] = ACTIONS(314),
  },
  [68] = {
    [sym_WORD] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(320),
    [sym_at_line_column] = ACTIONS(318),
    [sym_number] = ACTIONS(320),
    [aux_sym_x_string_token1] = ACTIONS(320),
    [aux_sym_x_string_token2] = ACTIONS(320),
    [aux_sym_h_string_token1] = ACTIONS(320),
    [aux_sym_h_string_token2] = ACTIONS(320),
    [aux_sym_n_string_token1] = ACTIONS(320),
    [aux_sym_n_string_token2] = ACTIONS(320),
    [aux_sym_n_string_token3] = ACTIONS(320),
    [aux_sym_n_string_token4] = ACTIONS(320),
    [aux_sym_n_string_token5] = ACTIONS(320),
    [aux_sym_n_string_token6] = ACTIONS(320),
    [aux_sym_n_string_token7] = ACTIONS(320),
    [aux_sym_n_string_token8] = ACTIONS(320),
    [sym__ADDRESS] = ACTIONS(318),
    [sym__ALL] = ACTIONS(318),
    [sym__CONCATENATE_FUNC] = ACTIONS(318),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(318),
    [sym__DISPLAY] = ACTIONS(318),
    [sym__END_DISPLAY] = ACTIONS(318),
    [sym__EXCEPTION] = ACTIONS(318),
    [sym__FUNCTION_NAME] = ACTIONS(318),
    [anon_sym_high_DASHvalue] = ACTIONS(318),
    [anon_sym_high_DASHValue] = ACTIONS(318),
    [anon_sym_high_DASHVALUE] = ACTIONS(318),
    [anon_sym_High_DASHvalue] = ACTIONS(318),
    [anon_sym_High_DASHValue] = ACTIONS(318),
    [anon_sym_High_DASHVALUE] = ACTIONS(318),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(318),
    [anon_sym_HIGH_DASHValue] = ACTIONS(318),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(318),
    [sym__LENGTH] = ACTIONS(318),
    [sym__LINAGE_COUNTER] = ACTIONS(318),
    [sym__LOCALE_DT_FUNC] = ACTIONS(318),
    [sym__LOWER_CASE_FUNC] = ACTIONS(318),
    [anon_sym_low_DASHvalue] = ACTIONS(318),
    [anon_sym_low_DASHValue] = ACTIONS(318),
    [anon_sym_low_DASHVALUE] = ACTIONS(318),
    [anon_sym_Low_DASHvalue] = ACTIONS(318),
    [anon_sym_Low_DASHValue] = ACTIONS(318),
    [anon_sym_Low_DASHVALUE] = ACTIONS(318),
    [anon_sym_LOW_DASHvalue] = ACTIONS(318),
    [anon_sym_LOW_DASHValue] = ACTIONS(318),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(318),
    [sym__MOVE] = ACTIONS(318),
    [sym__NOT_EXCEPTION] = ACTIONS(318),
    [sym__NO_ADVANCING] = ACTIONS(318),
    [sym__NUMVALC_FUNC] = ACTIONS(318),
    [anon_sym_quote] = ACTIONS(318),
    [anon_sym_QUOTE] = ACTIONS(318),
    [anon_sym_Quote] = ACTIONS(318),
    [sym__REVERSE_FUNC] = ACTIONS(318),
    [anon_sym_space] = ACTIONS(318),
    [anon_sym_SPACE] = ACTIONS(318),
    [anon_sym_Space] = ACTIONS(318),
    [sym__STOP] = ACTIONS(318),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(318),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(318),
    [anon_sym_null] = ACTIONS(318),
    [anon_sym_Null] = ACTIONS(318),
    [anon_sym_NULL] = ACTIONS(318),
    [sym__TRIM_FUNCTION] = ACTIONS(318),
    [sym__UPON] = ACTIONS(318),
    [sym__UPON_ARGUMENT_NUMBER] = ACTIONS(322),
    [sym__UPON_COMMAND_LINE] = ACTIONS(322),
    [sym__UPON_ENVIRONMENT_NAME] = ACTIONS(322),
    [sym__UPON_ENVIRONMENT_VALUE] = ACTIONS(322),
    [sym__UPPER_CASE_FUNC] = ACTIONS(318),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(318),
    [sym__WITH] = ACTIONS(318),
    [anon_sym_zero] = ACTIONS(318),
    [anon_sym_ZERO] = ACTIONS(318),
    [anon_sym_Zero] = ACTIONS(318),
  },
  [69] = {
    [sym__in_of] = STATE(354),
    [sym_WORD] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(326),
    [sym_at_line_column] = ACTIONS(324),
    [sym_number] = ACTIONS(326),
    [aux_sym_x_string_token1] = ACTIONS(326),
    [aux_sym_x_string_token2] = ACTIONS(326),
    [aux_sym_h_string_token1] = ACTIONS(326),
    [aux_sym_h_string_token2] = ACTIONS(326),
    [aux_sym_n_string_token1] = ACTIONS(326),
    [aux_sym_n_string_token2] = ACTIONS(326),
    [aux_sym_n_string_token3] = ACTIONS(326),
    [aux_sym_n_string_token4] = ACTIONS(326),
    [aux_sym_n_string_token5] = ACTIONS(326),
    [aux_sym_n_string_token6] = ACTIONS(326),
    [aux_sym_n_string_token7] = ACTIONS(326),
    [aux_sym_n_string_token8] = ACTIONS(326),
    [sym__ADDRESS] = ACTIONS(324),
    [sym__ALL] = ACTIONS(324),
    [sym__CONCATENATE_FUNC] = ACTIONS(324),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(324),
    [sym__DISPLAY] = ACTIONS(324),
    [sym__END_DISPLAY] = ACTIONS(324),
    [sym__EXCEPTION] = ACTIONS(324),
    [sym__FUNCTION_NAME] = ACTIONS(324),
    [anon_sym_high_DASHvalue] = ACTIONS(324),
    [anon_sym_high_DASHValue] = ACTIONS(324),
    [anon_sym_high_DASHVALUE] = ACTIONS(324),
    [anon_sym_High_DASHvalue] = ACTIONS(324),
    [anon_sym_High_DASHValue] = ACTIONS(324),
    [anon_sym_High_DASHVALUE] = ACTIONS(324),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(324),
    [anon_sym_HIGH_DASHValue] = ACTIONS(324),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(324),
    [sym__IN] = ACTIONS(328),
    [sym__LENGTH] = ACTIONS(324),
    [sym__LINAGE_COUNTER] = ACTIONS(324),
    [sym__LOCALE_DT_FUNC] = ACTIONS(324),
    [sym__LOWER_CASE_FUNC] = ACTIONS(324),
    [anon_sym_low_DASHvalue] = ACTIONS(324),
    [anon_sym_low_DASHValue] = ACTIONS(324),
    [anon_sym_low_DASHVALUE] = ACTIONS(324),
    [anon_sym_Low_DASHvalue] = ACTIONS(324),
    [anon_sym_Low_DASHValue] = ACTIONS(324),
    [anon_sym_Low_DASHVALUE] = ACTIONS(324),
    [anon_sym_LOW_DASHvalue] = ACTIONS(324),
    [anon_sym_LOW_DASHValue] = ACTIONS(324),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(324),
    [sym__MOVE] = ACTIONS(324),
    [sym__NOT_EXCEPTION] = ACTIONS(324),
    [sym__NO_ADVANCING] = ACTIONS(324),
    [sym__NUMVALC_FUNC] = ACTIONS(324),
    [sym__OF] = ACTIONS(328),
    [anon_sym_quote] = ACTIONS(324),
    [anon_sym_QUOTE] = ACTIONS(324),
    [anon_sym_Quote] = ACTIONS(324),
    [sym__REVERSE_FUNC] = ACTIONS(324),
    [anon_sym_space] = ACTIONS(324),
    [anon_sym_SPACE] = ACTIONS(324),
    [anon_sym_Space] = ACTIONS(324),
    [sym__STOP] = ACTIONS(324),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(324),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(324),
    [anon_sym_null] = ACTIONS(324),
    [anon_sym_Null] = ACTIONS(324),
    [anon_sym_NULL] = ACTIONS(324),
    [sym__TRIM_FUNCTION] = ACTIONS(324),
    [sym__UPON] = ACTIONS(324),
    [sym__UPPER_CASE_FUNC] = ACTIONS(324),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(324),
    [sym__WITH] = ACTIONS(324),
    [anon_sym_zero] = ACTIONS(324),
    [anon_sym_ZERO] = ACTIONS(324),
    [anon_sym_Zero] = ACTIONS(324),
  },
  [70] = {
    [sym__func_args] = STATE(78),
    [sym_WORD] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(334),
    [sym_at_line_column] = ACTIONS(330),
    [sym_number] = ACTIONS(332),
    [aux_sym_x_string_token1] = ACTIONS(332),
    [aux_sym_x_string_token2] = ACTIONS(332),
    [aux_sym_h_string_token1] = ACTIONS(332),
    [aux_sym_h_string_token2] = ACTIONS(332),
    [aux_sym_n_string_token1] = ACTIONS(332),
    [aux_sym_n_string_token2] = ACTIONS(332),
    [aux_sym_n_string_token3] = ACTIONS(332),
    [aux_sym_n_string_token4] = ACTIONS(332),
    [aux_sym_n_string_token5] = ACTIONS(332),
    [aux_sym_n_string_token6] = ACTIONS(332),
    [aux_sym_n_string_token7] = ACTIONS(332),
    [aux_sym_n_string_token8] = ACTIONS(332),
    [sym__ADDRESS] = ACTIONS(330),
    [sym__ALL] = ACTIONS(330),
    [sym__CONCATENATE_FUNC] = ACTIONS(330),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(330),
    [sym__DISPLAY] = ACTIONS(330),
    [sym__END_DISPLAY] = ACTIONS(330),
    [sym__EXCEPTION] = ACTIONS(330),
    [sym__FUNCTION_NAME] = ACTIONS(330),
    [anon_sym_high_DASHvalue] = ACTIONS(330),
    [anon_sym_high_DASHValue] = ACTIONS(330),
    [anon_sym_high_DASHVALUE] = ACTIONS(330),
    [anon_sym_High_DASHvalue] = ACTIONS(330),
    [anon_sym_High_DASHValue] = ACTIONS(330),
    [anon_sym_High_DASHVALUE] = ACTIONS(330),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(330),
    [anon_sym_HIGH_DASHValue] = ACTIONS(330),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(330),
    [sym__LENGTH] = ACTIONS(330),
    [sym__LINAGE_COUNTER] = ACTIONS(330),
    [sym__LOCALE_DT_FUNC] = ACTIONS(330),
    [sym__LOWER_CASE_FUNC] = ACTIONS(330),
    [anon_sym_low_DASHvalue] = ACTIONS(330),
    [anon_sym_low_DASHValue] = ACTIONS(330),
    [anon_sym_low_DASHVALUE] = ACTIONS(330),
    [anon_sym_Low_DASHvalue] = ACTIONS(330),
    [anon_sym_Low_DASHValue] = ACTIONS(330),
    [anon_sym_Low_DASHVALUE] = ACTIONS(330),
    [anon_sym_LOW_DASHvalue] = ACTIONS(330),
    [anon_sym_LOW_DASHValue] = ACTIONS(330),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(330),
    [sym__MOVE] = ACTIONS(330),
    [sym__NOT_EXCEPTION] = ACTIONS(330),
    [sym__NO_ADVANCING] = ACTIONS(330),
    [sym__NUMVALC_FUNC] = ACTIONS(330),
    [anon_sym_quote] = ACTIONS(330),
    [anon_sym_QUOTE] = ACTIONS(330),
    [anon_sym_Quote] = ACTIONS(330),
    [sym__REVERSE_FUNC] = ACTIONS(330),
    [anon_sym_space] = ACTIONS(330),
    [anon_sym_SPACE] = ACTIONS(330),
    [anon_sym_Space] = ACTIONS(330),
    [sym__STOP] = ACTIONS(330),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(330),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(330),
    [anon_sym_null] = ACTIONS(330),
    [anon_sym_Null] = ACTIONS(330),
    [anon_sym_NULL] = ACTIONS(330),
    [sym__TRIM_FUNCTION] = ACTIONS(330),
    [sym__UPON] = ACTIONS(330),
    [sym__UPPER_CASE_FUNC] = ACTIONS(330),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(330),
    [sym__WITH] = ACTIONS(330),
    [anon_sym_zero] = ACTIONS(330),
    [anon_sym_ZERO] = ACTIONS(330),
    [anon_sym_Zero] = ACTIONS(330),
  },
  [71] = {
    [sym_func_refmod] = STATE(81),
    [sym_WORD] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_LPAREN] = ACTIONS(340),
    [sym_at_line_column] = ACTIONS(336),
    [sym_number] = ACTIONS(338),
    [aux_sym_x_string_token1] = ACTIONS(338),
    [aux_sym_x_string_token2] = ACTIONS(338),
    [aux_sym_h_string_token1] = ACTIONS(338),
    [aux_sym_h_string_token2] = ACTIONS(338),
    [aux_sym_n_string_token1] = ACTIONS(338),
    [aux_sym_n_string_token2] = ACTIONS(338),
    [aux_sym_n_string_token3] = ACTIONS(338),
    [aux_sym_n_string_token4] = ACTIONS(338),
    [aux_sym_n_string_token5] = ACTIONS(338),
    [aux_sym_n_string_token6] = ACTIONS(338),
    [aux_sym_n_string_token7] = ACTIONS(338),
    [aux_sym_n_string_token8] = ACTIONS(338),
    [sym__ADDRESS] = ACTIONS(336),
    [sym__ALL] = ACTIONS(336),
    [sym__CONCATENATE_FUNC] = ACTIONS(336),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(336),
    [sym__DISPLAY] = ACTIONS(336),
    [sym__END_DISPLAY] = ACTIONS(336),
    [sym__EXCEPTION] = ACTIONS(336),
    [sym__FUNCTION_NAME] = ACTIONS(336),
    [anon_sym_high_DASHvalue] = ACTIONS(336),
    [anon_sym_high_DASHValue] = ACTIONS(336),
    [anon_sym_high_DASHVALUE] = ACTIONS(336),
    [anon_sym_High_DASHvalue] = ACTIONS(336),
    [anon_sym_High_DASHValue] = ACTIONS(336),
    [anon_sym_High_DASHVALUE] = ACTIONS(336),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(336),
    [anon_sym_HIGH_DASHValue] = ACTIONS(336),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(336),
    [sym__LENGTH] = ACTIONS(336),
    [sym__LINAGE_COUNTER] = ACTIONS(336),
    [sym__LOCALE_DT_FUNC] = ACTIONS(336),
    [sym__LOWER_CASE_FUNC] = ACTIONS(336),
    [anon_sym_low_DASHvalue] = ACTIONS(336),
    [anon_sym_low_DASHValue] = ACTIONS(336),
    [anon_sym_low_DASHVALUE] = ACTIONS(336),
    [anon_sym_Low_DASHvalue] = ACTIONS(336),
    [anon_sym_Low_DASHValue] = ACTIONS(336),
    [anon_sym_Low_DASHVALUE] = ACTIONS(336),
    [anon_sym_LOW_DASHvalue] = ACTIONS(336),
    [anon_sym_LOW_DASHValue] = ACTIONS(336),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(336),
    [sym__MOVE] = ACTIONS(336),
    [sym__NOT_EXCEPTION] = ACTIONS(336),
    [sym__NO_ADVANCING] = ACTIONS(336),
    [sym__NUMVALC_FUNC] = ACTIONS(336),
    [anon_sym_quote] = ACTIONS(336),
    [anon_sym_QUOTE] = ACTIONS(336),
    [anon_sym_Quote] = ACTIONS(336),
    [sym__REVERSE_FUNC] = ACTIONS(336),
    [anon_sym_space] = ACTIONS(336),
    [anon_sym_SPACE] = ACTIONS(336),
    [anon_sym_Space] = ACTIONS(336),
    [sym__STOP] = ACTIONS(336),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(336),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(336),
    [anon_sym_null] = ACTIONS(336),
    [anon_sym_Null] = ACTIONS(336),
    [anon_sym_NULL] = ACTIONS(336),
    [sym__TRIM_FUNCTION] = ACTIONS(336),
    [sym__UPON] = ACTIONS(336),
    [sym__UPPER_CASE_FUNC] = ACTIONS(336),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(336),
    [sym__WITH] = ACTIONS(336),
    [anon_sym_zero] = ACTIONS(336),
    [anon_sym_ZERO] = ACTIONS(336),
    [anon_sym_Zero] = ACTIONS(336),
  },
  [72] = {
    [sym_func_refmod] = STATE(78),
    [sym_WORD] = ACTIONS(330),
    [anon_sym_DOT] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(340),
    [sym_at_line_column] = ACTIONS(330),
    [sym_number] = ACTIONS(332),
    [aux_sym_x_string_token1] = ACTIONS(332),
    [aux_sym_x_string_token2] = ACTIONS(332),
    [aux_sym_h_string_token1] = ACTIONS(332),
    [aux_sym_h_string_token2] = ACTIONS(332),
    [aux_sym_n_string_token1] = ACTIONS(332),
    [aux_sym_n_string_token2] = ACTIONS(332),
    [aux_sym_n_string_token3] = ACTIONS(332),
    [aux_sym_n_string_token4] = ACTIONS(332),
    [aux_sym_n_string_token5] = ACTIONS(332),
    [aux_sym_n_string_token6] = ACTIONS(332),
    [aux_sym_n_string_token7] = ACTIONS(332),
    [aux_sym_n_string_token8] = ACTIONS(332),
    [sym__ADDRESS] = ACTIONS(330),
    [sym__ALL] = ACTIONS(330),
    [sym__CONCATENATE_FUNC] = ACTIONS(330),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(330),
    [sym__DISPLAY] = ACTIONS(330),
    [sym__END_DISPLAY] = ACTIONS(330),
    [sym__EXCEPTION] = ACTIONS(330),
    [sym__FUNCTION_NAME] = ACTIONS(330),
    [anon_sym_high_DASHvalue] = ACTIONS(330),
    [anon_sym_high_DASHValue] = ACTIONS(330),
    [anon_sym_high_DASHVALUE] = ACTIONS(330),
    [anon_sym_High_DASHvalue] = ACTIONS(330),
    [anon_sym_High_DASHValue] = ACTIONS(330),
    [anon_sym_High_DASHVALUE] = ACTIONS(330),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(330),
    [anon_sym_HIGH_DASHValue] = ACTIONS(330),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(330),
    [sym__LENGTH] = ACTIONS(330),
    [sym__LINAGE_COUNTER] = ACTIONS(330),
    [sym__LOCALE_DT_FUNC] = ACTIONS(330),
    [sym__LOWER_CASE_FUNC] = ACTIONS(330),
    [anon_sym_low_DASHvalue] = ACTIONS(330),
    [anon_sym_low_DASHValue] = ACTIONS(330),
    [anon_sym_low_DASHVALUE] = ACTIONS(330),
    [anon_sym_Low_DASHvalue] = ACTIONS(330),
    [anon_sym_Low_DASHValue] = ACTIONS(330),
    [anon_sym_Low_DASHVALUE] = ACTIONS(330),
    [anon_sym_LOW_DASHvalue] = ACTIONS(330),
    [anon_sym_LOW_DASHValue] = ACTIONS(330),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(330),
    [sym__MOVE] = ACTIONS(330),
    [sym__NOT_EXCEPTION] = ACTIONS(330),
    [sym__NO_ADVANCING] = ACTIONS(330),
    [sym__NUMVALC_FUNC] = ACTIONS(330),
    [anon_sym_quote] = ACTIONS(330),
    [anon_sym_QUOTE] = ACTIONS(330),
    [anon_sym_Quote] = ACTIONS(330),
    [sym__REVERSE_FUNC] = ACTIONS(330),
    [anon_sym_space] = ACTIONS(330),
    [anon_sym_SPACE] = ACTIONS(330),
    [anon_sym_Space] = ACTIONS(330),
    [sym__STOP] = ACTIONS(330),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(330),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(330),
    [anon_sym_null] = ACTIONS(330),
    [anon_sym_Null] = ACTIONS(330),
    [anon_sym_NULL] = ACTIONS(330),
    [sym__TRIM_FUNCTION] = ACTIONS(330),
    [sym__UPON] = ACTIONS(330),
    [sym__UPPER_CASE_FUNC] = ACTIONS(330),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(330),
    [sym__WITH] = ACTIONS(330),
    [anon_sym_zero] = ACTIONS(330),
    [anon_sym_ZERO] = ACTIONS(330),
    [anon_sym_Zero] = ACTIONS(330),
  },
  [73] = {
    [sym_WORD] = ACTIONS(342),
    [anon_sym_DOT] = ACTIONS(344),
    [anon_sym_LPAREN] = ACTIONS(344),
    [sym_at_line_column] = ACTIONS(342),
    [sym_number] = ACTIONS(344),
    [aux_sym_x_string_token1] = ACTIONS(344),
    [aux_sym_x_string_token2] = ACTIONS(344),
    [aux_sym_h_string_token1] = ACTIONS(344),
    [aux_sym_h_string_token2] = ACTIONS(344),
    [aux_sym_n_string_token1] = ACTIONS(344),
    [aux_sym_n_string_token2] = ACTIONS(344),
    [aux_sym_n_string_token3] = ACTIONS(344),
    [aux_sym_n_string_token4] = ACTIONS(344),
    [aux_sym_n_string_token5] = ACTIONS(344),
    [aux_sym_n_string_token6] = ACTIONS(344),
    [aux_sym_n_string_token7] = ACTIONS(344),
    [aux_sym_n_string_token8] = ACTIONS(344),
    [sym__ADDRESS] = ACTIONS(342),
    [sym__ALL] = ACTIONS(342),
    [sym__CONCATENATE_FUNC] = ACTIONS(342),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(342),
    [sym__DISPLAY] = ACTIONS(342),
    [sym__END_DISPLAY] = ACTIONS(342),
    [sym__EXCEPTION] = ACTIONS(342),
    [sym__FUNCTION_NAME] = ACTIONS(342),
    [anon_sym_high_DASHvalue] = ACTIONS(342),
    [anon_sym_high_DASHValue] = ACTIONS(342),
    [anon_sym_high_DASHVALUE] = ACTIONS(342),
    [anon_sym_High_DASHvalue] = ACTIONS(342),
    [anon_sym_High_DASHValue] = ACTIONS(342),
    [anon_sym_High_DASHVALUE] = ACTIONS(342),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(342),
    [anon_sym_HIGH_DASHValue] = ACTIONS(342),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(342),
    [sym__LENGTH] = ACTIONS(342),
    [sym__LINAGE_COUNTER] = ACTIONS(342),
    [sym__LOCALE_DT_FUNC] = ACTIONS(342),
    [sym__LOWER_CASE_FUNC] = ACTIONS(342),
    [anon_sym_low_DASHvalue] = ACTIONS(342),
    [anon_sym_low_DASHValue] = ACTIONS(342),
    [anon_sym_low_DASHVALUE] = ACTIONS(342),
    [anon_sym_Low_DASHvalue] = ACTIONS(342),
    [anon_sym_Low_DASHValue] = ACTIONS(342),
    [anon_sym_Low_DASHVALUE] = ACTIONS(342),
    [anon_sym_LOW_DASHvalue] = ACTIONS(342),
    [anon_sym_LOW_DASHValue] = ACTIONS(342),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(342),
    [sym__MOVE] = ACTIONS(342),
    [sym__NOT_EXCEPTION] = ACTIONS(342),
    [sym__NO_ADVANCING] = ACTIONS(342),
    [sym__NUMVALC_FUNC] = ACTIONS(342),
    [anon_sym_quote] = ACTIONS(342),
    [anon_sym_QUOTE] = ACTIONS(342),
    [anon_sym_Quote] = ACTIONS(342),
    [sym__REVERSE_FUNC] = ACTIONS(342),
    [anon_sym_space] = ACTIONS(342),
    [anon_sym_SPACE] = ACTIONS(342),
    [anon_sym_Space] = ACTIONS(342),
    [sym__STOP] = ACTIONS(342),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(342),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(342),
    [anon_sym_null] = ACTIONS(342),
    [anon_sym_Null] = ACTIONS(342),
    [anon_sym_NULL] = ACTIONS(342),
    [sym__TRIM_FUNCTION] = ACTIONS(342),
    [sym__UPON] = ACTIONS(342),
    [sym__UPPER_CASE_FUNC] = ACTIONS(342),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(342),
    [sym__WITH] = ACTIONS(342),
    [anon_sym_zero] = ACTIONS(342),
    [anon_sym_ZERO] = ACTIONS(342),
    [anon_sym_Zero] = ACTIONS(342),
  },
  [74] = {
    [sym_WORD] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_LPAREN] = ACTIONS(348),
    [sym_at_line_column] = ACTIONS(346),
    [sym_number] = ACTIONS(348),
    [aux_sym_x_string_token1] = ACTIONS(348),
    [aux_sym_x_string_token2] = ACTIONS(348),
    [aux_sym_h_string_token1] = ACTIONS(348),
    [aux_sym_h_string_token2] = ACTIONS(348),
    [aux_sym_n_string_token1] = ACTIONS(348),
    [aux_sym_n_string_token2] = ACTIONS(348),
    [aux_sym_n_string_token3] = ACTIONS(348),
    [aux_sym_n_string_token4] = ACTIONS(348),
    [aux_sym_n_string_token5] = ACTIONS(348),
    [aux_sym_n_string_token6] = ACTIONS(348),
    [aux_sym_n_string_token7] = ACTIONS(348),
    [aux_sym_n_string_token8] = ACTIONS(348),
    [sym__ADDRESS] = ACTIONS(346),
    [sym__ALL] = ACTIONS(346),
    [sym__CONCATENATE_FUNC] = ACTIONS(346),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(346),
    [sym__DISPLAY] = ACTIONS(346),
    [sym__END_DISPLAY] = ACTIONS(346),
    [sym__EXCEPTION] = ACTIONS(346),
    [sym__FUNCTION_NAME] = ACTIONS(346),
    [anon_sym_high_DASHvalue] = ACTIONS(346),
    [anon_sym_high_DASHValue] = ACTIONS(346),
    [anon_sym_high_DASHVALUE] = ACTIONS(346),
    [anon_sym_High_DASHvalue] = ACTIONS(346),
    [anon_sym_High_DASHValue] = ACTIONS(346),
    [anon_sym_High_DASHVALUE] = ACTIONS(346),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(346),
    [anon_sym_HIGH_DASHValue] = ACTIONS(346),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(346),
    [sym__LENGTH] = ACTIONS(346),
    [sym__LINAGE_COUNTER] = ACTIONS(346),
    [sym__LOCALE_DT_FUNC] = ACTIONS(346),
    [sym__LOWER_CASE_FUNC] = ACTIONS(346),
    [anon_sym_low_DASHvalue] = ACTIONS(346),
    [anon_sym_low_DASHValue] = ACTIONS(346),
    [anon_sym_low_DASHVALUE] = ACTIONS(346),
    [anon_sym_Low_DASHvalue] = ACTIONS(346),
    [anon_sym_Low_DASHValue] = ACTIONS(346),
    [anon_sym_Low_DASHVALUE] = ACTIONS(346),
    [anon_sym_LOW_DASHvalue] = ACTIONS(346),
    [anon_sym_LOW_DASHValue] = ACTIONS(346),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(346),
    [sym__MOVE] = ACTIONS(346),
    [sym__NOT_EXCEPTION] = ACTIONS(346),
    [sym__NO_ADVANCING] = ACTIONS(346),
    [sym__NUMVALC_FUNC] = ACTIONS(346),
    [anon_sym_quote] = ACTIONS(346),
    [anon_sym_QUOTE] = ACTIONS(346),
    [anon_sym_Quote] = ACTIONS(346),
    [sym__REVERSE_FUNC] = ACTIONS(346),
    [anon_sym_space] = ACTIONS(346),
    [anon_sym_SPACE] = ACTIONS(346),
    [anon_sym_Space] = ACTIONS(346),
    [sym__STOP] = ACTIONS(346),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(346),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(346),
    [anon_sym_null] = ACTIONS(346),
    [anon_sym_Null] = ACTIONS(346),
    [anon_sym_NULL] = ACTIONS(346),
    [sym__TRIM_FUNCTION] = ACTIONS(346),
    [sym__UPON] = ACTIONS(346),
    [sym__UPPER_CASE_FUNC] = ACTIONS(346),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(346),
    [sym__WITH] = ACTIONS(346),
    [anon_sym_zero] = ACTIONS(346),
    [anon_sym_ZERO] = ACTIONS(346),
    [anon_sym_Zero] = ACTIONS(346),
  },
  [75] = {
    [sym_WORD] = ACTIONS(350),
    [anon_sym_DOT] = ACTIONS(352),
    [anon_sym_LPAREN] = ACTIONS(352),
    [sym_at_line_column] = ACTIONS(350),
    [sym_number] = ACTIONS(352),
    [aux_sym_x_string_token1] = ACTIONS(352),
    [aux_sym_x_string_token2] = ACTIONS(352),
    [aux_sym_h_string_token1] = ACTIONS(352),
    [aux_sym_h_string_token2] = ACTIONS(352),
    [aux_sym_n_string_token1] = ACTIONS(352),
    [aux_sym_n_string_token2] = ACTIONS(352),
    [aux_sym_n_string_token3] = ACTIONS(352),
    [aux_sym_n_string_token4] = ACTIONS(352),
    [aux_sym_n_string_token5] = ACTIONS(352),
    [aux_sym_n_string_token6] = ACTIONS(352),
    [aux_sym_n_string_token7] = ACTIONS(352),
    [aux_sym_n_string_token8] = ACTIONS(352),
    [sym__ADDRESS] = ACTIONS(350),
    [sym__ALL] = ACTIONS(350),
    [sym__CONCATENATE_FUNC] = ACTIONS(350),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(350),
    [sym__DISPLAY] = ACTIONS(350),
    [sym__END_DISPLAY] = ACTIONS(350),
    [sym__EXCEPTION] = ACTIONS(350),
    [sym__FUNCTION_NAME] = ACTIONS(350),
    [anon_sym_high_DASHvalue] = ACTIONS(350),
    [anon_sym_high_DASHValue] = ACTIONS(350),
    [anon_sym_high_DASHVALUE] = ACTIONS(350),
    [anon_sym_High_DASHvalue] = ACTIONS(350),
    [anon_sym_High_DASHValue] = ACTIONS(350),
    [anon_sym_High_DASHVALUE] = ACTIONS(350),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(350),
    [anon_sym_HIGH_DASHValue] = ACTIONS(350),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(350),
    [sym__LENGTH] = ACTIONS(350),
    [sym__LINAGE_COUNTER] = ACTIONS(350),
    [sym__LOCALE_DT_FUNC] = ACTIONS(350),
    [sym__LOWER_CASE_FUNC] = ACTIONS(350),
    [anon_sym_low_DASHvalue] = ACTIONS(350),
    [anon_sym_low_DASHValue] = ACTIONS(350),
    [anon_sym_low_DASHVALUE] = ACTIONS(350),
    [anon_sym_Low_DASHvalue] = ACTIONS(350),
    [anon_sym_Low_DASHValue] = ACTIONS(350),
    [anon_sym_Low_DASHVALUE] = ACTIONS(350),
    [anon_sym_LOW_DASHvalue] = ACTIONS(350),
    [anon_sym_LOW_DASHValue] = ACTIONS(350),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(350),
    [sym__MOVE] = ACTIONS(350),
    [sym__NOT_EXCEPTION] = ACTIONS(350),
    [sym__NO_ADVANCING] = ACTIONS(350),
    [sym__NUMVALC_FUNC] = ACTIONS(350),
    [anon_sym_quote] = ACTIONS(350),
    [anon_sym_QUOTE] = ACTIONS(350),
    [anon_sym_Quote] = ACTIONS(350),
    [sym__REVERSE_FUNC] = ACTIONS(350),
    [anon_sym_space] = ACTIONS(350),
    [anon_sym_SPACE] = ACTIONS(350),
    [anon_sym_Space] = ACTIONS(350),
    [sym__STOP] = ACTIONS(350),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(350),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(350),
    [anon_sym_null] = ACTIONS(350),
    [anon_sym_Null] = ACTIONS(350),
    [anon_sym_NULL] = ACTIONS(350),
    [sym__TRIM_FUNCTION] = ACTIONS(350),
    [sym__UPON] = ACTIONS(350),
    [sym__UPPER_CASE_FUNC] = ACTIONS(350),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(350),
    [sym__WITH] = ACTIONS(350),
    [anon_sym_zero] = ACTIONS(350),
    [anon_sym_ZERO] = ACTIONS(350),
    [anon_sym_Zero] = ACTIONS(350),
  },
  [76] = {
    [sym_WORD] = ACTIONS(354),
    [anon_sym_DOT] = ACTIONS(356),
    [sym_at_line_column] = ACTIONS(354),
    [sym_number] = ACTIONS(356),
    [aux_sym_x_string_token1] = ACTIONS(356),
    [aux_sym_x_string_token2] = ACTIONS(356),
    [aux_sym_h_string_token1] = ACTIONS(356),
    [aux_sym_h_string_token2] = ACTIONS(356),
    [aux_sym_n_string_token1] = ACTIONS(356),
    [aux_sym_n_string_token2] = ACTIONS(356),
    [aux_sym_n_string_token3] = ACTIONS(356),
    [aux_sym_n_string_token4] = ACTIONS(356),
    [aux_sym_n_string_token5] = ACTIONS(356),
    [aux_sym_n_string_token6] = ACTIONS(356),
    [aux_sym_n_string_token7] = ACTIONS(356),
    [aux_sym_n_string_token8] = ACTIONS(356),
    [sym__ADDRESS] = ACTIONS(354),
    [sym__ALL] = ACTIONS(354),
    [sym__CONCATENATE_FUNC] = ACTIONS(354),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(354),
    [sym__DISPLAY] = ACTIONS(354),
    [sym__END_DISPLAY] = ACTIONS(354),
    [sym__EXCEPTION] = ACTIONS(354),
    [sym__FUNCTION_NAME] = ACTIONS(354),
    [anon_sym_high_DASHvalue] = ACTIONS(354),
    [anon_sym_high_DASHValue] = ACTIONS(354),
    [anon_sym_high_DASHVALUE] = ACTIONS(354),
    [anon_sym_High_DASHvalue] = ACTIONS(354),
    [anon_sym_High_DASHValue] = ACTIONS(354),
    [anon_sym_High_DASHVALUE] = ACTIONS(354),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(354),
    [anon_sym_HIGH_DASHValue] = ACTIONS(354),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(354),
    [sym__LENGTH] = ACTIONS(354),
    [sym__LINAGE_COUNTER] = ACTIONS(354),
    [sym__LOCALE_DT_FUNC] = ACTIONS(354),
    [sym__LOWER_CASE_FUNC] = ACTIONS(354),
    [anon_sym_low_DASHvalue] = ACTIONS(354),
    [anon_sym_low_DASHValue] = ACTIONS(354),
    [anon_sym_low_DASHVALUE] = ACTIONS(354),
    [anon_sym_Low_DASHvalue] = ACTIONS(354),
    [anon_sym_Low_DASHValue] = ACTIONS(354),
    [anon_sym_Low_DASHVALUE] = ACTIONS(354),
    [anon_sym_LOW_DASHvalue] = ACTIONS(354),
    [anon_sym_LOW_DASHValue] = ACTIONS(354),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(354),
    [sym__MOVE] = ACTIONS(354),
    [sym__NOT_EXCEPTION] = ACTIONS(354),
    [sym__NO_ADVANCING] = ACTIONS(354),
    [sym__NUMVALC_FUNC] = ACTIONS(354),
    [anon_sym_quote] = ACTIONS(354),
    [anon_sym_QUOTE] = ACTIONS(354),
    [anon_sym_Quote] = ACTIONS(354),
    [sym__REVERSE_FUNC] = ACTIONS(354),
    [anon_sym_space] = ACTIONS(354),
    [anon_sym_SPACE] = ACTIONS(354),
    [anon_sym_Space] = ACTIONS(354),
    [sym__STOP] = ACTIONS(354),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(354),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(354),
    [anon_sym_null] = ACTIONS(354),
    [anon_sym_Null] = ACTIONS(354),
    [anon_sym_NULL] = ACTIONS(354),
    [sym__TRIM_FUNCTION] = ACTIONS(354),
    [sym__UPON] = ACTIONS(354),
    [sym__UPPER_CASE_FUNC] = ACTIONS(354),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(354),
    [sym__WITH] = ACTIONS(354),
    [anon_sym_zero] = ACTIONS(354),
    [anon_sym_ZERO] = ACTIONS(354),
    [anon_sym_Zero] = ACTIONS(354),
  },
  [77] = {
    [sym_WORD] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(360),
    [sym_at_line_column] = ACTIONS(358),
    [sym_number] = ACTIONS(360),
    [aux_sym_x_string_token1] = ACTIONS(360),
    [aux_sym_x_string_token2] = ACTIONS(360),
    [aux_sym_h_string_token1] = ACTIONS(360),
    [aux_sym_h_string_token2] = ACTIONS(360),
    [aux_sym_n_string_token1] = ACTIONS(360),
    [aux_sym_n_string_token2] = ACTIONS(360),
    [aux_sym_n_string_token3] = ACTIONS(360),
    [aux_sym_n_string_token4] = ACTIONS(360),
    [aux_sym_n_string_token5] = ACTIONS(360),
    [aux_sym_n_string_token6] = ACTIONS(360),
    [aux_sym_n_string_token7] = ACTIONS(360),
    [aux_sym_n_string_token8] = ACTIONS(360),
    [sym__ADDRESS] = ACTIONS(358),
    [sym__ALL] = ACTIONS(358),
    [sym__CONCATENATE_FUNC] = ACTIONS(358),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(358),
    [sym__DISPLAY] = ACTIONS(358),
    [sym__END_DISPLAY] = ACTIONS(358),
    [sym__EXCEPTION] = ACTIONS(358),
    [sym__FUNCTION_NAME] = ACTIONS(358),
    [anon_sym_high_DASHvalue] = ACTIONS(358),
    [anon_sym_high_DASHValue] = ACTIONS(358),
    [anon_sym_high_DASHVALUE] = ACTIONS(358),
    [anon_sym_High_DASHvalue] = ACTIONS(358),
    [anon_sym_High_DASHValue] = ACTIONS(358),
    [anon_sym_High_DASHVALUE] = ACTIONS(358),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(358),
    [anon_sym_HIGH_DASHValue] = ACTIONS(358),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(358),
    [sym__LENGTH] = ACTIONS(358),
    [sym__LINAGE_COUNTER] = ACTIONS(358),
    [sym__LOCALE_DT_FUNC] = ACTIONS(358),
    [sym__LOWER_CASE_FUNC] = ACTIONS(358),
    [anon_sym_low_DASHvalue] = ACTIONS(358),
    [anon_sym_low_DASHValue] = ACTIONS(358),
    [anon_sym_low_DASHVALUE] = ACTIONS(358),
    [anon_sym_Low_DASHvalue] = ACTIONS(358),
    [anon_sym_Low_DASHValue] = ACTIONS(358),
    [anon_sym_Low_DASHVALUE] = ACTIONS(358),
    [anon_sym_LOW_DASHvalue] = ACTIONS(358),
    [anon_sym_LOW_DASHValue] = ACTIONS(358),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(358),
    [sym__MOVE] = ACTIONS(358),
    [sym__NOT_EXCEPTION] = ACTIONS(358),
    [sym__NO_ADVANCING] = ACTIONS(358),
    [sym__NUMVALC_FUNC] = ACTIONS(358),
    [anon_sym_quote] = ACTIONS(358),
    [anon_sym_QUOTE] = ACTIONS(358),
    [anon_sym_Quote] = ACTIONS(358),
    [sym__REVERSE_FUNC] = ACTIONS(358),
    [anon_sym_space] = ACTIONS(358),
    [anon_sym_SPACE] = ACTIONS(358),
    [anon_sym_Space] = ACTIONS(358),
    [sym__STOP] = ACTIONS(358),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(358),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(358),
    [anon_sym_null] = ACTIONS(358),
    [anon_sym_Null] = ACTIONS(358),
    [anon_sym_NULL] = ACTIONS(358),
    [sym__TRIM_FUNCTION] = ACTIONS(358),
    [sym__UPON] = ACTIONS(358),
    [sym__UPPER_CASE_FUNC] = ACTIONS(358),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(358),
    [sym__WITH] = ACTIONS(358),
    [anon_sym_zero] = ACTIONS(358),
    [anon_sym_ZERO] = ACTIONS(358),
    [anon_sym_Zero] = ACTIONS(358),
  },
  [78] = {
    [sym_WORD] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(364),
    [sym_at_line_column] = ACTIONS(362),
    [sym_number] = ACTIONS(364),
    [aux_sym_x_string_token1] = ACTIONS(364),
    [aux_sym_x_string_token2] = ACTIONS(364),
    [aux_sym_h_string_token1] = ACTIONS(364),
    [aux_sym_h_string_token2] = ACTIONS(364),
    [aux_sym_n_string_token1] = ACTIONS(364),
    [aux_sym_n_string_token2] = ACTIONS(364),
    [aux_sym_n_string_token3] = ACTIONS(364),
    [aux_sym_n_string_token4] = ACTIONS(364),
    [aux_sym_n_string_token5] = ACTIONS(364),
    [aux_sym_n_string_token6] = ACTIONS(364),
    [aux_sym_n_string_token7] = ACTIONS(364),
    [aux_sym_n_string_token8] = ACTIONS(364),
    [sym__ADDRESS] = ACTIONS(362),
    [sym__ALL] = ACTIONS(362),
    [sym__CONCATENATE_FUNC] = ACTIONS(362),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(362),
    [sym__DISPLAY] = ACTIONS(362),
    [sym__END_DISPLAY] = ACTIONS(362),
    [sym__EXCEPTION] = ACTIONS(362),
    [sym__FUNCTION_NAME] = ACTIONS(362),
    [anon_sym_high_DASHvalue] = ACTIONS(362),
    [anon_sym_high_DASHValue] = ACTIONS(362),
    [anon_sym_high_DASHVALUE] = ACTIONS(362),
    [anon_sym_High_DASHvalue] = ACTIONS(362),
    [anon_sym_High_DASHValue] = ACTIONS(362),
    [anon_sym_High_DASHVALUE] = ACTIONS(362),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(362),
    [anon_sym_HIGH_DASHValue] = ACTIONS(362),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(362),
    [sym__LENGTH] = ACTIONS(362),
    [sym__LINAGE_COUNTER] = ACTIONS(362),
    [sym__LOCALE_DT_FUNC] = ACTIONS(362),
    [sym__LOWER_CASE_FUNC] = ACTIONS(362),
    [anon_sym_low_DASHvalue] = ACTIONS(362),
    [anon_sym_low_DASHValue] = ACTIONS(362),
    [anon_sym_low_DASHVALUE] = ACTIONS(362),
    [anon_sym_Low_DASHvalue] = ACTIONS(362),
    [anon_sym_Low_DASHValue] = ACTIONS(362),
    [anon_sym_Low_DASHVALUE] = ACTIONS(362),
    [anon_sym_LOW_DASHvalue] = ACTIONS(362),
    [anon_sym_LOW_DASHValue] = ACTIONS(362),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(362),
    [sym__MOVE] = ACTIONS(362),
    [sym__NOT_EXCEPTION] = ACTIONS(362),
    [sym__NO_ADVANCING] = ACTIONS(362),
    [sym__NUMVALC_FUNC] = ACTIONS(362),
    [anon_sym_quote] = ACTIONS(362),
    [anon_sym_QUOTE] = ACTIONS(362),
    [anon_sym_Quote] = ACTIONS(362),
    [sym__REVERSE_FUNC] = ACTIONS(362),
    [anon_sym_space] = ACTIONS(362),
    [anon_sym_SPACE] = ACTIONS(362),
    [anon_sym_Space] = ACTIONS(362),
    [sym__STOP] = ACTIONS(362),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(362),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(362),
    [anon_sym_null] = ACTIONS(362),
    [anon_sym_Null] = ACTIONS(362),
    [anon_sym_NULL] = ACTIONS(362),
    [sym__TRIM_FUNCTION] = ACTIONS(362),
    [sym__UPON] = ACTIONS(362),
    [sym__UPPER_CASE_FUNC] = ACTIONS(362),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(362),
    [sym__WITH] = ACTIONS(362),
    [anon_sym_zero] = ACTIONS(362),
    [anon_sym_ZERO] = ACTIONS(362),
    [anon_sym_Zero] = ACTIONS(362),
  },
  [79] = {
    [sym_WORD] = ACTIONS(366),
    [anon_sym_DOT] = ACTIONS(368),
    [sym_at_line_column] = ACTIONS(366),
    [sym_number] = ACTIONS(368),
    [aux_sym_x_string_token1] = ACTIONS(368),
    [aux_sym_x_string_token2] = ACTIONS(368),
    [aux_sym_h_string_token1] = ACTIONS(368),
    [aux_sym_h_string_token2] = ACTIONS(368),
    [aux_sym_n_string_token1] = ACTIONS(368),
    [aux_sym_n_string_token2] = ACTIONS(368),
    [aux_sym_n_string_token3] = ACTIONS(368),
    [aux_sym_n_string_token4] = ACTIONS(368),
    [aux_sym_n_string_token5] = ACTIONS(368),
    [aux_sym_n_string_token6] = ACTIONS(368),
    [aux_sym_n_string_token7] = ACTIONS(368),
    [aux_sym_n_string_token8] = ACTIONS(368),
    [sym__ADDRESS] = ACTIONS(366),
    [sym__ALL] = ACTIONS(366),
    [sym__CONCATENATE_FUNC] = ACTIONS(366),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(366),
    [sym__DISPLAY] = ACTIONS(366),
    [sym__END_DISPLAY] = ACTIONS(366),
    [sym__EXCEPTION] = ACTIONS(366),
    [sym__FUNCTION_NAME] = ACTIONS(366),
    [anon_sym_high_DASHvalue] = ACTIONS(366),
    [anon_sym_high_DASHValue] = ACTIONS(366),
    [anon_sym_high_DASHVALUE] = ACTIONS(366),
    [anon_sym_High_DASHvalue] = ACTIONS(366),
    [anon_sym_High_DASHValue] = ACTIONS(366),
    [anon_sym_High_DASHVALUE] = ACTIONS(366),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(366),
    [anon_sym_HIGH_DASHValue] = ACTIONS(366),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(366),
    [sym__LENGTH] = ACTIONS(366),
    [sym__LINAGE_COUNTER] = ACTIONS(366),
    [sym__LOCALE_DT_FUNC] = ACTIONS(366),
    [sym__LOWER_CASE_FUNC] = ACTIONS(366),
    [anon_sym_low_DASHvalue] = ACTIONS(366),
    [anon_sym_low_DASHValue] = ACTIONS(366),
    [anon_sym_low_DASHVALUE] = ACTIONS(366),
    [anon_sym_Low_DASHvalue] = ACTIONS(366),
    [anon_sym_Low_DASHValue] = ACTIONS(366),
    [anon_sym_Low_DASHVALUE] = ACTIONS(366),
    [anon_sym_LOW_DASHvalue] = ACTIONS(366),
    [anon_sym_LOW_DASHValue] = ACTIONS(366),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(366),
    [sym__MOVE] = ACTIONS(366),
    [sym__NOT_EXCEPTION] = ACTIONS(366),
    [sym__NO_ADVANCING] = ACTIONS(366),
    [sym__NUMVALC_FUNC] = ACTIONS(366),
    [anon_sym_quote] = ACTIONS(366),
    [anon_sym_QUOTE] = ACTIONS(366),
    [anon_sym_Quote] = ACTIONS(366),
    [sym__REVERSE_FUNC] = ACTIONS(366),
    [anon_sym_space] = ACTIONS(366),
    [anon_sym_SPACE] = ACTIONS(366),
    [anon_sym_Space] = ACTIONS(366),
    [sym__STOP] = ACTIONS(366),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(366),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(366),
    [anon_sym_null] = ACTIONS(366),
    [anon_sym_Null] = ACTIONS(366),
    [anon_sym_NULL] = ACTIONS(366),
    [sym__TRIM_FUNCTION] = ACTIONS(366),
    [sym__UPON] = ACTIONS(366),
    [sym__UPPER_CASE_FUNC] = ACTIONS(366),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(366),
    [sym__WITH] = ACTIONS(366),
    [anon_sym_zero] = ACTIONS(366),
    [anon_sym_ZERO] = ACTIONS(366),
    [anon_sym_Zero] = ACTIONS(366),
  },
  [80] = {
    [sym_WORD] = ACTIONS(370),
    [anon_sym_DOT] = ACTIONS(372),
    [sym_at_line_column] = ACTIONS(370),
    [sym_number] = ACTIONS(372),
    [aux_sym_x_string_token1] = ACTIONS(372),
    [aux_sym_x_string_token2] = ACTIONS(372),
    [aux_sym_h_string_token1] = ACTIONS(372),
    [aux_sym_h_string_token2] = ACTIONS(372),
    [aux_sym_n_string_token1] = ACTIONS(372),
    [aux_sym_n_string_token2] = ACTIONS(372),
    [aux_sym_n_string_token3] = ACTIONS(372),
    [aux_sym_n_string_token4] = ACTIONS(372),
    [aux_sym_n_string_token5] = ACTIONS(372),
    [aux_sym_n_string_token6] = ACTIONS(372),
    [aux_sym_n_string_token7] = ACTIONS(372),
    [aux_sym_n_string_token8] = ACTIONS(372),
    [sym__ADDRESS] = ACTIONS(370),
    [sym__ALL] = ACTIONS(370),
    [sym__CONCATENATE_FUNC] = ACTIONS(370),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(370),
    [sym__DISPLAY] = ACTIONS(370),
    [sym__END_DISPLAY] = ACTIONS(370),
    [sym__EXCEPTION] = ACTIONS(370),
    [sym__FUNCTION_NAME] = ACTIONS(370),
    [anon_sym_high_DASHvalue] = ACTIONS(370),
    [anon_sym_high_DASHValue] = ACTIONS(370),
    [anon_sym_high_DASHVALUE] = ACTIONS(370),
    [anon_sym_High_DASHvalue] = ACTIONS(370),
    [anon_sym_High_DASHValue] = ACTIONS(370),
    [anon_sym_High_DASHVALUE] = ACTIONS(370),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(370),
    [anon_sym_HIGH_DASHValue] = ACTIONS(370),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(370),
    [sym__LENGTH] = ACTIONS(370),
    [sym__LINAGE_COUNTER] = ACTIONS(370),
    [sym__LOCALE_DT_FUNC] = ACTIONS(370),
    [sym__LOWER_CASE_FUNC] = ACTIONS(370),
    [anon_sym_low_DASHvalue] = ACTIONS(370),
    [anon_sym_low_DASHValue] = ACTIONS(370),
    [anon_sym_low_DASHVALUE] = ACTIONS(370),
    [anon_sym_Low_DASHvalue] = ACTIONS(370),
    [anon_sym_Low_DASHValue] = ACTIONS(370),
    [anon_sym_Low_DASHVALUE] = ACTIONS(370),
    [anon_sym_LOW_DASHvalue] = ACTIONS(370),
    [anon_sym_LOW_DASHValue] = ACTIONS(370),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(370),
    [sym__MOVE] = ACTIONS(370),
    [sym__NOT_EXCEPTION] = ACTIONS(370),
    [sym__NO_ADVANCING] = ACTIONS(370),
    [sym__NUMVALC_FUNC] = ACTIONS(370),
    [anon_sym_quote] = ACTIONS(370),
    [anon_sym_QUOTE] = ACTIONS(370),
    [anon_sym_Quote] = ACTIONS(370),
    [sym__REVERSE_FUNC] = ACTIONS(370),
    [anon_sym_space] = ACTIONS(370),
    [anon_sym_SPACE] = ACTIONS(370),
    [anon_sym_Space] = ACTIONS(370),
    [sym__STOP] = ACTIONS(370),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(370),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(370),
    [anon_sym_null] = ACTIONS(370),
    [anon_sym_Null] = ACTIONS(370),
    [anon_sym_NULL] = ACTIONS(370),
    [sym__TRIM_FUNCTION] = ACTIONS(370),
    [sym__UPON] = ACTIONS(370),
    [sym__UPPER_CASE_FUNC] = ACTIONS(370),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(370),
    [sym__WITH] = ACTIONS(370),
    [anon_sym_zero] = ACTIONS(370),
    [anon_sym_ZERO] = ACTIONS(370),
    [anon_sym_Zero] = ACTIONS(370),
  },
  [81] = {
    [sym_WORD] = ACTIONS(374),
    [anon_sym_DOT] = ACTIONS(376),
    [sym_at_line_column] = ACTIONS(374),
    [sym_number] = ACTIONS(376),
    [aux_sym_x_string_token1] = ACTIONS(376),
    [aux_sym_x_string_token2] = ACTIONS(376),
    [aux_sym_h_string_token1] = ACTIONS(376),
    [aux_sym_h_string_token2] = ACTIONS(376),
    [aux_sym_n_string_token1] = ACTIONS(376),
    [aux_sym_n_string_token2] = ACTIONS(376),
    [aux_sym_n_string_token3] = ACTIONS(376),
    [aux_sym_n_string_token4] = ACTIONS(376),
    [aux_sym_n_string_token5] = ACTIONS(376),
    [aux_sym_n_string_token6] = ACTIONS(376),
    [aux_sym_n_string_token7] = ACTIONS(376),
    [aux_sym_n_string_token8] = ACTIONS(376),
    [sym__ADDRESS] = ACTIONS(374),
    [sym__ALL] = ACTIONS(374),
    [sym__CONCATENATE_FUNC] = ACTIONS(374),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(374),
    [sym__DISPLAY] = ACTIONS(374),
    [sym__END_DISPLAY] = ACTIONS(374),
    [sym__EXCEPTION] = ACTIONS(374),
    [sym__FUNCTION_NAME] = ACTIONS(374),
    [anon_sym_high_DASHvalue] = ACTIONS(374),
    [anon_sym_high_DASHValue] = ACTIONS(374),
    [anon_sym_high_DASHVALUE] = ACTIONS(374),
    [anon_sym_High_DASHvalue] = ACTIONS(374),
    [anon_sym_High_DASHValue] = ACTIONS(374),
    [anon_sym_High_DASHVALUE] = ACTIONS(374),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(374),
    [anon_sym_HIGH_DASHValue] = ACTIONS(374),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(374),
    [sym__LENGTH] = ACTIONS(374),
    [sym__LINAGE_COUNTER] = ACTIONS(374),
    [sym__LOCALE_DT_FUNC] = ACTIONS(374),
    [sym__LOWER_CASE_FUNC] = ACTIONS(374),
    [anon_sym_low_DASHvalue] = ACTIONS(374),
    [anon_sym_low_DASHValue] = ACTIONS(374),
    [anon_sym_low_DASHVALUE] = ACTIONS(374),
    [anon_sym_Low_DASHvalue] = ACTIONS(374),
    [anon_sym_Low_DASHValue] = ACTIONS(374),
    [anon_sym_Low_DASHVALUE] = ACTIONS(374),
    [anon_sym_LOW_DASHvalue] = ACTIONS(374),
    [anon_sym_LOW_DASHValue] = ACTIONS(374),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(374),
    [sym__MOVE] = ACTIONS(374),
    [sym__NOT_EXCEPTION] = ACTIONS(374),
    [sym__NO_ADVANCING] = ACTIONS(374),
    [sym__NUMVALC_FUNC] = ACTIONS(374),
    [anon_sym_quote] = ACTIONS(374),
    [anon_sym_QUOTE] = ACTIONS(374),
    [anon_sym_Quote] = ACTIONS(374),
    [sym__REVERSE_FUNC] = ACTIONS(374),
    [anon_sym_space] = ACTIONS(374),
    [anon_sym_SPACE] = ACTIONS(374),
    [anon_sym_Space] = ACTIONS(374),
    [sym__STOP] = ACTIONS(374),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(374),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(374),
    [anon_sym_null] = ACTIONS(374),
    [anon_sym_Null] = ACTIONS(374),
    [anon_sym_NULL] = ACTIONS(374),
    [sym__TRIM_FUNCTION] = ACTIONS(374),
    [sym__UPON] = ACTIONS(374),
    [sym__UPPER_CASE_FUNC] = ACTIONS(374),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(374),
    [sym__WITH] = ACTIONS(374),
    [anon_sym_zero] = ACTIONS(374),
    [anon_sym_ZERO] = ACTIONS(374),
    [anon_sym_Zero] = ACTIONS(374),
  },
  [82] = {
    [sym_WORD] = ACTIONS(336),
    [anon_sym_DOT] = ACTIONS(338),
    [sym_at_line_column] = ACTIONS(336),
    [sym_number] = ACTIONS(338),
    [aux_sym_x_string_token1] = ACTIONS(338),
    [aux_sym_x_string_token2] = ACTIONS(338),
    [aux_sym_h_string_token1] = ACTIONS(338),
    [aux_sym_h_string_token2] = ACTIONS(338),
    [aux_sym_n_string_token1] = ACTIONS(338),
    [aux_sym_n_string_token2] = ACTIONS(338),
    [aux_sym_n_string_token3] = ACTIONS(338),
    [aux_sym_n_string_token4] = ACTIONS(338),
    [aux_sym_n_string_token5] = ACTIONS(338),
    [aux_sym_n_string_token6] = ACTIONS(338),
    [aux_sym_n_string_token7] = ACTIONS(338),
    [aux_sym_n_string_token8] = ACTIONS(338),
    [sym__ADDRESS] = ACTIONS(336),
    [sym__ALL] = ACTIONS(336),
    [sym__CONCATENATE_FUNC] = ACTIONS(336),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(336),
    [sym__DISPLAY] = ACTIONS(336),
    [sym__END_DISPLAY] = ACTIONS(336),
    [sym__EXCEPTION] = ACTIONS(336),
    [sym__FUNCTION_NAME] = ACTIONS(336),
    [anon_sym_high_DASHvalue] = ACTIONS(336),
    [anon_sym_high_DASHValue] = ACTIONS(336),
    [anon_sym_high_DASHVALUE] = ACTIONS(336),
    [anon_sym_High_DASHvalue] = ACTIONS(336),
    [anon_sym_High_DASHValue] = ACTIONS(336),
    [anon_sym_High_DASHVALUE] = ACTIONS(336),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(336),
    [anon_sym_HIGH_DASHValue] = ACTIONS(336),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(336),
    [sym__LENGTH] = ACTIONS(336),
    [sym__LINAGE_COUNTER] = ACTIONS(336),
    [sym__LOCALE_DT_FUNC] = ACTIONS(336),
    [sym__LOWER_CASE_FUNC] = ACTIONS(336),
    [anon_sym_low_DASHvalue] = ACTIONS(336),
    [anon_sym_low_DASHValue] = ACTIONS(336),
    [anon_sym_low_DASHVALUE] = ACTIONS(336),
    [anon_sym_Low_DASHvalue] = ACTIONS(336),
    [anon_sym_Low_DASHValue] = ACTIONS(336),
    [anon_sym_Low_DASHVALUE] = ACTIONS(336),
    [anon_sym_LOW_DASHvalue] = ACTIONS(336),
    [anon_sym_LOW_DASHValue] = ACTIONS(336),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(336),
    [sym__MOVE] = ACTIONS(336),
    [sym__NOT_EXCEPTION] = ACTIONS(336),
    [sym__NO_ADVANCING] = ACTIONS(336),
    [sym__NUMVALC_FUNC] = ACTIONS(336),
    [anon_sym_quote] = ACTIONS(336),
    [anon_sym_QUOTE] = ACTIONS(336),
    [anon_sym_Quote] = ACTIONS(336),
    [sym__REVERSE_FUNC] = ACTIONS(336),
    [anon_sym_space] = ACTIONS(336),
    [anon_sym_SPACE] = ACTIONS(336),
    [anon_sym_Space] = ACTIONS(336),
    [sym__STOP] = ACTIONS(336),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(336),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(336),
    [anon_sym_null] = ACTIONS(336),
    [anon_sym_Null] = ACTIONS(336),
    [anon_sym_NULL] = ACTIONS(336),
    [sym__TRIM_FUNCTION] = ACTIONS(336),
    [sym__UPON] = ACTIONS(336),
    [sym__UPPER_CASE_FUNC] = ACTIONS(336),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(336),
    [sym__WITH] = ACTIONS(336),
    [anon_sym_zero] = ACTIONS(336),
    [anon_sym_ZERO] = ACTIONS(336),
    [anon_sym_Zero] = ACTIONS(336),
  },
  [83] = {
    [sym_WORD] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(380),
    [sym_at_line_column] = ACTIONS(378),
    [sym_number] = ACTIONS(380),
    [aux_sym_x_string_token1] = ACTIONS(380),
    [aux_sym_x_string_token2] = ACTIONS(380),
    [aux_sym_h_string_token1] = ACTIONS(380),
    [aux_sym_h_string_token2] = ACTIONS(380),
    [aux_sym_n_string_token1] = ACTIONS(380),
    [aux_sym_n_string_token2] = ACTIONS(380),
    [aux_sym_n_string_token3] = ACTIONS(380),
    [aux_sym_n_string_token4] = ACTIONS(380),
    [aux_sym_n_string_token5] = ACTIONS(380),
    [aux_sym_n_string_token6] = ACTIONS(380),
    [aux_sym_n_string_token7] = ACTIONS(380),
    [aux_sym_n_string_token8] = ACTIONS(380),
    [sym__ADDRESS] = ACTIONS(378),
    [sym__ALL] = ACTIONS(378),
    [sym__CONCATENATE_FUNC] = ACTIONS(378),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(378),
    [sym__DISPLAY] = ACTIONS(378),
    [sym__END_DISPLAY] = ACTIONS(378),
    [sym__EXCEPTION] = ACTIONS(378),
    [sym__FUNCTION_NAME] = ACTIONS(378),
    [anon_sym_high_DASHvalue] = ACTIONS(378),
    [anon_sym_high_DASHValue] = ACTIONS(378),
    [anon_sym_high_DASHVALUE] = ACTIONS(378),
    [anon_sym_High_DASHvalue] = ACTIONS(378),
    [anon_sym_High_DASHValue] = ACTIONS(378),
    [anon_sym_High_DASHVALUE] = ACTIONS(378),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(378),
    [anon_sym_HIGH_DASHValue] = ACTIONS(378),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(378),
    [sym__LENGTH] = ACTIONS(378),
    [sym__LINAGE_COUNTER] = ACTIONS(378),
    [sym__LOCALE_DT_FUNC] = ACTIONS(378),
    [sym__LOWER_CASE_FUNC] = ACTIONS(378),
    [anon_sym_low_DASHvalue] = ACTIONS(378),
    [anon_sym_low_DASHValue] = ACTIONS(378),
    [anon_sym_low_DASHVALUE] = ACTIONS(378),
    [anon_sym_Low_DASHvalue] = ACTIONS(378),
    [anon_sym_Low_DASHValue] = ACTIONS(378),
    [anon_sym_Low_DASHVALUE] = ACTIONS(378),
    [anon_sym_LOW_DASHvalue] = ACTIONS(378),
    [anon_sym_LOW_DASHValue] = ACTIONS(378),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(378),
    [sym__MOVE] = ACTIONS(378),
    [sym__NOT_EXCEPTION] = ACTIONS(378),
    [sym__NO_ADVANCING] = ACTIONS(378),
    [sym__NUMVALC_FUNC] = ACTIONS(378),
    [anon_sym_quote] = ACTIONS(378),
    [anon_sym_QUOTE] = ACTIONS(378),
    [anon_sym_Quote] = ACTIONS(378),
    [sym__REVERSE_FUNC] = ACTIONS(378),
    [anon_sym_space] = ACTIONS(378),
    [anon_sym_SPACE] = ACTIONS(378),
    [anon_sym_Space] = ACTIONS(378),
    [sym__STOP] = ACTIONS(378),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(378),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(378),
    [anon_sym_null] = ACTIONS(378),
    [anon_sym_Null] = ACTIONS(378),
    [anon_sym_NULL] = ACTIONS(378),
    [sym__TRIM_FUNCTION] = ACTIONS(378),
    [sym__UPON] = ACTIONS(378),
    [sym__UPPER_CASE_FUNC] = ACTIONS(378),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(378),
    [sym__WITH] = ACTIONS(378),
    [anon_sym_zero] = ACTIONS(378),
    [anon_sym_ZERO] = ACTIONS(378),
    [anon_sym_Zero] = ACTIONS(378),
  },
  [84] = {
    [sym_WORD] = ACTIONS(382),
    [anon_sym_DOT] = ACTIONS(384),
    [sym_at_line_column] = ACTIONS(382),
    [sym_number] = ACTIONS(384),
    [aux_sym_x_string_token1] = ACTIONS(384),
    [aux_sym_x_string_token2] = ACTIONS(384),
    [aux_sym_h_string_token1] = ACTIONS(384),
    [aux_sym_h_string_token2] = ACTIONS(384),
    [aux_sym_n_string_token1] = ACTIONS(384),
    [aux_sym_n_string_token2] = ACTIONS(384),
    [aux_sym_n_string_token3] = ACTIONS(384),
    [aux_sym_n_string_token4] = ACTIONS(384),
    [aux_sym_n_string_token5] = ACTIONS(384),
    [aux_sym_n_string_token6] = ACTIONS(384),
    [aux_sym_n_string_token7] = ACTIONS(384),
    [aux_sym_n_string_token8] = ACTIONS(384),
    [sym__ADDRESS] = ACTIONS(382),
    [sym__ALL] = ACTIONS(382),
    [sym__CONCATENATE_FUNC] = ACTIONS(382),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(382),
    [sym__DISPLAY] = ACTIONS(382),
    [sym__END_DISPLAY] = ACTIONS(382),
    [sym__EXCEPTION] = ACTIONS(382),
    [sym__FUNCTION_NAME] = ACTIONS(382),
    [anon_sym_high_DASHvalue] = ACTIONS(382),
    [anon_sym_high_DASHValue] = ACTIONS(382),
    [anon_sym_high_DASHVALUE] = ACTIONS(382),
    [anon_sym_High_DASHvalue] = ACTIONS(382),
    [anon_sym_High_DASHValue] = ACTIONS(382),
    [anon_sym_High_DASHVALUE] = ACTIONS(382),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(382),
    [anon_sym_HIGH_DASHValue] = ACTIONS(382),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(382),
    [sym__LENGTH] = ACTIONS(382),
    [sym__LINAGE_COUNTER] = ACTIONS(382),
    [sym__LOCALE_DT_FUNC] = ACTIONS(382),
    [sym__LOWER_CASE_FUNC] = ACTIONS(382),
    [anon_sym_low_DASHvalue] = ACTIONS(382),
    [anon_sym_low_DASHValue] = ACTIONS(382),
    [anon_sym_low_DASHVALUE] = ACTIONS(382),
    [anon_sym_Low_DASHvalue] = ACTIONS(382),
    [anon_sym_Low_DASHValue] = ACTIONS(382),
    [anon_sym_Low_DASHVALUE] = ACTIONS(382),
    [anon_sym_LOW_DASHvalue] = ACTIONS(382),
    [anon_sym_LOW_DASHValue] = ACTIONS(382),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(382),
    [sym__MOVE] = ACTIONS(382),
    [sym__NOT_EXCEPTION] = ACTIONS(382),
    [sym__NO_ADVANCING] = ACTIONS(382),
    [sym__NUMVALC_FUNC] = ACTIONS(382),
    [anon_sym_quote] = ACTIONS(382),
    [anon_sym_QUOTE] = ACTIONS(382),
    [anon_sym_Quote] = ACTIONS(382),
    [sym__REVERSE_FUNC] = ACTIONS(382),
    [anon_sym_space] = ACTIONS(382),
    [anon_sym_SPACE] = ACTIONS(382),
    [anon_sym_Space] = ACTIONS(382),
    [sym__STOP] = ACTIONS(382),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(382),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(382),
    [anon_sym_null] = ACTIONS(382),
    [anon_sym_Null] = ACTIONS(382),
    [anon_sym_NULL] = ACTIONS(382),
    [sym__TRIM_FUNCTION] = ACTIONS(382),
    [sym__UPON] = ACTIONS(382),
    [sym__UPPER_CASE_FUNC] = ACTIONS(382),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(382),
    [sym__WITH] = ACTIONS(382),
    [anon_sym_zero] = ACTIONS(382),
    [anon_sym_ZERO] = ACTIONS(382),
    [anon_sym_Zero] = ACTIONS(382),
  },
  [85] = {
    [sym_WORD] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(388),
    [sym_at_line_column] = ACTIONS(386),
    [sym_number] = ACTIONS(388),
    [aux_sym_x_string_token1] = ACTIONS(388),
    [aux_sym_x_string_token2] = ACTIONS(388),
    [aux_sym_h_string_token1] = ACTIONS(388),
    [aux_sym_h_string_token2] = ACTIONS(388),
    [aux_sym_n_string_token1] = ACTIONS(388),
    [aux_sym_n_string_token2] = ACTIONS(388),
    [aux_sym_n_string_token3] = ACTIONS(388),
    [aux_sym_n_string_token4] = ACTIONS(388),
    [aux_sym_n_string_token5] = ACTIONS(388),
    [aux_sym_n_string_token6] = ACTIONS(388),
    [aux_sym_n_string_token7] = ACTIONS(388),
    [aux_sym_n_string_token8] = ACTIONS(388),
    [sym__ADDRESS] = ACTIONS(386),
    [sym__ALL] = ACTIONS(386),
    [sym__CONCATENATE_FUNC] = ACTIONS(386),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(386),
    [sym__DISPLAY] = ACTIONS(386),
    [sym__END_DISPLAY] = ACTIONS(386),
    [sym__EXCEPTION] = ACTIONS(386),
    [sym__FUNCTION_NAME] = ACTIONS(386),
    [anon_sym_high_DASHvalue] = ACTIONS(386),
    [anon_sym_high_DASHValue] = ACTIONS(386),
    [anon_sym_high_DASHVALUE] = ACTIONS(386),
    [anon_sym_High_DASHvalue] = ACTIONS(386),
    [anon_sym_High_DASHValue] = ACTIONS(386),
    [anon_sym_High_DASHVALUE] = ACTIONS(386),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(386),
    [anon_sym_HIGH_DASHValue] = ACTIONS(386),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(386),
    [sym__LENGTH] = ACTIONS(386),
    [sym__LINAGE_COUNTER] = ACTIONS(386),
    [sym__LOCALE_DT_FUNC] = ACTIONS(386),
    [sym__LOWER_CASE_FUNC] = ACTIONS(386),
    [anon_sym_low_DASHvalue] = ACTIONS(386),
    [anon_sym_low_DASHValue] = ACTIONS(386),
    [anon_sym_low_DASHVALUE] = ACTIONS(386),
    [anon_sym_Low_DASHvalue] = ACTIONS(386),
    [anon_sym_Low_DASHValue] = ACTIONS(386),
    [anon_sym_Low_DASHVALUE] = ACTIONS(386),
    [anon_sym_LOW_DASHvalue] = ACTIONS(386),
    [anon_sym_LOW_DASHValue] = ACTIONS(386),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(386),
    [sym__MOVE] = ACTIONS(386),
    [sym__NOT_EXCEPTION] = ACTIONS(386),
    [sym__NO_ADVANCING] = ACTIONS(386),
    [sym__NUMVALC_FUNC] = ACTIONS(386),
    [anon_sym_quote] = ACTIONS(386),
    [anon_sym_QUOTE] = ACTIONS(386),
    [anon_sym_Quote] = ACTIONS(386),
    [sym__REVERSE_FUNC] = ACTIONS(386),
    [anon_sym_space] = ACTIONS(386),
    [anon_sym_SPACE] = ACTIONS(386),
    [anon_sym_Space] = ACTIONS(386),
    [sym__STOP] = ACTIONS(386),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(386),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(386),
    [anon_sym_null] = ACTIONS(386),
    [anon_sym_Null] = ACTIONS(386),
    [anon_sym_NULL] = ACTIONS(386),
    [sym__TRIM_FUNCTION] = ACTIONS(386),
    [sym__UPON] = ACTIONS(386),
    [sym__UPPER_CASE_FUNC] = ACTIONS(386),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(386),
    [sym__WITH] = ACTIONS(386),
    [anon_sym_zero] = ACTIONS(386),
    [anon_sym_ZERO] = ACTIONS(386),
    [anon_sym_Zero] = ACTIONS(386),
  },
  [86] = {
    [sym_WORD] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(392),
    [sym_at_line_column] = ACTIONS(390),
    [sym_number] = ACTIONS(392),
    [aux_sym_x_string_token1] = ACTIONS(392),
    [aux_sym_x_string_token2] = ACTIONS(392),
    [aux_sym_h_string_token1] = ACTIONS(392),
    [aux_sym_h_string_token2] = ACTIONS(392),
    [aux_sym_n_string_token1] = ACTIONS(392),
    [aux_sym_n_string_token2] = ACTIONS(392),
    [aux_sym_n_string_token3] = ACTIONS(392),
    [aux_sym_n_string_token4] = ACTIONS(392),
    [aux_sym_n_string_token5] = ACTIONS(392),
    [aux_sym_n_string_token6] = ACTIONS(392),
    [aux_sym_n_string_token7] = ACTIONS(392),
    [aux_sym_n_string_token8] = ACTIONS(392),
    [sym__ADDRESS] = ACTIONS(390),
    [sym__ALL] = ACTIONS(390),
    [sym__CONCATENATE_FUNC] = ACTIONS(390),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(390),
    [sym__DISPLAY] = ACTIONS(390),
    [sym__END_DISPLAY] = ACTIONS(390),
    [sym__EXCEPTION] = ACTIONS(390),
    [sym__FUNCTION_NAME] = ACTIONS(390),
    [anon_sym_high_DASHvalue] = ACTIONS(390),
    [anon_sym_high_DASHValue] = ACTIONS(390),
    [anon_sym_high_DASHVALUE] = ACTIONS(390),
    [anon_sym_High_DASHvalue] = ACTIONS(390),
    [anon_sym_High_DASHValue] = ACTIONS(390),
    [anon_sym_High_DASHVALUE] = ACTIONS(390),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(390),
    [anon_sym_HIGH_DASHValue] = ACTIONS(390),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(390),
    [sym__LENGTH] = ACTIONS(390),
    [sym__LINAGE_COUNTER] = ACTIONS(390),
    [sym__LOCALE_DT_FUNC] = ACTIONS(390),
    [sym__LOWER_CASE_FUNC] = ACTIONS(390),
    [anon_sym_low_DASHvalue] = ACTIONS(390),
    [anon_sym_low_DASHValue] = ACTIONS(390),
    [anon_sym_low_DASHVALUE] = ACTIONS(390),
    [anon_sym_Low_DASHvalue] = ACTIONS(390),
    [anon_sym_Low_DASHValue] = ACTIONS(390),
    [anon_sym_Low_DASHVALUE] = ACTIONS(390),
    [anon_sym_LOW_DASHvalue] = ACTIONS(390),
    [anon_sym_LOW_DASHValue] = ACTIONS(390),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(390),
    [sym__MOVE] = ACTIONS(390),
    [sym__NOT_EXCEPTION] = ACTIONS(390),
    [sym__NO_ADVANCING] = ACTIONS(390),
    [sym__NUMVALC_FUNC] = ACTIONS(390),
    [anon_sym_quote] = ACTIONS(390),
    [anon_sym_QUOTE] = ACTIONS(390),
    [anon_sym_Quote] = ACTIONS(390),
    [sym__REVERSE_FUNC] = ACTIONS(390),
    [anon_sym_space] = ACTIONS(390),
    [anon_sym_SPACE] = ACTIONS(390),
    [anon_sym_Space] = ACTIONS(390),
    [sym__STOP] = ACTIONS(390),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(390),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(390),
    [anon_sym_null] = ACTIONS(390),
    [anon_sym_Null] = ACTIONS(390),
    [anon_sym_NULL] = ACTIONS(390),
    [sym__TRIM_FUNCTION] = ACTIONS(390),
    [sym__UPON] = ACTIONS(390),
    [sym__UPPER_CASE_FUNC] = ACTIONS(390),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(390),
    [sym__WITH] = ACTIONS(390),
    [anon_sym_zero] = ACTIONS(390),
    [anon_sym_ZERO] = ACTIONS(390),
    [anon_sym_Zero] = ACTIONS(390),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(394), 1,
      sym_number,
    STATE(47), 1,
      sym__ZERO,
    STATE(62), 1,
      sym__LOW_VALUE,
    STATE(63), 1,
      sym__QUOTE,
    STATE(64), 1,
      sym__SPACE,
    STATE(65), 1,
      sym__TOK_NULL,
    STATE(66), 1,
      sym__HIGH_VALUE,
    ACTIONS(15), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(17), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    ACTIONS(400), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(402), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(404), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(406), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    ACTIONS(19), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(396), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(398), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
    STATE(67), 12,
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
    ACTIONS(408), 1,
      sym_number,
    STATE(172), 1,
      sym__ZERO,
    STATE(174), 1,
      sym__TOK_NULL,
    STATE(176), 1,
      sym__SPACE,
    STATE(177), 1,
      sym__HIGH_VALUE,
    STATE(178), 1,
      sym__LOW_VALUE,
    STATE(183), 1,
      sym__QUOTE,
    ACTIONS(89), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(91), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    ACTIONS(414), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(416), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(418), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(420), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    ACTIONS(93), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(410), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(412), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
    STATE(163), 12,
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
  [192] = 17,
    ACTIONS(422), 1,
      sym_number,
    STATE(47), 1,
      sym__ZERO,
    STATE(62), 1,
      sym__LOW_VALUE,
    STATE(63), 1,
      sym__QUOTE,
    STATE(64), 1,
      sym__SPACE,
    STATE(65), 1,
      sym__TOK_NULL,
    STATE(66), 1,
      sym__HIGH_VALUE,
    ACTIONS(15), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(17), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    ACTIONS(400), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(402), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(404), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(406), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    ACTIONS(19), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(396), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(398), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
    STATE(61), 12,
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
  [288] = 17,
    ACTIONS(424), 1,
      sym_number,
    STATE(172), 1,
      sym__ZERO,
    STATE(174), 1,
      sym__TOK_NULL,
    STATE(176), 1,
      sym__SPACE,
    STATE(177), 1,
      sym__HIGH_VALUE,
    STATE(178), 1,
      sym__LOW_VALUE,
    STATE(183), 1,
      sym__QUOTE,
    ACTIONS(89), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(91), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    ACTIONS(414), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(416), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(418), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(420), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    ACTIONS(93), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(410), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(412), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
    STATE(330), 12,
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
  [384] = 2,
    ACTIONS(428), 13,
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
    ACTIONS(426), 44,
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
  [446] = 1,
    ACTIONS(430), 43,
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
  [492] = 11,
    ACTIONS(432), 1,
      anon_sym_DOT,
    ACTIONS(436), 1,
      sym_number,
    ACTIONS(438), 1,
      sym__PIC,
    ACTIONS(440), 1,
      sym__PICTURE,
    ACTIONS(442), 1,
      sym__REDEFINES,
    ACTIONS(15), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(17), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(94), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    STATE(377), 5,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(19), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(434), 13,
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
  [554] = 11,
    ACTIONS(438), 1,
      sym__PIC,
    ACTIONS(440), 1,
      sym__PICTURE,
    ACTIONS(442), 1,
      sym__REDEFINES,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(448), 1,
      sym_number,
    ACTIONS(15), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(17), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(104), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    STATE(342), 5,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(19), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
    ACTIONS(446), 13,
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
  [616] = 5,
    ACTIONS(248), 1,
      sym__LINE,
    STATE(96), 1,
      aux_sym_qualified_word_repeat1,
    STATE(361), 1,
      sym__in_of,
    ACTIONS(450), 2,
      sym__IN,
      sym__OF,
    ACTIONS(250), 32,
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
  [664] = 5,
    ACTIONS(258), 1,
      sym__LINE,
    STATE(96), 1,
      aux_sym_qualified_word_repeat1,
    STATE(361), 1,
      sym__in_of,
    ACTIONS(452), 2,
      sym__IN,
      sym__OF,
    ACTIONS(260), 32,
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
  [712] = 5,
    ACTIONS(254), 1,
      sym__LINE,
    STATE(95), 1,
      aux_sym_qualified_word_repeat1,
    STATE(361), 1,
      sym__in_of,
    ACTIONS(450), 2,
      sym__IN,
      sym__OF,
    ACTIONS(256), 32,
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
  [760] = 19,
    ACTIONS(457), 1,
      sym__BACKGROUND_COLOR,
    ACTIONS(460), 1,
      sym__BELL,
    ACTIONS(463), 1,
      sym__BLANK_LINE,
    ACTIONS(466), 1,
      sym__BLANK_SCREEN,
    ACTIONS(469), 1,
      sym__BLINK,
    ACTIONS(472), 1,
      sym__ERASE,
    ACTIONS(475), 1,
      sym__FOREGROUND_COLOR,
    ACTIONS(478), 1,
      sym__HIGHLIGHT,
    ACTIONS(481), 1,
      sym__LOWLIGHT,
    ACTIONS(484), 1,
      sym__OVERLINE,
    ACTIONS(487), 1,
      sym__REVERSE_VIDEO,
    ACTIONS(490), 1,
      sym__SCROLL,
    ACTIONS(493), 1,
      sym__UNDERLINE,
    STATE(286), 1,
      sym_SCROLL_,
    STATE(288), 1,
      sym_ERASE_,
    STATE(98), 2,
      sym_disp_attr,
      aux_sym_with_clause_repeat1,
    STATE(165), 2,
      sym_BACKGROUND_COLOR_,
      sym_FOREGROUND_COLOR_,
    ACTIONS(455), 7,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__STOP,
    STATE(127), 9,
      sym_BELL_,
      sym_BLANK_LINE_,
      sym_BLANK_SCREEN_,
      sym_BLINK_,
      sym_HIGHLIGHT_,
      sym_LOWLIGHT_,
      sym_OVERLINE_,
      sym_REVERSE_VIDEO_,
      sym_UNDERLINE_,
  [834] = 5,
    ACTIONS(248), 1,
      sym__PIC,
    STATE(103), 1,
      aux_sym_qualified_word_repeat1,
    STATE(376), 1,
      sym__in_of,
    ACTIONS(496), 2,
      sym__IN,
      sym__OF,
    ACTIONS(250), 30,
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
  [880] = 19,
    ACTIONS(500), 1,
      sym__BACKGROUND_COLOR,
    ACTIONS(502), 1,
      sym__BELL,
    ACTIONS(504), 1,
      sym__BLANK_LINE,
    ACTIONS(506), 1,
      sym__BLANK_SCREEN,
    ACTIONS(508), 1,
      sym__BLINK,
    ACTIONS(510), 1,
      sym__ERASE,
    ACTIONS(512), 1,
      sym__FOREGROUND_COLOR,
    ACTIONS(514), 1,
      sym__HIGHLIGHT,
    ACTIONS(516), 1,
      sym__LOWLIGHT,
    ACTIONS(518), 1,
      sym__OVERLINE,
    ACTIONS(520), 1,
      sym__REVERSE_VIDEO,
    ACTIONS(522), 1,
      sym__SCROLL,
    ACTIONS(524), 1,
      sym__UNDERLINE,
    STATE(286), 1,
      sym_SCROLL_,
    STATE(288), 1,
      sym_ERASE_,
    STATE(98), 2,
      sym_disp_attr,
      aux_sym_with_clause_repeat1,
    STATE(165), 2,
      sym_BACKGROUND_COLOR_,
      sym_FOREGROUND_COLOR_,
    ACTIONS(498), 7,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__STOP,
    STATE(127), 9,
      sym_BELL_,
      sym_BLANK_LINE_,
      sym_BLANK_SCREEN_,
      sym_BLINK_,
      sym_HIGHLIGHT_,
      sym_LOWLIGHT_,
      sym_OVERLINE_,
      sym_REVERSE_VIDEO_,
      sym_UNDERLINE_,
  [954] = 5,
    ACTIONS(254), 1,
      sym__PIC,
    STATE(99), 1,
      aux_sym_qualified_word_repeat1,
    STATE(376), 1,
      sym__in_of,
    ACTIONS(496), 2,
      sym__IN,
      sym__OF,
    ACTIONS(256), 30,
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
  [1000] = 2,
    ACTIONS(258), 1,
      sym__LINE,
    ACTIONS(260), 34,
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
  [1040] = 5,
    ACTIONS(258), 1,
      sym__PIC,
    STATE(103), 1,
      aux_sym_qualified_word_repeat1,
    STATE(376), 1,
      sym__in_of,
    ACTIONS(526), 2,
      sym__IN,
      sym__OF,
    ACTIONS(260), 30,
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
  [1086] = 6,
    ACTIONS(534), 1,
      sym__PIC,
    ACTIONS(537), 1,
      sym__PICTURE,
    ACTIONS(540), 1,
      sym__REDEFINES,
    STATE(104), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    ACTIONS(531), 13,
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
    ACTIONS(529), 14,
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
  [1133] = 11,
    ACTIONS(77), 1,
      sym_WORD,
    ACTIONS(543), 1,
      anon_sym_DOT,
    ACTIONS(545), 1,
      sym_number,
    ACTIONS(549), 1,
      sym__BY,
    ACTIONS(551), 1,
      sym__IS,
    STATE(9), 1,
      sym_qualified_word,
    STATE(47), 1,
      sym__ZERO,
    STATE(134), 1,
      sym_scroll_lines,
    ACTIONS(75), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(116), 3,
      sym__identifier,
      sym__num_or_id_or_lit,
      sym_ZERO_,
    ACTIONS(547), 19,
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
  [1189] = 2,
    ACTIONS(258), 1,
      sym__PIC,
    ACTIONS(260), 32,
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
  [1227] = 10,
    ACTIONS(77), 1,
      sym_WORD,
    ACTIONS(545), 1,
      sym_number,
    ACTIONS(549), 1,
      sym__BY,
    ACTIONS(553), 1,
      anon_sym_DOT,
    STATE(9), 1,
      sym_qualified_word,
    STATE(47), 1,
      sym__ZERO,
    STATE(136), 1,
      sym_scroll_lines,
    ACTIONS(75), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(116), 3,
      sym__identifier,
      sym__num_or_id_or_lit,
      sym_ZERO_,
    ACTIONS(555), 19,
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
  [1280] = 2,
    ACTIONS(559), 1,
      sym__PIC,
    ACTIONS(557), 29,
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
  [1315] = 2,
    ACTIONS(563), 1,
      sym__PIC,
    ACTIONS(561), 29,
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
  [1350] = 20,
    ACTIONS(500), 1,
      sym__BACKGROUND_COLOR,
    ACTIONS(502), 1,
      sym__BELL,
    ACTIONS(504), 1,
      sym__BLANK_LINE,
    ACTIONS(506), 1,
      sym__BLANK_SCREEN,
    ACTIONS(508), 1,
      sym__BLINK,
    ACTIONS(510), 1,
      sym__ERASE,
    ACTIONS(512), 1,
      sym__FOREGROUND_COLOR,
    ACTIONS(514), 1,
      sym__HIGHLIGHT,
    ACTIONS(516), 1,
      sym__LOWLIGHT,
    ACTIONS(518), 1,
      sym__OVERLINE,
    ACTIONS(520), 1,
      sym__REVERSE_VIDEO,
    ACTIONS(522), 1,
      sym__SCROLL,
    ACTIONS(524), 1,
      sym__UNDERLINE,
    ACTIONS(565), 1,
      sym__NO_ADVANCING,
    STATE(240), 1,
      sym_NO_ADVANCING_,
    STATE(286), 1,
      sym_SCROLL_,
    STATE(288), 1,
      sym_ERASE_,
    STATE(100), 2,
      sym_disp_attr,
      aux_sym_with_clause_repeat1,
    STATE(165), 2,
      sym_BACKGROUND_COLOR_,
      sym_FOREGROUND_COLOR_,
    STATE(127), 9,
      sym_BELL_,
      sym_BLANK_LINE_,
      sym_BLANK_SCREEN_,
      sym_BLINK_,
      sym_HIGHLIGHT_,
      sym_LOWLIGHT_,
      sym_OVERLINE_,
      sym_REVERSE_VIDEO_,
      sym_UNDERLINE_,
  [1421] = 2,
    ACTIONS(569), 1,
      sym__PIC,
    ACTIONS(567), 29,
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
  [1456] = 2,
    ACTIONS(573), 1,
      sym__PIC,
    ACTIONS(571), 29,
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
  [1491] = 2,
    ACTIONS(577), 1,
      sym__PIC,
    ACTIONS(575), 29,
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
  [1526] = 2,
    ACTIONS(581), 2,
      anon_sym_DOT,
      sym_number,
    ACTIONS(579), 25,
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
      sym_WORD,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
  [1558] = 2,
    ACTIONS(585), 2,
      anon_sym_DOT,
      sym_number,
    ACTIONS(583), 25,
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
      sym_WORD,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
  [1590] = 5,
    ACTIONS(589), 1,
      sym__LINE,
    ACTIONS(591), 1,
      sym__LINES,
    STATE(139), 1,
      sym_line_or_lines,
    STATE(122), 2,
      sym_LINE_,
      sym_LINES_,
    ACTIONS(587), 20,
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
  [1626] = 5,
    ACTIONS(589), 1,
      sym__LINE,
    ACTIONS(591), 1,
      sym__LINES,
    STATE(142), 1,
      sym_line_or_lines,
    STATE(122), 2,
      sym_LINE_,
      sym_LINES_,
    ACTIONS(593), 20,
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
  [1662] = 7,
    ACTIONS(77), 1,
      sym_WORD,
    ACTIONS(595), 1,
      sym_number,
    STATE(149), 1,
      sym_qualified_word,
    ACTIONS(89), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(91), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(337), 6,
      sym__identifier,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(93), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1698] = 7,
    ACTIONS(7), 1,
      sym_WORD,
    ACTIONS(597), 1,
      sym_number,
    STATE(9), 1,
      sym_qualified_word,
    ACTIONS(15), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(17), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(83), 6,
      sym__identifier,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(19), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1734] = 7,
    ACTIONS(77), 1,
      sym_WORD,
    ACTIONS(599), 1,
      sym_number,
    STATE(149), 1,
      sym_qualified_word,
    ACTIONS(89), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(91), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(332), 6,
      sym__identifier,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(93), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1770] = 7,
    ACTIONS(7), 1,
      sym_WORD,
    ACTIONS(601), 1,
      sym_number,
    STATE(9), 1,
      sym_qualified_word,
    ACTIONS(15), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(17), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(79), 6,
      sym__identifier,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(19), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [1806] = 1,
    ACTIONS(603), 20,
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
  [1829] = 1,
    ACTIONS(605), 20,
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
  [1852] = 1,
    ACTIONS(607), 20,
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
  [1875] = 1,
    ACTIONS(609), 20,
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
  [1898] = 1,
    ACTIONS(543), 20,
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
  [1921] = 1,
    ACTIONS(611), 20,
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
  [1944] = 1,
    ACTIONS(613), 20,
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
  [1967] = 1,
    ACTIONS(615), 20,
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
  [1990] = 1,
    ACTIONS(617), 20,
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
  [2013] = 1,
    ACTIONS(619), 20,
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
  [2036] = 1,
    ACTIONS(621), 20,
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
  [2059] = 1,
    ACTIONS(623), 20,
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
  [2082] = 1,
    ACTIONS(553), 20,
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
  [2105] = 1,
    ACTIONS(625), 20,
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
  [2128] = 1,
    ACTIONS(627), 20,
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
  [2151] = 1,
    ACTIONS(629), 20,
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
  [2174] = 1,
    ACTIONS(631), 20,
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
  [2197] = 1,
    ACTIONS(593), 20,
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
  [2220] = 1,
    ACTIONS(633), 20,
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
  [2243] = 7,
    ACTIONS(635), 1,
      sym_WORD,
    ACTIONS(637), 1,
      sym_number,
    STATE(298), 1,
      sym_program_name,
    ACTIONS(15), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(17), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(308), 5,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(19), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [2278] = 1,
    ACTIONS(639), 20,
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
  [2301] = 5,
    ACTIONS(641), 1,
      sym_number,
    ACTIONS(15), 2,
      aux_sym_x_string_token1,
      aux_sym_x_string_token2,
    ACTIONS(17), 2,
      aux_sym_h_string_token1,
      aux_sym_h_string_token2,
    STATE(348), 5,
      sym__LITERAL,
      sym__string,
      sym_x_string,
      sym_h_string,
      sym_n_string,
    ACTIONS(19), 8,
      aux_sym_n_string_token1,
      aux_sym_n_string_token2,
      aux_sym_n_string_token3,
      aux_sym_n_string_token4,
      aux_sym_n_string_token5,
      aux_sym_n_string_token6,
      aux_sym_n_string_token7,
      aux_sym_n_string_token8,
  [2330] = 12,
    ACTIONS(565), 1,
      sym__NO_ADVANCING,
    ACTIONS(645), 1,
      sym__EXCEPTION,
    ACTIONS(647), 1,
      sym__NOT_EXCEPTION,
    ACTIONS(649), 1,
      sym__UPON,
    ACTIONS(651), 1,
      sym__WITH,
    STATE(110), 1,
      sym_WITH_,
    STATE(191), 1,
      sym_with_clause,
    STATE(232), 1,
      sym_NO_ADVANCING_,
    STATE(239), 1,
      sym_UPON_,
    STATE(278), 1,
      sym_on_disp_exception,
    STATE(190), 2,
      sym_EXCEPTION_,
      sym_NOT_EXCEPTION_,
    ACTIONS(643), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [2372] = 10,
    ACTIONS(565), 1,
      sym__NO_ADVANCING,
    ACTIONS(645), 1,
      sym__EXCEPTION,
    ACTIONS(647), 1,
      sym__NOT_EXCEPTION,
    ACTIONS(651), 1,
      sym__WITH,
    STATE(110), 1,
      sym_WITH_,
    STATE(187), 1,
      sym_with_clause,
    STATE(232), 1,
      sym_NO_ADVANCING_,
    STATE(263), 1,
      sym_on_disp_exception,
    STATE(190), 2,
      sym_EXCEPTION_,
      sym_NOT_EXCEPTION_,
    ACTIONS(653), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [2408] = 10,
    ACTIONS(565), 1,
      sym__NO_ADVANCING,
    ACTIONS(645), 1,
      sym__EXCEPTION,
    ACTIONS(647), 1,
      sym__NOT_EXCEPTION,
    ACTIONS(651), 1,
      sym__WITH,
    STATE(110), 1,
      sym_WITH_,
    STATE(192), 1,
      sym_with_clause,
    STATE(232), 1,
      sym_NO_ADVANCING_,
    STATE(273), 1,
      sym_on_disp_exception,
    STATE(190), 2,
      sym_EXCEPTION_,
      sym_NOT_EXCEPTION_,
    ACTIONS(655), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [2444] = 1,
    ACTIONS(657), 14,
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
  [2461] = 3,
    STATE(360), 1,
      sym__in_of,
    ACTIONS(659), 2,
      sym__IN,
      sym__OF,
    ACTIONS(326), 10,
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
  [2481] = 4,
    ACTIONS(661), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym_subref,
    STATE(197), 1,
      sym_refmod,
    ACTIONS(208), 10,
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
  [2503] = 6,
    ACTIONS(665), 1,
      sym__DISPLAY,
    ACTIONS(667), 1,
      sym__MOVE,
    ACTIONS(669), 1,
      sym__STOP,
    STATE(151), 1,
      aux_sym_procedure_division_repeat1,
    ACTIONS(663), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(331), 4,
      sym__statement,
      sym_stop_run_statement,
      sym_display_statement,
      sym_move_statement,
  [2528] = 6,
    ACTIONS(665), 1,
      sym__DISPLAY,
    ACTIONS(667), 1,
      sym__MOVE,
    ACTIONS(669), 1,
      sym__STOP,
    STATE(159), 1,
      aux_sym_procedure_division_repeat1,
    ACTIONS(671), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(331), 4,
      sym__statement,
      sym_stop_run_statement,
      sym_display_statement,
      sym_move_statement,
  [2553] = 5,
    STATE(152), 1,
      aux_sym_qualified_word_repeat1,
    STATE(372), 1,
      sym__in_of,
    ACTIONS(260), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(673), 2,
      sym__IN,
      sym__OF,
    ACTIONS(258), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym_WORD,
  [2576] = 3,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_func_refmod,
    ACTIONS(338), 10,
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
  [2595] = 3,
    ACTIONS(678), 1,
      anon_sym_AMP,
    STATE(154), 1,
      aux_sym__basic_literal_repeat1,
    ACTIONS(267), 10,
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
  [2614] = 5,
    STATE(152), 1,
      aux_sym_qualified_word_repeat1,
    STATE(372), 1,
      sym__in_of,
    ACTIONS(250), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(681), 2,
      sym__IN,
      sym__OF,
    ACTIONS(248), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym_WORD,
  [2637] = 5,
    STATE(155), 1,
      aux_sym_qualified_word_repeat1,
    STATE(372), 1,
      sym__in_of,
    ACTIONS(256), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(681), 2,
      sym__IN,
      sym__OF,
    ACTIONS(254), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym_WORD,
  [2660] = 3,
    ACTIONS(676), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym_func_refmod,
    ACTIONS(332), 10,
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
  [2679] = 3,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    STATE(199), 1,
      sym__func_args,
    ACTIONS(332), 10,
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
  [2698] = 6,
    ACTIONS(687), 1,
      sym__DISPLAY,
    ACTIONS(690), 1,
      sym__MOVE,
    ACTIONS(693), 1,
      sym__STOP,
    STATE(159), 1,
      aux_sym_procedure_division_repeat1,
    ACTIONS(685), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
    STATE(331), 4,
      sym__statement,
      sym_stop_run_statement,
      sym_display_statement,
      sym_move_statement,
  [2723] = 3,
    ACTIONS(696), 1,
      anon_sym_LPAREN,
    STATE(202), 1,
      sym_refmod,
    ACTIONS(216), 10,
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
  [2742] = 3,
    ACTIONS(698), 1,
      anon_sym_AMP,
    STATE(162), 1,
      aux_sym__basic_literal_repeat1,
    ACTIONS(292), 10,
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
  [2761] = 3,
    ACTIONS(698), 1,
      anon_sym_AMP,
    STATE(154), 1,
      aux_sym__basic_literal_repeat1,
    ACTIONS(286), 10,
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
  [2780] = 1,
    ACTIONS(267), 11,
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
  [2794] = 10,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(702), 1,
      anon_sym_COLON,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    STATE(32), 1,
      sym__e_sep,
    STATE(267), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(714), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2826] = 7,
    ACTIONS(77), 1,
      sym_WORD,
    ACTIONS(716), 1,
      sym_number,
    ACTIONS(718), 1,
      sym__IS,
    STATE(9), 1,
      sym_qualified_word,
    STATE(47), 1,
      sym__ZERO,
    ACTIONS(75), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(126), 3,
      sym__identifier,
      sym__num_or_id_or_lit,
      sym_ZERO_,
  [2852] = 1,
    ACTIONS(282), 11,
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
  [2866] = 1,
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
  [2880] = 1,
    ACTIONS(344), 11,
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
  [2894] = 1,
    ACTIONS(274), 11,
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
  [2908] = 1,
    ACTIONS(348), 11,
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
  [2922] = 10,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(720), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym__e_sep,
    STATE(267), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(714), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [2954] = 1,
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
  [2968] = 6,
    ACTIONS(722), 1,
      sym_WORD,
    ACTIONS(724), 1,
      anon_sym_DOT,
    ACTIONS(726), 1,
      sym__ADDRESS,
    STATE(185), 1,
      sym_qualified_word,
    STATE(180), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
    ACTIONS(728), 4,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [2992] = 1,
    ACTIONS(308), 11,
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
  [3006] = 1,
    ACTIONS(352), 11,
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
  [3020] = 1,
    ACTIONS(304), 11,
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
  [3034] = 1,
    ACTIONS(312), 11,
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
  [3048] = 1,
    ACTIONS(296), 11,
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
  [3062] = 1,
    ACTIONS(222), 11,
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
  [3076] = 6,
    ACTIONS(730), 1,
      sym_WORD,
    ACTIONS(733), 1,
      anon_sym_DOT,
    ACTIONS(735), 1,
      sym__ADDRESS,
    STATE(185), 1,
      sym_qualified_word,
    STATE(180), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
    ACTIONS(738), 4,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3100] = 6,
    ACTIONS(722), 1,
      sym_WORD,
    ACTIONS(726), 1,
      sym__ADDRESS,
    ACTIONS(740), 1,
      anon_sym_DOT,
    STATE(185), 1,
      sym_qualified_word,
    STATE(180), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
    ACTIONS(742), 4,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3124] = 10,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(744), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym__e_sep,
    STATE(267), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(714), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3156] = 1,
    ACTIONS(300), 11,
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
  [3170] = 6,
    ACTIONS(746), 1,
      sym_level_number,
    ACTIONS(749), 1,
      sym_level_number_88,
    ACTIONS(752), 1,
      sym_constant_entry,
    STATE(184), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(340), 1,
      sym_data_description,
    ACTIONS(755), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [3193] = 5,
    ACTIONS(208), 1,
      anon_sym_DOT,
    ACTIONS(757), 1,
      anon_sym_LPAREN,
    STATE(211), 1,
      sym_subref,
    STATE(241), 1,
      sym_refmod,
    ACTIONS(206), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym_WORD,
  [3214] = 6,
    ACTIONS(77), 1,
      sym_WORD,
    ACTIONS(759), 1,
      sym_number,
    STATE(9), 1,
      sym_qualified_word,
    STATE(47), 1,
      sym__ZERO,
    ACTIONS(75), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(134), 3,
      sym__identifier,
      sym__num_or_id_or_lit,
      sym_ZERO_,
  [3237] = 5,
    ACTIONS(645), 1,
      sym__EXCEPTION,
    ACTIONS(647), 1,
      sym__NOT_EXCEPTION,
    STATE(273), 1,
      sym_on_disp_exception,
    STATE(190), 2,
      sym_EXCEPTION_,
      sym_NOT_EXCEPTION_,
    ACTIONS(655), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3258] = 5,
    ACTIONS(763), 1,
      sym__DISPLAY,
    ACTIONS(766), 1,
      sym__MOVE,
    ACTIONS(769), 1,
      sym__STOP,
    ACTIONS(761), 2,
      anon_sym_DOT,
      sym__END_DISPLAY,
    STATE(188), 5,
      sym__statement,
      sym_stop_run_statement,
      sym_display_statement,
      sym_move_statement,
      aux_sym_on_disp_exception_repeat1,
  [3279] = 5,
    ACTIONS(665), 1,
      sym__DISPLAY,
    ACTIONS(667), 1,
      sym__MOVE,
    ACTIONS(669), 1,
      sym__STOP,
    ACTIONS(772), 2,
      anon_sym_DOT,
      sym__END_DISPLAY,
    STATE(188), 5,
      sym__statement,
      sym_stop_run_statement,
      sym_display_statement,
      sym_move_statement,
      aux_sym_on_disp_exception_repeat1,
  [3300] = 5,
    ACTIONS(665), 1,
      sym__DISPLAY,
    ACTIONS(667), 1,
      sym__MOVE,
    ACTIONS(669), 1,
      sym__STOP,
    ACTIONS(774), 2,
      anon_sym_DOT,
      sym__END_DISPLAY,
    STATE(189), 5,
      sym__statement,
      sym_stop_run_statement,
      sym_display_statement,
      sym_move_statement,
      aux_sym_on_disp_exception_repeat1,
  [3321] = 5,
    ACTIONS(645), 1,
      sym__EXCEPTION,
    ACTIONS(647), 1,
      sym__NOT_EXCEPTION,
    STATE(263), 1,
      sym_on_disp_exception,
    STATE(190), 2,
      sym_EXCEPTION_,
      sym_NOT_EXCEPTION_,
    ACTIONS(653), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3342] = 5,
    ACTIONS(645), 1,
      sym__EXCEPTION,
    ACTIONS(647), 1,
      sym__NOT_EXCEPTION,
    STATE(269), 1,
      sym_on_disp_exception,
    STATE(190), 2,
      sym_EXCEPTION_,
      sym_NOT_EXCEPTION_,
    ACTIONS(776), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3363] = 9,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(778), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym__e_sep,
    STATE(264), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(714), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3392] = 6,
    ACTIONS(77), 1,
      sym_WORD,
    ACTIONS(780), 1,
      sym_number,
    STATE(9), 1,
      sym_qualified_word,
    STATE(47), 1,
      sym__ZERO,
    ACTIONS(75), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(117), 3,
      sym__identifier,
      sym__num_or_id_or_lit,
      sym_ZERO_,
  [3415] = 9,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    STATE(32), 1,
      sym__e_sep,
    STATE(267), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(714), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3444] = 6,
    ACTIONS(782), 1,
      sym_level_number,
    ACTIONS(784), 1,
      sym_level_number_88,
    ACTIONS(786), 1,
      sym_constant_entry,
    STATE(204), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(340), 1,
      sym_data_description,
    ACTIONS(788), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [3467] = 1,
    ACTIONS(216), 10,
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
  [3480] = 2,
    ACTIONS(260), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(258), 8,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__IN,
      sym__MOVE,
      sym__OF,
      sym__STOP,
      sym_WORD,
  [3495] = 1,
    ACTIONS(364), 10,
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
  [3508] = 1,
    ACTIONS(372), 10,
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
  [3521] = 5,
    ACTIONS(645), 1,
      sym__EXCEPTION,
    ACTIONS(647), 1,
      sym__NOT_EXCEPTION,
    STATE(278), 1,
      sym_on_disp_exception,
    STATE(190), 2,
      sym_EXCEPTION_,
      sym_NOT_EXCEPTION_,
    ACTIONS(643), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [3542] = 1,
    ACTIONS(226), 10,
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
  [3555] = 1,
    ACTIONS(356), 10,
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
  [3568] = 6,
    ACTIONS(782), 1,
      sym_level_number,
    ACTIONS(784), 1,
      sym_level_number_88,
    ACTIONS(786), 1,
      sym_constant_entry,
    STATE(184), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(340), 1,
      sym_data_description,
    ACTIONS(790), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [3591] = 1,
    ACTIONS(360), 10,
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
  [3604] = 1,
    ACTIONS(338), 10,
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
  [3617] = 1,
    ACTIONS(230), 10,
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
  [3630] = 1,
    ACTIONS(376), 10,
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
  [3643] = 1,
    ACTIONS(384), 10,
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
  [3656] = 1,
    ACTIONS(388), 10,
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
  [3669] = 4,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    STATE(236), 1,
      sym_refmod,
    ACTIONS(214), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym_WORD,
  [3687] = 1,
    ACTIONS(794), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3699] = 1,
    ACTIONS(796), 9,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__NO_ADVANCING,
      sym__STOP,
      sym__WITH,
  [3711] = 1,
    ACTIONS(798), 9,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__NO_ADVANCING,
      sym__STOP,
      sym__WITH,
  [3723] = 1,
    ACTIONS(800), 9,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__NO_ADVANCING,
      sym__STOP,
      sym__WITH,
  [3735] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(802), 4,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3757] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(804), 4,
      anon_sym_RPAREN,
      anon_sym_COLON,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3779] = 8,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(806), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      sym__e_sep,
    ACTIONS(808), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3805] = 1,
    ACTIONS(810), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3817] = 4,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(812), 6,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3835] = 4,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(814), 6,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3853] = 2,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(816), 8,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3867] = 2,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(818), 8,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3881] = 8,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      sym__e_sep,
    ACTIONS(822), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3907] = 1,
    ACTIONS(824), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3919] = 1,
    ACTIONS(826), 9,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_CARET,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3931] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(828), 3,
      anon_sym_RPAREN,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [3952] = 2,
    ACTIONS(830), 1,
      sym_level_number_88,
    ACTIONS(755), 7,
      sym_level_number,
      sym_constant_entry,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [3965] = 8,
    ACTIONS(832), 1,
      sym_file_section,
    ACTIONS(834), 1,
      sym_local_storage_section,
    ACTIONS(836), 1,
      sym_linkage_section,
    ACTIONS(838), 1,
      sym_report_section,
    ACTIONS(840), 1,
      sym_screen_section,
    ACTIONS(842), 1,
      sym__PROCEDURE,
    ACTIONS(844), 1,
      sym__WORKING_STORAGE,
    STATE(276), 1,
      sym_working_storage_section,
  [3990] = 2,
    ACTIONS(222), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(220), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym_WORD,
  [4003] = 7,
    ACTIONS(844), 1,
      sym__WORKING_STORAGE,
    ACTIONS(846), 1,
      sym_local_storage_section,
    ACTIONS(848), 1,
      sym_linkage_section,
    ACTIONS(850), 1,
      sym_report_section,
    ACTIONS(852), 1,
      sym_screen_section,
    ACTIONS(854), 1,
      sym__PROCEDURE,
    STATE(268), 1,
      sym_working_storage_section,
  [4025] = 1,
    ACTIONS(856), 7,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__STOP,
  [4035] = 5,
    ACTIONS(858), 1,
      sym_WORD,
    ACTIONS(860), 1,
      sym__CRT,
    ACTIONS(862), 1,
      sym__MNEMONIC_NAME,
    ACTIONS(864), 1,
      sym__PRINTER,
    STATE(145), 3,
      sym_CRT_,
      sym_MNEMONIC_NAME_,
      sym_PRINTER_,
  [4053] = 2,
    ACTIONS(868), 1,
      anon_sym_DOT,
    ACTIONS(866), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym_WORD,
  [4065] = 1,
    ACTIONS(685), 7,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__DISPLAY,
      sym__IDENTIFICATION,
      sym__MOVE,
      sym__STOP,
  [4075] = 2,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(224), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym_WORD,
  [4087] = 1,
    ACTIONS(870), 7,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__STOP,
  [4097] = 2,
    ACTIONS(874), 1,
      anon_sym_DOT,
    ACTIONS(872), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym_WORD,
  [4109] = 5,
    ACTIONS(860), 1,
      sym__CRT,
    ACTIONS(862), 1,
      sym__MNEMONIC_NAME,
    ACTIONS(864), 1,
      sym__PRINTER,
    ACTIONS(876), 1,
      sym_WORD,
    STATE(146), 3,
      sym_CRT_,
      sym_MNEMONIC_NAME_,
      sym_PRINTER_,
  [4127] = 1,
    ACTIONS(498), 7,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__EXCEPTION,
      sym__MOVE,
      sym__NOT_EXCEPTION,
      sym__STOP,
  [4137] = 2,
    ACTIONS(216), 1,
      anon_sym_DOT,
    ACTIONS(214), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym_WORD,
  [4149] = 2,
    ACTIONS(230), 1,
      anon_sym_DOT,
    ACTIONS(228), 6,
      sym__ADDRESS,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
      sym_WORD,
  [4161] = 2,
    ACTIONS(880), 1,
      sym_number,
    ACTIONS(878), 5,
      sym__IS,
      sym_WORD,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
  [4172] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(744), 1,
      anon_sym_COLON,
  [4191] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(882), 1,
      anon_sym_RPAREN,
  [4210] = 2,
    ACTIONS(886), 1,
      sym_number,
    ACTIONS(884), 5,
      sym__IS,
      sym_WORD,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
  [4221] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
  [4240] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(890), 1,
      anon_sym_COLON,
  [4259] = 4,
    ACTIONS(722), 1,
      sym_WORD,
    ACTIONS(726), 1,
      sym__ADDRESS,
    STATE(185), 1,
      sym_qualified_word,
    STATE(181), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [4274] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(892), 1,
      anon_sym_COLON,
  [4293] = 4,
    ACTIONS(722), 1,
      sym_WORD,
    ACTIONS(726), 1,
      sym__ADDRESS,
    STATE(185), 1,
      sym_qualified_word,
    STATE(173), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [4308] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
  [4327] = 5,
    ACTIONS(7), 1,
      sym_WORD,
    ACTIONS(898), 1,
      sym__OF,
    STATE(9), 1,
      sym_qualified_word,
    STATE(86), 1,
      sym__identifier,
    ACTIONS(896), 2,
      sym__ENTRY,
      sym__PROGRAM,
  [4344] = 5,
    ACTIONS(900), 1,
      sym_picture_x,
    ACTIONS(902), 1,
      sym__picture_9_z,
    ACTIONS(904), 1,
      sym__picture_9_v,
    ACTIONS(906), 1,
      sym__IS,
    STATE(108), 2,
      sym__picture_string,
      sym_picture_9,
  [4361] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
  [4380] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(720), 1,
      anon_sym_COLON,
  [4399] = 5,
    ACTIONS(77), 1,
      sym_WORD,
    ACTIONS(912), 1,
      sym__OF,
    STATE(149), 1,
      sym_qualified_word,
    STATE(359), 1,
      sym__identifier,
    ACTIONS(910), 2,
      sym__ENTRY,
      sym__PROGRAM,
  [4416] = 6,
    ACTIONS(702), 1,
      anon_sym_COLON,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
  [4435] = 6,
    ACTIONS(704), 1,
      anon_sym_PLUS,
    ACTIONS(706), 1,
      anon_sym_DASH,
    ACTIONS(708), 1,
      anon_sym_STAR,
    ACTIONS(710), 1,
      anon_sym_SLASH,
    ACTIONS(712), 1,
      anon_sym_CARET,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
  [4454] = 1,
    ACTIONS(916), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4462] = 1,
    ACTIONS(918), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4470] = 4,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
    ACTIONS(922), 1,
      sym__IDENTIFICATION,
    STATE(270), 1,
      sym_identification_division,
    STATE(262), 2,
      sym_program_definition,
      aux_sym_start_repeat1,
  [4484] = 1,
    ACTIONS(655), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4492] = 4,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym__e_sep,
    STATE(266), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(714), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4506] = 2,
    ACTIONS(929), 1,
      sym__END_DISPLAY,
    ACTIONS(927), 4,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4516] = 4,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym__e_sep,
    STATE(266), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(931), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4530] = 4,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym__e_sep,
    STATE(266), 1,
      aux_sym__exp_list_repeat1,
    ACTIONS(714), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [4544] = 5,
    ACTIONS(936), 1,
      sym_local_storage_section,
    ACTIONS(938), 1,
      sym_linkage_section,
    ACTIONS(940), 1,
      sym_report_section,
    ACTIONS(942), 1,
      sym_screen_section,
    ACTIONS(944), 1,
      sym__PROCEDURE,
  [4560] = 1,
    ACTIONS(946), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4568] = 5,
    ACTIONS(948), 1,
      sym_environment_division,
    ACTIONS(950), 1,
      sym__DATA,
    ACTIONS(952), 1,
      sym__PROCEDURE,
    STATE(285), 1,
      sym_procedure_division,
    STATE(316), 1,
      sym_data_division,
  [4584] = 1,
    ACTIONS(643), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4592] = 4,
    ACTIONS(7), 1,
      sym_WORD,
    STATE(9), 1,
      sym_qualified_word,
    STATE(83), 1,
      sym__identifier,
    ACTIONS(954), 2,
      sym__ENTRY,
      sym__PROGRAM,
  [4606] = 1,
    ACTIONS(776), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4614] = 4,
    ACTIONS(5), 1,
      sym__IDENTIFICATION,
    ACTIONS(956), 1,
      ts_builtin_sym_end,
    STATE(270), 1,
      sym_identification_division,
    STATE(262), 2,
      sym_program_definition,
      aux_sym_start_repeat1,
  [4628] = 1,
    ACTIONS(958), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4636] = 5,
    ACTIONS(846), 1,
      sym_local_storage_section,
    ACTIONS(848), 1,
      sym_linkage_section,
    ACTIONS(850), 1,
      sym_report_section,
    ACTIONS(852), 1,
      sym_screen_section,
    ACTIONS(854), 1,
      sym__PROCEDURE,
  [4652] = 1,
    ACTIONS(960), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4660] = 1,
    ACTIONS(653), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4668] = 1,
    ACTIONS(962), 5,
      anon_sym_DOT,
      sym__DISPLAY,
      sym__END_DISPLAY,
      sym__MOVE,
      sym__STOP,
  [4676] = 4,
    ACTIONS(77), 1,
      sym_WORD,
    STATE(149), 1,
      sym_qualified_word,
    STATE(332), 1,
      sym__identifier,
    ACTIONS(964), 2,
      sym__ENTRY,
      sym__PROGRAM,
  [4690] = 4,
    ACTIONS(902), 1,
      sym__picture_9_z,
    ACTIONS(904), 1,
      sym__picture_9_v,
    ACTIONS(966), 1,
      sym_picture_x,
    STATE(112), 2,
      sym__picture_string,
      sym_picture_9,
  [4704] = 3,
    ACTIONS(970), 1,
      sym_nested_prog,
    ACTIONS(972), 1,
      sym_end_program,
    ACTIONS(968), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [4715] = 4,
    ACTIONS(974), 1,
      sym_linkage_section,
    ACTIONS(976), 1,
      sym_report_section,
    ACTIONS(978), 1,
      sym_screen_section,
    ACTIONS(980), 1,
      sym__PROCEDURE,
  [4728] = 4,
    ACTIONS(950), 1,
      sym__DATA,
    ACTIONS(952), 1,
      sym__PROCEDURE,
    STATE(291), 1,
      sym_procedure_division,
    STATE(311), 1,
      sym_data_division,
  [4741] = 3,
    ACTIONS(984), 1,
      sym_nested_prog,
    ACTIONS(986), 1,
      sym_end_program,
    ACTIONS(982), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [4752] = 3,
    ACTIONS(988), 1,
      sym__DOWN,
    ACTIONS(990), 1,
      sym__UP,
    STATE(105), 2,
      sym_DOWN_,
      sym_UP_,
  [4763] = 1,
    ACTIONS(992), 4,
      sym__CRT,
      sym__MNEMONIC_NAME,
      sym__PRINTER,
      sym_WORD,
  [4770] = 3,
    ACTIONS(994), 1,
      sym__EOL,
    ACTIONS(996), 1,
      sym__EOS,
    STATE(126), 2,
      sym_EOL_,
      sym_EOS_,
  [4781] = 4,
    ACTIONS(722), 1,
      sym_WORD,
    ACTIONS(998), 1,
      sym__OF,
    STATE(185), 1,
      sym_qualified_word,
    STATE(238), 1,
      sym__identifier,
  [4794] = 1,
    ACTIONS(1000), 4,
      sym__UPON_ARGUMENT_NUMBER,
      sym__UPON_COMMAND_LINE,
      sym__UPON_ENVIRONMENT_NAME,
      sym__UPON_ENVIRONMENT_VALUE,
  [4801] = 3,
    ACTIONS(1004), 1,
      sym_nested_prog,
    ACTIONS(1006), 1,
      sym_end_program,
    ACTIONS(1002), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [4812] = 4,
    ACTIONS(938), 1,
      sym_linkage_section,
    ACTIONS(940), 1,
      sym_report_section,
    ACTIONS(942), 1,
      sym_screen_section,
    ACTIONS(944), 1,
      sym__PROCEDURE,
  [4825] = 4,
    ACTIONS(848), 1,
      sym_linkage_section,
    ACTIONS(850), 1,
      sym_report_section,
    ACTIONS(852), 1,
      sym_screen_section,
    ACTIONS(854), 1,
      sym__PROCEDURE,
  [4838] = 2,
    ACTIONS(1006), 1,
      sym_end_program,
    ACTIONS(1002), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [4846] = 2,
    STATE(383), 1,
      sym_entry_name,
    ACTIONS(1008), 2,
      sym__FILLER,
      sym_WORD,
  [4854] = 2,
    ACTIONS(972), 1,
      sym_end_program,
    ACTIONS(968), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [4862] = 3,
    ACTIONS(940), 1,
      sym_report_section,
    ACTIONS(942), 1,
      sym_screen_section,
    ACTIONS(944), 1,
      sym__PROCEDURE,
  [4872] = 3,
    ACTIONS(1010), 1,
      anon_sym_DOT,
    ACTIONS(1012), 1,
      sym__AS,
    STATE(336), 1,
      sym_as_literal,
  [4882] = 3,
    ACTIONS(850), 1,
      sym_report_section,
    ACTIONS(852), 1,
      sym_screen_section,
    ACTIONS(854), 1,
      sym__PROCEDURE,
  [4892] = 3,
    ACTIONS(1014), 1,
      sym_WORD,
    STATE(185), 1,
      sym_qualified_word,
    STATE(234), 1,
      sym__identifier,
  [4902] = 1,
    ACTIONS(1016), 3,
      sym_environment_division,
      sym__DATA,
      sym__PROCEDURE,
  [4908] = 3,
    ACTIONS(976), 1,
      sym_report_section,
    ACTIONS(978), 1,
      sym_screen_section,
    ACTIONS(980), 1,
      sym__PROCEDURE,
  [4918] = 3,
    ACTIONS(1018), 1,
      sym_WORD,
    STATE(9), 1,
      sym_qualified_word,
    STATE(109), 1,
      sym__identifier,
  [4928] = 2,
    STATE(93), 1,
      sym_entry_name,
    ACTIONS(1008), 2,
      sym__FILLER,
      sym_WORD,
  [4936] = 3,
    ACTIONS(1020), 1,
      sym_report_section,
    ACTIONS(1022), 1,
      sym_screen_section,
    ACTIONS(1024), 1,
      sym__PROCEDURE,
  [4946] = 1,
    ACTIONS(1026), 3,
      sym_environment_division,
      sym__DATA,
      sym__PROCEDURE,
  [4952] = 2,
    ACTIONS(1030), 1,
      sym_end_program,
    ACTIONS(1028), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [4960] = 1,
    ACTIONS(1032), 2,
      anon_sym_DOT,
      sym__AS,
  [4965] = 1,
    ACTIONS(1028), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [4970] = 1,
    ACTIONS(1034), 2,
      sym__DOWN,
      sym__UP,
  [4975] = 2,
    ACTIONS(952), 1,
      sym__PROCEDURE,
    STATE(282), 1,
      sym_procedure_division,
  [4982] = 1,
    ACTIONS(1036), 2,
      sym__EOL,
      sym__EOS,
  [4987] = 2,
    ACTIONS(1022), 1,
      sym_screen_section,
    ACTIONS(1024), 1,
      sym__PROCEDURE,
  [4994] = 2,
    ACTIONS(1038), 1,
      sym_screen_section,
    ACTIONS(1040), 1,
      sym__PROCEDURE,
  [5001] = 1,
    ACTIONS(1042), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [5006] = 2,
    ACTIONS(952), 1,
      sym__PROCEDURE,
    STATE(291), 1,
      sym_procedure_division,
  [5013] = 1,
    ACTIONS(1044), 2,
      sym__LEADING,
      sym__TRAILING,
  [5018] = 2,
    ACTIONS(978), 1,
      sym_screen_section,
    ACTIONS(980), 1,
      sym__PROCEDURE,
  [5025] = 1,
    ACTIONS(1002), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [5030] = 1,
    ACTIONS(968), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [5035] = 2,
    ACTIONS(1046), 1,
      sym_WORD,
    STATE(353), 1,
      sym_qualified_word,
  [5042] = 2,
    ACTIONS(852), 1,
      sym_screen_section,
    ACTIONS(854), 1,
      sym__PROCEDURE,
  [5049] = 2,
    ACTIONS(942), 1,
      sym_screen_section,
    ACTIONS(944), 1,
      sym__PROCEDURE,
  [5056] = 1,
    ACTIONS(1048), 1,
      anon_sym_LPAREN,
  [5060] = 1,
    ACTIONS(1050), 1,
      anon_sym_LPAREN,
  [5064] = 1,
    ACTIONS(1052), 1,
      sym__SECTION,
  [5068] = 1,
    ACTIONS(1054), 1,
      sym__RUN,
  [5072] = 1,
    ACTIONS(1056), 1,
      anon_sym_LPAREN,
  [5076] = 1,
    ACTIONS(1058), 1,
      sym__TO,
  [5080] = 1,
    ACTIONS(316), 1,
      sym__TO,
  [5084] = 1,
    ACTIONS(1060), 1,
      anon_sym_DOT,
  [5088] = 1,
    ACTIONS(380), 1,
      sym__TO,
  [5092] = 1,
    ACTIONS(1062), 1,
      anon_sym_LPAREN,
  [5096] = 1,
    ACTIONS(1064), 1,
      anon_sym_RPAREN,
  [5100] = 1,
    ACTIONS(1066), 1,
      anon_sym_DOT,
  [5104] = 1,
    ACTIONS(1068), 1,
      anon_sym_DOT,
  [5108] = 1,
    ACTIONS(368), 1,
      sym__TO,
  [5112] = 1,
    ACTIONS(980), 1,
      sym__PROCEDURE,
  [5116] = 1,
    ACTIONS(1070), 1,
      anon_sym_LPAREN,
  [5120] = 1,
    ACTIONS(1072), 1,
      anon_sym_DOT,
  [5124] = 1,
    ACTIONS(1074), 1,
      anon_sym_DOT,
  [5128] = 1,
    ACTIONS(1076), 1,
      anon_sym_DOT,
  [5132] = 1,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
  [5136] = 1,
    ACTIONS(1078), 1,
      anon_sym_LPAREN,
  [5140] = 1,
    ACTIONS(1024), 1,
      sym__PROCEDURE,
  [5144] = 1,
    ACTIONS(1080), 1,
      anon_sym_RPAREN,
  [5148] = 1,
    ACTIONS(1082), 1,
      anon_sym_RPAREN,
  [5152] = 1,
    ACTIONS(1084), 1,
      anon_sym_DOT,
  [5156] = 1,
    ACTIONS(1086), 1,
      anon_sym_LPAREN,
  [5160] = 1,
    ACTIONS(1088), 1,
      sym__TO,
  [5164] = 1,
    ACTIONS(1090), 1,
      anon_sym_LPAREN,
  [5168] = 1,
    ACTIONS(1092), 1,
      anon_sym_RPAREN,
  [5172] = 1,
    ACTIONS(1094), 1,
      anon_sym_RPAREN,
  [5176] = 1,
    ACTIONS(1096), 1,
      sym_WORD,
  [5180] = 1,
    ACTIONS(1098), 1,
      anon_sym_DOT,
  [5184] = 1,
    ACTIONS(1100), 1,
      anon_sym_DOT,
  [5188] = 1,
    ACTIONS(1102), 1,
      anon_sym_DOT,
  [5192] = 1,
    ACTIONS(1104), 1,
      sym__DIVISION,
  [5196] = 1,
    ACTIONS(392), 1,
      sym__TO,
  [5200] = 1,
    ACTIONS(1106), 1,
      sym_WORD,
  [5204] = 1,
    ACTIONS(1108), 1,
      sym_WORD,
  [5208] = 1,
    ACTIONS(1110), 1,
      anon_sym_LPAREN,
  [5212] = 1,
    ACTIONS(1112), 1,
      anon_sym_RPAREN,
  [5216] = 1,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
  [5220] = 1,
    ACTIONS(1114), 1,
      anon_sym_RPAREN,
  [5224] = 1,
    ACTIONS(1116), 1,
      anon_sym_LPAREN,
  [5228] = 1,
    ACTIONS(1118), 1,
      anon_sym_RPAREN,
  [5232] = 1,
    ACTIONS(1120), 1,
      anon_sym_RPAREN,
  [5236] = 1,
    ACTIONS(1122), 1,
      anon_sym_LPAREN,
  [5240] = 1,
    ACTIONS(1124), 1,
      sym__PROGRAM_ID,
  [5244] = 1,
    ACTIONS(1126), 1,
      sym_WORD,
  [5248] = 1,
    ACTIONS(1128), 1,
      sym_WORD,
  [5252] = 1,
    ACTIONS(1130), 1,
      anon_sym_RPAREN,
  [5256] = 1,
    ACTIONS(1132), 1,
      anon_sym_RPAREN,
  [5260] = 1,
    ACTIONS(1040), 1,
      sym__PROCEDURE,
  [5264] = 1,
    ACTIONS(1134), 1,
      sym_WORD,
  [5268] = 1,
    ACTIONS(444), 1,
      anon_sym_DOT,
  [5272] = 1,
    ACTIONS(1136), 1,
      anon_sym_LPAREN,
  [5276] = 1,
    ACTIONS(1138), 1,
      anon_sym_LPAREN,
  [5280] = 1,
    ACTIONS(1140), 1,
      sym__DIVISION,
  [5284] = 1,
    ACTIONS(1142), 1,
      sym__DIVISION,
  [5288] = 1,
    ACTIONS(1144), 1,
      sym__PROCEDURE,
  [5292] = 1,
    ACTIONS(432), 1,
      anon_sym_DOT,
  [5296] = 1,
    ACTIONS(1146), 1,
      anon_sym_DOT,
  [5300] = 1,
    ACTIONS(1148), 1,
      anon_sym_RPAREN,
  [5304] = 1,
    ACTIONS(1150), 1,
      anon_sym_LPAREN,
  [5308] = 1,
    ACTIONS(854), 1,
      sym__PROCEDURE,
  [5312] = 1,
    ACTIONS(944), 1,
      sym__PROCEDURE,
  [5316] = 1,
    ACTIONS(1152), 1,
      anon_sym_LPAREN,
  [5320] = 1,
    ACTIONS(1154), 1,
      anon_sym_LPAREN,
  [5324] = 1,
    ACTIONS(1156), 1,
      anon_sym_LPAREN,
  [5328] = 1,
    ACTIONS(1158), 1,
      anon_sym_LPAREN,
  [5332] = 1,
    ACTIONS(1160), 1,
      anon_sym_LPAREN,
  [5336] = 1,
    ACTIONS(1162), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(87)] = 0,
  [SMALL_STATE(88)] = 96,
  [SMALL_STATE(89)] = 192,
  [SMALL_STATE(90)] = 288,
  [SMALL_STATE(91)] = 384,
  [SMALL_STATE(92)] = 446,
  [SMALL_STATE(93)] = 492,
  [SMALL_STATE(94)] = 554,
  [SMALL_STATE(95)] = 616,
  [SMALL_STATE(96)] = 664,
  [SMALL_STATE(97)] = 712,
  [SMALL_STATE(98)] = 760,
  [SMALL_STATE(99)] = 834,
  [SMALL_STATE(100)] = 880,
  [SMALL_STATE(101)] = 954,
  [SMALL_STATE(102)] = 1000,
  [SMALL_STATE(103)] = 1040,
  [SMALL_STATE(104)] = 1086,
  [SMALL_STATE(105)] = 1133,
  [SMALL_STATE(106)] = 1189,
  [SMALL_STATE(107)] = 1227,
  [SMALL_STATE(108)] = 1280,
  [SMALL_STATE(109)] = 1315,
  [SMALL_STATE(110)] = 1350,
  [SMALL_STATE(111)] = 1421,
  [SMALL_STATE(112)] = 1456,
  [SMALL_STATE(113)] = 1491,
  [SMALL_STATE(114)] = 1526,
  [SMALL_STATE(115)] = 1558,
  [SMALL_STATE(116)] = 1590,
  [SMALL_STATE(117)] = 1626,
  [SMALL_STATE(118)] = 1662,
  [SMALL_STATE(119)] = 1698,
  [SMALL_STATE(120)] = 1734,
  [SMALL_STATE(121)] = 1770,
  [SMALL_STATE(122)] = 1806,
  [SMALL_STATE(123)] = 1829,
  [SMALL_STATE(124)] = 1852,
  [SMALL_STATE(125)] = 1875,
  [SMALL_STATE(126)] = 1898,
  [SMALL_STATE(127)] = 1921,
  [SMALL_STATE(128)] = 1944,
  [SMALL_STATE(129)] = 1967,
  [SMALL_STATE(130)] = 1990,
  [SMALL_STATE(131)] = 2013,
  [SMALL_STATE(132)] = 2036,
  [SMALL_STATE(133)] = 2059,
  [SMALL_STATE(134)] = 2082,
  [SMALL_STATE(135)] = 2105,
  [SMALL_STATE(136)] = 2128,
  [SMALL_STATE(137)] = 2151,
  [SMALL_STATE(138)] = 2174,
  [SMALL_STATE(139)] = 2197,
  [SMALL_STATE(140)] = 2220,
  [SMALL_STATE(141)] = 2243,
  [SMALL_STATE(142)] = 2278,
  [SMALL_STATE(143)] = 2301,
  [SMALL_STATE(144)] = 2330,
  [SMALL_STATE(145)] = 2372,
  [SMALL_STATE(146)] = 2408,
  [SMALL_STATE(147)] = 2444,
  [SMALL_STATE(148)] = 2461,
  [SMALL_STATE(149)] = 2481,
  [SMALL_STATE(150)] = 2503,
  [SMALL_STATE(151)] = 2528,
  [SMALL_STATE(152)] = 2553,
  [SMALL_STATE(153)] = 2576,
  [SMALL_STATE(154)] = 2595,
  [SMALL_STATE(155)] = 2614,
  [SMALL_STATE(156)] = 2637,
  [SMALL_STATE(157)] = 2660,
  [SMALL_STATE(158)] = 2679,
  [SMALL_STATE(159)] = 2698,
  [SMALL_STATE(160)] = 2723,
  [SMALL_STATE(161)] = 2742,
  [SMALL_STATE(162)] = 2761,
  [SMALL_STATE(163)] = 2780,
  [SMALL_STATE(164)] = 2794,
  [SMALL_STATE(165)] = 2826,
  [SMALL_STATE(166)] = 2852,
  [SMALL_STATE(167)] = 2866,
  [SMALL_STATE(168)] = 2880,
  [SMALL_STATE(169)] = 2894,
  [SMALL_STATE(170)] = 2908,
  [SMALL_STATE(171)] = 2922,
  [SMALL_STATE(172)] = 2954,
  [SMALL_STATE(173)] = 2968,
  [SMALL_STATE(174)] = 2992,
  [SMALL_STATE(175)] = 3006,
  [SMALL_STATE(176)] = 3020,
  [SMALL_STATE(177)] = 3034,
  [SMALL_STATE(178)] = 3048,
  [SMALL_STATE(179)] = 3062,
  [SMALL_STATE(180)] = 3076,
  [SMALL_STATE(181)] = 3100,
  [SMALL_STATE(182)] = 3124,
  [SMALL_STATE(183)] = 3156,
  [SMALL_STATE(184)] = 3170,
  [SMALL_STATE(185)] = 3193,
  [SMALL_STATE(186)] = 3214,
  [SMALL_STATE(187)] = 3237,
  [SMALL_STATE(188)] = 3258,
  [SMALL_STATE(189)] = 3279,
  [SMALL_STATE(190)] = 3300,
  [SMALL_STATE(191)] = 3321,
  [SMALL_STATE(192)] = 3342,
  [SMALL_STATE(193)] = 3363,
  [SMALL_STATE(194)] = 3392,
  [SMALL_STATE(195)] = 3415,
  [SMALL_STATE(196)] = 3444,
  [SMALL_STATE(197)] = 3467,
  [SMALL_STATE(198)] = 3480,
  [SMALL_STATE(199)] = 3495,
  [SMALL_STATE(200)] = 3508,
  [SMALL_STATE(201)] = 3521,
  [SMALL_STATE(202)] = 3542,
  [SMALL_STATE(203)] = 3555,
  [SMALL_STATE(204)] = 3568,
  [SMALL_STATE(205)] = 3591,
  [SMALL_STATE(206)] = 3604,
  [SMALL_STATE(207)] = 3617,
  [SMALL_STATE(208)] = 3630,
  [SMALL_STATE(209)] = 3643,
  [SMALL_STATE(210)] = 3656,
  [SMALL_STATE(211)] = 3669,
  [SMALL_STATE(212)] = 3687,
  [SMALL_STATE(213)] = 3699,
  [SMALL_STATE(214)] = 3711,
  [SMALL_STATE(215)] = 3723,
  [SMALL_STATE(216)] = 3735,
  [SMALL_STATE(217)] = 3757,
  [SMALL_STATE(218)] = 3779,
  [SMALL_STATE(219)] = 3805,
  [SMALL_STATE(220)] = 3817,
  [SMALL_STATE(221)] = 3835,
  [SMALL_STATE(222)] = 3853,
  [SMALL_STATE(223)] = 3867,
  [SMALL_STATE(224)] = 3881,
  [SMALL_STATE(225)] = 3907,
  [SMALL_STATE(226)] = 3919,
  [SMALL_STATE(227)] = 3931,
  [SMALL_STATE(228)] = 3952,
  [SMALL_STATE(229)] = 3965,
  [SMALL_STATE(230)] = 3990,
  [SMALL_STATE(231)] = 4003,
  [SMALL_STATE(232)] = 4025,
  [SMALL_STATE(233)] = 4035,
  [SMALL_STATE(234)] = 4053,
  [SMALL_STATE(235)] = 4065,
  [SMALL_STATE(236)] = 4075,
  [SMALL_STATE(237)] = 4087,
  [SMALL_STATE(238)] = 4097,
  [SMALL_STATE(239)] = 4109,
  [SMALL_STATE(240)] = 4127,
  [SMALL_STATE(241)] = 4137,
  [SMALL_STATE(242)] = 4149,
  [SMALL_STATE(243)] = 4161,
  [SMALL_STATE(244)] = 4172,
  [SMALL_STATE(245)] = 4191,
  [SMALL_STATE(246)] = 4210,
  [SMALL_STATE(247)] = 4221,
  [SMALL_STATE(248)] = 4240,
  [SMALL_STATE(249)] = 4259,
  [SMALL_STATE(250)] = 4274,
  [SMALL_STATE(251)] = 4293,
  [SMALL_STATE(252)] = 4308,
  [SMALL_STATE(253)] = 4327,
  [SMALL_STATE(254)] = 4344,
  [SMALL_STATE(255)] = 4361,
  [SMALL_STATE(256)] = 4380,
  [SMALL_STATE(257)] = 4399,
  [SMALL_STATE(258)] = 4416,
  [SMALL_STATE(259)] = 4435,
  [SMALL_STATE(260)] = 4454,
  [SMALL_STATE(261)] = 4462,
  [SMALL_STATE(262)] = 4470,
  [SMALL_STATE(263)] = 4484,
  [SMALL_STATE(264)] = 4492,
  [SMALL_STATE(265)] = 4506,
  [SMALL_STATE(266)] = 4516,
  [SMALL_STATE(267)] = 4530,
  [SMALL_STATE(268)] = 4544,
  [SMALL_STATE(269)] = 4560,
  [SMALL_STATE(270)] = 4568,
  [SMALL_STATE(271)] = 4584,
  [SMALL_STATE(272)] = 4592,
  [SMALL_STATE(273)] = 4606,
  [SMALL_STATE(274)] = 4614,
  [SMALL_STATE(275)] = 4628,
  [SMALL_STATE(276)] = 4636,
  [SMALL_STATE(277)] = 4652,
  [SMALL_STATE(278)] = 4660,
  [SMALL_STATE(279)] = 4668,
  [SMALL_STATE(280)] = 4676,
  [SMALL_STATE(281)] = 4690,
  [SMALL_STATE(282)] = 4704,
  [SMALL_STATE(283)] = 4715,
  [SMALL_STATE(284)] = 4728,
  [SMALL_STATE(285)] = 4741,
  [SMALL_STATE(286)] = 4752,
  [SMALL_STATE(287)] = 4763,
  [SMALL_STATE(288)] = 4770,
  [SMALL_STATE(289)] = 4781,
  [SMALL_STATE(290)] = 4794,
  [SMALL_STATE(291)] = 4801,
  [SMALL_STATE(292)] = 4812,
  [SMALL_STATE(293)] = 4825,
  [SMALL_STATE(294)] = 4838,
  [SMALL_STATE(295)] = 4846,
  [SMALL_STATE(296)] = 4854,
  [SMALL_STATE(297)] = 4862,
  [SMALL_STATE(298)] = 4872,
  [SMALL_STATE(299)] = 4882,
  [SMALL_STATE(300)] = 4892,
  [SMALL_STATE(301)] = 4902,
  [SMALL_STATE(302)] = 4908,
  [SMALL_STATE(303)] = 4918,
  [SMALL_STATE(304)] = 4928,
  [SMALL_STATE(305)] = 4936,
  [SMALL_STATE(306)] = 4946,
  [SMALL_STATE(307)] = 4952,
  [SMALL_STATE(308)] = 4960,
  [SMALL_STATE(309)] = 4965,
  [SMALL_STATE(310)] = 4970,
  [SMALL_STATE(311)] = 4975,
  [SMALL_STATE(312)] = 4982,
  [SMALL_STATE(313)] = 4987,
  [SMALL_STATE(314)] = 4994,
  [SMALL_STATE(315)] = 5001,
  [SMALL_STATE(316)] = 5006,
  [SMALL_STATE(317)] = 5013,
  [SMALL_STATE(318)] = 5018,
  [SMALL_STATE(319)] = 5025,
  [SMALL_STATE(320)] = 5030,
  [SMALL_STATE(321)] = 5035,
  [SMALL_STATE(322)] = 5042,
  [SMALL_STATE(323)] = 5049,
  [SMALL_STATE(324)] = 5056,
  [SMALL_STATE(325)] = 5060,
  [SMALL_STATE(326)] = 5064,
  [SMALL_STATE(327)] = 5068,
  [SMALL_STATE(328)] = 5072,
  [SMALL_STATE(329)] = 5076,
  [SMALL_STATE(330)] = 5080,
  [SMALL_STATE(331)] = 5084,
  [SMALL_STATE(332)] = 5088,
  [SMALL_STATE(333)] = 5092,
  [SMALL_STATE(334)] = 5096,
  [SMALL_STATE(335)] = 5100,
  [SMALL_STATE(336)] = 5104,
  [SMALL_STATE(337)] = 5108,
  [SMALL_STATE(338)] = 5112,
  [SMALL_STATE(339)] = 5116,
  [SMALL_STATE(340)] = 5120,
  [SMALL_STATE(341)] = 5124,
  [SMALL_STATE(342)] = 5128,
  [SMALL_STATE(343)] = 5132,
  [SMALL_STATE(344)] = 5136,
  [SMALL_STATE(345)] = 5140,
  [SMALL_STATE(346)] = 5144,
  [SMALL_STATE(347)] = 5148,
  [SMALL_STATE(348)] = 5152,
  [SMALL_STATE(349)] = 5156,
  [SMALL_STATE(350)] = 5160,
  [SMALL_STATE(351)] = 5164,
  [SMALL_STATE(352)] = 5168,
  [SMALL_STATE(353)] = 5172,
  [SMALL_STATE(354)] = 5176,
  [SMALL_STATE(355)] = 5180,
  [SMALL_STATE(356)] = 5184,
  [SMALL_STATE(357)] = 5188,
  [SMALL_STATE(358)] = 5192,
  [SMALL_STATE(359)] = 5196,
  [SMALL_STATE(360)] = 5200,
  [SMALL_STATE(361)] = 5204,
  [SMALL_STATE(362)] = 5208,
  [SMALL_STATE(363)] = 5212,
  [SMALL_STATE(364)] = 5216,
  [SMALL_STATE(365)] = 5220,
  [SMALL_STATE(366)] = 5224,
  [SMALL_STATE(367)] = 5228,
  [SMALL_STATE(368)] = 5232,
  [SMALL_STATE(369)] = 5236,
  [SMALL_STATE(370)] = 5240,
  [SMALL_STATE(371)] = 5244,
  [SMALL_STATE(372)] = 5248,
  [SMALL_STATE(373)] = 5252,
  [SMALL_STATE(374)] = 5256,
  [SMALL_STATE(375)] = 5260,
  [SMALL_STATE(376)] = 5264,
  [SMALL_STATE(377)] = 5268,
  [SMALL_STATE(378)] = 5272,
  [SMALL_STATE(379)] = 5276,
  [SMALL_STATE(380)] = 5280,
  [SMALL_STATE(381)] = 5284,
  [SMALL_STATE(382)] = 5288,
  [SMALL_STATE(383)] = 5292,
  [SMALL_STATE(384)] = 5296,
  [SMALL_STATE(385)] = 5300,
  [SMALL_STATE(386)] = 5304,
  [SMALL_STATE(387)] = 5308,
  [SMALL_STATE(388)] = 5312,
  [SMALL_STATE(389)] = 5316,
  [SMALL_STATE(390)] = 5320,
  [SMALL_STATE(391)] = 5324,
  [SMALL_STATE(392)] = 5328,
  [SMALL_STATE(393)] = 5332,
  [SMALL_STATE(394)] = 5336,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__display_body, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(52),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__display_body_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(60),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(56),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(57),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(58),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(253),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(92),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(369),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(73),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(74),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(66),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(45),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(69),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(366),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(325),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(62),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(351),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(63),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(349),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(64),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(339),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(333),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(65),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(328),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(386),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(75),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__display_body_repeat1, 2), SHIFT_REPEAT(47),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subref, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subref, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_refmod, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_refmod, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ZERO_, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ZERO_, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_word, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_word, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_word, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_word, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_word_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_word_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(371),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__basic_literal_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_literal_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_literal_repeat1, 2), SHIFT_REPEAT(89),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_x_string, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_x_string, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_h_string, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_h_string, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_n_string, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_n_string, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__basic_literal, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_literal, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__basic_literal, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_literal, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LOW_VALUE_, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOW_VALUE_, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_QUOTE_, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_QUOTE_, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_SPACE_, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SPACE_, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TOK_NULL_, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TOK_NULL_, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HIGH_VALUE_, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HIGH_VALUE_, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__x, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id_or_lit, 1),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_linage_counter, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linage_counter, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 4),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_CURRENT_DATE_FUNC_, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CURRENT_DATE_FUNC_, 1),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FUNCTION_NAME_, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FUNCTION_NAME_, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_WHEN_COMPILED_FUNC_, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WHEN_COMPILED_FUNC_, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func_args, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_args, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__func_args, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_args, 3),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 2),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__x, 4),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 4),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_linage_counter, 3),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linage_counter, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 5),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__x, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_refmod, 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_refmod, 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_refmod, 5),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_refmod, 5),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__x, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_LENGTH_, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LENGTH_, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ALL_, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(361),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(246),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(124),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(125),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(129),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(131),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(312),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(243),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(133),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(123),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(135),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(132),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(310),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_with_clause_repeat1, 2), SHIFT_REPEAT(128),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(376),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(104),
  [534] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(254),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(254),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(303),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disp_attr, 2),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disp_attr, 2),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disp_attr, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disp_attr, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_clause, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redefines_clause, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redefines_clause, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_name, 1),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_name, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 3),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_clause, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_9, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_9, 1),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_UP_, 1),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UP_, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_DOWN_, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_DOWN_, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scroll_lines, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scroll_lines, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_or_lines, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOWLIGHT_, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BELL_, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BLANK_LINE_, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disp_attr, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UNDERLINE_, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BLANK_SCREEN_, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EOS_, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BLINK_, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_REVERSE_VIDEO_, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HIGHLIGHT_, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_OVERLINE_, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disp_attr, 4),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LINE_, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LINES_, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EOL_, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scroll_lines, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 2),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 3),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 4),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WITH_, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 4),
  [673] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(372),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_literal_repeat1, 2), SHIFT_REPEAT(88),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2),
  [687] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(41),
  [690] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(42),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(327),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp_list, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_body, 3, .production_id = 2),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__move_body, 3, .production_id = 2),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_x_list, 2), SHIFT_REPEAT(156),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_x_list, 2),
  [735] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_x_list, 2), SHIFT_REPEAT(289),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__target_x_list, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_body, 4, .production_id = 4),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__move_body, 4, .production_id = 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(304),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(295),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(341),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_on_disp_exception_repeat1, 2),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_on_disp_exception_repeat1, 2), SHIFT_REPEAT(41),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_on_disp_exception_repeat1, 2), SHIFT_REPEAT(42),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_on_disp_exception_repeat1, 2), SHIFT_REPEAT(327),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_disp_exception, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_on_disp_exception, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 5),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numvalc_args, 1),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [784] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 3),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pow_exp, 3, .production_id = 5),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MNEMONIC_NAME_, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_PRINTER_, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CRT_, 1),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_positive_exp, 2, .production_id = 3),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_exp, 2, .production_id = 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trim_args, 1),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 3),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_exp, 3, .production_id = 5),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub_exp, 3, .production_id = 5),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_exp, 3, .production_id = 5),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_div_exp, 3, .production_id = 5),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__locale_dt_args, 1),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arith_x, 3),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arith_x, 2),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__exp_list_repeat1, 2),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_working_storage_section_repeat1, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 4),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 1),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [860] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [864] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__target_x, 3),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target_x, 3),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NO_ADVANCING_, 1),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__target_x, 2),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target_x, 2),
  [876] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_FOREGROUND_COLOR_, 1),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FOREGROUND_COLOR_, 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_BACKGROUND_COLOR_, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_BACKGROUND_COLOR_, 1),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [898] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [904] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [910] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [912] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NOT_EXCEPTION_, 1),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_statement, 3),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2),
  [922] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(358),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numvalc_args, 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_statement, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [931] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__exp_list_repeat1, 2), SHIFT_REPEAT(32),
  [934] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp_list, 2),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 5),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__display_body, 6),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [954] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [956] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_EXCEPTION_, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop_run_statement, 2),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_statement, 2, .production_id = 1),
  [964] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [968] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [980] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 6),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 2),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_UPON_, 1),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [998] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1008] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1016] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 7),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1024] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 7),
  [1026] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 8),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 5),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_name, 1),
  [1034] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SCROLL_, 1),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ERASE_, 1),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 8),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 6),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOWER_CASE_FUNC_, 1),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRIM_FUNCTION_, 1),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1062] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SUBSTITUTE_CASE_FUNC_, 1),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SUBSTITUTE_FUNC_, 1),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1074] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 1),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 4),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_literal, 2),
  [1086] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_REVERSE_FUNC_, 1),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1090] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMVALC_FUNC_, 1),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trim_args, 3),
  [1094] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__locale_dt_args, 3),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOCALE_DT_FUNC_, 1),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CONCATENATE_FUNC_, 1),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 9),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UPPER_CASE_FUNC_, 1),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
