# Unit 2 – Pseudo-Code Question 2

**Question:** Matrix Mathematical Engine with Arrays in Class & Friend Dot-Product

## Original scenario and requirements

Question 2: Matrix Mathematical Engine with Arrays in Class & Friend Dot-Product
Topic: Arrays within a Class, Scope Resolution `::`, Friend Functions
Scenario
Design a mathematical class Matrix2D that encapsulates a $3 \times 3$ grid of real numbers. Define member methods outside the class using scope resolution syntax. Implement an external FRIEND FUNCTION named ComputeCrossTrace that calculates the scalar dot product of the primary diagonals of two distinct matrix objects.
Functional Requirements
1. Class `Matrix2D`:
Private Attributes: grid (ARRAY[3][3] OF REAL).
Public Declarations:
Initialize(): Fills matrix with zeros.
SetElement(row, col, value): Stores value with $0 \le \text{row}, \text{col} < 3$ bounds validation.
GetElement(row, col) RETURNS REAL: Retrieves value with bounds validation.
Display(): Prints matrix in $3 \times 3$ grid format.
FRIEND FUNCTION ComputeCrossTrace(Matrix2D A, Matrix2D B) RETURNS REAL.
2. Implementation Outside Class:
Define all member methods outside the class using the scope resolution operator Matrix2D::MethodName().
3. Friend Function Logic:
Directly access private grid arrays of both objects A and B without getters.
Compute $\sum_{i=0}^{2} (A.\text{grid}[i][i] \times B.\text{grid}[i][i])$.
Student Tasks
1. Write the structured pseudo-code for the class definition, outside member function implementations, and the friend function.
2. Trace the friend function calculation for two sample matrices with diagonal elements $A_{\text{diag}} = [2, 4, 6]$ and $B_{\text{diag}} = [1, 3, 5]$.

## Proposed structured solution

Matrix stores row/column dimensions and elements; constructor initializes; bounds-checked element accessor; friend dot-product routine validates compatible dimensions and sums products. Example vectors [1,2,3]·[4,5,6]=32.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS Matrix PRIVATE rows,cols,values; CONSTRUCTOR allocates and initializes; GET validates indexes; FRIEND DotProduct checks equal vector lengths and accumulates sum; Main computes sample dot product.
```

## Trace / test values

accounts balances 1250 and 750.
