#Chain of Responsibility

This design pattern builds a chain of objects that will handle a request.
The request enters one end and goes from object to object until one of the objects
in the chain can handle to request.

##When to Use It

1. When more than one object can handle a request, but the proper one is not known
2. When a request to be issued to a group of objects without explicitly defining a receiver
3. When a set of objects that can handle a request should be specified dynamically

##Benefits

1. Reduces coupling
2. Increases request handling flexibility

##Drawbacks

1. REception isn't guaranteed as no receiver is defined explicitly
