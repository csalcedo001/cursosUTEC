# Specifying requirements

* Interviews
* Surveys
* Focus groups
* Brain storming

## How to 

Write a what have been discused. Order ideas and make a document.

## Types of requirements

* User requierements: Natural language.
* System requirements: Natural language, structures language, graphical notations, mathematical specification (formal methods).

__Note:__ Formal methods: Use mathematics to explain a problem.

Critical systems.

## Feature List

A list of features of a product groups according to some criteria such as aspect, priority, order of delivery, etc.

## User Stories

Template: As a <user role>, I can <function>, so that I can <benefit>.

User stories can be writen in various levels.

* High level stories (EPICS): Bigger functionality. Can be broken down into lower level stories.
* Lower level stories: More specific functionality.

__Note:__ Conditions can also be added.

### Why user stories?

* Convinient for scoping.
* Differ in level of detail.
* ...
* ...

## Glossary

Ensures that all stakeholders understand common terms, abbreviations, etc.

## Use case

Interaction between the user and the system

Example: Unified Modeling Language (UML)

* Describes esternally visible behavior, not internal details.
* A step gives intention of the actor (not mechanics).

### Structure

* MSS: Best case scenario.
* Extensions: When something goes wrong.
* Underlined text: Requirements
* Precondition: Specific state expected before the start of the use case.
* Guarantees: What the use case promises at when it ends.


Example:

* System: Online Banking System (OBS).
* Use case: UC23 - Transfer Money.
* Actor: User
* Precondition: User is logged in.
* Guarantees:
  * ...
* MSS:
  * ...
* Extension:
  * OBS detects an error:
    * ...
  * ...

### Identifying actors

* A use case is an interaction between a system and its actors.

  _Note:_ Use cases are labeled.

  Example: UC01 conduct survey

* A single person can assume many roles (as actor).
* Can have various levels of detail.

### Tips

* Start with high level.
* Show meaningful details in documentation.
* Keep it simple: Include the essentials, not everything.
* UML has different styles.
* *Document system requirements*:
  * Simple notation, easy to understand.
  * More freedom to optimize
  * Consider all situations faced during operation.
  * Separate typical from special cases.
* Not every requirement may be captured.
