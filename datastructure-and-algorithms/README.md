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

## Chapter 3: Approach to Solve Algorithms Design Problems

Know the theorical knowledge of the algorithm is essential, but is not sufficient. An approach to solve an algorithm design question, is to master 5 steps.

### 1. Costraints

Solving a technical question is not just about knowing the algorithms and designing a good software system. There are a lot of data that is missing that you need to collect from the interviewer.

We should not never try to solve a problem that is not completely defined. Interview questions are not like exam paper where all the details about the problem are well defined.

For example: *When the problem statement says that write ana lgorithm to sort numbers*.

Let's suppose that the numbers are Integer types, and the input data size differs from 100 to 1 bil integers.

Basic guidelines for the Constrains for an array of numbers:

1. How many numbers of elements in the array?

2. What is the range of value in each element? What is the min and max value?

3. Does the array containt unique data or not

Basic guidelines for the Constrains for an array of string:

1. How many numbers of elements in the array?

2. What is the length of each string? What is the min and max length?

3. Does the array contain unique data or not?

Basic guidelines for the Constrains for a Graph:

1. How many nodes are in the graph?

2. Hoe many edges are there in the graph?

3. Is it a weighted graph? What is the range of weigths?

4. Is the graph directed or undirected?

5. Is there a loop in the graph?

6. Is there negative sum loop in the graph?

7. Does the graph have self-loops?

### 2. Ideas Generation

We should know how to handle new problems.

How to solve a new problem? **Practice**, a lot of practice. When you have solved enough problems, you will be able to see a patterns in questions and be able to solve new problems easy.

You can follow this patterns to solve an unknown problem:

1. Try to simplify the task in hand

2. Try a few examples.

3. Think to suitable data-structure

4. Think about similar problems you have already solved

### 3. Complexities

Solving a problem is not just finding a correct solution. The solution should be fast and should have reasonable memory requirement.

### 4. Coding

Never ever, jump into coding before discussing constraints.

### 5. Testing

Once the code is written, you are not done. It is most important that you test your code with several small cases. It shows that you understand the importance of testing. It also gives confifence that you don't write buggy code.

## Chapter 4: Abstract Data Type and C++ Collections

## Chapter 5: Searching
