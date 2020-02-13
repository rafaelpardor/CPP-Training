The purpose of a programming language is to help express ideas in code. In that, a programming
language performs two related tasks: it provides a vehicle for the programmer to specify actions to
be executed by the machine, and it provides a set of concepts for the programmer to use when
thinking about what can be done.

Programming style
The general ideals for design and programming can be expressed simply:
• Express ideas directly in code.
• Express independent ideas independently in code.
• Represent relationships among ideas directly in code.
• Combine ideas expressed in code freely – where and only where combinations make sense.
• Express simple ideas simply.

The C++ language features most directly support four programming styles:
• Procedural programming
• Data abstraction
• Object-oriented programming
• Generic programming

As is usual with important terms in the computing world, a wide variety of definitions of these
terms are popular in various parts of the computing industry and academia. For example, what I
refer to as a ‘‘programming style,’’ others call a ‘‘programming technique’’ or a ‘‘paradigm.’’ I
prefer to use ‘‘programming technique’’ for something more limited and language-specific.

Procedural programming: This is programming focused on processing and the design of
suitable data structures. It is what C was designed to support.

Data abstraction: This is programming focused on the design of interfaces, hiding
implementation details in general and representations in particular. C++ supports concrete and
abstract classes. The facilities for defining classes with private implementation details,
constructors and destructors, and associated operations directly support this. The notion of an
abstract class provides direct support for complete data hiding.

Object-oriented programming: This is programming focused on the design, implementation,
and use of class hierarchies. In addition to allowing the definition lattices of classes, C++
provides a variety of features for navigating class lattices and for simplifying the definition
of a class out of existing ones.

Generic programming: This is programming focused on the design, implementation, and use
of general algorithms. Here, ‘‘general’’ means that an algorithm can be designed to accept a
wide variety of types as long as they meet the algorithm’s requirements on its arguments.

The styles mentioned are not distinct alternatives: each contributes techniques to a more
expressive and effective style of programming, and C++ provides direct language support for their
use in combination.


Many of the most fundamental programming concepts are represented in the standard
library. Thus, learning the standard library is an integral part of learning C++. The standard library
is the repository of much hard-earned knowledge of how to use C++ well.
C++ is widely used for teaching and research. This has surprised some who – correctly – point
out that C++ isn’t the smallest or cleanest language ever designed. It is, however:
• Sufficiently clean for successfully teaching basic design and programming concepts
• Sufficiently comprehensive to be a vehicle for teaching advanced concepts and techniques
• Sufficiently realistic, efficient, and flexible for demanding projects
• Sufficiently commercial to be a vehicle for putting what is learned into nonacademic use
• Sufficiently available for organizations and collaborations relying on diverse development
and execution environments
C++ is a language that you can grow with.

The purpose of learning a programming language is to become a better
programmer, that is, to become more effective at designing and implementing new systems and at
maintaining old ones. To gain the benefits of C++, programmers coming to it from a different
language must learn and internalize idiomatic C++ programming style and technique.
The same applies to programmers used to earlier and less expressive versions of C++.

The main ideal for C++ programming – as for programming in most higher-level languages – is
to express concepts (ideas, notions, etc.) from a design directly in code. We try to ensure that the
concepts we talk about, represent with boxes and arrows on our whiteboard, and find in our (non-
programming) textbooks have direct and obvious counterparts in our programs:
[1] Represent ideas directly in code.
[2] Represent relationships among ideas directly in code (e.g., hierarchical, parametric, and
ownership relationships).
[3] Represent independent ideas independently in code.
[4] Keep simple things simple (without making complex things impossible).
[5] Prefer statically type-checked solutions (when applicable).
[6] Keep information local (e.g., avoid global variables, minimize the use of pointers).
[7] Don’t over abstract (i.e., don’t generalize, introduce class hierarchies, or parameterize
beyond obvious needs and experience).
