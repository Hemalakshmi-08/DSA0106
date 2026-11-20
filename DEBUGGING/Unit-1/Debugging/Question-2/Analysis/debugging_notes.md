# Unit 1 – Debugging Question 2

**Question:** Scope Resolution & Variable Shadowing Conflicts

## Source question and student tasks

Question 2: Scope Resolution & Variable Shadowing Conflicts
Topic: Variables, Scope Resolution Operator (`::`), Constants
Problem Statement
An e-commerce invoicing system defines a global baseline tax rate. Inside main(), a subsidized local tax rate is defined with the same identifier. Within an inner block, an integer corporate tax rate is declared, again shadowing the identifier. The developer attempts to calculate totals using both local and global tax rates using scope resolution, but encounters compilation and semantic errors.
Buggy Code

Student Tasks
1. Identify the syntax error on Line 11.
2. Explain what value ::taxRate actually resolves to on Line 16. Can the unary scope resolution operator :: access an enclosing local function scope? Explain C++ scoping rules regarding nested shadowing.
3. Rewrite the code cleanly, resolving the naming ambiguities without compiler errors.
4. Provide the expected console output.

## Correction notes

Global scope operator ::taxRate resolves only global variable, not an enclosing local. Replace shadowing names with distinct variables and ordinary identifiers.

## Corrected source

The corrected independent C++17 demonstration is in `../Source_Code/main.cpp`.

## Verification

The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed. See Output files for compiler diagnostics, expected output and captured actual output.

## Defect classification and root cause

- **Defect type(s):** Compile-time error / logic defect. See original student task statements above for the specified lines.
- **Root cause:** BEGIN
  eligible80C=MIN(deduction80C,150000); eligibleHealth=MIN(health,25000)
  taxable=MAX(0,gross-eligible80C-eligibleHealth)
  IF taxable<=250000 tax=0
  ELSE IF taxable<=500000 tax=(taxable-250000)*.05
  ELSE IF taxable<=1000000 tax=12500+(taxable-500000)*.20
  ELSE tax=112500+(taxable-1000000)*.30 ENDIF
  roundedTax=INTEGER(tax*1.04+0.5)
END
- **Corrective rule:** Global scope operator ::taxRate resolves only global variable, not an enclosing local. Replace shadowing names with distinct variables and ordinary identifiers.

## Dry run and expected/actual output

Test scenario: price=1000; global tax 18%; local tax 5%; inner corporate tax 12%.

```text
The program was compiled with `g++ -std=c++17 -Wall -Wextra -pedantic main.cpp -o program.exe` from the Source_Code directory and executed.
```
Actual standard output is saved verbatim in `../Output/actual_output.txt`; the expected-output file contains the corresponding prediction for this corrected demonstration.
