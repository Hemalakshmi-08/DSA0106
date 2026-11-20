# Unit 3 – Pseudo-Code Question 4

**Question:** Polynomial Expression with Overloaded Subscript `[]` & Destructor

## Original scenario and requirements

Question 4: Polynomial Expression with Overloaded Subscript `[]` & Destructor
Topic: Dynamic Constructors, Destructors, Overloaded Subscript Operator `[]`
Scenario
Design the pseudo-code for a dynamic Polynomial class representing algebraic polynomials of degree $N$. The class must support dynamic heap array allocation, index-based coefficient access/modification via the subscript operator [], deep copying, and polynomial addition.
Functional Requirements
1. Class Attributes (Private):
degree (INTEGER)
coeffArray (POINTER TO REAL) - Dynamic array of size degree + 1.
2. Lifecycle Methods:
Constructor(deg AS INTEGER): Allocates dynamic array and initializes coefficients to 0.0.
Copy Constructor: Performs deep copy of coefficients into fresh heap array.
Destructor: Deallocates dynamic coefficient buffer.
3. Overloaded Subscript Operator `[]`:
OPERATOR [](index AS INTEGER) RETURNS REF REAL:
Bounds check: $0 \le \text{index} \le \text{degree}$.
Returns an lvalue reference allowing both reading and assignment (poly[2] <- 5.0).
4. Overloaded Binary Operator `+`:
Sums coefficients of matching powers for two polynomials of potentially differing degrees.
Student Tasks
1. Write the formal structured pseudo-code for Polynomial.
2. Trace the addition of $P_1(x) = 3x^2 + 2x + 5$ and $P_2(x) = 4x^3 + x^2 + 7$.

## Proposed structured solution

Polynomial owns coefficient array and degree; constructor/destructor manage array; [] provides bounds-checked coefficient access. [1,2,3] represents 1+2x+3x².

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS Polynomial stores coefficient array; constructor owns heap; subscript checks range and returns coefficient; destructor releases storage.
```

## Trace / test values

Counter initial=5; prefix increment then postfix increment.
