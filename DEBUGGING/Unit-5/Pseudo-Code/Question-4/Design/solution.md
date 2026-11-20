# Unit 5 – Pseudo-Code Question 4

**Question:** File Stream Pipeline with Stack Unwinding & Catch-All

## Original scenario and requirements

Question 4: File Stream Pipeline with Stack Unwinding & Catch-All
Topic: Stack Unwinding, Resource Acquisition (RAII), Catch-All Handler
Scenario
Develop the pseudo-code for a mission-critical File Ingestion Pipeline that demonstrates Stack Unwinding:
Class ResourceGuard: Manages a hardware/file descriptor handle. Constructor acquires handle; destructor automatically releases handle.
Custom Exception: CRCValidationException (contains expected and calculated checksums).
Function IngestDataStream(fileName):
Creates a local automatic instance of ResourceGuard.
Reads data blocks and computes CRC checksum.
If CRC mismatches, throws CRCValidationException.
Driver Main():
Encloses call in TRY-CATCH.
Demonstrates that during exception throw, ResourceGuard's destructor is automatically invoked during Stack Unwinding before the catch block executes.
Employs both specific catch and universal catch-all CATCH (...).
Student Tasks
1. Write the structured pseudo-code demonstrating RAII and stack unwinding.
2. Draw or trace the sequence of events showing how the local stack object is destroyed when a CRC error triggers an exception.

## Proposed structured solution

ResourceGuard RAII acquires resource in ctor and releases in dtor. CRC mismatch throws; stack unwinding destroys guard before specific catch; catch-all handles other errors.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
ResourceGuard RAII acquires/releases handle; Ingest computes CRC and throws on mismatch; Main catches specific CRC exception and catch-all; trace includes destructor during stack unwind.
```

## Trace / test values

Video frame ID=1042; expected packet size=1200 bytes.
