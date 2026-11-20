# Unit 2 – Pseudo-Code Question 4

**Question:** Flexible Logger with Overloaded Functions & Inline Helpers

## Original scenario and requirements

Question 4: Flexible Logger with Overloaded Functions & Inline Helpers
Topic: Function Overloading, Default Arguments, Inline Functions
Scenario
Create an industrial embedded logging engine featuring Function Overloading, Default Arguments, and Inline Helper Functions for high-throughput diagnostic output.
Functional Requirements
1. Inline Helper Function:
INLINE FUNCTION FormatPrefix(prefixTag AS STRING) RETURNS STRING: Returns formatted tag "[TAG] ".
2. Overloaded Logging Functions:
Overload 1: LogEvent(message AS STRING): Formats and logs general informational message with default prefix "INFO".
Overload 2: LogEvent(message AS STRING, severityLevel AS INTEGER = 1, timestamp AS STRING = "00:00:00"):
Uses default arguments for severity and timestamp.
Translates severity integer (1: "LOW", 2: "MEDIUM", 3: "CRITICAL").
Formats output: "[SEVERITY] @ TIMESTAMP : MESSAGE".
Overload 3: LogEvent(errorCode AS INTEGER, systemModule AS STRING):
Outputs hardware fault diagnostic: "[HARDWARE_FAULT] Module: SYSTEM_MODULE -> Error Code: 0xHEX".
Student Tasks
1. Write the structured pseudo-code showing all function signatures and inline definitions.
2. Demonstrate how client code calls LogEvent with 1, 2, and 3 arguments, and trace how default arguments are resolved.

## Proposed structured solution

Logger offers unambiguous overloads (message, message+level, numeric code) and inline helper. Calls specify argument types; avoid default-argument overlap.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS Logger OVERLOAD log(message),log(message,level),log(code); INLINE helper formats prefix; Main makes unambiguous calls.
```

## Trace / test values

roster roll numbers 10,20,30.
