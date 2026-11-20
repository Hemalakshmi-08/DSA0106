# Unit 5 – Pseudo-Code Question 1

**Question:** Universal Payment Gateway with Runtime Polymorphism

## Original scenario and requirements

Question 1: Universal Payment Gateway with Runtime Polymorphism
Topic: Pure Virtual Functions, Runtime Polymorphism, Abstract Base Classes
Scenario
Design an enterprise payment transaction dispatcher using Pure Virtual Functions & Runtime Polymorphism:
Abstract Base Class: PaymentGateway
Pure Virtual Method: Authorize(amount AS REAL) RETURNS BOOLEAN
Pure Virtual Method: Capture() RETURNS BOOLEAN
Virtual Destructor
Concrete Subclasses:
CreditCardGateway: Validates card length (16 digits) and 3-digit CVV.
CryptoGateway: Verifies wallet hash prefix ("0x") and simulates gas fee validation.
In Main, dynamically instantiate the chosen gateway via a base pointer PaymentGateway*, authorize and capture funds, and safely deallocate the instance.
Functional Requirements
1. Delineate the abstract base class and pure virtual method signatures.
2. Implement overriding methods in CreditCardGateway and CryptoGateway.
3. In Main, demonstrate polymorphic late binding where the method call gatewayPtr->Authorize(1500.00) executes the derived class implementation based on runtime pointer assignment.
Student Tasks
1. Write the formal structured pseudo-code for the payment gateway architecture.
2. Trace the execution flow for a \$1,500 cryptocurrency payment, showing each method dispatched through the base pointer.

## Proposed structured solution

PaymentGateway is abstract with virtual Authorize/Capture and virtual destructor. Concrete credit-card/crypto classes validate their data. Main uses PaymentGateway* for dynamic dispatch, then safely deletes. Crypto trace authorization then capture.

## Notes

Use the explicit uppercase algorithm keywords and variable types requested in the source document. The trace/values above are included as a compact check; expand the dry-run table when preparing a handwritten or instructor-facing submission.

## Structured pseudo-code (solution outline)

```text
ABSTRACT PaymentGateway with virtual Authorize and Capture plus virtual destructor; CreditCard and Crypto override; main stores chosen implementation in base pointer, invokes methods, deletes safely.
```

## Trace / test values

Polygon vertices=4; render and delete through Shape pointer.
