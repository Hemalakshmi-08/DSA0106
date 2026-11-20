# Unit 3 – Pseudo-Code Question 3

**Question:** Financial Currency Class with Stream I/O & Unary Negation

## Original scenario and requirements

Question 3: Financial Currency Class with Stream I/O & Unary Negation
Topic: Unary Operator Overloading, Friend Stream Operators (`<<`, `>>`)
Scenario
Develop an enterprise financial currency class Currency representing monetary values as discrete dollars and cents, with auto-normalization, unary negation, and formatted stream I/O.
Functional Requirements
1. Class Attributes (Private): dollars (INTEGER), cents (INTEGER).
2. Constructor:
Accepts (d AS INTEGER = 0, c AS INTEGER = 0).
Automatically normalizes cents $\ge 100$ into dollars (e.g., 2 dollars and 150 cents $\rightarrow$ 3 dollars and 50 cents). Handles negative cents appropriately.
3. Unary Operator `-`:
Inverts financial balance: positive balance becomes debt, negative balance becomes credit.
OPERATOR -() RETURNS Currency.
4. Friend Stream Operators:
FRIEND OPERATOR <<(REF outStream, REF cur AS Currency): Formats output as "$D.CC" (ensuring two-digit cents formatting).
FRIEND OPERATOR >>(REF inStream, REF cur AS Currency): Reads dollars and cents, then normalizes.
Student Tasks
1. Write the structured pseudo-code for Currency and driver program.
2. Trace an input of d = 5, c = 275, its normalization, and the result of applying unary negation -cur.

## Proposed structured solution

Currency stores amount; unary minus returns negated object; stream insertion friend/nonmember returns ostream&. Example $125.50 and -$125.50.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS Currency amount; unary minus returns negated copy; friend ostream insertion streams formatted currency; Main prints original and negative amount.
```

## Trace / test values

Value=42.
