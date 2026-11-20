# Unit 5 – Pseudo-Code Question 3

**Question:** Polymorphic Game Engine with Virtual Destructors

## Original scenario and requirements

Question 3: Polymorphic Game Engine with Virtual Destructors
Topic: Virtual Functions, Virtual Destructors, Polymorphic Object Lifecycles
Scenario
Design a game entity lifecycle manager that processes game objects polymorphically and ensures leak-free destruction:
Abstract Base Class GameObject:
Pure virtual methods: Update(deltaTime AS REAL) and Render().
Virtual destructor ~GameObject().
Derived Class ParticleSystem:
Dynamically allocates an array of particle coordinates in heap memory.
Overrides Update, Render, and the destructor (releasing dynamic particle array).
Driver Program:
Allocate game entities dynamically and store in an array of base pointers GameObject*.
Execute a simulation step (Update and Render).
Deallocate all entities using DEALLOCATE sceneEntities[i], relying on virtual destructors to prevent heap leaks.
Student Tasks
1. Write the formal structured pseudo-code showing base and derived classes with virtual destructors.
2. Trace the cleanup phase, explaining the exact destructor execution order when DEALLOCATE is called on a base pointer.

## Proposed structured solution

GameObject abstract Update/Render and virtual destructor; ParticleSystem owns dynamic particle array and frees it. Base-pointer scene list updates/renders then deletes; derived destructor runs before base destructor.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
ABSTRACT GameObject with Update/Render and virtual destructor; ParticleSystem allocates particle array, overrides, frees in destructor; scene pointer list updates/renders then deletes all.
```

## Trace / test values

Timeout exception duration=5000 ms.
