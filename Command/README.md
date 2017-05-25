#Command

The command design pattern encapsulates the actions within an object in order to decouple the client from the
object receiving the action.

##When to Use It

1. When an action is used that can be represented in many ways
2. To create undo/redo functionality

##Benefits

1. The Command object can assemble parameters for a function call and/or data and used later
2. Allows reaction to a command at a time after command executed

##Drawbacks

1. Forces extra small classes
