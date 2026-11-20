# Unit 5 – Pseudo-Code Question 5

**Question:** Scientific Telemetry Calibration with `noexcept` Contracts

## Original scenario and requirements

Question 5: Scientific Telemetry Calibration with `noexcept` Contracts
Topic: Specifying Exceptions, `noexcept` Contracts, Boundary Assertions
Scenario
Develop an aerospace telemetry validator demonstrating Exception Specifications / `noexcept` Contracts:
Function CalibrateThermalSensors(rawVoltage AS REAL) RETURNS REAL:
Potentially throwing function (noexcept(FALSE)).
Computes temperature from raw voltage.
Validates bounds ($-273.15^\circ\text{C}$ to $+1500.0^\circ\text{C}$). Throws OutOfBoundsException if violated.
Function CommitTelemetry(finalTemp AS REAL) NOEXCEPT:
Strictly non-throwing function (NOEXCEPT contract).
Commits reading to avionics hardware bus.
Internally catches and suppresses all exceptions to guarantee the noexcept contract is never broken (preventing system abort).
Driver Main() orchestrates calibration and commitment within a structured safety harness.
Student Tasks
1. Write the structured pseudo-code showing explicit throwing rules and noexcept enforcement.
2. Trace the pipeline with a faulty voltage reading producing $-300.0^\circ\text{C}$, showing the exception caught in Main.

## Proposed structured solution

Calibrate may throw out-of-range; noexcept commit catches all internally; Main catches calibration fault. Fault voltage resulting -300C is outside bounds, exception caught and commit is skipped.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
Calibrate may throw on temperatures outside [-273.15,1500]; CommitTelemetry is noexcept and catches all inside; Main wraps calibration and catches range exception; commit only valid readings.
```

## Trace / test values

Dragon polymorphic encounter through Entity reference.
