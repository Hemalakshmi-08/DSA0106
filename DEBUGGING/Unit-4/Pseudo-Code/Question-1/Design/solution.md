# Unit 4 – Pseudo-Code Question 1

**Question:** University ERP Hybrid Hierarchy with Virtual Base Classes

## Original scenario and requirements

Question 1: University ERP Hybrid Hierarchy with Virtual Base Classes
Topic: Hybrid Inheritance, Virtual Base Classes, Diamond Resolution
Scenario
Design the pseudo-code for a university ERP record management system using Hybrid Inheritance with Virtual Base Classes:
Root Base Class: Person (contains personID, fullName, and email).
Derived Class 1: Student virtually inheriting Person (adds gpa, creditsEarned).
Derived Class 2: Faculty virtually inheriting Person (adds academicDepartment, rankTitle).
Most Derived Class: TeachingAssistant inheriting from both Student and Faculty (adds stipendAmount, assignedCourse).
Functional Requirements
1. Virtual Base Class Mechanics:
Prevent duplicate Person subobjects in TeachingAssistant.
The TeachingAssistant constructor must directly delegate initialization to the virtual Person root constructor.
2. Display Method:
Implement DisplayTARecord() that accesses personID, fullName, gpa, department, and stipendAmount unambiguously.
Student Tasks
1. Write the formal structured pseudo-code showing class definitions, virtual inheritance declarations, and constructor delegation.
2. Trace the instantiation of a TeachingAssistant record with sample data and show the output of DisplayTARecord().

## Proposed structured solution

Person shared as virtual base of Student and Employee. TeachingAssistant initializes virtual Person once; Student/Employee constructors do not initialize the shared base. This avoids duplicate IDs and ambiguous access.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
CLASS Person; Student and Employee VIRTUAL INHERIT Person; TeachingAssistant inherits both and initializes virtual Person in most-derived constructor; print shared identifier.
```

## Trace / test values

Student id=101; Employee id=202; shared Person id=303.
