# Unit 4 – Pseudo-Code Question 3

**Question:** Composite Canvas Engine with Member Classes & `this` Chaining

## Original scenario and requirements

Question 3: Composite Canvas Engine with Member Classes & `this` Chaining
Topic: Member Classes (Composition), `this` Pointer Chaining
Scenario
Design a graphical geometry rendering engine using Member Classes (Composition / "has-a") and Method Chaining via `this`:
Sub-object Class: Point2D (encapsulates coordinates $x, y$).
Container Class: Circle contains an instance of Point2D as its center (centerPoint) and a radius scalar.
The Circle methods SetCenter(x, y) and SetRadius(r) must return a reference to *this allowing fluent method chaining (circle.SetCenter(10, 20).SetRadius(5).Draw()).
Functional Requirements
1. Class `Point2D`: Fields x, y (REAL), parameterized constructor with defaults $(0.0, 0.0)$.
2. Class `Circle`:
Attributes: centerPoint (Point2D), radius (REAL).
Constructor initializes centerPoint to origin and radius to 1.0.
Method SetCenter(newX, newY) RETURNS REF Circle: Updates coordinates and returns REF THIS.
Method SetRadius(r) RETURNS REF Circle: Validates $r > 0$, updates radius, and returns REF THIS.
Method Draw(): Prints circle specifications.
Student Tasks
1. Write the structured pseudo-code for Point2D and Circle.
2. Trace the execution of myCircle.SetCenter(12.5, 30.0).SetRadius(7.5).Draw().

## Proposed structured solution

Vehicle* can call only Vehicle members; use checked downcast to SportsCar for turbo. Use reference/pointer instead of value copy to avoid slicing. Virtual show dispatches derived implementation.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS Vehicle virtual display; SportsCar overrides and adds turbo; use dynamic_cast when downcast needed; pass base reference to preserve dynamic type; demonstrate virtual call.
```

## Trace / test values

SportsCar dynamic object; base reference calls virtual show; turbo enabled.
