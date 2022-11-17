       identification division.
       program-id. a.
       data division.
       working-storage section.
       01 sys-date.
         03 date-full PIC 9(08).
         03 date-r redefines date-full.
           05 date-year pic 9(04).
           05 date-month pic 9(02).
           05 date-day pic 9(02).
       procedure division.
           MOVE ZERO TO date-year.
       label1.
           MOVE 1 TO date-year.
       sec1 section.
           MOVE QUOTE TO date-month.
       label2.
           MOVE 3 TO date-year of date-r.
           MOVE HIGH-VALUE TO date-month.
       label3.
           MOVE 4 TO date-year of date-r.
