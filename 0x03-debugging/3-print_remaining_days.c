#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) ||
		(year % 400 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}

		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n",
				month, day - 31, year);
		}
		else
		{
		printf("Day of the year: %d\n", day); /**
							*en la funcion de "convert_day" toman febrero con 28 dias
							*por eso es que el ejemlpo de la fecha: 29/2/2000 entra
							*en esta parte del else, ya que seria mes 2 y < a 60 dias
							*/
		printf("Remaining days: %d\n", 365 - day);
		}
	}
}
