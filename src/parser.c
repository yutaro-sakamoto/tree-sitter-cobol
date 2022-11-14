#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 210
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 579
#define ALIAS_COUNT 0
#define TOKEN_COUNT 506
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 4

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
  sym_external_clause = 12,
  sym_global_clause = 13,
  sym_picture_x = 14,
  sym__picture_9_z = 15,
  sym__picture_9_v = 16,
  sym_usage_clause = 17,
  sym_sign_clause = 18,
  sym_occurs_clause = 19,
  sym_justified_clause = 20,
  sym_synchronized_clause = 21,
  sym_blank_clause = 22,
  sym_based_clause = 23,
  sym_value_clause = 24,
  sym_renames_clause = 25,
  sym_any_length_clause = 26,
  sym_error = 27,
  sym_local_storage_section = 28,
  sym_linkage_section = 29,
  sym_report_section = 30,
  sym_screen_section = 31,
  sym_nested_prog = 32,
  sym_end_program = 33,
  anon_sym_AMP = 34,
  sym_number = 35,
  sym__ACCEPT = 36,
  sym__ACCESS = 37,
  sym__ADD = 38,
  sym__ADDRESS = 39,
  sym__ADVANCING = 40,
  sym__AFTER = 41,
  sym__ALL = 42,
  sym__ALLOCATE = 43,
  sym__ALPHABET = 44,
  sym__ALPHABETIC = 45,
  sym__ALPHABETIC_LOWER = 46,
  sym__ALPHABETIC_UPPER = 47,
  sym__ALPHANUMERIC = 48,
  sym__ALPHANUMERIC_EDITED = 49,
  sym__ALSO = 50,
  sym__ALTER = 51,
  sym__ALTERNATE = 52,
  sym__AND = 53,
  sym__ANY = 54,
  sym__APPLY = 55,
  sym__ARE = 56,
  sym__AREA = 57,
  sym__ARGUMENT_NUMBER = 58,
  sym__ARGUMENT_VALUE = 59,
  sym__AS = 60,
  sym__ASCENDING = 61,
  sym__ASSIGN = 62,
  sym__AT = 63,
  sym__AUTO = 64,
  sym__AUTOMATIC = 65,
  sym__BACKGROUND_COLOR = 66,
  sym__BASED = 67,
  sym__BEFORE = 68,
  sym__BELL = 69,
  sym__BINARY = 70,
  sym__BINARY_C_LONG = 71,
  sym__BINARY_CHAR = 72,
  sym__BINARY_DOUBLE = 73,
  sym__BINARY_LONG = 74,
  sym__BINARY_SHORT = 75,
  sym__BLANK = 76,
  sym__BLANK_LINE = 77,
  sym__BLANK_SCREEN = 78,
  sym__BLINK = 79,
  sym__BLOCK = 80,
  sym__BOTTOM = 81,
  sym__BY = 82,
  sym__BYTE_LENGTH = 83,
  sym__CALL = 84,
  sym__CANCEL = 85,
  sym__CH = 86,
  sym__CHAINING = 87,
  sym__CHARACTER = 88,
  sym__CHARACTERS = 89,
  sym__CLASS = 90,
  sym__CLASS_NAME = 91,
  sym__CLOSE = 92,
  sym__CLOSE_NOFEED = 93,
  sym__CODE = 94,
  sym__CODE_SET = 95,
  sym__COLLATING = 96,
  sym__COL = 97,
  sym__COLS = 98,
  sym__COLUMN = 99,
  sym__COLUMNS = 100,
  sym__COMMA = 101,
  sym__COMMAND_LINE = 102,
  sym__COMMA_DELIM = 103,
  sym__COMMIT = 104,
  sym__COMMITMENT_CONTROL = 105,
  sym__COMMON = 106,
  sym__COMP = 107,
  sym__COMPUTE = 108,
  sym__COMP_1 = 109,
  sym__COMP_2 = 110,
  sym__COMP_3 = 111,
  sym__COMP_4 = 112,
  sym__COMP_5 = 113,
  sym__COMP_X = 114,
  sym__CONCATENATE_FUNC = 115,
  sym__CONFIGURATION = 116,
  sym__CONSTANT = 117,
  sym__CONTAINS = 118,
  sym__CONTENT = 119,
  sym__CONTINUE = 120,
  sym__CONTROL = 121,
  sym__CONTROLS = 122,
  sym__CONTROL_FOOTING = 123,
  sym__CONTROL_HEADING = 124,
  sym__CONVERTING = 125,
  sym__CORE_INDEX = 126,
  sym__CORRESPONDING = 127,
  sym__COUNT = 128,
  sym__CRT = 129,
  sym__CURRENCY = 130,
  sym__CURRENT_DATE_FUNC = 131,
  sym__CURSOR = 132,
  sym__CYCLE = 133,
  sym__CYL_OVERFLOW = 134,
  sym__DATA = 135,
  sym__DATE = 136,
  sym__DAY = 137,
  sym__DAY_OF_WEEK = 138,
  sym__DE = 139,
  sym__DEBUGGING = 140,
  sym__DECIMAL_POINT = 141,
  sym__DECLARATIVES = 142,
  sym__DEFAULT = 143,
  sym__DELETE = 144,
  sym__DELIMITED = 145,
  sym__DELIMITER = 146,
  sym__DEPENDING = 147,
  sym__DESCENDING = 148,
  sym__DETAIL = 149,
  sym__DISK = 150,
  sym__DISPLAY = 151,
  sym__DIVIDE = 152,
  sym__DIVISION = 153,
  sym__DOWN = 154,
  sym__DUPLICATES = 155,
  sym__DYNAMIC = 156,
  sym__EBCDIC = 157,
  sym__ELSE = 158,
  sym__END = 159,
  sym__END_ACCEPT = 160,
  sym__END_ADD = 161,
  sym__END_CALL = 162,
  sym__END_COMPUTE = 163,
  sym__END_DELETE = 164,
  sym__END_DISPLAY = 165,
  sym__END_DIVIDE = 166,
  sym__END_EVALUATE = 167,
  sym__END_FUNCTION = 168,
  sym__END_IF = 169,
  sym__END_MULTIPLY = 170,
  sym__END_PERFORM = 171,
  sym__END_PROGRAM = 172,
  sym__END_READ = 173,
  sym__END_RETURN = 174,
  sym__END_REWRITE = 175,
  sym__END_SEARCH = 176,
  sym__END_START = 177,
  sym__END_STRING = 178,
  sym__END_SUBTRACT = 179,
  sym__END_UNSTRING = 180,
  sym__END_WRITE = 181,
  sym__ENTRY = 182,
  sym__ENVIRONMENT = 183,
  sym__ENVIRONMENT_NAME = 184,
  sym__ENVIRONMENT_VALUE = 185,
  sym__EOL = 186,
  sym__EOP = 187,
  sym__EOS = 188,
  sym__EQUAL = 189,
  sym__EQUALS = 190,
  sym__ERASE = 191,
  sym__ERROR = 192,
  sym__ESCAPE = 193,
  sym__EVALUATE = 194,
  sym__EVENT_STATUS = 195,
  sym__EXCEPTION = 196,
  sym__EXCLUSIVE = 197,
  sym__EXIT = 198,
  sym__EXTEND = 199,
  sym__EXTERNAL = 200,
  sym__FD = 201,
  sym__FILE_CONTROL = 202,
  sym__FILE_ID = 203,
  sym__FILLER = 204,
  sym__FINAL = 205,
  sym__FIRST = 206,
  sym__FOOTING = 207,
  sym__FOR = 208,
  sym__FOREGROUND_COLOR = 209,
  sym__FOREVER = 210,
  sym__FORMS_OVERLAY = 211,
  sym__FREE = 212,
  sym__FROM = 213,
  sym__FULL = 214,
  sym__FUNCTION = 215,
  sym__FUNCTION_ID = 216,
  sym__FUNCTION_NAME = 217,
  sym__GE = 218,
  sym__GENERATE = 219,
  sym__GIVING = 220,
  sym__GLOBAL = 221,
  sym__GO = 222,
  sym__GOBACK = 223,
  sym__GREATER = 224,
  sym__GROUP = 225,
  sym__HEADING = 226,
  sym__HIGHLIGHT = 227,
  anon_sym_high_DASHvalue = 228,
  anon_sym_high_DASHValue = 229,
  anon_sym_high_DASHVALUE = 230,
  anon_sym_High_DASHvalue = 231,
  anon_sym_High_DASHValue = 232,
  anon_sym_High_DASHVALUE = 233,
  anon_sym_HIGH_DASHvalue = 234,
  anon_sym_HIGH_DASHValue = 235,
  anon_sym_HIGH_DASHVALUE = 236,
  sym__IDENTIFICATION = 237,
  sym__IF = 238,
  sym__IGNORE = 239,
  sym__IGNORING = 240,
  sym__IN = 241,
  sym__INDEX = 242,
  sym__INDEXED = 243,
  sym__INDICATE = 244,
  sym__INITIALIZE = 245,
  sym__INITIALIZED = 246,
  sym__INITIATE = 247,
  sym__INPUT = 248,
  sym__INPUT_OUTPUT = 249,
  sym__INSPECT = 250,
  sym__INTO = 251,
  sym__INTRINSIC = 252,
  sym__INVALID = 253,
  sym__INVALID_KEY = 254,
  sym__IS = 255,
  sym__I_O = 256,
  sym__I_O_CONTROL = 257,
  sym__JUSTIFIED = 258,
  sym__KEY = 259,
  sym__LABEL = 260,
  sym__LAST = 261,
  sym__LAST_DETAIL = 262,
  sym__LE = 263,
  sym__LEADING = 264,
  sym__LEFT = 265,
  sym__LENGTH = 266,
  sym__LESS = 267,
  sym__LEVEL_NUMBER_WORD = 268,
  sym__LEVEL88_NUMBER_WORD = 269,
  sym__LIMIT = 270,
  sym__LIMITS = 271,
  sym__LINAGE = 272,
  sym__LINAGE_COUNTER = 273,
  sym__LINE = 274,
  sym__LINES = 275,
  sym__LINKAGE = 276,
  sym__LITERAL = 277,
  sym__LOCALE = 278,
  sym__LOCALE_DT_FUNC = 279,
  sym__LOCAL_STORAGE = 280,
  sym__LOCK = 281,
  sym__LOWER_CASE_FUNC = 282,
  sym__LOWLIGHT = 283,
  anon_sym_low_DASHvalue = 284,
  anon_sym_low_DASHValue = 285,
  anon_sym_low_DASHVALUE = 286,
  anon_sym_Low_DASHvalue = 287,
  anon_sym_Low_DASHValue = 288,
  anon_sym_Low_DASHVALUE = 289,
  anon_sym_LOW_DASHvalue = 290,
  anon_sym_LOW_DASHValue = 291,
  anon_sym_LOW_DASHVALUE = 292,
  sym__MANUAL = 293,
  sym__MEMORY = 294,
  sym__MERGE = 295,
  sym__MINUS = 296,
  sym__MNEMONIC_NAME = 297,
  sym__MODE = 298,
  sym__MOVE = 299,
  sym__MULTIPLE = 300,
  sym__MULTIPLY = 301,
  sym__NATIONAL = 302,
  sym__NATIONAL_EDITED = 303,
  sym__NATIVE = 304,
  sym__NE = 305,
  sym__NEGATIVE = 306,
  sym__NEXT = 307,
  sym__NEXT_SENTENCE = 308,
  sym__NO = 309,
  sym__NOMINAL = 310,
  sym__NOT = 311,
  sym__NOT_END = 312,
  sym__NOT_EOP = 313,
  sym__NOT_EXCEPTION = 314,
  sym__NOT_INVALID_KEY = 315,
  sym__NOT_OVERFLOW = 316,
  sym__NOT_SIZE_ERROR = 317,
  sym__NO_ADVANCING = 318,
  sym__NUMBER = 319,
  sym__NUMBERS = 320,
  sym__NUMERIC = 321,
  sym__NUMERIC_EDITED = 322,
  sym__NUMVALC_FUNC = 323,
  sym__OBJECT_COMPUTER = 324,
  sym__OCCURS = 325,
  sym__OF = 326,
  sym__OFF = 327,
  sym__OMITTED = 328,
  sym__ON = 329,
  sym__ONLY = 330,
  sym__OPEN = 331,
  sym__OPTIONAL = 332,
  sym__OR = 333,
  sym__ORDER = 334,
  sym__ORGANIZATION = 335,
  sym__OTHER = 336,
  sym__OUTPUT = 337,
  sym__OVERFLOW = 338,
  sym__OVERLINE = 339,
  sym__PACKED_DECIMAL = 340,
  sym__PADDING = 341,
  sym__PAGE = 342,
  sym__PAGE_FOOTING = 343,
  sym__PAGE_HEADING = 344,
  sym__PARAGRAPH = 345,
  sym__PERFORM = 346,
  sym__PIC = 347,
  sym__PICTURE = 348,
  sym__PLUS = 349,
  sym__POINTER = 350,
  sym__POSITION = 351,
  sym__POSITIVE = 352,
  sym__PRESENT = 353,
  sym__PREVIOUS = 354,
  sym__PRINTER = 355,
  sym__PRINTING = 356,
  sym__PROCEDURE = 357,
  sym__PROCEDURES = 358,
  sym__PROCEED = 359,
  sym__PROGRAM = 360,
  sym__PROGRAM_ID = 361,
  sym__PROGRAM_NAME = 362,
  sym__PROGRAM_POINTER = 363,
  sym__PROMPT = 364,
  anon_sym_quote = 365,
  anon_sym_QUOTE = 366,
  anon_sym_Quote = 367,
  sym__RANDOM = 368,
  sym__RD = 369,
  sym__READ = 370,
  sym__RECORD = 371,
  sym__RECORDING = 372,
  sym__RECORDS = 373,
  sym__RECURSIVE = 374,
  sym__REDEFINES = 375,
  sym__REEL = 376,
  sym__REFERENCE = 377,
  sym__RELATIVE = 378,
  sym__RELEASE = 379,
  sym__REMAINDER = 380,
  sym__REMOVAL = 381,
  sym__RENAMES = 382,
  sym__REPLACING = 383,
  sym__REPORT = 384,
  sym__REPORTING = 385,
  sym__REPORTS = 386,
  sym__REPORT_FOOTING = 387,
  sym__REPORT_HEADING = 388,
  sym__REPOSITORY = 389,
  sym__REQUIRED = 390,
  sym__RESERVE = 391,
  sym__RETURN = 392,
  sym__RETURNING = 393,
  sym__REVERSE_FUNC = 394,
  sym__REVERSE_VIDEO = 395,
  sym__REWIND = 396,
  sym__REWRITE = 397,
  sym__RIGHT = 398,
  sym__ROLLBACK = 399,
  sym__ROUNDED = 400,
  sym__RUN = 401,
  sym__SAME = 402,
  sym__SCREEN = 403,
  sym__SCREEN_CONTROL = 404,
  sym__SCROLL = 405,
  sym__SD = 406,
  sym__SEARCH = 407,
  sym__SECTION = 408,
  sym__SECURE = 409,
  sym__SEGMENT_LIMIT = 410,
  sym__SELECT = 411,
  sym__SEMI_COLON = 412,
  sym__SENTENCE = 413,
  sym__SEPARATE = 414,
  sym__SEQUENCE = 415,
  sym__SEQUENTIAL = 416,
  sym__SET = 417,
  sym__SHARING = 418,
  sym__SIGN = 419,
  sym__SIGNED = 420,
  sym__SIGNED_INT = 421,
  sym__SIGNED_LONG = 422,
  sym__SIGNED_SHORT = 423,
  sym__SIZE = 424,
  sym__SIZE_ERROR = 425,
  sym__SORT = 426,
  sym__SORT_MERGE = 427,
  sym__SOURCE = 428,
  sym__SOURCE_COMPUTER = 429,
  anon_sym_space = 430,
  anon_sym_SPACE = 431,
  anon_sym_Space = 432,
  sym__SPECIAL_NAMES = 433,
  sym__STANDARD = 434,
  sym__STANDARD_1 = 435,
  sym__STANDARD_2 = 436,
  sym__START = 437,
  sym__STATUS = 438,
  sym__STOP = 439,
  sym__STRING = 440,
  sym__SUBSTITUTE_FUNC = 441,
  sym__SUBSTITUTE_CASE_FUNC = 442,
  sym__SUBTRACT = 443,
  sym__SUM = 444,
  sym__SUPPRESS = 445,
  sym__SYMBOLIC = 446,
  sym__SYNCHRONIZED = 447,
  sym__TALLYING = 448,
  sym__TAPE = 449,
  sym__TERMINATE = 450,
  sym__TEST = 451,
  sym__THAN = 452,
  sym__THEN = 453,
  sym__THRU = 454,
  sym__TIME = 455,
  sym__TIMES = 456,
  sym__TO = 457,
  sym__TOK_FALSE = 458,
  sym__TOK_FILE = 459,
  sym__TOK_INITIAL = 460,
  anon_sym_null = 461,
  anon_sym_Null = 462,
  anon_sym_NULL = 463,
  sym__TOK_TRUE = 464,
  sym__TOP = 465,
  sym__TRACKS = 466,
  sym__TRAILING = 467,
  sym__TRANSFORM = 468,
  sym__TRIM_FUNCTION = 469,
  sym__TYPE = 470,
  sym__UNDERLINE = 471,
  sym__UNIT = 472,
  sym__UNLOCK = 473,
  sym__UNSIGNED = 474,
  sym__UNSIGNED_INT = 475,
  sym__UNSIGNED_LONG = 476,
  sym__UNSIGNED_SHORT = 477,
  sym__UNSTRING = 478,
  sym__UNTIL = 479,
  sym__UP = 480,
  sym__UPDATE = 481,
  sym__UPON = 482,
  sym__UPON_ARGUMENT_NUMBER = 483,
  sym__UPON_COMMAND_LINE = 484,
  sym__UPON_ENVIRONMENT_NAME = 485,
  sym__UPON_ENVIRONMENT_VALUE = 486,
  sym__UPPER_CASE_FUNC = 487,
  sym__USAGE = 488,
  sym__USE = 489,
  sym__USING = 490,
  sym__VALUE = 491,
  sym__VARYING = 492,
  sym__WAIT = 493,
  sym__WHEN = 494,
  sym__WHEN_COMPILED_FUNC = 495,
  sym__WHEN_OTHER = 496,
  sym__WITH = 497,
  sym__WORDS = 498,
  sym__WORKING_STORAGE = 499,
  sym__WRITE = 500,
  sym__YYYYDDD = 501,
  sym__YYYYMMDD = 502,
  anon_sym_zero = 503,
  anon_sym_ZERO = 504,
  anon_sym_Zero = 505,
  sym_start = 506,
  sym_program_definition = 507,
  sym_identification_division = 508,
  sym_program_name = 509,
  sym_as_literal = 510,
  sym_data_division = 511,
  sym_working_storage_section = 512,
  sym_data_description = 513,
  sym_entry_name = 514,
  sym__data_description_clause = 515,
  sym_redefines_clause = 516,
  sym__identifier = 517,
  sym__qualified_word = 518,
  sym__in_of = 519,
  sym__subref = 520,
  sym__refmod = 521,
  sym__exp_list = 522,
  sym__exp = 523,
  sym_picture_clause = 524,
  sym__picture_string = 525,
  sym_picture_9 = 526,
  sym_procedure_division = 527,
  sym__statement = 528,
  sym_stop_run_statement = 529,
  sym_move_statement = 530,
  sym__move_body = 531,
  sym__x = 532,
  aux_sym__target_x_list = 533,
  sym__target_x = 534,
  sym__basic_literal = 535,
  sym__basic_value = 536,
  sym__literal = 537,
  sym_function_ = 538,
  sym_func_refmod = 539,
  sym__trim_args = 540,
  sym__e_sep = 541,
  sym__numvalc_args = 542,
  sym__locale_dt_args = 543,
  sym_linage_counter = 544,
  sym__func_args = 545,
  sym__HIGH_VALUE = 546,
  sym__LOW_VALUE = 547,
  sym__QUOTE = 548,
  sym__SPACE = 549,
  sym__TOK_NULL = 550,
  sym__ZERO = 551,
  sym_ALL_ = 552,
  sym_CONCATENATE_FUNC_ = 553,
  sym_CURRENT_DATE_FUNC_ = 554,
  sym_FUNCTION_NAME_ = 555,
  sym_HIGH_VALUE_ = 556,
  sym_LITERAL_ = 557,
  sym_LOCALE_DT_FUNC_ = 558,
  sym_LOWER_CASE_FUNC_ = 559,
  sym_LOW_VALUE_ = 560,
  sym_NUMVALC_FUNC_ = 561,
  sym_QUOTE_ = 562,
  sym_REVERSE_FUNC_ = 563,
  sym_SPACE_ = 564,
  sym_SUBSTITUTE_FUNC_ = 565,
  sym_SUBSTITUTE_CASE_FUNC_ = 566,
  sym_TOK_NULL_ = 567,
  sym_TRIM_FUNCTION_ = 568,
  sym_UPPER_CASE_FUNC_ = 569,
  sym_WHEN_COMPILED_FUNC_ = 570,
  sym_ZERO_ = 571,
  aux_sym_start_repeat1 = 572,
  aux_sym_working_storage_section_repeat1 = 573,
  aux_sym_data_description_repeat1 = 574,
  aux_sym__qualified_word_repeat1 = 575,
  aux_sym_procedure_division_repeat1 = 576,
  aux_sym__basic_literal_repeat1 = 577,
  aux_sym__numvalc_args_repeat1 = 578,
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
  [sym__LITERAL] = "_LITERAL",
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
  [sym__qualified_word] = "_qualified_word",
  [sym__in_of] = "_in_of",
  [sym__subref] = "_subref",
  [sym__refmod] = "_refmod",
  [sym__exp_list] = "_exp_list",
  [sym__exp] = "_exp",
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
  [sym_LITERAL_] = "LITERAL_",
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
  [aux_sym__qualified_word_repeat1] = "_qualified_word_repeat1",
  [aux_sym_procedure_division_repeat1] = "procedure_division_repeat1",
  [aux_sym__basic_literal_repeat1] = "_basic_literal_repeat1",
  [aux_sym__numvalc_args_repeat1] = "_numvalc_args_repeat1",
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
  [sym__LITERAL] = sym__LITERAL,
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
  [sym__qualified_word] = sym__qualified_word,
  [sym__in_of] = sym__in_of,
  [sym__subref] = sym__subref,
  [sym__refmod] = sym__refmod,
  [sym__exp_list] = sym__exp_list,
  [sym__exp] = sym__exp,
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
  [sym_LITERAL_] = sym_LITERAL_,
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
  [aux_sym__qualified_word_repeat1] = aux_sym__qualified_word_repeat1,
  [aux_sym_procedure_division_repeat1] = aux_sym_procedure_division_repeat1,
  [aux_sym__basic_literal_repeat1] = aux_sym__basic_literal_repeat1,
  [aux_sym__numvalc_args_repeat1] = aux_sym__numvalc_args_repeat1,
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
  [sym__LITERAL] = {
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
  [sym__qualified_word] = {
    .visible = false,
    .named = true,
  },
  [sym__in_of] = {
    .visible = false,
    .named = true,
  },
  [sym__subref] = {
    .visible = false,
    .named = true,
  },
  [sym__refmod] = {
    .visible = false,
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
  [sym_LITERAL_] = {
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
  [aux_sym__qualified_word_repeat1] = {
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
  [aux_sym__numvalc_args_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_dst = 1,
  field_src = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_dst] = "dst",
  [field_src] = "src",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 10,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 9,
  [33] = 33,
  [34] = 8,
  [35] = 14,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 15,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 16,
  [48] = 17,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 23,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 24,
  [70] = 70,
  [71] = 21,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
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
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 105,
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
  [167] = 167,
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
  [204] = 169,
  [205] = 142,
  [206] = 161,
  [207] = 207,
  [208] = 143,
  [209] = 209,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(114);
      if (lookahead == '&') ADVANCE(139);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '8') ADVANCE(140);
      if (lookahead == ':') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(226);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(224);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(122);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 6:
      if (lookahead == '8') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 7:
      if (lookahead == '8') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 8:
      if (lookahead == '9') ADVANCE(127);
      if (lookahead == 'l') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(104);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(102);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(97);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '9') ADVANCE(128);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 85:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 87:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 91:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(5);
      END_STATE();
    case 92:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 93:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 94:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(93);
      END_STATE();
    case 95:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 97:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 98:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 99:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 101:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 102:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 103:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 104:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      END_STATE();
    case 105:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 107:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 113:
      if (eof) ADVANCE(114);
      if (lookahead == '&') ADVANCE(139);
      if (lookahead == '(') ADVANCE(119);
      if (lookahead == ')') ADVANCE(120);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(113)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_file_section);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_level_number);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_level_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__picture_9_z);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__picture_9_z);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '9') ADVANCE(127);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(9);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(125);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '9') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '9') ADVANCE(127);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(9);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(125);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '9') ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_local_storage_section);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_local_storage_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_linkage_section);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_linkage_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_report_section);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_report_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_screen_section);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_screen_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '8') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__IS);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__IS);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__PROCEDURE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__PROCEDURE);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '-') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '_') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'c') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'g') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'k') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 's') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(230);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(213);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_WORD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(239);
      END_STATE();
    case 240:
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
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(188);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(191);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__NE);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(192);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(193);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__NO);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(195);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(197);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 47:
      if (lookahead == 'A') ADVANCE(199);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 49:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(202);
      END_STATE();
    case 50:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__SD);
      END_STATE();
    case 52:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(205);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(206);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(207);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(208);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(209);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(211);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      END_STATE();
    case 53:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(213);
      END_STATE();
    case 54:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(214);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(215);
      END_STATE();
    case 55:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(217);
      END_STATE();
    case 56:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(218);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 57:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(221);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(222);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 58:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(224);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 59:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(226);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(227);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(229);
      END_STATE();
    case 61:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(230);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 62:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__TO);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(234);
      END_STATE();
    case 64:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(237);
      END_STATE();
    case 65:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(238);
      END_STATE();
    case 66:
      if (lookahead == 'R') ADVANCE(239);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 68:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 69:
      if (lookahead == 'G') ADVANCE(171);
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(175);
      END_STATE();
    case 71:
      if (lookahead == 'W') ADVANCE(175);
      if (lookahead == 'w') ADVANCE(242);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(176);
      END_STATE();
    case 72:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(243);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__TO);
      if (lookahead == 'd') ADVANCE(246);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(234);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(247);
      END_STATE();
    case 79:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(248);
      END_STATE();
    case 80:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(250);
      END_STATE();
    case 81:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(251);
      END_STATE();
    case 82:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(252);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      END_STATE();
    case 83:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(256);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(257);
      END_STATE();
    case 84:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(258);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(259);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(260);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__AS);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(262);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__AT);
      END_STATE();
    case 88:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(263);
      END_STATE();
    case 89:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(264);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(265);
      END_STATE();
    case 90:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(266);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 91:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(269);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(270);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(271);
      END_STATE();
    case 93:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(272);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__BY);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(273);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(274);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__CH);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 97:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(277);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(279);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(281);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(283);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 99:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 100:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(287);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(288);
      END_STATE();
    case 102:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(289);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__DE);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(291);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(292);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(293);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(294);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(295);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      END_STATE();
    case 104:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(298);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(299);
      END_STATE();
    case 105:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(300);
      END_STATE();
    case 106:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(301);
      END_STATE();
    case 107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 108:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(303);
      END_STATE();
    case 109:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(304);
      END_STATE();
    case 110:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(305);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(307);
      END_STATE();
    case 111:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(308);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(309);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(310);
      END_STATE();
    case 112:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(311);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(314);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(315);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(316);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(317);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(318);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__FD);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(323);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(324);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(326);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(327);
      END_STATE();
    case 122:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(328);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__GE);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(330);
      END_STATE();
    case 124:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(331);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__GO);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(333);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(335);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(336);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__IF);
      END_STATE();
    case 131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(338);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__IN);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(339);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(340);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(341);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(342);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(344);
      END_STATE();
    case 133:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(345);
      END_STATE();
    case 134:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(346);
      END_STATE();
    case 135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      END_STATE();
    case 136:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(348);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 137:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 138:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 139:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(352);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(353);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 141:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(355);
      END_STATE();
    case 142:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(356);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__OF);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(357);
      END_STATE();
    case 144:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__ON);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(360);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(361);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__OR);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(362);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(363);
      END_STATE();
    case 148:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(364);
      END_STATE();
    case 149:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(365);
      END_STATE();
    case 150:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 151:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(367);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(368);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(369);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      END_STATE();
    case 152:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      END_STATE();
    case 153:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(372);
      END_STATE();
    case 154:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(373);
      END_STATE();
    case 155:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(374);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(375);
      END_STATE();
    case 156:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(376);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(377);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      END_STATE();
    case 157:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__RD);
      END_STATE();
    case 159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(380);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(381);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(382);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(383);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(384);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(385);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(386);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(387);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(388);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(389);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(390);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(391);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(392);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(393);
      END_STATE();
    case 160:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(394);
      END_STATE();
    case 161:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(395);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(396);
      END_STATE();
    case 162:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(397);
      END_STATE();
    case 163:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(398);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(402);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__UP);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(403);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(404);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(405);
      END_STATE();
    case 165:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(406);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(407);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(408);
      END_STATE();
    case 166:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(409);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(410);
      END_STATE();
    case 167:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(411);
      END_STATE();
    case 168:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 169:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(413);
      END_STATE();
    case 170:
      if (lookahead == 'H') ADVANCE(414);
      if (lookahead == 'h') ADVANCE(415);
      END_STATE();
    case 171:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(415);
      END_STATE();
    case 172:
      if (lookahead == 'H') ADVANCE(415);
      if (lookahead == 'h') ADVANCE(416);
      END_STATE();
    case 173:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(417);
      END_STATE();
    case 174:
      if (lookahead == '-') ADVANCE(418);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 175:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 176:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(421);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(422);
      END_STATE();
    case 177:
      if (lookahead == '-') ADVANCE(423);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 178:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(425);
      END_STATE();
    case 180:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(426);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(427);
      END_STATE();
    case 182:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(428);
      END_STATE();
    case 183:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(429);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(430);
      END_STATE();
    case 185:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(431);
      END_STATE();
    case 186:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(433);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(434);
      END_STATE();
    case 187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(435);
      END_STATE();
    case 188:
      if (lookahead == 'L') ADVANCE(436);
      END_STATE();
    case 189:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(437);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(439);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(441);
      END_STATE();
    case 192:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      END_STATE();
    case 193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(443);
      END_STATE();
    case 194:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      END_STATE();
    case 195:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(445);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__NOT);
      if (lookahead == '-') ADVANCE(446);
      END_STATE();
    case 197:
      if (lookahead == 'T') ADVANCE(447);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(448);
      END_STATE();
    case 199:
      if (lookahead == 'C') ADVANCE(449);
      END_STATE();
    case 200:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(450);
      END_STATE();
    case 201:
      if (lookahead == 'c') ADVANCE(451);
      END_STATE();
    case 202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      END_STATE();
    case 203:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(453);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(454);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(455);
      END_STATE();
    case 205:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(456);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(457);
      END_STATE();
    case 206:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(458);
      END_STATE();
    case 207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(459);
      END_STATE();
    case 208:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(460);
      END_STATE();
    case 209:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(461);
      END_STATE();
    case 210:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 211:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(463);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__SET);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      END_STATE();
    case 214:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(465);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(466);
      END_STATE();
    case 216:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(467);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(468);
      END_STATE();
    case 218:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(469);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(470);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(471);
      END_STATE();
    case 219:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(472);
      END_STATE();
    case 220:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(473);
      END_STATE();
    case 221:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(474);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(475);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__SUM);
      END_STATE();
    case 223:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(476);
      END_STATE();
    case 224:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(477);
      END_STATE();
    case 225:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 226:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      END_STATE();
    case 227:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      END_STATE();
    case 228:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(481);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(482);
      END_STATE();
    case 230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(483);
      END_STATE();
    case 231:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(484);
      END_STATE();
    case 232:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(485);
      END_STATE();
    case 233:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(486);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__TOP);
      END_STATE();
    case 235:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(487);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(488);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(489);
      END_STATE();
    case 236:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(490);
      END_STATE();
    case 237:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 238:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      END_STATE();
    case 239:
      if (lookahead == 'O') ADVANCE(493);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(494);
      END_STATE();
    case 241:
      if (lookahead == 'H') ADVANCE(415);
      if (lookahead == 'h') ADVANCE(495);
      END_STATE();
    case 242:
      if (lookahead == '-') ADVANCE(496);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(419);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(420);
      END_STATE();
    case 243:
      if (lookahead == 'l') ADVANCE(497);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(498);
      END_STATE();
    case 245:
      if (lookahead == 'c') ADVANCE(499);
      END_STATE();
    case 246:
      if (lookahead == 'o') ADVANCE(500);
      END_STATE();
    case 247:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 248:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(502);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__ADD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(503);
      END_STATE();
    case 250:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(504);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__ALL);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(506);
      END_STATE();
    case 253:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(507);
      END_STATE();
    case 254:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(508);
      END_STATE();
    case 255:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__AND);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__ANY);
      END_STATE();
    case 258:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__ARE);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(511);
      END_STATE();
    case 260:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(512);
      END_STATE();
    case 261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(513);
      END_STATE();
    case 262:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(514);
      END_STATE();
    case 263:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 264:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(516);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(517);
      END_STATE();
    case 266:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 267:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(519);
      END_STATE();
    case 268:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(520);
      END_STATE();
    case 269:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(521);
      END_STATE();
    case 270:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(522);
      END_STATE();
    case 271:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(523);
      END_STATE();
    case 272:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(524);
      END_STATE();
    case 273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(525);
      END_STATE();
    case 274:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(526);
      END_STATE();
    case 275:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(527);
      END_STATE();
    case 276:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(528);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      END_STATE();
    case 277:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      END_STATE();
    case 278:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(531);
      END_STATE();
    case 279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(532);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__COL);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(533);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(534);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(535);
      END_STATE();
    case 281:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(536);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(537);
      END_STATE();
    case 282:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(538);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(539);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(540);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(541);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(542);
      END_STATE();
    case 283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(543);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(544);
      END_STATE();
    case 284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(545);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__CRT);
      END_STATE();
    case 286:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(546);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(547);
      END_STATE();
    case 287:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(548);
      END_STATE();
    case 288:
      if (lookahead == '-') ADVANCE(549);
      END_STATE();
    case 289:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(550);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__DAY);
      if (lookahead == '-') ADVANCE(552);
      END_STATE();
    case 291:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(553);
      END_STATE();
    case 292:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(555);
      END_STATE();
    case 293:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(556);
      END_STATE();
    case 294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(557);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(558);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(559);
      END_STATE();
    case 296:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(560);
      END_STATE();
    case 297:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      END_STATE();
    case 298:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(562);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(563);
      END_STATE();
    case 299:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      END_STATE();
    case 300:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(565);
      END_STATE();
    case 301:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(566);
      END_STATE();
    case 302:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      END_STATE();
    case 303:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(568);
      END_STATE();
    case 304:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(569);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__END);
      if (lookahead == '-') ADVANCE(570);
      END_STATE();
    case 306:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(571);
      END_STATE();
    case 307:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(572);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__EOL);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__EOP);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__EOS);
      END_STATE();
    case 311:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(573);
      END_STATE();
    case 312:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 314:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      END_STATE();
    case 315:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(577);
      END_STATE();
    case 316:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 317:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(579);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(580);
      END_STATE();
    case 318:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(581);
      END_STATE();
    case 319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(582);
      END_STATE();
    case 320:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(583);
      END_STATE();
    case 321:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(585);
      END_STATE();
    case 322:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(586);
      END_STATE();
    case 323:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(587);
      END_STATE();
    case 324:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(588);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__FOR);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(590);
      END_STATE();
    case 326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(591);
      END_STATE();
    case 327:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(592);
      END_STATE();
    case 328:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(593);
      END_STATE();
    case 329:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(594);
      END_STATE();
    case 330:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      END_STATE();
    case 331:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(596);
      END_STATE();
    case 332:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(597);
      END_STATE();
    case 333:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(598);
      END_STATE();
    case 334:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(599);
      END_STATE();
    case 335:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(600);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__I_O);
      if (lookahead == '-') ADVANCE(601);
      END_STATE();
    case 337:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      END_STATE();
    case 338:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(603);
      END_STATE();
    case 339:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(605);
      END_STATE();
    case 340:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(606);
      END_STATE();
    case 341:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(607);
      END_STATE();
    case 342:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(608);
      END_STATE();
    case 343:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(609);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(610);
      END_STATE();
    case 344:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(611);
      END_STATE();
    case 345:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__KEY);
      END_STATE();
    case 347:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(613);
      END_STATE();
    case 348:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(614);
      END_STATE();
    case 349:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(615);
      END_STATE();
    case 350:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(616);
      END_STATE();
    case 351:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(617);
      END_STATE();
    case 352:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(618);
      END_STATE();
    case 353:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(619);
      END_STATE();
    case 354:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(620);
      END_STATE();
    case 355:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(621);
      END_STATE();
    case 356:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(622);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__OFF);
      END_STATE();
    case 358:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      END_STATE();
    case 359:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(624);
      END_STATE();
    case 360:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(625);
      END_STATE();
    case 361:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(626);
      END_STATE();
    case 362:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(627);
      END_STATE();
    case 363:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(628);
      END_STATE();
    case 364:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 365:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(630);
      END_STATE();
    case 366:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(631);
      END_STATE();
    case 367:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(632);
      END_STATE();
    case 368:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(633);
      END_STATE();
    case 369:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      END_STATE();
    case 370:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(635);
      END_STATE();
    case 371:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(636);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__PIC);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(637);
      END_STATE();
    case 373:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(638);
      END_STATE();
    case 374:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(639);
      END_STATE();
    case 375:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(640);
      END_STATE();
    case 376:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(642);
      END_STATE();
    case 377:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(643);
      END_STATE();
    case 378:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(644);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(645);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(646);
      END_STATE();
    case 379:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(647);
      END_STATE();
    case 380:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(648);
      END_STATE();
    case 381:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(649);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(650);
      END_STATE();
    case 382:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(651);
      END_STATE();
    case 383:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(652);
      END_STATE();
    case 384:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 385:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(654);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 386:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(656);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      END_STATE();
    case 387:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      END_STATE();
    case 388:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(659);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 389:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(661);
      END_STATE();
    case 390:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 391:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(663);
      END_STATE();
    case 392:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 393:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(665);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(666);
      END_STATE();
    case 394:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(667);
      END_STATE();
    case 395:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(668);
      END_STATE();
    case 396:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(669);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__RUN);
      END_STATE();
    case 398:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(670);
      END_STATE();
    case 399:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(671);
      END_STATE();
    case 400:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 401:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(673);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(674);
      END_STATE();
    case 402:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(675);
      END_STATE();
    case 403:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(676);
      END_STATE();
    case 404:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(677);
      END_STATE();
    case 405:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      END_STATE();
    case 406:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(679);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__USE);
      END_STATE();
    case 408:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(680);
      END_STATE();
    case 409:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(681);
      END_STATE();
    case 410:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(682);
      END_STATE();
    case 411:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(683);
      END_STATE();
    case 412:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(684);
      END_STATE();
    case 413:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(685);
      END_STATE();
    case 414:
      if (lookahead == '-') ADVANCE(686);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 415:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 416:
      if (lookahead == '-') ADVANCE(688);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 417:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(689);
      END_STATE();
    case 418:
      if (lookahead == 'V') ADVANCE(690);
      if (lookahead == 'v') ADVANCE(691);
      END_STATE();
    case 419:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(692);
      END_STATE();
    case 420:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(693);
      END_STATE();
    case 421:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(694);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__LOCK);
      END_STATE();
    case 423:
      if (lookahead == 'V') ADVANCE(695);
      if (lookahead == 'v') ADVANCE(696);
      END_STATE();
    case 424:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(697);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__LAST);
      if (lookahead == '-') ADVANCE(698);
      END_STATE();
    case 426:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__LEFT);
      END_STATE();
    case 428:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(700);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__LESS);
      END_STATE();
    case 430:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(701);
      END_STATE();
    case 431:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(702);
      END_STATE();
    case 432:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(703);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__LINE);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(704);
      END_STATE();
    case 434:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(705);
      END_STATE();
    case 435:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(706);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 437:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 438:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(708);
      END_STATE();
    case 439:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(709);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_Null);
      END_STATE();
    case 441:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(710);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(711);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(712);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__NEXT);
      if (lookahead == '-') ADVANCE(713);
      END_STATE();
    case 444:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(714);
      END_STATE();
    case 445:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 446:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(717);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(718);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(719);
      END_STATE();
    case 447:
      if (lookahead == 'E') ADVANCE(720);
      END_STATE();
    case 448:
      if (lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 449:
      if (lookahead == 'E') ADVANCE(722);
      END_STATE();
    case 450:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(723);
      END_STATE();
    case 451:
      if (lookahead == 'e') ADVANCE(724);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__SAME);
      END_STATE();
    case 453:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(725);
      END_STATE();
    case 454:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(726);
      END_STATE();
    case 455:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(727);
      END_STATE();
    case 456:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(728);
      END_STATE();
    case 457:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 458:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      END_STATE();
    case 459:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(731);
      END_STATE();
    case 460:
      if (lookahead == '-') ADVANCE(732);
      END_STATE();
    case 461:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      END_STATE();
    case 462:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(734);
      END_STATE();
    case 463:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(735);
      END_STATE();
    case 464:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__SIGN);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(737);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__SIZE);
      if (lookahead == '-') ADVANCE(738);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__SORT);
      if (lookahead == '-') ADVANCE(739);
      END_STATE();
    case 468:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(740);
      END_STATE();
    case 469:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(741);
      END_STATE();
    case 470:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(742);
      END_STATE();
    case 471:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(743);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__STOP);
      END_STATE();
    case 473:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(744);
      END_STATE();
    case 474:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(745);
      END_STATE();
    case 475:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(746);
      END_STATE();
    case 476:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      END_STATE();
    case 477:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(748);
      END_STATE();
    case 478:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(749);
      END_STATE();
    case 479:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(750);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__TAPE);
      END_STATE();
    case 481:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(751);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__TEST);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__THAN);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__THEN);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__THRU);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__TIME);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(752);
      END_STATE();
    case 487:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(753);
      END_STATE();
    case 488:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(754);
      END_STATE();
    case 489:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(755);
      END_STATE();
    case 490:
      if (lookahead == '-') ADVANCE(756);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__TOK_TRUE);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__TYPE);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_ZERO);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_Zero);
      END_STATE();
    case 495:
      if (lookahead == '-') ADVANCE(757);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 496:
      if (lookahead == 'V') ADVANCE(758);
      if (lookahead == 'v') ADVANCE(759);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 498:
      if (lookahead == 'e') ADVANCE(760);
      END_STATE();
    case 499:
      if (lookahead == 'e') ADVANCE(761);
      END_STATE();
    case 500:
      if (lookahead == '_') ADVANCE(762);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_zero);
      END_STATE();
    case 502:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(763);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(764);
      END_STATE();
    case 503:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      END_STATE();
    case 504:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(766);
      END_STATE();
    case 505:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(767);
      END_STATE();
    case 506:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(768);
      END_STATE();
    case 507:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(769);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__ALSO);
      END_STATE();
    case 509:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(770);
      END_STATE();
    case 510:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(771);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__AREA);
      END_STATE();
    case 512:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(772);
      END_STATE();
    case 513:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(773);
      END_STATE();
    case 514:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(774);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__AUTO);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(775);
      END_STATE();
    case 516:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(776);
      END_STATE();
    case 517:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(777);
      END_STATE();
    case 518:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(778);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__BELL);
      END_STATE();
    case 520:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(779);
      END_STATE();
    case 521:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(780);
      END_STATE();
    case 522:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(781);
      END_STATE();
    case 523:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(782);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      END_STATE();
    case 525:
      if (lookahead == '-') ADVANCE(784);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__CALL);
      END_STATE();
    case 527:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(786);
      END_STATE();
    case 529:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(787);
      END_STATE();
    case 530:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(788);
      END_STATE();
    case 531:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__CODE);
      if (lookahead == '-') ADVANCE(790);
      END_STATE();
    case 533:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__COLS);
      END_STATE();
    case 535:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(792);
      END_STATE();
    case 536:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(793);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(794);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(795);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__COMP);
      if (lookahead == '-') ADVANCE(796);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(797);
      END_STATE();
    case 538:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(798);
      END_STATE();
    case 539:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(799);
      END_STATE();
    case 540:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      END_STATE();
    case 541:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(801);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(802);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(804);
      END_STATE();
    case 542:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(805);
      END_STATE();
    case 543:
      if (lookahead == '-') ADVANCE(806);
      END_STATE();
    case 544:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 545:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(808);
      END_STATE();
    case 546:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(809);
      END_STATE();
    case 547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(810);
      END_STATE();
    case 548:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(811);
      END_STATE();
    case 549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(812);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__DATA);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__DATE);
      END_STATE();
    case 552:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(813);
      END_STATE();
    case 553:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(814);
      END_STATE();
    case 554:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(815);
      END_STATE();
    case 555:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(816);
      END_STATE();
    case 556:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(817);
      END_STATE();
    case 557:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(818);
      END_STATE();
    case 558:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(819);
      END_STATE();
    case 559:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(820);
      END_STATE();
    case 560:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      END_STATE();
    case 561:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(822);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__DISK);
      END_STATE();
    case 563:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(823);
      END_STATE();
    case 564:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(824);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(825);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__DOWN);
      END_STATE();
    case 566:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(826);
      END_STATE();
    case 567:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(827);
      END_STATE();
    case 568:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(828);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__ELSE);
      END_STATE();
    case 570:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(829);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(830);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(831);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(832);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(833);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(834);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(835);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(836);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(837);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(838);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(839);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(840);
      END_STATE();
    case 571:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(841);
      END_STATE();
    case 572:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(842);
      END_STATE();
    case 573:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(843);
      END_STATE();
    case 574:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(845);
      END_STATE();
    case 576:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(846);
      END_STATE();
    case 577:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(847);
      END_STATE();
    case 578:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(848);
      END_STATE();
    case 579:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(849);
      END_STATE();
    case 580:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(850);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__EXIT);
      END_STATE();
    case 582:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(851);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(852);
      END_STATE();
    case 583:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(853);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__TOK_FILE);
      if (lookahead == '-') ADVANCE(854);
      END_STATE();
    case 585:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 586:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(856);
      END_STATE();
    case 587:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(857);
      END_STATE();
    case 588:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(858);
      END_STATE();
    case 589:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(859);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(860);
      END_STATE();
    case 590:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(861);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__FREE);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__FROM);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__FULL);
      END_STATE();
    case 594:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(862);
      END_STATE();
    case 595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 596:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(864);
      END_STATE();
    case 597:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(865);
      END_STATE();
    case 598:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(866);
      END_STATE();
    case 599:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(867);
      END_STATE();
    case 600:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(868);
      END_STATE();
    case 601:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(869);
      END_STATE();
    case 602:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(870);
      END_STATE();
    case 603:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(871);
      END_STATE();
    case 604:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(872);
      END_STATE();
    case 605:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(873);
      END_STATE();
    case 606:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(874);
      END_STATE();
    case 607:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(875);
      END_STATE();
    case 608:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__INTO);
      END_STATE();
    case 610:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(877);
      END_STATE();
    case 611:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(878);
      END_STATE();
    case 612:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(879);
      END_STATE();
    case 613:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(880);
      END_STATE();
    case 614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(881);
      END_STATE();
    case 615:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(882);
      END_STATE();
    case 616:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(883);
      END_STATE();
    case 617:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(884);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__MODE);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__MOVE);
      END_STATE();
    case 620:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      END_STATE();
    case 621:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(886);
      END_STATE();
    case 622:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(887);
      END_STATE();
    case 623:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(888);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__ONLY);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__OPEN);
      END_STATE();
    case 626:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(889);
      END_STATE();
    case 627:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(890);
      END_STATE();
    case 628:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(891);
      END_STATE();
    case 629:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(892);
      END_STATE();
    case 630:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(893);
      END_STATE();
    case 631:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(894);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(895);
      END_STATE();
    case 632:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(896);
      END_STATE();
    case 633:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(897);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__PAGE);
      if (lookahead == '-') ADVANCE(898);
      END_STATE();
    case 635:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(899);
      END_STATE();
    case 636:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(900);
      END_STATE();
    case 637:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(901);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__PLUS);
      END_STATE();
    case 639:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(902);
      END_STATE();
    case 640:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(903);
      END_STATE();
    case 641:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      END_STATE();
    case 642:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(905);
      END_STATE();
    case 643:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(906);
      END_STATE();
    case 644:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(907);
      END_STATE();
    case 645:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(908);
      END_STATE();
    case 646:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(909);
      END_STATE();
    case 647:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(910);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__READ);
      END_STATE();
    case 649:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(911);
      END_STATE();
    case 650:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(912);
      END_STATE();
    case 651:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(913);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__REEL);
      END_STATE();
    case 653:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(914);
      END_STATE();
    case 654:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(915);
      END_STATE();
    case 655:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(916);
      END_STATE();
    case 656:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(917);
      END_STATE();
    case 657:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(918);
      END_STATE();
    case 658:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(919);
      END_STATE();
    case 659:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(920);
      END_STATE();
    case 660:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(921);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(922);
      END_STATE();
    case 661:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(923);
      END_STATE();
    case 662:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(924);
      END_STATE();
    case 663:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(925);
      END_STATE();
    case 664:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(926);
      END_STATE();
    case 665:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(927);
      END_STATE();
    case 666:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(928);
      END_STATE();
    case 667:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(929);
      END_STATE();
    case 668:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(930);
      END_STATE();
    case 669:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(931);
      END_STATE();
    case 670:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(932);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__UNIT);
      END_STATE();
    case 672:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(933);
      END_STATE();
    case 673:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(934);
      END_STATE();
    case 674:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(935);
      END_STATE();
    case 675:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(936);
      END_STATE();
    case 676:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(937);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__UPON);
      if (lookahead == '-') ADVANCE(938);
      END_STATE();
    case 678:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(939);
      END_STATE();
    case 679:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(940);
      END_STATE();
    case 680:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(941);
      END_STATE();
    case 681:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(942);
      END_STATE();
    case 682:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(943);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym__WAIT);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__WHEN);
      if (lookahead == '-') ADVANCE(944);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__WITH);
      END_STATE();
    case 686:
      if (lookahead == 'V') ADVANCE(945);
      if (lookahead == 'v') ADVANCE(946);
      END_STATE();
    case 687:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(947);
      END_STATE();
    case 688:
      if (lookahead == 'V') ADVANCE(948);
      if (lookahead == 'v') ADVANCE(949);
      END_STATE();
    case 689:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(950);
      END_STATE();
    case 690:
      if (lookahead == 'A') ADVANCE(951);
      if (lookahead == 'a') ADVANCE(952);
      END_STATE();
    case 691:
      if (lookahead == 'a') ADVANCE(953);
      END_STATE();
    case 692:
      if (lookahead == '-') ADVANCE(954);
      END_STATE();
    case 693:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(955);
      END_STATE();
    case 694:
      if (lookahead == '-') ADVANCE(956);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(957);
      END_STATE();
    case 695:
      if (lookahead == 'A') ADVANCE(958);
      if (lookahead == 'a') ADVANCE(959);
      END_STATE();
    case 696:
      if (lookahead == 'a') ADVANCE(960);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym__LABEL);
      END_STATE();
    case 698:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(961);
      END_STATE();
    case 699:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(962);
      END_STATE();
    case 700:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(963);
      END_STATE();
    case 701:
      if (lookahead == '-') ADVANCE(964);
      if (lookahead == '8') ADVANCE(965);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym__LIMIT);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(966);
      END_STATE();
    case 703:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(967);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym__LINES);
      END_STATE();
    case 705:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(968);
      END_STATE();
    case 706:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(969);
      END_STATE();
    case 707:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(970);
      END_STATE();
    case 708:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(971);
      END_STATE();
    case 709:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(972);
      END_STATE();
    case 710:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(973);
      END_STATE();
    case 711:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(974);
      END_STATE();
    case 712:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(975);
      END_STATE();
    case 713:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(976);
      END_STATE();
    case 714:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(977);
      END_STATE();
    case 715:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(978);
      END_STATE();
    case 716:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(979);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(980);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(981);
      END_STATE();
    case 717:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(982);
      END_STATE();
    case 718:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(983);
      END_STATE();
    case 719:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(984);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_QUOTE);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_Quote);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 723:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(985);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_Space);
      END_STATE();
    case 725:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(986);
      END_STATE();
    case 726:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(987);
      END_STATE();
    case 727:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(988);
      END_STATE();
    case 728:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(989);
      END_STATE();
    case 729:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(990);
      END_STATE();
    case 730:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(991);
      END_STATE();
    case 731:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(992);
      END_STATE();
    case 732:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(993);
      END_STATE();
    case 733:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(994);
      END_STATE();
    case 734:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(995);
      END_STATE();
    case 735:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(996);
      END_STATE();
    case 736:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(997);
      END_STATE();
    case 737:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(998);
      END_STATE();
    case 738:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(999);
      END_STATE();
    case 739:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1000);
      END_STATE();
    case 740:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 741:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1002);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym__START);
      END_STATE();
    case 743:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1003);
      END_STATE();
    case 744:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1004);
      END_STATE();
    case 745:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1005);
      END_STATE();
    case 746:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1006);
      END_STATE();
    case 747:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1007);
      END_STATE();
    case 748:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1008);
      END_STATE();
    case 749:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1009);
      END_STATE();
    case 750:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1010);
      END_STATE();
    case 751:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1011);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__TIMES);
      END_STATE();
    case 753:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1012);
      END_STATE();
    case 754:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1013);
      END_STATE();
    case 755:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1014);
      END_STATE();
    case 756:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1015);
      END_STATE();
    case 757:
      if (lookahead == 'V') ADVANCE(1016);
      if (lookahead == 'v') ADVANCE(1017);
      END_STATE();
    case 758:
      if (lookahead == 'A') ADVANCE(1018);
      if (lookahead == 'a') ADVANCE(1019);
      END_STATE();
    case 759:
      if (lookahead == 'a') ADVANCE(1020);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_quote);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_space);
      END_STATE();
    case 762:
      if (lookahead == 'a') ADVANCE(1021);
      if (lookahead == 'b') ADVANCE(1022);
      if (lookahead == 'c') ADVANCE(1023);
      if (lookahead == 'e') ADVANCE(1024);
      if (lookahead == 'f') ADVANCE(1025);
      if (lookahead == 'g') ADVANCE(1026);
      if (lookahead == 'j') ADVANCE(1027);
      if (lookahead == 'n') ADVANCE(1028);
      if (lookahead == 'o') ADVANCE(1029);
      if (lookahead == 'r') ADVANCE(1030);
      if (lookahead == 's') ADVANCE(1031);
      if (lookahead == 'u') ADVANCE(1032);
      if (lookahead == 'v') ADVANCE(1033);
      END_STATE();
    case 763:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1034);
      END_STATE();
    case 764:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1035);
      END_STATE();
    case 765:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1036);
      END_STATE();
    case 766:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1037);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__AFTER);
      END_STATE();
    case 768:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1038);
      END_STATE();
    case 769:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1039);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1040);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ALTER);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1041);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__APPLY);
      END_STATE();
    case 772:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1042);
      END_STATE();
    case 773:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1043);
      END_STATE();
    case 774:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1044);
      END_STATE();
    case 775:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1045);
      END_STATE();
    case 776:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1046);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__BASED);
      END_STATE();
    case 778:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1047);
      END_STATE();
    case 779:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1048);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__BLANK);
      if (lookahead == '-') ADVANCE(1049);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__BLINK);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__BLOCK);
      END_STATE();
    case 783:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1050);
      END_STATE();
    case 784:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1051);
      END_STATE();
    case 785:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1052);
      END_STATE();
    case 786:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1053);
      END_STATE();
    case 787:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1054);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__CLASS);
      if (lookahead == '-') ADVANCE(1055);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__CLOSE);
      if (lookahead == '-') ADVANCE(1056);
      END_STATE();
    case 790:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1057);
      END_STATE();
    case 791:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1058);
      END_STATE();
    case 792:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1059);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym__COMMA);
      if (lookahead == '-') ADVANCE(1060);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1061);
      END_STATE();
    case 794:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1062);
      END_STATE();
    case 795:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1063);
      END_STATE();
    case 796:
      if (lookahead == '1') ADVANCE(1064);
      if (lookahead == '2') ADVANCE(1065);
      if (lookahead == '3') ADVANCE(1066);
      if (lookahead == '4') ADVANCE(1067);
      if (lookahead == '5') ADVANCE(1068);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1069);
      END_STATE();
    case 797:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1070);
      END_STATE();
    case 798:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1071);
      END_STATE();
    case 799:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1072);
      END_STATE();
    case 800:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1073);
      END_STATE();
    case 801:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1074);
      END_STATE();
    case 802:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1075);
      END_STATE();
    case 803:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1076);
      END_STATE();
    case 804:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1077);
      END_STATE();
    case 805:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1078);
      END_STATE();
    case 806:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1079);
      END_STATE();
    case 807:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1080);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__COUNT);
      END_STATE();
    case 809:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1081);
      END_STATE();
    case 810:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1082);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__CYCLE);
      END_STATE();
    case 812:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1083);
      END_STATE();
    case 813:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1084);
      END_STATE();
    case 814:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1085);
      END_STATE();
    case 815:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1086);
      END_STATE();
    case 816:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1087);
      END_STATE();
    case 817:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1088);
      END_STATE();
    case 818:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1089);
      END_STATE();
    case 819:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1090);
      END_STATE();
    case 820:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1091);
      END_STATE();
    case 821:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1092);
      END_STATE();
    case 822:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1093);
      END_STATE();
    case 823:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1094);
      END_STATE();
    case 824:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1095);
      END_STATE();
    case 825:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1096);
      END_STATE();
    case 826:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1097);
      END_STATE();
    case 827:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1098);
      END_STATE();
    case 828:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1099);
      END_STATE();
    case 829:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1100);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1101);
      END_STATE();
    case 830:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1103);
      END_STATE();
    case 831:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1105);
      END_STATE();
    case 832:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1106);
      END_STATE();
    case 833:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1107);
      END_STATE();
    case 834:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1108);
      END_STATE();
    case 835:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1109);
      END_STATE();
    case 836:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1110);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1111);
      END_STATE();
    case 837:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1112);
      END_STATE();
    case 838:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1113);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1114);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1115);
      END_STATE();
    case 839:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1116);
      END_STATE();
    case 840:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1117);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym__ENTRY);
      END_STATE();
    case 842:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1118);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym__EQUAL);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1119);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym__ERASE);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym__ERROR);
      END_STATE();
    case 846:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1120);
      END_STATE();
    case 847:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1121);
      END_STATE();
    case 848:
      if (lookahead == '-') ADVANCE(1122);
      END_STATE();
    case 849:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1123);
      END_STATE();
    case 850:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1124);
      END_STATE();
    case 851:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1125);
      END_STATE();
    case 852:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1126);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym__TOK_FALSE);
      END_STATE();
    case 854:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1127);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1128);
      END_STATE();
    case 855:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1129);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym__FINAL);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym__FIRST);
      END_STATE();
    case 858:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1130);
      END_STATE();
    case 859:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1131);
      END_STATE();
    case 860:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1132);
      END_STATE();
    case 861:
      if (lookahead == '-') ADVANCE(1133);
      END_STATE();
    case 862:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1134);
      END_STATE();
    case 863:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1135);
      END_STATE();
    case 864:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1136);
      END_STATE();
    case 865:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1137);
      END_STATE();
    case 866:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1138);
      END_STATE();
    case 867:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1139);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym__GROUP);
      END_STATE();
    case 869:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1140);
      END_STATE();
    case 870:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1141);
      END_STATE();
    case 871:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1142);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1143);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym__INDEX);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1144);
      END_STATE();
    case 873:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1145);
      END_STATE();
    case 874:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1146);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__INPUT);
      if (lookahead == '-') ADVANCE(1147);
      END_STATE();
    case 876:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1148);
      END_STATE();
    case 877:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1149);
      END_STATE();
    case 878:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1150);
      END_STATE();
    case 879:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1151);
      END_STATE();
    case 880:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1152);
      END_STATE();
    case 881:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1153);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym__MERGE);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym__MINUS);
      END_STATE();
    case 884:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1154);
      END_STATE();
    case 885:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1155);
      END_STATE();
    case 886:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1156);
      END_STATE();
    case 887:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1157);
      END_STATE();
    case 888:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1158);
      END_STATE();
    case 889:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1159);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym__ORDER);
      END_STATE();
    case 891:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1160);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym__OTHER);
      END_STATE();
    case 893:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1161);
      END_STATE();
    case 894:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1162);
      END_STATE();
    case 895:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1163);
      END_STATE();
    case 896:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1164);
      END_STATE();
    case 897:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1165);
      END_STATE();
    case 898:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1166);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1167);
      END_STATE();
    case 899:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1168);
      END_STATE();
    case 900:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1169);
      END_STATE();
    case 901:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1170);
      END_STATE();
    case 902:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1171);
      END_STATE();
    case 903:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1172);
      END_STATE();
    case 904:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1173);
      END_STATE();
    case 905:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1174);
      END_STATE();
    case 906:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1175);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1176);
      END_STATE();
    case 907:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1177);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1178);
      END_STATE();
    case 908:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1179);
      END_STATE();
    case 909:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1180);
      END_STATE();
    case 910:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1181);
      END_STATE();
    case 911:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1182);
      END_STATE();
    case 912:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1183);
      END_STATE();
    case 913:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1184);
      END_STATE();
    case 914:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 915:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1186);
      END_STATE();
    case 916:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1187);
      END_STATE();
    case 917:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1188);
      END_STATE();
    case 918:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1189);
      END_STATE();
    case 919:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1190);
      END_STATE();
    case 920:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1191);
      END_STATE();
    case 921:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1192);
      END_STATE();
    case 922:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1193);
      END_STATE();
    case 923:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1194);
      END_STATE();
    case 924:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1195);
      END_STATE();
    case 925:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1196);
      END_STATE();
    case 926:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1197);
      END_STATE();
    case 927:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1198);
      END_STATE();
    case 928:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym__RIGHT);
      END_STATE();
    case 930:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1200);
      END_STATE();
    case 931:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1201);
      END_STATE();
    case 932:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1202);
      END_STATE();
    case 933:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1203);
      END_STATE();
    case 934:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1204);
      END_STATE();
    case 935:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1205);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__UNTIL);
      END_STATE();
    case 937:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1206);
      END_STATE();
    case 938:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1207);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1208);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1209);
      END_STATE();
    case 939:
      if (lookahead == '-') ADVANCE(1210);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym__USAGE);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym__USING);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym__VALUE);
      END_STATE();
    case 943:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1211);
      END_STATE();
    case 944:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1212);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1213);
      END_STATE();
    case 945:
      if (lookahead == 'A') ADVANCE(1214);
      if (lookahead == 'a') ADVANCE(1215);
      END_STATE();
    case 946:
      if (lookahead == 'a') ADVANCE(1216);
      END_STATE();
    case 947:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1217);
      END_STATE();
    case 948:
      if (lookahead == 'A') ADVANCE(1218);
      if (lookahead == 'a') ADVANCE(1219);
      END_STATE();
    case 949:
      if (lookahead == 'a') ADVANCE(1220);
      END_STATE();
    case 950:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1221);
      END_STATE();
    case 951:
      if (lookahead == 'L') ADVANCE(1222);
      END_STATE();
    case 952:
      if (lookahead == 'l') ADVANCE(1223);
      END_STATE();
    case 953:
      if (lookahead == 'l') ADVANCE(1224);
      END_STATE();
    case 954:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1225);
      END_STATE();
    case 955:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1226);
      END_STATE();
    case 956:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1227);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym__LOCALE);
      if (lookahead == '-') ADVANCE(1228);
      END_STATE();
    case 958:
      if (lookahead == 'L') ADVANCE(1229);
      END_STATE();
    case 959:
      if (lookahead == 'l') ADVANCE(1230);
      END_STATE();
    case 960:
      if (lookahead == 'l') ADVANCE(1231);
      END_STATE();
    case 961:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1232);
      END_STATE();
    case 962:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1233);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym__LENGTH);
      END_STATE();
    case 964:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1234);
      END_STATE();
    case 965:
      if (lookahead == '8') ADVANCE(1235);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym__LIMITS);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym__LINAGE);
      if (lookahead == '-') ADVANCE(1236);
      END_STATE();
    case 968:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1237);
      END_STATE();
    case 969:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1238);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym__NUMBER);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1239);
      END_STATE();
    case 971:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1240);
      END_STATE();
    case 972:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1241);
      END_STATE();
    case 973:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1242);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym__NATIVE);
      END_STATE();
    case 975:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1243);
      END_STATE();
    case 976:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1244);
      END_STATE();
    case 977:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1245);
      END_STATE();
    case 978:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1246);
      END_STATE();
    case 979:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1247);
      END_STATE();
    case 980:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1248);
      END_STATE();
    case 981:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1249);
      END_STATE();
    case 982:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1250);
      END_STATE();
    case 983:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1251);
      END_STATE();
    case 984:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1252);
      END_STATE();
    case 985:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1253);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym__SCREEN);
      if (lookahead == '-') ADVANCE(1254);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym__SCROLL);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__SEARCH);
      END_STATE();
    case 989:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1255);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym__SECURE);
      END_STATE();
    case 991:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1256);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym__SELECT);
      END_STATE();
    case 993:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1257);
      END_STATE();
    case 994:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1258);
      END_STATE();
    case 995:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1259);
      END_STATE();
    case 996:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1260);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1261);
      END_STATE();
    case 997:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1262);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__SIGNED);
      if (lookahead == '-') ADVANCE(1263);
      END_STATE();
    case 999:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1264);
      END_STATE();
    case 1000:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1265);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym__SOURCE);
      if (lookahead == '-') ADVANCE(1266);
      END_STATE();
    case 1002:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1267);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym__STATUS);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym__STRING);
      END_STATE();
    case 1005:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1268);
      END_STATE();
    case 1006:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1269);
      END_STATE();
    case 1007:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1270);
      END_STATE();
    case 1008:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1271);
      END_STATE();
    case 1009:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1272);
      END_STATE();
    case 1010:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1273);
      END_STATE();
    case 1011:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1274);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym__TRACKS);
      END_STATE();
    case 1013:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1275);
      END_STATE();
    case 1014:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1276);
      END_STATE();
    case 1015:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1277);
      END_STATE();
    case 1016:
      if (lookahead == 'A') ADVANCE(1278);
      if (lookahead == 'a') ADVANCE(1279);
      END_STATE();
    case 1017:
      if (lookahead == 'a') ADVANCE(1280);
      END_STATE();
    case 1018:
      if (lookahead == 'L') ADVANCE(1281);
      END_STATE();
    case 1019:
      if (lookahead == 'l') ADVANCE(1282);
      END_STATE();
    case 1020:
      if (lookahead == 'l') ADVANCE(1283);
      END_STATE();
    case 1021:
      if (lookahead == 'n') ADVANCE(1284);
      END_STATE();
    case 1022:
      if (lookahead == 'a') ADVANCE(1285);
      if (lookahead == 'l') ADVANCE(1286);
      END_STATE();
    case 1023:
      if (lookahead == 'o') ADVANCE(1287);
      END_STATE();
    case 1024:
      if (lookahead == 'n') ADVANCE(1288);
      if (lookahead == 'r') ADVANCE(1289);
      if (lookahead == 'x') ADVANCE(1290);
      END_STATE();
    case 1025:
      if (lookahead == 'u') ADVANCE(1291);
      END_STATE();
    case 1026:
      if (lookahead == 'l') ADVANCE(1292);
      END_STATE();
    case 1027:
      if (lookahead == 'u') ADVANCE(1293);
      END_STATE();
    case 1028:
      if (lookahead == 'e') ADVANCE(1294);
      END_STATE();
    case 1029:
      if (lookahead == 'c') ADVANCE(1295);
      END_STATE();
    case 1030:
      if (lookahead == 'e') ADVANCE(1296);
      END_STATE();
    case 1031:
      if (lookahead == 'i') ADVANCE(1297);
      if (lookahead == 'y') ADVANCE(1298);
      END_STATE();
    case 1032:
      if (lookahead == 's') ADVANCE(1299);
      END_STATE();
    case 1033:
      if (lookahead == 'a') ADVANCE(1300);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__ACCEPT);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym__ACCESS);
      END_STATE();
    case 1036:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1301);
      END_STATE();
    case 1037:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1302);
      END_STATE();
    case 1038:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1303);
      END_STATE();
    case 1039:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1304);
      END_STATE();
    case 1040:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1305);
      END_STATE();
    case 1041:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1306);
      END_STATE();
    case 1042:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1307);
      END_STATE();
    case 1043:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1308);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym__ASSIGN);
      END_STATE();
    case 1045:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1309);
      END_STATE();
    case 1046:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1310);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym__BEFORE);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym__BINARY);
      if (lookahead == '-') ADVANCE(1311);
      END_STATE();
    case 1049:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1312);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1313);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym__BOTTOM);
      END_STATE();
    case 1051:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1314);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym__CANCEL);
      END_STATE();
    case 1053:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1315);
      END_STATE();
    case 1054:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1316);
      END_STATE();
    case 1055:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1317);
      END_STATE();
    case 1056:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1318);
      END_STATE();
    case 1057:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1319);
      END_STATE();
    case 1058:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1320);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym__COLUMN);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1321);
      END_STATE();
    case 1060:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1322);
      END_STATE();
    case 1061:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1323);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__COMMIT);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1324);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym__COMMON);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym__COMP_1);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym__COMP_2);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym__COMP_3);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym__COMP_4);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym__COMP_5);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym__COMP_X);
      END_STATE();
    case 1070:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1325);
      END_STATE();
    case 1071:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1326);
      END_STATE();
    case 1072:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1327);
      END_STATE();
    case 1073:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1328);
      END_STATE();
    case 1074:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1329);
      END_STATE();
    case 1075:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1330);
      END_STATE();
    case 1076:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1331);
      END_STATE();
    case 1077:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1332);
      END_STATE();
    case 1078:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1333);
      END_STATE();
    case 1079:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1334);
      END_STATE();
    case 1080:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1335);
      END_STATE();
    case 1081:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1336);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1337);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__CURSOR);
      END_STATE();
    case 1083:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1338);
      END_STATE();
    case 1084:
      if (lookahead == '-') ADVANCE(1339);
      END_STATE();
    case 1085:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1340);
      END_STATE();
    case 1086:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1341);
      END_STATE();
    case 1087:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1342);
      END_STATE();
    case 1088:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1343);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym__DELETE);
      END_STATE();
    case 1090:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1344);
      END_STATE();
    case 1091:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1345);
      END_STATE();
    case 1092:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1346);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__DETAIL);
      END_STATE();
    case 1094:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1347);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym__DIVIDE);
      END_STATE();
    case 1096:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1348);
      END_STATE();
    case 1097:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1349);
      END_STATE();
    case 1098:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1350);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__EBCDIC);
      END_STATE();
    case 1100:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1351);
      END_STATE();
    case 1101:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1352);
      END_STATE();
    case 1102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1353);
      END_STATE();
    case 1103:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1354);
      END_STATE();
    case 1104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1355);
      END_STATE();
    case 1105:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1356);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1357);
      END_STATE();
    case 1106:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1358);
      END_STATE();
    case 1107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1359);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym__END_IF);
      END_STATE();
    case 1109:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1360);
      END_STATE();
    case 1110:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1361);
      END_STATE();
    case 1111:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1362);
      END_STATE();
    case 1112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1363);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1364);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1365);
      END_STATE();
    case 1113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1366);
      END_STATE();
    case 1114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1367);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1368);
      END_STATE();
    case 1115:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1369);
      END_STATE();
    case 1116:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1370);
      END_STATE();
    case 1117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1371);
      END_STATE();
    case 1118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1372);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym__EQUALS);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym__ESCAPE);
      END_STATE();
    case 1121:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1373);
      END_STATE();
    case 1122:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1374);
      END_STATE();
    case 1123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1375);
      END_STATE();
    case 1124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1376);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym__EXTEND);
      END_STATE();
    case 1126:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1377);
      END_STATE();
    case 1127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1378);
      END_STATE();
    case 1128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1379);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__FILLER);
      END_STATE();
    case 1130:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1380);
      END_STATE();
    case 1131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1381);
      END_STATE();
    case 1132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1382);
      END_STATE();
    case 1133:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1383);
      END_STATE();
    case 1134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1384);
      END_STATE();
    case 1135:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1385);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym__GIVING);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym__GLOBAL);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym__GOBACK);
      END_STATE();
    case 1139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1386);
      END_STATE();
    case 1140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1387);
      END_STATE();
    case 1141:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1388);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym__IGNORE);
      END_STATE();
    case 1143:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1389);
      END_STATE();
    case 1144:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1390);
      END_STATE();
    case 1145:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1391);
      END_STATE();
    case 1146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1392);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1393);
      END_STATE();
    case 1147:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1394);
      END_STATE();
    case 1148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1395);
      END_STATE();
    case 1149:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1396);
      END_STATE();
    case 1150:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1397);
      END_STATE();
    case 1151:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1398);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym__MANUAL);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym__MEMORY);
      END_STATE();
    case 1154:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1399);
      END_STATE();
    case 1155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1400);
      END_STATE();
    case 1156:
      if (lookahead == '-') ADVANCE(1401);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym__OCCURS);
      END_STATE();
    case 1158:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1402);
      END_STATE();
    case 1159:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1403);
      END_STATE();
    case 1160:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1404);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym__OUTPUT);
      END_STATE();
    case 1162:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1405);
      END_STATE();
    case 1163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1406);
      END_STATE();
    case 1164:
      if (lookahead == '-') ADVANCE(1407);
      END_STATE();
    case 1165:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1408);
      END_STATE();
    case 1166:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1409);
      END_STATE();
    case 1167:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1410);
      END_STATE();
    case 1168:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1411);
      END_STATE();
    case 1169:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1412);
      END_STATE();
    case 1170:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1413);
      END_STATE();
    case 1171:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1414);
      END_STATE();
    case 1172:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1415);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1416);
      END_STATE();
    case 1173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1417);
      END_STATE();
    case 1174:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1418);
      END_STATE();
    case 1175:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1419);
      END_STATE();
    case 1176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1420);
      END_STATE();
    case 1177:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1421);
      END_STATE();
    case 1178:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1422);
      END_STATE();
    case 1179:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1423);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(sym__PROMPT);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(sym__RANDOM);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(sym__RECORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1424);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1425);
      END_STATE();
    case 1183:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1426);
      END_STATE();
    case 1184:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1427);
      END_STATE();
    case 1185:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1428);
      END_STATE();
    case 1186:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1429);
      END_STATE();
    case 1187:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1430);
      END_STATE();
    case 1188:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1431);
      END_STATE();
    case 1189:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1432);
      END_STATE();
    case 1190:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1433);
      END_STATE();
    case 1191:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1434);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(sym__REPORT);
      if (lookahead == '-') ADVANCE(1435);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1436);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1437);
      END_STATE();
    case 1193:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1438);
      END_STATE();
    case 1194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1439);
      END_STATE();
    case 1195:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1440);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__RETURN);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1441);
      END_STATE();
    case 1197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1442);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__REWIND);
      END_STATE();
    case 1199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1443);
      END_STATE();
    case 1200:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1444);
      END_STATE();
    case 1201:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1445);
      END_STATE();
    case 1202:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1446);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(sym__UNLOCK);
      END_STATE();
    case 1204:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1447);
      END_STATE();
    case 1205:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1448);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(sym__UPDATE);
      END_STATE();
    case 1207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1449);
      END_STATE();
    case 1208:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1450);
      END_STATE();
    case 1209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1451);
      END_STATE();
    case 1210:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1452);
      END_STATE();
    case 1211:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1453);
      END_STATE();
    case 1212:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1454);
      END_STATE();
    case 1213:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1455);
      END_STATE();
    case 1214:
      if (lookahead == 'L') ADVANCE(1456);
      END_STATE();
    case 1215:
      if (lookahead == 'l') ADVANCE(1457);
      END_STATE();
    case 1216:
      if (lookahead == 'l') ADVANCE(1458);
      END_STATE();
    case 1217:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1459);
      END_STATE();
    case 1218:
      if (lookahead == 'L') ADVANCE(1460);
      END_STATE();
    case 1219:
      if (lookahead == 'l') ADVANCE(1461);
      END_STATE();
    case 1220:
      if (lookahead == 'l') ADVANCE(1462);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(sym__HEADING);
      END_STATE();
    case 1222:
      if (lookahead == 'U') ADVANCE(1463);
      END_STATE();
    case 1223:
      if (lookahead == 'u') ADVANCE(1464);
      END_STATE();
    case 1224:
      if (lookahead == 'u') ADVANCE(1465);
      END_STATE();
    case 1225:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1466);
      END_STATE();
    case 1226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1467);
      END_STATE();
    case 1227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1468);
      END_STATE();
    case 1228:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1469);
      END_STATE();
    case 1229:
      if (lookahead == 'U') ADVANCE(1470);
      END_STATE();
    case 1230:
      if (lookahead == 'u') ADVANCE(1471);
      END_STATE();
    case 1231:
      if (lookahead == 'u') ADVANCE(1472);
      END_STATE();
    case 1232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1473);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(sym__LEADING);
      END_STATE();
    case 1234:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1474);
      END_STATE();
    case 1235:
      if (lookahead == '-') ADVANCE(1475);
      END_STATE();
    case 1236:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1476);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(sym__LINKAGE);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(sym__LITERAL);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(sym__NUMBERS);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(sym__NUMERIC);
      if (lookahead == '-') ADVANCE(1477);
      END_STATE();
    case 1241:
      if (lookahead == '-') ADVANCE(1478);
      END_STATE();
    case 1242:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1479);
      END_STATE();
    case 1243:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1480);
      END_STATE();
    case 1244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1481);
      END_STATE();
    case 1245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1482);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym__NOMINAL);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(sym__NOT_END);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym__NOT_EOP);
      END_STATE();
    case 1249:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1483);
      END_STATE();
    case 1250:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1484);
      END_STATE();
    case 1251:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1485);
      END_STATE();
    case 1252:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1486);
      END_STATE();
    case 1253:
      if (lookahead == '-') ADVANCE(1487);
      END_STATE();
    case 1254:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1488);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(sym__SECTION);
      END_STATE();
    case 1256:
      if (lookahead == '-') ADVANCE(1489);
      END_STATE();
    case 1257:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1490);
      END_STATE();
    case 1258:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1491);
      END_STATE();
    case 1259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1492);
      END_STATE();
    case 1260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1493);
      END_STATE();
    case 1261:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1494);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(sym__SHARING);
      END_STATE();
    case 1263:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1495);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1496);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1497);
      END_STATE();
    case 1264:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1498);
      END_STATE();
    case 1265:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1499);
      END_STATE();
    case 1266:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1500);
      END_STATE();
    case 1267:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1501);
      END_STATE();
    case 1268:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1502);
      END_STATE();
    case 1269:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1503);
      END_STATE();
    case 1270:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1504);
      END_STATE();
    case 1271:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1505);
      END_STATE();
    case 1272:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1506);
      END_STATE();
    case 1273:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1507);
      END_STATE();
    case 1274:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1508);
      END_STATE();
    case 1275:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1509);
      END_STATE();
    case 1276:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1510);
      END_STATE();
    case 1277:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1511);
      END_STATE();
    case 1278:
      if (lookahead == 'L') ADVANCE(1512);
      END_STATE();
    case 1279:
      if (lookahead == 'l') ADVANCE(1513);
      END_STATE();
    case 1280:
      if (lookahead == 'l') ADVANCE(1514);
      END_STATE();
    case 1281:
      if (lookahead == 'U') ADVANCE(1515);
      END_STATE();
    case 1282:
      if (lookahead == 'u') ADVANCE(1516);
      END_STATE();
    case 1283:
      if (lookahead == 'u') ADVANCE(1517);
      END_STATE();
    case 1284:
      if (lookahead == 'y') ADVANCE(1518);
      END_STATE();
    case 1285:
      if (lookahead == 's') ADVANCE(1519);
      END_STATE();
    case 1286:
      if (lookahead == 'a') ADVANCE(1520);
      END_STATE();
    case 1287:
      if (lookahead == 'n') ADVANCE(1521);
      END_STATE();
    case 1288:
      if (lookahead == 'd') ADVANCE(1522);
      if (lookahead == 'v') ADVANCE(1523);
      END_STATE();
    case 1289:
      if (lookahead == 'r') ADVANCE(1524);
      END_STATE();
    case 1290:
      if (lookahead == 't') ADVANCE(1525);
      END_STATE();
    case 1291:
      if (lookahead == 'n') ADVANCE(1526);
      END_STATE();
    case 1292:
      if (lookahead == 'o') ADVANCE(1527);
      END_STATE();
    case 1293:
      if (lookahead == 's') ADVANCE(1528);
      END_STATE();
    case 1294:
      if (lookahead == 's') ADVANCE(1529);
      END_STATE();
    case 1295:
      if (lookahead == 'c') ADVANCE(1530);
      END_STATE();
    case 1296:
      if (lookahead == 'n') ADVANCE(1531);
      END_STATE();
    case 1297:
      if (lookahead == 'g') ADVANCE(1532);
      END_STATE();
    case 1298:
      if (lookahead == 'n') ADVANCE(1533);
      END_STATE();
    case 1299:
      if (lookahead == 'a') ADVANCE(1534);
      END_STATE();
    case 1300:
      if (lookahead == 'l') ADVANCE(1535);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(sym__ADDRESS);
      END_STATE();
    case 1302:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1536);
      END_STATE();
    case 1303:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1537);
      END_STATE();
    case 1304:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1538);
      END_STATE();
    case 1305:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1539);
      END_STATE();
    case 1306:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1540);
      END_STATE();
    case 1307:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1541);
      END_STATE();
    case 1308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1542);
      END_STATE();
    case 1309:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1543);
      END_STATE();
    case 1310:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1544);
      END_STATE();
    case 1311:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1545);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1546);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1547);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1548);
      END_STATE();
    case 1312:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1549);
      END_STATE();
    case 1313:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1550);
      END_STATE();
    case 1314:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1551);
      END_STATE();
    case 1315:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1552);
      END_STATE();
    case 1316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1553);
      END_STATE();
    case 1317:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1554);
      END_STATE();
    case 1318:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1555);
      END_STATE();
    case 1319:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1556);
      END_STATE();
    case 1320:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1557);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(sym__COLUMNS);
      END_STATE();
    case 1322:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1558);
      END_STATE();
    case 1323:
      if (lookahead == '-') ADVANCE(1559);
      END_STATE();
    case 1324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1560);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym__COMPUTE);
      END_STATE();
    case 1326:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1561);
      END_STATE();
    case 1327:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1562);
      END_STATE();
    case 1328:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1563);
      END_STATE();
    case 1329:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1564);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(sym__CONTENT);
      END_STATE();
    case 1331:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1565);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym__CONTROL);
      if (lookahead == '-') ADVANCE(1566);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1567);
      END_STATE();
    case 1333:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1568);
      END_STATE();
    case 1334:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1569);
      END_STATE();
    case 1335:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1570);
      END_STATE();
    case 1336:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1571);
      END_STATE();
    case 1337:
      if (lookahead == '-') ADVANCE(1572);
      END_STATE();
    case 1338:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1573);
      END_STATE();
    case 1339:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1574);
      END_STATE();
    case 1340:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1575);
      END_STATE();
    case 1341:
      if (lookahead == '-') ADVANCE(1576);
      END_STATE();
    case 1342:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1577);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(sym__DEFAULT);
      END_STATE();
    case 1344:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1578);
      END_STATE();
    case 1345:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1579);
      END_STATE();
    case 1346:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1580);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(sym__DISPLAY);
      END_STATE();
    case 1348:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1581);
      END_STATE();
    case 1349:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1582);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(sym__DYNAMIC);
      END_STATE();
    case 1351:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1583);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(sym__END_ADD);
      END_STATE();
    case 1353:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1584);
      END_STATE();
    case 1354:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1585);
      END_STATE();
    case 1355:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1586);
      END_STATE();
    case 1356:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1587);
      END_STATE();
    case 1357:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1588);
      END_STATE();
    case 1358:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1589);
      END_STATE();
    case 1359:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1590);
      END_STATE();
    case 1360:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1591);
      END_STATE();
    case 1361:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1592);
      END_STATE();
    case 1362:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1593);
      END_STATE();
    case 1363:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1594);
      END_STATE();
    case 1364:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1595);
      END_STATE();
    case 1365:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1596);
      END_STATE();
    case 1366:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1597);
      END_STATE();
    case 1367:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1598);
      END_STATE();
    case 1368:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1599);
      END_STATE();
    case 1369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1600);
      END_STATE();
    case 1370:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1601);
      END_STATE();
    case 1371:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1602);
      END_STATE();
    case 1372:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1603);
      END_STATE();
    case 1373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1604);
      END_STATE();
    case 1374:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1605);
      END_STATE();
    case 1375:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1606);
      END_STATE();
    case 1376:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1607);
      END_STATE();
    case 1377:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1608);
      END_STATE();
    case 1378:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1609);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(sym__FILE_ID);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(sym__FOOTING);
      END_STATE();
    case 1381:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1610);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(sym__FOREVER);
      END_STATE();
    case 1383:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1611);
      END_STATE();
    case 1384:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1612);
      END_STATE();
    case 1385:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1613);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(sym__GREATER);
      END_STATE();
    case 1387:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1614);
      END_STATE();
    case 1388:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1615);
      END_STATE();
    case 1389:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1616);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(sym__INDEXED);
      END_STATE();
    case 1391:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1617);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(sym__TOK_INITIAL);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1618);
      END_STATE();
    case 1393:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1619);
      END_STATE();
    case 1394:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1620);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(sym__INSPECT);
      END_STATE();
    case 1396:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1621);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(sym__INVALID);
      if (lookahead == '-') ADVANCE(1622);
      END_STATE();
    case 1398:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1623);
      END_STATE();
    case 1399:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1624);
      END_STATE();
    case 1400:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1625);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1626);
      END_STATE();
    case 1401:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1627);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym__OMITTED);
      END_STATE();
    case 1403:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1628);
      END_STATE();
    case 1404:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1629);
      END_STATE();
    case 1405:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1630);
      END_STATE();
    case 1406:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1631);
      END_STATE();
    case 1407:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1632);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(sym__PADDING);
      END_STATE();
    case 1409:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1633);
      END_STATE();
    case 1410:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1634);
      END_STATE();
    case 1411:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1635);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(sym__PERFORM);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(sym__PICTURE);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(sym__POINTER);
      END_STATE();
    case 1415:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1636);
      END_STATE();
    case 1416:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1637);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym__PRESENT);
      END_STATE();
    case 1418:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1638);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym__PRINTER);
      END_STATE();
    case 1420:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1639);
      END_STATE();
    case 1421:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1640);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(sym__PROCEED);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(sym__PROGRAM);
      if (lookahead == '-') ADVANCE(1641);
      END_STATE();
    case 1424:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1642);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(sym__RECORDS);
      END_STATE();
    case 1426:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1643);
      END_STATE();
    case 1427:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1644);
      END_STATE();
    case 1428:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1645);
      END_STATE();
    case 1429:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1646);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym__RELEASE);
      END_STATE();
    case 1431:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1647);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(sym__REMOVAL);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(sym__RENAMES);
      END_STATE();
    case 1434:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1648);
      END_STATE();
    case 1435:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1649);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1650);
      END_STATE();
    case 1436:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1651);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(sym__REPORTS);
      END_STATE();
    case 1438:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1652);
      END_STATE();
    case 1439:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1653);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(sym__RESERVE);
      END_STATE();
    case 1441:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1654);
      END_STATE();
    case 1442:
      if (lookahead == '-') ADVANCE(1655);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(sym__REWRITE);
      END_STATE();
    case 1444:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1656);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym__ROUNDED);
      END_STATE();
    case 1446:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1657);
      END_STATE();
    case 1447:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1658);
      END_STATE();
    case 1448:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1659);
      END_STATE();
    case 1449:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1660);
      END_STATE();
    case 1450:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1661);
      END_STATE();
    case 1451:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1662);
      END_STATE();
    case 1452:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1663);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(sym__VARYING);
      END_STATE();
    case 1454:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1664);
      END_STATE();
    case 1455:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1665);
      END_STATE();
    case 1456:
      if (lookahead == 'U') ADVANCE(1666);
      END_STATE();
    case 1457:
      if (lookahead == 'u') ADVANCE(1667);
      END_STATE();
    case 1458:
      if (lookahead == 'u') ADVANCE(1668);
      END_STATE();
    case 1459:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1669);
      END_STATE();
    case 1460:
      if (lookahead == 'U') ADVANCE(1670);
      END_STATE();
    case 1461:
      if (lookahead == 'u') ADVANCE(1671);
      END_STATE();
    case 1462:
      if (lookahead == 'u') ADVANCE(1672);
      END_STATE();
    case 1463:
      if (lookahead == 'E') ADVANCE(1673);
      END_STATE();
    case 1464:
      if (lookahead == 'e') ADVANCE(1674);
      END_STATE();
    case 1465:
      if (lookahead == 'e') ADVANCE(1675);
      END_STATE();
    case 1466:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1676);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym__LOWLIGHT);
      END_STATE();
    case 1468:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1677);
      END_STATE();
    case 1469:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1678);
      END_STATE();
    case 1470:
      if (lookahead == 'E') ADVANCE(1679);
      END_STATE();
    case 1471:
      if (lookahead == 'e') ADVANCE(1680);
      END_STATE();
    case 1472:
      if (lookahead == 'e') ADVANCE(1681);
      END_STATE();
    case 1473:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1682);
      END_STATE();
    case 1474:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1683);
      END_STATE();
    case 1475:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1684);
      END_STATE();
    case 1476:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1685);
      END_STATE();
    case 1477:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1686);
      END_STATE();
    case 1478:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1687);
      END_STATE();
    case 1479:
      ACCEPT_TOKEN(sym__NATIONAL);
      if (lookahead == '-') ADVANCE(1688);
      END_STATE();
    case 1480:
      ACCEPT_TOKEN(sym__NEGATIVE);
      END_STATE();
    case 1481:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1689);
      END_STATE();
    case 1482:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1690);
      END_STATE();
    case 1483:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1691);
      END_STATE();
    case 1484:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1692);
      END_STATE();
    case 1485:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1693);
      END_STATE();
    case 1486:
      if (lookahead == '-') ADVANCE(1694);
      END_STATE();
    case 1487:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1695);
      END_STATE();
    case 1488:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1696);
      END_STATE();
    case 1489:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1697);
      END_STATE();
    case 1490:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1698);
      END_STATE();
    case 1491:
      ACCEPT_TOKEN(sym__SENTENCE);
      END_STATE();
    case 1492:
      ACCEPT_TOKEN(sym__SEPARATE);
      END_STATE();
    case 1493:
      ACCEPT_TOKEN(sym__SEQUENCE);
      END_STATE();
    case 1494:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1699);
      END_STATE();
    case 1495:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1700);
      END_STATE();
    case 1496:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1701);
      END_STATE();
    case 1497:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1702);
      END_STATE();
    case 1498:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1703);
      END_STATE();
    case 1499:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1704);
      END_STATE();
    case 1500:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1705);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym__STANDARD);
      if (lookahead == '-') ADVANCE(1706);
      END_STATE();
    case 1502:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1707);
      END_STATE();
    case 1503:
      ACCEPT_TOKEN(sym__SUBTRACT);
      END_STATE();
    case 1504:
      ACCEPT_TOKEN(sym__SUPPRESS);
      END_STATE();
    case 1505:
      ACCEPT_TOKEN(sym__SYMBOLIC);
      END_STATE();
    case 1506:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1708);
      END_STATE();
    case 1507:
      ACCEPT_TOKEN(sym__TALLYING);
      END_STATE();
    case 1508:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1709);
      END_STATE();
    case 1509:
      ACCEPT_TOKEN(sym__TRAILING);
      END_STATE();
    case 1510:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1710);
      END_STATE();
    case 1511:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1711);
      END_STATE();
    case 1512:
      if (lookahead == 'U') ADVANCE(1712);
      END_STATE();
    case 1513:
      if (lookahead == 'u') ADVANCE(1713);
      END_STATE();
    case 1514:
      if (lookahead == 'u') ADVANCE(1714);
      END_STATE();
    case 1515:
      if (lookahead == 'E') ADVANCE(1715);
      END_STATE();
    case 1516:
      if (lookahead == 'e') ADVANCE(1716);
      END_STATE();
    case 1517:
      if (lookahead == 'e') ADVANCE(1717);
      END_STATE();
    case 1518:
      if (lookahead == '_') ADVANCE(1718);
      END_STATE();
    case 1519:
      if (lookahead == 'e') ADVANCE(1719);
      END_STATE();
    case 1520:
      if (lookahead == 'n') ADVANCE(1720);
      END_STATE();
    case 1521:
      if (lookahead == 's') ADVANCE(1721);
      END_STATE();
    case 1522:
      if (lookahead == '_') ADVANCE(1722);
      END_STATE();
    case 1523:
      if (lookahead == 'i') ADVANCE(1723);
      END_STATE();
    case 1524:
      if (lookahead == 'o') ADVANCE(1724);
      END_STATE();
    case 1525:
      if (lookahead == 'e') ADVANCE(1725);
      END_STATE();
    case 1526:
      if (lookahead == 'c') ADVANCE(1726);
      END_STATE();
    case 1527:
      if (lookahead == 'b') ADVANCE(1727);
      END_STATE();
    case 1528:
      if (lookahead == 't') ADVANCE(1728);
      END_STATE();
    case 1529:
      if (lookahead == 't') ADVANCE(1729);
      END_STATE();
    case 1530:
      if (lookahead == 'u') ADVANCE(1730);
      END_STATE();
    case 1531:
      if (lookahead == 'a') ADVANCE(1731);
      END_STATE();
    case 1532:
      if (lookahead == 'n') ADVANCE(1732);
      END_STATE();
    case 1533:
      if (lookahead == 'c') ADVANCE(1733);
      END_STATE();
    case 1534:
      if (lookahead == 'g') ADVANCE(1734);
      END_STATE();
    case 1535:
      if (lookahead == 'u') ADVANCE(1735);
      END_STATE();
    case 1536:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1736);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym__ALLOCATE);
      END_STATE();
    case 1538:
      ACCEPT_TOKEN(sym__ALPHABET);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1737);
      END_STATE();
    case 1539:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1738);
      END_STATE();
    case 1540:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1739);
      END_STATE();
    case 1541:
      if (lookahead == '-') ADVANCE(1740);
      END_STATE();
    case 1542:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1741);
      END_STATE();
    case 1543:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1742);
      END_STATE();
    case 1544:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1743);
      END_STATE();
    case 1545:
      if (lookahead == '-') ADVANCE(1744);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1745);
      END_STATE();
    case 1546:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1746);
      END_STATE();
    case 1547:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1747);
      END_STATE();
    case 1548:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1748);
      END_STATE();
    case 1549:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1749);
      END_STATE();
    case 1550:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1750);
      END_STATE();
    case 1551:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1751);
      END_STATE();
    case 1552:
      ACCEPT_TOKEN(sym__CHAINING);
      END_STATE();
    case 1553:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1752);
      END_STATE();
    case 1554:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1753);
      END_STATE();
    case 1555:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1754);
      END_STATE();
    case 1556:
      ACCEPT_TOKEN(sym__CODE_SET);
      END_STATE();
    case 1557:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1755);
      END_STATE();
    case 1558:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1756);
      END_STATE();
    case 1559:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1757);
      END_STATE();
    case 1560:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1758);
      END_STATE();
    case 1561:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1759);
      END_STATE();
    case 1562:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1760);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym__CONSTANT);
      END_STATE();
    case 1564:
      ACCEPT_TOKEN(sym__CONTAINS);
      END_STATE();
    case 1565:
      ACCEPT_TOKEN(sym__CONTINUE);
      END_STATE();
    case 1566:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1761);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1762);
      END_STATE();
    case 1567:
      ACCEPT_TOKEN(sym__CONTROLS);
      END_STATE();
    case 1568:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1763);
      END_STATE();
    case 1569:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1764);
      END_STATE();
    case 1570:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1765);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym__CURRENCY);
      END_STATE();
    case 1572:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1766);
      END_STATE();
    case 1573:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1767);
      END_STATE();
    case 1574:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1768);
      END_STATE();
    case 1575:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1769);
      END_STATE();
    case 1576:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1770);
      END_STATE();
    case 1577:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1771);
      END_STATE();
    case 1578:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1772);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1773);
      END_STATE();
    case 1579:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1774);
      END_STATE();
    case 1580:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1775);
      END_STATE();
    case 1581:
      ACCEPT_TOKEN(sym__DIVISION);
      END_STATE();
    case 1582:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1776);
      END_STATE();
    case 1583:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1777);
      END_STATE();
    case 1584:
      ACCEPT_TOKEN(sym__END_CALL);
      END_STATE();
    case 1585:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1778);
      END_STATE();
    case 1586:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1779);
      END_STATE();
    case 1587:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1780);
      END_STATE();
    case 1588:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1781);
      END_STATE();
    case 1589:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1782);
      END_STATE();
    case 1590:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1783);
      END_STATE();
    case 1591:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1784);
      END_STATE();
    case 1592:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1785);
      END_STATE();
    case 1593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1786);
      END_STATE();
    case 1594:
      ACCEPT_TOKEN(sym__END_READ);
      END_STATE();
    case 1595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1787);
      END_STATE();
    case 1596:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1788);
      END_STATE();
    case 1597:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1789);
      END_STATE();
    case 1598:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1790);
      END_STATE();
    case 1599:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1791);
      END_STATE();
    case 1600:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1792);
      END_STATE();
    case 1601:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1793);
      END_STATE();
    case 1602:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1794);
      END_STATE();
    case 1603:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1795);
      END_STATE();
    case 1604:
      ACCEPT_TOKEN(sym__EVALUATE);
      END_STATE();
    case 1605:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1796);
      END_STATE();
    case 1606:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1797);
      END_STATE();
    case 1607:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1798);
      END_STATE();
    case 1608:
      ACCEPT_TOKEN(sym__EXTERNAL);
      END_STATE();
    case 1609:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1799);
      END_STATE();
    case 1610:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1800);
      END_STATE();
    case 1611:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1801);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(sym__FUNCTION);
      if (lookahead == '-') ADVANCE(1802);
      END_STATE();
    case 1613:
      ACCEPT_TOKEN(sym__GENERATE);
      END_STATE();
    case 1614:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1803);
      END_STATE();
    case 1615:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1804);
      END_STATE();
    case 1616:
      ACCEPT_TOKEN(sym__IGNORING);
      END_STATE();
    case 1617:
      ACCEPT_TOKEN(sym__INDICATE);
      END_STATE();
    case 1618:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1805);
      END_STATE();
    case 1619:
      ACCEPT_TOKEN(sym__INITIATE);
      END_STATE();
    case 1620:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1806);
      END_STATE();
    case 1621:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1807);
      END_STATE();
    case 1622:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1808);
      END_STATE();
    case 1623:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1809);
      END_STATE();
    case 1624:
      if (lookahead == '-') ADVANCE(1810);
      END_STATE();
    case 1625:
      ACCEPT_TOKEN(sym__MULTIPLE);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(sym__MULTIPLY);
      END_STATE();
    case 1627:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1811);
      END_STATE();
    case 1628:
      ACCEPT_TOKEN(sym__OPTIONAL);
      END_STATE();
    case 1629:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1812);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(sym__OVERFLOW);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(sym__OVERLINE);
      END_STATE();
    case 1632:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1813);
      END_STATE();
    case 1633:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1814);
      END_STATE();
    case 1634:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1815);
      END_STATE();
    case 1635:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1816);
      END_STATE();
    case 1636:
      ACCEPT_TOKEN(sym__POSITION);
      END_STATE();
    case 1637:
      ACCEPT_TOKEN(sym__POSITIVE);
      END_STATE();
    case 1638:
      ACCEPT_TOKEN(sym__PREVIOUS);
      END_STATE();
    case 1639:
      ACCEPT_TOKEN(sym__PRINTING);
      END_STATE();
    case 1640:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1817);
      END_STATE();
    case 1641:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1818);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1819);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1820);
      END_STATE();
    case 1642:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1821);
      END_STATE();
    case 1643:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1822);
      END_STATE();
    case 1644:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1823);
      END_STATE();
    case 1645:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1824);
      END_STATE();
    case 1646:
      ACCEPT_TOKEN(sym__RELATIVE);
      END_STATE();
    case 1647:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1825);
      END_STATE();
    case 1648:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1826);
      END_STATE();
    case 1649:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1827);
      END_STATE();
    case 1650:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1828);
      END_STATE();
    case 1651:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1829);
      END_STATE();
    case 1652:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1830);
      END_STATE();
    case 1653:
      ACCEPT_TOKEN(sym__REQUIRED);
      END_STATE();
    case 1654:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1831);
      END_STATE();
    case 1655:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1832);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1833);
      END_STATE();
    case 1656:
      ACCEPT_TOKEN(sym__ROLLBACK);
      END_STATE();
    case 1657:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1834);
      END_STATE();
    case 1658:
      ACCEPT_TOKEN(sym__UNSIGNED);
      if (lookahead == '-') ADVANCE(1835);
      END_STATE();
    case 1659:
      ACCEPT_TOKEN(sym__UNSTRING);
      END_STATE();
    case 1660:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1836);
      END_STATE();
    case 1661:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1837);
      END_STATE();
    case 1662:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1838);
      END_STATE();
    case 1663:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1839);
      END_STATE();
    case 1664:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1840);
      END_STATE();
    case 1665:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1841);
      END_STATE();
    case 1666:
      if (lookahead == 'E') ADVANCE(1842);
      END_STATE();
    case 1667:
      if (lookahead == 'e') ADVANCE(1843);
      END_STATE();
    case 1668:
      if (lookahead == 'e') ADVANCE(1844);
      END_STATE();
    case 1669:
      ACCEPT_TOKEN(sym__HIGHLIGHT);
      END_STATE();
    case 1670:
      if (lookahead == 'E') ADVANCE(1845);
      END_STATE();
    case 1671:
      if (lookahead == 'e') ADVANCE(1846);
      END_STATE();
    case 1672:
      if (lookahead == 'e') ADVANCE(1847);
      END_STATE();
    case 1673:
      ACCEPT_TOKEN(anon_sym_LOW_DASHVALUE);
      END_STATE();
    case 1674:
      ACCEPT_TOKEN(anon_sym_LOW_DASHValue);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(anon_sym_LOW_DASHvalue);
      END_STATE();
    case 1676:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1848);
      END_STATE();
    case 1677:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1849);
      END_STATE();
    case 1678:
      if (lookahead == '-') ADVANCE(1850);
      END_STATE();
    case 1679:
      ACCEPT_TOKEN(anon_sym_Low_DASHVALUE);
      END_STATE();
    case 1680:
      ACCEPT_TOKEN(anon_sym_Low_DASHValue);
      END_STATE();
    case 1681:
      ACCEPT_TOKEN(anon_sym_Low_DASHvalue);
      END_STATE();
    case 1682:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1851);
      END_STATE();
    case 1683:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1852);
      END_STATE();
    case 1684:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1853);
      END_STATE();
    case 1685:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1854);
      END_STATE();
    case 1686:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1855);
      END_STATE();
    case 1687:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1856);
      END_STATE();
    case 1688:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1857);
      END_STATE();
    case 1689:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1858);
      END_STATE();
    case 1690:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1859);
      END_STATE();
    case 1691:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1860);
      END_STATE();
    case 1692:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1861);
      END_STATE();
    case 1693:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1862);
      END_STATE();
    case 1694:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1863);
      END_STATE();
    case 1695:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1864);
      END_STATE();
    case 1696:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1865);
      END_STATE();
    case 1697:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1866);
      END_STATE();
    case 1698:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1867);
      END_STATE();
    case 1699:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1868);
      END_STATE();
    case 1700:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1869);
      END_STATE();
    case 1701:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1870);
      END_STATE();
    case 1702:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1871);
      END_STATE();
    case 1703:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1872);
      END_STATE();
    case 1704:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1873);
      END_STATE();
    case 1705:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1874);
      END_STATE();
    case 1706:
      if (lookahead == '1') ADVANCE(1875);
      if (lookahead == '2') ADVANCE(1876);
      END_STATE();
    case 1707:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1877);
      END_STATE();
    case 1708:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1878);
      END_STATE();
    case 1709:
      ACCEPT_TOKEN(sym__TERMINATE);
      END_STATE();
    case 1710:
      ACCEPT_TOKEN(sym__TRANSFORM);
      END_STATE();
    case 1711:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1879);
      END_STATE();
    case 1712:
      if (lookahead == 'E') ADVANCE(1880);
      END_STATE();
    case 1713:
      if (lookahead == 'e') ADVANCE(1881);
      END_STATE();
    case 1714:
      if (lookahead == 'e') ADVANCE(1882);
      END_STATE();
    case 1715:
      ACCEPT_TOKEN(anon_sym_low_DASHVALUE);
      END_STATE();
    case 1716:
      ACCEPT_TOKEN(anon_sym_low_DASHValue);
      END_STATE();
    case 1717:
      ACCEPT_TOKEN(anon_sym_low_DASHvalue);
      END_STATE();
    case 1718:
      if (lookahead == 'l') ADVANCE(1883);
      END_STATE();
    case 1719:
      if (lookahead == 'd') ADVANCE(1884);
      END_STATE();
    case 1720:
      if (lookahead == 'k') ADVANCE(1885);
      END_STATE();
    case 1721:
      if (lookahead == 't') ADVANCE(1886);
      END_STATE();
    case 1722:
      if (lookahead == 'p') ADVANCE(1887);
      END_STATE();
    case 1723:
      if (lookahead == 'r') ADVANCE(1888);
      END_STATE();
    case 1724:
      if (lookahead == 'r') ADVANCE(1889);
      END_STATE();
    case 1725:
      if (lookahead == 'r') ADVANCE(1890);
      END_STATE();
    case 1726:
      if (lookahead == 't') ADVANCE(1891);
      END_STATE();
    case 1727:
      if (lookahead == 'a') ADVANCE(1892);
      END_STATE();
    case 1728:
      if (lookahead == 'i') ADVANCE(1893);
      END_STATE();
    case 1729:
      if (lookahead == 'e') ADVANCE(1894);
      END_STATE();
    case 1730:
      if (lookahead == 'r') ADVANCE(1895);
      END_STATE();
    case 1731:
      if (lookahead == 'm') ADVANCE(1896);
      END_STATE();
    case 1732:
      if (lookahead == '_') ADVANCE(1897);
      END_STATE();
    case 1733:
      if (lookahead == 'h') ADVANCE(1898);
      END_STATE();
    case 1734:
      if (lookahead == 'e') ADVANCE(1899);
      END_STATE();
    case 1735:
      if (lookahead == 'e') ADVANCE(1900);
      END_STATE();
    case 1736:
      ACCEPT_TOKEN(sym__ADVANCING);
      END_STATE();
    case 1737:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1901);
      END_STATE();
    case 1738:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1902);
      END_STATE();
    case 1739:
      ACCEPT_TOKEN(sym__ALTERNATE);
      END_STATE();
    case 1740:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1903);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1904);
      END_STATE();
    case 1741:
      ACCEPT_TOKEN(sym__ASCENDING);
      END_STATE();
    case 1742:
      ACCEPT_TOKEN(sym__AUTOMATIC);
      END_STATE();
    case 1743:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1905);
      END_STATE();
    case 1744:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1906);
      END_STATE();
    case 1745:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1907);
      END_STATE();
    case 1746:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1908);
      END_STATE();
    case 1747:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1909);
      END_STATE();
    case 1748:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1910);
      END_STATE();
    case 1749:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1911);
      END_STATE();
    case 1750:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1912);
      END_STATE();
    case 1751:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1913);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(sym__CHARACTER);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1914);
      END_STATE();
    case 1753:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1915);
      END_STATE();
    case 1754:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1916);
      END_STATE();
    case 1755:
      ACCEPT_TOKEN(sym__COLLATING);
      END_STATE();
    case 1756:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1917);
      END_STATE();
    case 1757:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1918);
      END_STATE();
    case 1758:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1919);
      END_STATE();
    case 1759:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1920);
      END_STATE();
    case 1760:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1921);
      END_STATE();
    case 1761:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1922);
      END_STATE();
    case 1762:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1923);
      END_STATE();
    case 1763:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1924);
      END_STATE();
    case 1764:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1925);
      END_STATE();
    case 1765:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1926);
      END_STATE();
    case 1766:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1927);
      END_STATE();
    case 1767:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1928);
      END_STATE();
    case 1768:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1929);
      END_STATE();
    case 1769:
      ACCEPT_TOKEN(sym__DEBUGGING);
      END_STATE();
    case 1770:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1930);
      END_STATE();
    case 1771:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1931);
      END_STATE();
    case 1772:
      ACCEPT_TOKEN(sym__DELIMITED);
      END_STATE();
    case 1773:
      ACCEPT_TOKEN(sym__DELIMITER);
      END_STATE();
    case 1774:
      ACCEPT_TOKEN(sym__DEPENDING);
      END_STATE();
    case 1775:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1932);
      END_STATE();
    case 1776:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1933);
      END_STATE();
    case 1777:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1934);
      END_STATE();
    case 1778:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1935);
      END_STATE();
    case 1779:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1936);
      END_STATE();
    case 1780:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1937);
      END_STATE();
    case 1781:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1938);
      END_STATE();
    case 1782:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1939);
      END_STATE();
    case 1783:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1940);
      END_STATE();
    case 1784:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1941);
      END_STATE();
    case 1785:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1942);
      END_STATE();
    case 1786:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1943);
      END_STATE();
    case 1787:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1944);
      END_STATE();
    case 1788:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1945);
      END_STATE();
    case 1789:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1946);
      END_STATE();
    case 1790:
      ACCEPT_TOKEN(sym__END_START);
      END_STATE();
    case 1791:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1947);
      END_STATE();
    case 1792:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1948);
      END_STATE();
    case 1793:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1949);
      END_STATE();
    case 1794:
      ACCEPT_TOKEN(sym__END_WRITE);
      END_STATE();
    case 1795:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1950);
      END_STATE();
    case 1796:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1951);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(sym__EXCEPTION);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(sym__EXCLUSIVE);
      END_STATE();
    case 1799:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1952);
      END_STATE();
    case 1800:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1953);
      END_STATE();
    case 1801:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1954);
      END_STATE();
    case 1802:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1955);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1956);
      END_STATE();
    case 1803:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1957);
      END_STATE();
    case 1804:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1958);
      END_STATE();
    case 1805:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1959);
      END_STATE();
    case 1806:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1960);
      END_STATE();
    case 1807:
      ACCEPT_TOKEN(sym__INTRINSIC);
      END_STATE();
    case 1808:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1961);
      END_STATE();
    case 1809:
      ACCEPT_TOKEN(sym__JUSTIFIED);
      END_STATE();
    case 1810:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1962);
      END_STATE();
    case 1811:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1963);
      END_STATE();
    case 1812:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1964);
      END_STATE();
    case 1813:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1965);
      END_STATE();
    case 1814:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1966);
      END_STATE();
    case 1815:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1967);
      END_STATE();
    case 1816:
      ACCEPT_TOKEN(sym__PARAGRAPH);
      END_STATE();
    case 1817:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1968);
      END_STATE();
    case 1818:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1969);
      END_STATE();
    case 1819:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1970);
      END_STATE();
    case 1820:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1971);
      END_STATE();
    case 1821:
      ACCEPT_TOKEN(sym__RECORDING);
      END_STATE();
    case 1822:
      ACCEPT_TOKEN(sym__RECURSIVE);
      END_STATE();
    case 1823:
      ACCEPT_TOKEN(sym__REDEFINES);
      END_STATE();
    case 1824:
      ACCEPT_TOKEN(sym__REFERENCE);
      END_STATE();
    case 1825:
      ACCEPT_TOKEN(sym__REMAINDER);
      END_STATE();
    case 1826:
      ACCEPT_TOKEN(sym__REPLACING);
      END_STATE();
    case 1827:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1972);
      END_STATE();
    case 1828:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1973);
      END_STATE();
    case 1829:
      ACCEPT_TOKEN(sym__REPORTING);
      END_STATE();
    case 1830:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1974);
      END_STATE();
    case 1831:
      ACCEPT_TOKEN(sym__RETURNING);
      END_STATE();
    case 1832:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1975);
      END_STATE();
    case 1833:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1976);
      END_STATE();
    case 1834:
      ACCEPT_TOKEN(sym__UNDERLINE);
      END_STATE();
    case 1835:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1977);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1978);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1979);
      END_STATE();
    case 1836:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1980);
      END_STATE();
    case 1837:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1981);
      END_STATE();
    case 1838:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1982);
      END_STATE();
    case 1839:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1983);
      END_STATE();
    case 1840:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1984);
      END_STATE();
    case 1841:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1985);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(anon_sym_HIGH_DASHVALUE);
      END_STATE();
    case 1843:
      ACCEPT_TOKEN(anon_sym_HIGH_DASHValue);
      END_STATE();
    case 1844:
      ACCEPT_TOKEN(anon_sym_HIGH_DASHvalue);
      END_STATE();
    case 1845:
      ACCEPT_TOKEN(anon_sym_High_DASHVALUE);
      END_STATE();
    case 1846:
      ACCEPT_TOKEN(anon_sym_High_DASHValue);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(anon_sym_High_DASHvalue);
      END_STATE();
    case 1848:
      if (lookahead == '-') ADVANCE(1986);
      END_STATE();
    case 1849:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1987);
      END_STATE();
    case 1850:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1988);
      END_STATE();
    case 1851:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1989);
      END_STATE();
    case 1852:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1990);
      END_STATE();
    case 1853:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1991);
      END_STATE();
    case 1854:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1992);
      END_STATE();
    case 1855:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1993);
      END_STATE();
    case 1856:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1994);
      END_STATE();
    case 1857:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1995);
      END_STATE();
    case 1858:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1996);
      END_STATE();
    case 1859:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1997);
      END_STATE();
    case 1860:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1998);
      END_STATE();
    case 1861:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1999);
      END_STATE();
    case 1862:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2000);
      END_STATE();
    case 1863:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2001);
      END_STATE();
    case 1864:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2002);
      END_STATE();
    case 1865:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2003);
      END_STATE();
    case 1866:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2004);
      END_STATE();
    case 1867:
      ACCEPT_TOKEN(sym__SEMI_COLON);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(sym__SEQUENTIAL);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(sym__SIGNED_INT);
      END_STATE();
    case 1870:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2005);
      END_STATE();
    case 1871:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2006);
      END_STATE();
    case 1872:
      ACCEPT_TOKEN(sym__SIZE_ERROR);
      END_STATE();
    case 1873:
      ACCEPT_TOKEN(sym__SORT_MERGE);
      END_STATE();
    case 1874:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2007);
      END_STATE();
    case 1875:
      ACCEPT_TOKEN(sym__STANDARD_1);
      END_STATE();
    case 1876:
      ACCEPT_TOKEN(sym__STANDARD_2);
      END_STATE();
    case 1877:
      if (lookahead == '-') ADVANCE(2008);
      END_STATE();
    case 1878:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2009);
      END_STATE();
    case 1879:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2010);
      END_STATE();
    case 1880:
      ACCEPT_TOKEN(anon_sym_high_DASHVALUE);
      END_STATE();
    case 1881:
      ACCEPT_TOKEN(anon_sym_high_DASHValue);
      END_STATE();
    case 1882:
      ACCEPT_TOKEN(anon_sym_high_DASHvalue);
      END_STATE();
    case 1883:
      if (lookahead == 'e') ADVANCE(2011);
      END_STATE();
    case 1884:
      if (lookahead == '_') ADVANCE(2012);
      END_STATE();
    case 1885:
      if (lookahead == '_') ADVANCE(2013);
      END_STATE();
    case 1886:
      if (lookahead == 'a') ADVANCE(2014);
      END_STATE();
    case 1887:
      if (lookahead == 'r') ADVANCE(2015);
      END_STATE();
    case 1888:
      if (lookahead == 'o') ADVANCE(2016);
      END_STATE();
    case 1889:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    case 1890:
      if (lookahead == 'n') ADVANCE(2017);
      END_STATE();
    case 1891:
      if (lookahead == 'i') ADVANCE(2018);
      END_STATE();
    case 1892:
      if (lookahead == 'l') ADVANCE(2019);
      END_STATE();
    case 1893:
      if (lookahead == 'f') ADVANCE(2020);
      END_STATE();
    case 1894:
      if (lookahead == 'd') ADVANCE(2021);
      END_STATE();
    case 1895:
      if (lookahead == 's') ADVANCE(2022);
      END_STATE();
    case 1896:
      if (lookahead == 'e') ADVANCE(2023);
      END_STATE();
    case 1897:
      if (lookahead == 'c') ADVANCE(2024);
      END_STATE();
    case 1898:
      if (lookahead == 'r') ADVANCE(2025);
      END_STATE();
    case 1899:
      if (lookahead == '_') ADVANCE(2026);
      END_STATE();
    case 1900:
      if (lookahead == '_') ADVANCE(2027);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(sym__ALPHABETIC);
      if (lookahead == '-') ADVANCE(2028);
      END_STATE();
    case 1902:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2029);
      END_STATE();
    case 1903:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2030);
      END_STATE();
    case 1904:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2031);
      END_STATE();
    case 1905:
      if (lookahead == '-') ADVANCE(2032);
      END_STATE();
    case 1906:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2033);
      END_STATE();
    case 1907:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2034);
      END_STATE();
    case 1908:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2035);
      END_STATE();
    case 1909:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2036);
      END_STATE();
    case 1910:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2037);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(sym__BLANK_LINE);
      END_STATE();
    case 1912:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2038);
      END_STATE();
    case 1913:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2039);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(sym__CHARACTERS);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(sym__CLASS_NAME);
      END_STATE();
    case 1916:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2040);
      END_STATE();
    case 1917:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2041);
      END_STATE();
    case 1918:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2042);
      END_STATE();
    case 1919:
      if (lookahead == '-') ADVANCE(2043);
      END_STATE();
    case 1920:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2044);
      END_STATE();
    case 1921:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2045);
      END_STATE();
    case 1922:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2046);
      END_STATE();
    case 1923:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2047);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(sym__CONVERTING);
      END_STATE();
    case 1925:
      ACCEPT_TOKEN(sym__CORE_INDEX);
      END_STATE();
    case 1926:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2048);
      END_STATE();
    case 1927:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2049);
      END_STATE();
    case 1928:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2050);
      END_STATE();
    case 1929:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2051);
      END_STATE();
    case 1930:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2052);
      END_STATE();
    case 1931:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2053);
      END_STATE();
    case 1932:
      ACCEPT_TOKEN(sym__DESCENDING);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(sym__DUPLICATES);
      END_STATE();
    case 1934:
      ACCEPT_TOKEN(sym__END_ACCEPT);
      END_STATE();
    case 1935:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2054);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(sym__END_DELETE);
      END_STATE();
    case 1937:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2055);
      END_STATE();
    case 1938:
      ACCEPT_TOKEN(sym__END_DIVIDE);
      END_STATE();
    case 1939:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2056);
      END_STATE();
    case 1940:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2057);
      END_STATE();
    case 1941:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2058);
      END_STATE();
    case 1942:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2059);
      END_STATE();
    case 1943:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2060);
      END_STATE();
    case 1944:
      ACCEPT_TOKEN(sym__END_RETURN);
      END_STATE();
    case 1945:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2061);
      END_STATE();
    case 1946:
      ACCEPT_TOKEN(sym__END_SEARCH);
      END_STATE();
    case 1947:
      ACCEPT_TOKEN(sym__END_STRING);
      END_STATE();
    case 1948:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2062);
      END_STATE();
    case 1949:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2063);
      END_STATE();
    case 1950:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2064);
      END_STATE();
    case 1951:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2065);
      END_STATE();
    case 1952:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2066);
      END_STATE();
    case 1953:
      if (lookahead == '-') ADVANCE(2067);
      END_STATE();
    case 1954:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2068);
      END_STATE();
    case 1955:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2069);
      END_STATE();
    case 1956:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2070);
      END_STATE();
    case 1957:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2071);
      END_STATE();
    case 1958:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2072);
      END_STATE();
    case 1959:
      ACCEPT_TOKEN(sym__INITIALIZE);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2073);
      END_STATE();
    case 1960:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2074);
      END_STATE();
    case 1961:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2075);
      END_STATE();
    case 1962:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2076);
      END_STATE();
    case 1963:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2077);
      END_STATE();
    case 1964:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2078);
      END_STATE();
    case 1965:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2079);
      END_STATE();
    case 1966:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2080);
      END_STATE();
    case 1967:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2081);
      END_STATE();
    case 1968:
      ACCEPT_TOKEN(sym__PROCEDURES);
      END_STATE();
    case 1969:
      ACCEPT_TOKEN(sym__PROGRAM_ID);
      END_STATE();
    case 1970:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2082);
      END_STATE();
    case 1971:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2083);
      END_STATE();
    case 1972:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2084);
      END_STATE();
    case 1973:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2085);
      END_STATE();
    case 1974:
      ACCEPT_TOKEN(sym__REPOSITORY);
      END_STATE();
    case 1975:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2086);
      END_STATE();
    case 1976:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2087);
      END_STATE();
    case 1977:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2088);
      END_STATE();
    case 1978:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2089);
      END_STATE();
    case 1979:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(2090);
      END_STATE();
    case 1980:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2091);
      END_STATE();
    case 1981:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2092);
      END_STATE();
    case 1982:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2093);
      END_STATE();
    case 1983:
      if (lookahead == '-') ADVANCE(2094);
      END_STATE();
    case 1984:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2095);
      END_STATE();
    case 1985:
      ACCEPT_TOKEN(sym__WHEN_OTHER);
      END_STATE();
    case 1986:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2096);
      END_STATE();
    case 1987:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2097);
      END_STATE();
    case 1988:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2098);
      END_STATE();
    case 1989:
      ACCEPT_TOKEN(sym__LAST_DETAIL);
      END_STATE();
    case 1990:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2099);
      END_STATE();
    case 1991:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2100);
      END_STATE();
    case 1992:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2101);
      END_STATE();
    case 1993:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2102);
      END_STATE();
    case 1994:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2103);
      END_STATE();
    case 1995:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2104);
      END_STATE();
    case 1996:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2105);
      END_STATE();
    case 1997:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2106);
      END_STATE();
    case 1998:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2107);
      END_STATE();
    case 1999:
      if (lookahead == '-') ADVANCE(2108);
      END_STATE();
    case 2000:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2109);
      END_STATE();
    case 2001:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2110);
      END_STATE();
    case 2002:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2111);
      END_STATE();
    case 2003:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2112);
      END_STATE();
    case 2004:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2113);
      END_STATE();
    case 2005:
      ACCEPT_TOKEN(sym__SIGNED_LONG);
      END_STATE();
    case 2006:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2114);
      END_STATE();
    case 2007:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2115);
      END_STATE();
    case 2008:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2116);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2117);
      END_STATE();
    case 2009:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2118);
      END_STATE();
    case 2010:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2119);
      END_STATE();
    case 2011:
      if (lookahead == 'n') ADVANCE(2120);
      END_STATE();
    case 2012:
      if (lookahead == 'c') ADVANCE(2121);
      END_STATE();
    case 2013:
      if (lookahead == 'c') ADVANCE(2122);
      END_STATE();
    case 2014:
      if (lookahead == 'n') ADVANCE(2123);
      END_STATE();
    case 2015:
      if (lookahead == 'o') ADVANCE(2124);
      END_STATE();
    case 2016:
      if (lookahead == 'n') ADVANCE(2125);
      END_STATE();
    case 2017:
      if (lookahead == 'a') ADVANCE(2126);
      END_STATE();
    case 2018:
      if (lookahead == 'o') ADVANCE(2127);
      END_STATE();
    case 2019:
      if (lookahead == '_') ADVANCE(2128);
      END_STATE();
    case 2020:
      if (lookahead == 'i') ADVANCE(2129);
      END_STATE();
    case 2021:
      if (lookahead == '_') ADVANCE(2130);
      END_STATE();
    case 2022:
      if (lookahead == '_') ADVANCE(2131);
      END_STATE();
    case 2023:
      if (lookahead == 's') ADVANCE(2132);
      END_STATE();
    case 2024:
      if (lookahead == 'l') ADVANCE(2133);
      END_STATE();
    case 2025:
      if (lookahead == 'o') ADVANCE(2134);
      END_STATE();
    case 2026:
      if (lookahead == 'c') ADVANCE(2135);
      END_STATE();
    case 2027:
      if (lookahead == 'c') ADVANCE(2136);
      END_STATE();
    case 2028:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2137);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2138);
      END_STATE();
    case 2029:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2139);
      END_STATE();
    case 2030:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2140);
      END_STATE();
    case 2031:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2141);
      END_STATE();
    case 2032:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2142);
      END_STATE();
    case 2033:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2143);
      END_STATE();
    case 2034:
      ACCEPT_TOKEN(sym__BINARY_CHAR);
      END_STATE();
    case 2035:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2144);
      END_STATE();
    case 2036:
      ACCEPT_TOKEN(sym__BINARY_LONG);
      END_STATE();
    case 2037:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2145);
      END_STATE();
    case 2038:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2146);
      END_STATE();
    case 2039:
      ACCEPT_TOKEN(sym__BYTE_LENGTH);
      END_STATE();
    case 2040:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2147);
      END_STATE();
    case 2041:
      ACCEPT_TOKEN(sym__COMMA_DELIM);
      END_STATE();
    case 2042:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2148);
      END_STATE();
    case 2043:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2149);
      END_STATE();
    case 2044:
      if (lookahead == '-') ADVANCE(2150);
      END_STATE();
    case 2045:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2151);
      END_STATE();
    case 2046:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2152);
      END_STATE();
    case 2047:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2153);
      END_STATE();
    case 2048:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2154);
      END_STATE();
    case 2049:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2155);
      END_STATE();
    case 2050:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2156);
      END_STATE();
    case 2051:
      ACCEPT_TOKEN(sym__DAY_OF_WEEK);
      END_STATE();
    case 2052:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2157);
      END_STATE();
    case 2053:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2158);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym__END_COMPUTE);
      END_STATE();
    case 2055:
      ACCEPT_TOKEN(sym__END_DISPLAY);
      END_STATE();
    case 2056:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2159);
      END_STATE();
    case 2057:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2160);
      END_STATE();
    case 2058:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2161);
      END_STATE();
    case 2059:
      ACCEPT_TOKEN(sym__END_PERFORM);
      END_STATE();
    case 2060:
      ACCEPT_TOKEN(sym__END_PROGRAM);
      END_STATE();
    case 2061:
      ACCEPT_TOKEN(sym__END_REWRITE);
      END_STATE();
    case 2062:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2162);
      END_STATE();
    case 2063:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2163);
      END_STATE();
    case 2064:
      ACCEPT_TOKEN(sym__ENVIRONMENT);
      if (lookahead == '-') ADVANCE(2164);
      END_STATE();
    case 2065:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2165);
      END_STATE();
    case 2066:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2166);
      END_STATE();
    case 2067:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2167);
      END_STATE();
    case 2068:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2168);
      END_STATE();
    case 2069:
      ACCEPT_TOKEN(sym__FUNCTION_ID);
      END_STATE();
    case 2070:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2169);
      END_STATE();
    case 2071:
      ACCEPT_TOKEN(sym__I_O_CONTROL);
      END_STATE();
    case 2072:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2170);
      END_STATE();
    case 2073:
      ACCEPT_TOKEN(sym__INITIALIZED);
      END_STATE();
    case 2074:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2171);
      END_STATE();
    case 2075:
      ACCEPT_TOKEN(sym__INVALID_KEY);
      END_STATE();
    case 2076:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2172);
      END_STATE();
    case 2077:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2173);
      END_STATE();
    case 2078:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2174);
      END_STATE();
    case 2079:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2175);
      END_STATE();
    case 2080:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2176);
      END_STATE();
    case 2081:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2177);
      END_STATE();
    case 2082:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2178);
      END_STATE();
    case 2083:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2179);
      END_STATE();
    case 2084:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2180);
      END_STATE();
    case 2085:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2181);
      END_STATE();
    case 2086:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2182);
      END_STATE();
    case 2087:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2183);
      END_STATE();
    case 2088:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2184);
      END_STATE();
    case 2089:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2185);
      END_STATE();
    case 2090:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2186);
      END_STATE();
    case 2091:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2187);
      END_STATE();
    case 2092:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2188);
      END_STATE();
    case 2093:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2189);
      END_STATE();
    case 2094:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2190);
      END_STATE();
    case 2095:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2191);
      END_STATE();
    case 2096:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2192);
      END_STATE();
    case 2097:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2193);
      END_STATE();
    case 2098:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2194);
      END_STATE();
    case 2099:
      if (lookahead == '-') ADVANCE(2195);
      END_STATE();
    case 2100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2196);
      END_STATE();
    case 2101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2197);
      END_STATE();
    case 2102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2198);
      END_STATE();
    case 2103:
      ACCEPT_TOKEN(sym__NUMVALC_FUNC);
      END_STATE();
    case 2104:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2199);
      END_STATE();
    case 2105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2200);
      END_STATE();
    case 2106:
      ACCEPT_TOKEN(sym__NO_ADVANCING);
      END_STATE();
    case 2107:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2201);
      END_STATE();
    case 2108:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2202);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(sym__NOT_OVERFLOW);
      END_STATE();
    case 2110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2203);
      END_STATE();
    case 2111:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2204);
      END_STATE();
    case 2112:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2205);
      END_STATE();
    case 2113:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2206);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(sym__SIGNED_SHORT);
      END_STATE();
    case 2115:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2207);
      END_STATE();
    case 2116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2208);
      END_STATE();
    case 2117:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2209);
      END_STATE();
    case 2118:
      ACCEPT_TOKEN(sym__SYNCHRONIZED);
      END_STATE();
    case 2119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2210);
      END_STATE();
    case 2120:
      if (lookahead == 'g') ADVANCE(2211);
      END_STATE();
    case 2121:
      if (lookahead == 'l') ADVANCE(2212);
      END_STATE();
    case 2122:
      if (lookahead == 'l') ADVANCE(2213);
      END_STATE();
    case 2123:
      if (lookahead == 't') ADVANCE(2214);
      END_STATE();
    case 2124:
      if (lookahead == 'g') ADVANCE(2215);
      END_STATE();
    case 2125:
      if (lookahead == 'm') ADVANCE(2216);
      END_STATE();
    case 2126:
      if (lookahead == 'l') ADVANCE(2217);
      END_STATE();
    case 2127:
      if (lookahead == 'n') ADVANCE(2218);
      END_STATE();
    case 2128:
      if (lookahead == 'c') ADVANCE(2219);
      END_STATE();
    case 2129:
      if (lookahead == 'e') ADVANCE(2220);
      END_STATE();
    case 2130:
      if (lookahead == 'p') ADVANCE(2221);
      END_STATE();
    case 2131:
      if (lookahead == 'c') ADVANCE(2222);
      END_STATE();
    case 2132:
      if (lookahead == '_') ADVANCE(2223);
      END_STATE();
    case 2133:
      if (lookahead == 'a') ADVANCE(2224);
      END_STATE();
    case 2134:
      if (lookahead == 'n') ADVANCE(2225);
      END_STATE();
    case 2135:
      if (lookahead == 'l') ADVANCE(2226);
      END_STATE();
    case 2136:
      if (lookahead == 'l') ADVANCE(2227);
      END_STATE();
    case 2137:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2228);
      END_STATE();
    case 2138:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2229);
      END_STATE();
    case 2139:
      ACCEPT_TOKEN(sym__ALPHANUMERIC);
      if (lookahead == '-') ADVANCE(2230);
      END_STATE();
    case 2140:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2231);
      END_STATE();
    case 2141:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2232);
      END_STATE();
    case 2142:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2233);
      END_STATE();
    case 2143:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2234);
      END_STATE();
    case 2144:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2235);
      END_STATE();
    case 2145:
      ACCEPT_TOKEN(sym__BINARY_SHORT);
      END_STATE();
    case 2146:
      ACCEPT_TOKEN(sym__BLANK_SCREEN);
      END_STATE();
    case 2147:
      ACCEPT_TOKEN(sym__CLOSE_NOFEED);
      END_STATE();
    case 2148:
      ACCEPT_TOKEN(sym__COMMAND_LINE);
      END_STATE();
    case 2149:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2236);
      END_STATE();
    case 2150:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2237);
      END_STATE();
    case 2151:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2238);
      END_STATE();
    case 2152:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2239);
      END_STATE();
    case 2153:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2240);
      END_STATE();
    case 2154:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2241);
      END_STATE();
    case 2155:
      if (lookahead == '-') ADVANCE(2242);
      END_STATE();
    case 2156:
      ACCEPT_TOKEN(sym__CYL_OVERFLOW);
      END_STATE();
    case 2157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2243);
      END_STATE();
    case 2158:
      ACCEPT_TOKEN(sym__DECLARATIVES);
      END_STATE();
    case 2159:
      ACCEPT_TOKEN(sym__END_EVALUATE);
      END_STATE();
    case 2160:
      ACCEPT_TOKEN(sym__END_FUNCTION);
      END_STATE();
    case 2161:
      ACCEPT_TOKEN(sym__END_MULTIPLY);
      END_STATE();
    case 2162:
      ACCEPT_TOKEN(sym__END_SUBTRACT);
      END_STATE();
    case 2163:
      ACCEPT_TOKEN(sym__END_UNSTRING);
      END_STATE();
    case 2164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2244);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2245);
      END_STATE();
    case 2165:
      ACCEPT_TOKEN(sym__EVENT_STATUS);
      END_STATE();
    case 2166:
      ACCEPT_TOKEN(sym__FILE_CONTROL);
      END_STATE();
    case 2167:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2246);
      END_STATE();
    case 2168:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2247);
      END_STATE();
    case 2169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2248);
      END_STATE();
    case 2170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2249);
      END_STATE();
    case 2171:
      ACCEPT_TOKEN(sym__INPUT_OUTPUT);
      END_STATE();
    case 2172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2250);
      END_STATE();
    case 2173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2251);
      END_STATE();
    case 2174:
      ACCEPT_TOKEN(sym__ORGANIZATION);
      END_STATE();
    case 2175:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2252);
      END_STATE();
    case 2176:
      ACCEPT_TOKEN(sym__PAGE_FOOTING);
      END_STATE();
    case 2177:
      ACCEPT_TOKEN(sym__PAGE_HEADING);
      END_STATE();
    case 2178:
      ACCEPT_TOKEN(sym__PROGRAM_NAME);
      END_STATE();
    case 2179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2253);
      END_STATE();
    case 2180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2254);
      END_STATE();
    case 2181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2255);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(sym__REVERSE_FUNC);
      END_STATE();
    case 2183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2256);
      END_STATE();
    case 2184:
      ACCEPT_TOKEN(sym__UNSIGNED_INT);
      END_STATE();
    case 2185:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2257);
      END_STATE();
    case 2186:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2258);
      END_STATE();
    case 2187:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2259);
      END_STATE();
    case 2188:
      if (lookahead == '-') ADVANCE(2260);
      END_STATE();
    case 2189:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2261);
      END_STATE();
    case 2190:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2262);
      END_STATE();
    case 2191:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2263);
      END_STATE();
    case 2192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2264);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(sym__LOCAL_STORAGE);
      END_STATE();
    case 2194:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2265);
      END_STATE();
    case 2195:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2266);
      END_STATE();
    case 2196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2267);
      END_STATE();
    case 2197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2268);
      END_STATE();
    case 2198:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2269);
      END_STATE();
    case 2199:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2270);
      END_STATE();
    case 2200:
      ACCEPT_TOKEN(sym__NEXT_SENTENCE);
      END_STATE();
    case 2201:
      ACCEPT_TOKEN(sym__NOT_EXCEPTION);
      END_STATE();
    case 2202:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2271);
      END_STATE();
    case 2203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2272);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(sym__SPECIAL_NAMES);
      END_STATE();
    case 2205:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2273);
      END_STATE();
    case 2206:
      ACCEPT_TOKEN(sym__SEGMENT_LIMIT);
      END_STATE();
    case 2207:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2274);
      END_STATE();
    case 2208:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2275);
      END_STATE();
    case 2209:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2276);
      END_STATE();
    case 2210:
      ACCEPT_TOKEN(sym__TRIM_FUNCTION);
      END_STATE();
    case 2211:
      if (lookahead == 't') ADVANCE(2277);
      END_STATE();
    case 2212:
      if (lookahead == 'a') ADVANCE(2278);
      END_STATE();
    case 2213:
      if (lookahead == 'a') ADVANCE(2279);
      END_STATE();
    case 2214:
      if (lookahead == '_') ADVANCE(2280);
      END_STATE();
    case 2215:
      if (lookahead == 'r') ADVANCE(2281);
      END_STATE();
    case 2216:
      if (lookahead == 'e') ADVANCE(2282);
      END_STATE();
    case 2217:
      if (lookahead == '_') ADVANCE(2283);
      END_STATE();
    case 2218:
      if (lookahead == '_') ADVANCE(2284);
      END_STATE();
    case 2219:
      if (lookahead == 'l') ADVANCE(2285);
      END_STATE();
    case 2220:
      if (lookahead == 'd') ADVANCE(2286);
      END_STATE();
    case 2221:
      if (lookahead == 'r') ADVANCE(2287);
      END_STATE();
    case 2222:
      if (lookahead == 'l') ADVANCE(2288);
      END_STATE();
    case 2223:
      if (lookahead == 'c') ADVANCE(2289);
      END_STATE();
    case 2224:
      if (lookahead == 'u') ADVANCE(2290);
      END_STATE();
    case 2225:
      if (lookahead == 'i') ADVANCE(2291);
      END_STATE();
    case 2226:
      if (lookahead == 'a') ADVANCE(2292);
      END_STATE();
    case 2227:
      if (lookahead == 'a') ADVANCE(2293);
      END_STATE();
    case 2228:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2294);
      END_STATE();
    case 2229:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2295);
      END_STATE();
    case 2230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2296);
      END_STATE();
    case 2231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2297);
      END_STATE();
    case 2232:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2298);
      END_STATE();
    case 2233:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2299);
      END_STATE();
    case 2234:
      ACCEPT_TOKEN(sym__BINARY_C_LONG);
      END_STATE();
    case 2235:
      ACCEPT_TOKEN(sym__BINARY_DOUBLE);
      END_STATE();
    case 2236:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2300);
      END_STATE();
    case 2237:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2301);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(sym__CONFIGURATION);
      END_STATE();
    case 2239:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2302);
      END_STATE();
    case 2240:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2303);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(sym__CORRESPONDING);
      END_STATE();
    case 2242:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2304);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(sym__DECIMAL_POINT);
      END_STATE();
    case 2244:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2305);
      END_STATE();
    case 2245:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2306);
      END_STATE();
    case 2246:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2307);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(sym__FORMS_OVERLAY);
      END_STATE();
    case 2248:
      ACCEPT_TOKEN(sym__FUNCTION_NAME);
      END_STATE();
    case 2249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2308);
      END_STATE();
    case 2250:
      ACCEPT_TOKEN(sym__MNEMONIC_NAME);
      END_STATE();
    case 2251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2309);
      END_STATE();
    case 2252:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2310);
      END_STATE();
    case 2253:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2311);
      END_STATE();
    case 2254:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2312);
      END_STATE();
    case 2255:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2313);
      END_STATE();
    case 2256:
      ACCEPT_TOKEN(sym__REVERSE_VIDEO);
      END_STATE();
    case 2257:
      ACCEPT_TOKEN(sym__UNSIGNED_LONG);
      END_STATE();
    case 2258:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2314);
      END_STATE();
    case 2259:
      if (lookahead == '-') ADVANCE(2315);
      END_STATE();
    case 2260:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2316);
      END_STATE();
    case 2261:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2317);
      END_STATE();
    case 2262:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2318);
      END_STATE();
    case 2263:
      if (lookahead == '-') ADVANCE(2319);
      END_STATE();
    case 2264:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2320);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(sym__LOCALE_DT_FUNC);
      END_STATE();
    case 2266:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2321);
      END_STATE();
    case 2267:
      if (lookahead == '-') ADVANCE(2322);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(sym__LINAGE_COUNTER);
      END_STATE();
    case 2269:
      ACCEPT_TOKEN(sym__NUMERIC_EDITED);
      END_STATE();
    case 2270:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2323);
      END_STATE();
    case 2271:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2324);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(sym__NOT_SIZE_ERROR);
      END_STATE();
    case 2273:
      ACCEPT_TOKEN(sym__SCREEN_CONTROL);
      END_STATE();
    case 2274:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2325);
      END_STATE();
    case 2275:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2326);
      END_STATE();
    case 2276:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2327);
      END_STATE();
    case 2277:
      if (lookahead == 'h') ADVANCE(2328);
      END_STATE();
    case 2278:
      if (lookahead == 'u') ADVANCE(2329);
      END_STATE();
    case 2279:
      if (lookahead == 'u') ADVANCE(2330);
      END_STATE();
    case 2280:
      if (lookahead == 'e') ADVANCE(2331);
      END_STATE();
    case 2281:
      if (lookahead == 'a') ADVANCE(2332);
      END_STATE();
    case 2282:
      if (lookahead == 'n') ADVANCE(2333);
      END_STATE();
    case 2283:
      if (lookahead == 'c') ADVANCE(2334);
      END_STATE();
    case 2284:
      if (lookahead == 'd') ADVANCE(2335);
      END_STATE();
    case 2285:
      if (lookahead == 'a') ADVANCE(2336);
      END_STATE();
    case 2286:
      if (lookahead == '_') ADVANCE(2337);
      END_STATE();
    case 2287:
      if (lookahead == 'o') ADVANCE(2338);
      END_STATE();
    case 2288:
      if (lookahead == 'a') ADVANCE(2339);
      END_STATE();
    case 2289:
      if (lookahead == 'l') ADVANCE(2340);
      END_STATE();
    case 2290:
      if (lookahead == 's') ADVANCE(2341);
      END_STATE();
    case 2291:
      if (lookahead == 'z') ADVANCE(2342);
      END_STATE();
    case 2292:
      if (lookahead == 'u') ADVANCE(2343);
      END_STATE();
    case 2293:
      if (lookahead == 'u') ADVANCE(2344);
      END_STATE();
    case 2294:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2345);
      END_STATE();
    case 2295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2346);
      END_STATE();
    case 2296:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2347);
      END_STATE();
    case 2297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2348);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(sym__ARGUMENT_VALUE);
      END_STATE();
    case 2299:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2349);
      END_STATE();
    case 2300:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2350);
      END_STATE();
    case 2301:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2351);
      END_STATE();
    case 2302:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2352);
      END_STATE();
    case 2303:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2353);
      END_STATE();
    case 2304:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2354);
      END_STATE();
    case 2305:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2355);
      END_STATE();
    case 2306:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2356);
      END_STATE();
    case 2307:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2357);
      END_STATE();
    case 2308:
      ACCEPT_TOKEN(sym__IDENTIFICATION);
      END_STATE();
    case 2309:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2358);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(sym__PACKED_DECIMAL);
      END_STATE();
    case 2311:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2359);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(sym__REPORT_FOOTING);
      END_STATE();
    case 2313:
      ACCEPT_TOKEN(sym__REPORT_HEADING);
      END_STATE();
    case 2314:
      ACCEPT_TOKEN(sym__UNSIGNED_SHORT);
      END_STATE();
    case 2315:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2360);
      END_STATE();
    case 2316:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2361);
      END_STATE();
    case 2317:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2362);
      END_STATE();
    case 2318:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2363);
      END_STATE();
    case 2319:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2364);
      END_STATE();
    case 2320:
      ACCEPT_TOKEN(sym__LOWER_CASE_FUNC);
      END_STATE();
    case 2321:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2365);
      END_STATE();
    case 2322:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2366);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(sym__NATIONAL_EDITED);
      END_STATE();
    case 2324:
      ACCEPT_TOKEN(sym__NOT_INVALID_KEY);
      END_STATE();
    case 2325:
      ACCEPT_TOKEN(sym__SOURCE_COMPUTER);
      END_STATE();
    case 2326:
      if (lookahead == '-') ADVANCE(2367);
      END_STATE();
    case 2327:
      ACCEPT_TOKEN(sym__SUBSTITUTE_FUNC);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(sym_any_length_clause);
      END_STATE();
    case 2329:
      if (lookahead == 's') ADVANCE(2368);
      END_STATE();
    case 2330:
      if (lookahead == 's') ADVANCE(2369);
      END_STATE();
    case 2331:
      if (lookahead == 'n') ADVANCE(2370);
      END_STATE();
    case 2332:
      if (lookahead == 'm') ADVANCE(2371);
      END_STATE();
    case 2333:
      if (lookahead == 't') ADVANCE(2372);
      END_STATE();
    case 2334:
      if (lookahead == 'l') ADVANCE(2373);
      END_STATE();
    case 2335:
      if (lookahead == 'e') ADVANCE(2374);
      END_STATE();
    case 2336:
      if (lookahead == 'u') ADVANCE(2375);
      END_STATE();
    case 2337:
      if (lookahead == 'c') ADVANCE(2376);
      END_STATE();
    case 2338:
      if (lookahead == 'g') ADVANCE(2377);
      END_STATE();
    case 2339:
      if (lookahead == 'u') ADVANCE(2378);
      END_STATE();
    case 2340:
      if (lookahead == 'a') ADVANCE(2379);
      END_STATE();
    case 2341:
      if (lookahead == 'e') ADVANCE(2380);
      END_STATE();
    case 2342:
      if (lookahead == 'e') ADVANCE(2381);
      END_STATE();
    case 2343:
      if (lookahead == 's') ADVANCE(2382);
      END_STATE();
    case 2344:
      if (lookahead == 's') ADVANCE(2383);
      END_STATE();
    case 2345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2384);
      END_STATE();
    case 2346:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2385);
      END_STATE();
    case 2347:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2386);
      END_STATE();
    case 2348:
      ACCEPT_TOKEN(sym__ARGUMENT_NUMBER);
      END_STATE();
    case 2349:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2387);
      END_STATE();
    case 2350:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2388);
      END_STATE();
    case 2351:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2389);
      END_STATE();
    case 2352:
      ACCEPT_TOKEN(sym__CONTROL_FOOTING);
      END_STATE();
    case 2353:
      ACCEPT_TOKEN(sym__CONTROL_HEADING);
      END_STATE();
    case 2354:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2390);
      END_STATE();
    case 2355:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2391);
      END_STATE();
    case 2356:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2392);
      END_STATE();
    case 2357:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2393);
      END_STATE();
    case 2358:
      ACCEPT_TOKEN(sym__OBJECT_COMPUTER);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(sym__PROGRAM_POINTER);
      END_STATE();
    case 2360:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2394);
      END_STATE();
    case 2361:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2395);
      END_STATE();
    case 2362:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2396);
      END_STATE();
    case 2363:
      ACCEPT_TOKEN(sym__UPPER_CASE_FUNC);
      END_STATE();
    case 2364:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2397);
      END_STATE();
    case 2365:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2398);
      END_STATE();
    case 2366:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2399);
      END_STATE();
    case 2367:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2400);
      END_STATE();
    case 2368:
      if (lookahead == 'e') ADVANCE(2401);
      END_STATE();
    case 2369:
      if (lookahead == 'e') ADVANCE(2402);
      END_STATE();
    case 2370:
      if (lookahead == 't') ADVANCE(2403);
      END_STATE();
    case 2371:
      ACCEPT_TOKEN(sym_end_program);
      END_STATE();
    case 2372:
      if (lookahead == '_') ADVANCE(2404);
      END_STATE();
    case 2373:
      if (lookahead == 'a') ADVANCE(2405);
      END_STATE();
    case 2374:
      if (lookahead == 'f') ADVANCE(2406);
      END_STATE();
    case 2375:
      if (lookahead == 's') ADVANCE(2407);
      END_STATE();
    case 2376:
      if (lookahead == 'l') ADVANCE(2408);
      END_STATE();
    case 2377:
      ACCEPT_TOKEN(sym_nested_prog);
      END_STATE();
    case 2378:
      if (lookahead == 's') ADVANCE(2409);
      END_STATE();
    case 2379:
      if (lookahead == 'u') ADVANCE(2410);
      END_STATE();
    case 2380:
      ACCEPT_TOKEN(sym_sign_clause);
      END_STATE();
    case 2381:
      if (lookahead == 'd') ADVANCE(2411);
      END_STATE();
    case 2382:
      if (lookahead == 'e') ADVANCE(2412);
      END_STATE();
    case 2383:
      if (lookahead == 'e') ADVANCE(2413);
      END_STATE();
    case 2384:
      ACCEPT_TOKEN(sym__ALPHABETIC_LOWER);
      END_STATE();
    case 2385:
      ACCEPT_TOKEN(sym__ALPHABETIC_UPPER);
      END_STATE();
    case 2386:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2414);
      END_STATE();
    case 2387:
      ACCEPT_TOKEN(sym__BACKGROUND_COLOR);
      END_STATE();
    case 2388:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2415);
      END_STATE();
    case 2389:
      ACCEPT_TOKEN(sym__CONCATENATE_FUNC);
      END_STATE();
    case 2390:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2416);
      END_STATE();
    case 2391:
      ACCEPT_TOKEN(sym__ENVIRONMENT_NAME);
      END_STATE();
    case 2392:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2417);
      END_STATE();
    case 2393:
      ACCEPT_TOKEN(sym__FOREGROUND_COLOR);
      END_STATE();
    case 2394:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2418);
      END_STATE();
    case 2395:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2419);
      END_STATE();
    case 2396:
      if (lookahead == '-') ADVANCE(2420);
      END_STATE();
    case 2397:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2421);
      END_STATE();
    case 2398:
      ACCEPT_TOKEN(sym__LEVEL_NUMBER_WORD);
      END_STATE();
    case 2399:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2422);
      END_STATE();
    case 2400:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2423);
      END_STATE();
    case 2401:
      ACCEPT_TOKEN(sym_based_clause);
      END_STATE();
    case 2402:
      ACCEPT_TOKEN(sym_blank_clause);
      END_STATE();
    case 2403:
      if (lookahead == 'r') ADVANCE(2424);
      END_STATE();
    case 2404:
      if (lookahead == 'd') ADVANCE(2425);
      END_STATE();
    case 2405:
      if (lookahead == 'u') ADVANCE(2426);
      END_STATE();
    case 2406:
      if (lookahead == 'i') ADVANCE(2427);
      END_STATE();
    case 2407:
      if (lookahead == 'e') ADVANCE(2428);
      END_STATE();
    case 2408:
      if (lookahead == 'a') ADVANCE(2429);
      END_STATE();
    case 2409:
      if (lookahead == 'e') ADVANCE(2430);
      END_STATE();
    case 2410:
      if (lookahead == 's') ADVANCE(2431);
      END_STATE();
    case 2411:
      if (lookahead == '_') ADVANCE(2432);
      END_STATE();
    case 2412:
      ACCEPT_TOKEN(sym_usage_clause);
      END_STATE();
    case 2413:
      ACCEPT_TOKEN(sym_value_clause);
      END_STATE();
    case 2414:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2433);
      END_STATE();
    case 2415:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2434);
      END_STATE();
    case 2416:
      ACCEPT_TOKEN(sym__CURRENT_DATE_FUNC);
      END_STATE();
    case 2417:
      ACCEPT_TOKEN(sym__ENVIRONMENT_VALUE);
      END_STATE();
    case 2418:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2435);
      END_STATE();
    case 2419:
      ACCEPT_TOKEN(sym__UPON_COMMAND_LINE);
      END_STATE();
    case 2420:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2436);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2437);
      END_STATE();
    case 2421:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2438);
      END_STATE();
    case 2422:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2439);
      END_STATE();
    case 2423:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2440);
      END_STATE();
    case 2424:
      if (lookahead == 'y') ADVANCE(2441);
      END_STATE();
    case 2425:
      if (lookahead == 'i') ADVANCE(2442);
      END_STATE();
    case 2426:
      if (lookahead == 's') ADVANCE(2443);
      END_STATE();
    case 2427:
      if (lookahead == 'n') ADVANCE(2444);
      END_STATE();
    case 2428:
      ACCEPT_TOKEN(sym_global_clause);
      END_STATE();
    case 2429:
      if (lookahead == 'u') ADVANCE(2445);
      END_STATE();
    case 2430:
      ACCEPT_TOKEN(sym_occurs_clause);
      END_STATE();
    case 2431:
      if (lookahead == 'e') ADVANCE(2446);
      END_STATE();
    case 2432:
      if (lookahead == 'c') ADVANCE(2447);
      END_STATE();
    case 2433:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2448);
      END_STATE();
    case 2434:
      ACCEPT_TOKEN(sym__COMMITMENT_CONTROL);
      END_STATE();
    case 2435:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2449);
      END_STATE();
    case 2436:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2450);
      END_STATE();
    case 2437:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2451);
      END_STATE();
    case 2438:
      ACCEPT_TOKEN(sym__WHEN_COMPILED_FUNC);
      END_STATE();
    case 2439:
      ACCEPT_TOKEN(sym__LEVEL88_NUMBER_WORD);
      END_STATE();
    case 2440:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2452);
      END_STATE();
    case 2441:
      ACCEPT_TOKEN(sym_constant_entry);
      END_STATE();
    case 2442:
      if (lookahead == 'v') ADVANCE(2453);
      END_STATE();
    case 2443:
      if (lookahead == 'e') ADVANCE(2454);
      END_STATE();
    case 2444:
      if (lookahead == 'i') ADVANCE(2455);
      END_STATE();
    case 2445:
      if (lookahead == 's') ADVANCE(2456);
      END_STATE();
    case 2446:
      ACCEPT_TOKEN(sym_renames_clause);
      END_STATE();
    case 2447:
      if (lookahead == 'l') ADVANCE(2457);
      END_STATE();
    case 2448:
      ACCEPT_TOKEN(sym__ALPHANUMERIC_EDITED);
      END_STATE();
    case 2449:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2458);
      END_STATE();
    case 2450:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2459);
      END_STATE();
    case 2451:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2460);
      END_STATE();
    case 2452:
      ACCEPT_TOKEN(sym__SUBSTITUTE_CASE_FUNC);
      END_STATE();
    case 2453:
      if (lookahead == 'i') ADVANCE(2461);
      END_STATE();
    case 2454:
      ACCEPT_TOKEN(sym_external_clause);
      END_STATE();
    case 2455:
      if (lookahead == 't') ADVANCE(2462);
      END_STATE();
    case 2456:
      if (lookahead == 'e') ADVANCE(2463);
      END_STATE();
    case 2457:
      if (lookahead == 'a') ADVANCE(2464);
      END_STATE();
    case 2458:
      ACCEPT_TOKEN(sym__UPON_ARGUMENT_NUMBER);
      END_STATE();
    case 2459:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2465);
      END_STATE();
    case 2460:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2466);
      END_STATE();
    case 2461:
      if (lookahead == 's') ADVANCE(2467);
      END_STATE();
    case 2462:
      if (lookahead == 'i') ADVANCE(2468);
      END_STATE();
    case 2463:
      ACCEPT_TOKEN(sym_justified_clause);
      END_STATE();
    case 2464:
      if (lookahead == 'u') ADVANCE(2469);
      END_STATE();
    case 2465:
      ACCEPT_TOKEN(sym__UPON_ENVIRONMENT_NAME);
      END_STATE();
    case 2466:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2470);
      END_STATE();
    case 2467:
      if (lookahead == 'i') ADVANCE(2471);
      END_STATE();
    case 2468:
      if (lookahead == 'o') ADVANCE(2472);
      END_STATE();
    case 2469:
      if (lookahead == 's') ADVANCE(2473);
      END_STATE();
    case 2470:
      ACCEPT_TOKEN(sym__UPON_ENVIRONMENT_VALUE);
      END_STATE();
    case 2471:
      if (lookahead == 'o') ADVANCE(2474);
      END_STATE();
    case 2472:
      if (lookahead == 'n') ADVANCE(2475);
      END_STATE();
    case 2473:
      if (lookahead == 'e') ADVANCE(2476);
      END_STATE();
    case 2474:
      if (lookahead == 'n') ADVANCE(2477);
      END_STATE();
    case 2475:
      ACCEPT_TOKEN(sym_function_definition);
      END_STATE();
    case 2476:
      ACCEPT_TOKEN(sym_synchronized_clause);
      END_STATE();
    case 2477:
      ACCEPT_TOKEN(sym_environment_division);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 113},
  [2] = {.lex_state = 113},
  [3] = {.lex_state = 113},
  [4] = {.lex_state = 113},
  [5] = {.lex_state = 113},
  [6] = {.lex_state = 113},
  [7] = {.lex_state = 113},
  [8] = {.lex_state = 113},
  [9] = {.lex_state = 113},
  [10] = {.lex_state = 113},
  [11] = {.lex_state = 113},
  [12] = {.lex_state = 113},
  [13] = {.lex_state = 113},
  [14] = {.lex_state = 113},
  [15] = {.lex_state = 113},
  [16] = {.lex_state = 113},
  [17] = {.lex_state = 113},
  [18] = {.lex_state = 113},
  [19] = {.lex_state = 113},
  [20] = {.lex_state = 113},
  [21] = {.lex_state = 113},
  [22] = {.lex_state = 113},
  [23] = {.lex_state = 113},
  [24] = {.lex_state = 113},
  [25] = {.lex_state = 113},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 113},
  [28] = {.lex_state = 113},
  [29] = {.lex_state = 113},
  [30] = {.lex_state = 113},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 113},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 113},
  [35] = {.lex_state = 113},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 113},
  [39] = {.lex_state = 113},
  [40] = {.lex_state = 113},
  [41] = {.lex_state = 113},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 113},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 113},
  [46] = {.lex_state = 113},
  [47] = {.lex_state = 113},
  [48] = {.lex_state = 113},
  [49] = {.lex_state = 113},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 113},
  [52] = {.lex_state = 113},
  [53] = {.lex_state = 99},
  [54] = {.lex_state = 113},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 113},
  [58] = {.lex_state = 113},
  [59] = {.lex_state = 113},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 99},
  [63] = {.lex_state = 113},
  [64] = {.lex_state = 113},
  [65] = {.lex_state = 113},
  [66] = {.lex_state = 113},
  [67] = {.lex_state = 113},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 113},
  [70] = {.lex_state = 113},
  [71] = {.lex_state = 113},
  [72] = {.lex_state = 113},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 113},
  [75] = {.lex_state = 113},
  [76] = {.lex_state = 113},
  [77] = {.lex_state = 113},
  [78] = {.lex_state = 113},
  [79] = {.lex_state = 113},
  [80] = {.lex_state = 113},
  [81] = {.lex_state = 113},
  [82] = {.lex_state = 113},
  [83] = {.lex_state = 113},
  [84] = {.lex_state = 113},
  [85] = {.lex_state = 113},
  [86] = {.lex_state = 113},
  [87] = {.lex_state = 113},
  [88] = {.lex_state = 113},
  [89] = {.lex_state = 99},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 113},
  [92] = {.lex_state = 113},
  [93] = {.lex_state = 99},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 113},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 113},
  [98] = {.lex_state = 113},
  [99] = {.lex_state = 113},
  [100] = {.lex_state = 113},
  [101] = {.lex_state = 113},
  [102] = {.lex_state = 113},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 113},
  [105] = {.lex_state = 113},
  [106] = {.lex_state = 113},
  [107] = {.lex_state = 113},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 113},
  [111] = {.lex_state = 113},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 113},
  [114] = {.lex_state = 113},
  [115] = {.lex_state = 113},
  [116] = {.lex_state = 113},
  [117] = {.lex_state = 113},
  [118] = {.lex_state = 113},
  [119] = {.lex_state = 113},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 113},
  [122] = {.lex_state = 113},
  [123] = {.lex_state = 113},
  [124] = {.lex_state = 113},
  [125] = {.lex_state = 113},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 113},
  [130] = {.lex_state = 113},
  [131] = {.lex_state = 113},
  [132] = {.lex_state = 113},
  [133] = {.lex_state = 113},
  [134] = {.lex_state = 113},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 113},
  [140] = {.lex_state = 113},
  [141] = {.lex_state = 113},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 113},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 113},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 113},
  [154] = {.lex_state = 113},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 113},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 113},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 113},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 113},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 113},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 113},
  [169] = {.lex_state = 113},
  [170] = {.lex_state = 113},
  [171] = {.lex_state = 113},
  [172] = {.lex_state = 8},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 113},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 113},
  [180] = {.lex_state = 113},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 113},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 113},
  [196] = {.lex_state = 113},
  [197] = {.lex_state = 113},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 113},
  [200] = {.lex_state = 113},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 113},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
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
    [sym_external_clause] = ACTIONS(1),
    [sym_global_clause] = ACTIONS(1),
    [sym_picture_x] = ACTIONS(1),
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
    [sym__LITERAL] = ACTIONS(1),
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
    [sym_start] = STATE(203),
    [sym_program_definition] = STATE(58),
    [sym_identification_division] = STATE(53),
    [aux_sym_start_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__IDENTIFICATION] = ACTIONS(5),
  },
  [2] = {
    [sym__identifier] = STATE(164),
    [sym__qualified_word] = STATE(40),
    [sym__move_body] = STATE(165),
    [sym__x] = STATE(164),
    [sym__basic_literal] = STATE(164),
    [sym__basic_value] = STATE(79),
    [sym__literal] = STATE(164),
    [sym_function_] = STATE(164),
    [sym_linage_counter] = STATE(164),
    [sym__HIGH_VALUE] = STATE(119),
    [sym__LOW_VALUE] = STATE(121),
    [sym__QUOTE] = STATE(124),
    [sym__SPACE] = STATE(131),
    [sym__TOK_NULL] = STATE(130),
    [sym__ZERO] = STATE(104),
    [sym_ALL_] = STATE(6),
    [sym_CONCATENATE_FUNC_] = STATE(155),
    [sym_CURRENT_DATE_FUNC_] = STATE(86),
    [sym_FUNCTION_NAME_] = STATE(87),
    [sym_HIGH_VALUE_] = STATE(79),
    [sym_LITERAL_] = STATE(79),
    [sym_LOCALE_DT_FUNC_] = STATE(157),
    [sym_LOWER_CASE_FUNC_] = STATE(209),
    [sym_LOW_VALUE_] = STATE(79),
    [sym_NUMVALC_FUNC_] = STATE(207),
    [sym_QUOTE_] = STATE(79),
    [sym_REVERSE_FUNC_] = STATE(209),
    [sym_SPACE_] = STATE(79),
    [sym_SUBSTITUTE_FUNC_] = STATE(155),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(155),
    [sym_TOK_NULL_] = STATE(79),
    [sym_TRIM_FUNCTION_] = STATE(201),
    [sym_UPPER_CASE_FUNC_] = STATE(209),
    [sym_WHEN_COMPILED_FUNC_] = STATE(86),
    [sym_ZERO_] = STATE(79),
    [sym_WORD] = ACTIONS(7),
    [sym__ADDRESS] = ACTIONS(9),
    [sym__ALL] = ACTIONS(11),
    [sym__CONCATENATE_FUNC] = ACTIONS(13),
    [sym__CORRESPONDING] = ACTIONS(15),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(17),
    [sym__FUNCTION_NAME] = ACTIONS(19),
    [anon_sym_high_DASHvalue] = ACTIONS(21),
    [anon_sym_high_DASHValue] = ACTIONS(21),
    [anon_sym_high_DASHVALUE] = ACTIONS(21),
    [anon_sym_High_DASHvalue] = ACTIONS(21),
    [anon_sym_High_DASHValue] = ACTIONS(21),
    [anon_sym_High_DASHVALUE] = ACTIONS(21),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(21),
    [anon_sym_HIGH_DASHValue] = ACTIONS(21),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(21),
    [sym__LENGTH] = ACTIONS(23),
    [sym__LINAGE_COUNTER] = ACTIONS(25),
    [sym__LITERAL] = ACTIONS(27),
    [sym__LOCALE_DT_FUNC] = ACTIONS(29),
    [sym__LOWER_CASE_FUNC] = ACTIONS(31),
    [anon_sym_low_DASHvalue] = ACTIONS(33),
    [anon_sym_low_DASHValue] = ACTIONS(33),
    [anon_sym_low_DASHVALUE] = ACTIONS(33),
    [anon_sym_Low_DASHvalue] = ACTIONS(33),
    [anon_sym_Low_DASHValue] = ACTIONS(33),
    [anon_sym_Low_DASHVALUE] = ACTIONS(33),
    [anon_sym_LOW_DASHvalue] = ACTIONS(33),
    [anon_sym_LOW_DASHValue] = ACTIONS(33),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(33),
    [sym__NUMVALC_FUNC] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(37),
    [anon_sym_QUOTE] = ACTIONS(37),
    [anon_sym_Quote] = ACTIONS(37),
    [sym__REVERSE_FUNC] = ACTIONS(39),
    [anon_sym_space] = ACTIONS(41),
    [anon_sym_SPACE] = ACTIONS(41),
    [anon_sym_Space] = ACTIONS(41),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(43),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(45),
    [anon_sym_null] = ACTIONS(47),
    [anon_sym_Null] = ACTIONS(47),
    [anon_sym_NULL] = ACTIONS(47),
    [sym__TRIM_FUNCTION] = ACTIONS(49),
    [sym__UPPER_CASE_FUNC] = ACTIONS(51),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(53),
    [anon_sym_zero] = ACTIONS(55),
    [anon_sym_ZERO] = ACTIONS(55),
    [anon_sym_Zero] = ACTIONS(55),
  },
  [3] = {
    [sym__identifier] = STATE(176),
    [sym__qualified_word] = STATE(40),
    [sym__x] = STATE(176),
    [sym__basic_literal] = STATE(176),
    [sym__basic_value] = STATE(79),
    [sym__literal] = STATE(176),
    [sym_function_] = STATE(176),
    [sym_linage_counter] = STATE(176),
    [sym__HIGH_VALUE] = STATE(119),
    [sym__LOW_VALUE] = STATE(121),
    [sym__QUOTE] = STATE(124),
    [sym__SPACE] = STATE(131),
    [sym__TOK_NULL] = STATE(130),
    [sym__ZERO] = STATE(104),
    [sym_ALL_] = STATE(6),
    [sym_CONCATENATE_FUNC_] = STATE(155),
    [sym_CURRENT_DATE_FUNC_] = STATE(86),
    [sym_FUNCTION_NAME_] = STATE(87),
    [sym_HIGH_VALUE_] = STATE(79),
    [sym_LITERAL_] = STATE(79),
    [sym_LOCALE_DT_FUNC_] = STATE(157),
    [sym_LOWER_CASE_FUNC_] = STATE(209),
    [sym_LOW_VALUE_] = STATE(79),
    [sym_NUMVALC_FUNC_] = STATE(207),
    [sym_QUOTE_] = STATE(79),
    [sym_REVERSE_FUNC_] = STATE(209),
    [sym_SPACE_] = STATE(79),
    [sym_SUBSTITUTE_FUNC_] = STATE(155),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(155),
    [sym_TOK_NULL_] = STATE(79),
    [sym_TRIM_FUNCTION_] = STATE(201),
    [sym_UPPER_CASE_FUNC_] = STATE(209),
    [sym_WHEN_COMPILED_FUNC_] = STATE(86),
    [sym_ZERO_] = STATE(79),
    [sym_WORD] = ACTIONS(7),
    [sym__ADDRESS] = ACTIONS(9),
    [sym__ALL] = ACTIONS(11),
    [sym__CONCATENATE_FUNC] = ACTIONS(13),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(17),
    [sym__FUNCTION_NAME] = ACTIONS(19),
    [anon_sym_high_DASHvalue] = ACTIONS(21),
    [anon_sym_high_DASHValue] = ACTIONS(21),
    [anon_sym_high_DASHVALUE] = ACTIONS(21),
    [anon_sym_High_DASHvalue] = ACTIONS(21),
    [anon_sym_High_DASHValue] = ACTIONS(21),
    [anon_sym_High_DASHVALUE] = ACTIONS(21),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(21),
    [anon_sym_HIGH_DASHValue] = ACTIONS(21),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(21),
    [sym__LENGTH] = ACTIONS(23),
    [sym__LINAGE_COUNTER] = ACTIONS(25),
    [sym__LITERAL] = ACTIONS(27),
    [sym__LOCALE_DT_FUNC] = ACTIONS(29),
    [sym__LOWER_CASE_FUNC] = ACTIONS(31),
    [anon_sym_low_DASHvalue] = ACTIONS(33),
    [anon_sym_low_DASHValue] = ACTIONS(33),
    [anon_sym_low_DASHVALUE] = ACTIONS(33),
    [anon_sym_Low_DASHvalue] = ACTIONS(33),
    [anon_sym_Low_DASHValue] = ACTIONS(33),
    [anon_sym_Low_DASHVALUE] = ACTIONS(33),
    [anon_sym_LOW_DASHvalue] = ACTIONS(33),
    [anon_sym_LOW_DASHValue] = ACTIONS(33),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(33),
    [sym__NUMVALC_FUNC] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(37),
    [anon_sym_QUOTE] = ACTIONS(37),
    [anon_sym_Quote] = ACTIONS(37),
    [sym__REVERSE_FUNC] = ACTIONS(39),
    [anon_sym_space] = ACTIONS(41),
    [anon_sym_SPACE] = ACTIONS(41),
    [anon_sym_Space] = ACTIONS(41),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(43),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(45),
    [anon_sym_null] = ACTIONS(47),
    [anon_sym_Null] = ACTIONS(47),
    [anon_sym_NULL] = ACTIONS(47),
    [sym__TRIM_FUNCTION] = ACTIONS(49),
    [sym__UPPER_CASE_FUNC] = ACTIONS(51),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(53),
    [anon_sym_zero] = ACTIONS(55),
    [anon_sym_ZERO] = ACTIONS(55),
    [anon_sym_Zero] = ACTIONS(55),
  },
  [4] = {
    [sym__identifier] = STATE(139),
    [sym__qualified_word] = STATE(40),
    [sym__basic_literal] = STATE(139),
    [sym__basic_value] = STATE(79),
    [sym_function_] = STATE(139),
    [sym__HIGH_VALUE] = STATE(119),
    [sym__LOW_VALUE] = STATE(121),
    [sym__QUOTE] = STATE(124),
    [sym__SPACE] = STATE(131),
    [sym__TOK_NULL] = STATE(130),
    [sym__ZERO] = STATE(104),
    [sym_CONCATENATE_FUNC_] = STATE(155),
    [sym_CURRENT_DATE_FUNC_] = STATE(86),
    [sym_FUNCTION_NAME_] = STATE(87),
    [sym_HIGH_VALUE_] = STATE(79),
    [sym_LITERAL_] = STATE(79),
    [sym_LOCALE_DT_FUNC_] = STATE(157),
    [sym_LOWER_CASE_FUNC_] = STATE(209),
    [sym_LOW_VALUE_] = STATE(79),
    [sym_NUMVALC_FUNC_] = STATE(207),
    [sym_QUOTE_] = STATE(79),
    [sym_REVERSE_FUNC_] = STATE(209),
    [sym_SPACE_] = STATE(79),
    [sym_SUBSTITUTE_FUNC_] = STATE(155),
    [sym_SUBSTITUTE_CASE_FUNC_] = STATE(155),
    [sym_TOK_NULL_] = STATE(79),
    [sym_TRIM_FUNCTION_] = STATE(201),
    [sym_UPPER_CASE_FUNC_] = STATE(209),
    [sym_WHEN_COMPILED_FUNC_] = STATE(86),
    [sym_ZERO_] = STATE(79),
    [sym_WORD] = ACTIONS(7),
    [sym__CONCATENATE_FUNC] = ACTIONS(13),
    [sym__CURRENT_DATE_FUNC] = ACTIONS(17),
    [sym__FUNCTION_NAME] = ACTIONS(19),
    [anon_sym_high_DASHvalue] = ACTIONS(21),
    [anon_sym_high_DASHValue] = ACTIONS(21),
    [anon_sym_high_DASHVALUE] = ACTIONS(21),
    [anon_sym_High_DASHvalue] = ACTIONS(21),
    [anon_sym_High_DASHValue] = ACTIONS(21),
    [anon_sym_High_DASHVALUE] = ACTIONS(21),
    [anon_sym_HIGH_DASHvalue] = ACTIONS(21),
    [anon_sym_HIGH_DASHValue] = ACTIONS(21),
    [anon_sym_HIGH_DASHVALUE] = ACTIONS(21),
    [sym__LITERAL] = ACTIONS(27),
    [sym__LOCALE_DT_FUNC] = ACTIONS(29),
    [sym__LOWER_CASE_FUNC] = ACTIONS(31),
    [anon_sym_low_DASHvalue] = ACTIONS(33),
    [anon_sym_low_DASHValue] = ACTIONS(33),
    [anon_sym_low_DASHVALUE] = ACTIONS(33),
    [anon_sym_Low_DASHvalue] = ACTIONS(33),
    [anon_sym_Low_DASHValue] = ACTIONS(33),
    [anon_sym_Low_DASHVALUE] = ACTIONS(33),
    [anon_sym_LOW_DASHvalue] = ACTIONS(33),
    [anon_sym_LOW_DASHValue] = ACTIONS(33),
    [anon_sym_LOW_DASHVALUE] = ACTIONS(33),
    [sym__NUMVALC_FUNC] = ACTIONS(35),
    [anon_sym_quote] = ACTIONS(37),
    [anon_sym_QUOTE] = ACTIONS(37),
    [anon_sym_Quote] = ACTIONS(37),
    [sym__REVERSE_FUNC] = ACTIONS(39),
    [anon_sym_space] = ACTIONS(41),
    [anon_sym_SPACE] = ACTIONS(41),
    [anon_sym_Space] = ACTIONS(41),
    [sym__SUBSTITUTE_FUNC] = ACTIONS(43),
    [sym__SUBSTITUTE_CASE_FUNC] = ACTIONS(45),
    [anon_sym_null] = ACTIONS(47),
    [anon_sym_Null] = ACTIONS(47),
    [anon_sym_NULL] = ACTIONS(47),
    [sym__TRIM_FUNCTION] = ACTIONS(49),
    [sym__UPPER_CASE_FUNC] = ACTIONS(51),
    [sym__WHEN_COMPILED_FUNC] = ACTIONS(53),
    [anon_sym_zero] = ACTIONS(55),
    [anon_sym_ZERO] = ACTIONS(55),
    [anon_sym_Zero] = ACTIONS(55),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(59), 1,
      sym__LITERAL,
    STATE(104), 1,
      sym__ZERO,
    STATE(119), 1,
      sym__HIGH_VALUE,
    STATE(121), 1,
      sym__LOW_VALUE,
    STATE(124), 1,
      sym__QUOTE,
    STATE(130), 1,
      sym__TOK_NULL,
    STATE(131), 1,
      sym__SPACE,
    ACTIONS(63), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(65), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(67), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(69), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(134), 8,
      sym__basic_value,
      sym_HIGH_VALUE_,
      sym_LITERAL_,
      sym_LOW_VALUE_,
      sym_QUOTE_,
      sym_SPACE_,
      sym_TOK_NULL_,
      sym_ZERO_,
    ACTIONS(57), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(61), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
  [74] = 14,
    ACTIONS(59), 1,
      sym__LITERAL,
    STATE(104), 1,
      sym__ZERO,
    STATE(119), 1,
      sym__HIGH_VALUE,
    STATE(121), 1,
      sym__LOW_VALUE,
    STATE(124), 1,
      sym__QUOTE,
    STATE(130), 1,
      sym__TOK_NULL,
    STATE(131), 1,
      sym__SPACE,
    ACTIONS(63), 3,
      anon_sym_quote,
      anon_sym_QUOTE,
      anon_sym_Quote,
    ACTIONS(65), 3,
      anon_sym_space,
      anon_sym_SPACE,
      anon_sym_Space,
    ACTIONS(67), 3,
      anon_sym_null,
      anon_sym_Null,
      anon_sym_NULL,
    ACTIONS(69), 3,
      anon_sym_zero,
      anon_sym_ZERO,
      anon_sym_Zero,
    STATE(162), 8,
      sym__basic_value,
      sym_HIGH_VALUE_,
      sym_LITERAL_,
      sym_LOW_VALUE_,
      sym_QUOTE_,
      sym_SPACE_,
      sym_TOK_NULL_,
      sym_ZERO_,
    ACTIONS(57), 9,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
    ACTIONS(61), 9,
      anon_sym_low_DASHvalue,
      anon_sym_low_DASHValue,
      anon_sym_low_DASHVALUE,
      anon_sym_Low_DASHvalue,
      anon_sym_Low_DASHValue,
      anon_sym_Low_DASHVALUE,
      anon_sym_LOW_DASHvalue,
      anon_sym_LOW_DASHValue,
      anon_sym_LOW_DASHVALUE,
  [148] = 1,
    ACTIONS(71), 31,
      anon_sym_high_DASHvalue,
      anon_sym_high_DASHValue,
      anon_sym_high_DASHVALUE,
      anon_sym_High_DASHvalue,
      anon_sym_High_DASHValue,
      anon_sym_High_DASHVALUE,
      anon_sym_HIGH_DASHvalue,
      anon_sym_HIGH_DASHValue,
      anon_sym_HIGH_DASHVALUE,
      sym__LITERAL,
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
  [182] = 5,
    ACTIONS(77), 1,
      sym__PIC,
    STATE(10), 1,
      aux_sym__qualified_word_repeat1,
    STATE(204), 1,
      sym__in_of,
    ACTIONS(75), 2,
      sym__IN,
      sym__OF,
    ACTIONS(73), 18,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [216] = 5,
    ACTIONS(84), 1,
      sym__PIC,
    STATE(9), 1,
      aux_sym__qualified_word_repeat1,
    STATE(204), 1,
      sym__in_of,
    ACTIONS(81), 2,
      sym__IN,
      sym__OF,
    ACTIONS(79), 18,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [250] = 5,
    ACTIONS(88), 1,
      sym__PIC,
    STATE(9), 1,
      aux_sym__qualified_word_repeat1,
    STATE(204), 1,
      sym__in_of,
    ACTIONS(75), 2,
      sym__IN,
      sym__OF,
    ACTIONS(86), 18,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [284] = 7,
    ACTIONS(90), 1,
      anon_sym_DOT,
    ACTIONS(94), 1,
      sym__LITERAL,
    ACTIONS(96), 1,
      sym__PIC,
    ACTIONS(98), 1,
      sym__PICTURE,
    ACTIONS(100), 1,
      sym__REDEFINES,
    STATE(12), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    ACTIONS(92), 13,
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
  [321] = 7,
    ACTIONS(96), 1,
      sym__PIC,
    ACTIONS(98), 1,
      sym__PICTURE,
    ACTIONS(100), 1,
      sym__REDEFINES,
    ACTIONS(102), 1,
      anon_sym_DOT,
    ACTIONS(106), 1,
      sym__LITERAL,
    STATE(13), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    ACTIONS(104), 13,
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
  [358] = 6,
    ACTIONS(113), 1,
      sym__PIC,
    ACTIONS(116), 1,
      sym__PICTURE,
    ACTIONS(119), 1,
      sym__REDEFINES,
    ACTIONS(108), 2,
      anon_sym_DOT,
      sym__LITERAL,
    STATE(13), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    ACTIONS(110), 13,
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
  [393] = 2,
    ACTIONS(84), 1,
      sym__PIC,
    ACTIONS(79), 20,
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
      sym__IN,
      sym__LITERAL,
      sym__OF,
      sym__PICTURE,
      sym__REDEFINES,
  [419] = 5,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      sym__PIC,
    STATE(16), 1,
      sym__subref,
    STATE(23), 1,
      sym__refmod,
    ACTIONS(122), 17,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [451] = 4,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym__PIC,
    STATE(24), 1,
      sym__refmod,
    ACTIONS(128), 17,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [480] = 2,
    ACTIONS(136), 1,
      sym__PIC,
    ACTIONS(134), 18,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [504] = 2,
    ACTIONS(140), 1,
      sym__PIC,
    ACTIONS(138), 17,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [527] = 2,
    ACTIONS(144), 1,
      sym__PIC,
    ACTIONS(142), 17,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [550] = 2,
    ACTIONS(148), 1,
      sym__PIC,
    ACTIONS(146), 17,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [573] = 2,
    ACTIONS(152), 1,
      sym__PIC,
    ACTIONS(150), 17,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [596] = 2,
    ACTIONS(156), 1,
      sym__PIC,
    ACTIONS(154), 17,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [619] = 2,
    ACTIONS(132), 1,
      sym__PIC,
    ACTIONS(128), 17,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [642] = 2,
    ACTIONS(160), 1,
      sym__PIC,
    ACTIONS(158), 17,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [665] = 2,
    ACTIONS(164), 1,
      sym__PIC,
    ACTIONS(162), 17,
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
      sym__LITERAL,
      sym__PICTURE,
      sym__REDEFINES,
  [688] = 6,
    ACTIONS(166), 1,
      sym_level_number,
    ACTIONS(168), 1,
      sym_level_number_88,
    ACTIONS(170), 1,
      sym_constant_entry,
    STATE(31), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(138), 1,
      sym_data_description,
    ACTIONS(172), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [711] = 5,
    STATE(32), 1,
      aux_sym__qualified_word_repeat1,
    STATE(169), 1,
      sym__in_of,
    ACTIONS(174), 2,
      sym__IN,
      sym__OF,
    ACTIONS(86), 3,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(88), 3,
      sym__ADDRESS,
      sym__TO,
      sym_WORD,
  [732] = 5,
    ACTIONS(178), 1,
      sym__MOVE,
    ACTIONS(180), 1,
      sym__STOP,
    STATE(29), 1,
      aux_sym_procedure_division_repeat1,
    STATE(150), 3,
      sym__statement,
      sym_stop_run_statement,
      sym_move_statement,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
  [753] = 5,
    ACTIONS(178), 1,
      sym__MOVE,
    ACTIONS(180), 1,
      sym__STOP,
    STATE(30), 1,
      aux_sym_procedure_division_repeat1,
    STATE(150), 3,
      sym__statement,
      sym_stop_run_statement,
      sym_move_statement,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
  [774] = 5,
    ACTIONS(186), 1,
      sym__MOVE,
    ACTIONS(189), 1,
      sym__STOP,
    STATE(30), 1,
      aux_sym_procedure_division_repeat1,
    STATE(150), 3,
      sym__statement,
      sym_stop_run_statement,
      sym_move_statement,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
  [795] = 6,
    ACTIONS(166), 1,
      sym_level_number,
    ACTIONS(168), 1,
      sym_level_number_88,
    ACTIONS(170), 1,
      sym_constant_entry,
    STATE(33), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(138), 1,
      sym_data_description,
    ACTIONS(192), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [818] = 5,
    STATE(32), 1,
      aux_sym__qualified_word_repeat1,
    STATE(169), 1,
      sym__in_of,
    ACTIONS(194), 2,
      sym__IN,
      sym__OF,
    ACTIONS(79), 3,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(84), 3,
      sym__ADDRESS,
      sym__TO,
      sym_WORD,
  [839] = 6,
    ACTIONS(197), 1,
      sym_level_number,
    ACTIONS(200), 1,
      sym_level_number_88,
    ACTIONS(203), 1,
      sym_constant_entry,
    STATE(33), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(138), 1,
      sym_data_description,
    ACTIONS(206), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [862] = 5,
    STATE(27), 1,
      aux_sym__qualified_word_repeat1,
    STATE(169), 1,
      sym__in_of,
    ACTIONS(174), 2,
      sym__IN,
      sym__OF,
    ACTIONS(73), 3,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(77), 3,
      sym__ADDRESS,
      sym__TO,
      sym_WORD,
  [883] = 2,
    ACTIONS(79), 3,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(84), 5,
      sym__ADDRESS,
      sym__IN,
      sym__OF,
      sym__TO,
      sym_WORD,
  [896] = 8,
    ACTIONS(208), 1,
      sym_file_section,
    ACTIONS(210), 1,
      sym_local_storage_section,
    ACTIONS(212), 1,
      sym_linkage_section,
    ACTIONS(214), 1,
      sym_report_section,
    ACTIONS(216), 1,
      sym_screen_section,
    ACTIONS(218), 1,
      sym__PROCEDURE,
    ACTIONS(220), 1,
      sym__WORKING_STORAGE,
    STATE(56), 1,
      sym_working_storage_section,
  [921] = 2,
    ACTIONS(222), 1,
      sym_level_number_88,
    ACTIONS(206), 7,
      sym_level_number,
      sym_constant_entry,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [934] = 5,
    ACTIONS(224), 1,
      sym_WORD,
    ACTIONS(227), 1,
      anon_sym_DOT,
    ACTIONS(229), 1,
      sym__ADDRESS,
    STATE(40), 1,
      sym__qualified_word,
    STATE(38), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [952] = 5,
    ACTIONS(7), 1,
      sym_WORD,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(234), 1,
      sym__ADDRESS,
    STATE(40), 1,
      sym__qualified_word,
    STATE(38), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [970] = 5,
    ACTIONS(122), 1,
      anon_sym_DOT,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym__subref,
    STATE(59), 1,
      sym__refmod,
    ACTIONS(126), 3,
      sym__ADDRESS,
      sym__TO,
      sym_WORD,
  [988] = 5,
    ACTIONS(7), 1,
      sym_WORD,
    ACTIONS(234), 1,
      sym__ADDRESS,
    ACTIONS(238), 1,
      anon_sym_DOT,
    STATE(40), 1,
      sym__qualified_word,
    STATE(38), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [1006] = 7,
    ACTIONS(220), 1,
      sym__WORKING_STORAGE,
    ACTIONS(240), 1,
      sym_local_storage_section,
    ACTIONS(242), 1,
      sym_linkage_section,
    ACTIONS(244), 1,
      sym_report_section,
    ACTIONS(246), 1,
      sym_screen_section,
    ACTIONS(248), 1,
      sym__PROCEDURE,
    STATE(50), 1,
      sym_working_storage_section,
  [1028] = 1,
    ACTIONS(184), 6,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
      sym__MOVE,
      sym__STOP,
  [1037] = 5,
    ACTIONS(250), 1,
      sym_picture_x,
    ACTIONS(252), 1,
      sym__picture_9_z,
    ACTIONS(254), 1,
      sym__picture_9_v,
    ACTIONS(256), 1,
      sym__IS,
    STATE(20), 2,
      sym__picture_string,
      sym_picture_9,
  [1054] = 4,
    ACTIONS(7), 1,
      sym_WORD,
    ACTIONS(234), 1,
      sym__ADDRESS,
    STATE(40), 1,
      sym__qualified_word,
    STATE(41), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [1069] = 4,
    ACTIONS(7), 1,
      sym_WORD,
    ACTIONS(234), 1,
      sym__ADDRESS,
    STATE(40), 1,
      sym__qualified_word,
    STATE(39), 3,
      sym__identifier,
      aux_sym__target_x_list,
      sym__target_x,
  [1084] = 4,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(258), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym__refmod,
    ACTIONS(132), 3,
      sym__ADDRESS,
      sym__TO,
      sym_WORD,
  [1099] = 2,
    ACTIONS(134), 2,
      anon_sym_DOT,
      anon_sym_LPAREN,
    ACTIONS(136), 3,
      sym__ADDRESS,
      sym__TO,
      sym_WORD,
  [1109] = 4,
    ACTIONS(7), 1,
      sym_WORD,
    STATE(40), 1,
      sym__qualified_word,
    STATE(139), 1,
      sym__identifier,
    ACTIONS(260), 2,
      sym__ENTRY,
      sym__PROGRAM,
  [1123] = 5,
    ACTIONS(262), 1,
      sym_local_storage_section,
    ACTIONS(264), 1,
      sym_linkage_section,
    ACTIONS(266), 1,
      sym_report_section,
    ACTIONS(268), 1,
      sym_screen_section,
    ACTIONS(270), 1,
      sym__PROCEDURE,
  [1139] = 4,
    ACTIONS(272), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym__numvalc_args_repeat1,
    STATE(116), 1,
      sym__e_sep,
    ACTIONS(274), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [1153] = 4,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym__numvalc_args_repeat1,
    STATE(116), 1,
      sym__e_sep,
    ACTIONS(274), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [1167] = 5,
    ACTIONS(278), 1,
      sym_environment_division,
    ACTIONS(280), 1,
      sym__DATA,
    ACTIONS(282), 1,
      sym__PROCEDURE,
    STATE(63), 1,
      sym_procedure_division,
    STATE(108), 1,
      sym_data_division,
  [1183] = 4,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym__numvalc_args_repeat1,
    STATE(116), 1,
      sym__e_sep,
    ACTIONS(286), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [1197] = 4,
    ACTIONS(252), 1,
      sym__picture_9_z,
    ACTIONS(254), 1,
      sym__picture_9_v,
    ACTIONS(289), 1,
      sym_picture_x,
    STATE(18), 2,
      sym__picture_string,
      sym_picture_9,
  [1211] = 5,
    ACTIONS(240), 1,
      sym_local_storage_section,
    ACTIONS(242), 1,
      sym_linkage_section,
    ACTIONS(244), 1,
      sym_report_section,
    ACTIONS(246), 1,
      sym_screen_section,
    ACTIONS(248), 1,
      sym__PROCEDURE,
  [1227] = 4,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 1,
      sym__IDENTIFICATION,
    STATE(53), 1,
      sym_identification_division,
    STATE(57), 2,
      sym_program_definition,
      aux_sym_start_repeat1,
  [1241] = 4,
    ACTIONS(5), 1,
      sym__IDENTIFICATION,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_identification_division,
    STATE(57), 2,
      sym_program_definition,
      aux_sym_start_repeat1,
  [1255] = 2,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(132), 3,
      sym__ADDRESS,
      sym__TO,
      sym_WORD,
  [1264] = 4,
    ACTIONS(242), 1,
      sym_linkage_section,
    ACTIONS(244), 1,
      sym_report_section,
    ACTIONS(246), 1,
      sym_screen_section,
    ACTIONS(248), 1,
      sym__PROCEDURE,
  [1277] = 4,
    ACTIONS(298), 1,
      sym_linkage_section,
    ACTIONS(300), 1,
      sym_report_section,
    ACTIONS(302), 1,
      sym_screen_section,
    ACTIONS(304), 1,
      sym__PROCEDURE,
  [1290] = 4,
    ACTIONS(280), 1,
      sym__DATA,
    ACTIONS(282), 1,
      sym__PROCEDURE,
    STATE(64), 1,
      sym_procedure_division,
    STATE(109), 1,
      sym_data_division,
  [1303] = 3,
    ACTIONS(308), 1,
      sym_nested_prog,
    ACTIONS(310), 1,
      sym_end_program,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1314] = 3,
    ACTIONS(314), 1,
      sym_nested_prog,
    ACTIONS(316), 1,
      sym_end_program,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1325] = 3,
    ACTIONS(320), 1,
      sym__TO,
    STATE(171), 1,
      sym__in_of,
    ACTIONS(318), 2,
      sym__IN,
      sym__OF,
  [1336] = 4,
    ACTIONS(7), 1,
      sym_WORD,
    ACTIONS(322), 1,
      sym__LITERAL,
    STATE(40), 1,
      sym__qualified_word,
    STATE(158), 1,
      sym__identifier,
  [1349] = 3,
    ACTIONS(326), 1,
      sym_nested_prog,
    ACTIONS(328), 1,
      sym_end_program,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1360] = 4,
    ACTIONS(264), 1,
      sym_linkage_section,
    ACTIONS(266), 1,
      sym_report_section,
    ACTIONS(268), 1,
      sym_screen_section,
    ACTIONS(270), 1,
      sym__PROCEDURE,
  [1373] = 2,
    ACTIONS(158), 1,
      anon_sym_DOT,
    ACTIONS(160), 3,
      sym__ADDRESS,
      sym__TO,
      sym_WORD,
  [1382] = 3,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym__e_sep,
    ACTIONS(332), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [1393] = 2,
    ACTIONS(150), 1,
      anon_sym_DOT,
    ACTIONS(152), 3,
      sym__ADDRESS,
      sym__TO,
      sym_WORD,
  [1402] = 3,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      sym__e_sep,
    ACTIONS(336), 2,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [1413] = 3,
    ACTIONS(244), 1,
      sym_report_section,
    ACTIONS(246), 1,
      sym_screen_section,
    ACTIONS(248), 1,
      sym__PROCEDURE,
  [1423] = 1,
    ACTIONS(284), 3,
      anon_sym_RPAREN,
      sym__COMMA_DELIM,
      sym__SEMI_COLON,
  [1429] = 2,
    ACTIONS(340), 1,
      sym_end_program,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1437] = 3,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(344), 1,
      sym__NUMBER,
    STATE(181), 1,
      sym__exp,
  [1447] = 3,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      sym__TO,
    STATE(179), 1,
      sym_func_refmod,
  [1457] = 3,
    ACTIONS(350), 1,
      sym_WORD,
    STATE(40), 1,
      sym__qualified_word,
    STATE(84), 1,
      sym__identifier,
  [1467] = 3,
    ACTIONS(352), 1,
      anon_sym_AMP,
    ACTIONS(354), 1,
      sym__TO,
    STATE(91), 1,
      aux_sym__basic_literal_repeat1,
  [1477] = 3,
    ACTIONS(356), 1,
      sym__NUMBER,
    STATE(142), 1,
      sym__exp_list,
    STATE(143), 1,
      sym__exp,
  [1487] = 3,
    ACTIONS(356), 1,
      sym__NUMBER,
    STATE(205), 1,
      sym__exp_list,
    STATE(208), 1,
      sym__exp,
  [1497] = 3,
    ACTIONS(358), 1,
      sym_WORD,
    STATE(15), 1,
      sym__qualified_word,
    STATE(19), 1,
      sym__identifier,
  [1507] = 3,
    ACTIONS(360), 1,
      anon_sym_AMP,
    ACTIONS(363), 1,
      sym__TO,
    STATE(83), 1,
      aux_sym__basic_literal_repeat1,
  [1517] = 2,
    ACTIONS(367), 1,
      anon_sym_DOT,
    ACTIONS(365), 2,
      sym__ADDRESS,
      sym_WORD,
  [1525] = 3,
    ACTIONS(369), 1,
      sym__NUMBER,
    STATE(72), 1,
      sym__exp,
    STATE(146), 1,
      sym__trim_args,
  [1535] = 3,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(371), 1,
      sym__TO,
    STATE(160), 1,
      sym_func_refmod,
  [1545] = 3,
    ACTIONS(371), 1,
      sym__TO,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    STATE(160), 1,
      sym__func_args,
  [1555] = 2,
    STATE(101), 1,
      sym_program_name,
    ACTIONS(375), 2,
      sym__LITERAL,
      sym_WORD,
  [1563] = 1,
    ACTIONS(377), 3,
      sym_environment_division,
      sym__DATA,
      sym__PROCEDURE,
  [1569] = 3,
    ACTIONS(266), 1,
      sym_report_section,
    ACTIONS(268), 1,
      sym_screen_section,
    ACTIONS(270), 1,
      sym__PROCEDURE,
  [1579] = 3,
    ACTIONS(352), 1,
      anon_sym_AMP,
    ACTIONS(379), 1,
      sym__TO,
    STATE(83), 1,
      aux_sym__basic_literal_repeat1,
  [1589] = 2,
    ACTIONS(328), 1,
      sym_end_program,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1597] = 1,
    ACTIONS(381), 3,
      sym_environment_division,
      sym__DATA,
      sym__PROCEDURE,
  [1603] = 3,
    ACTIONS(383), 1,
      sym_report_section,
    ACTIONS(385), 1,
      sym_screen_section,
    ACTIONS(387), 1,
      sym__PROCEDURE,
  [1613] = 2,
    STATE(11), 1,
      sym_entry_name,
    ACTIONS(389), 2,
      sym__FILLER,
      sym_WORD,
  [1621] = 3,
    ACTIONS(300), 1,
      sym_report_section,
    ACTIONS(302), 1,
      sym_screen_section,
    ACTIONS(304), 1,
      sym__PROCEDURE,
  [1631] = 2,
    STATE(135), 1,
      sym_entry_name,
    ACTIONS(389), 2,
      sym__FILLER,
      sym_WORD,
  [1639] = 3,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
    ACTIONS(393), 1,
      sym__NUMBER,
    STATE(149), 1,
      sym__exp_list,
  [1649] = 2,
    ACTIONS(316), 1,
      sym_end_program,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1657] = 3,
    ACTIONS(395), 1,
      sym__NUMBER,
    STATE(70), 1,
      sym__exp,
    STATE(146), 1,
      sym__locale_dt_args,
  [1667] = 3,
    ACTIONS(397), 1,
      anon_sym_DOT,
    ACTIONS(399), 1,
      sym__AS,
    STATE(194), 1,
      sym_as_literal,
  [1677] = 3,
    ACTIONS(401), 1,
      sym__NUMBER,
    STATE(52), 1,
      sym__exp,
    STATE(151), 1,
      sym__numvalc_args,
  [1687] = 2,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      anon_sym_COLON,
  [1694] = 1,
    ACTIONS(407), 2,
      anon_sym_AMP,
      sym__TO,
  [1699] = 2,
    ACTIONS(409), 1,
      sym__NUMBER,
    STATE(208), 1,
      sym__exp,
  [1706] = 1,
    ACTIONS(411), 2,
      anon_sym_LPAREN,
      sym__TO,
  [1711] = 1,
    ACTIONS(413), 2,
      anon_sym_LPAREN,
      sym__TO,
  [1716] = 2,
    ACTIONS(282), 1,
      sym__PROCEDURE,
    STATE(64), 1,
      sym_procedure_division,
  [1723] = 2,
    ACTIONS(282), 1,
      sym__PROCEDURE,
    STATE(67), 1,
      sym_procedure_division,
  [1730] = 1,
    ACTIONS(415), 2,
      anon_sym_AMP,
      sym__TO,
  [1735] = 1,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1740] = 2,
    ACTIONS(302), 1,
      sym_screen_section,
    ACTIONS(304), 1,
      sym__PROCEDURE,
  [1747] = 1,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1752] = 1,
    ACTIONS(417), 2,
      sym__LEADING,
      sym__TRAILING,
  [1757] = 1,
    ACTIONS(419), 2,
      anon_sym_LPAREN,
      sym__TO,
  [1762] = 2,
    ACTIONS(421), 1,
      sym__NUMBER,
    STATE(74), 1,
      sym__exp,
  [1769] = 2,
    ACTIONS(350), 1,
      sym_WORD,
    STATE(182), 1,
      sym__qualified_word,
  [1776] = 1,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1781] = 1,
    ACTIONS(423), 2,
      anon_sym_AMP,
      sym__TO,
  [1786] = 2,
    ACTIONS(268), 1,
      sym_screen_section,
    ACTIONS(270), 1,
      sym__PROCEDURE,
  [1793] = 1,
    ACTIONS(425), 2,
      anon_sym_AMP,
      sym__TO,
  [1798] = 2,
    ACTIONS(427), 1,
      sym__NUMBER,
    STATE(146), 1,
      sym__exp_list,
  [1805] = 2,
    ACTIONS(429), 1,
      sym__NUMBER,
    STATE(147), 1,
      sym__exp,
  [1812] = 1,
    ACTIONS(431), 2,
      anon_sym_AMP,
      sym__TO,
  [1817] = 2,
    ACTIONS(427), 1,
      sym__NUMBER,
    STATE(146), 1,
      sym__exp,
  [1824] = 2,
    ACTIONS(246), 1,
      sym_screen_section,
    ACTIONS(248), 1,
      sym__PROCEDURE,
  [1831] = 2,
    ACTIONS(385), 1,
      sym_screen_section,
    ACTIONS(387), 1,
      sym__PROCEDURE,
  [1838] = 2,
    ACTIONS(433), 1,
      sym_screen_section,
    ACTIONS(435), 1,
      sym__PROCEDURE,
  [1845] = 2,
    ACTIONS(437), 1,
      sym__NUMBER,
    STATE(143), 1,
      sym__exp,
  [1852] = 1,
    ACTIONS(439), 2,
      anon_sym_AMP,
      sym__TO,
  [1857] = 1,
    ACTIONS(441), 2,
      anon_sym_AMP,
      sym__TO,
  [1862] = 1,
    ACTIONS(443), 2,
      anon_sym_DOT,
      sym__AS,
  [1867] = 1,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1872] = 1,
    ACTIONS(363), 2,
      anon_sym_AMP,
      sym__TO,
  [1877] = 1,
    ACTIONS(90), 1,
      anon_sym_DOT,
  [1881] = 1,
    ACTIONS(447), 1,
      sym__PROCEDURE,
  [1885] = 1,
    ACTIONS(449), 1,
      anon_sym_DOT,
  [1889] = 1,
    ACTIONS(451), 1,
      anon_sym_DOT,
  [1893] = 1,
    ACTIONS(453), 1,
      sym__TO,
  [1897] = 1,
    ACTIONS(455), 1,
      sym__TO,
  [1901] = 1,
    ACTIONS(457), 1,
      sym__OF,
  [1905] = 1,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
  [1909] = 1,
    ACTIONS(461), 1,
      anon_sym_COLON,
  [1913] = 1,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
  [1917] = 1,
    ACTIONS(465), 1,
      sym__OF,
  [1921] = 1,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [1925] = 1,
    ACTIONS(469), 1,
      anon_sym_COLON,
  [1929] = 1,
    ACTIONS(471), 1,
      sym__TO,
  [1933] = 1,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
  [1937] = 1,
    ACTIONS(475), 1,
      anon_sym_DOT,
  [1941] = 1,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
  [1945] = 1,
    ACTIONS(435), 1,
      sym__PROCEDURE,
  [1949] = 1,
    ACTIONS(479), 1,
      sym__RUN,
  [1953] = 1,
    ACTIONS(481), 1,
      sym__SECTION,
  [1957] = 1,
    ACTIONS(483), 1,
      anon_sym_LPAREN,
  [1961] = 1,
    ACTIONS(248), 1,
      sym__PROCEDURE,
  [1965] = 1,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
  [1969] = 1,
    ACTIONS(487), 1,
      sym__TO,
  [1973] = 1,
    ACTIONS(489), 1,
      anon_sym_DOT,
  [1977] = 1,
    ACTIONS(491), 1,
      sym__TO,
  [1981] = 1,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
  [1985] = 1,
    ACTIONS(495), 1,
      sym__TO,
  [1989] = 1,
    ACTIONS(270), 1,
      sym__PROCEDURE,
  [1993] = 1,
    ACTIONS(497), 1,
      sym__TO,
  [1997] = 1,
    ACTIONS(499), 1,
      anon_sym_DOT,
  [2001] = 1,
    ACTIONS(501), 1,
      sym__TO,
  [2005] = 1,
    ACTIONS(503), 1,
      anon_sym_DOT,
  [2009] = 1,
    ACTIONS(505), 1,
      sym__DIVISION,
  [2013] = 1,
    ACTIONS(507), 1,
      sym_WORD,
  [2017] = 1,
    ACTIONS(348), 1,
      sym__TO,
  [2021] = 1,
    ACTIONS(509), 1,
      sym_WORD,
  [2025] = 1,
    ACTIONS(387), 1,
      sym__PROCEDURE,
  [2029] = 1,
    ACTIONS(102), 1,
      anon_sym_DOT,
  [2033] = 1,
    ACTIONS(511), 1,
      anon_sym_LPAREN,
  [2037] = 1,
    ACTIONS(513), 1,
      anon_sym_LPAREN,
  [2041] = 1,
    ACTIONS(515), 1,
      sym__TO,
  [2045] = 1,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
  [2049] = 1,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
  [2053] = 1,
    ACTIONS(521), 1,
      sym__TO,
  [2057] = 1,
    ACTIONS(523), 1,
      sym__TO,
  [2061] = 1,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
  [2065] = 1,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [2069] = 1,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
  [2073] = 1,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
  [2077] = 1,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
  [2081] = 1,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
  [2085] = 1,
    ACTIONS(537), 1,
      anon_sym_DOT,
  [2089] = 1,
    ACTIONS(304), 1,
      sym__PROCEDURE,
  [2093] = 1,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
  [2097] = 1,
    ACTIONS(541), 1,
      anon_sym_DOT,
  [2101] = 1,
    ACTIONS(543), 1,
      anon_sym_DOT,
  [2105] = 1,
    ACTIONS(545), 1,
      sym__TO,
  [2109] = 1,
    ACTIONS(547), 1,
      anon_sym_DOT,
  [2113] = 1,
    ACTIONS(549), 1,
      anon_sym_DOT,
  [2117] = 1,
    ACTIONS(551), 1,
      sym__LITERAL,
  [2121] = 1,
    ACTIONS(553), 1,
      sym__PROGRAM_ID,
  [2125] = 1,
    ACTIONS(555), 1,
      sym__OF,
  [2129] = 1,
    ACTIONS(557), 1,
      anon_sym_DOT,
  [2133] = 1,
    ACTIONS(559), 1,
      sym__DIVISION,
  [2137] = 1,
    ACTIONS(561), 1,
      sym__DIVISION,
  [2141] = 1,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
  [2145] = 1,
    ACTIONS(565), 1,
      anon_sym_DOT,
  [2149] = 1,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
  [2153] = 1,
    ACTIONS(569), 1,
      sym_WORD,
  [2157] = 1,
    ACTIONS(571), 1,
      anon_sym_RPAREN,
  [2161] = 1,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
  [2165] = 1,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
  [2169] = 1,
    ACTIONS(577), 1,
      anon_sym_COLON,
  [2173] = 1,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 182,
  [SMALL_STATE(9)] = 216,
  [SMALL_STATE(10)] = 250,
  [SMALL_STATE(11)] = 284,
  [SMALL_STATE(12)] = 321,
  [SMALL_STATE(13)] = 358,
  [SMALL_STATE(14)] = 393,
  [SMALL_STATE(15)] = 419,
  [SMALL_STATE(16)] = 451,
  [SMALL_STATE(17)] = 480,
  [SMALL_STATE(18)] = 504,
  [SMALL_STATE(19)] = 527,
  [SMALL_STATE(20)] = 550,
  [SMALL_STATE(21)] = 573,
  [SMALL_STATE(22)] = 596,
  [SMALL_STATE(23)] = 619,
  [SMALL_STATE(24)] = 642,
  [SMALL_STATE(25)] = 665,
  [SMALL_STATE(26)] = 688,
  [SMALL_STATE(27)] = 711,
  [SMALL_STATE(28)] = 732,
  [SMALL_STATE(29)] = 753,
  [SMALL_STATE(30)] = 774,
  [SMALL_STATE(31)] = 795,
  [SMALL_STATE(32)] = 818,
  [SMALL_STATE(33)] = 839,
  [SMALL_STATE(34)] = 862,
  [SMALL_STATE(35)] = 883,
  [SMALL_STATE(36)] = 896,
  [SMALL_STATE(37)] = 921,
  [SMALL_STATE(38)] = 934,
  [SMALL_STATE(39)] = 952,
  [SMALL_STATE(40)] = 970,
  [SMALL_STATE(41)] = 988,
  [SMALL_STATE(42)] = 1006,
  [SMALL_STATE(43)] = 1028,
  [SMALL_STATE(44)] = 1037,
  [SMALL_STATE(45)] = 1054,
  [SMALL_STATE(46)] = 1069,
  [SMALL_STATE(47)] = 1084,
  [SMALL_STATE(48)] = 1099,
  [SMALL_STATE(49)] = 1109,
  [SMALL_STATE(50)] = 1123,
  [SMALL_STATE(51)] = 1139,
  [SMALL_STATE(52)] = 1153,
  [SMALL_STATE(53)] = 1167,
  [SMALL_STATE(54)] = 1183,
  [SMALL_STATE(55)] = 1197,
  [SMALL_STATE(56)] = 1211,
  [SMALL_STATE(57)] = 1227,
  [SMALL_STATE(58)] = 1241,
  [SMALL_STATE(59)] = 1255,
  [SMALL_STATE(60)] = 1264,
  [SMALL_STATE(61)] = 1277,
  [SMALL_STATE(62)] = 1290,
  [SMALL_STATE(63)] = 1303,
  [SMALL_STATE(64)] = 1314,
  [SMALL_STATE(65)] = 1325,
  [SMALL_STATE(66)] = 1336,
  [SMALL_STATE(67)] = 1349,
  [SMALL_STATE(68)] = 1360,
  [SMALL_STATE(69)] = 1373,
  [SMALL_STATE(70)] = 1382,
  [SMALL_STATE(71)] = 1393,
  [SMALL_STATE(72)] = 1402,
  [SMALL_STATE(73)] = 1413,
  [SMALL_STATE(74)] = 1423,
  [SMALL_STATE(75)] = 1429,
  [SMALL_STATE(76)] = 1437,
  [SMALL_STATE(77)] = 1447,
  [SMALL_STATE(78)] = 1457,
  [SMALL_STATE(79)] = 1467,
  [SMALL_STATE(80)] = 1477,
  [SMALL_STATE(81)] = 1487,
  [SMALL_STATE(82)] = 1497,
  [SMALL_STATE(83)] = 1507,
  [SMALL_STATE(84)] = 1517,
  [SMALL_STATE(85)] = 1525,
  [SMALL_STATE(86)] = 1535,
  [SMALL_STATE(87)] = 1545,
  [SMALL_STATE(88)] = 1555,
  [SMALL_STATE(89)] = 1563,
  [SMALL_STATE(90)] = 1569,
  [SMALL_STATE(91)] = 1579,
  [SMALL_STATE(92)] = 1589,
  [SMALL_STATE(93)] = 1597,
  [SMALL_STATE(94)] = 1603,
  [SMALL_STATE(95)] = 1613,
  [SMALL_STATE(96)] = 1621,
  [SMALL_STATE(97)] = 1631,
  [SMALL_STATE(98)] = 1639,
  [SMALL_STATE(99)] = 1649,
  [SMALL_STATE(100)] = 1657,
  [SMALL_STATE(101)] = 1667,
  [SMALL_STATE(102)] = 1677,
  [SMALL_STATE(103)] = 1687,
  [SMALL_STATE(104)] = 1694,
  [SMALL_STATE(105)] = 1699,
  [SMALL_STATE(106)] = 1706,
  [SMALL_STATE(107)] = 1711,
  [SMALL_STATE(108)] = 1716,
  [SMALL_STATE(109)] = 1723,
  [SMALL_STATE(110)] = 1730,
  [SMALL_STATE(111)] = 1735,
  [SMALL_STATE(112)] = 1740,
  [SMALL_STATE(113)] = 1747,
  [SMALL_STATE(114)] = 1752,
  [SMALL_STATE(115)] = 1757,
  [SMALL_STATE(116)] = 1762,
  [SMALL_STATE(117)] = 1769,
  [SMALL_STATE(118)] = 1776,
  [SMALL_STATE(119)] = 1781,
  [SMALL_STATE(120)] = 1786,
  [SMALL_STATE(121)] = 1793,
  [SMALL_STATE(122)] = 1798,
  [SMALL_STATE(123)] = 1805,
  [SMALL_STATE(124)] = 1812,
  [SMALL_STATE(125)] = 1817,
  [SMALL_STATE(126)] = 1824,
  [SMALL_STATE(127)] = 1831,
  [SMALL_STATE(128)] = 1838,
  [SMALL_STATE(129)] = 1845,
  [SMALL_STATE(130)] = 1852,
  [SMALL_STATE(131)] = 1857,
  [SMALL_STATE(132)] = 1862,
  [SMALL_STATE(133)] = 1867,
  [SMALL_STATE(134)] = 1872,
  [SMALL_STATE(135)] = 1877,
  [SMALL_STATE(136)] = 1881,
  [SMALL_STATE(137)] = 1885,
  [SMALL_STATE(138)] = 1889,
  [SMALL_STATE(139)] = 1893,
  [SMALL_STATE(140)] = 1897,
  [SMALL_STATE(141)] = 1901,
  [SMALL_STATE(142)] = 1905,
  [SMALL_STATE(143)] = 1909,
  [SMALL_STATE(144)] = 1913,
  [SMALL_STATE(145)] = 1917,
  [SMALL_STATE(146)] = 1921,
  [SMALL_STATE(147)] = 1925,
  [SMALL_STATE(148)] = 1929,
  [SMALL_STATE(149)] = 1933,
  [SMALL_STATE(150)] = 1937,
  [SMALL_STATE(151)] = 1941,
  [SMALL_STATE(152)] = 1945,
  [SMALL_STATE(153)] = 1949,
  [SMALL_STATE(154)] = 1953,
  [SMALL_STATE(155)] = 1957,
  [SMALL_STATE(156)] = 1961,
  [SMALL_STATE(157)] = 1965,
  [SMALL_STATE(158)] = 1969,
  [SMALL_STATE(159)] = 1973,
  [SMALL_STATE(160)] = 1977,
  [SMALL_STATE(161)] = 1981,
  [SMALL_STATE(162)] = 1985,
  [SMALL_STATE(163)] = 1989,
  [SMALL_STATE(164)] = 1993,
  [SMALL_STATE(165)] = 1997,
  [SMALL_STATE(166)] = 2001,
  [SMALL_STATE(167)] = 2005,
  [SMALL_STATE(168)] = 2009,
  [SMALL_STATE(169)] = 2013,
  [SMALL_STATE(170)] = 2017,
  [SMALL_STATE(171)] = 2021,
  [SMALL_STATE(172)] = 2025,
  [SMALL_STATE(173)] = 2029,
  [SMALL_STATE(174)] = 2033,
  [SMALL_STATE(175)] = 2037,
  [SMALL_STATE(176)] = 2041,
  [SMALL_STATE(177)] = 2045,
  [SMALL_STATE(178)] = 2049,
  [SMALL_STATE(179)] = 2053,
  [SMALL_STATE(180)] = 2057,
  [SMALL_STATE(181)] = 2061,
  [SMALL_STATE(182)] = 2065,
  [SMALL_STATE(183)] = 2069,
  [SMALL_STATE(184)] = 2073,
  [SMALL_STATE(185)] = 2077,
  [SMALL_STATE(186)] = 2081,
  [SMALL_STATE(187)] = 2085,
  [SMALL_STATE(188)] = 2089,
  [SMALL_STATE(189)] = 2093,
  [SMALL_STATE(190)] = 2097,
  [SMALL_STATE(191)] = 2101,
  [SMALL_STATE(192)] = 2105,
  [SMALL_STATE(193)] = 2109,
  [SMALL_STATE(194)] = 2113,
  [SMALL_STATE(195)] = 2117,
  [SMALL_STATE(196)] = 2121,
  [SMALL_STATE(197)] = 2125,
  [SMALL_STATE(198)] = 2129,
  [SMALL_STATE(199)] = 2133,
  [SMALL_STATE(200)] = 2137,
  [SMALL_STATE(201)] = 2141,
  [SMALL_STATE(202)] = 2145,
  [SMALL_STATE(203)] = 2149,
  [SMALL_STATE(204)] = 2153,
  [SMALL_STATE(205)] = 2157,
  [SMALL_STATE(206)] = 2161,
  [SMALL_STATE(207)] = 2165,
  [SMALL_STATE(208)] = 2169,
  [SMALL_STATE(209)] = 2173,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ALL_, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_word, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qualified_word, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__qualified_word_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__qualified_word_repeat1, 2), SHIFT_REPEAT(204),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__qualified_word_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__qualified_word, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__qualified_word, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(13),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(44),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(44),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(82),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subref, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subref, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_clause, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redefines_clause, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redefines_clause, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_clause, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__refmod, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__refmod, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_9, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_9, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_name, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_name, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 3),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(153),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 4),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__qualified_word_repeat1, 2), SHIFT_REPEAT(169),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(95),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(97),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(137),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_working_storage_section_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_x_list, 2), SHIFT_REPEAT(34),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__target_x_list, 2),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__target_x_list, 2), SHIFT_REPEAT(145),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_body, 3, .production_id = 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__move_body, 4, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numvalc_args, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numvalc_args, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numvalc_args_repeat1, 2),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__numvalc_args_repeat1, 2), SHIFT_REPEAT(116),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(168),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linage_counter, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__locale_dt_args, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trim_args, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 4),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_literal, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__basic_literal_repeat1, 2), SHIFT_REPEAT(5),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__basic_literal_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__target_x, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__target_x, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 8),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__basic_literal, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 7),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 7),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp_list, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ZERO_, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CURRENT_DATE_FUNC_, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_FUNCTION_NAME_, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LITERAL_, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_WHEN_COMPILED_FUNC_, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HIGH_VALUE_, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOW_VALUE_, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_QUOTE_, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 8),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TOK_NULL_, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SPACE_, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_name, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 6),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 9),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_linage_counter, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_CONCATENATE_FUNC_, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_args, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__x, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_literal, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 2),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move_statement, 2, .production_id = 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__func_args, 3),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_UPPER_CASE_FUNC_, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TRIM_FUNCTION_, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SUBSTITUTE_CASE_FUNC_, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_SUBSTITUTE_FUNC_, 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_refmod, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__locale_dt_args, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_REVERSE_FUNC_, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_NUMVALC_FUNC_, 1),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__trim_args, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOWER_CASE_FUNC_, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_LOCALE_DT_FUNC_, 1),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 4),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_refmod, 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop_run_statement, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [567] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
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
