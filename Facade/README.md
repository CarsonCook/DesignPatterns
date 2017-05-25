#Facade

The facade pattern creates a simple way to use a complex system. The client has a very simple
interface to use, which then handles the logic of using the complex system.

##When to Use It

1. When a library should be made more readable
2. When dependencies of a library on outside code need to be reduced
3. When multiple APIs need to be wrapped as one

##Benefits

1. Complex code is combined into one method
2. Libraries made more readable
3. Code is needed to be made less dependent
4. Creates weak coupling as internal components are not called directly by client

##Drawbacks

1. Less control on internal functionality
2. If classes need a small variation to create a facade, it could get very, very complex
