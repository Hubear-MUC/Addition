Addition 2.2
------------

Two numbers get added together.

The program has to be used with a debugger, because routines for user
interaction did not fit into the code space of 25 bytes yet.

To use the program compile with debugging information.

This might be achieved differently regarding which debugger you use, so
please refer to the manual of the debugger you use.

To operate the program best set a breakpoint in line 3. 
This is still before the operation.

  1  int a,b;
  2  main()
  3  {
  4  a=a+b;}

Run the program and wait until it stops at the breakpoint in line 3.

Next assign the values that have to be added together to the variables a
and b.

Then continue the program execution with single steps until the operation was
made.

After the calculation the result will be in variable a.

Check the content of variable a to get the result.

Next continue the program execution in the normal way to let the program run
to its end and exit.




Changes:
--------

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
