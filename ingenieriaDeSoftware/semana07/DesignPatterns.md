# Design Patterns

Design Pattern: An elegant reusable solution to a recurrent problem in a context for software design.

__Note__: For programming.

## Components of pattern description

* Context
* Problem
* Solution
* Anti-patterns: Incorrect solution
* Consequences
* Other useful information

## Why design patterns?

* Can speen up development process
* Prevent issues

## Types of design patterns

* Creational
  * Singleton
  * Abstraction Ocurrence

* Structural
  * Facade

* Behavioral
  * Command
  * Observer

## Singleton Pattern

A class should have no more that just one instance.

*Problem*: It's difficult to assure there is only one instance of that class
*Solution*: getInstance(): If the object hasn't been created, the constructor is called; if not, the actual instance is returned.

"""
getInstance() {
	if (theOne == null) {
		return theOne = new ClassName();
	}
	else {
		return theOne;
	}
}
"""

## Abstraction Ocurrence Pattern

*Problem*: Many object of one class that have many attributes in common, but little that differs. This makes it difficult to update information and repeats information in each class.

*Solution 1*: Create a class for every set of common attributes.

*Anti pattern*: There would be too many classes.

*Solution 2*: Abstraction and Ocurrence classes.

* Abstraction: Holds common information.
* Ocurrente: Holds instanciation-specific informacion.

## Facade Pattern

*Context*: Components need to access deeply into other component funcionalities.
*Problem*: Access should be allowed without showing internal details.
