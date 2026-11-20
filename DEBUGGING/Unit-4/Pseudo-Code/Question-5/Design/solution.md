# Unit 4 – Pseudo-Code Question 5

**Question:** Dynamic Object Pointer Array & Zero-Copy Sorting Engine

## Original scenario and requirements

Question 5: Dynamic Object Pointer Array & Zero-Copy Sorting Engine
Topic: Pointers to Objects, Arrow Operator (`->`), Pointer Manipulation
Scenario
Design an inventory sorting algorithm that operates on an Array of Pointers to Objects (Product* catalog[N]). Sorting must be achieved by swapping pointers rather than copying large product objects in memory.
Functional Requirements
1. Class `Product`:
Fields: sku (STRING), price (REAL), stockCount (INTEGER).
Parameterized constructor.
Method PrintProduct(): Displays SKU, price, and stock count.
2. Sorting Logic:
Accept an array of $N$ dynamically allocated Product* pointers.
Implement a pointer-swap Bubble Sort in ascending order of price.
Crucial rule: Compare objects by dereferencing pointers via catalog[j]->price, but swap only the pointer variables `catalog[j]` and `catalog[j+1]`, keeping the actual objects stationary in memory.
Deallocate all dynamic objects upon completion.
Student Tasks
1. Write the formal structured pseudo-code for Product and the pointer sorting driver.
2. Construct a dry-run trace table tracking pointer swaps for three products: Laptop (\$1200), Mouse (\$25), and Monitor (\$350).

## Proposed structured solution

Private base methods are hidden from public interface; selectively expose closePort with using declaration or choose public inheritance/composition. SecureChannel opens internally and public close works.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS RawSocket open/close; SecureChannel privately inherits; expose selected method with PUBLIC using RawSocket::closePort; wrapper open method calls inherited open; Main uses exposed close.
```

## Trace / test values

Secure channel opens, connects, then closes.
