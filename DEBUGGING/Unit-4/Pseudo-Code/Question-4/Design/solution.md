# Unit 4 – Pseudo-Code Question 4

**Question:** Multi-Level Autonomous Fleet Telemetry with Base Pointers

## Original scenario and requirements

Question 4: Multi-Level Autonomous Fleet Telemetry with Base Pointers
Topic: Multilevel Inheritance, Constructors in Derived Classes, Base Pointers
Scenario
Design a multi-level inheritance hierarchy: Vehicle $\rightarrow$ AutonomousVehicle $\rightarrow$ DeliveryDrone.
Vehicle: Carries vehicleVIN and baseWeightKg.
AutonomousVehicle: Inherits Vehicle, adds lidarSensorID and firmwareVersion.
DeliveryDrone: Inherits AutonomousVehicle, adds payloadCapacityKg and batteryChargePercent.
Functional Requirements
1. Constructor Delegation:
Parameterized constructors must pass arguments through all three tiers using constructor initialization lists.
2. Telemetry Methods:
DisplaySpecs() in Vehicle.
DisplayFlightStatus() in DeliveryDrone (invokes DisplaySpecs() and prints drone-specific telemetry).
3. Pointer Management:
Instantiate a DeliveryDrone dynamically on the heap.
Assign its address to a Vehicle* base pointer to inspect general specs, then cast to derived pointer for full flight telemetry.
Student Tasks
1. Write the structured pseudo-code showing class definitions, constructor chains, and driver logic.
2. Trace constructor invocation order from root to leaf during instantiation.

## Proposed structured solution

Fluent WindowBox setters set properties and return WindowBox& (*this); then setHeight can chain after setWidth. Example output 800 x 600.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS WindowBox setters set width/height and RETURN REF THIS; display; Main chains width then height.
```

## Trace / test values

Window width=800; height=600.
