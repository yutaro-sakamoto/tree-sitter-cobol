       IDENTIFICATION              DIVISION.
      ******************************************************************
       PROGRAM-ID.                 prog.
      ******************************************************************
       DATA                        DIVISION.
      ******************************************************************
       WORKING-STORAGE             SECTION.

       EXEC SQL BEGIN DECLARE SECTION END-EXEC.
       01 TBL.
         02 TBL-REC OCCURS 30.
          03 N PIC 9(3).
          03 NAME PIC X(20).
       01 indicator-name pic s9(4).
       01 DBNAME                  PIC  X(30) VALUE SPACE.
       01 USERNAME                PIC  X(30) VALUE SPACE.
       01 PASSWD                  PIC  X(10) VALUE SPACE.
       EXEC SQL END DECLARE SECTION END-EXEC.

       01 COUNTER PIC 9(7) VALUE ZERO.
       01 LOOP-MAX PIC 9(7) VALUE 30.

       EXEC SQL INCLUDE SQLCA END-EXEC.
      ******************************************************************
       PROCEDURE                   DIVISION.
      ******************************************************************
       MAIN-RTN.

       PERFORM SETUP-DB.

      * Invalid Fetch ************************************************
       EXEC SQL
         DECLARE C1 CURSOR FOR SELECT
           N, NAME FROM sqlca_test_table
       END-EXEC.

       EXEC SQL
         OPEN C1
       END-EXEC.

       EXEC SQL
         FETCH C1 INTO :TBL-REC
       END-EXEC.

       display "SQLERRD(3)=" SQLERRD(3).
       display "SQLECODE  =" SQLCODE.

       PERFORM VARYING COUNTER FROM 1 BY 1 UNTIL COUNTER > LOOP-MAX
         display COUNTER ": N=" N(COUNTER) ", NAME=" NAME(COUNTER) "|"
       END-PERFORM.

       EXEC SQL
         CLOSE C1
       END-EXEC.

      * Error Fetch **************************************************
       EXEC SQL
         DECLARE C2 CURSOR FOR SELECT
           N, NAME FROM error_table________________
       END-EXEC.

       EXEC SQL
         OPEN C2
       END-EXEC.

       EXEC SQL
         FETCH C2 INTO :TBL-REC
       END-EXEC.

       display "SQLERRD(3)=" SQLERRD(3).
       display "SQLECODE  =" SQLCODE.

       EXEC SQL
         CLOSE C2
       END-EXEC.

      * fetch empty table ********************************************

      * DELETE all data in sql_test_table
       EXEC SQL
         DELETE FROM sqlca_test_table
       END-EXEC.

       EXEC SQL
         COMMIT WORK
       END-EXEC.

      * fetch data
       EXEC SQL
         DECLARE C3 CURSOR FOR SELECT
           N, NAME FROM sqlca_test_table
       END-EXEC.

       EXEC SQL
         OPEN C3
       END-EXEC.

       EXEC SQL
         FETCH C3 INTO :TBL-REC
       END-EXEC.

       display "SQLERRD(3)=" SQLERRD(3).
       display "SQLECODE  =" SQLCODE.

       EXEC SQL
         CLOSE C3
       END-EXEC.

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
               DROP TABLE IF EXISTS sqlca_test_table
           END-EXEC.

           EXEC SQL
                CREATE TABLE sqlca_test_table
                (
                    N integer,
                    NAME CHAR(20)
                )
           END-EXEC.

           PERFORM VARYING COUNTER FROM 1 BY 1 UNTIL COUNTER > LOOP-MAX
             EXEC SQL
                 INSERT INTO sqlca_test_table
                   (N, NAME)
                   VALUES (:COUNTER, 'hello')
             END-EXEC
           END-PERFORM.

           COMMIT
           EXEC SQL
               COMMIT WORK
           END-EXEC.

      ******************************************************************
       CLEANUP-DB.
      ******************************************************************

           EXEC SQL
               DISCONNECT ALL
           END-EXEC.