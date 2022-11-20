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
         IF 1 + 1 = 2
           THEN DISPLAY "hello"
           ELSE DISPLAY "WORLD"
         END-IF.
