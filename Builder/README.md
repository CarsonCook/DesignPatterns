#Builder

A builder object handles complex creational logic for another object. The two have matching variables, and the builder is used within the target object's
constructor to set its own parameters. The builder sets it's own variables step by step with separate functions, and finally the build function returns
the target object.

###When to Use It

1. When the creation logic for creating an object is independent of the parts that make the object
2. When constructors are made for a class that allow different object representations to be made
3. In order to encapsulate the object creation process

###Benefits

1. The construction is encapsulated from the built object
2. A constructor's code could be replaced with no effect on other constructors
3. Controls the object construction process
4. The object can be changed or reused independently
