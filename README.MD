# Low-Level Design

A structured repository for learning and practicing **Low-Level Design (LLD)** through Object-Oriented Programming, UML, SOLID principles, Design Patterns, and real-world system design problems.

The repository focuses on understanding **how to model a system, define object responsibilities, design relationships, manage dependencies, and build software that is easier to maintain and extend.**

---

## Table of Contents

* [About](#about)
* [Learning Path](#learning-path)
* [Course Content](#course-content)
* [Design Patterns](#design-patterns)
* [Real-World System Design](#real-world-system-design)
* [Design Approach](#design-approach)
* [Repository Structure](#repository-structure)
* [Progress](#progress)
* [Technology](#technology)
* [Learning Resource](#learning-resource)
* [Disclaimer](#disclaimer)

---

## About

Low-Level Design is the process of translating functional requirements into a detailed software design consisting of **classes, interfaces, objects, relationships, and interactions**.

This repository is organized as a practical learning path:

```text
Object-Oriented Programming
            ↓
     UML & Object Modeling
            ↓
      SOLID Principles
            ↓
      Design Patterns
            ↓
   Real-World LLD Problems
            ↓
       Implementation
```

The objective is not to memorize patterns or UML diagrams.

The objective is to develop the ability to reason about a design:

* What objects should exist?
* What responsibility should each object have?
* How should objects communicate?
* Where should abstractions be introduced?
* What is likely to change?
* How can coupling be reduced?
* How can the system be extended without unnecessary modification?
* What trade-offs does the design introduce?

---

# Learning Path

The course progresses from fundamental object-oriented concepts to increasingly complex design problems.

### Foundations

* System Design fundamentals
* Object-Oriented Programming
* Inheritance
* Polymorphism
* UML Class Diagrams
* UML Sequence Diagrams

### Design Principles

* SOLID Principles
* Responsibility-driven design
* Coupling and cohesion
* Abstraction
* Encapsulation

### Design Patterns

* Creational Patterns
* Structural Patterns
* Behavioral Patterns

### Real-World Design

* Document Editor
* Food Delivery System
* Notification Engine
* Music Player
* File System
* Payment Gateway
* Coupon Engine
* Quick Commerce
* Dating Application
* Expense Sharing
* Vending Machine
* Board Games
* Chat Room
* Chess

---

# Course Content

The following lecture titles are maintained according to the original course playlist.

## 01 — Foundations & Object-Oriented Design

| #  | Lecture                                                               | Status |
| -- | --------------------------------------------------------------------- | :----: |
| 01 | Introduction To System Design                                         |    ⬜   |
| 02 | OOPs Real-World Examples | OOPs Pillars | Abstraction | Encapsulation |    ⬜   |
| 03 | Inheritance & Polymorphism in OOPs                                    |    ⬜   |
| 04 | What is UML Diagrams | Class & Sequence Diagrams with Real Examples   |    ⬜   |
| 05 | SOLID Design Principles | Complete Guide with Code Examples           |    ⬜   |
| 06 | SOLID Design Principles | part 2                                      |    ⬜   |

---

## 02 — Real-World LLD & Design Patterns

| #  | Lecture                                                                                    | Status |
| -- | ------------------------------------------------------------------------------------------ | :----: |
| 07 | Build Google Docs | A Real-World LLD Project | Document Editor LLD |                       |    ⬜   |
| 08 | Strategy Design Pattern Explained with Real-World Example | Design Patterns in LLD         |    ⬜   |
| 09 | Factory Design Pattern | Simple, Factory Method & Abstract Factory with Real-Life Examples |    ⬜   |
| 10 | Singleton Design Pattern | Thread-Safe, Lazy & Eager Initialization + Real Use Cases       |    ⬜   |
| 11 | Build Zomato Food Delivery App | System Design                                             |    ⬜   |
| 12 | Observer Design Pattern Explained | Real-Life Use Case + Code Example                      |    ⬜   |
| 13 | Decorator Pattern Explained | Real-world use case + Code | Design patterns in LLD          |    ⬜   |
| 14 | Build Your Own Notification Engine | System Design                                         |    ⬜   |
| 15 | Command Design Pattern | Real-world use case + Code | Design patterns in LLD               |    ⬜   |
| 16 | Adapter Design Pattern | Real-world use case + Code | Design patterns in LLD               |    ⬜   |
| 17 | Facade Design Pattern | Real-world use case + Code | Design patterns in LLD                |    ⬜   |
| 18 | Build Spotify, Music Player App | System Design                                            |    ⬜   |
| 19 | Composite Design Pattern | Build File System (UML & Code) | System Design                  |    ⬜   |
| 20 | Template Method Pattern | Step-by-Step Example (UML + Code)                                |    ⬜   |
| 21 | Proxy Design Pattern | Virtual Proxy | Protection Proxy | Remote Proxy                     |    ⬜   |
| 22 | Chain of Responsibility Pattern | Build Cash Dispenser(UML & Code) | System Design         |    ⬜   |
| 23 | Build Payment Gateway System | System Design                                               |    ⬜   |
| 24 | Build Discount Coupon Engine | System Design                                               |    ⬜   |
| 25 | Bridge Pattern | Real-world use case + Code | System Design                                |    ⬜   |
| 26 | Build Zepto | 10-Mins Quick Commerce | Inventory Management | System Design                |    ⬜   |
| 27 | Build Tinder | Dating Site | System Design                                                 |    ⬜   |
| 28 | Builder Design Pattern | Classic Builder | Step Builder | UML + Code | System Design       |    ⬜   |
| 29 | Iterator Design Pattern | UML + Code | System Design                                       |    ⬜   |
| 30 | Flyweight Design Pattern | UML + Code | System Design                                      |    ⬜   |
| 31 | Build Splitwise Clone | Expense Splitting App | System Design                              |    ⬜   |
| 32 | State Design Pattern | Build Vending Machine (UML & Code) | System Design                  |    ⬜   |
| 33 | Build Tic Tac Toe Game | UML + Code | System Design                                        |    ⬜   |
| 34 | Build Snake and Ladder Game | UML + Code | System Design                                   |    ⬜   |
| 35 | Mediator Design Pattern | Build Chat Room | UML + Code | System Design                     |    ⬜   |
| 36 | Prototype Design Pattern | UML + Code | System Design                                      |    ⬜   |
| 37 | Build Chess Game | UML + Code | System Design                                              |    ⬜   |
| 38 | Visitor Design Pattern | UML + Code | System Design                                        |    ⬜   |
| 39 | Memento Design Pattern | UML + Code | System Design                                        |    ⬜   |
| 40 | Null Object Pattern | Anti-Patterns in System Design                                       |    ⬜   |

---

# Design Patterns

The repository covers a broad set of Object-Oriented Design Patterns.

## Creational Patterns

* Factory
* Singleton
* Builder
* Prototype

## Structural Patterns

* Adapter
* Bridge
* Composite
* Decorator
* Facade
* Flyweight
* Proxy

## Behavioral Patterns

* Chain of Responsibility
* Command
* Iterator
* Mediator
* Memento
* Observer
* State
* Strategy
* Template Method
* Visitor
* Null Object

The purpose of studying these patterns is not to apply them mechanically.

Instead, each pattern should answer a specific design question:

> **What problem does this pattern solve, and what trade-off does introducing it create?**

---

# Real-World System Design

The course applies Low-Level Design concepts to practical systems.

### Document Editor

Designing a Google Docs-style document editor and understanding how different document components can be modeled.

### Food Delivery System

Designing a Zomato-style food delivery application with domain entities and their interactions.

### Notification Engine

Designing a notification system with extensible notification behavior.

### Music Player

Designing a Spotify-style music player system.

### File System

Modeling a file system using object-oriented design and UML.

### Payment Gateway

Designing a payment processing system with appropriate abstractions and extensibility.

### Discount Coupon Engine

Modeling discount and coupon-related business rules.

### Quick Commerce

Designing a Zepto-style quick-commerce system with inventory management.

### Dating Application

Designing a Tinder-style dating application.

### Expense Sharing

Designing a Splitwise-style expense sharing system.

### Vending Machine

Modeling a vending machine using state-based behavior.

### Tic Tac Toe

Designing a Tic Tac Toe game using object-oriented principles.

### Snake and Ladder

Designing a Snake and Ladder game with appropriate domain modeling.

### Chat Room

Designing a chat-room system using object collaboration and the Mediator pattern.

### Chess

Designing a Chess game with a richer domain model and object interactions.

---

# Design Approach

Each Low-Level Design problem should be approached systematically.

## 1. Understand the Requirements

Start with the problem instead of starting with classes.

Identify:

* Functional requirements
* Important use cases
* Constraints
* Assumptions
* Expected behavior

---

## 2. Identify the Domain

Extract the important concepts from the requirements.

```text
Requirement
     ↓
Nouns → Candidate Objects
Verbs → Candidate Behaviors
Rules → Business Logic
Relationships → Object Collaboration
```

---

## 3. Define Responsibilities

Every class should have a clear reason to exist.

Ask:

> What responsibility belongs to this object?

Avoid creating classes that exist only to make the design look sophisticated.

---

## 4. Define Relationships

Determine how objects should interact.

Common relationships include:

* Association
* Aggregation
* Composition
* Inheritance
* Dependency

---

## 5. Identify Abstractions

Introduce interfaces or abstract classes where they provide meaningful flexibility.

A useful question is:

> **What is expected to vary?**

The abstraction should isolate that variation.

---

## 6. Apply Design Principles

Evaluate the design using principles such as:

* Single Responsibility
* Open/Closed
* Liskov Substitution
* Interface Segregation
* Dependency Inversion
* Encapsulation
* High Cohesion
* Low Coupling
* Composition over Inheritance

---

## 7. Evaluate Design Patterns

Patterns should be used when they simplify a recurring design problem.

The thought process should be:

```text
Problem
  ↓
What changes?
  ↓
What should remain stable?
  ↓
Where is the coupling?
  ↓
Can an abstraction isolate the change?
  ↓
Would a known pattern help?
  ↓
What are the trade-offs?
```

---

## 8. Implement

Only after the design is reasonably clear should the implementation begin.

The implementation should reflect the design rather than becoming the design itself.

---

## 9. Review

After implementation, evaluate:

* Is the design understandable?
* Are responsibilities clear?
* Is coupling reasonable?
* Is the system extensible?
* Are abstractions justified?
* Can the design be tested easily?
* What happens when a new requirement is introduced?

---

# Repository Structure

```text
low-level-design/
│
├── README.md
│
├── 01-foundations/
│   ├── system-design/
│   ├── oop/
│   └── uml/
│
├── 02-solid/
│
├── 03-design-patterns/
│   ├── strategy/
│   ├── factory/
│   ├── singleton/
│   ├── observer/
│   ├── decorator/
│   ├── command/
│   ├── adapter/
│   ├── facade/
│   ├── composite/
│   ├── template-method/
│   ├── proxy/
│   ├── chain-of-responsibility/
│   ├── bridge/
│   ├── builder/
│   ├── iterator/
│   ├── flyweight/
│   ├── state/
│   ├── mediator/
│   ├── prototype/
│   ├── visitor/
│   ├── memento/
│   └── null-object/
│
└── 04-real-world-design/
    ├── google-docs/
    ├── zomato/
    ├── notification-engine/
    ├── spotify/
    ├── file-system/
    ├── payment-gateway/
    ├── coupon-engine/
    ├── zepto/
    ├── tinder/
    ├── splitwise/
    ├── vending-machine/
    ├── tic-tac-toe/
    ├── snake-and-ladder/
    ├── chat-room/
    └── chess/
```

---

# Progress

| Section           | Completed |  Total |
| ----------------- | --------: | -----: |
| Foundations       |         1 |      4 |
| SOLID             |         0 |      2 |
| Design Patterns   |         0 |     22 |
| Real-World Design |         0 |     14 |
| **Total**         |     **1** | **40** |

---

# Technology

### Language

* Java

### Concepts

* Object-Oriented Programming
* Object-Oriented Design
* UML
* SOLID Principles
* Design Patterns
* Low-Level Design
* System Design

### Tools

* Git
* GitHub

---

# Learning Resource

This repository follows the **System Design Full Course** by **Coder Army**.

### Original Playlist

https://www.youtube.com/playlist?list=PLQEaRBV9gAFvzp6XhcNFpk1WdOcyVo9qT

The source playlist contains 40 lectures covering System Design fundamentals, OOP, UML, SOLID principles, Design Patterns, and real-world system design problems.

---

# Repository Philosophy

> **Design for change, not for complexity.**

A good Low-Level Design is not necessarily the one with the most classes, interfaces, or patterns.

A good design makes the system's responsibilities and relationships clear while keeping expected changes localized.

The goal of this repository is to develop the ability to reason about software design from first principles:

```text
Requirements
    ↓
Domain Model
    ↓
Responsibilities
    ↓
Relationships
    ↓
Abstractions
    ↓
Design Principles
    ↓
Patterns
    ↓
Implementation
    ↓
Trade-offs
```

---

# Status

**Work in Progress**

This repository will evolve as new lectures are completed and implementations are added.

Earlier designs may also be revisited and refactored as understanding improves.

---

# Disclaimer

This is an independent learning and practice repository.

The original course, videos, teaching material, and associated intellectual property belong to their respective creator(s).

This repository does not claim ownership of the original course content.

The purpose of this repository is personal learning, implementation, revision, and interview preparation.

---

## ⭐ If You Find This Useful

If this repository helps you learn or revise **Low-Level Design, Object-Oriented Design, SOLID principles, UML, or Design Patterns**, consider giving it a star.

It helps the repository reach other developers learning software design.
