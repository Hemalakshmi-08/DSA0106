# Unit 3 – Debugging Question 5

**Question:** Violation of Fundamental Operator Overloading Rules

## Source question and student tasks

Question 5: Violation of Fundamental Operator Overloading Rules
Topic: Rules for Overloading Operators
Problem Statement
A student submits code attempting custom operator overloading for mathematical vector operations, but violates several core C++ language constraints, triggering multiple fatal compiler rejections.
Buggy Code

Student Tasks
1. Enumerate the operators in C++ that cannot be overloaded under any circumstances. Why is operator. prohibited?
2. State the C++ language rule that causes int operator+(int, int) on Line 14 to be rejected.
3. Can a programmer define new operator tokens such as ** in C++? Explain the restriction on operator symbols, precedence, and arity.
4. Rewrite the class cleanly, replacing the invalid operators with legal overloaded operators (== and +) and a member method for exponentiation.

## Correction notes

Only certain operators are overloadable, no new tokens can be invented, and at least one operand must be user-defined. Use legal + and ==, use named method for power.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS Vector2D; prefix ++ increments both and returns reference; postfix ++(int) snapshots and returns old copy; += updates vector; Main traces values.
- **Corrective rule:** Only certain operators are overloadable, no new tokens can be invented, and at least one operand must be user-defined. Use legal + and ==, use named method for power.

## Dry run and expected/actual output

Test scenario: Vec a=(2,3), b=(4,5); add and compare.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
