#include "main.h"

/**
 * swap_int - change value of a variable with a pointer
 * @a: variable 1
 * @b: variable2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int ab, ba;

	ab = *a;
	ba = *b;
	*a = ba;
	*b = ab;
}
