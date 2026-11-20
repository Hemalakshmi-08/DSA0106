# Unit 1 – Pseudo-Code Question 1

**Question:** Procedural-to-OOP Paradigm Transformation

## Original scenario and requirements

Question 1: Procedural-to-OOP Paradigm Transformation
Topic: OOP Paradigm, Encapsulation, Data Hiding, Abstraction
Scenario
A municipal water authority wants to replace its legacy procedural C scripts with an Object-Oriented design. You are tasked with designing the pseudo-code for a WaterConsumer class that encapsulates consumer details, enforces strict data validation on meter readings, and computes tiered bills.
Functional Requirements
1. Attributes (Private):
consumerID (STRING)
previousReading (REAL, cubic meters)
currentReading (REAL, cubic meters)
unitsConsumed (REAL)
totalBill (REAL)
2. Methods (Public):
Initialize(id, prev, curr): Validates that readings are non-negative and currentReading >= previousReading. If invalid, flags an error.
CalculateConsumption(): Determines net units consumed.
ComputeBill(): Computes payable amount using the following tiered tariff:
First 100 units: \$1.50 per unit.
Next 200 units (101 to 300): \$2.50 per unit.
Units above 300: \$4.00 per unit, plus a flat 10% environmental surcharge on the entire bill.
DisplayBill(): Formats and prints the complete invoice.
Student Tasks
1. Write the formal structured pseudo-code defining the WaterConsumer class and an executable driver routine Main.
2. Construct a dry-run trace table using sample input: previousReading = 1450.0, currentReading = 1820.0. Show the step-by-step breakdown of units across each tier, surcharge, and final total.

## Proposed structured solution

WaterConsumer: validate readings (nonnegative/current>=previous); units=current-previous; calculate tiered tariff (first100*1.5, next200*2.5, remainder*4); if usage>300 apply 10% surcharge; print invoice. Trace readings 1450->1820 yields 370 units, tier amounts $150+$500+$280=$930; surcharge $93; total $1023.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
BEGIN
  CREATE WaterConsumer(id, previous, current)
  IF previous < 0 OR current < previous THEN FLAG invalid; RETURN ENDIF
  units = current - previous
  tier1 = MIN(units,100)*1.50
  tier2 = MIN(MAX(units-100,0),200)*2.50
  tier3 = MAX(units-300,0)*4.00
  subtotal = tier1+tier2+tier3
  IF units > 300 THEN total=subtotal*1.10 ELSE total=subtotal ENDIF
  DISPLAY invoice
END
```

## Trace / test values

num=15; countdown starts 3 and stops at 0.
