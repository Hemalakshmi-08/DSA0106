# Unit 3 – Debugging Question 3

**Question:** Stream Insertion Operator `<<` Member Function Violation

## Source question and student tasks

Question 3: Stream Insertion Operator `<<` Member Function Violation
Topic: Defining Operator Overloading, Member vs. Non-Member/Friend
Problem Statement
A student implements a Fraction class and attempts to overload the stream insertion operator << as a member function so that fractions can be printed using std::cout << frac;. The compiler rejects the expression in main(), but bizarrely permits the reverse expression frac << std::cout;.
Buggy Code

Student Tasks
1. Explain how the compiler translates binary member operator calls (left @ right $\rightarrow$ left.operator@(right)). Why does this translation cause std::cout << f1 to fail compilation when operator<< is a member of Fraction?
2. Explain why f1 << std::cout compiles and why this syntax is completely unacceptable in production code.
3. Rewrite operator<< as a non-member friend function taking std::ostream& and const Fraction& as parameters.
4. Show the corrected code and resulting output.

## Correction notes

Stream insertion with cout on the left must be a nonmember/friend operator returning ostream&.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** CLASS Currency amount; unary minus returns negated copy; friend ostream insertion streams formatted currency; Main prints original and negative amount.
- **Corrective rule:** Stream insertion with cout on the left must be a nonmember/friend operator returning ostream&.

## Dry run and expected/actual output

Test scenario: Value=42.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
