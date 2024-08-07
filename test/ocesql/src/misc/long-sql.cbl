       IDENTIFICATION              DIVISION.
      ******************************************************************
       PROGRAM-ID.                 prog.
      ******************************************************************
       DATA                        DIVISION.
      ******************************************************************
       WORKING-STORAGE             SECTION.
       01 LOG-COUNT PIC 9999 VALUE 1.

       01 READ-DATA.
           05 EMP_NAME001 PIC X(50).
           05 EMP_NAME002 PIC X(50).
           05 EMP_NAME003 PIC X(50).
           05 EMP_NAME004 PIC X(50).
           05 EMP_NAME005 PIC X(50).
           05 EMP_NAME006 PIC X(50).
           05 EMP_NAME007 PIC X(50).
           05 EMP_NAME008 PIC X(50).
           05 EMP_NAME009 PIC X(50).
           05 EMP_NAME010 PIC X(50).
           05 EMP_NAME011 PIC X(50).
           05 EMP_NAME012 PIC X(50).
           05 EMP_NAME013 PIC X(50).
           05 EMP_NAME014 PIC X(50).
           05 EMP_NAME015 PIC X(50).
           05 EMP_NAME016 PIC X(50).
           05 EMP_NAME017 PIC X(50).
           05 EMP_NAME018 PIC X(50).
           05 EMP_NAME019 PIC X(50).
           05 EMP_NAME020 PIC X(50).
           05 EMP_NAME021 PIC X(50).
           05 EMP_NAME022 PIC X(50).
           05 EMP_NAME023 PIC X(50).
           05 EMP_NAME024 PIC X(50).
           05 EMP_NAME025 PIC X(50).
           05 EMP_NAME026 PIC X(50).
           05 EMP_NAME027 PIC X(50).
           05 EMP_NAME028 PIC X(50).
           05 EMP_NAME029 PIC X(50).
           05 EMP_NAME030 PIC X(50).
           05 EMP_NAME031 PIC X(50).
           05 EMP_NAME032 PIC X(50).
           05 EMP_NAME033 PIC X(50).
           05 EMP_NAME034 PIC X(50).
           05 EMP_NAME035 PIC X(50).
           05 EMP_NAME036 PIC X(50).
           05 EMP_NAME037 PIC X(50).
           05 EMP_NAME038 PIC X(50).
           05 EMP_NAME039 PIC X(50).
           05 EMP_NAME040 PIC X(50).

       EXEC SQL BEGIN DECLARE SECTION END-EXEC.
       01  DBNAME                  PIC  X(30) VALUE SPACE.
       01  USERNAME                PIC  X(30) VALUE SPACE.
       01  PASSWD                  PIC  X(10) VALUE SPACE.
       EXEC SQL END DECLARE SECTION END-EXEC.

       EXEC SQL INCLUDE SQLCA END-EXEC.
      ******************************************************************
       PROCEDURE                   DIVISION.
      ******************************************************************
       MAIN-RTN.
           
       PERFORM SETUP-DB.


      *    SHOW RESULT
           EXEC SQL
              SELECT
                EMP_NAME001,
                EMP_NAME002,
                EMP_NAME003,
                EMP_NAME004,
                EMP_NAME005,
                EMP_NAME006,
                EMP_NAME007,
                EMP_NAME008,
                EMP_NAME009,
                EMP_NAME010,
                EMP_NAME011,
                EMP_NAME012,
                EMP_NAME013,
                EMP_NAME014,
                EMP_NAME015,
                EMP_NAME016,
                EMP_NAME017,
                EMP_NAME018,
                EMP_NAME019,
                EMP_NAME020,
                EMP_NAME021,
                EMP_NAME022,
                EMP_NAME023,
                EMP_NAME024,
                EMP_NAME025,
                EMP_NAME026,
                EMP_NAME027,
                EMP_NAME028,
                EMP_NAME029,
                EMP_NAME030,
                EMP_NAME031,
                EMP_NAME032,
                EMP_NAME033,
                EMP_NAME034,
                EMP_NAME035,
                EMP_NAME036,
                EMP_NAME037,
                EMP_NAME038,
                EMP_NAME039,
                EMP_NAME040
            INTO :READ-DATA
            FROM EMP
           END-EXEC.

            DISPLAY EMP_NAME001.
            DISPLAY EMP_NAME002.
            DISPLAY EMP_NAME003.
            DISPLAY EMP_NAME004.
            DISPLAY EMP_NAME005.
            DISPLAY EMP_NAME006.
            DISPLAY EMP_NAME007.
            DISPLAY EMP_NAME008.
            DISPLAY EMP_NAME009.
            DISPLAY EMP_NAME010.
            DISPLAY EMP_NAME011.
            DISPLAY EMP_NAME012.
            DISPLAY EMP_NAME013.
            DISPLAY EMP_NAME014.
            DISPLAY EMP_NAME015.
            DISPLAY EMP_NAME016.
            DISPLAY EMP_NAME017.
            DISPLAY EMP_NAME018.
            DISPLAY EMP_NAME019.
            DISPLAY EMP_NAME020.
            DISPLAY EMP_NAME021.
            DISPLAY EMP_NAME022.
            DISPLAY EMP_NAME023.
            DISPLAY EMP_NAME024.
            DISPLAY EMP_NAME025.
            DISPLAY EMP_NAME026.
            DISPLAY EMP_NAME027.
            DISPLAY EMP_NAME028.
            DISPLAY EMP_NAME029.
            DISPLAY EMP_NAME030.
            DISPLAY EMP_NAME031.
            DISPLAY EMP_NAME032.
            DISPLAY EMP_NAME033.
            DISPLAY EMP_NAME034.
            DISPLAY EMP_NAME035.
            DISPLAY EMP_NAME036.
            DISPLAY EMP_NAME037.
            DISPLAY EMP_NAME038.
            DISPLAY EMP_NAME039.
            DISPLAY EMP_NAME040.

       PERFORM CLEANUP-DB.

      *    END
           STOP RUN.

      ******************************************************************
       SETUP-DB.
      ******************************************************************

      *    SERVER
           MOVE  "<|DB_NAME|>@<|DB_HOST|>:<|DB_PORT|>"
             TO DBNAME.
           MOVE  "<|DB_USER|>"
             TO USERNAME.
           MOVE  "<|DB_PASSWORD|>"
             TO PASSWD.

           EXEC SQL
               CONNECT :USERNAME IDENTIFIED BY :PASSWD USING :DBNAME 
           END-EXEC.

           EXEC SQL
               DROP TABLE IF EXISTS EMP
           END-EXEC.

           EXEC SQL
                CREATE TABLE EMP
                (
                    EMP_NAME001 CHAR(50),
                    EMP_NAME002 CHAR(50),
                    EMP_NAME003 CHAR(50),
                    EMP_NAME004 CHAR(50),
                    EMP_NAME005 CHAR(50),
                    EMP_NAME006 CHAR(50),
                    EMP_NAME007 CHAR(50),
                    EMP_NAME008 CHAR(50),
                    EMP_NAME009 CHAR(50),
                    EMP_NAME010 CHAR(50),
                    EMP_NAME011 CHAR(50),
                    EMP_NAME012 CHAR(50),
                    EMP_NAME013 CHAR(50),
                    EMP_NAME014 CHAR(50),
                    EMP_NAME015 CHAR(50),
                    EMP_NAME016 CHAR(50),
                    EMP_NAME017 CHAR(50),
                    EMP_NAME018 CHAR(50),
                    EMP_NAME019 CHAR(50),
                    EMP_NAME020 CHAR(50),
                    EMP_NAME021 CHAR(50),
                    EMP_NAME022 CHAR(50),
                    EMP_NAME023 CHAR(50),
                    EMP_NAME024 CHAR(50),
                    EMP_NAME025 CHAR(50),
                    EMP_NAME026 CHAR(50),
                    EMP_NAME027 CHAR(50),
                    EMP_NAME028 CHAR(50),
                    EMP_NAME029 CHAR(50),
                    EMP_NAME030 CHAR(50),
                    EMP_NAME031 CHAR(50),
                    EMP_NAME032 CHAR(50),
                    EMP_NAME033 CHAR(50),
                    EMP_NAME034 CHAR(50),
                    EMP_NAME035 CHAR(50),
                    EMP_NAME036 CHAR(50),
                    EMP_NAME037 CHAR(50),
                    EMP_NAME038 CHAR(50),
                    EMP_NAME039 CHAR(50),
                    EMP_NAME040 CHAR(50)
                )
           END-EXEC.

      *    INSERT ROWS USING HOST VARIABLE
           EXEC SQL
              INSERT INTO EMP VALUES
             (
             'あああああああああああああああああああ',
             'aああああああああああああああああああ',
             'aaあああああああああああああああああ',
             'aaaああああああああああああああああ',
             'aaaaあああああああああああああああ',
             'aaaaaああああああああああああああ',
             'aaaaaaあああああああああああああ',
             'aaaaaaaああああああああああああ',
             'aaaaaaaaあああああああああああ',
             'aaaaaaaaaああああああああああ',
             'aaaaaaaaaaあああああああああ',
             'aaaaaaaaaaaああああああああ',
             'aaaaaaaaaaaaあああああああ',
             'aaaaaaaaaaaaaああああああ',
             'aaaaaaaaaaaaaaあああああ',
             'aaaaaaaaaaaaaaaああああ',
             'aaaaaaaaaaaaaaaaあああ',
             'aaaaaaaaaaaaaaaaaああ',
             'aaaaaaaaaaaaaaaaaaあ',
             'aaaaaaaaaaaaaaaaaaa',
             'aaaaaaaaaaaaaaaaaaa' ,
             'あaaaaaaaaaaaaaaaaaa' ,
             'ああaaaaaaaaaaaaaaaaa' ,
             'あああaaaaaaaaaaaaaaaa' ,
             'ああああaaaaaaaaaaaaaaa' ,
             'あああああaaaaaaaaaaaaaa' ,
             'ああああああaaaaaaaaaaaaa' ,
             'あああああああaaaaaaaaaaaa' ,
             'ああああああああaaaaaaaaaaa' ,
             'あああああああああaaaaaaaaaa' ,
             'ああああああああああaaaaaaaaa' ,
             'あああああああああああaaaaaaaa' ,
             'ああああああああああああaaaaaaa' ,
             'あああああああああああああaaaaaa' ,
             'ああああああああああああああaaaaa' ,
             'あああああああああああああああaaaa' ,
             'ああああああああああああああああaaa' ,
             'あああああああああああああああああaa' ,
             'ああああああああああああああああああa' ,
             'あああああああああああああああああああ'
             )
           END-EXEC.

      *    COMMIT
           EXEC SQL
               COMMIT WORK
           END-EXEC.

      ******************************************************************
       CLEANUP-DB.
      ******************************************************************

      *    EXEC SQL
      *        DROP TABLE IF EXISTS EMP
      *    END-EXEC.

           EXEC SQL
               DISCONNECT ALL
           END-EXEC.

      ******************************************************************
       OUTPUT-RETURN-CODE-TEST.
      ******************************************************************
           IF  SQLCODE = ZERO
             THEN

               DISPLAY LOG-COUNT " <log> success test_return_code"

             ELSE
               DISPLAY LOG-COUNT " <log> fail test_return_code    "
                   NO ADVANCING
               DISPLAY "SQLCODE=" SQLCODE " ERRCODE="  SQLSTATE " "
                   NO ADVANCING
               EVALUATE SQLCODE
                  WHEN  +10
                     DISPLAY "Record_not_found"
                  WHEN  -01
                     DISPLAY "Connection_falied"
                  WHEN  -20
                     DISPLAY "Internal_error"
                  WHEN  -30
                     DISPLAY "PostgreSQL_error" NO ADVANCING
                     DISPLAY SQLERRMC
                  *> TO RESTART TRANSACTION, DO ROLLBACK.
                     EXEC SQL
                         ROLLBACK
                     END-EXEC
                  WHEN  OTHER
                     DISPLAY "Undefined_error" NO ADVANCING
                     DISPLAY SQLERRMC
               END-EVALUATE.
           
           ADD 1 TO LOG-COUNT.
      ******************************************************************

