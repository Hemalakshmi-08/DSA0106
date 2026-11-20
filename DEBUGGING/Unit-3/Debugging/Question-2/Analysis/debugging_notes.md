# Unit 3 – Debugging Question 2

**Question:** Shallow Copy & Double-Free Runtime Crash

## Source question and student tasks

Question 2: Shallow Copy & Double-Free Runtime Crash
Topic: Dynamic Constructors, Destructors, Shallow vs. Deep Copy
Problem Statement
An audio processing class allocates dynamic heap storage for integer audio samples in its constructor and deletes the memory in its destructor. However, the author omits a user-defined copy constructor. When an object is passed by value to an analysis function, the program compiles cleanly but crashes violently during runtime with a heap corruption abort.
Buggy Code

Student Tasks
1. Trace the memory address of samples before, during, and after processAudio(track) executes. What does the compiler-synthesized default copy constructor do to raw pointer members?
2. Explain why the program crashes with free(): double free detected when main() exits.
3. Write a user-defined Deep Copy Constructor that allocates fresh memory for the copied object and copies the elements individually.
4. Show the verified terminal output showing both distinct allocations and safe deallocations.

## Correction notes

Default copy of a raw pointer is shallow and can cause double deletion. Implement deep copy or use safe ownership types; this sample copies array elements.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS Complex(real,imag); operator+ adds parts; operator*=(ac-bd,ad+bc); operator== compares parts; Main prints sum/product/equality.
- **Corrective rule:** Default copy of a raw pointer is shallow and can cause double deletion. Implement deep copy or use safe ownership types; this sample copies array elements.

## Dry run and expected/actual output

Test scenario: capacity=3; samples initialize as 0,10,20; deep copy passed to function.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
