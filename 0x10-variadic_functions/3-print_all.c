#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @c: char
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - prints an integer
 * @i: integer
 */

void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - prints a float
 * @f: float
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - prints a string
 * @s: string
 */

void print_string(va_list s)
{
	char *str;

	str = va_arg(s, char*);

	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", str);
}

/**
 * print_all - print types: char, integer, float and string
 * @format: symbol to print
 */

void print_all(const char * const format,...)
{
	char *separator = "";
	int i, ii;

	va_list list;

	va_struct symbol[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
		};

	va_start(list, format);

	ii = 0;
	while (format != NULL && format[ii] != '\0')
	{
		i = 0;
		while (symbol[i].s != '\0')
		{
			if (symbol[i].s == format[ii])
			{
				printf("%s", separator);
				symbol[i].fun(list);
				separator = ", ";
			}
			i++;
		}
		ii++;
	}
	va_end(list);
	printf("\n");
}

