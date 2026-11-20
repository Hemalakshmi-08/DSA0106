# Unit 2 – Pseudo-Code Question 1

**Question:** Corporate Vault Management with Static Data & Functions

## Original scenario and requirements

Question 1: Corporate Vault Management with Static Data & Functions
Topic: Static Data Members, Static Member Functions, Encapsulation
Scenario
Design the pseudo-code for a banking branch reserve management system. The system models individual bank branches and maintains consolidated enterprise reserves at the corporate level.
Functional Requirements
1. Class `BranchOffice`:
Private Instance Attributes: branchID (STRING), branchName (STRING), currentBalance (REAL).
Private Static Attributes: totalVaultReserves (REAL, initialized to 0.0), totalBranchesActive (INTEGER, initialized to 0).
2. Instance Methods:
Constructor(id, name, openingDeposit): Sets instance fields, increments totalVaultReserves by openingDeposit, and increments totalBranchesActive by 1.
Deposit(amount): Adds funds to both currentBalance and totalVaultReserves.
Withdraw(amount) RETURNS BOOLEAN: Checks if sufficient branch funds exist. If valid, deducts from both currentBalance and totalVaultReserves, returning TRUE; otherwise returns FALSE.
3. Static Methods:
GetVaultSummary(): Outputs total branches active and aggregate reserves across all branches.
GetGlobalLiquidityRatio(targetReserve AS REAL) RETURNS REAL: Returns $\frac{\text{totalVaultReserves}}{\text{targetReserve}}$.
Student Tasks
1. Write the formal structured pseudo-code defining the BranchOffice class and an executable driver routine Main.
2. Construct a trace table showing initial state, transactions on two distinct branches (Branch1 depositing \$150k, Branch2 withdrawing \$50k), and the resulting static vault reserve values.

## Proposed structured solution

VaultAccount encapsulates account number/balance; static count and reserve totals initialized at namespace scope; methods deposit/withdraw validate; class-level audit function reports aggregate. Sample two accounts $12,000 and $8,000 total $20,000.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS VaultAccount PRIVATE accountNumber,balance; CONSTRUCTOR; DEPOSIT/withdraw validate positive/funds; CLASS stores static accountCount and reserveSum defined outside class; Main creates accounts and calls static audit.
```

## Trace / test values

array={4,8,12}; max inputs 7 and 9; scale=3; array index 1 set to 20.
