# Unit 1 – Debugging Question 5

**Question:** Dynamic Array Allocation & Stray Loop Semicolon

## Source question and student tasks

Question 5: Dynamic Array Allocation & Stray Loop Semicolon
Topic: Memory Operators (`new`, `delete`), Loops, Off-by-One Boundaries
Problem Statement
A telemetry processor dynamically allocates memory on the heap for an array of 5 integer sensor readings. The developer attempts to initialize the array using a loop and compute the sum. However, the program fails to compile or exhibits memory corruption and incorrect calculations.
Buggy Code

Student Tasks
1. Explain the consequence of the semicolon ; at the end of the for statement on Line 10. What does the block { readings[i] = ...; } do, and what scope issue affects i?
2. Identify the defect on Line 21 regarding dynamic memory deallocation. What is the difference between delete and delete[] in C++?
3. Provide the corrected C++ program.
4. Trace the execution and show the final printed Total.

## Correction notes

The stray semicolon ends the loop body; i is scoped to the loop and unavailable in following block. Use delete[] for new[] allocation.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** BEGIN
  balance=1000; tries=0; authenticated=FALSE
  WHILE tries<3 AND NOT authenticated: READ PIN; tries++; authenticated=(PIN==4821) ENDWHILE
  IF NOT authenticated THEN LOCK card; EXIT ENDIF
  REPEAT DISPLAY menu; READ choice
    CASE balance inquiry: DISPLAY balance
    CASE deposit: accept only amount>0; balance+=amount
    CASE withdrawal: require amount>0 AND amount<=balance AND amount MOD 100==0; then balance-=amount
    CASE exit: stop
    DEFAULT: DISPLAY invalid choice
  UNTIL choice==4
END
- **Corrective rule:** The stray semicolon ends the loop body; i is scoped to the loop and unavailable in following block. Use delete[] for new[] allocation.

## Dry run and expected/actual output

Test scenario: array length=5; readings=(10,20,30,40,50).

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
