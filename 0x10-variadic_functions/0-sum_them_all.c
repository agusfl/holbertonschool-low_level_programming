#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parameters
 * @n: number to be sum
 * Return: sum of all the numbers passed
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list numbers_to_sum;

	va_start(numbers_to_sum, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers_to_sum, int);
	}
	va_end(numbers_to_sum);
	return (sum);
}
