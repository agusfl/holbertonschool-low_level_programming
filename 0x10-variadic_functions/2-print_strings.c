#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings_to_print;
	char *str;

	va_start(strings_to_print, n);

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			str = va_arg(strings_to_print, char*);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
			if (i < n && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(strings_to_print);
	}
	printf("\n");
}
