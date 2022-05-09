# C - Dynamic libraries:

Learning objectives:

* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage nm, ldd, ldconfig

## Environment 
* Language: C
* Operating System: Ubuntu 20.04 LTS
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)
* Compiler: gcc 
 > **Note:** The code will be compiled using the options: -Wall -Werror -Wextra -pedantic -std=gnu89

## Description of each file:

| Files          |Desription
|:----------------|:-------------------------------:|
|libdynamic.so, main.h |Dynamic library and header file with all the prototypes of the used functions.
|functions_for_libdynamic |Folder with all the .c (source code) files used for the `dynamic` library.
|object_functions_for_libdynamic |Folder with all the .o (object files) of the functions used for the `dynamic` library.
|1-create_dynamic_lib.sh |Bash script to create a dynamic library called `liball.so` from all the .c files that are in the current directory.
|100-operations.so, 100-tests.py |`100-operations.so` is a dynamic library and 100-tests.py is Python file that uses a C dynamic library.

## Authors :pen:

* [Agustin Flom](https://www.linkedin.com/in/agustin-f/)
