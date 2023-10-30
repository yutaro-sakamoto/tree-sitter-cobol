       IDENTIFICATION              DIVISION.
      ******************************************************************
       PROGRAM-ID.                 prog.
      ******************************************************************
       DATA                        DIVISION.
      ******************************************************************
       WORKING-STORAGE             SECTION.
       01  TEST-DATA.
         03 FILLER       PIC X(28) VALUE "0001北海　太郎          0400".
         03 FILLER       PIC X(28) VALUE "0002青森　次郎          0350".
         03 FILLER       PIC X(28) VALUE "0003秋田　三郎          0300".
         03 FILLER       PIC X(28) VALUE "0004岩手　四郎          025p".
         03 FILLER       PIC X(28) VALUE "0005宮城　五郎          020p".
         03 FILLER       PIC X(28) VALUE "0006福島　六郎          0150".
         03 FILLER       PIC X(28) VALUE "0007栃木　七郎          010p".
         03 FILLER       PIC X(28) VALUE "0008茨城　八郎          0050".
         03 FILLER       PIC X(28) VALUE "0009群馬　九郎          020p".
         03 FILLER       PIC X(28) VALUE "0010埼玉　十郎          0350".

       01  TEST-DATA-R   REDEFINES TEST-DATA.
         03  TEST-TBL    OCCURS  10.
           05  TEST-NO             PIC S9(04).
           05  TEST-NAME           PIC  X(20) .
           05  TEST-SALARY         PIC S9(04).
       01  IDX                     PIC  9(02).
       01 TEST-CASE-COUNT PIC 9999 VALUE 1.

       EXEC SQL BEGIN DECLARE SECTION END-EXEC.
       01 NUM PIC 9(4).
       01  DBNAME                  PIC  X(30) VALUE SPACE.
       01  USERNAME                PIC  X(30) VALUE SPACE.
       01  PASSWD                  PIC  X(10) VALUE SPACE.

       01  EMP-REC-VARS.
         03  EMP-NO                PIC S9(04) VALUE ZERO.
         03  EMP-NAME              PIC  X(20) .
         03  EMP-SALARY            PIC S9(04) VALUE ZERO.
       EXEC SQL END DECLARE SECTION END-EXEC.

       EXEC SQL INCLUDE SQLCA END-EXEC.
      ******************************************************************
       PROCEDURE                   DIVISION.
      ******************************************************************
       MAIN-RTN.
           
       PERFORM SETUP-DB.
           EXEC SQL 
               DECLARE C1 CURSOR FOR
               SELECT EMP_NO, EMP_NAME, EMP_SALARY 
                      FROM EMP
                      WHERE EMP_SALARY > 0
                      ORDER BY EMP_NO
           END-EXEC.
           DISPLAY "<valid declare> SQLERRML:" SQLERRML.
           DISPLAY "<valid declare> SQLERRMC:" SQLERRMC.

           EXEC SQL
               OPEN C1
           END-EXEC.
           DISPLAY "<valid open> SQLERRML:" SQLERRML.
           DISPLAY "<valid open> SQLERRMC:" SQLERRMC.

           EXEC SQL 
               FETCH C1 INTO :EMP-NO, :EMP-NAME, :EMP-SALARY
           END-EXEC.
           DISPLAY "<valid fetch> SQLERRML:" SQLERRML.
           DISPLAY "<valid fetch> SQLERRMC:" SQLERRMC.
           PERFORM UNTIL SQLCODE NOT = ZERO
              DISPLAY EMP-NO ", " EMP-SALARY
              EXEC SQL 
                  FETCH C1 INTO :EMP-NO, :EMP-NAME, :EMP-SALARY
              END-EXEC
             DISPLAY "<valid fetch> SQLERRML:" SQLERRML
             DISPLAY "<valid fetch> SQLERRMC:" SQLERRMC
           END-PERFORM.

           EXEC SQL
               CLOSE C1
           END-EXEC.

           EXEC SQL 
               DECLARE C2 CURSOR FOR
               SELECT EMP_NO, EMP_NAME, EMP_SALARY 
                      FROM EMPQRSTVQ13256
                      WHERE EMP_SALARY > 0
                      ORDER BY EMP_NO
           END-EXEC.
           DISPLAY "<invalid declare> SQLERRML:" SQLERRML.
           DISPLAY "<invalid declare> SQLERRMC:" SQLERRMC.
           EXEC SQL ROLLBACK END-EXEC.

           EXEC SQL
               OPEN C2
           END-EXEC.
           DISPLAY "<invalid open> SQLERRML:" SQLERRML.
           DISPLAY "<invalid open> SQLERRMC:" SQLERRMC.
           EXEC SQL ROLLBACK END-EXEC.

           EXEC SQL 
               FETCH C2 INTO :EMP-NO, :EMP-NAME, :EMP-SALARY
           END-EXEC.
           DISPLAY "<invalid fetch> SQLERRML:" SQLERRML.
           DISPLAY "<invalid fetch> SQLERRMC:" SQLERRMC.
           EXEC SQL ROLLBACK END-EXEC.

      *    PERFORM UNTIL SQLCODE NOT = ZERO
      *       DISPLAY EMP-NO ", " EMP-SALARY
      *       EXEC SQL 
      *           FETCH C2 INTO :EMP-NO, :EMP-NAME, :EMP-SALARY
      *       END-EXEC
      *      DISPLAY "<invalid fetch> SQLERRML:" SQLERRML
      *      DISPLAY "<invalid fetch> SQLERRMC:" SQLERRMC
      *    END-PERFORM.

           EXEC SQL
               CLOSE C2
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
           DISPLAY "<valid connect> SQLERRML:" SQLERRML.
           DISPLAY "<valid connect> SQLERRMC:" SQLERRMC "|".

           EXEC SQL
               DROP TABLE IF EXISTS EMP
           END-EXEC.

           EXEC SQL COMMIT END-EXEC.

      *    INVALID CREATE TABLE
           EXEC SQL
                CREATE TABLE EMP
                (
                    EMP_NO     NUMERIC(4,0),
                    EMP_NAME   CHAR(20),
                    EMP_SALARY NUMERIC(4,0)abcde)
                )
           END-EXEC.
           DISPLAY "<invalid create table> SQLERRML:" SQLERRML.
           DISPLAY "<invalid create table> SQLERRMC:" SQLERRMC.

           EXEC SQL ROLLBACK END-EXEC.

      *    VALID CREATE TABLE
           EXEC SQL
                CREATE TABLE EMP
                (
                    EMP_NO     NUMERIC(4,0),
                    EMP_NAME   CHAR(20),
                    EMP_SALARY NUMERIC(4,0)
                )
           END-EXEC.
           DISPLAY "<valid create table> SQLERRML:" SQLERRML.
           DISPLAY "<valid create table> SQLERRMC:" SQLERRMC.
           EXEC SQL COMMIT END-EXEC.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
              MOVE TEST-NO(IDX)     TO  EMP-NO
              MOVE TEST-NAME(IDX)   TO  EMP-NAME
              MOVE TEST-SALARY(IDX) TO  EMP-SALARY
              EXEC SQL
                 INSERT INTO EMP VALUES
                        (:EMP-NO,:EMP-NAME,:EMP-SALARY)
              END-EXEC
           END-PERFORM.
           DISPLAY "<valid insert> SQLERRML:" SQLERRML.
           DISPLAY "<valid insert> SQLERRMC:" SQLERRMC.
           EXEC SQL COMMIT END-EXEC.

           EXEC SQL
               INSERT INTO EMP VALUES
                      (:EMP-NO,,,,,,,,:EMP-NAME,:EMP-SALARY)
           END-EXEC
           DISPLAY "<invalid insert 1> SQLERRML:" SQLERRML.
           DISPLAY "<invalid insert 1> SQLERRMC:" SQLERRMC.
           EXEC SQL ROLLBACK END-EXEC.

           EXEC SQL
               INSERT INTO EMPQRSTVQ13256 VALUES
                      (:EMP-NO,:EMP-NAME,:EMP-SALARY)
           END-EXEC
           DISPLAY "<invalid insert 2> SQLERRML:" SQLERRML.
           DISPLAY "<invalid insert 2> SQLERRMC:" SQLERRMC.
           EXEC SQL ROLLBACK END-EXEC.

      ******************************************************************
       CLEANUP-DB.
      ******************************************************************

           EXEC SQL
               DISCONNECT ALL
           END-EXEC.

      ******************************************************************
       DISPLAY-TEST-RESULT.
      ******************************************************************
           IF  SQLCODE = ZERO
             THEN

               DISPLAY "<log> test case " TEST-CASE-COUNT ": success"
               ADD 1 TO TEST-CASE-COUNT

             ELSE
               DISPLAY "*** SQL ERROR ***"
               DISPLAY "SQLCODE: " SQLCODE " " NO ADVANCING
               EVALUATE SQLCODE
                  WHEN  +10
                     DISPLAY "Record not found"
                  WHEN  -01
                     DISPLAY "Connection falied"
                  WHEN  -20
                     DISPLAY "Internal error"
                  WHEN  -30
                     DISPLAY "PostgreSQL error"
                     DISPLAY "ERRCODE: "  SQLSTATE
                     DISPLAY SQLERRMC
                  *> TO RESTART TRANSACTION, DO ROLLBACK.
                     EXEC SQL
                         ROLLBACK
                     END-EXEC
                  WHEN  OTHER
                     DISPLAY "Undefined error"
                     DISPLAY "ERRCODE: "  SQLSTATE
                     DISPLAY SQLERRMC
               END-EVALUATE
               STOP RUN.
      ******************************************************************