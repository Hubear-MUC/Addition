Addition 1.0

The program has to be used with a debugger, because routines for user
interaction did not fit into the code space of 22 bytes yet.

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

  1       int a;
  2       main(){
  3       a=a+1;}

Next add a value you want to use to variable a.

Then continue the program execution with single steps until the operation was
made.

You then can check the content of a which should be the value you assigned to
it before, raised by 1.

Next continue the program execution in the normal way to let the program run
to its end and exit.

For operating the debugger you use please refer to the manual of your
debugger.
