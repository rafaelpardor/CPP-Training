# Data Structures and Algorithms

## Chapter 1: Introduction

Fundametals of C++

### Objects

An Object an entity with state and behavior. An object can be whatever we want. Hiding internal details (state) os the object and allowing all the actions to be performed over the objects using methods is known has **data encapsulation**.

In cpp, a class is a prototype of objects. An objects is an isntance of a class.

### Kind of Variables

1. **Instance Variables (non-static)**:They are instance variables so they are unique
to each instance/object of a class.

2. **Class Variables (static)**: A class variable is any field with the *static* modifier.
These variables are linked with the class not with the object of the class. There is
exactly one copy of these variables regardless of how many instances of the class
are created.

3. **Local Variables**: The temporary variables in a method are called local variables.
The local variables are only visible to the method in which they are declared. The
parameters that are passed to the methods are also local variables of the called method.

### Methods

There are four types of methods. By default, all the methods are instance methods.

1. **Class methods** (*static*):  The static modifier is used to create class methods. Class methods with static
modifier with them should be invoked with the class name without the need of creating even a single
instance of the class.

2. **Instance methods** (*non-statics*) non-static: these methods can only be invoked over an instance of the class.

3. **Constructor**: It is a special kind of method, which is invoked over objects when they are created. Constructor methods have the same name as the class. Constructor mehod is used to initialize the various fields of the objects

4. **Distructor**: It is a special kind of method, which is invoked over object when they are destroyed.

### Access Modifiers

Access modifiers are used to set the visibility level to the class, variables and methods.

1. **Private**: Modifier has visiblity only within its own class.

2. **Public**: Modifier has visibility to all the classes in the package

3. **Protected**: Modifier has visibility within it own class and the subclasses its own class.

### Abstract Class

Objects define their interface as the interaction with the outside word. In C++ there is no interface keyword, just define so,e abstract function by making it ```"=0"``` thereby making the whole class abstract.

## Chapter 2: Algorithms Analysis

## Chapter 4: Abstract Data Type and C++ Collections
