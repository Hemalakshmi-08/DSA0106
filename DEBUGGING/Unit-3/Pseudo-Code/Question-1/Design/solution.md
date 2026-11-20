# Unit 3 – Pseudo-Code Question 1

**Question:** Dynamic String Engine with Deep Copy & Overloaded `+`

## Original scenario and requirements

Question 1: Dynamic String Engine with Deep Copy & Overloaded `+`
Topic: Dynamic Constructors, Deep Copy Constructors, Destructors, Binary `+`
Scenario
Design the pseudo-code for an industrial-grade dynamic string class DynStr. The class manages dynamic character buffers on the heap, guarantees complete memory deallocation upon destruction, prevents shallow-copy aliasing, and overloads the + operator for string concatenation.
Functional Requirements
1. Class Attributes (Private):
dataPtr (POINTER TO CHARACTER)
charCount (INTEGER)
2. Lifecycle Methods:
Constructor(sourceString AS STRING): Measures length, allocates dynamic buffer of size charCount + 1, and copies characters.
Copy Constructor(REF other AS DynStr): Performs a Deep Copy by allocating a fresh character buffer and copying characters from other.dataPtr.
Destructor(): Releases heap memory allocated at dataPtr and resets pointer to NULL.
3. Overloaded Operator:
OPERATOR +(REF rhs AS DynStr) RETURNS DynStr:
Computes sum of lengths.
Allocates temporary buffer, copies left operand text, appends right operand text.
Constructs and returns a new DynStr object holding the concatenated string.
4. Driver:
Instantiate two strings, concatenate them using strC <- strA + strB, and display result.
Student Tasks
1. Write the formal structured pseudo-code for DynStr and the driver execution.
2. Provide a dry-run trace showing heap allocations, buffer sizes, and character copies for strA = "Hello " and strB = "World!".

## Proposed structured solution

DynamicString allocates character buffer, deep copy constructor duplicates characters, destructor releases; + concatenates safely. Sample C++ + Lab -> C++ Lab.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS DynamicString allocates buffer; copy constructor takes const reference and deep copies; + builds concatenated string; destructor frees; Main copies/concatenates.
```

## Trace / test values

string literal "OOP C++"; copy constructed.
