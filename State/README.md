#State

The state design pattern changes the behaviour of the whole class when the state of an object changes.
This essentially implements a state machine.

##When to Use It

1. When the context class needs to present an interface to a client - abstract state base class used
2. When different state of a state machine need to be represented as derived classes

##Benefits

1. Code is cleaner when each state is a class
2. Classes representing states are not constants
3. Less long conditionals

##Drawbacks

1. Makes a number of small objects for the states
