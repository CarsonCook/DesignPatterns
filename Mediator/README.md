#Mediator

The mediator design pattern controls the interaction between two other objects.
This reduces the coupling of the two object's communication as the two objects don't need knowledge of the others' implementation.

##When to Use It

1. When a set of objects communicate in specific but complex ways
2. When an object is difficult to reuse due to the amount of objects it communicates with

##Benefits
1. Improves security
2. Spreads out behaviour among classes without using subclasses
3. Decouples classes
4. Abstractions the object cooperation
5. Simplifies interactions from many-to-many to one-to-many
6. Cnetralizes control by having the complex interaction in the mediator, encapsulating the protocols

##Drawbacks

1. Mediator can be complex and hard to maintain
2. There is a performance impact due to a communication bottleneck
