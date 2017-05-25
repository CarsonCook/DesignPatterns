#Observer

This pattern defines class dependencies so that whenever an object changes, the dependent objects are told automatically.
The dependent objects are called observers.

##When to Use It

1. When objects need to publish information and other objects need to receive that information

##Benefits

1. The publisher and subscriber are loosely coupled

##Drawbacks

1. Some information could be received that isn't needed by the subscriber
2. Updating all subscribers causes some communication overhead
