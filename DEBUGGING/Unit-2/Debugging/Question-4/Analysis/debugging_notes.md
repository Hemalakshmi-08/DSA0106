# Unit 2 – Debugging Question 4

**Question:** Array of Objects Missing Default Constructor

## Source question and student tasks

Question 4: Array of Objects Missing Default Constructor
Topic: Arrays of Objects, Constructors, Class Specification
Problem Statement
A student records database creates an array of Student objects. The author defines a parameterized constructor to assign roll numbers and names during object creation. However, declaring the array Student batch[3]; causes the compiler to reject the program.
Buggy Code

Student Tasks
1. Explain the C++ rule regarding automatic synthesis of the default constructor when a parameterized constructor is defined. Why does Student batch[3]; fail to compile?
2. Describe two different techniques to solve this problem:
Technique A: Supplying an explicit default constructor.
Technique B: Initializing array elements using an array initializer list of parameterized constructors.
3. Write the corrected C++ program using Technique A.
4. Show the verified console output.

## Correction notes

A user-declared parameterized constructor suppresses implicit default construction. Provide a default constructor or initialize each array element explicitly.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS Logger OVERLOAD log(message),log(message,level),log(code); INLINE helper formats prefix; Main makes unambiguous calls.
- **Corrective rule:** A user-declared parameterized constructor suppresses implicit default construction. Provide a default constructor or initialize each array element explicitly.

## Dry run and expected/actual output

Test scenario: roster roll numbers 10,20,30.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
