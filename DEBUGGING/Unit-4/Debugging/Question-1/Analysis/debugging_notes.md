# Unit 4 – Debugging Question 1

**Question:** The Diamond Problem in Multipath Hybrid Inheritance

## Source question and student tasks

Question 1: The Diamond Problem in Multipath Hybrid Inheritance
Topic: Hybrid Inheritance, Virtual Base Classes, Ambiguity
Problem Statement
A university information system models a teaching assistant who is simultaneously a Student and an Employee, both of which inherit from a common Person base class. When attempting to access the idNumber field on a TeachingAssistant instance, the compiler halts with an ambiguity error.
Buggy Code

Student Tasks
1. State the exact compilation error that occurs on Line 33.
2. Draw or explain the memory layout of TeachingAssistant under non-virtual inheritance. Why are there two separate idNumber fields?
3. Refactor the classes using Virtual Base Class Inheritance to ensure that only a single, shared instance of Person exists.
4. Explain how constructor delegation changes when virtual base classes are used: Which constructor is responsible for invoking Person(int)?

## Correction notes

Non-virtual diamond inheritance duplicates Person base subobjects. Use virtual inheritance and initialize the shared virtual base from the most-derived constructor.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS Person; Student and Employee VIRTUAL INHERIT Person; TeachingAssistant inherits both and initializes virtual Person in most-derived constructor; print shared identifier.
- **Corrective rule:** Non-virtual diamond inheritance duplicates Person base subobjects. Use virtual inheritance and initialize the shared virtual base from the most-derived constructor.

## Dry run and expected/actual output

Test scenario: Student id=101; Employee id=202; shared Person id=303.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
