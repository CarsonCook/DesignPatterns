#Prototype

When an object is similar to an existing one, or instantiation is expensive. An object is cloned, and then modified using setters.
An existing object is modified and then used for the new purpose.

##When to Use It

1. When the system is independent of how the object is created, composed or represented
2. When objects are added or removed at runtime
3. When new objects are specified by changing anothers' structure
4. When few objects are to be used
5. When the state configuration of an object is expensive

##Benefits

1. Speeds up the instantiation of large classes
2. Reduces number of sub classes
