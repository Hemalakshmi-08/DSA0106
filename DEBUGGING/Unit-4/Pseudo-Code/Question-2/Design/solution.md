# Unit 4 – Pseudo-Code Question 2

**Question:** Polymorphic Payroll with Abstract Base Class & Base Pointers

## Original scenario and requirements

Question 2: Polymorphic Payroll with Abstract Base Class & Base Pointers
Topic: Abstract Classes, Pure Virtual Functions, Pointers to Derived Classes
Scenario
Design an enterprise payroll calculation system using an Abstract Base Class Employee and an array of base class pointers (Employee*) to compute salaries polymorphically.
Functional Requirements
1. Abstract Class `Employee`:
Protected Attributes: employeeID (STRING), name (STRING).
Methods:
Parameterized constructor.
ABSTRACT METHOD CalculatePay() RETURNS REAL (Pure virtual function).
DisplayHeader(): Outputs ID and name.
2. Concrete Subclasses:
SalariedEmployee: Stores monthlySalary. Overrides CalculatePay() to return monthlySalary.
HourlyEmployee: Stores hourlyWage and hoursWorked. Overrides CalculatePay() to compute regular pay for $\le 40$ hours, and $1.5\times$ overtime pay for hours above 40.
3. Batch Processor (`Main`):
Dynamically allocate an array of base pointers Employee*.
Instantiate one SalariedEmployee and one HourlyEmployee.
Iterate through the pointer array, invoke CalculatePay() polymorphically via ->, accumulate total disbursements, and deallocate memory.
Student Tasks
1. Write the structured pseudo-code for the abstract class, derived classes, and batch driver.
2. Construct a dry-run trace table showing pay calculations for:
Salaried employee: \$8,500/month.
Hourly employee: \$50/hour for 48 hours worked (40 regular + 8 overtime).

## Proposed structured solution

Sensor constructor initializer list calls Device(mac) before Sensor body; base then derived constructor order. Expected output shows configured MAC then sample rate.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS Device(mac) base; CLASS Sensor extends Device; Sensor initializer list invokes BASE(mac), then initializes rate; trace constructor order.
```

## Trace / test values

MAC=AA:BB:CC:DD:EE:FF; sampling rate=50 Hz.
