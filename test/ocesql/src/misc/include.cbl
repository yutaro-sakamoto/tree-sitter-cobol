       IDENTIFICATION              DIVISION.
      ******************************************************************
       PROGRAM-ID.                 prog.
      ******************************************************************
       DATA                        DIVISION.
      ******************************************************************
       WORKING-STORAGE             SECTION.

       EXEC SQL INCLUDE TEST-DATA END-EXEC.

       EXEC SQL INCLUDE TEST-DATA-R END-EXEC.

       01  IDX                     PIC  9(02).
       01 LOG-COUNT PIC 9999 VALUE 1.

       01 READ-DATA.
         03  READ-TBL    OCCURS  10.
           05  READ-NO             PIC S9(04).
           05  READ-NAME           PIC  X(20) .
           05  READ-SALARY         PIC S9(04).

       EXEC SQL BEGIN DECLARE SECTION END-EXEC.
       EXEC SQL INCLUDE DECLARE-SECTION END-EXEC.
       EXEC SQL END DECLARE SECTION END-EXEC.

       EXEC SQL INCLUDE SQLCA END-EXEC.
      ******************************************************************
       PROCEDURE                   DIVISION.
      ******************************************************************
       MAIN-RTN.
           
       PERFORM SETUP-DB.

      *    SHOW RESULT

           EXEC SQL INCLUDE EXEC-SELECT END-EXEC.

           PERFORM OUTPUT-RETURN-CODE-TEST.

           MOVE 1 TO IDX.
           PERFORM UNTIL IDX > 6
               DISPLAY READ-NO(IDX) ", "
                       READ-NAME(IDX) ", "
                       READ-SALARY(IDX)
               ADD 1 TO IDX
           END-PERFORM.

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

           EXEC SQL INCLUDE exec-connect END-EXEC.

           EXEC SQL
               DROP TABLE IF EXISTS EMP
           END-EXEC.

           EXEC SQL INCLUDE
              exec-create-table
           END-EXEC.

      *    INSERT ROWS USING HOST VARIABLE
           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
              MOVE TEST-NO(IDX)     TO  EMP-NO
              MOVE TEST-NAME(IDX)   TO  EMP-NAME
              MOVE TEST-SALARY(IDX) TO  EMP-SALARY
              EXEC SQL
                 INSERT INTO EMP VALUES
                        (:EMP-NO,:EMP-NAME,:EMP-SALARY)
              END-EXEC
           END-PERFORM.

      *    COMMIT
           EXEC SQL
               COMMIT WORK
           END-EXEC.

      ******************************************************************
       CLEANUP-DB.
      ******************************************************************
           EXEC SQL
               CLOSE C1
           END-EXEC.

           EXEC SQL
               DROP TABLE IF EXISTS EMP
           END-EXEC.

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

