# Preprocessor (First step of the compilation process)

Learning objectives:

* What are macros and how to use them
* What are the most common predefined macros
* How to include guard your header files

## Environment

* Language: C and Bash scripts
* Operating System: Ubuntu 20.04 LTS
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)
* Compiler: gcc 
 > **Note:** The code will be compiled using the options: -Wall -Werror -Wextra -pedantic -std=gnu89

## Description of each file:

 | Files          |Desription
 |:----------------|:-------------------------------:|
 |main.h | prototypes of functions and libraries used.
 |0-object_like_macro.h |Header file that defines a macro named ``SIZE`` as an abbreviation for the token ``1024``.
 |1-pi.h |Header file that defines a macro named ``PI`` as an abbreviation for the token ``3.14159265359``.
 |2-main.c |Program that prints the name of the file it was compiled from, followed by a new line.
 |3-function_like_macro.h |Function-like macro ``ABS(x)`` that computes the absolute value of a number ``x``.
 |4-sum.h |Function-like macro ``SUM(x, y)`` that computes the sum of the numbers ``x`` and ``y``.

## Authors :pen:

 * [Agustin Flom](https://www.linkedin.com/in/agustin-f/)
