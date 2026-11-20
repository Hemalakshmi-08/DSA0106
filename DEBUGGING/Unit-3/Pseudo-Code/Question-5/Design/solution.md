# Unit 3 – Pseudo-Code Question 5

**Question:** 2D Vector with Prefix/Postfix Increment & Compound Assignment

## Original scenario and requirements

Question 5: 2D Vector with Prefix/Postfix Increment & Compound Assignment
Topic: Unary Operators (Prefix vs Postfix `++`), Compound Assignment (`+=`)
Scenario
Design a Cartesian coordinate vector class Vector2D that implements prefix increment, postfix increment, and compound assignment operators according to canonical C++ operator semantics.
Functional Requirements
1. Class Attributes (Private): x (REAL), y (REAL).
2. Constructors: Parameterized constructor with defaults $(0.0, 0.0)$.
3. Overloaded Operators:
Prefix Increment (`++v`):
Increments both $x$ and $y$ by 1.0.
Returns reference to current object (REF THIS).
Postfix Increment (`v++`):
Accepts a dummy integer token to distinguish its signature.
Captures a temporary copy of the object's current state.
Increments internal $x$ and $y$ by 1.0.
Returns the unmodified snapshot copy by value.
Compound Assignment (`+=`):
Adds coordinates of right-hand vector into THIS.
Returns reference to THIS.
Student Tasks
1. Write the structured pseudo-code for Vector2D and a driver program.
2. Trace the values of v1, v2, and v3 after the execution of:
v2 <- ++v1
v3 <- v1++
   (Assume v1 begins at $(5.0, 8.0)$).

## Proposed structured solution

Vector2D prefix ++ mutates and returns reference; postfix takes dummy int and returns old copy; += updates both components. Trace from (1,2): prefix (2,3), postfix old (2,3) current (3,4), +=(2,1) => (5,5).

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS Vector2D; prefix ++ increments both and returns reference; postfix ++(int) snapshots and returns old copy; += updates vector; Main traces values.
```

## Trace / test values

Vec a=(2,3), b=(4,5); add and compare.
