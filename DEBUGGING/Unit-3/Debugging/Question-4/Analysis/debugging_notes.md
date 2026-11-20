# Unit 3 – Debugging Question 4

**Question:** Prefix vs. Postfix Increment Signature Inversion

## Source question and student tasks

Question 4: Prefix vs. Postfix Increment Signature Inversion
Topic: Overloading Unary Operators (Prefix `++`, Postfix `++(int)`)
Problem Statement
A StepCounter class overloads both prefix and postfix increment operators. The author mixes up the canonical signatures, parameter lists, and return semantics, resulting in logic failures when chaining prefix increments or assigning postfix snapshots.
Buggy Code

Student Tasks
1. Detail the standard C++ signatures and return types for:
Prefix increment (++obj)
Postfix increment (obj++)
2. Explain the purpose of the dummy int parameter in postfix operator overloading.
3. Explain why prefix returns by reference (StepCounter&) while postfix returns by value (StepCounter).
4. Provide the corrected C++ code demonstrating accurate prefix and postfix behavior.

## Correction notes

Prefix ++ has no dummy parameter and returns a reference; postfix ++ takes int and returns old value by copy.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS Polynomial stores coefficient array; constructor owns heap; subscript checks range and returns coefficient; destructor releases storage.
- **Corrective rule:** Prefix ++ has no dummy parameter and returns a reference; postfix ++ takes int and returns old value by copy.

## Dry run and expected/actual output

Test scenario: Counter initial=5; prefix increment then postfix increment.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
