# Unit 5 – Debugging Question 1

**Question:** Non-Virtual Destructor Memory Leak in Polymorphic Deletion

## Source question and student tasks

Question 1: Non-Virtual Destructor Memory Leak in Polymorphic Deletion
Topic: Virtual Functions, Virtual Destructors, Dynamic Dispatch
Problem Statement
A graphical rendering engine manages polygon objects through base class Shape* pointers. When objects are deleted through the base pointer, the derived destructor fails to run, causing severe memory leaks of dynamically allocated vertex coordinate arrays.
Buggy Code

Student Tasks
1. Explain why ~ComplexPolygon() is never called when delete shapePtr; executes on Line 41. How does the compiler resolve destructor calls in the absence of the virtual keyword?
2. State the C++ standard rule regarding deleting a derived object through a base class pointer that lacks a virtual destructor. What kind of behavior is this classified as?
3. Add the virtual keyword in the appropriate location and explain how the virtual method table (vtable) ensures proper destructor chaining from derived to base.
4. Show the complete corrected code and its terminal output.

## Correction notes

A polymorphic base class needs a virtual destructor for deletion through a base pointer; otherwise deleting derived through base has undefined behavior.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Undefined behavior / control-flow defect. See original student task statements above for the specified lines.
- **Root cause:** ABSTRACT PaymentGateway with virtual Authorize and Capture plus virtual destructor; CreditCard and Crypto override; main stores chosen implementation in base pointer, invokes methods, deletes safely.
- **Corrective rule:** A polymorphic base class needs a virtual destructor for deletion through a base pointer; otherwise deleting derived through base has undefined behavior.

## Dry run and expected/actual output

Test scenario: Polygon vertices=4; render and delete through Shape pointer.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
