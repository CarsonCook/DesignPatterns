#Proxy

A proxy class represents the functionality of another class as an interface to provide even more functionality.

##Where to Use It

1. When the creation of one object is expensive
2. When a permission check is needed before the requested object is given
3. When a local representation is needed for a remote object

##Benefits

1. Can control access to objects - expensive creation or security issues

##Drawbacks

1. Requires another abstraction level for objects
2. If some ojbects are accessed directly and some with a proxy, they could have different behaviour
