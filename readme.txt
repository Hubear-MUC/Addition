Addition 5.0
------------

Two numbers get added together.

The program has to be used with a debugger, because routines for user
interaction did not fit into the code space of 34 bytes yet.

To use the program compile with debugging information.

This might be achieved differently concerning the debugger you use, so
please refer to the manual of your debugger.

To operate the program best set a breakpoint in line 3 or 4. 
This is still before the operation.

Set a further breakpoint at line 6 to prevent the program from finishing
before you can investigate the result.

  1  double a,b,c;
  2
  3  main()
  4  {
  5  c=a+b;
  6  }

Run the program and wait until it stops at the breakpoint in line 3 (or 4).

Next assign the values to be added together to the variables a and b.

Then continue the program so that it does the calculation and stops again at
the breakpoint at line 6.

Alternatively you can continue the program execution by using single steps
until the calculation happened.

After the calculation the result will be in variable c.

Check the content of variable c to get the result.

Next continue the program execution in the normal way to let the program run
to its end and exit.




Changes:
--------

Version 5.0:

Replacing the data type "float" by "double" to increase the precision of
the calculation.


Version 4.0:

Replacing the data type "int" by "float" so that floating point numbers now
can be used for the calculation.


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
