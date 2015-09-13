==============
RPN CALCULATOR
==============
- Lab 1
- ACC COSC 2325
- Professor Roie Black
  
  Team:
    * *Zebulun Matteson*
    * *Christopher Word*
    * *Lyle Denman*
    * *Jose Benjamin Gutierrez*

Objective:
:::::::::::
Demonstrate thorugh a simple program how computers work. The RPN calculator has four different components that resemble 
how computers work. These components are:

  * Control Unit  
  * Memory Unit
  * ALU (math/logic) Unit
  * Input/Output Uni
  
Programing Language: 
:::::::::::::::::::::
* C++
I/O:
::::
The program opens a text file which contains commands and numbers. Through a sequence of "if" statements it determines what should be done if a command or a numner is given.
  * If a command is given it performs the operation assigned to that command. 
  * If a number is given it pushes that numner on to the stack.

Memory:
:::::::
A stack structure was used in this program to hold our data.
  
Operations:
:::::::::::
The 0perations of this program are implemented with four simple functions:
  * ADD:
    The ADD operation tops numbers of the stack and adds them together. 
    After adding the numbers, the function pops the number off the stack.
    This can be done in two simple ways:
     * Reading the numbers from the file and topping them on to the stack.
     * Reading a number called result from a previous operation and new values.
  * SUB:
    The same algorithm is implemented here as it is with the ADD function, expect that the new values are subtracted from the previous result or previous values.
  * MUL:
    Same algorithm stil holds. The result is the product from the multiplication of the numbers.
  * DIV:
    Same algoithm still holds. The numbers are divided this time.
Control:
:::::::::
The control for this program is generated with two simple commands, which are also given on the text file: 
  * PRT: 
    Tops a number off the stack and prints it.
  * STOP: 
    Stops our super RPN calculator machine.
Test:
:::::::
The testing was done by thanslating the calculations from a pre-fix notation to a post-fix notation. The desired results were achieved.
