# Unit 4 – Debugging Question 3

**Question:** Base Class Pointer Member Access & Object Slicing

## Source question and student tasks

Question 3: Base Class Pointer Member Access & Object Slicing
Topic: Pointers to Derived Classes, Static Type Checking, Object Slicing
Problem Statement
A developer uses a base class pointer Vehicle* to manage a heap-allocated SportsCar object, but encounters a compilation failure when attempting to invoke a derived-specific method. Later, when assigning a SportsCar object to a value variable of type Vehicle, unexpected object slicing occurs.
Buggy Code

Student Tasks
1. Explain why vPtr->engageTurbo() on Line 22 causes a compilation error even though vPtr points to a SportsCar in heap memory. How does C++ static type checking govern pointer member access?
2. Define the phenomenon of Object Slicing on Line 26. What happens to turboEnabled during this assignment?
3. Show how to correctly invoke engageTurbo() using an explicit downcast, and explain how to prevent slicing by using references or pointers.
4. Provide the corrected, compilable code snippet.

## Correction notes

Pointer member access is checked against the static type. Downcast only when type is known; avoid object slicing by passing references/pointers.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS Vehicle virtual display; SportsCar overrides and adds turbo; use dynamic_cast when downcast needed; pass base reference to preserve dynamic type; demonstrate virtual call.
- **Corrective rule:** Pointer member access is checked against the static type. Downcast only when type is known; avoid object slicing by passing references/pointers.

## Dry run and expected/actual output

Test scenario: SportsCar dynamic object; base reference calls virtual show; turbo enabled.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
