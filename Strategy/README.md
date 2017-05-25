#Strategy

The strategy design pattern allows for switching of the algorithm at run time. This allows a specific ...strategy... to be chosen
for a specific situation.

##When to Use It

1. When multiple algorithms could be used and the decision is made at runtime
2. When a class needs to be configured with one of many related classes
3. When an algorithm uses data the client shouldn't/doesn't have access to

##Benefits

1. Reduces multiple conditionals in the client
2. Hides algorithmic data from the client
3. Provides an alternative to subclassing

##Drawbacks

1. Client must know of different strategies and know which to choose
2. Increases number of objects used
