(
  (move_statement
     src: (_)
     dst: (WORD) @first-dst)
  .
  (move_statement
     src: (_)
     dst: (WORD) @second-dst)
  (#eq? @first-dst @second-dst)
)
