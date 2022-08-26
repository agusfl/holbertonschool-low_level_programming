#ifndef SEARCH
#define SEARCH

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Function prototypes - mandatory tasks */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
/* Function prototypes - advanced tasks */
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif
