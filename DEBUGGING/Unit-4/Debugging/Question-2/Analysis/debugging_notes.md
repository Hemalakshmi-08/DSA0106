# Unit 4 – Debugging Question 2

**Question:** Missing Base Constructor in Derived Initializer List

## Source question and student tasks

Question 2: Missing Base Constructor in Derived Initializer List
Topic: Constructors in Derived Classes, Order of Constructor Execution
Problem Statement
A base class Device requires a hardware MAC address during initialization and provides no default constructor. The derived class Sensor fails to compile because it attempts to set the base class attribute inside its constructor body instead of using a member initializer list.
Buggy Code

Student Tasks
1. Explain why the compiler generates an error before the constructor body of Sensor ever executes. What constructor does the compiler attempt to call implicitly?
2. Detail the exact chronological sequence of constructor execution when a derived class object is instantiated.
3. Rewrite the Sensor constructor using a member initializer list to delegate arguments to Device.
4. Provide the verified terminal output.

## Correction notes

Derived constructors must initialize a non-default-constructible base in the initializer list, before the derived body.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS Device(mac) base; CLASS Sensor extends Device; Sensor initializer list invokes BASE(mac), then initializes rate; trace constructor order.
- **Corrective rule:** Derived constructors must initialize a non-default-constructible base in the initializer list, before the derived body.

## Dry run and expected/actual output

Test scenario: MAC=AA:BB:CC:DD:EE:FF; sampling rate=50 Hz.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
