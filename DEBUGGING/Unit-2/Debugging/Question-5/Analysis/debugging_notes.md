# Unit 2 – Debugging Question 5

**Question:** Friend Function Declaration & Scope Resolution Flaws

## Source question and student tasks

Question 5: Friend Function Declaration & Scope Resolution Flaws
Topic: Friendly Functions, Forward Declarations, Member vs. Non-Member
Problem Statement
Two classes Engine and TelemetryAuditor interact in a vehicle diagnostic system. The developer attempts to create a non-member friend function inspectDiagnostics to inspect private variables from both classes. The code fails to compile due to missing forward declarations, unqualified member accesses, and illegal member invocation syntax.
Buggy Code

Student Tasks
1. Explain why alertThreshold on Line 29 cannot be accessed directly without object qualification inside inspectDiagnostics. Does a friend function possess a this pointer?
2. Explain why v8.inspectDiagnostics(v8, audit) on Line 41 fails compilation. What is the correct syntax for invoking a friend function?
3. Identify why a forward declaration of TelemetryAuditor is required before class Engine is declared.
4. Provide the fully corrected, compilable code snippet.

## Correction notes

Friend functions are nonmembers; they need a forward declaration for referenced classes and object-qualified private-field access. Invoke inspectDiagnostics(a,b), not object.member().

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS RegisterBank PRIVATE values[8]; READ/WRITE validate index; METHOD ref returns reference to selected element after validation; Main demonstrates reference update.
- **Corrective rule:** Friend functions are nonmembers; they need a forward declaration for referenced classes and object-qualified private-field access. Invoke inspectDiagnostics(a,b), not object.member().

## Dry run and expected/actual output

Test scenario: engine RPM=2500; auditor threshold=3000.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
