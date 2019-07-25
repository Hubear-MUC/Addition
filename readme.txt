Addition 2.0
------------

The program has to be used with a debugger, because routines for user
interaction did not fit into the code space of 23 bytes yet.

To use the program compile with debugging information.

If you use gdb as delivered usually in Linux distributions the debugging
information is included into the binary with the switch

  -g

For example:

  g++ -g +o addition code.cpp

If you use another programming enviroment, this step might be different,
please refer to the documentation of your programmint environment in this
case.

To operate the program best set a breakpoint in line 2. 
This is still before the operation.

  1  int a,b;
  2  main(){a=a+b;}


Next assign the values that have to be added together to the variables a
and b.

Then continue the program execution with single steps until the operation was
made.

After the assignment the result of both numbers will be in variable a.

Check the content of variable a to get the result.

Next continue the program execution in the normal way to let the program run
to its end and exit.

For operating the debugger please refer to the manual that got delivered 
with your debugger.



Changes:
--------

Version 2.0:

Implemented a second variable (b) to allow the addition of two numbers.

