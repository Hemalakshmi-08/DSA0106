# Unit 4 – Debugging Question 4

**Question:** Incorrect Return Type in `this` Pointer Method Chaining

## Source question and student tasks

Question 4: Incorrect Return Type in `this` Pointer Method Chaining
Topic: The `this` Pointer, Method Chaining (Fluent Interface)
Problem Statement
A GUI styling builder class WindowBox uses the this pointer to support method chaining (fluent interface). However, one method returns a pointer WindowBox* while another returns a reference WindowBox&. Chaining these calls results in syntax errors with the member selection operator ..
Buggy Code

Student Tasks
1. Analyze the expression box.setWidth(800).setHeight(600) on Line 30. Why does the compiler reject .setHeight(600) after setWidth(800) has executed?
2. Differentiate between this and *this in terms of data type and memory semantics.
3. Correct the return type and return statement of setWidth to enable smooth method chaining.
4. Show the verified console output.

## Correction notes

A fluent method should return WindowBox& and return *this; this is a pointer while *this is the object reference.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS WindowBox setters set width/height and RETURN REF THIS; display; Main chains width then height.
- **Corrective rule:** A fluent method should return WindowBox& and return *this; this is a pointer while *this is the object reference.

## Dry run and expected/actual output

Test scenario: Window width=800; height=600.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
