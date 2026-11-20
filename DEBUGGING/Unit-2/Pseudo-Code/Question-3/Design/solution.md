# Unit 2 – Pseudo-Code Question 3

**Question:** Student Academic Roster via Array of Objects

## Original scenario and requirements

Question 3: Student Academic Roster via Array of Objects
Topic: Arrays of Objects, Member Functions, Sorting Objects
Scenario
Develop an academic grade management system using an Array of Objects. Each StudentRecord object encapsulates student information, subject scores, and grade computation.
Functional Requirements
1. Class `StudentRecord`:
Private Attributes: rollNo (INTEGER), studentName (STRING), marks (ARRAY[3] OF REAL), percentage (REAL), grade (CHARACTER).
Methods:
Default constructor: Sets fields to default/blank values.
ReadData(r, name, m1, m2, m3): Populates fields and calls internal private method CalculateResult().
CalculateResult(): Computes percentage as average of 3 subjects and assigns grade:
$\ge 85\%$: 'A' | $\ge 70\%$: 'B' | $\ge 50\%$: 'C' | $< 50\%$: 'F'.
GetPercentage() RETURNS REAL: Returns calculated percentage.
Display(): Prints student summary.
2. Driver Program:
Instantiate an array of 3 StudentRecord objects.
Populate with sample student records.
Sort the array of objects in descending order of percentage using Bubble Sort.
Display the sorted rank list.
Student Tasks
1. Write the structured pseudo-code for the StudentRecord class and sorting driver.
2. Provide a dry-run trace table showing the sorting passes and object swaps based on percentage.

## Proposed structured solution

Student objects hold roll/name/marks and provide constructor/display/grade. Initialize a roster with constructor initializer list, iterate records and average. Marks 85,76,91 average 84.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS Student PRIVATE roll,name,marks; CONSTRUCTOR; METHOD grade; METHOD display; Main initializes object array, loops display and average.
```

## Trace / test values

cuboid dimensions 2,3,4; cylinder radius 3, height 7.
