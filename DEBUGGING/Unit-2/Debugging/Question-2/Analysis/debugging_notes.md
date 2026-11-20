# Unit 2 – Debugging Question 2

**Question:** Static Data Member Linkage & Member Function Scoping

## Source question and student tasks

Question 2: Static Data Member Linkage & Member Function Scoping
Topic: Static Data Members, Static Member Functions, Scope Resolution
Problem Statement
A banking software module tracks total branch reserves using a static variable in class BankAccount. The developer creates a static member function displayAudit() to inspect total reserves, but also attempts to print individual account holder information from inside the static method. The code fails with both compilation and linker errors.
Buggy Code

Student Tasks
1. Identify the Linker Error (undefined reference to BankAccount::totalBankReserves) that occurs during the build process. Explain why declaring a static member variable inside a class is insufficient to allocate memory.
2. Identify the Compilation Error on Line 19. Explain why static member functions cannot access non-static member variables like accHolder.
3. Provide the complete corrected C++ code, including the necessary external definition of the static data member and separated display methods.
4. Show the console output of the corrected program.

## Correction notes

Define static storage outside the class with qualified name. Static member functions lack this and cannot read instance fields; split instance display and class-wide audit methods.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS Matrix PRIVATE rows,cols,values; CONSTRUCTOR allocates and initializes; GET validates indexes; FRIEND DotProduct checks equal vector lengths and accumulates sum; Main computes sample dot product.
- **Corrective rule:** Define static storage outside the class with qualified name. Static member functions lack this and cannot read instance fields; split instance display and class-wide audit methods.

## Dry run and expected/actual output

Test scenario: accounts balances 1250 and 750.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
