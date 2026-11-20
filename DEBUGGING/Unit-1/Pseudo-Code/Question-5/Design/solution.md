# Unit 1 – Pseudo-Code Question 5

**Question:** State-Machine ATM Controller with Sentinel Loops

## Original scenario and requirements

Question 5: State-Machine ATM Controller with Sentinel Loops
Topic: Control Structures (`switch-case`, `while`, nested `if-else`), Data Types
Scenario
Design the pseudo-code for an Automated Teller Machine (ATM) transaction manager. The system must authenticate the cardholder via a 4-digit PIN (permitting up to 3 attempts), and then present a menu-driven session loop.
Functional Requirements
1. Authentication Phase:
Preset PIN = 4821.
Allow up to 3 attempts. If incorrect 3 times, lock the card and terminate immediately.
2. Session Loop (Sentinel-controlled):
Display menu: 1: Balance Inquiry, 2: Cash Deposit, 3: Cash Withdrawal, 4: Exit.
Balance Inquiry: Display current available balance.
Deposit: Accept positive amount and add to balance.
Withdrawal:
Check if amount $> 0$ and amount $\le$ balance.
Validate that withdrawal amount is an exact multiple of 100 (using modulus arithmetic). If not, reject transaction.
Exit: Terminate session gracefully.
Default: Handle invalid option selections.
Student Tasks
1. Write the formal structured pseudo-code for ATM_SessionController.
2. Provide a dry-run test trace demonstrating:
Entering one wrong PIN followed by the correct PIN.
Attempting to withdraw \$250 (declined due to non-multiple of 100).
Withdrawing \$300 successfully.

## Proposed structured solution

Preset PIN 4821; allow three attempts. Lock after failures. Menu sentinel loop supports balance, positive deposit, withdrawal (positive, within balance, divisible by 100), exit/default. Dry run: bad then correct PIN; $250 rejected; $300 accepted from $1000 balance -> $700.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
BEGIN
  balance=1000; tries=0; authenticated=FALSE
  WHILE tries<3 AND NOT authenticated: READ PIN; tries++; authenticated=(PIN==4821) ENDWHILE
  IF NOT authenticated THEN LOCK card; EXIT ENDIF
  REPEAT DISPLAY menu; READ choice
    CASE balance inquiry: DISPLAY balance
    CASE deposit: accept only amount>0; balance+=amount
    CASE withdrawal: require amount>0 AND amount<=balance AND amount MOD 100==0; then balance-=amount
    CASE exit: stop
    DEFAULT: DISPLAY invalid choice
  UNTIL choice==4
END
```

## Trace / test values

array length=5; readings=(10,20,30,40,50).
