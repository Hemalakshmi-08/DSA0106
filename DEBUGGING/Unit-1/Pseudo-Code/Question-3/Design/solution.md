# Unit 1 – Pseudo-Code Question 3

**Question:** Bitwise Mask Validation & Sensor Health Telemetry

## Original scenario and requirements

Question 3: Bitwise Mask Validation & Sensor Health Telemetry
Topic: Operators in C++ (Bitwise `&`, `|`, `^`, `~`), Tokens, Constants
Scenario
In an autonomous unmanned aerial vehicle (UAV), an 8-bit unsigned hardware register (statusRegister) reports subsystem health flags:
Bit 0 (0x01): Gyroscope Locked
Bit 1 (0x02): Accelerometer Calibrated
Bit 2 (0x04): Barometric Altimeter Online
Bit 3 (0x08): GPS Satellite Fix Acquired
Bit 4 (0x10): Low Battery Warning
Bit 5 (0x20): Over-Temperature Warning
Bit 6 (0x40): Radio Telemetry Link Active
Bit 7 (0x80): Fatal Actuator Hardware Failure
Functional Requirements
1. Flight Readiness Conditions:
Mandatory: Bits 0, 1, 2, and 3 must all be 1 (all essential sensors locked).
Inhibitors: Bits 4, 5, and 7 must all be 0 (no warnings or fatal failures).
Bit 6 (Radio Link) is non-blocking (can be 0 or 1).
2. Logic Rules:
Must use bitwise masks (AND, OR, XOR, NOT) without looping over bit positions.
If any inhibitor bit is set, emit specific error diagnostics identifying the exact fault bit.
If mandatory sensors are missing, compute the XOR difference mask to report missing sensor IDs.
Student Tasks
1. Define the required hexadecimal bitmask constants.
2. Write structured pseudo-code for CheckFlightReadiness(statusRegister).
3. Provide a trace for two test bytes: 0x4F (nominal flight) and 0x3B (low battery with missing sensor).

## Proposed structured solution

Define masks mandatory=0x0F, inhibitors=0xB0 (0x10,0x20,0x80); missing=mandatory XOR (status&mandatory), faults=status&inhibitors. report each fault bit and missing sensors; radio 0x40 is informational. 0x4F ready; 0x3B missing bit2 plus low-battery/overtemp alerts.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
FUNCTION CheckFlightReadiness(status)
  mandatory=0x0F; inhibitorMask=0xB0
  missing=mandatory XOR (status AND mandatory)
  faults=status AND inhibitorMask
  REPORT each missing sensor flag and each set inhibitor bit (0x10,0x20,0x80)
  ready=(missing==0 AND faults==0); radio bit 0x40 does not block
END FUNCTION
```

## Trace / test values

tokenType=2; multiplier=5; tokenValue starts 0.
