function sepBy(pattern, separator) {
  return seq(pattern, repeat(seq(separator, pattern)))
}

function nonempty(pattern1, pattern2) {
  return choice(
    seq(pattern1, optional(pattern2)),
    pattern2
  )
}

function k(keyword) {
  return new RegExp(keyword
    .split('')
    .map(l => l.toLowerCase() !== l.toUpperCase()
      ? `[${l.toLowerCase()}${l.toUpperCase()}]` : l)
    .join('')
  )
}

module.exports = grammar({
  name: 'COBOL',
  word: $ => $._WORD,
  externals: $ => [
    $._WHITE_SPACES,
    $._LINE_PREFIX_COMMENT,
    $._LINE_SUFFIX_COMMENT,
    $._LINE_COMMENT,
    $._multiline_string,
  ],

  extras: $ => [
    $._WHITE_SPACES,
    $._LINE_PREFIX_COMMENT,
    $._LINE_SUFFIX_COMMENT,
    $._LINE_COMMENT,
  ],

  rules: {
    start: $ => repeat(
      choice(
        $.program_definition,
        //optional($.function_definition) //todo
      )
    ),

    program_definition: $ => seq(
      $.identification_division,
      optional($.environment_division),
      //optional($.data_division),
      //optional($.procedure_division), //todo
      //optional($.nested_prog), //todo
      //optional($.end_program), //todo
    ),

    identification_division: $ => seq(
      k('identification'), k('division'), '.',
      k('program_id'), '.',
      $.program_name,
      optional($.as_literal),
      '.'
    ),

    program_name: $ => choice(
      $._WORD,
      $._LITERAL
    ),

    as_literal: $ => seq(
      k('AS'),
      $._LITERAL
    ),

    function_definition: $ => /todo_function_definition/,

    environment_division: $ => seq(
      k('environment'),
      k('division'),
      '.',
      optional($.configuration_section),
      optional($.input_output_section),
    ),

    configuration_section: $ => seq(
      k('configuration'),
      k('section'),
      '.',
      repeat($._configuration_paragraph)
    ),

    _configuration_paragraph: $ => choice(
      $.source_computer_paragraph,
      $.object_computer_paragraph,
      $.special_names_paragraph,
      $.repository_paragraph,
    ),

    source_computer_paragraph: $ => seq(
      k('source-computer'),
      '.',
      optional($._source_computer_entry),
    ),

    _source_computer_entry: $ => choice(
      seq($.WORD, '.'),
      seq($.WORD, $.with_debugging_mode, '.'),
      seq($.with_debugging_mode, '.')
    ),

    with_debugging_mode: $ => seq(
      optional(k('with')),
      k('debugging'),
      k('mode')
    ),

    object_computer_paragraph: $ => seq(
      k('object_computer'),
      '.',
      optional($._object_computer_entry)
    ),

    _object_computer_entry: $ => choice(
      seq($.WORD, '.'),
      seq($.WORD, repeat1($._object_clause), '.'),
      seq(repeat1($._object_clause), '.')
    ),

    _object_clause: $ => choice(
      $.object_computer_memory,
      $.object_computer_sequence,
      $.object_computer_segment
    ),

    object_computer_memory: $ => seq(
      k('memory'),
      k('size'),
      optional(k('is')),
      $.integer,
      choice(
        alias(k('characters'), $.CHARACTERS),
        alias(k('words'), $.WORDS)
      )
    ),

    object_computer_sequence: $ => seq(
      optional(k('program')),
      $._coll_sequence,
      optional(k('is')),
      $.qualified_word
    ),

    _coll_sequence: $ => seq(
      optional(k('collating')),
      k('sequence')
    ),

    object_computer_segment: $ => seq(
      k('segment_limit'),
      optional(k('is')),
      $.integer
    ),

    special_names_paragraph: $ => seq(
      k('special_names'),
      '.',
      repeat($.special_name),
      optional('.')
    ),

    special_name: $ => choice(
      $.mnemonic_name_clause,
      $.alphabet_name_clause,
      $.symbolic_characters_clause,
      $.locale_clause,
      $.class_name_clause,
      $.currency_sign_clause,
      $.decimal_point_clause,
      $.cursor_clause,
      $.crt_status_clause,
      $.screen_control,
      $.event_status,
    ),

    mnemonic_name_clause: $ => /todo_mnemonic_name/,
    alphabet_name_clause: $ => seq(
      k('alphabet'),
      field('word', $.WORD),
      optional(k('is')),
      field('value', $._alphabet_definition),
    ),

    _alphabet_definition: $ => choice(
      alias(k('native'), $.NATIVE),
      alias(k('standard_1'), $.STANDARD_1),
      alias(k('standard_2'), $.STANDARD_2),
      alias(k('ebcdic'), $.EBCDIC),
      repeat1($.alphabet_literal),
    ),

    alphabet_literal: $ => choice(
      sepBy($._alphabet_lits, k('also')),
      seq($._alphabet_lits, k('thru'), $._alphabet_lits),
    ),

    LITERAL: $ => $._LITERAL,

    _alphabet_lits: $ => choice(
      $.LITERAL,
      $.SPACE,
      $.ZERO,
      $.QUOTE,
      $.HIGH_VALUE,
      $.LOW_VALUE
    ),

    symbolic_characters_clause: $ => /todo_symbolic_character_name/,
    locale_clause: $ => /todo_locale_name/,
    class_name_clause: $ => /todo_class_name/,
    currency_sign_clause: $ => /todo_currency_sign_name/,
    decimal_point_clause: $ => /todo_decimal_point_name/,
    cursor_clause: $ => /todo_cursor_name/,
    crt_status_clause: $ => /todo_crt_status_name/,
    screen_control: $ => /todo_screen_control_name/,
    event_status: $ => /todo_event_status_name/,

    repository_paragraph: $ => seq(
      k('repository'),
      '.',
      optional($._repository)
    ),

    _repository: $ => seq(
      repeat1($.repository_name),
      '.'
    ),

    repository_name: $ => seq(
      k('function'),
      choice(
        repeat1($.LITERAL),
        k('all')
      ),
      k('intrinsic')
    ),

    input_output_section: $ => choice(
      seq(
        k('input_output'), k('section'), '.',
        optional($._file_control_paragraph),
        optional($._i_o_control_paragraph)
      ),
      $._file_control_paragraph,
      $._i_o_control_paragraph,
    ),

    _file_control_paragraph: $ => seq(
      k('file_control'), '.',
      repeat($.select_statement)
    ),

    select_statement: $ => seq(
      k('select'),
      field('optional', optional(alias(k('optional'), $.OPTIONAL))),
      field('file_name', $.WORD),
      repeat($._select_clause),
      '.'
    ),

    _i_o_control_paragraph: $ => seq(
      k('i_o_control'), '.', optional($.i_o_control),
    ),

    i_o_control: $ => choice(
      seq(repeat1($.i_o_control_clause), optional('.')),
      seq(repeat1($.apply_clause), optional('.')),
    ),

    i_o_control_clause: $ => choice(
      $.same_clause,
      $.multiple_file_tape_clause
    ),

    same_clause: $ => /todo_same_clause/,
    multiple_file_tape_clause: $ => /todo_multiple_file_tape_clause/,

    apply_clause: $ => /todo_apply_clause/,

    _select_clause: $ => choice(
      $.assign_clause,
      $.access_mode_clause,
      $.alternative_record_key,
      $.collating_sequence_clause,
      $.file_status_clause,
      $.lock_mode_clause,
      $.organization_clause,
      $.padding_character_clause,
      $.record_delimiter_clause,
      $.record_key_clause,
      $.relative_key_clause,
      $.reserve_clause,
      $.sharing_clause,
      $.error,
      $.nominal_key_clause,
    ),

    assign_clause: $ => seq(
      k('assign'),
      optional(k('to')),
      field('external_or_dynamic', optional($._ext_clause)),
      field('to', choice(
        alias(k('disk'), $.DISK),
        alias(k('printer'), $.PRINTER),
        seq(optional($._device), $._assignment_name),
      ))
    ),

    _ext_clause: $ => choice(
      alias(k('external'), $.EXTERNAL),
      alias(k('dynamic'), $.DYNAMIC)
    ),

    _device: $ => choice(
      alias(k('disk'), $.DISK),
      alias(k('printer'), $.PRINTER)
    ),

    _assignment_name: $ => choice(
      $._LITERAL,
      alias(k('display'), $.DISPLAY),
      seq(
        optional($._LITERAL), repeat1($.qualified_word)
      )
    ),

    access_mode_clause: $ => seq(
      k('access'),
      optional(k('mode')),
      optional(k('is')),
      choice(
        alias(k('sequential'), $.SEQUENTIAL),
        alias(k('dynamic'), $.DYNAMIC),
        alias(k('random'), $.RANDOM)
      )
    ),

    alternative_record_key: $ => seq(
      k('alternate'),
      k('record'),
      optional(k('key')),
      optional(k('is')),
      field('reference', $.qualified_word),
      field('with_dups', optional($.with_dups)),
    ),

    with_dups: $ => seq(
      optional(k('with')),
      k('duplicates')
    ),

    collating_sequence_clause: $ => seq(
      $._coll_sequence,
      optional(k('is')),
      $.WORD
    ),

    _coll_sequence: $ => seq(
      optional(k('collating')),
      k('sequence')
    ),

    file_status_clause: $ => seq(
      field('file_or_sort', optional($._file_or_sort)),
      k('status'),
      optional(k('is')),
      field('reference', $.qualified_word),
      field('reference2', optional($.qualified_word)),
    ),

    _file_or_sort: $ => choice(
      alias(k('file'), $.FILE),
      alias(k('sort'), $.SORT),
    ),

    lock_mode_clause: $ => seq(
      k('lock'),
      optional(k('mode')),
      optional(k('is')),
      $.lock_mode
    ),

    lock_mode: $ => choice(
      seq(
        choice(alias(k('manual'), $.MANUAL), alias(k('automatic'), $.AUTOMATIC)),
        field('lock_with', optional($._lock_with))
      ),
      alias(k('exclusive'), $.EXCLUSIVE)
    ),

    _lock_with: $ => (
      seq(
        k('with'), k('lock'), k('on'),
        optional(alias(k('multiple'), $.MULTIPLE)),
        choice(k('record'), k('records'))
      ),
      seq(k('with'), alias(k('record'), $.RECORD))
    ),

    organization_clause: $ => seq(
      optional(seq(k('organization'), optional(k('is')))),
      choice(
        alias(k('indexed'), $.INDEXED),
        seq(alias(k('record'), $.RECORD), optional(k('binary')), alias(k('sequential'), $.SEQUENTIAL)),
        alias(k('sequential'), $.SEQUENTIAL),
        alias(k('relative'), $.RELATIVE),
      )
    ),

    padding_character_clause: $ => seq(
      k('padding'),
      optional(k('character')),
      optional(k('is')),
      choice($.qualified_word, $._LITERAL)
    ),

    record_delimiter_clause: $ => seq(
      k('record'),
      k('delimiter'),
      optional(k('is')),
      k('STANDARD_1')
    ),

    record_key_clause: $ => seq(
      k('record'),
      optional(k('key')),
      optional(k('is')),
      field('reference', $.qualified_word),
      optional(seq(
        field('key_is_eq', optional(choice(
          seq(alias(k('source'), $.SOURCE), k('is')),
          '='
        ))
        ),
        field('split_key_list', repeat1($.qualified_word))
      ))
    ),

    relative_key_clause: $ => seq(
      k('relative'),
      optional(k('key')),
      optional(k('is')),
      $.qualified_word
    ),

    reserve_clause: $ => seq(
      k('reserve'),
      choice(
        seq($.integer, optional(k('area'))),
        alias(k('no'), $.NO)
      )
    ),

    sharing_clause: $ => seq(
      k('sharing'),
      optional(k('with')),
      choice(
        seq(alias(k('all'), $.ALL), optional(k('other'))),
        seq(alias(k('no'), $.NO), optional(k('other'))),
        seq(alias(k('read'), $.READ), alias(k('only'), $.ONLY)),
      )
    ),

    error: $ => /todo_error/,

    nominal_key_clause: $ => seq(
      k('nominal'),
      optional(k('key')),
      optional(k('is')),
      $.qualified_word
    ),

    data_division: $ => seq(
      k('data'), k('division'), '.',
      optional($.file_section),
      optional($.working_storage_section),
      optional($.local_storage_section),
      optional($.linkage_section),
      optional($.report_section),
      optional($.screen_section),
    ),

    file_section: $ => choice(
      seq(
        k('file'),
        k('section'),
        '.',
        repeat($.file_description)
      ),
      seq(
        $.file_type,
        seq(
          $.file_description_entry,
          optional($.record_description_list),
          repeat1($.file_description)
        )
      )
    ),

    file_description: $ => seq(
      $.file_type,
      $.file_description_entry,
      $.record_description_list
    ),

    file_type: $ => choice(
      alias(k('fd'), $.FD),
      alias(k('sd'), $.SD)
    ),

    file_description_entry: $ => seq(
      alias(k('word'), $.WORD),
      repeat($.file_description_clause),
      '.'
    ),

    file_description_clause: $ => choice(
      seq(optional(k('is')), alias(k('external'), $.EXTERNAL)),
      seq(optional(k('is')), alias(k('global'), $.GLOBAL)),
      $.block_contains_clause,
      $.record_clause,
      $.label_records_clause,
      $.value_of_clause,
      $.data_records_clause,
      $.linage_clause,
      $.recording_mode_clause,
      $.code_set_clause,
      $.report_clase,
      $.error,
    ),

    block_contains_clause: $ => prec.left(seq(
      k('block'),
      optional(k('contains')),
      field('num', $.integer),
      field('to', optional(seq(k('to'), $.integer))),
      optional(choice(k('record'), k('records')))
    )),

    record_clause: $ => choice(
      seq(
        k('record'),
        optional(k('contains')),
        field('num', $.integer),
        field('to', optional(seq(k('to'), $.integer))),
        optional(k('characters'))
      ),
      seq(
        k('record'),
        optional(k('is')),
        alias(k('varying'), $.VARYING),
        optional(k('in')),
        optional(k('size')),
        field('from', optional(seq(k('from'), $.integer))),
        field('to', optional(seq(k('to'), $.integer))),
        optional(k('characters')),
        field('depend', optional(seq(k('depending'), optional(k('on')), $.qualified_word))),
      )
    ),

    label_records_clause: $ => seq(
      $._LABEL,
      $.records,
      optional(choice(alias(k('standard'), $.STANDARD), alias(k('omitted'), $.OMITTED)))
    ),

    records: $ => prec.left(choice(
      seq(k('record'), optional(k('is'))),
      seq(k('records'), optional(k('are'))),
    )),

    value_of_clause: $ => seq(
      k('value'), k('of'),
      field('name', choice($.WORD, alias(k('file_id'), $.FILE_ID))),
      optional(k('is')),
      field('value', choice($._LITERAL, $.qualified_word))
    ),

    data_records_clause: $ => prec.left(choice(
      k('data'),
      $.records,
      repeat1($.qualified_word),
    )),

    linage_clause: $ => seq(
      $._LINAGE,
      optional(k('is')),
      field('reference', choice($.qualified_word, $._LITERAL)),
      optional(k('lines')),
      field('lines', repeat($.linage_lines)),
    ),

    linage_lines: $ => choice(
      $.linage_footing,
      $.linage_top,
      $.linage_bottom
    ),

    linage_footing: $ => seq(
      optional(k('with')),
      k('footing'),
      optional(k('at')),
      field('reference', choice($.qualified_word, $._LITERAL)),
      k('LINES')
    ),

    linage_top: $ => seq(
      optional(k('at')),
      k('top'),
      field('reference', choice($.qualified_word, $._LITERAL)),
      k('LINES')
    ),

    linage_bottom: $ => seq(
      optional(k('at')),
      k('bottom'),
      field('reference', choice($.qualified_word, $._LITERAL)),
    ),

    recording_mode_clause: $ => seq(
      k('recording'),
      optional(k('mode')),
      optional(k('is')),
      field('mode', $.WORD)
    ),

    code_set_clause: $ => seq(
      k('code_set'),
      optional(k('is')),
      field('code_set', $.WORD)
    ),

    report_clase: $ => choice(
      seq(k('report'), optional(k('is')), field('name', $.WORD)),
      seq(k('reports'), optional(k('are')), field('name', $.WORD)),
    ),

    record_description_list: $ => seq(
      repeat1(seq($.data_description, '.'))
    ),

    working_storage_section: $ => seq(
      k('working_storage'), k('section'), '.',
      repeat(seq($.data_description, '.'))
    ),

    data_description: $ => choice(
      $.constant_entry,
      seq(
        $.level_number, $.entry_name,
        repeat($._data_description_clause), optional($._LITERAL)
      ),
      seq(
        $.level_number_88, $.entry_name
      ),
    ),

    level_number: $ => /[0-9][0-9]/,
    level_number_88: $ => /88/,

    entry_name: $ => choice(
      k('filler'),
      k('WORD')
    ),

    constant_entry: $ => /todo_constant_entry/,

    _data_description_clause: $ => choice(
      $.redefines_clause,
      $.external_clause,
      $.global_clause,
      $.picture_clause,
      $.usage_clause,
      $.sign_clause,
      $.occurs_clause,
      $.justified_clause,
      $.synchronized_clause,
      $.blank_clause,
      $.based_clause,
      $.value_clause,
      $.renames_clause,
      $.any_length_clause,
      $.error
    ),

    redefines_clause: $ => seq(
      k('redefines'), $._identifier
    ),

    _exp_list: $ => sepBy(
      $._exp, $._e_sep
    ),

    _exp: $ => choice(
      $._arith_x,
      $._binary_exp,
      $._unary_exp,
      seq('(', $._exp, ')')
    ),

    _binary_exp: $ => choice(
      $.pow_exp,
      $.mul_exp,
      $.div_exp,
      $.add_exp,
      $.sub_exp,
    ),

    _unary_exp: $ => prec(4, choice(
      $.positive_exp,
      $.negative_exp
    )),

    positive_exp: $ => seq(
      '+',
      field('value', $._exp)
    ),

    negative_exp: $ => seq(
      '-',
      field('value', $._exp)
    ),

    add_exp: $ => prec.left(1, seq(
      field('left', $._exp),
      '+',
      field('right', $._exp)
    )),

    sub_exp: $ => prec.left(1, seq(
      field('left', $._exp),
      '-',
      field('right', $._exp)
    )),

    mul_exp: $ => prec.left(2, seq(
      field('left', $._exp),
      '*',
      field('right', $._exp)
    )),

    div_exp: $ => prec.left(2, seq(
      field('left', $._exp),
      '/',
      field('right', $._exp)
    )),

    pow_exp: $ => prec.left(3, seq(
      field('left', $._exp),
      '^',
      field('right', $._exp)
    )),

    //todo
    _arith_x: $ => choice(
      $._identifier,
      seq(alias(k('length'), $.LENGTH), optional(k('of')), $._identifier),
      seq(alias(k('length'), $.LENGTH), optional(k('of')), $._basic_literal),
      seq(alias(k('length'), $.LENGTH), optional(k('of')), $.function_),
      $._basic_literal,
      $.function_,
      $.linage_counter,
    ),

    external_clause: $ => /todo_external_clause/,
    global_clause: $ => /todo_global_clause/,
    picture_clause: $ => seq(
      choice(k('picture'), k('pic')),
      optional(k('is')),
      $._picture_string
    ),

    //todo
    _picture_string: $ => choice(
      $.picture_x,
      $.picture_9,
      $.picture_a,
      $.picture_edit,
    ),

    picture_x: $ => /([xX](\([0-9]+\))?)+/,

    picture_9: $ => choice(
      $._picture_9_z,
      $._picture_9_v_1,
      $._picture_9_v_2,
    ),
    _picture_9_z: $ => /[sS]?(9(\([0-9]+\))?)+([zZ](\([0-9]+\))?)+/,
    _picture_9_v_1: $ => /[sS]?([pP9](\([0-9]+\))?)+([vV]([pP9](\([0-9]+\))?)+)?/,
    _picture_9_v_2: $ => /[sS]?[vV]([pP9](\([0-9]+\))?)+/,

    picture_a: $ => /([aA](\([0-9]+\))?)+/,

    //picture_edit: $ => /([aAxX9bBvVzZpP](\([0-9]+\))?|[0$/,*+-]|[cC][rR]|[dD][bB]|\.[^ \n\t])+/,
    picture_edit: $ => /([aAxX9bBvVzZpP0-9()$/,*+-]|[cC][rR]|[dD][bB]|\.[^ \n\t])+/,

    usage_clause: $ => seq(
      optional(seq(k('usage'), optional($._IS))),
      $._usage
    ),

    _usage: $ => choice(
      alias(k('binary'), $.BINARY),
      alias(k('computational'), $.COMPUTATIONAL),
      alias(k('comp-1'), $.COMP_1),
      alias(k('comp-2'), $.COMP_2),
      alias(k('comp-3'), $.COMP_3),
      alias(k('comp-4'), $.COMP_4),
      alias(k('comp-5'), $.COMP_5),
      alias(k('comp-x'), $.COMP_5),
      alias(k('display'), $.DISPLAY),
      alias(k('index'), $.INDEX),
      alias(k('packed-decimal'), $.PACKED_DECIMAL),
      alias(k('pointer'), $.POINTER),
      alias(k('program-pointer'), $.PROGRAM_POINTER),
      alias(k('signed-short'), $.SIGNED_SHORT),
      alias(k('signed-int'), $.SIGNED_INT),
      alias(k('signed-long'), $.SIGNED_LONG),
      alias(k('unsigned-short'), $.UNSIGNED_SHORT),
      alias(k('unsigned-int'), $.UNSIGNED_INT),
      alias(k('unsigned-long'), $.UNSIGNED_LONG),
      //TODO add alias
      seq(k('binary_char'), k('signed')),
      seq(k('binary_char'), k('unsigned')),
      k('binary_char'),
      seq(k('binary_short'), k('signed')),
      seq(k('binary_short'), k('unsigned')),
      k('binary_short'),
      seq(k('binary_long'), k('signed')),
      seq(k('binary_long'), k('unsigned')),
      k('binary_long'),
      seq(k('binary_double'), k('signed')),
      seq(k('binary_double'), k('unsigned')),
      k('binary_double'),
      seq(k('binary_c_long'), k('signed')),
      seq(k('binary_c_long'), k('unsigned')),
      k('binary_c_long'),
      k('NATIONAL')
    ),

    sign_clause: $ => seq(
      optional(k('sign')),
      optional(k('is')),
      choice(alias(k('leading'), $.LEADING), alias(k('trailing'), $.TRAILING)),
      optional(seq(alias('separate', $.SEPARATE), optional(k('character'))))
    ),

    occurs_clause: $ => seq(
      k('occurs'),
      field('num', $.integer),
      field('to', optional(seq(k('to'), $.integer))),
      optional(k('times')),
      field('depending', optional(seq(k('depending'), optional(k('on')), $.qualified_word))),
      field('key_spec', optional($.occurs_key_spec)),
    ),

    occurs_key_spec: $ => /todo_occurs_key_spec/,

    justified_clause: $ => /todo_justified_clause/,
    synchronized_clause: $ => /todo_synchronized_clause/,
    blank_clause: $ => /todo_blank_clause/,
    based_clause: $ => /todo_based_clause/,
    value_clause: $ => seq(k('value'), optional(k('is')), $._literal),
    renames_clause: $ => /todo_renames_clause/,
    any_length_clause: $ => /todo_any_length/,
    error: $ => /todo_error/,

    local_storage_section: $ => /local_storage_section/,
    linkage_section: $ => /linkage_section/,
    report_section: $ => /report_section/,
    screen_section: $ => /screen_section/,

    //todo
    procedure_division: $ => seq(
      k('procedure'), k('division'),
      optional($.procedure_using_chaining),
      optional($.procedure_returning),
      '.',
      optional($.procedure_declaratives),
      repeat($._procedure),
    ),

    procedure_using_chaining: $ => seq(
      choice(alias(k('using'), $.USING), alias(k('chaining'), $.CHAINING)),
      repeat($.procedure_param),
    ),

    procedure_param: $ => seq(
      optional($.procedure_type),
      optional($.size),
      optional(alias(k('optional'), $.OPTIONAL)),
      $._WORD
    ),

    procedure_type: $ => seq(
      optional(k('by')),
      choice(alias(k('value'), $.VALUE), alias(k('reference'), $.REFERENCE))
    ),

    size: $ => choice(
      seq(alias(k('size'), $.SIZE), optional(k('is')), alias(k('auto'), $.AUTO)),
      seq(alias(k('size'), $.SIZE), optional(k('is')), alias(k('default'), $.DEFAULT)),
      seq(alias(k('unsigned'), $.UNSIGNED), alias(k('size'), $.SIZE), optional(k('is')), $.integer),
      seq(alias(k('size'), $.SIZE), optional(k('is')), $.integer),
    ),

    procedure_type: $ => seq(
      optional(k('by')),
      choice(alias(k('reference'), $.REFERENCE), alias(k('value'), $.VALUE))
    ),

    procedure_returning: $ => seq(
      k('returning'),
      $._WORD
    ),

    procedure_declaratives: $ => seq(
      k('declaratives'), '.',
      repeat($._procedure),
      k('end'), k('declaratives'), '.'
    ),

    _procedure: $ => choice(
      $.section_header,
      $.paragraph_header,
      $._procedure_division_statement
    ),

    section_header: $ => seq(
      field('name', $._WORD),
      k('section'),
      optional($._LITERAL),
      '.'
    ),

    paragraph_header: $ => seq(
      field('name', $._WORD),
      '.'
    ),

    nested_prog: $ => /todo_nested_prog/,
    end_program: $ => /todo_end_program/,

    _procedure_division_statement: $ => choice(
      //$.accept_statement,
      seq($.add_statement, nonempty(k('end_add'), '.')),
      //$.allocate_statement,
      //$.alter_statement,
      //$.call_statement,
      //$.cancel_statement,
      seq($.close_statement, '.'),
      //$.commit_statement,
      //$.compute_statement,
      seq($.continue_statement, '.'),
      //$.delete_statement,
      //$.delete_file_statement,
      seq($.display_statement, nonempty(k('end_display'), '.')),
      //$.divide_statement,
      //$.entry_statement,
      seq($.evaluate_statement, nonempty(k('end_evaluate'), '.')),
      //$.exit_statement,
      //$.free_statement,
      //$.generate_statement,
      seq($.goto_statement, '.'),
      //$.goback_statement,
      seq($.if_statement, nonempty(k('end_if'), '.')),
      //$.initialize_statement,
      //$.initiate_statement,
      //$.inspect_statement,
      //$.merge_statement,
      seq($.move_statement, '.'),
      seq($.multiply_statement, nonempty(k('end_multiply'), '.')),
      seq($.open_statement, '.'),
      seq($.perform_statement),
      //$.read_statement,
      //$.release_statement,
      //$.return_statement,
      //$.rewrite_statement,
      //$.rollback_statement,
      //$.search_statement,
      //$.set_statement,
      //$.sort_statement,
      //$.start_statement,
      seq($.stop_statement, '.'),
      //$.string_statement,
      //$.subtract_statement,
      //$.suppress_statement,
      //$.terminate_statement,
      //$.transform_statement,
      //$.unlock_statement,
      //$.unstring_statement,
      //$.use_statement,
      seq($.write_statement, nonempty(k('end_multiply'), '.')),
      //$.NEXT_SENTENCE,
    ),


    //todo
    _statement: $ => choice(
      //$.accept_statement,
      $.add_statement_in_block,
      //$.allocate_statement,
      //$.alter_statement,
      //$.call_statement,
      //$.cancel_statement,
      $.close_statement,
      //$.commit_statement,
      //$.compute_statement,
      $.continue_statement,
      //$.delete_statement,
      //$.delete_file_statement,
      $.display_statement_in_block,
      //$.divide_statement,
      //$.entry_statement,
      seq($.evaluate_statement, k('end_evaluate')),
      //$.exit_statement,
      //$.free_statement,
      //$.generate_statement,
      $.goto_statement,
      //$.goback_statement,
      seq($.if_statement, k('end_if')),
      //$.initialize_statement,
      //$.initiate_statement,
      //$.inspect_statement,
      //$.merge_statement,
      $.move_statement,
      $.multiply_statement_in_block,
      $.open_statement,
      $.perform_statement_in_block,
      //$.read_statement,
      //$.release_statement,
      //$.return_statement,
      //$.rewrite_statement,
      //$.rollback_statement,
      //$.search_statement,
      //$.set_statement,
      //$.sort_statement,
      //$.start_statement,
      $.stop_statement,
      //$.string_statement,
      //$.subtract_statement,
      //$.suppress_statement,
      //$.terminate_statement,
      //$.transform_statement,
      //$.unlock_statement,
      //$.unstring_statement,
      //$.use_statement,
      $.write_statement_in_block,
      //$.NEXT_SENTENCE,
    ),

    _statements1: $ => repeat1($._statement),

    //todo
    stop_statement: $ => seq(
      k('stop'), k('RUN')
    ),

    add_statement: $ => prec.left(seq(
      k('add'),
      $._add_body,
      optional($._size_error_block),
    )),

    add_statement_in_block: $ => prec.left(seq(
      k('add'),
      $._add_body,
      optional(seq(
        optional($._size_error_block),
        k('END_ADD')
      ))
    )),

    _add_body: $ => prec.left(seq(
      choice(
        seq(
          field('from', repeat1($._x)),
          k('to'),
          field('to', repeat1($.arithmetic_x)),
        ),
        seq(
          field('from', repeat1($._x)),
          field('to', optional(seq(k('to'), $._x))),
          k('giving'),
          field('giving', repeat1($.arithmetic_x)),
        ),
        seq(
          alias(k('corresponding'), $.CORRESPONDING),
          field('from', $._identifier),
          k('to'),
          field('to', seq($._identifier, optional(alias(k('rounded'), $.ROUNDED)))),
        )
      ),
    )),

    _size_error_block: $ => choice(
      seq($.on_size_error, optional($.not_on_size_error)),
      $.not_on_size_error,
    ),

    on_size_error: $ => prec.left(seq(
      k('on'),
      k('size'),
      k('error'),
      $._statements1
    )),

    not_on_size_error: $ => prec.left(seq(
      k('not'),
      k('on'),
      k('size'),
      k('error'),
      $._statements1
    )),

    close_statement: $ => seq(
      k('close'),
      repeat($.close_arg),
    ),

    close_arg: $ => seq(
      field('file_handler', $.WORD),
      optional($.close_option)
    ),

    close_option: $ => choice(
      seq(
        choice(alias(k('reel'), $.REEL), alias(k('unit'), $.UNIT)),
        optional($._close_removal)
      ),
      seq(optional(k('with')), alias(k('no'), $.NO), alias(k('rewind'), $.REWIND)),
      seq(optional(k('with')), alias(k('lock'), $.LOCK)),
    ),

    _close_removal: $ => seq(
      optional(k('for')),
      alias(k('removal'), $.REMOVAL),
    ),

    continue_statement: $ => k('continue'),

    display_statement: $ => prec.right(seq(
      k('display'),
      $._display_body,
      choice(
        optional($.on_disp_exception),
      )
    )),

    display_statement_in_block: $ => prec.right(seq(
      k('display'),
      $._display_body,
      choice(
        optional($.on_disp_exception),
        k('END_DISPLAY')
      )
    )),

    _display_body: $ => choice(
      seq($._id_or_lit, k('upon-environment-name')),
      seq($._id_or_lit, k('upon-environment-value')),
      seq($._id_or_lit, k('upon-argument-number')),
      seq($._id_or_lit, k('upon-command-line')),
      seq(repeat1($._x), optional($.at_line_column), optional($.with_clause)),
      seq(repeat1($._x), optional($.at_line_column), alias(k('upon'), $.UPON), alias(k('mnemonic-name'), $.MNEMONIC_NAME), optional($.with_clause)),
      seq(repeat1($._x), optional($.at_line_column), alias(k('upon'), $.UPON), $._WORD, optional($.with_clause)),
      seq(repeat1($._x), optional($.at_line_column), alias(k('upon'), $.UPON), alias(k('printer'), $.PRINTER), optional($.with_clause)),
      seq(repeat1($._x), optional($.at_line_column), alias(k('upon'), $.UPON), alias(k('crt'), $.CRT), optional($.with_clause)),
    ),

    at_line_column: $ => /todo_at_line_column/,

    _id_or_lit: $ => choice(
      $._identifier,
      $._literal
    ),

    on_disp_exception: $ => prec.right(seq(
      choice(alias(k('exception'), $.EXCEPTION), alias(k('not-exception'), $.NOT_EXCEPTION)),
      $._statements1,
    )),

    with_clause: $ => choice(
      seq(optional(alias(k('with'), $.WITH)), alias(k('no-advancing'), $.NO_ADVANCING)),
      seq(alias(k('with'), $.WITH), repeat1($.disp_attr))
    ),

    disp_attr: $ => choice(
      alias(k('bell'), $.BELL),
      alias(k('blink'), $.BLINK),
      seq(alias(k('erase'), $.ERASE), alias(k('eol'), $.EOL)),
      seq(alias(k('erase'), $.ERASE), alias(k('eos'), $.EOS)),
      alias(k('highlight'), $.HIGHLIGHT),
      alias(k('lowlight'), $.LOWLIGHT),
      alias(k('reverse-video'), $.REVERSE_VIDEO),
      alias(k('underline'), $.UNDERLINE),
      alias(k('overline'), $.OVERLINE),
      seq(
        choice(
          alias(k('foreground-color', $.FOREGROUND_COLOR)),
          alias(k('background-color', $.BACKGROUND_COLOR)),
          optional(k('is')),
          $._num_or_id_or_lit)
      ),
      seq(
        alias(k('scroll'), $.SCROLL),
        choice(alias(k('up'), $.UP), alias(k('down'), $.DOWN)),
        optional(k('is')), optional($.scroll_lines)),
      alias(k('blank-line'), $.BLANK_LINE),
      alias(k('blank-screen'), $.BLANK_SCREEN),
    ),

    _num_or_id_or_lit: $ => choice(
      $._identifier,
      $.number,//todo convert this to integer
      $.ZERO
    ),

    scroll_lines: $ => seq(
      optional($._BY),
      $._num_or_id_or_lit,
      optional($.line_or_lines),
    ),

    line_or_lines: $ => choice(alias(k('line'), $.LINE), alias(k('lines'), $.LINES)),

    evaluate_statement: $ => prec.left(seq(
      k('evaluate'),
      field('subjects', sepBy($.evaluate_subject, optional(k('also')))),
      field('cases', repeat($.evaluate_case)),
      field('other', optional($.evaluate_other)),
    )),

    evaluate_subject: $ => choice(
      $.expr,
      alias(k('true'), $.TRUE),
      alias(k('false'), $.FALSE),
    ),

    evaluate_case: $ => prec.left(seq(
      field('when', repeat1(seq($._WHEN, $._evaluate_object_list))),
      field('statements', $._statements1),
    )),

    _evaluate_object_list: $ => sepBy($._evaluate_object, optional(k('also'))),

    _evaluate_object: $ => choice(
      $.expr,
      alias(k('any'), $.ANY),
      alias(k('true'), $.TRUE),
      alias(k('false'), $.FALSE),
    ),

    evaluate_other: $ => prec.right(seq(
      k('when-other'),
      field('statement', $._statements1)
    )),

    goto_statement: $ => seq(
      k('go'), optional(k('to')),
      field('to', repeat($.label)),
      field('depending', optional(seq(k('depending'), optional(k('on')), $._identifier)))
    ),

    label: $ => choice(
      $.qualified_word,
      seq($._LITERAL, optional(seq($._in_of, $._LITERAL)))
    ),

    //todo add error if statement (see cobc/parser.y)
    if_statement: $ => prec.right(seq(
      k('if'),
      field('condition', $.expr),
      optional(k('then')),
      field('statements', $._statements1),
      field('else_statements', optional($._if_else_sentense)),
    )),

    _if_else_sentense: $ => prec.right(seq(
      k('else'),
      $._statements1
    )),

    expr: $ => prec.left(choice($._expr_logic, $._expr_calc)),

    _expr_data: $ => $._x,

    _expr_calc: $ => choice(
      $._expr_calc_binary,
      $._expr_calc_unary,
      $._expr_data
    ),

    _expr_calc_binary: $ => choice(
      prec.left(1, seq($._expr_calc, '+', $._expr_calc)),
      prec.left(1, seq($._expr_calc, '-', $._expr_calc)),
      prec.left(2, seq($._expr_calc, '*', $._expr_calc)),
      prec.left(2, seq($._expr_calc, '/', $._expr_calc)),
      prec.left(3, seq($._expr_calc, '^', $._expr_calc)),
    ),

    _expr_calc_unary: $ => prec(4, choice(
      seq('+', $._expr_calc),
      seq('-', $._expr_calc),
      seq('^', $._expr_calc),
    )),

    _expr_compare: $ => choice(
      prec.left(-1, seq($._expr_calc, $.eq, $._expr_calc)),
      prec.left(-1, seq($._expr_calc, $.gt, $._expr_calc)),
      prec.left(-1, seq($._expr_calc, $.lt, $._expr_calc)),
      prec.left(-1, seq($._expr_calc, $.ge, $._expr_calc)),
      prec.left(-1, seq($._expr_calc, $.lt, $._expr_calc)),
      prec.left(-1, seq($._expr_calc, $.ne, $._expr_calc)),
    ),

    _expr_is: $ => choice(
      seq($._expr_calc, optional($._IS), choice(
        alias(k('omitted'), $.OMITTED),
        alias(k('numeric'), $.NUMERIC),
        alias(k('alphabetic'), $.ALPHABETIC),
        alias(k('alphabetic-lower'), $.ALPHABETIC_LOWER),
        alias(k('alphanbetic-upper'), $.ALPHABETIC_UPPER),
        alias(k('class-name'), $.CLASS_NAME),
        alias(k('positive'), $.POSITIVE),
        alias(k('negative'), $.NEGATIVE),
        $.ZERO
      ))
    ),

    _expr_bool: $ => choice(
      $._expr_is,
      $._expr_compare,
    ),

    _expr_logic: $ => prec.left(choice(
      seq(alias(k('not'), $.NOT), $._expr_logic),
      seq(
        $._expr_logic,
        choice(
          alias(k('and'), $.AND),
          alias(k('or'), $.OR)
        ),
        $._expr_logic),
      $._expr_bool
    )),

    eq: $ => choice(
      '=',
      seq(optional(k('is')), $._EQUAL, optional(k('to'))),
      k('EQUALS')
    ),

    gt: $ => choice(
      '>',
      seq(optional(k('is')), k('greater'), optional(k('than')))
    ),

    lt: $ => choice(
      '<',
      seq(optional(k('is')), k('less'), optional(k('than')))
    ),

    ge: $ => choice(
      '>=',
      seq(optional(k('is')), k('greater'), optional(k('than')), optional(k('or')), k('equal'), optional(k('to'))),
    ),

    le: $ => choice(
      '<=',
      seq(optional(k('is')), k('less'), optional(k('than')), optional(k('or')), k('equal'), optional(k('to'))),
    ),

    ne: $ => choice(
      '!=',
      seq(optional(k('is')), k('not'), k('equal'), optional(k('to'))),
    ),

    move_statement: $ => seq(
      k('move'),
      $._move_body
    ),

    _move_body: $ => seq(
      optional(k('corresponding')),
      field('src', $._x),
      k('to'),
      field('dst', $._target_x_list)
    ),

    _x: $ => choice(
      seq(k('length'), optional(k('of')), choice(
        $._identifier,
        $._basic_literal,
        $.function_)
      ),
      seq(k('address'), optional(k('of')), choice(
        seq(
          choice(k('program'), k('entry')),
          choice($._identifier, $._LITERAL)),
        $._identifier,
      )),
      $._literal,
      $.function_,
      $.linage_counter,
      $._identifier,
    ),

    arithmetic_x: $ => seq(
      $._x,
      optional(alias(k('rounded'), $.ROUNDED))
    ),

    _target_x_list: $ => repeat1($._target_x),
    _target_x: $ => choice(
      $._identifier,
      seq(k('address'), optional(k('of')), $._identifier)
    ),

    multiply_statement: $ => prec.right(seq(
      k('multiply'),
      $._multiply_body,
      optional($._size_error_block),
    )),

    multiply_statement_in_block: $ => prec.right(seq(
      k('multiply'),
      $._multiply_body,
      optional(seq(
        optional($._size_error_block),
        k('END_MULTIPLY')
      ))
    )),

    _multiply_body: $ => prec.right(seq(
      choice(
        seq(
          field('val1', $._x),
          k('by'),
          field('val2', repeat1($.arithmetic_x)),
        ),
        seq(
          field('val1', $._x),
          k('by'),
          field('val2', $._x),
          k('giving'),
          field('giving', repeat1($.arithmetic_x)),
        )
      ),
      seq(
        optional($.on_size_error),
        optional($.not_on_size_error),
      )
    )),

    open_statement: $ => seq(
      k('open'),
      repeat1($.open_arg)
    ),

    open_arg: $ => seq(
      field('mode', choice(
        alias(k('input'), $.INPUT),
        alias(k('output'), $.OUTPUT),
        alias(k('i-o'), $.I_O),
        alias(k('extend'), $.EXTEND)
      )),
      field('sharing', optional(seq(
        k('sharing'),
        optional(k('with')),
        choice(
          seq(alias(k('all'), $.ALL), optional(k('other'))),
          seq(alias(k('no'), $.NO), optional(k('other'))),
          seq(alias(k('read'), $.READ), alias(k('only'), $.ONLY)),
        )
      ))),
      field('file_name_list', repeat1($.WORD)),
      field('option', optional(choice(
        seq(optional($._WITH), alias(k('no'), $.NO), alias(k('rewind'), $.REWIND)),
        seq(optional($._WITH), alias(k('lock'), $.LOCK))
      )))
    ),

    perform_statement: $ => prec.right(seq(
      k('perform'),
      choice(
        seq(
          field('procedure', $.perform_procedure),
          field('option', optional($.perform_option)),
          nonempty(k('end-perform'), '.')
        ),
        seq(
          field('option', optional($.perform_option)),
          field('statements', $._statements1),
          k('end-perform'),
          optional('.')
        ),
        seq(
          field('option', $.perform_option),
          nonempty(k('end-perform'), '.')
        )
      )
    )),
    perform_statement_in_block: $ => prec.right(seq(
      k('perform'),
      choice(
        seq(
          field('procedure', $.perform_procedure),
          field('option', optional($.perform_option)),
          optional(k('end-perform'))
        ),
        seq(
          field('option', optional($.perform_option)),
          field('statements', $._statements1),
          k('end-perform')
        ),
        seq(
          field('option', $.perform_option),
          optional(k('end_perform'))
        )
      )
    )),

    perform_procedure: $ => seq(
      $.label,
      optional(seq(alias(k('thru'), $.THRU), $.label)),
    ),

    perform_option: $ => choice(
      alias(k('forever'), $.FOREVER),
      seq(field('times', $._id_or_lit_or_func), k('times')),
      seq(field('test', optional($.perform_test)), k('until'), field('until', $.expr)),
      seq(field('test', optional($.perform_test)), k('varying'), field('varying', sepBy($.perform_varying, k('after'))))
    ),

    _id_or_lit_or_func: $ => choice(
      $._identifier,
      $._LITERAL,
      $.function_
    ),

    perform_test: $ => seq(
      optional(k('with')),
      k('test'),
      choice(alias(k('before'), $.BEFORE), alias(k('after'), $.AFTER))
    ),

    perform_varying: $ => seq(
      $._identifier,
      k('from'),
      field('from', $._x),
      k('by'),
      field('by', $._x),
      k('until'),
      field('until', $.expr),
    ),

    write_statement: $ => prec.right(seq(
      $._write_statement_header,
      field('handler', optional($._write_handler)),
    )),

    write_statement_in_block: $ => prec.right(seq(
      $._write_statement_header,
      choice(
        field('handler', optional(seq($._write_handler, k('end-write')))),
        optional(k('end-write'))
      )
    )),

    _write_statement_header: $ => prec.right(seq(
      k('write'),
      field('record_name', $.qualified_word),
      field('from', optional(seq(k('from'), $._id_or_lit))),
      field('lock', optional(choice($.write_lock, $.write_no_lock))),
      field('option', optional($.write_option))
    )),

    write_lock: $ => seq(
      optional(k('with')),
      k('LOCK')
    ),

    write_no_lock: $ => seq(
      optional(k('with')),
      k('no'),
      k('LOCK')
    ),

    write_option: $ => choice(
      seq(
        choice(alias(k('before'), $.BEFORE), alias(k('after'), $.AFTER)),
        optional(k('advancing')),
        $._num_or_id_or_lit,
        optional(choice(k('line'), k('lines')))
      ),
      seq(
        choice(alias(k('before'), $.BEFORE), alias(k('after'), $.AFTER)),
        optional(k('advancing')),
        alias(k('mnemonic-name'), $.MNEMONIC_NAME),
      ),
      seq(
        choice(alias(k('before'), $.BEFORE), alias(k('after'), $.AFTER)),
        optional(k('advancing')),
        alias(k('page'), $.PAGE),
      ),
    ),

    _write_handler: $ => nonempty(
      nonempty($.eop, $.not_eop),
      nonempty($.invalid_key, $.not_invalid_key),
    ),

    eop: $ => prec.right(seq(
      k('at'),
      choice(k('eop'), k('end-of-page')),
      $._statements1
    )),

    not_eop: $ => prec.right(seq(
      k('not'),
      k('at'),
      choice(k('eop'), k('end-of-page')),
      $._statements1
    )),

    invalid_key: $ => prec.right(seq(
      k('invalid'),
      k('key'),
      $._statements1
    )),

    not_invalid_key: $ => prec.right(seq(
      k('not'),
      k('invalid'),
      k('key'),
      $._statements1
    )),

    _basic_literal: $ => sepBy(
      $._basic_value,
      '&'
    ),

    _basic_value: $ => choice(
      $._LITERAL,
      $.SPACE,
      $.ZERO,
      $.QUOTE,
      $.HIGH_VALUE,
      $.LOW_VALUE,
      $.TOK_NULL
    ),

    _literal: $ => choice(
      $._basic_literal,
      seq(alias(k('all'), $.ALL), $._basic_value)
    ),

    function_: $ => choice(
      seq(alias(k('current-date-func'), $.CURRENT_DATE_FUNC), optional($.func_refmod)),
      seq(alias(k('when-compiled-func'), $.WHEN_COMPILED_FUNC), optional($.func_refmod)),
      seq(alias(k('upper-case-func'), $.UPPER_CASE_FUNC), '(', $._exp, ')', optional($.func_refmod)),
      seq(alias(k('lower-case-func'), $.LOWER_CASE_FUNC), '(', $._exp, ')', optional($.func_refmod)),
      seq(alias(k('reverse-func'), $.REVERSE_FUNC), '(', $._exp, ')', optional($.func_refmod)),
      seq(alias(k('concatenate-func'), $.CONCATENATE_FUNC), '(', $._exp_list, ')', optional($.func_refmod)),
      seq(alias(k('substitute-func'), $.SUBSTITUTE_FUNC), '(', $._exp_list, ')', optional($.func_refmod)),
      seq(alias(k('substitute-case-func'), $.SUBSTITUTE_CASE_FUNC), '(', $._exp_list, ')', optional($.func_refmod)),
      seq(alias(k('trim-func'), $.TRIM_FUNCTION), '(', $._trim_args, ')', optional($.func_refmod)),
      seq(alias(k('numvalc-func'), $.NUMVALC_FUNC), '(', $._numvalc_args, ')'),
      seq(alias(k('locale-dt-func'), $.LOCALE_DT_FUNC), '(', $._locale_dt_args, ')', optional($.func_refmod)),
      seq(alias(k('function-name'), $.FUNCTION_NAME), optional($._func_args)),
    ),

    func_refmod: $ => choice(
      seq('(', $._exp, ':', ')'),
      seq('(', $._exp, ':', $._exp, ')'),
    ),

    _trim_args: $ => seq(
      $._exp,
      optional(
        seq(
          $._e_sep,
          choice(k('leading'), k('trailing'))
        )
      )
    ),

    _e_sep: $ => choice(
      k('comma-delim'),
      k('semi-colon')
    ),

    _numvalc_args: $ => sepBy(
      $._exp, $._e_sep
    ),

    _locale_dt_args: $ => seq(
      $._exp,
      optional(
        seq($._e_sep, $.qualified_word)
      )
    ),

    linage_counter: $ => seq(
      k('linage_counter'),
      optional(seq($._in_of, $._WORD))
    ),

    _func_args: $ => seq(
      '(', optional($._exp_list), ')'
    ),

    //todo
    number: $ => choice($.integer, $.decimal),
    integer: $ => /[+-]?[0-9]+/,
    decimal: $ => /[+-]?[0-9]*\.[0-9]+/,
    _string: $ => choice(
      $.string,
      $.x_string,
      $.n_string,
      $.h_string
    ),

    string: $ => choice(
      /'[^'\n]*'/,
      /"[^"\n]*"/,
      $._multiline_string,
    ),

    x_string: $ => choice(
      /X'[^'\n]*'/,
      /X"[^"\n]*"/,
    ),

    h_string: $ => choice(
      /H'[^'\n]*'/,
      /H"[^"\n]*"/,
    ),

    n_string: $ => choice(
      /N'[^'\n]*'/,
      /N"[^"\n]*"/,
      /NC'[^'\n]*'/,
      /NC"[^"\n]*"/,
      /ND'[^'\n]*'/,
      /ND"[^"\n]*"/,
      /NX'[^'\n]*'/,
      /NX"[^"\n]*"/,
    ),

    _HIGH_VALUE: $ => choice(
      'high-value', 'high-Value', 'high-VALUE',
      'High-value', 'High-Value', 'High-VALUE',
      'HIGH-value', 'HIGH-Value', 'HIGH-VALUE'
    ),
    HIGH_VALUE: $ => _HIGH_VALUE,
    _LOW_VALUE: $ => choice(
      'low-value', 'low-Value', 'low-VALUE',
      'Low-value', 'Low-Value', 'Low-VALUE',
      'LOW-value', 'LOW-Value', 'LOW-VALUE'
    ),
    LOW_VALUE: $ => _LOW_VALUE,
    _QUOTE: $ => choice('quote', 'QUOTE', 'Quote'),
    QUOTE: $ => $._QUOTE,
    _TOK_NULL: $ => choice('null', 'Null', 'NULL'),
    TOK_NULL: $ => $._TOK_NULL,
    _ZERO: $ => choice('zero', 'ZERO', 'Zero'),
    ZERO: $ => $._ZERO,
    _WORD: $ => /[a-zA-Z][a-zA-Z0-9\-]*/,
    WORD: $ => $._WORD,
    _SPACE: $ => choice('space', 'SPACE', 'Space'),
    SPACE: $ => _SPACE,
    _LITERAL: $ => choice(
      $.number,
      $._string,
    ),
    _identifier: $ => choice(
      $.qualified_word,
      seq($.qualified_word, $.subref),
      seq($.qualified_word, $.refmod),
      seq($.qualified_word, $.subref, $.refmod),
    ),

    qualified_word: $ => sepBy(
      $.WORD, $._in_of
    ),

    _in_of: $ => choice(
      k('in'),
      k('OF')
    ),

    subref: $ => seq(
      '(',
      $._exp_list,
      ')'
    ),

    refmod: $ => seq(
      '(',
      $._exp,
      ':',
      ')'
    ),
  }
});