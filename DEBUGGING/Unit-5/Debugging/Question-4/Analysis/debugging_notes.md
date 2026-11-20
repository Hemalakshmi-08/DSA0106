# Unit 5 – Debugging Question 4

**Question:** Attempting to Instantiate an Incomplete Abstract Class

## Source question and student tasks

Question 4: Attempting to Instantiate an Incomplete Abstract Class
Topic: Pure Virtual Functions, Abstract Classes, Runtime Interfaces
Problem Statement
A networking library defines an abstract interface NetworkPacket with pure virtual functions. A derived class VideoPacket attempts to create an object, but the compiler aborts compilation because the derived class omitted the implementation of one of the pure virtual functions.
Buggy Code

Student Tasks
1. State the exact compilation error that occurs on Line 25.
2. What technical condition makes a class an "Abstract Class" in C++? Can an abstract class ever be directly instantiated?
3. Under what conditions does a class derived from an abstract base class become a concrete, instantiable class?
4. Provide the corrected C++ code implementing all pure virtual functions.

## Correction notes

A derived class is concrete only after overriding all inherited pure virtual functions.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Undefined behavior / control-flow defect. See original student task statements above for the specified lines.
- **Root cause:** ResourceGuard RAII acquires/releases handle; Ingest computes CRC and throws on mismatch; Main catches specific CRC exception and catch-all; trace includes destructor during stack unwind.
- **Corrective rule:** A derived class is concrete only after overriding all inherited pure virtual functions.

## Dry run and expected/actual output

Test scenario: Video frame ID=1042; expected packet size=1200 bytes.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
