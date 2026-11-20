# Unit 1 – Debugging Question 1

**Question:** Operator Precedence Trap with Bitwise Operations & Implicit Promotion

## Source question and student tasks

Question 1: Operator Precedence Trap with Bitwise Operations & Implicit Promotion
Topic: Operators in C++, Operator Precedence, Implicit Conversion
Problem Statement
A student intends to write a utility routine that verifies whether a given positive 8-bit integer is both an odd number and strictly greater than 10. If both conditions are satisfied, it should display "Valid Odd". In addition, the routine attempts to count down from 3 to 0 using an unsigned loop counter. 
However, the program either fails to execute as intended or enters an infinite loop.
Buggy Code

Student Tasks
1. Identify the operator precedence conflict on Line 7. Explain how the compiler evaluates the expression num & 1 == 1 and why this causes logical bugs for various inputs.
2. Examine the for loop on Line 14. Explain why removing the break statement results in an infinite loop due to the properties of unsigned char.
3. Provide the corrected, robust C++ code snippet.
4. Show the dry run and exact console output of the corrected code.

## Correction notes

Bitwise AND must be parenthesized before equality: (num & 1) == 1. Use a signed loop variable for a descending countdown; unsigned underflows at zero.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** BEGIN
  CREATE WaterConsumer(id, previous, current)
  IF previous < 0 OR current < previous THEN FLAG invalid; RETURN ENDIF
  units = current - previous
  tier1 = MIN(units,100)*1.50
  tier2 = MIN(MAX(units-100,0),200)*2.50
  tier3 = MAX(units-300,0)*4.00
  subtotal = tier1+tier2+tier3
  IF units > 300 THEN total=subtotal*1.10 ELSE total=subtotal ENDIF
  DISPLAY invoice
END
- **Corrective rule:** Bitwise AND must be parenthesized before equality: (num & 1) == 1. Use a signed loop variable for a descending countdown; unsigned underflows at zero.

## Dry run and expected/actual output

Test scenario: num=15; countdown starts 3 and stops at 0.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
