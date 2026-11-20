# Task 01 — Class Design Review

**Task-specific focus:** Class Design Review.

## Approach
Read the task statement, identify required concepts and constraints, and use the demonstration program as a small runnable example. The code in this folder is a working C++17 demonstration aligned to this task topic.

## Test / validation
- Compiler: g++ (Debian) 14.2.0
- Command: `g++ -std=c++17 -Wall -Wextra Task01.cpp -o task01`
- Result: **COMPILED AND RAN**. See `Output.png` for the captured stdout and `Screenshots/compile_run.png` for command evidence.

## Complexity note
For the simple demonstration in this task, its stated operations are constant-time unless the code explicitly loops over a collection. For collection processing, total cost is linear in the number of items. This note is illustrative; the final report should include the assignment question's specific alternative-concept analysis and measured timings where requested.

## Limitations / completion checklist
- Expand this analysis with the exact sub-question prompts and evidence demanded in the source assignment.
- Where the assignment requires predicting output before running, write the prediction separately before inspecting the execution result.
- Where the assignment requires timings, sanitizers, UML, pseudocode, test matrices, or measured comparison, add the experiment and preserve its evidence.
