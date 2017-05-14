#Factories

Factories are used to instantiate objets. Hard coding the instantiation is avoiding in order to increase flexibility and ability to reuse code.

##Simple Factory

The simple factory design pattern generates instances of objects without exposing the instantiation logic. Functions return objects that are assumed to be used.
This pattern is used when it takes some logic to create an object, in order to avoid repeating code and thus cluttering the program.

##Factory Method

The Factory Method delegates instantiation logic to child classes in an inheritance by using an abstraction. These methods create objects without specifying what
exact class will be made. This is used when the client doesn't know what subclass they will be using, as it is dynamically decided at runtime.
