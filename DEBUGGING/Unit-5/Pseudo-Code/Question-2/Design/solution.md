# Unit 5 – Pseudo-Code Question 2

**Question:** Resilient Banking Engine with Nested Try-Catch & Rethrowing

## Original scenario and requirements

Question 2: Resilient Banking Engine with Nested Try-Catch & Rethrowing
Topic: Custom Exception Hierarchy, Nested `try-catch`, Rethrowing
Scenario
Design a fault-tolerant banking transaction engine that implements Custom Exception Hierarchies, Nested Try-Catch, and Exception Rethrowing:
Custom Exception Classes:
TransactionException (Base class with attribute reason AS STRING).
AccountFrozenException (Inherits TransactionException).
DailyLimitExceededException (Inherits TransactionException, adds excessAmount AS REAL).
Processing Layers:
Low-level function DebitLedger(): Throws exceptions if account is frozen or daily limit ($50,000) is exceeded.
Intermediate function AuditTransactionWrapper(): Intercepts TransactionException, writes a security audit log, and rethrows (RETHROW) the active exception.
High-level Main(): Catches specific derived exceptions and displays appropriate client notices.
Functional Requirements
1. Define the exception inheritance hierarchy.
2. Structure the nested TRY-CATCH blocks across the two calling tiers.
3. Explicitly demonstrate the RETHROW operation in the middle tier.
Student Tasks
1. Write the structured pseudo-code for the classes and functions.
2. Construct a dry-run trace table tracking control jumps when a withdrawal of \$1,000 is attempted on a frozen account.

## Proposed structured solution

Exception hierarchy TransactionException base; AccountFrozen/DailyLimit derive. DebitLedger throws; wrapper catches base, audit logs, bare rethrow; Main catches derived first. Frozen withdrawal: exception->audit->main notice.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
TransactionException base; AccountFrozen and DailyLimit derive; DebitLedger validates and throws; AuditWrapper catches, logs and bare rethrows; Main catches derived types before base.
```

## Trace / test values

Funds shortfall test: balance 500; attempted withdrawal 750; shortfall 250.
