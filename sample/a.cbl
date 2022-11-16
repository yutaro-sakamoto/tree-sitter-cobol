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
       MOVE 1 TO date-year.
       MOVE QUOTE TO date-month.
       MOVE 3 TO date-year of date-r.
       MOVE HIGH-VALUE TO date-month.
       MOVE 4 TO date-year of date-r.

       DISPLAY 1 + 1.
