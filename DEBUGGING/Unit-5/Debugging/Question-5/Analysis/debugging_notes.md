# Unit 5 – Debugging Question 5

**Question:** Pass-by-Value Object Slicing Suppressing Dynamic Binding

## Source question and student tasks

Question 5: Pass-by-Value Object Slicing Suppressing Dynamic Binding
Topic: Runtime Polymorphism, Early vs. Late Binding, Object Slicing
Problem Statement
A battle simulator game uses runtime polymorphism to handle creature encounters. When entities are passed into a dispatch function triggerEncounter, the derived creature behavior (Dragon::attack) is suppressed, and generic base class behavior (Entity::attack) executes instead.
Buggy Code

Student Tasks
1. Explain why triggerEncounter(boss) prints "Entity performs generic scratch.".
2. Explain the role of the virtual table pointer (vptr) during pass-by-value versus pass-by-reference. What happens to the vptr inside the copied Entity e object?
3. Refactor triggerEncounter to enable late binding / dynamic dispatch.
4. Show the verified terminal output.

## Correction notes

Passing a polymorphic base object by value slices off derived state. Use const base reference or base pointer to preserve dynamic dispatch.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Undefined behavior / control-flow defect. See original student task statements above for the specified lines.
- **Root cause:** Calibrate may throw on temperatures outside [-273.15,1500]; CommitTelemetry is noexcept and catches all inside; Main wraps calibration and catches range exception; commit only valid readings.
- **Corrective rule:** Passing a polymorphic base object by value slices off derived state. Use const base reference or base pointer to preserve dynamic dispatch.

## Dry run and expected/actual output

Test scenario: Dragon polymorphic encounter through Entity reference.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
