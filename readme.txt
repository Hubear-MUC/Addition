Addition 3.1
------------

Two numbers get added together.

The program has to be used with a debugger, because routines for user
interaction did not fit into the code space of 30 bytes yet.

To use the program compile with debugging information.

This might be achieved differently concerning the debugger you use, so
please refer to the manual of your debugger.

To operate the program best set a breakpoint in line 3. 
This is still before the operation.

  1  int a,b,c;
  2  main()
  3  {
  4  c=a+b;
  5  }

Run the program and wait until it stops at the breakpoint in line 3.

Next assign the values that have to be added together to the variables a
and b.

Then continue the program execution with single steps until the operation was
made. Usually this sould be just one step.

After the calculation the result will be in variable c.

Check the content of variable c to get the result.

Next continue the program execution in the normal way to let the program run
to its end and exit.


Changes:
--------

Version 3.1:

Placing the closing curly bracket in a new line to make the code readable
more clearly


Version 3.0:

Introducing the variable c as a third variable, so that the result is in a
seperate one as the two summands.

This might be a little more clear as an idea of getting a result.


Version 2.3:

Placed the closing curly bracket in a new line to make the code readable
more clearly.
In this style it looks like a usual C- program.


Version 2.2:

Placed the line with the actual operation one line below so that an opening
curly bracket can be used as breakpoint.
This might appear more clearly as the breakpoint positioned before the
operation.


Version 2.1:

Placed the function block of main() in the next line to make the code readable
more clearly.


Version 2.0:

Implemented a second variable (b) to allow the addition of two numbers.


Version 1.0:

Initial implementation
