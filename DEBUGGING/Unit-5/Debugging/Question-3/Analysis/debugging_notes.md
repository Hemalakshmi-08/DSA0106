# Unit 5 – Debugging Question 3

**Question:** Exception Rethrowing Slicing Bug (`throw e;` vs. `throw;`)

## Source question and student tasks

Question 3: Exception Rethrowing Slicing Bug (`throw e;` vs. `throw;`)
Topic: Throwing, Catching & Rethrowing an Exception, Object Slicing
Problem Statement
An intermediate error-logging routine intercepts database errors to log audit events and rethrows them for client handling in main(). However, the client fails to catch the specific derived TimeoutError because the intermediate routine accidentally slices the exception during rethrow.
Buggy Code

Student Tasks
1. Explain what output the program currently prints in main() and why catch (const TimeoutError &te) is bypassed.
2. What is the fundamental difference between writing throw e; and bare throw; inside a catch block? How does copy construction interact with throw e;?
3. Correct Line 32 to ensure the original polymorphic exception object propagates without loss of derived attributes.
4. Show the corrected output.

## Correction notes

throw e copies using the static type of the catch variable and can slice; bare throw; rethrows the original exception object.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Undefined behavior / control-flow defect. See original student task statements above for the specified lines.
- **Root cause:** ABSTRACT GameObject with Update/Render and virtual destructor; ParticleSystem allocates particle array, overrides, frees in destructor; scene pointer list updates/renders then deletes all.
- **Corrective rule:** throw e copies using the static type of the catch variable and can slice; bare throw; rethrows the original exception object.

## Dry run and expected/actual output

Test scenario: Timeout exception duration=5000 ms.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
