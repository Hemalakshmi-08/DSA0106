# Unit 1 – Debugging Question 4

**Question:** Reference Variable Initialization & Constant Binding Violations

## Source question and student tasks

Question 4: Reference Variable Initialization & Constant Binding Violations
Topic: Reference Variables, Constants, Implicit Conversions
Problem Statement
A junior programmer attempts to use C++ reference variables as aliases for variables, literals, and type-converted values. The compiler rejects the program due to violations of reference initialization rules.
Buggy Code

Student Tasks
1. Analyze each of the four reference operations (Lines 7, 11, 14, and 18) and state the specific C++ rule violated by each.
2. Explain the mechanism of lifetime extension of temporary objects when binding to const references (const int&).
3. Write the corrected code snippet ensuring all references are valid and type-safe.
4. Provide the expected console output.

## Correction notes

A non-const lvalue reference must bind immediately to a compatible lvalue. Use an initialized lvalue for mutable aliases; const reference may bind a temporary and extend its lifetime.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** BEGIN
  REPEAT READ N UNTIL N>0
  IF N==1 THEN sum=0; CLASSIFY Deficient; EXIT ENDIF
  sum=1; FOR d=2 TO FLOOR(SQRT(N))
    IF N MOD d != 0 THEN CONTINUE ENDIF
    sum=sum+d; paired=N/d
    IF paired != d THEN sum=sum+paired ENDIF
  ENDFOR
  CLASSIFY sum compared with N: Perfect/Abundant/Deficient
END
- **Corrective rule:** A non-const lvalue reference must bind immediately to a compatible lvalue. Use an initialized lvalue for mutable aliases; const reference may bind a temporary and extend its lifetime.

## Dry run and expected/actual output

Test scenario: a=25; literal target=100; pi=3.14159; const reference temporary=50.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
