#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers_to_print;

	va_start(numbers_to_print, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(numbers_to_print, int));
		if (i < n && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers_to_print);

	printf("\n");
}
