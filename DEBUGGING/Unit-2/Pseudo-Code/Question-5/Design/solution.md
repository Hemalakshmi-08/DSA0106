# Unit 2 – Pseudo-Code Question 5

**Question:** Hardware Register Bank with Return-by-Reference

## Original scenario and requirements

Question 5: Hardware Register Bank with Return-by-Reference
Topic: Return by Reference, Arrays within a Class, Lvalue Semantics
Scenario
Write pseudo-code for a microcontroller hardware buffer class RegisterBank that allows client code to read and directly overwrite internal hardware register bytes using lvalue assignment through a member function returning by reference.
Functional Requirements
1. Class `RegisterBank`:
Private Attributes: registers (ARRAY[8] OF INTEGER), errorSink (INTEGER).
Constructor: Initializes all 8 registers to 0 and errorSink to -1.
Method `GetRegister(index AS INTEGER) RETURNS REF INTEGER`:
Bounds check: $0 \le \text{index} < 8$.
If valid, returns an lvalue reference to registers[index].
If out-of-bounds, emits an alert and returns reference to errorSink to prevent illegal memory modification.
Method `DisplayState()`: Dumps current values of all 8 registers in hexadecimal format.
2. Client Program:
Use direct lvalue assignment: bank.GetRegister(0) <- 170, bank.GetRegister(1) <- 255.
Read through reference: readVal <- bank.GetRegister(0).
Test an out-of-bounds assignment attempt: bank.GetRegister(10) <- 999.
Student Tasks
1. Write the formal structured pseudo-code for RegisterBank and driver program.
2. Explain the mechanism of return-by-reference that enables a function call to appear on the left side of an assignment operator (func() = val).

## Proposed structured solution

RegisterBank owns fixed register array; validate indexes in read/write; reference accessor returns an element reference only for valid index. Example register 2 changed 0->17->23 through reference.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS RegisterBank PRIVATE values[8]; READ/WRITE validate index; METHOD ref returns reference to selected element after validation; Main demonstrates reference update.
```

## Trace / test values

engine RPM=2500; auditor threshold=3000.
