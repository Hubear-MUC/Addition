Addition 7.1

Two numbers given as arguments are added and the result will be shown in the
terminal.

The new feature is that the numbers to be added together can be given as
arguments at the command line when the program is invoked.

It will be assumed that the name of the program file after compilation will be

  add
  
If you chose a different name please use this one instead of "add".


Just invoke like

  ./add number1 number2

for example

  ./add 5.80 6.95

And the result will be given back.
The numbers are represented as double- values.

If too few arguments are given, the program aborts without telling a result.


The interactive mode that enabled entering the numbers after invocation with
"in: " prompts got removed because the addition of two numbers certainly is
not regarded as a big task and it was considered more comfortable to pass the
two numbers just at the invocation.


Version 7.0 caused a segmentation fault when given just one number as argument.
This bug was fixed with this version.



Version history:
----------------

Version 7.1

Fixing the issue with the segemntation fault when too less arguments are given at invocation.


Version 7.0

Numbers now will be given as arguments at invocation.
Removing the interactive promts for the numbers after invocation.


Version 6.1

Replaced the data type  int  by  double to enable calculations of real numbers.
Version 6.0 was just able to calculate with int- numbers which are just a small part of the numbers that can appear in serious calculations.


Version 6.0

Complete rewrite of the code.
Implementation of full user interaction.


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
