#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function to select correct function to perform
 * @s: operation given it can be: +, *, -, /, %
 * Return: pointer to the correct operation function or NULL if not match
 * with 's'.
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
