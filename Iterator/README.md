#Iterator

The iterator pattern is a way of accessing elements of an object, while keeping encapsulation.
The iterator traverses a collection to provide this access to objects.

##When to Use It

1. When elements of a collection need to be accessed sequentially

##Benefits

1. The same iterator can be used for different collections
2. Can define different ways to traverse a collection, based on need
3. Encapsulates how the iteration works

##Drawbacks

1. Not thread safe unless insertions and deletions are supported
