#Bridge

The bridge pattern turns large, complex inheritance hierarchies into multiple, smaller and simpler hierarchies.
The two hierarchies are then combined back together using class variable(s); it preferes composition over inheritance.

##When to Use It

1. When abstract and concrete classes need to be separated
2. When implementation of a system needs to be shared among many objects

##Benefits

1. Objects can be reused easily
2. Clients encapsulated from implementation
3. Implementation can change at run time
4. Abstraction and implementation can be extended and made independently
