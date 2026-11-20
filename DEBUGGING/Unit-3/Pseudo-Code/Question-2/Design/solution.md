# Unit 3 – Pseudo-Code Question 2

**Question:** Complex Number System with Constructor Overloading & Operators (`+`, `*`, `==`)

## Original scenario and requirements

Question 2: Complex Number System with Constructor Overloading & Operators (`+`, `*`, `==`)
Topic: Constructor Overloading, Operator Overloading (`+`, `*`, `==`)
Scenario
Design a mathematical class Complex supporting complex arithmetic:
Constructor overloading: Default constructor $(0 + 0i)$, Single-parameter constructor $(r + 0i)$, and Two-parameter constructor $(r + ii)$.
Overload + for addition: $(a + bi) + (c + di) = (a+c) + (b+d)i$.
Overload * for multiplication: $(a + bi) \times (c + di) = (ac - bd) + (ad + bc)i$.
Overload == to verify equality of real and imaginary components.
Functional Requirements
1. Class `Complex` Attributes: real (REAL), imag (REAL).
2. Overloaded Constructors:
Zero arguments: sets real = 0.0, imag = 0.0.
One argument r: sets real = r, imag = 0.0.
Two arguments r, i: sets real = r, imag = i.
3. Overloaded Operators:
OPERATOR +(REF other AS Complex) RETURNS Complex.
OPERATOR *(REF other AS Complex) RETURNS Complex.
OPERATOR ==(REF other AS Complex) RETURNS BOOLEAN.
4. Display Method: Prints complex numbers in formatted notation $a + bi$.
Student Tasks
1. Write the structured pseudo-code defining the constructors, overloaded operators, and helper methods.
2. Provide a step-by-step trace calculating the product of $C_1 = 3 + 2i$ and $C_2 = 1 + 4i$.

## Proposed structured solution

Complex has overloaded constructors and +,* ,==. Add: (2+3i)+(1-2i)=3+i. Multiply: (2+3i)(1-2i)=8-i. Equality compares both components.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS Complex(real,imag); operator+ adds parts; operator*=(ac-bd,ad+bc); operator== compares parts; Main prints sum/product/equality.
```

## Trace / test values

capacity=3; samples initialize as 0,10,20; deep copy passed to function.
