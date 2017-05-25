#Factories

Factories are used to instantiate objets. Hard coding the instantiation is avoiding in order to increase flexibility and ability to reuse code.

##Simple Factory

The simple factory design pattern generates instances of objects without exposing the instantiation logic. Functions return objects that are assumed to be used.
This pattern is used when it takes some logic to create an object, in order to avoid repeating code and thus cluttering the program.

##Factory Method

The Factory Method delegates instantiation logic to child classes in an inheritance by using an abstraction. These methods create objects without specifying what
exact class will be made. This is used when the client doesn't know what subclass they will be using, as it is dynamically decided at runtime.

###When to Use It

1. When the client can't anticipate which kind of object it needs to make
2. When the knowledge of which class to be made needs to be localized
3. When classes can be interchanged (same methods)
4. To encapsulate the type of object being instantiated

###Benefits

1. Client doesn't need to know every subclass, they only reference an abstraction and factory object
2. Encapsulates the creation of objects

###Drawbacks

1. A recompilation is needed to change the implementing class

##Abstract Factory

An abstract factory groups related factories, encapsulating them and removes need for concrete factory classes. This makes sense for when there are
interrelated dependencies with complex creational logic.

###When to Use It

1. When the objects needed are related and their implementation is not important to the client
2. When different sets of objects are needed, and can be changed at runtime
