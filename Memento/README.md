#Memento

The memento pattern is a way to store the state of an object. This allows for changes to be undone when needed.

##When to Use It

1. When some information in an object needs to be available to another object
2. When a snapshot of an object's state is needed
3. When undo/redo functionality is needed

##Benefits

1. Can save and restore an objects' state

##Drawbacks

1. Pitfall of other objects being changed unexpectedly - memento only operates on a single object
2. Storing the memento can get expensive
