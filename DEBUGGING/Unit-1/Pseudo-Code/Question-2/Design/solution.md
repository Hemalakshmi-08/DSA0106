# Unit 1 – Pseudo-Code Question 2

**Question:** Multi-Tier Tax & Precision Cast Engine

## Original scenario and requirements

Question 2: Multi-Tier Tax & Precision Cast Engine
Topic: Control Structures (Selection), Data Types, Type Casting
Scenario
An enterprise payroll accounting module needs an algorithm to compute annual personal income tax from gross income and investment deductions, ensuring compliance with statutory deduction caps and precision rounding.
Functional Requirements
1. Inputs:
grossAnnualSalary (REAL)
deduction80C (REAL, statutory cap: \$150,000)
deductionHealthInsurance (REAL, statutory cap: \$25,000)
2. Taxable Income Computation:
Deduct eligible investments from gross income (clamped to zero if deductions exceed gross).
3. Progressive Tax Brackets:
Up to \$250,000: 0%
\$250,001 to \$500,000: 5% on amount over \$250,000
\$500,001 to \$1,000,000: 20% on amount over \$500,000
Above \$1,000,000: 30% on amount over \$1,000,000
4. Surcharge:
Add a 4% Health & Education Cess on the total raw tax.
5. Type Casting Requirement:
Explicitly convert the final tax amount from REAL to INTEGER (simulating static_cast<long>(tax + 0.5) for nearest rupee rounding).
Student Tasks
1. Write the structured pseudo-code for TaxCalculationEngine.
2. Provide a dry-run trace table for an employee with grossAnnualSalary = $1,200,000, deduction80C = $180,000, and deductionHealthInsurance = $30,000.

## Proposed structured solution

Cap deductions at 150000 and 25000; taxable=max(0,salary-capped deductions). Progressive tax: 0 through 250k, 5% next 250k, 20% next 500k, 30% excess. Add 4% cess and round nearest rupee with int(tax+0.5). Sample salary 1,200,000 yields taxable 1,025,000; tax 120,000; cess 4,800; final 124,800.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
BEGIN
  eligible80C=MIN(deduction80C,150000); eligibleHealth=MIN(health,25000)
  taxable=MAX(0,gross-eligible80C-eligibleHealth)
  IF taxable<=250000 tax=0
  ELSE IF taxable<=500000 tax=(taxable-250000)*.05
  ELSE IF taxable<=1000000 tax=12500+(taxable-500000)*.20
  ELSE tax=112500+(taxable-1000000)*.30 ENDIF
  roundedTax=INTEGER(tax*1.04+0.5)
END
```

## Trace / test values

price=1000; global tax 18%; local tax 5%; inner corporate tax 12%.
