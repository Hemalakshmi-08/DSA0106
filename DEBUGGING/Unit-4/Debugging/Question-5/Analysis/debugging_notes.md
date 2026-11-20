# Unit 4 – Debugging Question 5

**Question:** Private Inheritance Access Violations & Inaccessible Base Cast

## Source question and student tasks

Question 5: Private Inheritance Access Violations & Inaccessible Base Cast
Topic: Access Specifiers in Inheritance (`private` derivation), Upcasting
Problem Statement
A secure networking module attempts to reuse a standard networking socket class via private inheritance. However, client code in main() encounters compilation errors when attempting to call base class methods or upcast the derived object pointer to a base pointer.
Buggy Code

Student Tasks
1. Explain what happens to the accessibility of openPort() and closePort() when SecureChannel inherits RawSocket privately. Why is channel.closePort() on Line 24 forbidden in main()?
2. Explain why RawSocket *socketPtr = &channel; on Line 27 fails compilation with error: 'RawSocket' is an inaccessible base of 'SecureChannel'. Under what conditions does C++ allow upcasting?
3. Provide two distinct ways to make closePort() accessible:
Approach A: Using the using RawSocket::closePort; access declaration.
Approach B: Using public inheritance or composition.
4. Write the corrected code using Approach A.

## Correction notes

Private inheritance makes public base members inaccessible through derived objects and prevents public upcasts. A using declaration can selectively expose a base method.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS RawSocket open/close; SecureChannel privately inherits; expose selected method with PUBLIC using RawSocket::closePort; wrapper open method calls inherited open; Main uses exposed close.
- **Corrective rule:** Private inheritance makes public base members inaccessible through derived objects and prevents public upcasts. A using declaration can selectively expose a base method.

## Dry run and expected/actual output

Test scenario: Secure channel opens, connects, then closes.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
