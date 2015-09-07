## CSCI 2312: Programming Assignment 1

_Working With Objects_

* * *

### Overview of the Program

This program calculates the area of a three-dimensional triangle using two functions, one that computes the distance between two points and one that does the area calculation using Heron's Formula. First, the user inputs three points (nine coordinates total). Then, the _computeArea_ function is called, which first calculates the length of all three sides. This is done by calling the _distanceTo_ function located in the Point class. These three values are then plugged into Heron's Formula, which gives the area of the three-dimensional triangle. This value is returned to the _main_ function, where it is displayed. 


### Compiler

I created this program in CLion on my Mac using the CLang compiler.

* * *

<font size="-1">ACKNOWLEDGEMENT: Modelled after CS11 Lab 1 at Caltech.</font>

<font size="-1">Some content Copyright (C) 2004-2010, California Institute of Technology.</font>
