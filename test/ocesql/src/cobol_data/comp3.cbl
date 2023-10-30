       IDENTIFICATION              DIVISION.
      ******************************************************************
       PROGRAM-ID.                 prog.
      ******************************************************************
       DATA                        DIVISION.
      ******************************************************************
       WORKING-STORAGE             SECTION.
       01 VV-1 PIC 9(4)V9(2) USAGE COMP-3.
       01 VV-2 PIC 9(5)V9(2) USAGE COMP-3.
       01 VP-1 PIC 9(4)PP USAGE COMP-3.
       01 VP-2 PIC 9(5)PP USAGE COMP-3.
       01 V-1 PIC 9(4) USAGE COMP-3.
       01 V-2 PIC 9(5) USAGE COMP-3.

       01  TEST-DATA-V-1.
         03 FILLER       PIC 9(4)V9(2) USAGE COMP-3 VALUE 0.
         03 FILLER       PIC 9(4)V9(2) USAGE COMP-3 VALUE 0.01.
         03 FILLER       PIC 9(4)V9(2) USAGE COMP-3 VALUE 0.1.
         03 FILLER       PIC 9(4)V9(2) USAGE COMP-3 VALUE 1.01.
         03 FILLER       PIC 9(4)V9(2) USAGE COMP-3 VALUE 1.1.
         03 FILLER       PIC 9(4)V9(2) USAGE COMP-3 VALUE 2000.00.
         03 FILLER       PIC 9(4)V9(2) USAGE COMP-3 VALUE 2000.01.
         03 FILLER       PIC 9(4)V9(2) USAGE COMP-3 VALUE 1234.56.
         03 FILLER       PIC 9(4)V9(2) USAGE COMP-3 VALUE 1234.
         03 FILLER       PIC 9(4)V9(2) USAGE COMP-3 VALUE 9999.99.

       01  TEST-DATA-R-V-1   REDEFINES TEST-DATA-V-1.
         03  TEST-TBL-V-1    OCCURS  10.
           05  D-V-1             PIC 9(4)V9(2) USAGE COMP-3.

       01  TEST-DATA-V-2.
         03 FILLER       PIC 9(5)V9(2) USAGE COMP-3 VALUE 0.
         03 FILLER       PIC 9(5)V9(2) USAGE COMP-3 VALUE 0.01.
         03 FILLER       PIC 9(5)V9(2) USAGE COMP-3 VALUE 0.1.
         03 FILLER       PIC 9(5)V9(2) USAGE COMP-3 VALUE 1.01.
         03 FILLER       PIC 9(5)V9(2) USAGE COMP-3 VALUE 1.1.
         03 FILLER       PIC 9(5)V9(2) USAGE COMP-3 VALUE 20000.00.
         03 FILLER       PIC 9(5)V9(2) USAGE COMP-3 VALUE 20000.01.
         03 FILLER       PIC 9(5)V9(2) USAGE COMP-3 VALUE 12345.67.
         03 FILLER       PIC 9(5)V9(2) USAGE COMP-3 VALUE 12345.
         03 FILLER       PIC 9(5)V9(2) USAGE COMP-3 VALUE 99999.99.

       01  TEST-DATA-R-V-2   REDEFINES TEST-DATA-V-2.
         03  TEST-TBL-V-2    OCCURS  10.
           05  D-V-2             PIC 9(5)V9(2) USAGE COMP-3.

       01  TEST-DATA-P-1.
         03 FILLER       PIC 9(4)PPV USAGE COMP-3 VALUE 0.
         03 FILLER       PIC 9(4)PPV USAGE COMP-3 VALUE 100.
         03 FILLER       PIC 9(4)PPV USAGE COMP-3 VALUE 200.
         03 FILLER       PIC 9(4)PPV USAGE COMP-3 VALUE 300000.
         03 FILLER       PIC 9(4)PPV USAGE COMP-3 VALUE 110000.
         03 FILLER       PIC 9(4)PPV USAGE COMP-3 VALUE 123400.
         03 FILLER       PIC 9(4)PPV USAGE COMP-3 VALUE 666600.
         03 FILLER       PIC 9(4)PPV USAGE COMP-3 VALUE 777700.
         03 FILLER       PIC 9(4)PPV USAGE COMP-3 VALUE 888800.
         03 FILLER       PIC 9(4)PPV USAGE COMP-3 VALUE 999900.

       01  TEST-DATA-R-P-1   REDEFINES TEST-DATA-P-1.
         03  TEST-TBL-P-1    OCCURS  10.
           05  D-P-1             PIC 9(4)PPV USAGE COMP-3.

       01  TEST-DATA-P-2.
         03 FILLER       PIC 9(5)PPV USAGE COMP-3 VALUE 0.
         03 FILLER       PIC 9(5)PPV USAGE COMP-3 VALUE 100.
         03 FILLER       PIC 9(5)PPV USAGE COMP-3 VALUE 200.
         03 FILLER       PIC 9(5)PPV USAGE COMP-3 VALUE 3000000.
         03 FILLER       PIC 9(5)PPV USAGE COMP-3 VALUE 1100000.
         03 FILLER       PIC 9(5)PPV USAGE COMP-3 VALUE 1234500.
         03 FILLER       PIC 9(5)PPV USAGE COMP-3 VALUE 6666600.
         03 FILLER       PIC 9(5)PPV USAGE COMP-3 VALUE 7777700.
         03 FILLER       PIC 9(5)PPV USAGE COMP-3 VALUE 8888800.
         03 FILLER       PIC 9(5)PPV USAGE COMP-3 VALUE 9999900.

       01  TEST-DATA-R-P-2   REDEFINES TEST-DATA-P-2.
         03  TEST-TBL-P-2    OCCURS  10.
           05  D-P-2             PIC 9(5)PPV USAGE COMP-3.

       01  TEST-DATA-1.
         03 FILLER       PIC 9(4) USAGE COMP-3 VALUE 0.
         03 FILLER       PIC 9(4) USAGE COMP-3 VALUE 1.
         03 FILLER       PIC 9(4) USAGE COMP-3 VALUE 2.
         03 FILLER       PIC 9(4) USAGE COMP-3 VALUE 10.
         03 FILLER       PIC 9(4) USAGE COMP-3 VALUE 20.
         03 FILLER       PIC 9(4) USAGE COMP-3 VALUE 100.
         03 FILLER       PIC 9(4) USAGE COMP-3 VALUE 200.
         03 FILLER       PIC 9(4) USAGE COMP-3 VALUE 1000.
         03 FILLER       PIC 9(4) USAGE COMP-3 VALUE 2000.
         03 FILLER       PIC 9(4) USAGE COMP-3 VALUE 9999.

       01  TEST-DATA-R-1   REDEFINES TEST-DATA-1.
         03  TEST-TBL-1    OCCURS  10.
           05  D-1             PIC 9(4) USAGE COMP-3.

       01  TEST-DATA-2.
         03 FILLER       PIC 9(5) USAGE COMP-3 VALUE 0.
         03 FILLER       PIC 9(5) USAGE COMP-3 VALUE 1.
         03 FILLER       PIC 9(5) USAGE COMP-3 VALUE 2.
         03 FILLER       PIC 9(5) USAGE COMP-3 VALUE 10.
         03 FILLER       PIC 9(5) USAGE COMP-3 VALUE 100.
         03 FILLER       PIC 9(5) USAGE COMP-3 VALUE 1000.
         03 FILLER       PIC 9(5) USAGE COMP-3 VALUE 10000.
         03 FILLER       PIC 9(5) USAGE COMP-3 VALUE 12345.
         03 FILLER       PIC 9(5) USAGE COMP-3 VALUE 20000.
         03 FILLER       PIC 9(5) USAGE COMP-3 VALUE 99999.

       01  TEST-DATA-R-2   REDEFINES TEST-DATA-2.
         03  TEST-TBL-2    OCCURS  10.
           05  D-2             PIC 9(5) USAGE COMP-3.

       01  IDX                     PIC  S9(02).
       01 LOG-COUNT PIC 9999 VALUE 1.

       01 READ-DATA-TBL-V-1.
         03  READ-TBL-V-1    OCCURS  10.
           05  READ-DATA-V-1   PIC 9(4)V9(2) USAGE COMP-3.

       01 READ-DATA-TBL-V-2.
         03  READ-TBL-V-2    OCCURS  10.
           05  READ-DATA-V-2   PIC 9(5)V9(2) USAGE COMP-3.

       01 READ-DATA-TBL-P-1.
         03  READ-TBL-P-1    OCCURS  10.
           05  READ-DATA-P-1   PIC 9(4)PP USAGE COMP-3.

       01 READ-DATA-TBL-P-2.
         03  READ-TBL-P-2    OCCURS  10.
           05  READ-DATA-P-2   PIC 9(5)PP USAGE COMP-3.

       01 READ-DATA-TBL-1.
         03  READ-TBL-1    OCCURS  10.
           05  READ-DATA-1     PIC 9(4) USAGE COMP-3.

       01 READ-DATA-TBL-2.
         03  READ-TBL-2    OCCURS  10.
           05  READ-DATA-2     PIC 9(5) USAGE COMP-3.

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

           EXEC SQL
               SELECT FIELD INTO :READ-TBL-V-1
               FROM TESTTABLEV1 ORDER BY N
           END-EXEC.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
               DISPLAY READ-DATA-V-1(IDX)
           END-PERFORM.

           DISPLAY "================".

           EXEC SQL
               SELECT FIELD INTO :READ-TBL-V-2
               FROM TESTTABLEV2 ORDER BY N
           END-EXEC.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
               DISPLAY READ-DATA-V-2(IDX)
           END-PERFORM.

           DISPLAY "================".

           EXEC SQL
               SELECT FIELD INTO :READ-TBL-P-1
               FROM TESTTABLEP1 ORDER BY N
           END-EXEC.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
               DISPLAY READ-DATA-P-1(IDX)
           END-PERFORM.

           DISPLAY "================".

           EXEC SQL
               SELECT FIELD INTO :READ-TBL-P-2
               FROM TESTTABLEP2 ORDER BY N
           END-EXEC.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
               DISPLAY READ-DATA-P-2(IDX)
           END-PERFORM.

           DISPLAY "================".

           EXEC SQL
               SELECT FIELD INTO :READ-TBL-1 FROM TESTTABLE1 ORDER BY N
           END-EXEC.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
               DISPLAY READ-DATA-1(IDX)
           END-PERFORM.

           DISPLAY "================".

           EXEC SQL
               SELECT FIELD INTO :READ-TBL-2 FROM TESTTABLE2 ORDER BY N
           END-EXEC.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
               DISPLAY READ-DATA-2(IDX)
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

           EXEC SQL
               CONNECT :USERNAME IDENTIFIED BY :PASSWD USING :DBNAME 
           END-EXEC.

           EXEC SQL
               DROP TABLE IF EXISTS TESTTABLEV1
           END-EXEC.

           EXEC SQL
               DROP TABLE IF EXISTS TESTTABLEV2
           END-EXEC.

           EXEC SQL
               DROP TABLE IF EXISTS TESTTABLEP1
           END-EXEC.

           EXEC SQL
               DROP TABLE IF EXISTS TESTTABLEP2
           END-EXEC.

           EXEC SQL
               DROP TABLE IF EXISTS TESTTABLE1
           END-EXEC.

           EXEC SQL
               DROP TABLE IF EXISTS TESTTABLE2
           END-EXEC.

           EXEC SQL
                CREATE TABLE TESTTABLEV1
                (
                    N         NUMERIC(2,0) NOT NULL,
                    FIELD     DECIMAL(6,2) NOT NULL
                )
           END-EXEC.
           EXEC SQL
                CREATE TABLE TESTTABLEV2
                (
                    N         NUMERIC(2,0) NOT NULL,
                    FIELD     DECIMAL(7,2) NOT NULL
                )
           END-EXEC.

           EXEC SQL
                CREATE TABLE TESTTABLEP1
                (
                    N         NUMERIC(2,0) NOT NULL,
                    FIELD     NUMERIC(6,0) NOT NULL
                )
           END-EXEC.

           EXEC SQL
                CREATE TABLE TESTTABLEP2
                (
                    N         NUMERIC(2,0) NOT NULL,
                    FIELD     NUMERIC(7,0) NOT NULL
                )
           END-EXEC.

           EXEC SQL
                CREATE TABLE TESTTABLE1
                (
                    N         NUMERIC(2,0) NOT NULL,
                    FIELD     NUMERIC(4,0) NOT NULL
                )
           END-EXEC.

           EXEC SQL
                CREATE TABLE TESTTABLE2
                (
                    N         NUMERIC(2,0) NOT NULL,
                    FIELD     NUMERIC(5,0) NOT NULL
                )
           END-EXEC.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
              MOVE D-V-1(IDX)     TO  VV-1
              EXEC SQL
                 INSERT INTO TESTTABLEV1 VALUES (:IDX, :VV-1)
              END-EXEC
           END-PERFORM.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
              MOVE D-V-2(IDX)     TO  VV-2
              EXEC SQL
                 INSERT INTO TESTTABLEV2 VALUES (:IDX, :VV-2)
              END-EXEC
           END-PERFORM.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
              MOVE D-P-1(IDX)     TO  VP-1
              EXEC SQL
                 INSERT INTO TESTTABLEP1 VALUES (:IDX, :VP-1)
              END-EXEC
           END-PERFORM.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
              MOVE D-P-2(IDX)     TO  VP-2
              EXEC SQL
                 INSERT INTO TESTTABLEP2 VALUES (:IDX, :VP-2)
              END-EXEC
           END-PERFORM.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
              MOVE D-1(IDX)     TO  V-1
              EXEC SQL
                 INSERT INTO TESTTABLE1 VALUES (:IDX, :V-1)
              END-EXEC
           END-PERFORM.

           PERFORM VARYING IDX FROM 1 BY 1 UNTIL IDX > 10
              MOVE D-2(IDX)     TO  V-2
              EXEC SQL
                 INSERT INTO TESTTABLE2 VALUES (:IDX, :V-2)
              END-EXEC
           END-PERFORM.

           EXEC SQL
               COMMIT WORK
           END-EXEC.

      ******************************************************************
       CLEANUP-DB.
      ******************************************************************
           EXEC SQL
               DISCONNECT ALL
           END-EXEC.

