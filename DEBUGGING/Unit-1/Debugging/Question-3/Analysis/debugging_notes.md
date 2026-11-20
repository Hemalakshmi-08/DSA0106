# Unit 1 – Debugging Question 3

**Question:** Switch-Case Variable Initialization & Illegal Case Types

## Source question and student tasks

Question 3: Switch-Case Variable Initialization & Illegal Case Types
Topic: Control Structures (`switch-case`), Tokens, Data Types
Problem Statement
A lexical scanner evaluates token types using a switch statement. A developer declares and initializes local transformation variables inside individual case blocks and uses floating-point values for specific token categories. The compiler rejects the code with multiple fatal errors.
Buggy Code

Student Tasks
1. Explain why initializing int multiplier = 5; inside case 2 causes the compiler to flag an error regarding cross-initialization.
2. State the C++ language rule that causes case 4.5: to be rejected. What data types are legally permitted in switch expressions and case labels?
3. Identify the logical defect that occurs when tokenType == 2 executes due to missing control statements.
4. Provide the fully corrected and properly formatted code snippet.

## Correction notes

Switch case labels must be integral/enum constant expressions. Wrap case-local variables in braces to scope them; break prevents unintended fallthrough.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** FUNCTION CheckFlightReadiness(status)
  mandatory=0x0F; inhibitorMask=0xB0
  missing=mandatory XOR (status AND mandatory)
  faults=status AND inhibitorMask
  REPORT each missing sensor flag and each set inhibitor bit (0x10,0x20,0x80)
  ready=(missing==0 AND faults==0); radio bit 0x40 does not block
END FUNCTION
- **Corrective rule:** Switch case labels must be integral/enum constant expressions. Wrap case-local variables in braces to scope them; break prevents unintended fallthrough.

## Dry run and expected/actual output

Test scenario: tokenType=2; multiplier=5; tokenValue starts 0.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
