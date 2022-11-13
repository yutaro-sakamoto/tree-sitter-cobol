#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 105
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 510
#define ALIAS_COUNT 0
#define TOKEN_COUNT 481
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

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
  sym_number = 34,
  sym__ACCEPT = 35,
  sym__ACCESS = 36,
  sym__ADD = 37,
  sym__ADDRESS = 38,
  sym__ADVANCING = 39,
  sym__AFTER = 40,
  sym__ALL = 41,
  sym__ALLOCATE = 42,
  sym__ALPHABET = 43,
  sym__ALPHABETIC = 44,
  sym__ALPHABETIC_LOWER = 45,
  sym__ALPHABETIC_UPPER = 46,
  sym__ALPHANUMERIC = 47,
  sym__ALPHANUMERIC_EDITED = 48,
  sym__ALSO = 49,
  sym__ALTER = 50,
  sym__ALTERNATE = 51,
  sym__AND = 52,
  sym__ANY = 53,
  sym__APPLY = 54,
  sym__ARE = 55,
  sym__AREA = 56,
  sym__ARGUMENT_NUMBER = 57,
  sym__ARGUMENT_VALUE = 58,
  sym__AS = 59,
  sym__ASCENDING = 60,
  sym__ASSIGN = 61,
  sym__AT = 62,
  sym__AUTO = 63,
  sym__AUTOMATIC = 64,
  sym__BACKGROUND_COLOR = 65,
  sym__BASED = 66,
  sym__BEFORE = 67,
  sym__BELL = 68,
  sym__BINARY = 69,
  sym__BINARY_C_LONG = 70,
  sym__BINARY_CHAR = 71,
  sym__BINARY_DOUBLE = 72,
  sym__BINARY_LONG = 73,
  sym__BINARY_SHORT = 74,
  sym__BLANK = 75,
  sym__BLANK_LINE = 76,
  sym__BLANK_SCREEN = 77,
  sym__BLINK = 78,
  sym__BLOCK = 79,
  sym__BOTTOM = 80,
  sym__BY = 81,
  sym__BYTE_LENGTH = 82,
  sym__CALL = 83,
  sym__CANCEL = 84,
  sym__CH = 85,
  sym__CHAINING = 86,
  sym__CHARACTER = 87,
  sym__CHARACTERS = 88,
  sym__CLASS = 89,
  sym__CLASS_NAME = 90,
  sym__CLOSE = 91,
  sym__CLOSE_NOFEED = 92,
  sym__CODE = 93,
  sym__CODE_SET = 94,
  sym__COLLATING = 95,
  sym__COL = 96,
  sym__COLS = 97,
  sym__COLUMN = 98,
  sym__COLUMNS = 99,
  sym__COMMA = 100,
  sym__COMMAND_LINE = 101,
  sym__COMMA_DELIM = 102,
  sym__COMMIT = 103,
  sym__COMMITMENT_CONTROL = 104,
  sym__COMMON = 105,
  sym__COMP = 106,
  sym__COMPUTE = 107,
  sym__COMP_1 = 108,
  sym__COMP_2 = 109,
  sym__COMP_3 = 110,
  sym__COMP_4 = 111,
  sym__COMP_5 = 112,
  sym__COMP_X = 113,
  sym__CONCATENATE_FUNC = 114,
  sym__CONFIGURATION = 115,
  sym__CONSTANT = 116,
  sym__CONTAINS = 117,
  sym__CONTENT = 118,
  sym__CONTINUE = 119,
  sym__CONTROL = 120,
  sym__CONTROLS = 121,
  sym__CONTROL_FOOTING = 122,
  sym__CONTROL_HEADING = 123,
  sym__CONVERTING = 124,
  sym__CORE_INDEX = 125,
  sym__CORRESPONDING = 126,
  sym__COUNT = 127,
  sym__CRT = 128,
  sym__CURRENCY = 129,
  sym__CURRENT_DATE_FUNC = 130,
  sym__CURSOR = 131,
  sym__CYCLE = 132,
  sym__CYL_OVERFLOW = 133,
  sym__DATA = 134,
  sym__DATE = 135,
  sym__DAY = 136,
  sym__DAY_OF_WEEK = 137,
  sym__DE = 138,
  sym__DEBUGGING = 139,
  sym__DECIMAL_POINT = 140,
  sym__DECLARATIVES = 141,
  sym__DEFAULT = 142,
  sym__DELETE = 143,
  sym__DELIMITED = 144,
  sym__DELIMITER = 145,
  sym__DEPENDING = 146,
  sym__DESCENDING = 147,
  sym__DETAIL = 148,
  sym__DISK = 149,
  sym__DISPLAY = 150,
  sym__DIVIDE = 151,
  sym__DIVISION = 152,
  sym__DOWN = 153,
  sym__DUPLICATES = 154,
  sym__DYNAMIC = 155,
  sym__EBCDIC = 156,
  sym__ELSE = 157,
  sym__END = 158,
  sym__END_ACCEPT = 159,
  sym__END_ADD = 160,
  sym__END_CALL = 161,
  sym__END_COMPUTE = 162,
  sym__END_DELETE = 163,
  sym__END_DISPLAY = 164,
  sym__END_DIVIDE = 165,
  sym__END_EVALUATE = 166,
  sym__END_FUNCTION = 167,
  sym__END_IF = 168,
  sym__END_MULTIPLY = 169,
  sym__END_PERFORM = 170,
  sym__END_PROGRAM = 171,
  sym__END_READ = 172,
  sym__END_RETURN = 173,
  sym__END_REWRITE = 174,
  sym__END_SEARCH = 175,
  sym__END_START = 176,
  sym__END_STRING = 177,
  sym__END_SUBTRACT = 178,
  sym__END_UNSTRING = 179,
  sym__END_WRITE = 180,
  sym__ENTRY = 181,
  sym__ENVIRONMENT = 182,
  sym__ENVIRONMENT_NAME = 183,
  sym__ENVIRONMENT_VALUE = 184,
  sym__EOL = 185,
  sym__EOP = 186,
  sym__EOS = 187,
  sym__EQUAL = 188,
  sym__EQUALS = 189,
  sym__ERASE = 190,
  sym__ERROR = 191,
  sym__ESCAPE = 192,
  sym__EVALUATE = 193,
  sym__EVENT_STATUS = 194,
  sym__EXCEPTION = 195,
  sym__EXCLUSIVE = 196,
  sym__EXIT = 197,
  sym__EXTEND = 198,
  sym__EXTERNAL = 199,
  sym__FD = 200,
  sym__FILE_CONTROL = 201,
  sym__FILE_ID = 202,
  sym__FILLER = 203,
  sym__FINAL = 204,
  sym__FIRST = 205,
  sym__FOOTING = 206,
  sym__FOR = 207,
  sym__FOREGROUND_COLOR = 208,
  sym__FOREVER = 209,
  sym__FORMS_OVERLAY = 210,
  sym__FREE = 211,
  sym__FROM = 212,
  sym__FULL = 213,
  sym__FUNCTION = 214,
  sym__FUNCTION_ID = 215,
  sym__FUNCTION_NAME = 216,
  sym__GE = 217,
  sym__GENERATE = 218,
  sym__GIVING = 219,
  sym__GLOBAL = 220,
  sym__GO = 221,
  sym__GOBACK = 222,
  sym__GREATER = 223,
  sym__GROUP = 224,
  sym__HEADING = 225,
  sym__HIGHLIGHT = 226,
  sym__HIGH_VALUE = 227,
  sym__IDENTIFICATION = 228,
  sym__IF = 229,
  sym__IGNORE = 230,
  sym__IGNORING = 231,
  sym__IN = 232,
  sym__INDEX = 233,
  sym__INDEXED = 234,
  sym__INDICATE = 235,
  sym__INITIALIZE = 236,
  sym__INITIALIZED = 237,
  sym__INITIATE = 238,
  sym__INPUT = 239,
  sym__INPUT_OUTPUT = 240,
  sym__INSPECT = 241,
  sym__INTO = 242,
  sym__INTRINSIC = 243,
  sym__INVALID = 244,
  sym__INVALID_KEY = 245,
  sym__IS = 246,
  sym__I_O = 247,
  sym__I_O_CONTROL = 248,
  sym__JUSTIFIED = 249,
  sym__KEY = 250,
  sym__LABEL = 251,
  sym__LAST = 252,
  sym__LAST_DETAIL = 253,
  sym__LE = 254,
  sym__LEADING = 255,
  sym__LEFT = 256,
  sym__LENGTH = 257,
  sym__LESS = 258,
  sym__LEVEL_NUMBER_WORD = 259,
  sym__LEVEL88_NUMBER_WORD = 260,
  sym__LIMIT = 261,
  sym__LIMITS = 262,
  sym__LINAGE = 263,
  sym__LINAGE_COUNTER = 264,
  sym__LINE = 265,
  sym__LINES = 266,
  sym__LINKAGE = 267,
  sym__LITERAL = 268,
  sym__LOCALE = 269,
  sym__LOCALE_DT_FUNC = 270,
  sym__LOCAL_STORAGE = 271,
  sym__LOCK = 272,
  sym__LOWER_CASE_FUNC = 273,
  sym__LOWLIGHT = 274,
  sym__LOW_VALUE = 275,
  sym__MANUAL = 276,
  sym__MEMORY = 277,
  sym__MERGE = 278,
  sym__MINUS = 279,
  sym__MNEMONIC_NAME = 280,
  sym__MODE = 281,
  sym__MOVE = 282,
  sym__MULTIPLE = 283,
  sym__MULTIPLY = 284,
  sym__NATIONAL = 285,
  sym__NATIONAL_EDITED = 286,
  sym__NATIVE = 287,
  sym__NE = 288,
  sym__NEGATIVE = 289,
  sym__NEXT = 290,
  sym__NEXT_SENTENCE = 291,
  sym__NO = 292,
  sym__NOMINAL = 293,
  sym__NOT = 294,
  sym__NOT_END = 295,
  sym__NOT_EOP = 296,
  sym__NOT_EXCEPTION = 297,
  sym__NOT_INVALID_KEY = 298,
  sym__NOT_OVERFLOW = 299,
  sym__NOT_SIZE_ERROR = 300,
  sym__NO_ADVANCING = 301,
  sym__NUMBER = 302,
  sym__NUMBERS = 303,
  sym__NUMERIC = 304,
  sym__NUMERIC_EDITED = 305,
  sym__NUMVALC_FUNC = 306,
  sym__OBJECT_COMPUTER = 307,
  sym__OCCURS = 308,
  sym__OF = 309,
  sym__OFF = 310,
  sym__OMITTED = 311,
  sym__ON = 312,
  sym__ONLY = 313,
  sym__OPEN = 314,
  sym__OPTIONAL = 315,
  sym__OR = 316,
  sym__ORDER = 317,
  sym__ORGANIZATION = 318,
  sym__OTHER = 319,
  sym__OUTPUT = 320,
  sym__OVERFLOW = 321,
  sym__OVERLINE = 322,
  sym__PACKED_DECIMAL = 323,
  sym__PADDING = 324,
  sym__PAGE = 325,
  sym__PAGE_FOOTING = 326,
  sym__PAGE_HEADING = 327,
  sym__PARAGRAPH = 328,
  sym__PERFORM = 329,
  sym__PIC = 330,
  sym__PICTURE = 331,
  sym__PLUS = 332,
  sym__POINTER = 333,
  sym__POSITION = 334,
  sym__POSITIVE = 335,
  sym__PRESENT = 336,
  sym__PREVIOUS = 337,
  sym__PRINTER = 338,
  sym__PRINTING = 339,
  sym__PROCEDURE = 340,
  sym__PROCEDURES = 341,
  sym__PROCEED = 342,
  sym__PROGRAM = 343,
  sym__PROGRAM_ID = 344,
  sym__PROGRAM_NAME = 345,
  sym__PROGRAM_POINTER = 346,
  sym__PROMPT = 347,
  sym__QUOTE = 348,
  sym__RANDOM = 349,
  sym__RD = 350,
  sym__READ = 351,
  sym__RECORD = 352,
  sym__RECORDING = 353,
  sym__RECORDS = 354,
  sym__RECURSIVE = 355,
  sym__REDEFINES = 356,
  sym__REEL = 357,
  sym__REFERENCE = 358,
  sym__RELATIVE = 359,
  sym__RELEASE = 360,
  sym__REMAINDER = 361,
  sym__REMOVAL = 362,
  sym__RENAMES = 363,
  sym__REPLACING = 364,
  sym__REPORT = 365,
  sym__REPORTING = 366,
  sym__REPORTS = 367,
  sym__REPORT_FOOTING = 368,
  sym__REPORT_HEADING = 369,
  sym__REPOSITORY = 370,
  sym__REQUIRED = 371,
  sym__RESERVE = 372,
  sym__RETURN = 373,
  sym__RETURNING = 374,
  sym__REVERSE_FUNC = 375,
  sym__REVERSE_VIDEO = 376,
  sym__REWIND = 377,
  sym__REWRITE = 378,
  sym__RIGHT = 379,
  sym__ROLLBACK = 380,
  sym__ROUNDED = 381,
  sym__RUN = 382,
  sym__SAME = 383,
  sym__SCREEN = 384,
  sym__SCREEN_CONTROL = 385,
  sym__SCROLL = 386,
  sym__SD = 387,
  sym__SEARCH = 388,
  sym__SECTION = 389,
  sym__SECURE = 390,
  sym__SEGMENT_LIMIT = 391,
  sym__SELECT = 392,
  sym__SEMI_COLON = 393,
  sym__SENTENCE = 394,
  sym__SEPARATE = 395,
  sym__SEQUENCE = 396,
  sym__SEQUENTIAL = 397,
  sym__SET = 398,
  sym__SHARING = 399,
  sym__SIGN = 400,
  sym__SIGNED = 401,
  sym__SIGNED_INT = 402,
  sym__SIGNED_LONG = 403,
  sym__SIGNED_SHORT = 404,
  sym__SIZE = 405,
  sym__SIZE_ERROR = 406,
  sym__SORT = 407,
  sym__SORT_MERGE = 408,
  sym__SOURCE = 409,
  sym__SOURCE_COMPUTER = 410,
  sym__SPACE = 411,
  sym__SPECIAL_NAMES = 412,
  sym__STANDARD = 413,
  sym__STANDARD_1 = 414,
  sym__STANDARD_2 = 415,
  sym__START = 416,
  sym__STATUS = 417,
  sym__STOP = 418,
  sym__STRING = 419,
  sym__SUBSTITUTE_FUNC = 420,
  sym__SUBSTITUTE_CASE_FUNC = 421,
  sym__SUBTRACT = 422,
  sym__SUM = 423,
  sym__SUPPRESS = 424,
  sym__SYMBOLIC = 425,
  sym__SYNCHRONIZED = 426,
  sym__TALLYING = 427,
  sym__TAPE = 428,
  sym__TERMINATE = 429,
  sym__TEST = 430,
  sym__THAN = 431,
  sym__THEN = 432,
  sym__THRU = 433,
  sym__TIME = 434,
  sym__TIMES = 435,
  sym__TO = 436,
  sym__TOK_FALSE = 437,
  sym__TOK_FILE = 438,
  sym__TOK_INITIAL = 439,
  sym__TOK_NULL = 440,
  sym__TOK_TRUE = 441,
  sym__TOP = 442,
  sym__TRACKS = 443,
  sym__TRAILING = 444,
  sym__TRANSFORM = 445,
  sym__TRIM_FUNCTION = 446,
  sym__TYPE = 447,
  sym__UNDERLINE = 448,
  sym__UNIT = 449,
  sym__UNLOCK = 450,
  sym__UNSIGNED = 451,
  sym__UNSIGNED_INT = 452,
  sym__UNSIGNED_LONG = 453,
  sym__UNSIGNED_SHORT = 454,
  sym__UNSTRING = 455,
  sym__UNTIL = 456,
  sym__UP = 457,
  sym__UPDATE = 458,
  sym__UPON = 459,
  sym__UPON_ARGUMENT_NUMBER = 460,
  sym__UPON_COMMAND_LINE = 461,
  sym__UPON_ENVIRONMENT_NAME = 462,
  sym__UPON_ENVIRONMENT_VALUE = 463,
  sym__UPPER_CASE_FUNC = 464,
  sym__USAGE = 465,
  sym__USE = 466,
  sym__USING = 467,
  sym__VALUE = 468,
  sym__VARYING = 469,
  sym__WAIT = 470,
  sym__WHEN = 471,
  sym__WHEN_COMPILED_FUNC = 472,
  sym__WHEN_OTHER = 473,
  sym__WITH = 474,
  sym__WORDS = 475,
  sym__WORKING_STORAGE = 476,
  sym__WRITE = 477,
  sym__YYYYDDD = 478,
  sym__YYYYMMDD = 479,
  sym__ZERO = 480,
  sym_start = 481,
  sym_program_definition = 482,
  sym_identification_division = 483,
  sym_program_name = 484,
  sym_as_literal = 485,
  sym_data_division = 486,
  sym_working_storage_section = 487,
  sym_data_description = 488,
  sym_entry_name = 489,
  sym__data_description_clause = 490,
  sym_redefines_clause = 491,
  sym__identifier_1 = 492,
  sym_qualified_word = 493,
  sym__in_of = 494,
  sym__subref = 495,
  sym__refmod = 496,
  sym__exp_list = 497,
  sym__exp = 498,
  sym_picture_clause = 499,
  sym__picture_string = 500,
  sym_picture_9 = 501,
  sym_procedure_division = 502,
  sym__statement = 503,
  sym_stop_run_statement = 504,
  aux_sym_start_repeat1 = 505,
  aux_sym_working_storage_section_repeat1 = 506,
  aux_sym_data_description_repeat1 = 507,
  aux_sym_qualified_word_repeat1 = 508,
  aux_sym_procedure_division_repeat1 = 509,
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
  [sym__HIGH_VALUE] = "_HIGH_VALUE",
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
  [sym__LOW_VALUE] = "_LOW_VALUE",
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
  [sym__QUOTE] = "_QUOTE",
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
  [sym__SPACE] = "_SPACE",
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
  [sym__TOK_NULL] = "_TOK_NULL",
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
  [sym__ZERO] = "_ZERO",
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
  [sym__identifier_1] = "_identifier_1",
  [sym_qualified_word] = "qualified_word",
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
  [aux_sym_start_repeat1] = "start_repeat1",
  [aux_sym_working_storage_section_repeat1] = "working_storage_section_repeat1",
  [aux_sym_data_description_repeat1] = "data_description_repeat1",
  [aux_sym_qualified_word_repeat1] = "qualified_word_repeat1",
  [aux_sym_procedure_division_repeat1] = "procedure_division_repeat1",
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
  [sym__HIGH_VALUE] = sym__HIGH_VALUE,
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
  [sym__LOW_VALUE] = sym__LOW_VALUE,
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
  [sym__QUOTE] = sym__QUOTE,
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
  [sym__SPACE] = sym__SPACE,
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
  [sym__TOK_NULL] = sym__TOK_NULL,
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
  [sym__ZERO] = sym__ZERO,
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
  [sym__identifier_1] = sym__identifier_1,
  [sym_qualified_word] = sym_qualified_word,
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
  [aux_sym_start_repeat1] = aux_sym_start_repeat1,
  [aux_sym_working_storage_section_repeat1] = aux_sym_working_storage_section_repeat1,
  [aux_sym_data_description_repeat1] = aux_sym_data_description_repeat1,
  [aux_sym_qualified_word_repeat1] = aux_sym_qualified_word_repeat1,
  [aux_sym_procedure_division_repeat1] = aux_sym_procedure_division_repeat1,
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
  [sym__HIGH_VALUE] = {
    .visible = false,
    .named = true,
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
  [sym__LOW_VALUE] = {
    .visible = false,
    .named = true,
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
  [sym__QUOTE] = {
    .visible = false,
    .named = true,
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
  [sym__SPACE] = {
    .visible = false,
    .named = true,
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
  [sym__TOK_NULL] = {
    .visible = false,
    .named = true,
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
  [sym__ZERO] = {
    .visible = false,
    .named = true,
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
  [sym__identifier_1] = {
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
  [aux_sym_procedure_division_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(114);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == ')') ADVANCE(121);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '8') ADVANCE(140);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == 't') ADVANCE(197);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(250);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(244);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(242);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(257);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'v')) ADVANCE(258);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 6:
      if (lookahead == '8') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(166);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 7:
      if (lookahead == '8') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 8:
      if (lookahead == '9') ADVANCE(128);
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
          lookahead == 'x') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '9') ADVANCE(129);
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
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(132);
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
          lookahead == 'e') ADVANCE(259);
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
          lookahead == 'p') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(258);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
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
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(113)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(258);
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
      ACCEPT_TOKEN(sym_file_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_level_number);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_level_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_picture_x);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__picture_9_z);
      if (lookahead == '(') ADVANCE(111);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__picture_9_z);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(110);
      if (lookahead == '9') ADVANCE(128);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(9);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(126);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '9') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '9') ADVANCE(128);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(9);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(126);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__picture_9_v);
      if (lookahead == '9') ADVANCE(129);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_local_storage_section);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_local_storage_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_linkage_section);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_linkage_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_report_section);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_report_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_screen_section);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_screen_section);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '8') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '-') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'a') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'g') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'k') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'n') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'p') ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 's') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(254);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(229);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(246);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(240);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(258);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(243);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(248);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(255);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(256);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__WORD);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
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
      if (lookahead == 'T') ADVANCE(1);
      if (lookahead == 't') ADVANCE(2);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(3);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(4);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(5);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(8);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(9);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(10);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(11);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(12);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(13);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(15);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(17);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(19);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(20);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(21);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(22);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(23);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == 'O') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(28);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(33);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(34);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(35);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(38);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(40);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(49);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(50);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(58);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(60);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(62);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(64);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(65);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(66);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(68);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(69);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(70);
      END_STATE();
    case 8:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(71);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(74);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(81);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(84);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(85);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(86);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 12:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 13:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(90);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(96);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(98);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(100);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(102);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 17:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(104);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(106);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(107);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(108);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(109);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(113);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(114);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(116);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(118);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 19:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(121);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(127);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(131);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(133);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(136);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(137);
      END_STATE();
    case 22:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(138);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(143);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 25:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(145);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 26:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 28:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__TO);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(153);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(155);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 31:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__TO);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(153);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 34:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(160);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(161);
      END_STATE();
    case 35:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(162);
      END_STATE();
    case 36:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(166);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(167);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(168);
      END_STATE();
    case 38:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(170);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__AS);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(173);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__AT);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      END_STATE();
    case 43:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(175);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(176);
      END_STATE();
    case 44:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(177);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 45:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 46:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(180);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(181);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 47:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__BY);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 49:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(185);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__CH);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(188);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 52:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(192);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(194);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 55:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(198);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 56:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(201);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__DE);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(202);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(204);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(205);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(206);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(207);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(208);
      END_STATE();
    case 58:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(210);
      END_STATE();
    case 59:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 60:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(212);
      END_STATE();
    case 61:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 62:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      END_STATE();
    case 63:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      END_STATE();
    case 64:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(216);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(217);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(218);
      END_STATE();
    case 65:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(219);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(220);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(221);
      END_STATE();
    case 66:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      END_STATE();
    case 67:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(223);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 68:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 69:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 70:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(229);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(230);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__FD);
      END_STATE();
    case 72:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(231);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(232);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 73:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(234);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 75:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(239);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__GE);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 77:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(241);
      END_STATE();
    case 78:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__GO);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(243);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(245);
      END_STATE();
    case 81:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 82:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(247);
      END_STATE();
    case 83:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__IF);
      END_STATE();
    case 86:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__IN);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(254);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(256);
      END_STATE();
    case 88:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(257);
      END_STATE();
    case 89:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 90:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(259);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(260);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__LE);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(261);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(262);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(263);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(264);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(265);
      END_STATE();
    case 92:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(266);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 93:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(269);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(270);
      END_STATE();
    case 94:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 95:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(272);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 96:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 98:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(277);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 100:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(279);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__NE);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(280);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(281);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__NO);
      if (lookahead == '-') ADVANCE(282);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(283);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      END_STATE();
    case 103:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(285);
      END_STATE();
    case 104:
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(286);
      END_STATE();
    case 105:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(287);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__OF);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(288);
      END_STATE();
    case 107:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(289);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__ON);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(290);
      END_STATE();
    case 109:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(291);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(292);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__OR);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(293);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(294);
      END_STATE();
    case 111:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(295);
      END_STATE();
    case 112:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 113:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(297);
      END_STATE();
    case 114:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(298);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(299);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(300);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 115:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 116:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(303);
      END_STATE();
    case 117:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(305);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(306);
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(307);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(308);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(309);
      END_STATE();
    case 120:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(310);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__RD);
      END_STATE();
    case 123:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(312);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(313);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(314);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(316);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(317);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(318);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(320);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(321);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(322);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(323);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(324);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(325);
      END_STATE();
    case 124:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 125:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(327);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 126:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      END_STATE();
    case 127:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(330);
      END_STATE();
    case 128:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(331);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__SD);
      END_STATE();
    case 130:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(332);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(333);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(334);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(336);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(337);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(338);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(339);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(340);
      END_STATE();
    case 131:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(341);
      END_STATE();
    case 132:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(342);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(343);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(344);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(345);
      END_STATE();
    case 134:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(346);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 135:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 136:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(351);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(352);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(353);
      END_STATE();
    case 137:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(354);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 138:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(356);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(357);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(358);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(359);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(360);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__UP);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(361);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(363);
      END_STATE();
    case 140:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(365);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(367);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      END_STATE();
    case 142:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(371);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      END_STATE();
    case 146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(373);
      END_STATE();
    case 147:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(374);
      END_STATE();
    case 148:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(375);
      END_STATE();
    case 149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(376);
      END_STATE();
    case 150:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 151:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(378);
      END_STATE();
    case 152:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 153:
      if (lookahead == '-') ADVANCE(380);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__TOP);
      END_STATE();
    case 155:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(381);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(382);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 156:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(384);
      END_STATE();
    case 157:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(386);
      END_STATE();
    case 159:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(387);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__ADD);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(388);
      END_STATE();
    case 161:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(389);
      END_STATE();
    case 162:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(390);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__ALL);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(391);
      END_STATE();
    case 164:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(392);
      END_STATE();
    case 165:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(393);
      END_STATE();
    case 166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(394);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__AND);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__ANY);
      END_STATE();
    case 169:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(395);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__ARE);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(396);
      END_STATE();
    case 171:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(397);
      END_STATE();
    case 172:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 173:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(399);
      END_STATE();
    case 174:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(400);
      END_STATE();
    case 175:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(401);
      END_STATE();
    case 176:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      END_STATE();
    case 177:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(403);
      END_STATE();
    case 178:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(404);
      END_STATE();
    case 179:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(405);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 181:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      END_STATE();
    case 182:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(408);
      END_STATE();
    case 183:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(409);
      END_STATE();
    case 184:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      END_STATE();
    case 185:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(411);
      END_STATE();
    case 186:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(412);
      END_STATE();
    case 187:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(413);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 188:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(415);
      END_STATE();
    case 189:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(416);
      END_STATE();
    case 190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__COL);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(420);
      END_STATE();
    case 192:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(421);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(422);
      END_STATE();
    case 193:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(423);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(424);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(425);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(427);
      END_STATE();
    case 194:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(428);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      END_STATE();
    case 195:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__CRT);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(431);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(432);
      END_STATE();
    case 198:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(433);
      END_STATE();
    case 199:
      if (lookahead == '-') ADVANCE(434);
      END_STATE();
    case 200:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(435);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(436);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__DAY);
      if (lookahead == '-') ADVANCE(437);
      END_STATE();
    case 202:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(438);
      END_STATE();
    case 203:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(439);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(440);
      END_STATE();
    case 204:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 205:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(443);
      END_STATE();
    case 206:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      END_STATE();
    case 207:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(445);
      END_STATE();
    case 208:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(446);
      END_STATE();
    case 209:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(447);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(448);
      END_STATE();
    case 210:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(449);
      END_STATE();
    case 211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(450);
      END_STATE();
    case 212:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(451);
      END_STATE();
    case 213:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(452);
      END_STATE();
    case 214:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(453);
      END_STATE();
    case 215:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(454);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__END);
      if (lookahead == '-') ADVANCE(455);
      END_STATE();
    case 217:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(456);
      END_STATE();
    case 218:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(457);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__EOL);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__EOP);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__EOS);
      END_STATE();
    case 222:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(458);
      END_STATE();
    case 223:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(459);
      END_STATE();
    case 224:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      END_STATE();
    case 225:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      END_STATE();
    case 226:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(462);
      END_STATE();
    case 227:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      END_STATE();
    case 228:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(465);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      END_STATE();
    case 230:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(467);
      END_STATE();
    case 231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(468);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(469);
      END_STATE();
    case 232:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 233:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(471);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(472);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__FOR);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(473);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(474);
      END_STATE();
    case 236:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      END_STATE();
    case 237:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(476);
      END_STATE();
    case 238:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(477);
      END_STATE();
    case 239:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(478);
      END_STATE();
    case 240:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(479);
      END_STATE();
    case 241:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(480);
      END_STATE();
    case 242:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(481);
      END_STATE();
    case 243:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(482);
      END_STATE();
    case 244:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(483);
      END_STATE();
    case 245:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(484);
      END_STATE();
    case 246:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(485);
      END_STATE();
    case 247:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(486);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__I_O);
      if (lookahead == '-') ADVANCE(487);
      END_STATE();
    case 249:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(488);
      END_STATE();
    case 250:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(489);
      END_STATE();
    case 251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(490);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      END_STATE();
    case 252:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(492);
      END_STATE();
    case 253:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(493);
      END_STATE();
    case 254:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(494);
      END_STATE();
    case 255:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(495);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(496);
      END_STATE();
    case 256:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(497);
      END_STATE();
    case 257:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__KEY);
      END_STATE();
    case 259:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(499);
      END_STATE();
    case 260:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(500);
      END_STATE();
    case 261:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(501);
      END_STATE();
    case 262:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(502);
      END_STATE();
    case 263:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(503);
      END_STATE();
    case 264:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(504);
      END_STATE();
    case 265:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(505);
      END_STATE();
    case 266:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      END_STATE();
    case 267:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(507);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(509);
      END_STATE();
    case 268:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(510);
      END_STATE();
    case 269:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(511);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(512);
      END_STATE();
    case 270:
      if (lookahead == '-') ADVANCE(513);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(515);
      END_STATE();
    case 271:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(516);
      END_STATE();
    case 272:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(517);
      END_STATE();
    case 273:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(518);
      END_STATE();
    case 274:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(519);
      END_STATE();
    case 275:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(520);
      END_STATE();
    case 276:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      END_STATE();
    case 277:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(522);
      END_STATE();
    case 278:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(523);
      END_STATE();
    case 279:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(524);
      END_STATE();
    case 280:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(525);
      END_STATE();
    case 281:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      END_STATE();
    case 282:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(527);
      END_STATE();
    case 283:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__NOT);
      if (lookahead == '-') ADVANCE(529);
      END_STATE();
    case 285:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(530);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(531);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(532);
      END_STATE();
    case 286:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      END_STATE();
    case 287:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(534);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__OFF);
      END_STATE();
    case 289:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      END_STATE();
    case 290:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(536);
      END_STATE();
    case 291:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(537);
      END_STATE();
    case 292:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(538);
      END_STATE();
    case 293:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      END_STATE();
    case 294:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(540);
      END_STATE();
    case 295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      END_STATE();
    case 296:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(542);
      END_STATE();
    case 297:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(543);
      END_STATE();
    case 298:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(544);
      END_STATE();
    case 299:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(545);
      END_STATE();
    case 300:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      END_STATE();
    case 301:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(547);
      END_STATE();
    case 302:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(548);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__PIC);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(549);
      END_STATE();
    case 304:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(550);
      END_STATE();
    case 305:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 306:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      END_STATE();
    case 307:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(553);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(554);
      END_STATE();
    case 308:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(555);
      END_STATE();
    case 309:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(556);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(557);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(558);
      END_STATE();
    case 310:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(559);
      END_STATE();
    case 311:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(560);
      END_STATE();
    case 312:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(561);
      END_STATE();
    case 313:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(562);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(563);
      END_STATE();
    case 314:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(564);
      END_STATE();
    case 315:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(565);
      END_STATE();
    case 316:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(566);
      END_STATE();
    case 317:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(568);
      END_STATE();
    case 318:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(570);
      END_STATE();
    case 319:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      END_STATE();
    case 320:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(573);
      END_STATE();
    case 321:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(574);
      END_STATE();
    case 322:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(575);
      END_STATE();
    case 323:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(576);
      END_STATE();
    case 324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(577);
      END_STATE();
    case 325:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 326:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(580);
      END_STATE();
    case 327:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(581);
      END_STATE();
    case 328:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(582);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__RUN);
      END_STATE();
    case 330:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      END_STATE();
    case 331:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(584);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(585);
      END_STATE();
    case 332:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(586);
      END_STATE();
    case 333:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(587);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(588);
      END_STATE();
    case 334:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(589);
      END_STATE();
    case 335:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      END_STATE();
    case 336:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(591);
      END_STATE();
    case 337:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(592);
      END_STATE();
    case 338:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(593);
      END_STATE();
    case 339:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(594);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__SET);
      END_STATE();
    case 341:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(595);
      END_STATE();
    case 342:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(596);
      END_STATE();
    case 343:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(597);
      END_STATE();
    case 344:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(598);
      END_STATE();
    case 345:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(599);
      END_STATE();
    case 346:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(600);
      END_STATE();
    case 347:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(601);
      END_STATE();
    case 348:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(602);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(603);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(604);
      END_STATE();
    case 349:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(605);
      END_STATE();
    case 350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(606);
      END_STATE();
    case 351:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(608);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__SUM);
      END_STATE();
    case 353:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(609);
      END_STATE();
    case 354:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(610);
      END_STATE();
    case 355:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(611);
      END_STATE();
    case 356:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(612);
      END_STATE();
    case 357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(613);
      END_STATE();
    case 358:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(614);
      END_STATE();
    case 359:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(615);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(616);
      END_STATE();
    case 360:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(617);
      END_STATE();
    case 361:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(618);
      END_STATE();
    case 362:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(619);
      END_STATE();
    case 363:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      END_STATE();
    case 364:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(621);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__USE);
      END_STATE();
    case 366:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(622);
      END_STATE();
    case 367:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(623);
      END_STATE();
    case 368:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(624);
      END_STATE();
    case 369:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(625);
      END_STATE();
    case 370:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(626);
      END_STATE();
    case 371:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(627);
      END_STATE();
    case 372:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(628);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__TAPE);
      END_STATE();
    case 374:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(629);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__TEST);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__THAN);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__THEN);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__THRU);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__TIME);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(630);
      END_STATE();
    case 380:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(631);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(632);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(633);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(634);
      END_STATE();
    case 381:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(635);
      END_STATE();
    case 382:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(636);
      END_STATE();
    case 383:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(637);
      END_STATE();
    case 384:
      if (lookahead == '-') ADVANCE(638);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__TYPE);
      END_STATE();
    case 386:
      if (lookahead == '_') ADVANCE(639);
      END_STATE();
    case 387:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(640);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(641);
      END_STATE();
    case 388:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 389:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(643);
      END_STATE();
    case 390:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(644);
      END_STATE();
    case 391:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(645);
      END_STATE();
    case 392:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(646);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__ALSO);
      END_STATE();
    case 394:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(647);
      END_STATE();
    case 395:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(648);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__AREA);
      END_STATE();
    case 397:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(649);
      END_STATE();
    case 398:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(650);
      END_STATE();
    case 399:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(651);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__AUTO);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(652);
      END_STATE();
    case 401:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(653);
      END_STATE();
    case 402:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(654);
      END_STATE();
    case 403:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(655);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__BELL);
      END_STATE();
    case 405:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(656);
      END_STATE();
    case 406:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(657);
      END_STATE();
    case 407:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(658);
      END_STATE();
    case 408:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(659);
      END_STATE();
    case 409:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(660);
      END_STATE();
    case 410:
      if (lookahead == '-') ADVANCE(661);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__CALL);
      END_STATE();
    case 412:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(662);
      END_STATE();
    case 413:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(663);
      END_STATE();
    case 414:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(664);
      END_STATE();
    case 415:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(665);
      END_STATE();
    case 416:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(666);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__CODE);
      if (lookahead == '-') ADVANCE(667);
      END_STATE();
    case 418:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(668);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__COLS);
      END_STATE();
    case 420:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(669);
      END_STATE();
    case 421:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(670);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(671);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__COMP);
      if (lookahead == '-') ADVANCE(673);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(674);
      END_STATE();
    case 423:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(675);
      END_STATE();
    case 424:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(676);
      END_STATE();
    case 425:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(677);
      END_STATE();
    case 426:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(678);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(680);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      END_STATE();
    case 427:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      END_STATE();
    case 428:
      if (lookahead == '-') ADVANCE(683);
      END_STATE();
    case 429:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 430:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      END_STATE();
    case 431:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(686);
      END_STATE();
    case 432:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(687);
      END_STATE();
    case 433:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 434:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(689);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__DATA);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__DATE);
      END_STATE();
    case 437:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(690);
      END_STATE();
    case 438:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(691);
      END_STATE();
    case 439:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(692);
      END_STATE();
    case 440:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(693);
      END_STATE();
    case 441:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(694);
      END_STATE();
    case 442:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(695);
      END_STATE();
    case 443:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(696);
      END_STATE();
    case 444:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(697);
      END_STATE();
    case 445:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(698);
      END_STATE();
    case 446:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(699);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__DISK);
      END_STATE();
    case 448:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(700);
      END_STATE();
    case 449:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(701);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(702);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__DOWN);
      END_STATE();
    case 451:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 452:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(704);
      END_STATE();
    case 453:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(705);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__ELSE);
      END_STATE();
    case 455:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(706);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(707);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(708);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(710);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(711);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(712);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(713);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(714);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(715);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(716);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(717);
      END_STATE();
    case 456:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(718);
      END_STATE();
    case 457:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(719);
      END_STATE();
    case 458:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(720);
      END_STATE();
    case 459:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      END_STATE();
    case 460:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      END_STATE();
    case 461:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(723);
      END_STATE();
    case 462:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(724);
      END_STATE();
    case 463:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(725);
      END_STATE();
    case 464:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(726);
      END_STATE();
    case 465:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(727);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__EXIT);
      END_STATE();
    case 467:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(728);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(729);
      END_STATE();
    case 468:
      if (lookahead == '-') ADVANCE(730);
      END_STATE();
    case 469:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 470:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(732);
      END_STATE();
    case 471:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(733);
      END_STATE();
    case 472:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(734);
      END_STATE();
    case 473:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(735);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(736);
      END_STATE();
    case 474:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(737);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__FREE);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__FROM);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__FULL);
      END_STATE();
    case 478:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(738);
      END_STATE();
    case 479:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(739);
      END_STATE();
    case 480:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(740);
      END_STATE();
    case 481:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(741);
      END_STATE();
    case 482:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(742);
      END_STATE();
    case 483:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(743);
      END_STATE();
    case 484:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(744);
      END_STATE();
    case 485:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(745);
      END_STATE();
    case 486:
      if (lookahead == '-') ADVANCE(746);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(747);
      END_STATE();
    case 487:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(748);
      END_STATE();
    case 488:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(749);
      END_STATE();
    case 489:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(750);
      END_STATE();
    case 490:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(751);
      END_STATE();
    case 491:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(752);
      END_STATE();
    case 492:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(753);
      END_STATE();
    case 493:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(754);
      END_STATE();
    case 494:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(755);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__INTO);
      END_STATE();
    case 496:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(756);
      END_STATE();
    case 497:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(757);
      END_STATE();
    case 498:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 499:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(759);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__LAST);
      if (lookahead == '-') ADVANCE(760);
      END_STATE();
    case 501:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__LEFT);
      END_STATE();
    case 503:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(762);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__LESS);
      END_STATE();
    case 505:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(763);
      END_STATE();
    case 506:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(764);
      END_STATE();
    case 507:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(765);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__LINE);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(766);
      END_STATE();
    case 509:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(767);
      END_STATE();
    case 510:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(768);
      END_STATE();
    case 511:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(769);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__LOCK);
      END_STATE();
    case 513:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(770);
      END_STATE();
    case 514:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(771);
      END_STATE();
    case 515:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(772);
      END_STATE();
    case 516:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(773);
      END_STATE();
    case 517:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(774);
      END_STATE();
    case 518:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(775);
      END_STATE();
    case 519:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(776);
      END_STATE();
    case 520:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(777);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__MODE);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__MOVE);
      END_STATE();
    case 523:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(778);
      END_STATE();
    case 524:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(779);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(780);
      END_STATE();
    case 525:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(781);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__NEXT);
      if (lookahead == '-') ADVANCE(782);
      END_STATE();
    case 527:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(783);
      END_STATE();
    case 528:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(784);
      END_STATE();
    case 529:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(786);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(787);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(788);
      END_STATE();
    case 530:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(789);
      END_STATE();
    case 531:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(790);
      END_STATE();
    case 532:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(791);
      END_STATE();
    case 533:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(792);
      END_STATE();
    case 534:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(793);
      END_STATE();
    case 535:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(794);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__ONLY);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__OPEN);
      END_STATE();
    case 538:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(795);
      END_STATE();
    case 539:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(796);
      END_STATE();
    case 540:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(797);
      END_STATE();
    case 541:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(798);
      END_STATE();
    case 542:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(799);
      END_STATE();
    case 543:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(800);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(801);
      END_STATE();
    case 544:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(802);
      END_STATE();
    case 545:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(803);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__PAGE);
      if (lookahead == '-') ADVANCE(804);
      END_STATE();
    case 547:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(805);
      END_STATE();
    case 548:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(806);
      END_STATE();
    case 549:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(807);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__PLUS);
      END_STATE();
    case 551:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(808);
      END_STATE();
    case 552:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(809);
      END_STATE();
    case 553:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 554:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(811);
      END_STATE();
    case 555:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      END_STATE();
    case 556:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      END_STATE();
    case 557:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(814);
      END_STATE();
    case 558:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(815);
      END_STATE();
    case 559:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(816);
      END_STATE();
    case 560:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(817);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__READ);
      END_STATE();
    case 562:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(818);
      END_STATE();
    case 563:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(819);
      END_STATE();
    case 564:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(820);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__REEL);
      END_STATE();
    case 566:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(821);
      END_STATE();
    case 567:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(822);
      END_STATE();
    case 568:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(823);
      END_STATE();
    case 569:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(824);
      END_STATE();
    case 570:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(825);
      END_STATE();
    case 571:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(826);
      END_STATE();
    case 572:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(827);
      END_STATE();
    case 573:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(828);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(829);
      END_STATE();
    case 574:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(830);
      END_STATE();
    case 575:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(831);
      END_STATE();
    case 576:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(832);
      END_STATE();
    case 577:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(833);
      END_STATE();
    case 578:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(834);
      END_STATE();
    case 579:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(835);
      END_STATE();
    case 580:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(836);
      END_STATE();
    case 581:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(837);
      END_STATE();
    case 582:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(838);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__SAME);
      END_STATE();
    case 584:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      END_STATE();
    case 585:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(840);
      END_STATE();
    case 586:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(841);
      END_STATE();
    case 587:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(842);
      END_STATE();
    case 588:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(843);
      END_STATE();
    case 589:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(844);
      END_STATE();
    case 590:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(845);
      END_STATE();
    case 591:
      if (lookahead == '-') ADVANCE(846);
      END_STATE();
    case 592:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(847);
      END_STATE();
    case 593:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(848);
      END_STATE();
    case 594:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(849);
      END_STATE();
    case 595:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(850);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__SIGN);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__SIZE);
      if (lookahead == '-') ADVANCE(852);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__SORT);
      if (lookahead == '-') ADVANCE(853);
      END_STATE();
    case 599:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(854);
      END_STATE();
    case 600:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(855);
      END_STATE();
    case 601:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(856);
      END_STATE();
    case 602:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(857);
      END_STATE();
    case 603:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(858);
      END_STATE();
    case 604:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(859);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__STOP);
      END_STATE();
    case 606:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(860);
      END_STATE();
    case 607:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(861);
      END_STATE();
    case 608:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(862);
      END_STATE();
    case 609:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(863);
      END_STATE();
    case 610:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(864);
      END_STATE();
    case 611:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(865);
      END_STATE();
    case 612:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(866);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__UNIT);
      END_STATE();
    case 614:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(867);
      END_STATE();
    case 615:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(868);
      END_STATE();
    case 616:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(869);
      END_STATE();
    case 617:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(870);
      END_STATE();
    case 618:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(871);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__UPON);
      if (lookahead == '-') ADVANCE(872);
      END_STATE();
    case 620:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(873);
      END_STATE();
    case 621:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(874);
      END_STATE();
    case 622:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(875);
      END_STATE();
    case 623:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(876);
      END_STATE();
    case 624:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(877);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__WAIT);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__WHEN);
      if (lookahead == '-') ADVANCE(878);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__WITH);
      END_STATE();
    case 628:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(879);
      END_STATE();
    case 629:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(880);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__TIMES);
      END_STATE();
    case 631:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(881);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(882);
      END_STATE();
    case 632:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(883);
      END_STATE();
    case 633:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(884);
      END_STATE();
    case 634:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(885);
      END_STATE();
    case 635:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(886);
      END_STATE();
    case 636:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(887);
      END_STATE();
    case 637:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(888);
      END_STATE();
    case 638:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(889);
      END_STATE();
    case 639:
      if (lookahead == 'a') ADVANCE(890);
      if (lookahead == 'b') ADVANCE(891);
      if (lookahead == 'c') ADVANCE(892);
      if (lookahead == 'e') ADVANCE(893);
      if (lookahead == 'f') ADVANCE(894);
      if (lookahead == 'g') ADVANCE(895);
      if (lookahead == 'j') ADVANCE(896);
      if (lookahead == 'n') ADVANCE(897);
      if (lookahead == 'o') ADVANCE(898);
      if (lookahead == 'r') ADVANCE(899);
      if (lookahead == 's') ADVANCE(900);
      if (lookahead == 'u') ADVANCE(901);
      if (lookahead == 'v') ADVANCE(902);
      END_STATE();
    case 640:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(903);
      END_STATE();
    case 641:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(904);
      END_STATE();
    case 642:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(905);
      END_STATE();
    case 643:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(906);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__AFTER);
      END_STATE();
    case 645:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(907);
      END_STATE();
    case 646:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(908);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__ALTER);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(910);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__APPLY);
      END_STATE();
    case 649:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(911);
      END_STATE();
    case 650:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(912);
      END_STATE();
    case 651:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      END_STATE();
    case 652:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(914);
      END_STATE();
    case 653:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(915);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__BASED);
      END_STATE();
    case 655:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(916);
      END_STATE();
    case 656:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(917);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__BLANK);
      if (lookahead == '-') ADVANCE(918);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__BLINK);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__BLOCK);
      END_STATE();
    case 660:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(919);
      END_STATE();
    case 661:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(920);
      END_STATE();
    case 662:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(921);
      END_STATE();
    case 663:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(922);
      END_STATE();
    case 664:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(923);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__CLASS);
      if (lookahead == '-') ADVANCE(924);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__CLOSE);
      if (lookahead == '-') ADVANCE(925);
      END_STATE();
    case 667:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(926);
      END_STATE();
    case 668:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(927);
      END_STATE();
    case 669:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(928);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__COMMA);
      if (lookahead == '-') ADVANCE(929);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(930);
      END_STATE();
    case 671:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(931);
      END_STATE();
    case 672:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(932);
      END_STATE();
    case 673:
      if (lookahead == '1') ADVANCE(933);
      if (lookahead == '2') ADVANCE(934);
      if (lookahead == '3') ADVANCE(935);
      if (lookahead == '4') ADVANCE(936);
      if (lookahead == '5') ADVANCE(937);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(938);
      END_STATE();
    case 674:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(939);
      END_STATE();
    case 675:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(940);
      END_STATE();
    case 676:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(941);
      END_STATE();
    case 677:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(942);
      END_STATE();
    case 678:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(943);
      END_STATE();
    case 679:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(944);
      END_STATE();
    case 680:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(945);
      END_STATE();
    case 681:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(946);
      END_STATE();
    case 682:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(947);
      END_STATE();
    case 683:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(948);
      END_STATE();
    case 684:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(949);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym__COUNT);
      END_STATE();
    case 686:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(950);
      END_STATE();
    case 687:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(951);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym__CYCLE);
      END_STATE();
    case 689:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(952);
      END_STATE();
    case 690:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(953);
      END_STATE();
    case 691:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(954);
      END_STATE();
    case 692:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(955);
      END_STATE();
    case 693:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(956);
      END_STATE();
    case 694:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(957);
      END_STATE();
    case 695:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(958);
      END_STATE();
    case 696:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(959);
      END_STATE();
    case 697:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(960);
      END_STATE();
    case 698:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(961);
      END_STATE();
    case 699:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(962);
      END_STATE();
    case 700:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(963);
      END_STATE();
    case 701:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(964);
      END_STATE();
    case 702:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(965);
      END_STATE();
    case 703:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(966);
      END_STATE();
    case 704:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(967);
      END_STATE();
    case 705:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(968);
      END_STATE();
    case 706:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(969);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(970);
      END_STATE();
    case 707:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(971);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(972);
      END_STATE();
    case 708:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(973);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(974);
      END_STATE();
    case 709:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(975);
      END_STATE();
    case 710:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(976);
      END_STATE();
    case 711:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(977);
      END_STATE();
    case 712:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(978);
      END_STATE();
    case 713:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(979);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(980);
      END_STATE();
    case 714:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(981);
      END_STATE();
    case 715:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(982);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(983);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(984);
      END_STATE();
    case 716:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(985);
      END_STATE();
    case 717:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(986);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym__ENTRY);
      END_STATE();
    case 719:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(987);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym__EQUAL);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(988);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym__ERASE);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym__ERROR);
      END_STATE();
    case 723:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(989);
      END_STATE();
    case 724:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(990);
      END_STATE();
    case 725:
      if (lookahead == '-') ADVANCE(991);
      END_STATE();
    case 726:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(992);
      END_STATE();
    case 727:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(993);
      END_STATE();
    case 728:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(994);
      END_STATE();
    case 729:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(995);
      END_STATE();
    case 730:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(996);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(997);
      END_STATE();
    case 731:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(998);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym__FINAL);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym__FIRST);
      END_STATE();
    case 734:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(999);
      END_STATE();
    case 735:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1000);
      END_STATE();
    case 736:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1001);
      END_STATE();
    case 737:
      if (lookahead == '-') ADVANCE(1002);
      END_STATE();
    case 738:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1003);
      END_STATE();
    case 739:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1004);
      END_STATE();
    case 740:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1005);
      END_STATE();
    case 741:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1006);
      END_STATE();
    case 742:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1007);
      END_STATE();
    case 743:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1008);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym__GROUP);
      END_STATE();
    case 745:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1009);
      END_STATE();
    case 746:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1010);
      END_STATE();
    case 747:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1011);
      END_STATE();
    case 748:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1012);
      END_STATE();
    case 749:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1013);
      END_STATE();
    case 750:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1014);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1015);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__INDEX);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1016);
      END_STATE();
    case 752:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1017);
      END_STATE();
    case 753:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1018);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__INPUT);
      if (lookahead == '-') ADVANCE(1019);
      END_STATE();
    case 755:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1020);
      END_STATE();
    case 756:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1021);
      END_STATE();
    case 757:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1022);
      END_STATE();
    case 758:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1023);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__LABEL);
      END_STATE();
    case 760:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1024);
      END_STATE();
    case 761:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1025);
      END_STATE();
    case 762:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1026);
      END_STATE();
    case 763:
      if (lookahead == '-') ADVANCE(1027);
      if (lookahead == '8') ADVANCE(1028);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__LIMIT);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1029);
      END_STATE();
    case 765:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1030);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__LINES);
      END_STATE();
    case 767:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1031);
      END_STATE();
    case 768:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1032);
      END_STATE();
    case 769:
      if (lookahead == '-') ADVANCE(1033);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1034);
      END_STATE();
    case 770:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1035);
      END_STATE();
    case 771:
      if (lookahead == '-') ADVANCE(1036);
      END_STATE();
    case 772:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1037);
      END_STATE();
    case 773:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1038);
      END_STATE();
    case 774:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1039);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__MERGE);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__MINUS);
      END_STATE();
    case 777:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1040);
      END_STATE();
    case 778:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1041);
      END_STATE();
    case 779:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1042);
      END_STATE();
    case 780:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1043);
      END_STATE();
    case 781:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1044);
      END_STATE();
    case 782:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1045);
      END_STATE();
    case 783:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1046);
      END_STATE();
    case 784:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1047);
      END_STATE();
    case 785:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1048);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1049);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1050);
      END_STATE();
    case 786:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1051);
      END_STATE();
    case 787:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1052);
      END_STATE();
    case 788:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1053);
      END_STATE();
    case 789:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1054);
      END_STATE();
    case 790:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1055);
      END_STATE();
    case 791:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1056);
      END_STATE();
    case 792:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1057);
      END_STATE();
    case 793:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1058);
      END_STATE();
    case 794:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1059);
      END_STATE();
    case 795:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1060);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__ORDER);
      END_STATE();
    case 797:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1061);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__OTHER);
      END_STATE();
    case 799:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1062);
      END_STATE();
    case 800:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1063);
      END_STATE();
    case 801:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1064);
      END_STATE();
    case 802:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1065);
      END_STATE();
    case 803:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1066);
      END_STATE();
    case 804:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1067);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1068);
      END_STATE();
    case 805:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1069);
      END_STATE();
    case 806:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1070);
      END_STATE();
    case 807:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1071);
      END_STATE();
    case 808:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      END_STATE();
    case 809:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1073);
      END_STATE();
    case 810:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1074);
      END_STATE();
    case 811:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1075);
      END_STATE();
    case 812:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1076);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1077);
      END_STATE();
    case 813:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1078);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1079);
      END_STATE();
    case 814:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1080);
      END_STATE();
    case 815:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1081);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__QUOTE);
      END_STATE();
    case 817:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1082);
      END_STATE();
    case 818:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1083);
      END_STATE();
    case 819:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1084);
      END_STATE();
    case 820:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1085);
      END_STATE();
    case 821:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1086);
      END_STATE();
    case 822:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1087);
      END_STATE();
    case 823:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1088);
      END_STATE();
    case 824:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1089);
      END_STATE();
    case 825:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1090);
      END_STATE();
    case 826:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1091);
      END_STATE();
    case 827:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1092);
      END_STATE();
    case 828:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1093);
      END_STATE();
    case 829:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1094);
      END_STATE();
    case 830:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1095);
      END_STATE();
    case 831:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1096);
      END_STATE();
    case 832:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1097);
      END_STATE();
    case 833:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1098);
      END_STATE();
    case 834:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1099);
      END_STATE();
    case 835:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1100);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym__RIGHT);
      END_STATE();
    case 837:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1101);
      END_STATE();
    case 838:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1102);
      END_STATE();
    case 839:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1103);
      END_STATE();
    case 840:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1104);
      END_STATE();
    case 841:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1105);
      END_STATE();
    case 842:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1106);
      END_STATE();
    case 843:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1107);
      END_STATE();
    case 844:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1108);
      END_STATE();
    case 845:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1109);
      END_STATE();
    case 846:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1110);
      END_STATE();
    case 847:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1111);
      END_STATE();
    case 848:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1112);
      END_STATE();
    case 849:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1113);
      END_STATE();
    case 850:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1114);
      END_STATE();
    case 851:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1115);
      END_STATE();
    case 852:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1116);
      END_STATE();
    case 853:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1117);
      END_STATE();
    case 854:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1118);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym__SPACE);
      END_STATE();
    case 856:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1119);
      END_STATE();
    case 857:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1120);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym__START);
      END_STATE();
    case 859:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1121);
      END_STATE();
    case 860:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1122);
      END_STATE();
    case 861:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1123);
      END_STATE();
    case 862:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1124);
      END_STATE();
    case 863:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1125);
      END_STATE();
    case 864:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1126);
      END_STATE();
    case 865:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1127);
      END_STATE();
    case 866:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1128);
      END_STATE();
    case 867:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1129);
      END_STATE();
    case 868:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1130);
      END_STATE();
    case 869:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1131);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym__UNTIL);
      END_STATE();
    case 871:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1132);
      END_STATE();
    case 872:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1133);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1134);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1135);
      END_STATE();
    case 873:
      if (lookahead == '-') ADVANCE(1136);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym__USAGE);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym__USING);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym__VALUE);
      END_STATE();
    case 877:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1137);
      END_STATE();
    case 878:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1138);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1139);
      END_STATE();
    case 879:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1140);
      END_STATE();
    case 880:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1141);
      END_STATE();
    case 881:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1142);
      END_STATE();
    case 882:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1143);
      END_STATE();
    case 883:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1144);
      END_STATE();
    case 884:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1145);
      END_STATE();
    case 885:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1146);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym__TRACKS);
      END_STATE();
    case 887:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1147);
      END_STATE();
    case 888:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1148);
      END_STATE();
    case 889:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1149);
      END_STATE();
    case 890:
      if (lookahead == 'n') ADVANCE(1150);
      END_STATE();
    case 891:
      if (lookahead == 'a') ADVANCE(1151);
      if (lookahead == 'l') ADVANCE(1152);
      END_STATE();
    case 892:
      if (lookahead == 'o') ADVANCE(1153);
      END_STATE();
    case 893:
      if (lookahead == 'n') ADVANCE(1154);
      if (lookahead == 'r') ADVANCE(1155);
      if (lookahead == 'x') ADVANCE(1156);
      END_STATE();
    case 894:
      if (lookahead == 'u') ADVANCE(1157);
      END_STATE();
    case 895:
      if (lookahead == 'l') ADVANCE(1158);
      END_STATE();
    case 896:
      if (lookahead == 'u') ADVANCE(1159);
      END_STATE();
    case 897:
      if (lookahead == 'e') ADVANCE(1160);
      END_STATE();
    case 898:
      if (lookahead == 'c') ADVANCE(1161);
      END_STATE();
    case 899:
      if (lookahead == 'e') ADVANCE(1162);
      END_STATE();
    case 900:
      if (lookahead == 'i') ADVANCE(1163);
      if (lookahead == 'y') ADVANCE(1164);
      END_STATE();
    case 901:
      if (lookahead == 's') ADVANCE(1165);
      END_STATE();
    case 902:
      if (lookahead == 'a') ADVANCE(1166);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym__ACCEPT);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym__ACCESS);
      END_STATE();
    case 905:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1167);
      END_STATE();
    case 906:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1168);
      END_STATE();
    case 907:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1169);
      END_STATE();
    case 908:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1170);
      END_STATE();
    case 909:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1171);
      END_STATE();
    case 910:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1172);
      END_STATE();
    case 911:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1173);
      END_STATE();
    case 912:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1174);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym__ASSIGN);
      END_STATE();
    case 914:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1175);
      END_STATE();
    case 915:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1176);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__BEFORE);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym__BINARY);
      if (lookahead == '-') ADVANCE(1177);
      END_STATE();
    case 918:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1179);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__BOTTOM);
      END_STATE();
    case 920:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1180);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym__CANCEL);
      END_STATE();
    case 922:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1181);
      END_STATE();
    case 923:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1182);
      END_STATE();
    case 924:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1183);
      END_STATE();
    case 925:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1184);
      END_STATE();
    case 926:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1185);
      END_STATE();
    case 927:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1186);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym__COLUMN);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1187);
      END_STATE();
    case 929:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1188);
      END_STATE();
    case 930:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1189);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__COMMIT);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1190);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym__COMMON);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__COMP_1);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__COMP_2);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__COMP_3);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__COMP_4);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym__COMP_5);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym__COMP_X);
      END_STATE();
    case 939:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1191);
      END_STATE();
    case 940:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1192);
      END_STATE();
    case 941:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1193);
      END_STATE();
    case 942:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1194);
      END_STATE();
    case 943:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1195);
      END_STATE();
    case 944:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1196);
      END_STATE();
    case 945:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1197);
      END_STATE();
    case 946:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1198);
      END_STATE();
    case 947:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1199);
      END_STATE();
    case 948:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1200);
      END_STATE();
    case 949:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1201);
      END_STATE();
    case 950:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1202);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1203);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym__CURSOR);
      END_STATE();
    case 952:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1204);
      END_STATE();
    case 953:
      if (lookahead == '-') ADVANCE(1205);
      END_STATE();
    case 954:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1206);
      END_STATE();
    case 955:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1207);
      END_STATE();
    case 956:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1208);
      END_STATE();
    case 957:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1209);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym__DELETE);
      END_STATE();
    case 959:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1210);
      END_STATE();
    case 960:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1211);
      END_STATE();
    case 961:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1212);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym__DETAIL);
      END_STATE();
    case 963:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1213);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym__DIVIDE);
      END_STATE();
    case 965:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1214);
      END_STATE();
    case 966:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1215);
      END_STATE();
    case 967:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1216);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym__EBCDIC);
      END_STATE();
    case 969:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1217);
      END_STATE();
    case 970:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1218);
      END_STATE();
    case 971:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1219);
      END_STATE();
    case 972:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1220);
      END_STATE();
    case 973:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1221);
      END_STATE();
    case 974:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1222);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1223);
      END_STATE();
    case 975:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1224);
      END_STATE();
    case 976:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1225);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym__END_IF);
      END_STATE();
    case 978:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1226);
      END_STATE();
    case 979:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1227);
      END_STATE();
    case 980:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1228);
      END_STATE();
    case 981:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1229);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1230);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1231);
      END_STATE();
    case 982:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1232);
      END_STATE();
    case 983:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1233);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1234);
      END_STATE();
    case 984:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1235);
      END_STATE();
    case 985:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1236);
      END_STATE();
    case 986:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1237);
      END_STATE();
    case 987:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1238);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym__EQUALS);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym__ESCAPE);
      END_STATE();
    case 990:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1239);
      END_STATE();
    case 991:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1240);
      END_STATE();
    case 992:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1241);
      END_STATE();
    case 993:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1242);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym__EXTEND);
      END_STATE();
    case 995:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1243);
      END_STATE();
    case 996:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1244);
      END_STATE();
    case 997:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1245);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym__FILLER);
      END_STATE();
    case 999:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1246);
      END_STATE();
    case 1000:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1247);
      END_STATE();
    case 1001:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1248);
      END_STATE();
    case 1002:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1249);
      END_STATE();
    case 1003:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1250);
      END_STATE();
    case 1004:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1251);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym__GIVING);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym__GLOBAL);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym__GOBACK);
      END_STATE();
    case 1008:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1252);
      END_STATE();
    case 1009:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1253);
      END_STATE();
    case 1010:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1254);
      END_STATE();
    case 1011:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1255);
      END_STATE();
    case 1012:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1256);
      END_STATE();
    case 1013:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1257);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym__IGNORE);
      END_STATE();
    case 1015:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1258);
      END_STATE();
    case 1016:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1259);
      END_STATE();
    case 1017:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1260);
      END_STATE();
    case 1018:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1261);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1262);
      END_STATE();
    case 1019:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1263);
      END_STATE();
    case 1020:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1264);
      END_STATE();
    case 1021:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1265);
      END_STATE();
    case 1022:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1266);
      END_STATE();
    case 1023:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1267);
      END_STATE();
    case 1024:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1268);
      END_STATE();
    case 1025:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1269);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym__LENGTH);
      END_STATE();
    case 1027:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1270);
      END_STATE();
    case 1028:
      if (lookahead == '8') ADVANCE(1271);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym__LIMITS);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym__LINAGE);
      if (lookahead == '-') ADVANCE(1272);
      END_STATE();
    case 1031:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1273);
      END_STATE();
    case 1032:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1274);
      END_STATE();
    case 1033:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1275);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym__LOCALE);
      if (lookahead == '-') ADVANCE(1276);
      END_STATE();
    case 1035:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1277);
      END_STATE();
    case 1036:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1278);
      END_STATE();
    case 1037:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1279);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym__MANUAL);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym__MEMORY);
      END_STATE();
    case 1040:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1280);
      END_STATE();
    case 1041:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1281);
      END_STATE();
    case 1042:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1282);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym__NATIVE);
      END_STATE();
    case 1044:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1283);
      END_STATE();
    case 1045:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1284);
      END_STATE();
    case 1046:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1285);
      END_STATE();
    case 1047:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1286);
      END_STATE();
    case 1048:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1287);
      END_STATE();
    case 1049:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1288);
      END_STATE();
    case 1050:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1289);
      END_STATE();
    case 1051:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1290);
      END_STATE();
    case 1052:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1291);
      END_STATE();
    case 1053:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1292);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym__NUMBER);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1293);
      END_STATE();
    case 1055:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1294);
      END_STATE();
    case 1056:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1295);
      END_STATE();
    case 1057:
      if (lookahead == '-') ADVANCE(1296);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym__OCCURS);
      END_STATE();
    case 1059:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1297);
      END_STATE();
    case 1060:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1298);
      END_STATE();
    case 1061:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1299);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym__OUTPUT);
      END_STATE();
    case 1063:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1300);
      END_STATE();
    case 1064:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1301);
      END_STATE();
    case 1065:
      if (lookahead == '-') ADVANCE(1302);
      END_STATE();
    case 1066:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1303);
      END_STATE();
    case 1067:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1304);
      END_STATE();
    case 1068:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1305);
      END_STATE();
    case 1069:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1306);
      END_STATE();
    case 1070:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1307);
      END_STATE();
    case 1071:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1308);
      END_STATE();
    case 1072:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1309);
      END_STATE();
    case 1073:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1310);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1311);
      END_STATE();
    case 1074:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1312);
      END_STATE();
    case 1075:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1313);
      END_STATE();
    case 1076:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1314);
      END_STATE();
    case 1077:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1315);
      END_STATE();
    case 1078:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1316);
      END_STATE();
    case 1079:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1317);
      END_STATE();
    case 1080:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1318);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym__PROMPT);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym__RANDOM);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym__RECORD);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1319);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1320);
      END_STATE();
    case 1084:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1321);
      END_STATE();
    case 1085:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1322);
      END_STATE();
    case 1086:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1323);
      END_STATE();
    case 1087:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1324);
      END_STATE();
    case 1088:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1325);
      END_STATE();
    case 1089:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1326);
      END_STATE();
    case 1090:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1327);
      END_STATE();
    case 1091:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1328);
      END_STATE();
    case 1092:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1329);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym__REPORT);
      if (lookahead == '-') ADVANCE(1330);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1331);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1332);
      END_STATE();
    case 1094:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1333);
      END_STATE();
    case 1095:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1334);
      END_STATE();
    case 1096:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1335);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym__RETURN);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1336);
      END_STATE();
    case 1098:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1337);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym__REWIND);
      END_STATE();
    case 1100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1338);
      END_STATE();
    case 1101:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1339);
      END_STATE();
    case 1102:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1340);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym__SCREEN);
      if (lookahead == '-') ADVANCE(1341);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym__SCROLL);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym__SEARCH);
      END_STATE();
    case 1106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1342);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym__SECURE);
      END_STATE();
    case 1108:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1343);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym__SELECT);
      END_STATE();
    case 1110:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1344);
      END_STATE();
    case 1111:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1345);
      END_STATE();
    case 1112:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1346);
      END_STATE();
    case 1113:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1347);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1348);
      END_STATE();
    case 1114:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1349);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym__SIGNED);
      if (lookahead == '-') ADVANCE(1350);
      END_STATE();
    case 1116:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1351);
      END_STATE();
    case 1117:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1352);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym__SOURCE);
      if (lookahead == '-') ADVANCE(1353);
      END_STATE();
    case 1119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1354);
      END_STATE();
    case 1120:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1355);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym__STATUS);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym__STRING);
      END_STATE();
    case 1123:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1356);
      END_STATE();
    case 1124:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1357);
      END_STATE();
    case 1125:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1358);
      END_STATE();
    case 1126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1359);
      END_STATE();
    case 1127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1360);
      END_STATE();
    case 1128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1361);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym__UNLOCK);
      END_STATE();
    case 1130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1362);
      END_STATE();
    case 1131:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1363);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym__UPDATE);
      END_STATE();
    case 1133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1364);
      END_STATE();
    case 1134:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1365);
      END_STATE();
    case 1135:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1366);
      END_STATE();
    case 1136:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1367);
      END_STATE();
    case 1137:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1368);
      END_STATE();
    case 1138:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1369);
      END_STATE();
    case 1139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1370);
      END_STATE();
    case 1140:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1371);
      END_STATE();
    case 1141:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1372);
      END_STATE();
    case 1142:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1373);
      END_STATE();
    case 1143:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1374);
      END_STATE();
    case 1144:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1375);
      END_STATE();
    case 1145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1376);
      END_STATE();
    case 1146:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1377);
      END_STATE();
    case 1147:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1378);
      END_STATE();
    case 1148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1379);
      END_STATE();
    case 1149:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1380);
      END_STATE();
    case 1150:
      if (lookahead == 'y') ADVANCE(1381);
      END_STATE();
    case 1151:
      if (lookahead == 's') ADVANCE(1382);
      END_STATE();
    case 1152:
      if (lookahead == 'a') ADVANCE(1383);
      END_STATE();
    case 1153:
      if (lookahead == 'n') ADVANCE(1384);
      END_STATE();
    case 1154:
      if (lookahead == 'd') ADVANCE(1385);
      if (lookahead == 'v') ADVANCE(1386);
      END_STATE();
    case 1155:
      if (lookahead == 'r') ADVANCE(1387);
      END_STATE();
    case 1156:
      if (lookahead == 't') ADVANCE(1388);
      END_STATE();
    case 1157:
      if (lookahead == 'n') ADVANCE(1389);
      END_STATE();
    case 1158:
      if (lookahead == 'o') ADVANCE(1390);
      END_STATE();
    case 1159:
      if (lookahead == 's') ADVANCE(1391);
      END_STATE();
    case 1160:
      if (lookahead == 's') ADVANCE(1392);
      END_STATE();
    case 1161:
      if (lookahead == 'c') ADVANCE(1393);
      END_STATE();
    case 1162:
      if (lookahead == 'n') ADVANCE(1394);
      END_STATE();
    case 1163:
      if (lookahead == 'g') ADVANCE(1395);
      END_STATE();
    case 1164:
      if (lookahead == 'n') ADVANCE(1396);
      END_STATE();
    case 1165:
      if (lookahead == 'a') ADVANCE(1397);
      END_STATE();
    case 1166:
      if (lookahead == 'l') ADVANCE(1398);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym__ADDRESS);
      END_STATE();
    case 1168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1399);
      END_STATE();
    case 1169:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1400);
      END_STATE();
    case 1170:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1401);
      END_STATE();
    case 1171:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1402);
      END_STATE();
    case 1172:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1403);
      END_STATE();
    case 1173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1404);
      END_STATE();
    case 1174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1405);
      END_STATE();
    case 1175:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1406);
      END_STATE();
    case 1176:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1407);
      END_STATE();
    case 1177:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1408);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1409);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1410);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1411);
      END_STATE();
    case 1178:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1412);
      END_STATE();
    case 1179:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1413);
      END_STATE();
    case 1180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1414);
      END_STATE();
    case 1181:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1415);
      END_STATE();
    case 1182:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1416);
      END_STATE();
    case 1183:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1417);
      END_STATE();
    case 1184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1418);
      END_STATE();
    case 1185:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1419);
      END_STATE();
    case 1186:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1420);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(sym__COLUMNS);
      END_STATE();
    case 1188:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1421);
      END_STATE();
    case 1189:
      if (lookahead == '-') ADVANCE(1422);
      END_STATE();
    case 1190:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1423);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(sym__COMPUTE);
      END_STATE();
    case 1192:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1424);
      END_STATE();
    case 1193:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1425);
      END_STATE();
    case 1194:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1426);
      END_STATE();
    case 1195:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1427);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(sym__CONTENT);
      END_STATE();
    case 1197:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1428);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(sym__CONTROL);
      if (lookahead == '-') ADVANCE(1429);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1430);
      END_STATE();
    case 1199:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1431);
      END_STATE();
    case 1200:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1432);
      END_STATE();
    case 1201:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1433);
      END_STATE();
    case 1202:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1434);
      END_STATE();
    case 1203:
      if (lookahead == '-') ADVANCE(1435);
      END_STATE();
    case 1204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1436);
      END_STATE();
    case 1205:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1437);
      END_STATE();
    case 1206:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1438);
      END_STATE();
    case 1207:
      if (lookahead == '-') ADVANCE(1439);
      END_STATE();
    case 1208:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1440);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(sym__DEFAULT);
      END_STATE();
    case 1210:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1441);
      END_STATE();
    case 1211:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1442);
      END_STATE();
    case 1212:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1443);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(sym__DISPLAY);
      END_STATE();
    case 1214:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1444);
      END_STATE();
    case 1215:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1445);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(sym__DYNAMIC);
      END_STATE();
    case 1217:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1446);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(sym__END_ADD);
      END_STATE();
    case 1219:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1447);
      END_STATE();
    case 1220:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1448);
      END_STATE();
    case 1221:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1449);
      END_STATE();
    case 1222:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1450);
      END_STATE();
    case 1223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1451);
      END_STATE();
    case 1224:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1452);
      END_STATE();
    case 1225:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1453);
      END_STATE();
    case 1226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1454);
      END_STATE();
    case 1227:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1455);
      END_STATE();
    case 1228:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1456);
      END_STATE();
    case 1229:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1457);
      END_STATE();
    case 1230:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1458);
      END_STATE();
    case 1231:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1459);
      END_STATE();
    case 1232:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1460);
      END_STATE();
    case 1233:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1461);
      END_STATE();
    case 1234:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1462);
      END_STATE();
    case 1235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1463);
      END_STATE();
    case 1236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1464);
      END_STATE();
    case 1237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1465);
      END_STATE();
    case 1238:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1466);
      END_STATE();
    case 1239:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1467);
      END_STATE();
    case 1240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1468);
      END_STATE();
    case 1241:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1469);
      END_STATE();
    case 1242:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1470);
      END_STATE();
    case 1243:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1471);
      END_STATE();
    case 1244:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1472);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(sym__FILE_ID);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(sym__FOOTING);
      END_STATE();
    case 1247:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1473);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(sym__FOREVER);
      END_STATE();
    case 1249:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1474);
      END_STATE();
    case 1250:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1475);
      END_STATE();
    case 1251:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1476);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(sym__GREATER);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(sym__HEADING);
      END_STATE();
    case 1254:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1477);
      END_STATE();
    case 1255:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1478);
      END_STATE();
    case 1256:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1479);
      END_STATE();
    case 1257:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1480);
      END_STATE();
    case 1258:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1481);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(sym__INDEXED);
      END_STATE();
    case 1260:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1482);
      END_STATE();
    case 1261:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1483);
      END_STATE();
    case 1262:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1484);
      END_STATE();
    case 1263:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1485);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(sym__INSPECT);
      END_STATE();
    case 1265:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1486);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(sym__INVALID);
      if (lookahead == '-') ADVANCE(1487);
      END_STATE();
    case 1267:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1488);
      END_STATE();
    case 1268:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1489);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(sym__LEADING);
      END_STATE();
    case 1270:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1490);
      END_STATE();
    case 1271:
      if (lookahead == '-') ADVANCE(1491);
      END_STATE();
    case 1272:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1492);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(sym__LINKAGE);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(sym__LITERAL);
      END_STATE();
    case 1275:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1493);
      END_STATE();
    case 1276:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1494);
      END_STATE();
    case 1277:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1495);
      END_STATE();
    case 1278:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1496);
      END_STATE();
    case 1279:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1497);
      END_STATE();
    case 1280:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1498);
      END_STATE();
    case 1281:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1499);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1500);
      END_STATE();
    case 1282:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1501);
      END_STATE();
    case 1283:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1502);
      END_STATE();
    case 1284:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1503);
      END_STATE();
    case 1285:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1504);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(sym__NOMINAL);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(sym__NOT_END);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(sym__NOT_EOP);
      END_STATE();
    case 1289:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1505);
      END_STATE();
    case 1290:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1506);
      END_STATE();
    case 1291:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1507);
      END_STATE();
    case 1292:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1508);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(sym__NUMBERS);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(sym__NUMERIC);
      if (lookahead == '-') ADVANCE(1509);
      END_STATE();
    case 1295:
      if (lookahead == '-') ADVANCE(1510);
      END_STATE();
    case 1296:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1511);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(sym__OMITTED);
      END_STATE();
    case 1298:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1512);
      END_STATE();
    case 1299:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1513);
      END_STATE();
    case 1300:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1514);
      END_STATE();
    case 1301:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1515);
      END_STATE();
    case 1302:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1516);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(sym__PADDING);
      END_STATE();
    case 1304:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1517);
      END_STATE();
    case 1305:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1518);
      END_STATE();
    case 1306:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1519);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(sym__PERFORM);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(sym__PICTURE);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(sym__POINTER);
      END_STATE();
    case 1310:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1520);
      END_STATE();
    case 1311:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1521);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(sym__PRESENT);
      END_STATE();
    case 1313:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1522);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(sym__PRINTER);
      END_STATE();
    case 1315:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1523);
      END_STATE();
    case 1316:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1524);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(sym__PROCEED);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(sym__PROGRAM);
      if (lookahead == '-') ADVANCE(1525);
      END_STATE();
    case 1319:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1526);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(sym__RECORDS);
      END_STATE();
    case 1321:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1527);
      END_STATE();
    case 1322:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1528);
      END_STATE();
    case 1323:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1529);
      END_STATE();
    case 1324:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1530);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(sym__RELEASE);
      END_STATE();
    case 1326:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1531);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(sym__REMOVAL);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(sym__RENAMES);
      END_STATE();
    case 1329:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1532);
      END_STATE();
    case 1330:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1533);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1534);
      END_STATE();
    case 1331:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1535);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(sym__REPORTS);
      END_STATE();
    case 1333:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1536);
      END_STATE();
    case 1334:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1537);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(sym__RESERVE);
      END_STATE();
    case 1336:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1538);
      END_STATE();
    case 1337:
      if (lookahead == '-') ADVANCE(1539);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(sym__REWRITE);
      END_STATE();
    case 1339:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1540);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(sym__ROUNDED);
      END_STATE();
    case 1341:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1541);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(sym__SECTION);
      END_STATE();
    case 1343:
      if (lookahead == '-') ADVANCE(1542);
      END_STATE();
    case 1344:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1543);
      END_STATE();
    case 1345:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1544);
      END_STATE();
    case 1346:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1545);
      END_STATE();
    case 1347:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1546);
      END_STATE();
    case 1348:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1547);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(sym__SHARING);
      END_STATE();
    case 1350:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1548);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1549);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1550);
      END_STATE();
    case 1351:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1551);
      END_STATE();
    case 1352:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1552);
      END_STATE();
    case 1353:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1553);
      END_STATE();
    case 1354:
      if (lookahead == '-') ADVANCE(1554);
      END_STATE();
    case 1355:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1555);
      END_STATE();
    case 1356:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1556);
      END_STATE();
    case 1357:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1557);
      END_STATE();
    case 1358:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1558);
      END_STATE();
    case 1359:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1559);
      END_STATE();
    case 1360:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1560);
      END_STATE();
    case 1361:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1561);
      END_STATE();
    case 1362:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1562);
      END_STATE();
    case 1363:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1563);
      END_STATE();
    case 1364:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1564);
      END_STATE();
    case 1365:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1565);
      END_STATE();
    case 1366:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1566);
      END_STATE();
    case 1367:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1567);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(sym__VARYING);
      END_STATE();
    case 1369:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1568);
      END_STATE();
    case 1370:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1569);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(sym__TALLYING);
      END_STATE();
    case 1372:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1570);
      END_STATE();
    case 1373:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1571);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(sym__TOK_FILE);
      END_STATE();
    case 1375:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1572);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(sym__TOK_NULL);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(sym__TOK_TRUE);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(sym__TRAILING);
      END_STATE();
    case 1379:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1573);
      END_STATE();
    case 1380:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1574);
      END_STATE();
    case 1381:
      if (lookahead == '_') ADVANCE(1575);
      END_STATE();
    case 1382:
      if (lookahead == 'e') ADVANCE(1576);
      END_STATE();
    case 1383:
      if (lookahead == 'n') ADVANCE(1577);
      END_STATE();
    case 1384:
      if (lookahead == 's') ADVANCE(1578);
      END_STATE();
    case 1385:
      if (lookahead == '_') ADVANCE(1579);
      END_STATE();
    case 1386:
      if (lookahead == 'i') ADVANCE(1580);
      END_STATE();
    case 1387:
      if (lookahead == 'o') ADVANCE(1581);
      END_STATE();
    case 1388:
      if (lookahead == 'e') ADVANCE(1582);
      END_STATE();
    case 1389:
      if (lookahead == 'c') ADVANCE(1583);
      END_STATE();
    case 1390:
      if (lookahead == 'b') ADVANCE(1584);
      END_STATE();
    case 1391:
      if (lookahead == 't') ADVANCE(1585);
      END_STATE();
    case 1392:
      if (lookahead == 't') ADVANCE(1586);
      END_STATE();
    case 1393:
      if (lookahead == 'u') ADVANCE(1587);
      END_STATE();
    case 1394:
      if (lookahead == 'a') ADVANCE(1588);
      END_STATE();
    case 1395:
      if (lookahead == 'n') ADVANCE(1589);
      END_STATE();
    case 1396:
      if (lookahead == 'c') ADVANCE(1590);
      END_STATE();
    case 1397:
      if (lookahead == 'g') ADVANCE(1591);
      END_STATE();
    case 1398:
      if (lookahead == 'u') ADVANCE(1592);
      END_STATE();
    case 1399:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1593);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(sym__ALLOCATE);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(sym__ALPHABET);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1594);
      END_STATE();
    case 1402:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1595);
      END_STATE();
    case 1403:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1596);
      END_STATE();
    case 1404:
      if (lookahead == '-') ADVANCE(1597);
      END_STATE();
    case 1405:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1598);
      END_STATE();
    case 1406:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1599);
      END_STATE();
    case 1407:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1600);
      END_STATE();
    case 1408:
      if (lookahead == '-') ADVANCE(1601);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1602);
      END_STATE();
    case 1409:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1603);
      END_STATE();
    case 1410:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1604);
      END_STATE();
    case 1411:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1605);
      END_STATE();
    case 1412:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1606);
      END_STATE();
    case 1413:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1607);
      END_STATE();
    case 1414:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1608);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(sym__CHAINING);
      END_STATE();
    case 1416:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1609);
      END_STATE();
    case 1417:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1610);
      END_STATE();
    case 1418:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1611);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(sym__CODE_SET);
      END_STATE();
    case 1420:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1612);
      END_STATE();
    case 1421:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1613);
      END_STATE();
    case 1422:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1614);
      END_STATE();
    case 1423:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1615);
      END_STATE();
    case 1424:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1616);
      END_STATE();
    case 1425:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1617);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(sym__CONSTANT);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(sym__CONTAINS);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(sym__CONTINUE);
      END_STATE();
    case 1429:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1618);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1619);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(sym__CONTROLS);
      END_STATE();
    case 1431:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1620);
      END_STATE();
    case 1432:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1621);
      END_STATE();
    case 1433:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1622);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(sym__CURRENCY);
      END_STATE();
    case 1435:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1623);
      END_STATE();
    case 1436:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1624);
      END_STATE();
    case 1437:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1625);
      END_STATE();
    case 1438:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1626);
      END_STATE();
    case 1439:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1627);
      END_STATE();
    case 1440:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1628);
      END_STATE();
    case 1441:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1629);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1630);
      END_STATE();
    case 1442:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1631);
      END_STATE();
    case 1443:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1632);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(sym__DIVISION);
      END_STATE();
    case 1445:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1633);
      END_STATE();
    case 1446:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1634);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym__END_CALL);
      END_STATE();
    case 1448:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1635);
      END_STATE();
    case 1449:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1636);
      END_STATE();
    case 1450:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1637);
      END_STATE();
    case 1451:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1638);
      END_STATE();
    case 1452:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1639);
      END_STATE();
    case 1453:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1640);
      END_STATE();
    case 1454:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1641);
      END_STATE();
    case 1455:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1642);
      END_STATE();
    case 1456:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1643);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(sym__END_READ);
      END_STATE();
    case 1458:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1644);
      END_STATE();
    case 1459:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1645);
      END_STATE();
    case 1460:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1646);
      END_STATE();
    case 1461:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1647);
      END_STATE();
    case 1462:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1648);
      END_STATE();
    case 1463:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1649);
      END_STATE();
    case 1464:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1650);
      END_STATE();
    case 1465:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1651);
      END_STATE();
    case 1466:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1652);
      END_STATE();
    case 1467:
      ACCEPT_TOKEN(sym__EVALUATE);
      END_STATE();
    case 1468:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1653);
      END_STATE();
    case 1469:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1654);
      END_STATE();
    case 1470:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1655);
      END_STATE();
    case 1471:
      ACCEPT_TOKEN(sym__EXTERNAL);
      END_STATE();
    case 1472:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1656);
      END_STATE();
    case 1473:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1657);
      END_STATE();
    case 1474:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1658);
      END_STATE();
    case 1475:
      ACCEPT_TOKEN(sym__FUNCTION);
      if (lookahead == '-') ADVANCE(1659);
      END_STATE();
    case 1476:
      ACCEPT_TOKEN(sym__GENERATE);
      END_STATE();
    case 1477:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1660);
      END_STATE();
    case 1478:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1661);
      END_STATE();
    case 1479:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1662);
      END_STATE();
    case 1480:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1663);
      END_STATE();
    case 1481:
      ACCEPT_TOKEN(sym__IGNORING);
      END_STATE();
    case 1482:
      ACCEPT_TOKEN(sym__INDICATE);
      END_STATE();
    case 1483:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1664);
      END_STATE();
    case 1484:
      ACCEPT_TOKEN(sym__INITIATE);
      END_STATE();
    case 1485:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1665);
      END_STATE();
    case 1486:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1666);
      END_STATE();
    case 1487:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1667);
      END_STATE();
    case 1488:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1668);
      END_STATE();
    case 1489:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1669);
      END_STATE();
    case 1490:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1670);
      END_STATE();
    case 1491:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1671);
      END_STATE();
    case 1492:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1672);
      END_STATE();
    case 1493:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1673);
      END_STATE();
    case 1494:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1674);
      END_STATE();
    case 1495:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1675);
      END_STATE();
    case 1496:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1676);
      END_STATE();
    case 1497:
      ACCEPT_TOKEN(sym__LOWLIGHT);
      END_STATE();
    case 1498:
      if (lookahead == '-') ADVANCE(1677);
      END_STATE();
    case 1499:
      ACCEPT_TOKEN(sym__MULTIPLE);
      END_STATE();
    case 1500:
      ACCEPT_TOKEN(sym__MULTIPLY);
      END_STATE();
    case 1501:
      ACCEPT_TOKEN(sym__NATIONAL);
      if (lookahead == '-') ADVANCE(1678);
      END_STATE();
    case 1502:
      ACCEPT_TOKEN(sym__NEGATIVE);
      END_STATE();
    case 1503:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1679);
      END_STATE();
    case 1504:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1680);
      END_STATE();
    case 1505:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1681);
      END_STATE();
    case 1506:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1682);
      END_STATE();
    case 1507:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1683);
      END_STATE();
    case 1508:
      if (lookahead == '-') ADVANCE(1684);
      END_STATE();
    case 1509:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1685);
      END_STATE();
    case 1510:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1686);
      END_STATE();
    case 1511:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1687);
      END_STATE();
    case 1512:
      ACCEPT_TOKEN(sym__OPTIONAL);
      END_STATE();
    case 1513:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1688);
      END_STATE();
    case 1514:
      ACCEPT_TOKEN(sym__OVERFLOW);
      END_STATE();
    case 1515:
      ACCEPT_TOKEN(sym__OVERLINE);
      END_STATE();
    case 1516:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1689);
      END_STATE();
    case 1517:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1690);
      END_STATE();
    case 1518:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1691);
      END_STATE();
    case 1519:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1692);
      END_STATE();
    case 1520:
      ACCEPT_TOKEN(sym__POSITION);
      END_STATE();
    case 1521:
      ACCEPT_TOKEN(sym__POSITIVE);
      END_STATE();
    case 1522:
      ACCEPT_TOKEN(sym__PREVIOUS);
      END_STATE();
    case 1523:
      ACCEPT_TOKEN(sym__PRINTING);
      END_STATE();
    case 1524:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1693);
      END_STATE();
    case 1525:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1694);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1695);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1696);
      END_STATE();
    case 1526:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1697);
      END_STATE();
    case 1527:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1698);
      END_STATE();
    case 1528:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1699);
      END_STATE();
    case 1529:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1700);
      END_STATE();
    case 1530:
      ACCEPT_TOKEN(sym__RELATIVE);
      END_STATE();
    case 1531:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1701);
      END_STATE();
    case 1532:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1702);
      END_STATE();
    case 1533:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1703);
      END_STATE();
    case 1534:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1704);
      END_STATE();
    case 1535:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1705);
      END_STATE();
    case 1536:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1706);
      END_STATE();
    case 1537:
      ACCEPT_TOKEN(sym__REQUIRED);
      END_STATE();
    case 1538:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1707);
      END_STATE();
    case 1539:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1708);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1709);
      END_STATE();
    case 1540:
      ACCEPT_TOKEN(sym__ROLLBACK);
      END_STATE();
    case 1541:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1710);
      END_STATE();
    case 1542:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1711);
      END_STATE();
    case 1543:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1712);
      END_STATE();
    case 1544:
      ACCEPT_TOKEN(sym__SENTENCE);
      END_STATE();
    case 1545:
      ACCEPT_TOKEN(sym__SEPARATE);
      END_STATE();
    case 1546:
      ACCEPT_TOKEN(sym__SEQUENCE);
      END_STATE();
    case 1547:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1713);
      END_STATE();
    case 1548:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1714);
      END_STATE();
    case 1549:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1715);
      END_STATE();
    case 1550:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1716);
      END_STATE();
    case 1551:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1717);
      END_STATE();
    case 1552:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1718);
      END_STATE();
    case 1553:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1719);
      END_STATE();
    case 1554:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1720);
      END_STATE();
    case 1555:
      ACCEPT_TOKEN(sym__STANDARD);
      if (lookahead == '-') ADVANCE(1721);
      END_STATE();
    case 1556:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1722);
      END_STATE();
    case 1557:
      ACCEPT_TOKEN(sym__SUBTRACT);
      END_STATE();
    case 1558:
      ACCEPT_TOKEN(sym__SUPPRESS);
      END_STATE();
    case 1559:
      ACCEPT_TOKEN(sym__SYMBOLIC);
      END_STATE();
    case 1560:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1723);
      END_STATE();
    case 1561:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1724);
      END_STATE();
    case 1562:
      ACCEPT_TOKEN(sym__UNSIGNED);
      if (lookahead == '-') ADVANCE(1725);
      END_STATE();
    case 1563:
      ACCEPT_TOKEN(sym__UNSTRING);
      END_STATE();
    case 1564:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1726);
      END_STATE();
    case 1565:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1727);
      END_STATE();
    case 1566:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1728);
      END_STATE();
    case 1567:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1729);
      END_STATE();
    case 1568:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1730);
      END_STATE();
    case 1569:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1731);
      END_STATE();
    case 1570:
      ACCEPT_TOKEN(sym__TERMINATE);
      END_STATE();
    case 1571:
      ACCEPT_TOKEN(sym__TOK_FALSE);
      END_STATE();
    case 1572:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1732);
      END_STATE();
    case 1573:
      ACCEPT_TOKEN(sym__TRANSFORM);
      END_STATE();
    case 1574:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1733);
      END_STATE();
    case 1575:
      if (lookahead == 'l') ADVANCE(1734);
      END_STATE();
    case 1576:
      if (lookahead == 'd') ADVANCE(1735);
      END_STATE();
    case 1577:
      if (lookahead == 'k') ADVANCE(1736);
      END_STATE();
    case 1578:
      if (lookahead == 't') ADVANCE(1737);
      END_STATE();
    case 1579:
      if (lookahead == 'p') ADVANCE(1738);
      END_STATE();
    case 1580:
      if (lookahead == 'r') ADVANCE(1739);
      END_STATE();
    case 1581:
      if (lookahead == 'r') ADVANCE(1740);
      END_STATE();
    case 1582:
      if (lookahead == 'r') ADVANCE(1741);
      END_STATE();
    case 1583:
      if (lookahead == 't') ADVANCE(1742);
      END_STATE();
    case 1584:
      if (lookahead == 'a') ADVANCE(1743);
      END_STATE();
    case 1585:
      if (lookahead == 'i') ADVANCE(1744);
      END_STATE();
    case 1586:
      if (lookahead == 'e') ADVANCE(1745);
      END_STATE();
    case 1587:
      if (lookahead == 'r') ADVANCE(1746);
      END_STATE();
    case 1588:
      if (lookahead == 'm') ADVANCE(1747);
      END_STATE();
    case 1589:
      if (lookahead == '_') ADVANCE(1748);
      END_STATE();
    case 1590:
      if (lookahead == 'h') ADVANCE(1749);
      END_STATE();
    case 1591:
      if (lookahead == 'e') ADVANCE(1750);
      END_STATE();
    case 1592:
      if (lookahead == 'e') ADVANCE(1751);
      END_STATE();
    case 1593:
      ACCEPT_TOKEN(sym__ADVANCING);
      END_STATE();
    case 1594:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1752);
      END_STATE();
    case 1595:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1753);
      END_STATE();
    case 1596:
      ACCEPT_TOKEN(sym__ALTERNATE);
      END_STATE();
    case 1597:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1754);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1755);
      END_STATE();
    case 1598:
      ACCEPT_TOKEN(sym__ASCENDING);
      END_STATE();
    case 1599:
      ACCEPT_TOKEN(sym__AUTOMATIC);
      END_STATE();
    case 1600:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1756);
      END_STATE();
    case 1601:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1757);
      END_STATE();
    case 1602:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1758);
      END_STATE();
    case 1603:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1759);
      END_STATE();
    case 1604:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1760);
      END_STATE();
    case 1605:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1761);
      END_STATE();
    case 1606:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1762);
      END_STATE();
    case 1607:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1763);
      END_STATE();
    case 1608:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1764);
      END_STATE();
    case 1609:
      ACCEPT_TOKEN(sym__CHARACTER);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1765);
      END_STATE();
    case 1610:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1766);
      END_STATE();
    case 1611:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1767);
      END_STATE();
    case 1612:
      ACCEPT_TOKEN(sym__COLLATING);
      END_STATE();
    case 1613:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1768);
      END_STATE();
    case 1614:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1769);
      END_STATE();
    case 1615:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1770);
      END_STATE();
    case 1616:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1771);
      END_STATE();
    case 1617:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1772);
      END_STATE();
    case 1618:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1773);
      END_STATE();
    case 1619:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1774);
      END_STATE();
    case 1620:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1775);
      END_STATE();
    case 1621:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1776);
      END_STATE();
    case 1622:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1777);
      END_STATE();
    case 1623:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1778);
      END_STATE();
    case 1624:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1779);
      END_STATE();
    case 1625:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1780);
      END_STATE();
    case 1626:
      ACCEPT_TOKEN(sym__DEBUGGING);
      END_STATE();
    case 1627:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1781);
      END_STATE();
    case 1628:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1782);
      END_STATE();
    case 1629:
      ACCEPT_TOKEN(sym__DELIMITED);
      END_STATE();
    case 1630:
      ACCEPT_TOKEN(sym__DELIMITER);
      END_STATE();
    case 1631:
      ACCEPT_TOKEN(sym__DEPENDING);
      END_STATE();
    case 1632:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1783);
      END_STATE();
    case 1633:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1784);
      END_STATE();
    case 1634:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1785);
      END_STATE();
    case 1635:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1786);
      END_STATE();
    case 1636:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1787);
      END_STATE();
    case 1637:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1788);
      END_STATE();
    case 1638:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1789);
      END_STATE();
    case 1639:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1790);
      END_STATE();
    case 1640:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1791);
      END_STATE();
    case 1641:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1792);
      END_STATE();
    case 1642:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1793);
      END_STATE();
    case 1643:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1794);
      END_STATE();
    case 1644:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1795);
      END_STATE();
    case 1645:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1796);
      END_STATE();
    case 1646:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1797);
      END_STATE();
    case 1647:
      ACCEPT_TOKEN(sym__END_START);
      END_STATE();
    case 1648:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1798);
      END_STATE();
    case 1649:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1799);
      END_STATE();
    case 1650:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1800);
      END_STATE();
    case 1651:
      ACCEPT_TOKEN(sym__END_WRITE);
      END_STATE();
    case 1652:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1801);
      END_STATE();
    case 1653:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1802);
      END_STATE();
    case 1654:
      ACCEPT_TOKEN(sym__EXCEPTION);
      END_STATE();
    case 1655:
      ACCEPT_TOKEN(sym__EXCLUSIVE);
      END_STATE();
    case 1656:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1803);
      END_STATE();
    case 1657:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1804);
      END_STATE();
    case 1658:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1805);
      END_STATE();
    case 1659:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1806);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1807);
      END_STATE();
    case 1660:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1808);
      END_STATE();
    case 1661:
      ACCEPT_TOKEN(sym__HIGHLIGHT);
      END_STATE();
    case 1662:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1809);
      END_STATE();
    case 1663:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1810);
      END_STATE();
    case 1664:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1811);
      END_STATE();
    case 1665:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1812);
      END_STATE();
    case 1666:
      ACCEPT_TOKEN(sym__INTRINSIC);
      END_STATE();
    case 1667:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1813);
      END_STATE();
    case 1668:
      ACCEPT_TOKEN(sym__JUSTIFIED);
      END_STATE();
    case 1669:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1814);
      END_STATE();
    case 1670:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1815);
      END_STATE();
    case 1671:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1816);
      END_STATE();
    case 1672:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1817);
      END_STATE();
    case 1673:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1818);
      END_STATE();
    case 1674:
      if (lookahead == '-') ADVANCE(1819);
      END_STATE();
    case 1675:
      ACCEPT_TOKEN(sym__LOW_VALUE);
      END_STATE();
    case 1676:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1820);
      END_STATE();
    case 1677:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1821);
      END_STATE();
    case 1678:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1822);
      END_STATE();
    case 1679:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1823);
      END_STATE();
    case 1680:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1824);
      END_STATE();
    case 1681:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1825);
      END_STATE();
    case 1682:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1826);
      END_STATE();
    case 1683:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1827);
      END_STATE();
    case 1684:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1828);
      END_STATE();
    case 1685:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1829);
      END_STATE();
    case 1686:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1830);
      END_STATE();
    case 1687:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1831);
      END_STATE();
    case 1688:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1832);
      END_STATE();
    case 1689:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1833);
      END_STATE();
    case 1690:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1834);
      END_STATE();
    case 1691:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1835);
      END_STATE();
    case 1692:
      ACCEPT_TOKEN(sym__PARAGRAPH);
      END_STATE();
    case 1693:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1836);
      END_STATE();
    case 1694:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1837);
      END_STATE();
    case 1695:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1838);
      END_STATE();
    case 1696:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1839);
      END_STATE();
    case 1697:
      ACCEPT_TOKEN(sym__RECORDING);
      END_STATE();
    case 1698:
      ACCEPT_TOKEN(sym__RECURSIVE);
      END_STATE();
    case 1699:
      ACCEPT_TOKEN(sym__REDEFINES);
      END_STATE();
    case 1700:
      ACCEPT_TOKEN(sym__REFERENCE);
      END_STATE();
    case 1701:
      ACCEPT_TOKEN(sym__REMAINDER);
      END_STATE();
    case 1702:
      ACCEPT_TOKEN(sym__REPLACING);
      END_STATE();
    case 1703:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1840);
      END_STATE();
    case 1704:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1841);
      END_STATE();
    case 1705:
      ACCEPT_TOKEN(sym__REPORTING);
      END_STATE();
    case 1706:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1842);
      END_STATE();
    case 1707:
      ACCEPT_TOKEN(sym__RETURNING);
      END_STATE();
    case 1708:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1843);
      END_STATE();
    case 1709:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1844);
      END_STATE();
    case 1710:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1845);
      END_STATE();
    case 1711:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1846);
      END_STATE();
    case 1712:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1847);
      END_STATE();
    case 1713:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1848);
      END_STATE();
    case 1714:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1849);
      END_STATE();
    case 1715:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1850);
      END_STATE();
    case 1716:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1851);
      END_STATE();
    case 1717:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1852);
      END_STATE();
    case 1718:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1853);
      END_STATE();
    case 1719:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1854);
      END_STATE();
    case 1720:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1855);
      END_STATE();
    case 1721:
      if (lookahead == '1') ADVANCE(1856);
      if (lookahead == '2') ADVANCE(1857);
      END_STATE();
    case 1722:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1858);
      END_STATE();
    case 1723:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(1859);
      END_STATE();
    case 1724:
      ACCEPT_TOKEN(sym__UNDERLINE);
      END_STATE();
    case 1725:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1860);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1861);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1862);
      END_STATE();
    case 1726:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1863);
      END_STATE();
    case 1727:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1864);
      END_STATE();
    case 1728:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1865);
      END_STATE();
    case 1729:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1866);
      END_STATE();
    case 1730:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1867);
      END_STATE();
    case 1731:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1868);
      END_STATE();
    case 1732:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1869);
      END_STATE();
    case 1733:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1870);
      END_STATE();
    case 1734:
      if (lookahead == 'e') ADVANCE(1871);
      END_STATE();
    case 1735:
      if (lookahead == '_') ADVANCE(1872);
      END_STATE();
    case 1736:
      if (lookahead == '_') ADVANCE(1873);
      END_STATE();
    case 1737:
      if (lookahead == 'a') ADVANCE(1874);
      END_STATE();
    case 1738:
      if (lookahead == 'r') ADVANCE(1875);
      END_STATE();
    case 1739:
      if (lookahead == 'o') ADVANCE(1876);
      END_STATE();
    case 1740:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    case 1741:
      if (lookahead == 'n') ADVANCE(1877);
      END_STATE();
    case 1742:
      if (lookahead == 'i') ADVANCE(1878);
      END_STATE();
    case 1743:
      if (lookahead == 'l') ADVANCE(1879);
      END_STATE();
    case 1744:
      if (lookahead == 'f') ADVANCE(1880);
      END_STATE();
    case 1745:
      if (lookahead == 'd') ADVANCE(1881);
      END_STATE();
    case 1746:
      if (lookahead == 's') ADVANCE(1882);
      END_STATE();
    case 1747:
      if (lookahead == 'e') ADVANCE(1883);
      END_STATE();
    case 1748:
      if (lookahead == 'c') ADVANCE(1884);
      END_STATE();
    case 1749:
      if (lookahead == 'r') ADVANCE(1885);
      END_STATE();
    case 1750:
      if (lookahead == '_') ADVANCE(1886);
      END_STATE();
    case 1751:
      if (lookahead == '_') ADVANCE(1887);
      END_STATE();
    case 1752:
      ACCEPT_TOKEN(sym__ALPHABETIC);
      if (lookahead == '-') ADVANCE(1888);
      END_STATE();
    case 1753:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1889);
      END_STATE();
    case 1754:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1890);
      END_STATE();
    case 1755:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1891);
      END_STATE();
    case 1756:
      if (lookahead == '-') ADVANCE(1892);
      END_STATE();
    case 1757:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1893);
      END_STATE();
    case 1758:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1894);
      END_STATE();
    case 1759:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1895);
      END_STATE();
    case 1760:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1896);
      END_STATE();
    case 1761:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1897);
      END_STATE();
    case 1762:
      ACCEPT_TOKEN(sym__BLANK_LINE);
      END_STATE();
    case 1763:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1898);
      END_STATE();
    case 1764:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1899);
      END_STATE();
    case 1765:
      ACCEPT_TOKEN(sym__CHARACTERS);
      END_STATE();
    case 1766:
      ACCEPT_TOKEN(sym__CLASS_NAME);
      END_STATE();
    case 1767:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1900);
      END_STATE();
    case 1768:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1901);
      END_STATE();
    case 1769:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1902);
      END_STATE();
    case 1770:
      if (lookahead == '-') ADVANCE(1903);
      END_STATE();
    case 1771:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1904);
      END_STATE();
    case 1772:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1905);
      END_STATE();
    case 1773:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1906);
      END_STATE();
    case 1774:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1907);
      END_STATE();
    case 1775:
      ACCEPT_TOKEN(sym__CONVERTING);
      END_STATE();
    case 1776:
      ACCEPT_TOKEN(sym__CORE_INDEX);
      END_STATE();
    case 1777:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1908);
      END_STATE();
    case 1778:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1909);
      END_STATE();
    case 1779:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1910);
      END_STATE();
    case 1780:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(1911);
      END_STATE();
    case 1781:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1912);
      END_STATE();
    case 1782:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1913);
      END_STATE();
    case 1783:
      ACCEPT_TOKEN(sym__DESCENDING);
      END_STATE();
    case 1784:
      ACCEPT_TOKEN(sym__DUPLICATES);
      END_STATE();
    case 1785:
      ACCEPT_TOKEN(sym__END_ACCEPT);
      END_STATE();
    case 1786:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1914);
      END_STATE();
    case 1787:
      ACCEPT_TOKEN(sym__END_DELETE);
      END_STATE();
    case 1788:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1915);
      END_STATE();
    case 1789:
      ACCEPT_TOKEN(sym__END_DIVIDE);
      END_STATE();
    case 1790:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1916);
      END_STATE();
    case 1791:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1917);
      END_STATE();
    case 1792:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1918);
      END_STATE();
    case 1793:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1919);
      END_STATE();
    case 1794:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1920);
      END_STATE();
    case 1795:
      ACCEPT_TOKEN(sym__END_RETURN);
      END_STATE();
    case 1796:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1921);
      END_STATE();
    case 1797:
      ACCEPT_TOKEN(sym__END_SEARCH);
      END_STATE();
    case 1798:
      ACCEPT_TOKEN(sym__END_STRING);
      END_STATE();
    case 1799:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1922);
      END_STATE();
    case 1800:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1923);
      END_STATE();
    case 1801:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1924);
      END_STATE();
    case 1802:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1925);
      END_STATE();
    case 1803:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1926);
      END_STATE();
    case 1804:
      if (lookahead == '-') ADVANCE(1927);
      END_STATE();
    case 1805:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1928);
      END_STATE();
    case 1806:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1929);
      END_STATE();
    case 1807:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1930);
      END_STATE();
    case 1808:
      ACCEPT_TOKEN(sym__HIGH_VALUE);
      END_STATE();
    case 1809:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1931);
      END_STATE();
    case 1810:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1932);
      END_STATE();
    case 1811:
      ACCEPT_TOKEN(sym__INITIALIZE);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1933);
      END_STATE();
    case 1812:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1934);
      END_STATE();
    case 1813:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1935);
      END_STATE();
    case 1814:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1936);
      END_STATE();
    case 1815:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1937);
      END_STATE();
    case 1816:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1938);
      END_STATE();
    case 1817:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1939);
      END_STATE();
    case 1818:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1940);
      END_STATE();
    case 1819:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1941);
      END_STATE();
    case 1820:
      if (lookahead == '-') ADVANCE(1942);
      END_STATE();
    case 1821:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1943);
      END_STATE();
    case 1822:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1944);
      END_STATE();
    case 1823:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1945);
      END_STATE();
    case 1824:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1946);
      END_STATE();
    case 1825:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1947);
      END_STATE();
    case 1826:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1948);
      END_STATE();
    case 1827:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1949);
      END_STATE();
    case 1828:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1950);
      END_STATE();
    case 1829:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1951);
      END_STATE();
    case 1830:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1952);
      END_STATE();
    case 1831:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1953);
      END_STATE();
    case 1832:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1954);
      END_STATE();
    case 1833:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1955);
      END_STATE();
    case 1834:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1956);
      END_STATE();
    case 1835:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1957);
      END_STATE();
    case 1836:
      ACCEPT_TOKEN(sym__PROCEDURES);
      END_STATE();
    case 1837:
      ACCEPT_TOKEN(sym__PROGRAM_ID);
      END_STATE();
    case 1838:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1958);
      END_STATE();
    case 1839:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1959);
      END_STATE();
    case 1840:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1960);
      END_STATE();
    case 1841:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1961);
      END_STATE();
    case 1842:
      ACCEPT_TOKEN(sym__REPOSITORY);
      END_STATE();
    case 1843:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1962);
      END_STATE();
    case 1844:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1963);
      END_STATE();
    case 1845:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1964);
      END_STATE();
    case 1846:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1965);
      END_STATE();
    case 1847:
      ACCEPT_TOKEN(sym__SEMI_COLON);
      END_STATE();
    case 1848:
      ACCEPT_TOKEN(sym__SEQUENTIAL);
      END_STATE();
    case 1849:
      ACCEPT_TOKEN(sym__SIGNED_INT);
      END_STATE();
    case 1850:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1966);
      END_STATE();
    case 1851:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1967);
      END_STATE();
    case 1852:
      ACCEPT_TOKEN(sym__SIZE_ERROR);
      END_STATE();
    case 1853:
      ACCEPT_TOKEN(sym__SORT_MERGE);
      END_STATE();
    case 1854:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1968);
      END_STATE();
    case 1855:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1969);
      END_STATE();
    case 1856:
      ACCEPT_TOKEN(sym__STANDARD_1);
      END_STATE();
    case 1857:
      ACCEPT_TOKEN(sym__STANDARD_2);
      END_STATE();
    case 1858:
      if (lookahead == '-') ADVANCE(1970);
      END_STATE();
    case 1859:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1971);
      END_STATE();
    case 1860:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1972);
      END_STATE();
    case 1861:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1973);
      END_STATE();
    case 1862:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1974);
      END_STATE();
    case 1863:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1975);
      END_STATE();
    case 1864:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1976);
      END_STATE();
    case 1865:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1977);
      END_STATE();
    case 1866:
      if (lookahead == '-') ADVANCE(1978);
      END_STATE();
    case 1867:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1979);
      END_STATE();
    case 1868:
      ACCEPT_TOKEN(sym__WHEN_OTHER);
      END_STATE();
    case 1869:
      ACCEPT_TOKEN(sym__TOK_INITIAL);
      END_STATE();
    case 1870:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1980);
      END_STATE();
    case 1871:
      if (lookahead == 'n') ADVANCE(1981);
      END_STATE();
    case 1872:
      if (lookahead == 'c') ADVANCE(1982);
      END_STATE();
    case 1873:
      if (lookahead == 'c') ADVANCE(1983);
      END_STATE();
    case 1874:
      if (lookahead == 'n') ADVANCE(1984);
      END_STATE();
    case 1875:
      if (lookahead == 'o') ADVANCE(1985);
      END_STATE();
    case 1876:
      if (lookahead == 'n') ADVANCE(1986);
      END_STATE();
    case 1877:
      if (lookahead == 'a') ADVANCE(1987);
      END_STATE();
    case 1878:
      if (lookahead == 'o') ADVANCE(1988);
      END_STATE();
    case 1879:
      if (lookahead == '_') ADVANCE(1989);
      END_STATE();
    case 1880:
      if (lookahead == 'i') ADVANCE(1990);
      END_STATE();
    case 1881:
      if (lookahead == '_') ADVANCE(1991);
      END_STATE();
    case 1882:
      if (lookahead == '_') ADVANCE(1992);
      END_STATE();
    case 1883:
      if (lookahead == 's') ADVANCE(1993);
      END_STATE();
    case 1884:
      if (lookahead == 'l') ADVANCE(1994);
      END_STATE();
    case 1885:
      if (lookahead == 'o') ADVANCE(1995);
      END_STATE();
    case 1886:
      if (lookahead == 'c') ADVANCE(1996);
      END_STATE();
    case 1887:
      if (lookahead == 'c') ADVANCE(1997);
      END_STATE();
    case 1888:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1998);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1999);
      END_STATE();
    case 1889:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2000);
      END_STATE();
    case 1890:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2001);
      END_STATE();
    case 1891:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2002);
      END_STATE();
    case 1892:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2003);
      END_STATE();
    case 1893:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2004);
      END_STATE();
    case 1894:
      ACCEPT_TOKEN(sym__BINARY_CHAR);
      END_STATE();
    case 1895:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2005);
      END_STATE();
    case 1896:
      ACCEPT_TOKEN(sym__BINARY_LONG);
      END_STATE();
    case 1897:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2006);
      END_STATE();
    case 1898:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2007);
      END_STATE();
    case 1899:
      ACCEPT_TOKEN(sym__BYTE_LENGTH);
      END_STATE();
    case 1900:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2008);
      END_STATE();
    case 1901:
      ACCEPT_TOKEN(sym__COMMA_DELIM);
      END_STATE();
    case 1902:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2009);
      END_STATE();
    case 1903:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2010);
      END_STATE();
    case 1904:
      if (lookahead == '-') ADVANCE(2011);
      END_STATE();
    case 1905:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2012);
      END_STATE();
    case 1906:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2013);
      END_STATE();
    case 1907:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2014);
      END_STATE();
    case 1908:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2015);
      END_STATE();
    case 1909:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2016);
      END_STATE();
    case 1910:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2017);
      END_STATE();
    case 1911:
      ACCEPT_TOKEN(sym__DAY_OF_WEEK);
      END_STATE();
    case 1912:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2018);
      END_STATE();
    case 1913:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2019);
      END_STATE();
    case 1914:
      ACCEPT_TOKEN(sym__END_COMPUTE);
      END_STATE();
    case 1915:
      ACCEPT_TOKEN(sym__END_DISPLAY);
      END_STATE();
    case 1916:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2020);
      END_STATE();
    case 1917:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2021);
      END_STATE();
    case 1918:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2022);
      END_STATE();
    case 1919:
      ACCEPT_TOKEN(sym__END_PERFORM);
      END_STATE();
    case 1920:
      ACCEPT_TOKEN(sym__END_PROGRAM);
      END_STATE();
    case 1921:
      ACCEPT_TOKEN(sym__END_REWRITE);
      END_STATE();
    case 1922:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2023);
      END_STATE();
    case 1923:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2024);
      END_STATE();
    case 1924:
      ACCEPT_TOKEN(sym__ENVIRONMENT);
      if (lookahead == '-') ADVANCE(2025);
      END_STATE();
    case 1925:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2026);
      END_STATE();
    case 1926:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2027);
      END_STATE();
    case 1927:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2028);
      END_STATE();
    case 1928:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2029);
      END_STATE();
    case 1929:
      ACCEPT_TOKEN(sym__FUNCTION_ID);
      END_STATE();
    case 1930:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2030);
      END_STATE();
    case 1931:
      ACCEPT_TOKEN(sym__I_O_CONTROL);
      END_STATE();
    case 1932:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2031);
      END_STATE();
    case 1933:
      ACCEPT_TOKEN(sym__INITIALIZED);
      END_STATE();
    case 1934:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2032);
      END_STATE();
    case 1935:
      ACCEPT_TOKEN(sym__INVALID_KEY);
      END_STATE();
    case 1936:
      ACCEPT_TOKEN(sym__LAST_DETAIL);
      END_STATE();
    case 1937:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2033);
      END_STATE();
    case 1938:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2034);
      END_STATE();
    case 1939:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2035);
      END_STATE();
    case 1940:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2036);
      END_STATE();
    case 1941:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2037);
      END_STATE();
    case 1942:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2038);
      END_STATE();
    case 1943:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2039);
      END_STATE();
    case 1944:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2040);
      END_STATE();
    case 1945:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2041);
      END_STATE();
    case 1946:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2042);
      END_STATE();
    case 1947:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2043);
      END_STATE();
    case 1948:
      if (lookahead == '-') ADVANCE(2044);
      END_STATE();
    case 1949:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2045);
      END_STATE();
    case 1950:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2046);
      END_STATE();
    case 1951:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2047);
      END_STATE();
    case 1952:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2048);
      END_STATE();
    case 1953:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2049);
      END_STATE();
    case 1954:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2050);
      END_STATE();
    case 1955:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2051);
      END_STATE();
    case 1956:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2052);
      END_STATE();
    case 1957:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2053);
      END_STATE();
    case 1958:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2054);
      END_STATE();
    case 1959:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2055);
      END_STATE();
    case 1960:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2056);
      END_STATE();
    case 1961:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2057);
      END_STATE();
    case 1962:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2058);
      END_STATE();
    case 1963:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2059);
      END_STATE();
    case 1964:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2060);
      END_STATE();
    case 1965:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2061);
      END_STATE();
    case 1966:
      ACCEPT_TOKEN(sym__SIGNED_LONG);
      END_STATE();
    case 1967:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2062);
      END_STATE();
    case 1968:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2063);
      END_STATE();
    case 1969:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2064);
      END_STATE();
    case 1970:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2065);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2066);
      END_STATE();
    case 1971:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2067);
      END_STATE();
    case 1972:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2068);
      END_STATE();
    case 1973:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2069);
      END_STATE();
    case 1974:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2070);
      END_STATE();
    case 1975:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2071);
      END_STATE();
    case 1976:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2072);
      END_STATE();
    case 1977:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2073);
      END_STATE();
    case 1978:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2074);
      END_STATE();
    case 1979:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2075);
      END_STATE();
    case 1980:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2076);
      END_STATE();
    case 1981:
      if (lookahead == 'g') ADVANCE(2077);
      END_STATE();
    case 1982:
      if (lookahead == 'l') ADVANCE(2078);
      END_STATE();
    case 1983:
      if (lookahead == 'l') ADVANCE(2079);
      END_STATE();
    case 1984:
      if (lookahead == 't') ADVANCE(2080);
      END_STATE();
    case 1985:
      if (lookahead == 'g') ADVANCE(2081);
      END_STATE();
    case 1986:
      if (lookahead == 'm') ADVANCE(2082);
      END_STATE();
    case 1987:
      if (lookahead == 'l') ADVANCE(2083);
      END_STATE();
    case 1988:
      if (lookahead == 'n') ADVANCE(2084);
      END_STATE();
    case 1989:
      if (lookahead == 'c') ADVANCE(2085);
      END_STATE();
    case 1990:
      if (lookahead == 'e') ADVANCE(2086);
      END_STATE();
    case 1991:
      if (lookahead == 'p') ADVANCE(2087);
      END_STATE();
    case 1992:
      if (lookahead == 'c') ADVANCE(2088);
      END_STATE();
    case 1993:
      if (lookahead == '_') ADVANCE(2089);
      END_STATE();
    case 1994:
      if (lookahead == 'a') ADVANCE(2090);
      END_STATE();
    case 1995:
      if (lookahead == 'n') ADVANCE(2091);
      END_STATE();
    case 1996:
      if (lookahead == 'l') ADVANCE(2092);
      END_STATE();
    case 1997:
      if (lookahead == 'l') ADVANCE(2093);
      END_STATE();
    case 1998:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2094);
      END_STATE();
    case 1999:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2095);
      END_STATE();
    case 2000:
      ACCEPT_TOKEN(sym__ALPHANUMERIC);
      if (lookahead == '-') ADVANCE(2096);
      END_STATE();
    case 2001:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2097);
      END_STATE();
    case 2002:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2098);
      END_STATE();
    case 2003:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2099);
      END_STATE();
    case 2004:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2100);
      END_STATE();
    case 2005:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2101);
      END_STATE();
    case 2006:
      ACCEPT_TOKEN(sym__BINARY_SHORT);
      END_STATE();
    case 2007:
      ACCEPT_TOKEN(sym__BLANK_SCREEN);
      END_STATE();
    case 2008:
      ACCEPT_TOKEN(sym__CLOSE_NOFEED);
      END_STATE();
    case 2009:
      ACCEPT_TOKEN(sym__COMMAND_LINE);
      END_STATE();
    case 2010:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2102);
      END_STATE();
    case 2011:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2103);
      END_STATE();
    case 2012:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2104);
      END_STATE();
    case 2013:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2105);
      END_STATE();
    case 2014:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2106);
      END_STATE();
    case 2015:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2107);
      END_STATE();
    case 2016:
      if (lookahead == '-') ADVANCE(2108);
      END_STATE();
    case 2017:
      ACCEPT_TOKEN(sym__CYL_OVERFLOW);
      END_STATE();
    case 2018:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2109);
      END_STATE();
    case 2019:
      ACCEPT_TOKEN(sym__DECLARATIVES);
      END_STATE();
    case 2020:
      ACCEPT_TOKEN(sym__END_EVALUATE);
      END_STATE();
    case 2021:
      ACCEPT_TOKEN(sym__END_FUNCTION);
      END_STATE();
    case 2022:
      ACCEPT_TOKEN(sym__END_MULTIPLY);
      END_STATE();
    case 2023:
      ACCEPT_TOKEN(sym__END_SUBTRACT);
      END_STATE();
    case 2024:
      ACCEPT_TOKEN(sym__END_UNSTRING);
      END_STATE();
    case 2025:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2110);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2111);
      END_STATE();
    case 2026:
      ACCEPT_TOKEN(sym__EVENT_STATUS);
      END_STATE();
    case 2027:
      ACCEPT_TOKEN(sym__FILE_CONTROL);
      END_STATE();
    case 2028:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2112);
      END_STATE();
    case 2029:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2113);
      END_STATE();
    case 2030:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2114);
      END_STATE();
    case 2031:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2115);
      END_STATE();
    case 2032:
      ACCEPT_TOKEN(sym__INPUT_OUTPUT);
      END_STATE();
    case 2033:
      if (lookahead == '-') ADVANCE(2116);
      END_STATE();
    case 2034:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2117);
      END_STATE();
    case 2035:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2118);
      END_STATE();
    case 2036:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2119);
      END_STATE();
    case 2037:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2120);
      END_STATE();
    case 2038:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2121);
      END_STATE();
    case 2039:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2122);
      END_STATE();
    case 2040:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2123);
      END_STATE();
    case 2041:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2124);
      END_STATE();
    case 2042:
      ACCEPT_TOKEN(sym__NO_ADVANCING);
      END_STATE();
    case 2043:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2125);
      END_STATE();
    case 2044:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(2126);
      END_STATE();
    case 2045:
      ACCEPT_TOKEN(sym__NOT_OVERFLOW);
      END_STATE();
    case 2046:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2127);
      END_STATE();
    case 2047:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2128);
      END_STATE();
    case 2048:
      ACCEPT_TOKEN(sym__NUMVALC_FUNC);
      END_STATE();
    case 2049:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2129);
      END_STATE();
    case 2050:
      ACCEPT_TOKEN(sym__ORGANIZATION);
      END_STATE();
    case 2051:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2130);
      END_STATE();
    case 2052:
      ACCEPT_TOKEN(sym__PAGE_FOOTING);
      END_STATE();
    case 2053:
      ACCEPT_TOKEN(sym__PAGE_HEADING);
      END_STATE();
    case 2054:
      ACCEPT_TOKEN(sym__PROGRAM_NAME);
      END_STATE();
    case 2055:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2131);
      END_STATE();
    case 2056:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2132);
      END_STATE();
    case 2057:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2133);
      END_STATE();
    case 2058:
      ACCEPT_TOKEN(sym__REVERSE_FUNC);
      END_STATE();
    case 2059:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2134);
      END_STATE();
    case 2060:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2135);
      END_STATE();
    case 2061:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2136);
      END_STATE();
    case 2062:
      ACCEPT_TOKEN(sym__SIGNED_SHORT);
      END_STATE();
    case 2063:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2137);
      END_STATE();
    case 2064:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2138);
      END_STATE();
    case 2065:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2139);
      END_STATE();
    case 2066:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2140);
      END_STATE();
    case 2067:
      ACCEPT_TOKEN(sym__SYNCHRONIZED);
      END_STATE();
    case 2068:
      ACCEPT_TOKEN(sym__UNSIGNED_INT);
      END_STATE();
    case 2069:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2141);
      END_STATE();
    case 2070:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2142);
      END_STATE();
    case 2071:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2143);
      END_STATE();
    case 2072:
      if (lookahead == '-') ADVANCE(2144);
      END_STATE();
    case 2073:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2145);
      END_STATE();
    case 2074:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2146);
      END_STATE();
    case 2075:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2147);
      END_STATE();
    case 2076:
      ACCEPT_TOKEN(sym__TRIM_FUNCTION);
      END_STATE();
    case 2077:
      if (lookahead == 't') ADVANCE(2148);
      END_STATE();
    case 2078:
      if (lookahead == 'a') ADVANCE(2149);
      END_STATE();
    case 2079:
      if (lookahead == 'a') ADVANCE(2150);
      END_STATE();
    case 2080:
      if (lookahead == '_') ADVANCE(2151);
      END_STATE();
    case 2081:
      if (lookahead == 'r') ADVANCE(2152);
      END_STATE();
    case 2082:
      if (lookahead == 'e') ADVANCE(2153);
      END_STATE();
    case 2083:
      if (lookahead == '_') ADVANCE(2154);
      END_STATE();
    case 2084:
      if (lookahead == '_') ADVANCE(2155);
      END_STATE();
    case 2085:
      if (lookahead == 'l') ADVANCE(2156);
      END_STATE();
    case 2086:
      if (lookahead == 'd') ADVANCE(2157);
      END_STATE();
    case 2087:
      if (lookahead == 'r') ADVANCE(2158);
      END_STATE();
    case 2088:
      if (lookahead == 'l') ADVANCE(2159);
      END_STATE();
    case 2089:
      if (lookahead == 'c') ADVANCE(2160);
      END_STATE();
    case 2090:
      if (lookahead == 'u') ADVANCE(2161);
      END_STATE();
    case 2091:
      if (lookahead == 'i') ADVANCE(2162);
      END_STATE();
    case 2092:
      if (lookahead == 'a') ADVANCE(2163);
      END_STATE();
    case 2093:
      if (lookahead == 'a') ADVANCE(2164);
      END_STATE();
    case 2094:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2165);
      END_STATE();
    case 2095:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(2166);
      END_STATE();
    case 2096:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2167);
      END_STATE();
    case 2097:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2168);
      END_STATE();
    case 2098:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2169);
      END_STATE();
    case 2099:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2170);
      END_STATE();
    case 2100:
      ACCEPT_TOKEN(sym__BINARY_C_LONG);
      END_STATE();
    case 2101:
      ACCEPT_TOKEN(sym__BINARY_DOUBLE);
      END_STATE();
    case 2102:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2171);
      END_STATE();
    case 2103:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2172);
      END_STATE();
    case 2104:
      ACCEPT_TOKEN(sym__CONFIGURATION);
      END_STATE();
    case 2105:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2173);
      END_STATE();
    case 2106:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2174);
      END_STATE();
    case 2107:
      ACCEPT_TOKEN(sym__CORRESPONDING);
      END_STATE();
    case 2108:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2175);
      END_STATE();
    case 2109:
      ACCEPT_TOKEN(sym__DECIMAL_POINT);
      END_STATE();
    case 2110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2176);
      END_STATE();
    case 2111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2177);
      END_STATE();
    case 2112:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2178);
      END_STATE();
    case 2113:
      ACCEPT_TOKEN(sym__FORMS_OVERLAY);
      END_STATE();
    case 2114:
      ACCEPT_TOKEN(sym__FUNCTION_NAME);
      END_STATE();
    case 2115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2179);
      END_STATE();
    case 2116:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2180);
      END_STATE();
    case 2117:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2181);
      END_STATE();
    case 2118:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2182);
      END_STATE();
    case 2119:
      ACCEPT_TOKEN(sym__LOCAL_STORAGE);
      END_STATE();
    case 2120:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2183);
      END_STATE();
    case 2121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2184);
      END_STATE();
    case 2122:
      ACCEPT_TOKEN(sym__MNEMONIC_NAME);
      END_STATE();
    case 2123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2185);
      END_STATE();
    case 2124:
      ACCEPT_TOKEN(sym__NEXT_SENTENCE);
      END_STATE();
    case 2125:
      ACCEPT_TOKEN(sym__NOT_EXCEPTION);
      END_STATE();
    case 2126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2186);
      END_STATE();
    case 2127:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2187);
      END_STATE();
    case 2128:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2188);
      END_STATE();
    case 2129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2189);
      END_STATE();
    case 2130:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2190);
      END_STATE();
    case 2131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2191);
      END_STATE();
    case 2132:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2192);
      END_STATE();
    case 2133:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2193);
      END_STATE();
    case 2134:
      ACCEPT_TOKEN(sym__REVERSE_VIDEO);
      END_STATE();
    case 2135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2194);
      END_STATE();
    case 2136:
      ACCEPT_TOKEN(sym__SEGMENT_LIMIT);
      END_STATE();
    case 2137:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2195);
      END_STATE();
    case 2138:
      ACCEPT_TOKEN(sym__SPECIAL_NAMES);
      END_STATE();
    case 2139:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(2196);
      END_STATE();
    case 2140:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2197);
      END_STATE();
    case 2141:
      ACCEPT_TOKEN(sym__UNSIGNED_LONG);
      END_STATE();
    case 2142:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2198);
      END_STATE();
    case 2143:
      if (lookahead == '-') ADVANCE(2199);
      END_STATE();
    case 2144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2200);
      END_STATE();
    case 2145:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2201);
      END_STATE();
    case 2146:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2202);
      END_STATE();
    case 2147:
      if (lookahead == '-') ADVANCE(2203);
      END_STATE();
    case 2148:
      if (lookahead == 'h') ADVANCE(2204);
      END_STATE();
    case 2149:
      if (lookahead == 'u') ADVANCE(2205);
      END_STATE();
    case 2150:
      if (lookahead == 'u') ADVANCE(2206);
      END_STATE();
    case 2151:
      if (lookahead == 'e') ADVANCE(2207);
      END_STATE();
    case 2152:
      if (lookahead == 'a') ADVANCE(2208);
      END_STATE();
    case 2153:
      if (lookahead == 'n') ADVANCE(2209);
      END_STATE();
    case 2154:
      if (lookahead == 'c') ADVANCE(2210);
      END_STATE();
    case 2155:
      if (lookahead == 'd') ADVANCE(2211);
      END_STATE();
    case 2156:
      if (lookahead == 'a') ADVANCE(2212);
      END_STATE();
    case 2157:
      if (lookahead == '_') ADVANCE(2213);
      END_STATE();
    case 2158:
      if (lookahead == 'o') ADVANCE(2214);
      END_STATE();
    case 2159:
      if (lookahead == 'a') ADVANCE(2215);
      END_STATE();
    case 2160:
      if (lookahead == 'l') ADVANCE(2216);
      END_STATE();
    case 2161:
      if (lookahead == 's') ADVANCE(2217);
      END_STATE();
    case 2162:
      if (lookahead == 'z') ADVANCE(2218);
      END_STATE();
    case 2163:
      if (lookahead == 'u') ADVANCE(2219);
      END_STATE();
    case 2164:
      if (lookahead == 'u') ADVANCE(2220);
      END_STATE();
    case 2165:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2221);
      END_STATE();
    case 2166:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2222);
      END_STATE();
    case 2167:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2223);
      END_STATE();
    case 2168:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2224);
      END_STATE();
    case 2169:
      ACCEPT_TOKEN(sym__ARGUMENT_VALUE);
      END_STATE();
    case 2170:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2225);
      END_STATE();
    case 2171:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2226);
      END_STATE();
    case 2172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2227);
      END_STATE();
    case 2173:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2228);
      END_STATE();
    case 2174:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(2229);
      END_STATE();
    case 2175:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2230);
      END_STATE();
    case 2176:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2231);
      END_STATE();
    case 2177:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2232);
      END_STATE();
    case 2178:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2233);
      END_STATE();
    case 2179:
      ACCEPT_TOKEN(sym__IDENTIFICATION);
      END_STATE();
    case 2180:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2234);
      END_STATE();
    case 2181:
      if (lookahead == '-') ADVANCE(2235);
      END_STATE();
    case 2182:
      ACCEPT_TOKEN(sym__LINAGE_COUNTER);
      END_STATE();
    case 2183:
      ACCEPT_TOKEN(sym__LOCALE_DT_FUNC);
      END_STATE();
    case 2184:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2236);
      END_STATE();
    case 2185:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2237);
      END_STATE();
    case 2186:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(2238);
      END_STATE();
    case 2187:
      ACCEPT_TOKEN(sym__NOT_SIZE_ERROR);
      END_STATE();
    case 2188:
      ACCEPT_TOKEN(sym__NUMERIC_EDITED);
      END_STATE();
    case 2189:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2239);
      END_STATE();
    case 2190:
      ACCEPT_TOKEN(sym__PACKED_DECIMAL);
      END_STATE();
    case 2191:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2240);
      END_STATE();
    case 2192:
      ACCEPT_TOKEN(sym__REPORT_FOOTING);
      END_STATE();
    case 2193:
      ACCEPT_TOKEN(sym__REPORT_HEADING);
      END_STATE();
    case 2194:
      ACCEPT_TOKEN(sym__SCREEN_CONTROL);
      END_STATE();
    case 2195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2241);
      END_STATE();
    case 2196:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2242);
      END_STATE();
    case 2197:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2243);
      END_STATE();
    case 2198:
      ACCEPT_TOKEN(sym__UNSIGNED_SHORT);
      END_STATE();
    case 2199:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2244);
      END_STATE();
    case 2200:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2245);
      END_STATE();
    case 2201:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2246);
      END_STATE();
    case 2202:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2247);
      END_STATE();
    case 2203:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2248);
      END_STATE();
    case 2204:
      ACCEPT_TOKEN(sym_any_length_clause);
      END_STATE();
    case 2205:
      if (lookahead == 's') ADVANCE(2249);
      END_STATE();
    case 2206:
      if (lookahead == 's') ADVANCE(2250);
      END_STATE();
    case 2207:
      if (lookahead == 'n') ADVANCE(2251);
      END_STATE();
    case 2208:
      if (lookahead == 'm') ADVANCE(2252);
      END_STATE();
    case 2209:
      if (lookahead == 't') ADVANCE(2253);
      END_STATE();
    case 2210:
      if (lookahead == 'l') ADVANCE(2254);
      END_STATE();
    case 2211:
      if (lookahead == 'e') ADVANCE(2255);
      END_STATE();
    case 2212:
      if (lookahead == 'u') ADVANCE(2256);
      END_STATE();
    case 2213:
      if (lookahead == 'c') ADVANCE(2257);
      END_STATE();
    case 2214:
      if (lookahead == 'g') ADVANCE(2258);
      END_STATE();
    case 2215:
      if (lookahead == 'u') ADVANCE(2259);
      END_STATE();
    case 2216:
      if (lookahead == 'a') ADVANCE(2260);
      END_STATE();
    case 2217:
      if (lookahead == 'e') ADVANCE(2261);
      END_STATE();
    case 2218:
      if (lookahead == 'e') ADVANCE(2262);
      END_STATE();
    case 2219:
      if (lookahead == 's') ADVANCE(2263);
      END_STATE();
    case 2220:
      if (lookahead == 's') ADVANCE(2264);
      END_STATE();
    case 2221:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2265);
      END_STATE();
    case 2222:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2266);
      END_STATE();
    case 2223:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(2267);
      END_STATE();
    case 2224:
      ACCEPT_TOKEN(sym__ARGUMENT_NUMBER);
      END_STATE();
    case 2225:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2268);
      END_STATE();
    case 2226:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2269);
      END_STATE();
    case 2227:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2270);
      END_STATE();
    case 2228:
      ACCEPT_TOKEN(sym__CONTROL_FOOTING);
      END_STATE();
    case 2229:
      ACCEPT_TOKEN(sym__CONTROL_HEADING);
      END_STATE();
    case 2230:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2271);
      END_STATE();
    case 2231:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2272);
      END_STATE();
    case 2232:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2273);
      END_STATE();
    case 2233:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2274);
      END_STATE();
    case 2234:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2275);
      END_STATE();
    case 2235:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(2276);
      END_STATE();
    case 2236:
      ACCEPT_TOKEN(sym__LOWER_CASE_FUNC);
      END_STATE();
    case 2237:
      ACCEPT_TOKEN(sym__NATIONAL_EDITED);
      END_STATE();
    case 2238:
      ACCEPT_TOKEN(sym__NOT_INVALID_KEY);
      END_STATE();
    case 2239:
      ACCEPT_TOKEN(sym__OBJECT_COMPUTER);
      END_STATE();
    case 2240:
      ACCEPT_TOKEN(sym__PROGRAM_POINTER);
      END_STATE();
    case 2241:
      ACCEPT_TOKEN(sym__SOURCE_COMPUTER);
      END_STATE();
    case 2242:
      if (lookahead == '-') ADVANCE(2277);
      END_STATE();
    case 2243:
      ACCEPT_TOKEN(sym__SUBSTITUTE_FUNC);
      END_STATE();
    case 2244:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2278);
      END_STATE();
    case 2245:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2279);
      END_STATE();
    case 2246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2280);
      END_STATE();
    case 2247:
      ACCEPT_TOKEN(sym__UPPER_CASE_FUNC);
      END_STATE();
    case 2248:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2281);
      END_STATE();
    case 2249:
      if (lookahead == 'e') ADVANCE(2282);
      END_STATE();
    case 2250:
      if (lookahead == 'e') ADVANCE(2283);
      END_STATE();
    case 2251:
      if (lookahead == 't') ADVANCE(2284);
      END_STATE();
    case 2252:
      ACCEPT_TOKEN(sym_end_program);
      END_STATE();
    case 2253:
      if (lookahead == '_') ADVANCE(2285);
      END_STATE();
    case 2254:
      if (lookahead == 'a') ADVANCE(2286);
      END_STATE();
    case 2255:
      if (lookahead == 'f') ADVANCE(2287);
      END_STATE();
    case 2256:
      if (lookahead == 's') ADVANCE(2288);
      END_STATE();
    case 2257:
      if (lookahead == 'l') ADVANCE(2289);
      END_STATE();
    case 2258:
      ACCEPT_TOKEN(sym_nested_prog);
      END_STATE();
    case 2259:
      if (lookahead == 's') ADVANCE(2290);
      END_STATE();
    case 2260:
      if (lookahead == 'u') ADVANCE(2291);
      END_STATE();
    case 2261:
      ACCEPT_TOKEN(sym_sign_clause);
      END_STATE();
    case 2262:
      if (lookahead == 'd') ADVANCE(2292);
      END_STATE();
    case 2263:
      if (lookahead == 'e') ADVANCE(2293);
      END_STATE();
    case 2264:
      if (lookahead == 'e') ADVANCE(2294);
      END_STATE();
    case 2265:
      ACCEPT_TOKEN(sym__ALPHABETIC_LOWER);
      END_STATE();
    case 2266:
      ACCEPT_TOKEN(sym__ALPHABETIC_UPPER);
      END_STATE();
    case 2267:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2295);
      END_STATE();
    case 2268:
      ACCEPT_TOKEN(sym__BACKGROUND_COLOR);
      END_STATE();
    case 2269:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2296);
      END_STATE();
    case 2270:
      ACCEPT_TOKEN(sym__CONCATENATE_FUNC);
      END_STATE();
    case 2271:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2297);
      END_STATE();
    case 2272:
      ACCEPT_TOKEN(sym__ENVIRONMENT_NAME);
      END_STATE();
    case 2273:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2298);
      END_STATE();
    case 2274:
      ACCEPT_TOKEN(sym__FOREGROUND_COLOR);
      END_STATE();
    case 2275:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2299);
      END_STATE();
    case 2276:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(2300);
      END_STATE();
    case 2277:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(2301);
      END_STATE();
    case 2278:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2302);
      END_STATE();
    case 2279:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2303);
      END_STATE();
    case 2280:
      if (lookahead == '-') ADVANCE(2304);
      END_STATE();
    case 2281:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2305);
      END_STATE();
    case 2282:
      ACCEPT_TOKEN(sym_based_clause);
      END_STATE();
    case 2283:
      ACCEPT_TOKEN(sym_blank_clause);
      END_STATE();
    case 2284:
      if (lookahead == 'r') ADVANCE(2306);
      END_STATE();
    case 2285:
      if (lookahead == 'd') ADVANCE(2307);
      END_STATE();
    case 2286:
      if (lookahead == 'u') ADVANCE(2308);
      END_STATE();
    case 2287:
      if (lookahead == 'i') ADVANCE(2309);
      END_STATE();
    case 2288:
      if (lookahead == 'e') ADVANCE(2310);
      END_STATE();
    case 2289:
      if (lookahead == 'a') ADVANCE(2311);
      END_STATE();
    case 2290:
      if (lookahead == 'e') ADVANCE(2312);
      END_STATE();
    case 2291:
      if (lookahead == 's') ADVANCE(2313);
      END_STATE();
    case 2292:
      if (lookahead == '_') ADVANCE(2314);
      END_STATE();
    case 2293:
      ACCEPT_TOKEN(sym_usage_clause);
      END_STATE();
    case 2294:
      ACCEPT_TOKEN(sym_value_clause);
      END_STATE();
    case 2295:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2315);
      END_STATE();
    case 2296:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2316);
      END_STATE();
    case 2297:
      ACCEPT_TOKEN(sym__CURRENT_DATE_FUNC);
      END_STATE();
    case 2298:
      ACCEPT_TOKEN(sym__ENVIRONMENT_VALUE);
      END_STATE();
    case 2299:
      ACCEPT_TOKEN(sym__LEVEL_NUMBER_WORD);
      END_STATE();
    case 2300:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2317);
      END_STATE();
    case 2301:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2318);
      END_STATE();
    case 2302:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(2319);
      END_STATE();
    case 2303:
      ACCEPT_TOKEN(sym__UPON_COMMAND_LINE);
      END_STATE();
    case 2304:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2320);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(2321);
      END_STATE();
    case 2305:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2322);
      END_STATE();
    case 2306:
      if (lookahead == 'y') ADVANCE(2323);
      END_STATE();
    case 2307:
      if (lookahead == 'i') ADVANCE(2324);
      END_STATE();
    case 2308:
      if (lookahead == 's') ADVANCE(2325);
      END_STATE();
    case 2309:
      if (lookahead == 'n') ADVANCE(2326);
      END_STATE();
    case 2310:
      ACCEPT_TOKEN(sym_global_clause);
      END_STATE();
    case 2311:
      if (lookahead == 'u') ADVANCE(2327);
      END_STATE();
    case 2312:
      ACCEPT_TOKEN(sym_occurs_clause);
      END_STATE();
    case 2313:
      if (lookahead == 'e') ADVANCE(2328);
      END_STATE();
    case 2314:
      if (lookahead == 'c') ADVANCE(2329);
      END_STATE();
    case 2315:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2330);
      END_STATE();
    case 2316:
      ACCEPT_TOKEN(sym__COMMITMENT_CONTROL);
      END_STATE();
    case 2317:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(2331);
      END_STATE();
    case 2318:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(2332);
      END_STATE();
    case 2319:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2333);
      END_STATE();
    case 2320:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2334);
      END_STATE();
    case 2321:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(2335);
      END_STATE();
    case 2322:
      ACCEPT_TOKEN(sym__WHEN_COMPILED_FUNC);
      END_STATE();
    case 2323:
      ACCEPT_TOKEN(sym_constant_entry);
      END_STATE();
    case 2324:
      if (lookahead == 'v') ADVANCE(2336);
      END_STATE();
    case 2325:
      if (lookahead == 'e') ADVANCE(2337);
      END_STATE();
    case 2326:
      if (lookahead == 'i') ADVANCE(2338);
      END_STATE();
    case 2327:
      if (lookahead == 's') ADVANCE(2339);
      END_STATE();
    case 2328:
      ACCEPT_TOKEN(sym_renames_clause);
      END_STATE();
    case 2329:
      if (lookahead == 'l') ADVANCE(2340);
      END_STATE();
    case 2330:
      ACCEPT_TOKEN(sym__ALPHANUMERIC_EDITED);
      END_STATE();
    case 2331:
      ACCEPT_TOKEN(sym__LEVEL88_NUMBER_WORD);
      END_STATE();
    case 2332:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(2341);
      END_STATE();
    case 2333:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(2342);
      END_STATE();
    case 2334:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2343);
      END_STATE();
    case 2335:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(2344);
      END_STATE();
    case 2336:
      if (lookahead == 'i') ADVANCE(2345);
      END_STATE();
    case 2337:
      ACCEPT_TOKEN(sym_external_clause);
      END_STATE();
    case 2338:
      if (lookahead == 't') ADVANCE(2346);
      END_STATE();
    case 2339:
      if (lookahead == 'e') ADVANCE(2347);
      END_STATE();
    case 2340:
      if (lookahead == 'a') ADVANCE(2348);
      END_STATE();
    case 2341:
      ACCEPT_TOKEN(sym__SUBSTITUTE_CASE_FUNC);
      END_STATE();
    case 2342:
      ACCEPT_TOKEN(sym__UPON_ARGUMENT_NUMBER);
      END_STATE();
    case 2343:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2349);
      END_STATE();
    case 2344:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(2350);
      END_STATE();
    case 2345:
      if (lookahead == 's') ADVANCE(2351);
      END_STATE();
    case 2346:
      if (lookahead == 'i') ADVANCE(2352);
      END_STATE();
    case 2347:
      ACCEPT_TOKEN(sym_justified_clause);
      END_STATE();
    case 2348:
      if (lookahead == 'u') ADVANCE(2353);
      END_STATE();
    case 2349:
      ACCEPT_TOKEN(sym__UPON_ENVIRONMENT_NAME);
      END_STATE();
    case 2350:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(2354);
      END_STATE();
    case 2351:
      if (lookahead == 'i') ADVANCE(2355);
      END_STATE();
    case 2352:
      if (lookahead == 'o') ADVANCE(2356);
      END_STATE();
    case 2353:
      if (lookahead == 's') ADVANCE(2357);
      END_STATE();
    case 2354:
      ACCEPT_TOKEN(sym__UPON_ENVIRONMENT_VALUE);
      END_STATE();
    case 2355:
      if (lookahead == 'o') ADVANCE(2358);
      END_STATE();
    case 2356:
      if (lookahead == 'n') ADVANCE(2359);
      END_STATE();
    case 2357:
      if (lookahead == 'e') ADVANCE(2360);
      END_STATE();
    case 2358:
      if (lookahead == 'n') ADVANCE(2361);
      END_STATE();
    case 2359:
      ACCEPT_TOKEN(sym_function_definition);
      END_STATE();
    case 2360:
      ACCEPT_TOKEN(sym_synchronized_clause);
      END_STATE();
    case 2361:
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
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 113},
  [26] = {.lex_state = 113},
  [27] = {.lex_state = 113},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 99},
  [32] = {.lex_state = 113},
  [33] = {.lex_state = 113},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 113},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 113},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 113},
  [40] = {.lex_state = 113},
  [41] = {.lex_state = 99},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 113},
  [45] = {.lex_state = 113},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 113},
  [49] = {.lex_state = 113},
  [50] = {.lex_state = 113},
  [51] = {.lex_state = 99},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 113},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 99},
  [56] = {.lex_state = 113},
  [57] = {.lex_state = 113},
  [58] = {.lex_state = 113},
  [59] = {.lex_state = 113},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 113},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 113},
  [67] = {.lex_state = 113},
  [68] = {.lex_state = 113},
  [69] = {.lex_state = 113},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 113},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 113},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 113},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 113},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 113},
  [95] = {.lex_state = 113},
  [96] = {.lex_state = 113},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 113},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__WORD] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_function_definition] = ACTIONS(1),
    [sym_environment_division] = ACTIONS(1),
    [sym_file_section] = ACTIONS(1),
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
    [sym__HIGH_VALUE] = ACTIONS(1),
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
    [sym__LOW_VALUE] = ACTIONS(1),
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
    [sym__QUOTE] = ACTIONS(1),
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
    [sym__SPACE] = ACTIONS(1),
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
    [sym__TOK_NULL] = ACTIONS(1),
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
    [sym__ZERO] = ACTIONS(1),
  },
  [1] = {
    [sym_start] = STATE(104),
    [sym_program_definition] = STATE(35),
    [sym_identification_division] = STATE(31),
    [aux_sym_start_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__IDENTIFICATION] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      sym__PIC,
    STATE(4), 1,
      aux_sym_qualified_word_repeat1,
    STATE(90), 1,
      sym__in_of,
    ACTIONS(9), 2,
      sym__IN,
      sym__OF,
    ACTIONS(7), 18,
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
  [34] = 5,
    ACTIONS(18), 1,
      sym__PIC,
    STATE(3), 1,
      aux_sym_qualified_word_repeat1,
    STATE(90), 1,
      sym__in_of,
    ACTIONS(15), 2,
      sym__IN,
      sym__OF,
    ACTIONS(13), 18,
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
  [68] = 5,
    ACTIONS(22), 1,
      sym__PIC,
    STATE(3), 1,
      aux_sym_qualified_word_repeat1,
    STATE(90), 1,
      sym__in_of,
    ACTIONS(9), 2,
      sym__IN,
      sym__OF,
    ACTIONS(20), 18,
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
  [102] = 7,
    ACTIONS(24), 1,
      anon_sym_DOT,
    ACTIONS(28), 1,
      sym__LITERAL,
    ACTIONS(30), 1,
      sym__PIC,
    ACTIONS(32), 1,
      sym__PICTURE,
    ACTIONS(34), 1,
      sym__REDEFINES,
    STATE(6), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    ACTIONS(26), 13,
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
  [139] = 6,
    ACTIONS(41), 1,
      sym__PIC,
    ACTIONS(44), 1,
      sym__PICTURE,
    ACTIONS(47), 1,
      sym__REDEFINES,
    ACTIONS(36), 2,
      anon_sym_DOT,
      sym__LITERAL,
    STATE(6), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    ACTIONS(38), 13,
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
  [174] = 7,
    ACTIONS(30), 1,
      sym__PIC,
    ACTIONS(32), 1,
      sym__PICTURE,
    ACTIONS(34), 1,
      sym__REDEFINES,
    ACTIONS(50), 1,
      anon_sym_DOT,
    ACTIONS(54), 1,
      sym__LITERAL,
    STATE(5), 4,
      sym__data_description_clause,
      sym_redefines_clause,
      sym_picture_clause,
      aux_sym_data_description_repeat1,
    ACTIONS(52), 13,
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
  [211] = 5,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      sym__PIC,
    STATE(10), 1,
      sym__subref,
    STATE(12), 1,
      sym__refmod,
    ACTIONS(56), 17,
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
  [243] = 2,
    ACTIONS(18), 1,
      sym__PIC,
    ACTIONS(13), 20,
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
  [269] = 4,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      sym__PIC,
    STATE(17), 1,
      sym__refmod,
    ACTIONS(62), 17,
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
  [298] = 2,
    ACTIONS(70), 1,
      sym__PIC,
    ACTIONS(68), 18,
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
  [322] = 2,
    ACTIONS(66), 1,
      sym__PIC,
    ACTIONS(62), 17,
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
  [345] = 2,
    ACTIONS(74), 1,
      sym__PIC,
    ACTIONS(72), 17,
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
  [368] = 2,
    ACTIONS(78), 1,
      sym__PIC,
    ACTIONS(76), 17,
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
  [391] = 2,
    ACTIONS(82), 1,
      sym__PIC,
    ACTIONS(80), 17,
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
  [414] = 2,
    ACTIONS(86), 1,
      sym__PIC,
    ACTIONS(84), 17,
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
  [437] = 2,
    ACTIONS(90), 1,
      sym__PIC,
    ACTIONS(88), 17,
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
  [460] = 2,
    ACTIONS(94), 1,
      sym__PIC,
    ACTIONS(92), 17,
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
  [483] = 2,
    ACTIONS(98), 1,
      sym__PIC,
    ACTIONS(96), 17,
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
  [506] = 6,
    ACTIONS(100), 1,
      sym_level_number,
    ACTIONS(103), 1,
      sym_level_number_88,
    ACTIONS(106), 1,
      sym_constant_entry,
    STATE(20), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(82), 1,
      sym_data_description,
    ACTIONS(109), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [529] = 6,
    ACTIONS(111), 1,
      sym_level_number,
    ACTIONS(113), 1,
      sym_level_number_88,
    ACTIONS(115), 1,
      sym_constant_entry,
    STATE(20), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(82), 1,
      sym_data_description,
    ACTIONS(117), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [552] = 6,
    ACTIONS(111), 1,
      sym_level_number,
    ACTIONS(113), 1,
      sym_level_number_88,
    ACTIONS(115), 1,
      sym_constant_entry,
    STATE(21), 1,
      aux_sym_working_storage_section_repeat1,
    STATE(82), 1,
      sym_data_description,
    ACTIONS(119), 5,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [575] = 2,
    ACTIONS(121), 1,
      sym_level_number_88,
    ACTIONS(109), 7,
      sym_level_number,
      sym_constant_entry,
      sym_local_storage_section,
      sym_linkage_section,
      sym_report_section,
      sym_screen_section,
      sym__PROCEDURE,
  [588] = 8,
    ACTIONS(123), 1,
      sym_file_section,
    ACTIONS(125), 1,
      sym_local_storage_section,
    ACTIONS(127), 1,
      sym_linkage_section,
    ACTIONS(129), 1,
      sym_report_section,
    ACTIONS(131), 1,
      sym_screen_section,
    ACTIONS(133), 1,
      sym__PROCEDURE,
    ACTIONS(135), 1,
      sym__WORKING_STORAGE,
    STATE(34), 1,
      sym_working_storage_section,
  [613] = 4,
    ACTIONS(139), 1,
      sym__STOP,
    STATE(26), 1,
      aux_sym_procedure_division_repeat1,
    STATE(80), 2,
      sym__statement,
      sym_stop_run_statement,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
  [630] = 4,
    ACTIONS(139), 1,
      sym__STOP,
    STATE(27), 1,
      aux_sym_procedure_division_repeat1,
    STATE(80), 2,
      sym__statement,
      sym_stop_run_statement,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
  [647] = 4,
    ACTIONS(145), 1,
      sym__STOP,
    STATE(27), 1,
      aux_sym_procedure_division_repeat1,
    STATE(80), 2,
      sym__statement,
      sym_stop_run_statement,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
  [664] = 7,
    ACTIONS(135), 1,
      sym__WORKING_STORAGE,
    ACTIONS(148), 1,
      sym_local_storage_section,
    ACTIONS(150), 1,
      sym_linkage_section,
    ACTIONS(152), 1,
      sym_report_section,
    ACTIONS(154), 1,
      sym_screen_section,
    ACTIONS(156), 1,
      sym__PROCEDURE,
    STATE(36), 1,
      sym_working_storage_section,
  [686] = 5,
    ACTIONS(158), 1,
      sym_picture_x,
    ACTIONS(160), 1,
      sym__picture_9_z,
    ACTIONS(162), 1,
      sym__picture_9_v,
    ACTIONS(164), 1,
      sym__IS,
    STATE(19), 2,
      sym__picture_string,
      sym_picture_9,
  [703] = 4,
    ACTIONS(160), 1,
      sym__picture_9_z,
    ACTIONS(162), 1,
      sym__picture_9_v,
    ACTIONS(166), 1,
      sym_picture_x,
    STATE(15), 2,
      sym__picture_string,
      sym_picture_9,
  [717] = 5,
    ACTIONS(168), 1,
      sym_environment_division,
    ACTIONS(170), 1,
      sym__DATA,
    ACTIONS(172), 1,
      sym__PROCEDURE,
    STATE(40), 1,
      sym_procedure_division,
    STATE(64), 1,
      sym_data_division,
  [733] = 1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      sym_nested_prog,
      sym_end_program,
      sym__IDENTIFICATION,
      sym__STOP,
  [741] = 4,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      sym__IDENTIFICATION,
    STATE(31), 1,
      sym_identification_division,
    STATE(33), 2,
      sym_program_definition,
      aux_sym_start_repeat1,
  [755] = 5,
    ACTIONS(148), 1,
      sym_local_storage_section,
    ACTIONS(150), 1,
      sym_linkage_section,
    ACTIONS(152), 1,
      sym_report_section,
    ACTIONS(154), 1,
      sym_screen_section,
    ACTIONS(156), 1,
      sym__PROCEDURE,
  [771] = 4,
    ACTIONS(5), 1,
      sym__IDENTIFICATION,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_identification_division,
    STATE(33), 2,
      sym_program_definition,
      aux_sym_start_repeat1,
  [785] = 5,
    ACTIONS(181), 1,
      sym_local_storage_section,
    ACTIONS(183), 1,
      sym_linkage_section,
    ACTIONS(185), 1,
      sym_report_section,
    ACTIONS(187), 1,
      sym_screen_section,
    ACTIONS(189), 1,
      sym__PROCEDURE,
  [801] = 3,
    ACTIONS(193), 1,
      sym_nested_prog,
    ACTIONS(195), 1,
      sym_end_program,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [812] = 4,
    ACTIONS(150), 1,
      sym_linkage_section,
    ACTIONS(152), 1,
      sym_report_section,
    ACTIONS(154), 1,
      sym_screen_section,
    ACTIONS(156), 1,
      sym__PROCEDURE,
  [825] = 3,
    ACTIONS(199), 1,
      sym_nested_prog,
    ACTIONS(201), 1,
      sym_end_program,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [836] = 3,
    ACTIONS(205), 1,
      sym_nested_prog,
    ACTIONS(207), 1,
      sym_end_program,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [847] = 4,
    ACTIONS(170), 1,
      sym__DATA,
    ACTIONS(172), 1,
      sym__PROCEDURE,
    STATE(39), 1,
      sym_procedure_division,
    STATE(63), 1,
      sym_data_division,
  [860] = 4,
    ACTIONS(209), 1,
      sym_linkage_section,
    ACTIONS(211), 1,
      sym_report_section,
    ACTIONS(213), 1,
      sym_screen_section,
    ACTIONS(215), 1,
      sym__PROCEDURE,
  [873] = 4,
    ACTIONS(183), 1,
      sym_linkage_section,
    ACTIONS(185), 1,
      sym_report_section,
    ACTIONS(187), 1,
      sym_screen_section,
    ACTIONS(189), 1,
      sym__PROCEDURE,
  [886] = 3,
    ACTIONS(217), 1,
      sym__WORD,
    STATE(8), 1,
      sym_qualified_word,
    STATE(18), 1,
      sym__identifier_1,
  [896] = 2,
    STATE(58), 1,
      sym_program_name,
    ACTIONS(219), 2,
      sym__LITERAL,
      sym__WORD,
  [904] = 3,
    ACTIONS(185), 1,
      sym_report_section,
    ACTIONS(187), 1,
      sym_screen_section,
    ACTIONS(189), 1,
      sym__PROCEDURE,
  [914] = 3,
    ACTIONS(152), 1,
      sym_report_section,
    ACTIONS(154), 1,
      sym_screen_section,
    ACTIONS(156), 1,
      sym__PROCEDURE,
  [924] = 2,
    ACTIONS(223), 1,
      sym_end_program,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [932] = 2,
    STATE(78), 1,
      sym_entry_name,
    ACTIONS(225), 2,
      sym__FILLER,
      sym__WORD,
  [940] = 2,
    STATE(7), 1,
      sym_entry_name,
    ACTIONS(225), 2,
      sym__FILLER,
      sym__WORD,
  [948] = 1,
    ACTIONS(227), 3,
      sym_environment_division,
      sym__DATA,
      sym__PROCEDURE,
  [954] = 3,
    ACTIONS(229), 1,
      sym_report_section,
    ACTIONS(231), 1,
      sym_screen_section,
    ACTIONS(233), 1,
      sym__PROCEDURE,
  [964] = 3,
    ACTIONS(235), 1,
      sym__NUMBER,
    STATE(98), 1,
      sym__exp_list,
    STATE(99), 1,
      sym__exp,
  [974] = 3,
    ACTIONS(211), 1,
      sym_report_section,
    ACTIONS(213), 1,
      sym_screen_section,
    ACTIONS(215), 1,
      sym__PROCEDURE,
  [984] = 1,
    ACTIONS(237), 3,
      sym_environment_division,
      sym__DATA,
      sym__PROCEDURE,
  [990] = 2,
    ACTIONS(201), 1,
      sym_end_program,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [998] = 2,
    ACTIONS(195), 1,
      sym_end_program,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1006] = 3,
    ACTIONS(239), 1,
      anon_sym_DOT,
    ACTIONS(241), 1,
      sym__AS,
    STATE(93), 1,
      sym_as_literal,
  [1016] = 1,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1021] = 2,
    ACTIONS(213), 1,
      sym_screen_section,
    ACTIONS(215), 1,
      sym__PROCEDURE,
  [1028] = 2,
    ACTIONS(231), 1,
      sym_screen_section,
    ACTIONS(233), 1,
      sym__PROCEDURE,
  [1035] = 1,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1040] = 2,
    ACTIONS(172), 1,
      sym__PROCEDURE,
    STATE(37), 1,
      sym_procedure_division,
  [1047] = 2,
    ACTIONS(172), 1,
      sym__PROCEDURE,
    STATE(39), 1,
      sym_procedure_division,
  [1054] = 2,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    ACTIONS(245), 1,
      anon_sym_COLON,
  [1061] = 1,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1066] = 2,
    ACTIONS(249), 1,
      sym__NUMBER,
    STATE(99), 1,
      sym__exp,
  [1073] = 1,
    ACTIONS(251), 2,
      anon_sym_DOT,
      sym__AS,
  [1078] = 1,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      sym__IDENTIFICATION,
  [1083] = 2,
    ACTIONS(253), 1,
      sym_screen_section,
    ACTIONS(255), 1,
      sym__PROCEDURE,
  [1090] = 2,
    ACTIONS(187), 1,
      sym_screen_section,
    ACTIONS(189), 1,
      sym__PROCEDURE,
  [1097] = 2,
    ACTIONS(154), 1,
      sym_screen_section,
    ACTIONS(156), 1,
      sym__PROCEDURE,
  [1104] = 1,
    ACTIONS(156), 1,
      sym__PROCEDURE,
  [1108] = 1,
    ACTIONS(257), 1,
      sym__DIVISION,
  [1112] = 1,
    ACTIONS(189), 1,
      sym__PROCEDURE,
  [1116] = 1,
    ACTIONS(259), 1,
      sym__PROCEDURE,
  [1120] = 1,
    ACTIONS(24), 1,
      anon_sym_DOT,
  [1124] = 1,
    ACTIONS(50), 1,
      anon_sym_DOT,
  [1128] = 1,
    ACTIONS(261), 1,
      sym__RUN,
  [1132] = 1,
    ACTIONS(263), 1,
      anon_sym_DOT,
  [1136] = 1,
    ACTIONS(255), 1,
      sym__PROCEDURE,
  [1140] = 1,
    ACTIONS(265), 1,
      anon_sym_DOT,
  [1144] = 1,
    ACTIONS(267), 1,
      anon_sym_DOT,
  [1148] = 1,
    ACTIONS(233), 1,
      sym__PROCEDURE,
  [1152] = 1,
    ACTIONS(269), 1,
      anon_sym_DOT,
  [1156] = 1,
    ACTIONS(271), 1,
      anon_sym_DOT,
  [1160] = 1,
    ACTIONS(273), 1,
      anon_sym_DOT,
  [1164] = 1,
    ACTIONS(275), 1,
      sym__SECTION,
  [1168] = 1,
    ACTIONS(277), 1,
      anon_sym_DOT,
  [1172] = 1,
    ACTIONS(279), 1,
      sym__WORD,
  [1176] = 1,
    ACTIONS(281), 1,
      anon_sym_DOT,
  [1180] = 1,
    ACTIONS(215), 1,
      sym__PROCEDURE,
  [1184] = 1,
    ACTIONS(283), 1,
      anon_sym_DOT,
  [1188] = 1,
    ACTIONS(285), 1,
      sym__PROGRAM_ID,
  [1192] = 1,
    ACTIONS(287), 1,
      sym__LITERAL,
  [1196] = 1,
    ACTIONS(289), 1,
      sym__DIVISION,
  [1200] = 1,
    ACTIONS(291), 1,
      anon_sym_DOT,
  [1204] = 1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [1208] = 1,
    ACTIONS(295), 1,
      anon_sym_COLON,
  [1212] = 1,
    ACTIONS(297), 1,
      anon_sym_DOT,
  [1216] = 1,
    ACTIONS(299), 1,
      sym__DIVISION,
  [1220] = 1,
    ACTIONS(301), 1,
      anon_sym_DOT,
  [1224] = 1,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
  [1228] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 102,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 174,
  [SMALL_STATE(8)] = 211,
  [SMALL_STATE(9)] = 243,
  [SMALL_STATE(10)] = 269,
  [SMALL_STATE(11)] = 298,
  [SMALL_STATE(12)] = 322,
  [SMALL_STATE(13)] = 345,
  [SMALL_STATE(14)] = 368,
  [SMALL_STATE(15)] = 391,
  [SMALL_STATE(16)] = 414,
  [SMALL_STATE(17)] = 437,
  [SMALL_STATE(18)] = 460,
  [SMALL_STATE(19)] = 483,
  [SMALL_STATE(20)] = 506,
  [SMALL_STATE(21)] = 529,
  [SMALL_STATE(22)] = 552,
  [SMALL_STATE(23)] = 575,
  [SMALL_STATE(24)] = 588,
  [SMALL_STATE(25)] = 613,
  [SMALL_STATE(26)] = 630,
  [SMALL_STATE(27)] = 647,
  [SMALL_STATE(28)] = 664,
  [SMALL_STATE(29)] = 686,
  [SMALL_STATE(30)] = 703,
  [SMALL_STATE(31)] = 717,
  [SMALL_STATE(32)] = 733,
  [SMALL_STATE(33)] = 741,
  [SMALL_STATE(34)] = 755,
  [SMALL_STATE(35)] = 771,
  [SMALL_STATE(36)] = 785,
  [SMALL_STATE(37)] = 801,
  [SMALL_STATE(38)] = 812,
  [SMALL_STATE(39)] = 825,
  [SMALL_STATE(40)] = 836,
  [SMALL_STATE(41)] = 847,
  [SMALL_STATE(42)] = 860,
  [SMALL_STATE(43)] = 873,
  [SMALL_STATE(44)] = 886,
  [SMALL_STATE(45)] = 896,
  [SMALL_STATE(46)] = 904,
  [SMALL_STATE(47)] = 914,
  [SMALL_STATE(48)] = 924,
  [SMALL_STATE(49)] = 932,
  [SMALL_STATE(50)] = 940,
  [SMALL_STATE(51)] = 948,
  [SMALL_STATE(52)] = 954,
  [SMALL_STATE(53)] = 964,
  [SMALL_STATE(54)] = 974,
  [SMALL_STATE(55)] = 984,
  [SMALL_STATE(56)] = 990,
  [SMALL_STATE(57)] = 998,
  [SMALL_STATE(58)] = 1006,
  [SMALL_STATE(59)] = 1016,
  [SMALL_STATE(60)] = 1021,
  [SMALL_STATE(61)] = 1028,
  [SMALL_STATE(62)] = 1035,
  [SMALL_STATE(63)] = 1040,
  [SMALL_STATE(64)] = 1047,
  [SMALL_STATE(65)] = 1054,
  [SMALL_STATE(66)] = 1061,
  [SMALL_STATE(67)] = 1066,
  [SMALL_STATE(68)] = 1073,
  [SMALL_STATE(69)] = 1078,
  [SMALL_STATE(70)] = 1083,
  [SMALL_STATE(71)] = 1090,
  [SMALL_STATE(72)] = 1097,
  [SMALL_STATE(73)] = 1104,
  [SMALL_STATE(74)] = 1108,
  [SMALL_STATE(75)] = 1112,
  [SMALL_STATE(76)] = 1116,
  [SMALL_STATE(77)] = 1120,
  [SMALL_STATE(78)] = 1124,
  [SMALL_STATE(79)] = 1128,
  [SMALL_STATE(80)] = 1132,
  [SMALL_STATE(81)] = 1136,
  [SMALL_STATE(82)] = 1140,
  [SMALL_STATE(83)] = 1144,
  [SMALL_STATE(84)] = 1148,
  [SMALL_STATE(85)] = 1152,
  [SMALL_STATE(86)] = 1156,
  [SMALL_STATE(87)] = 1160,
  [SMALL_STATE(88)] = 1164,
  [SMALL_STATE(89)] = 1168,
  [SMALL_STATE(90)] = 1172,
  [SMALL_STATE(91)] = 1176,
  [SMALL_STATE(92)] = 1180,
  [SMALL_STATE(93)] = 1184,
  [SMALL_STATE(94)] = 1188,
  [SMALL_STATE(95)] = 1192,
  [SMALL_STATE(96)] = 1196,
  [SMALL_STATE(97)] = 1200,
  [SMALL_STATE(98)] = 1204,
  [SMALL_STATE(99)] = 1208,
  [SMALL_STATE(100)] = 1212,
  [SMALL_STATE(101)] = 1216,
  [SMALL_STATE(102)] = 1220,
  [SMALL_STATE(103)] = 1224,
  [SMALL_STATE(104)] = 1228,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_word, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_word, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_word_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_word_repeat1, 2), SHIFT_REPEAT(90),
  [18] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_word_repeat1, 2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_word, 2),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_word, 2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(29),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(29),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_description_repeat1, 2), SHIFT_REPEAT(44),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_1, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_1, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_1, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_1, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subref, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__subref, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__refmod, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__refmod, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_9, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_9, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_clause, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_name, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entry_name, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__identifier_1, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__identifier_1, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_redefines_clause, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_redefines_clause, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_picture_clause, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_picture_clause, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(50),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(49),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2), SHIFT_REPEAT(83),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_working_storage_section_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_working_storage_section, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_working_storage_section_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_division, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_procedure_division_repeat1, 2), SHIFT_REPEAT(79),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_start_repeat1, 2), SHIFT_REPEAT(74),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 5),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 6),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identification_division, 8),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp_list, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 6),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_name, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 8),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_division, 9),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as_literal, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_description, 4),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stop_run_statement, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
