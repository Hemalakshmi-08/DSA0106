# Unit 1 – Pseudo-Code Question 4

**Question:** Optimized Prime Factorization & Divisor Engine

## Original scenario and requirements

Question 4: Optimized Prime Factorization & Divisor Engine
Topic: Control Structures (Iteration: `for`/`while`, Jump: `break`, `continue`, `goto`)
Scenario
Develop an algorithm that accepts a positive integer $N$, verifies its validity using input validation jumps, determines all proper divisors of $N$ in $O(\sqrt{N})$ time complexity, and classifies $N$ as Perfect, Abundant, or Deficient.
Functional Requirements
1. Input Validation:
Prompt user for $N$. If $N \le 0$, display an error message and repeat using a jump/loop construct.
Handle edge case $N = 1$ explicitly.
2. Divisor Generation:
Loop candidate divisor $d$ from 2 up to $\lfloor\sqrt{N}\rfloor$.
Use jump statement CONTINUE when $d$ does not divide $N$ evenly.
When $d$ divides $N$, accumulate both $d$ and its paired divisor $(N / d)$ (avoiding double-counting when $d = \sqrt{N}$).
3. Classification:
Sum of proper divisors (including 1):
If $\text{Sum} == N$: Perfect Number (e.g., 6, 28).
If $\text{Sum} > N$: Abundant Number (e.g., 12).
If $\text{Sum} < N$: Deficient Number (e.g., 15).
Student Tasks
1. Write the structured pseudo-code for DivisorAndPrimeEngine.
2. Trace the algorithm with $N = 28$ and $N = 12$, showing values of $d$, $(N / d)$, and sumOfDivisors at each step.

## Proposed structured solution

Validate N>0; N=1 special. sum proper divisors starts 1; test d=2..sqrt(N), CONTINUE when not divisible; add d and paired N/d, avoid duplicate square root. Classify sum vs N. 28 perfect; 12 abundant.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
BEGIN
  REPEAT READ N UNTIL N>0
  IF N==1 THEN sum=0; CLASSIFY Deficient; EXIT ENDIF
  sum=1; FOR d=2 TO FLOOR(SQRT(N))
    IF N MOD d != 0 THEN CONTINUE ENDIF
    sum=sum+d; paired=N/d
    IF paired != d THEN sum=sum+paired ENDIF
  ENDFOR
  CLASSIFY sum compared with N: Perfect/Abundant/Deficient
END
```

## Trace / test values

a=25; literal target=100; pi=3.14159; const reference temporary=50.
