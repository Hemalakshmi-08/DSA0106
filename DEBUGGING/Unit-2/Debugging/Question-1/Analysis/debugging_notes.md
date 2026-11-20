# Unit 2 – Debugging Question 1

**Question:** Dangling Reference in Return-by-Reference

## Source question and student tasks

Question 1: Dangling Reference in Return-by-Reference
Topic: Return by Reference, Scope, Activation Records
Problem Statement
A developer writes a utility function designed to return the scaled maximum of two integers by reference. Another function returns an element of an array passed by reference. While the array function works as intended, calling the scaled maximum function leads to segmentation faults or corrupted garbage values when accessed later in main().
Buggy Code

Student Tasks
1. Explain what happens to the memory location of result on Line 8 after getMaximumScaled finishes execution. Why does danglingRef exhibit undefined behavior on Line 27?
2. Why is getArrayElement on Line 11 safe for return-by-reference, whereas getMaximumScaled is unsafe?
3. Rewrite the code using proper return semantics.
4. Show the dry-run and expected output of the corrected code.

## Correction notes

Returning a reference to a local variable leaves a dangling reference. Return computed scalar values by value; return references only to valid longer-lived objects/array elements.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS VaultAccount PRIVATE accountNumber,balance; CONSTRUCTOR; DEPOSIT/withdraw validate positive/funds; CLASS stores static accountCount and reserveSum defined outside class; Main creates accounts and calls static audit.
- **Corrective rule:** Returning a reference to a local variable leaves a dangling reference. Return computed scalar values by value; return references only to valid longer-lived objects/array elements.

## Dry run and expected/actual output

Test scenario: array={4,8,12}; max inputs 7 and 9; scale=3; array index 1 set to 20.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
