#Decorator

The decorator pattern is used to dynamically change objects. The decorator wraps another class,
and can change one object at runtime, without effecting other objects of the same type.

##When to Use It

1. When responsibilities need to be added to objects dynamically and not affect other objects
2. When responsibilities are added to an object that may change in the future
3. When an extension added to an object by a static subclass is impractical

##Benefits

1. More flexible than static inheritance
2. Avoids classes with lots of features high in an inheritance tree
3. Code is simplified by only targetting part of the functionality rather than targetting the whole object
4. Improves extensibility of code - simply add a new class

##Drawbacks

1. A complex component interface means the decorator is harder to implement
2. There is an overhead on performance for a long chain of decorators
