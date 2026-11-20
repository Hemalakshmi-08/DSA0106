# Unit 2 – Debugging Question 3

**Question:** Function Overload Ambiguity via Default Arguments

## Source question and student tasks

Question 3: Function Overload Ambiguity via Default Arguments
Topic: Function Overloading, Default Arguments
Problem Statement
A geometric calculation library provides overloaded functions to calculate the volume of boxes and cylinders. The author provides default arguments for cuboids to allow flexible dimensions. However, invoking computeVolume with a single argument triggers a compilation failure due to ambiguity.
Buggy Code

Student Tasks
1. Explain why the compiler generates error: call of overloaded 'computeVolume(double)' is ambiguous on Line 19. Which overloaded signatures are in conflict, and why?
2. Analyze the call on Line 22 (computeVolume(3.0, 7.0)). Does it also conflict with Overload 1? Explain the matching process.
3. Refactor the function signatures to eliminate ambiguity completely while retaining flexible volume calculations.
4. Provide the corrected C++ code and the resulting output.

## Correction notes

Default arguments across overloads can make calls ambiguous. Use explicit overload arities or distinct names so each call has one best viable candidate.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS Student PRIVATE roll,name,marks; CONSTRUCTOR; METHOD grade; METHOD display; Main initializes object array, loops display and average.
- **Corrective rule:** Default arguments across overloads can make calls ambiguous. Use explicit overload arities or distinct names so each call has one best viable candidate.

## Dry run and expected/actual output

Test scenario: cuboid dimensions 2,3,4; cylinder radius 3, height 7.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
