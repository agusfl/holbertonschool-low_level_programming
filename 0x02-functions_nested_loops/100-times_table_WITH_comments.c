#include "main.h"

/**
 * print_times_table - print n times table startin with 0
 * @n: integer
 */

void print_times_table(int n)
{
	int row;
	int col;
	int prod;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = (row * col);
				if (col == 0)
					_putchar('0' + prod);
				else
				{
					_putchar(',');
					_putchar(' ');
					if (prod <= 9)
					/**
					 * Esto es para que no queden espacios al final cuando es solo un numero
					 **/
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + prod);
					}
					else if (prod > 9 && prod < 100)
					/**
					 * If para que no quede un espacio al final de la linea cuando son 2
					 * nuemros
					 **/
					{
						_putchar(' ');
						_putchar('0' + (prod / 10));
						_putchar('0' + (prod % 10));
					}
					else if (prod >= 100)
					/**
					 * Lo mismo que en los casos anteriores pero ahora para 3 numeros
					 * No chequeamos ningun caso mas que de tres numeros ya que por dato de
					 * letra y en base a las condiciones que pusimos lo maximo que vamos a
					 * calcular es la tabla del 15 y 15 * 15 = 225 (3 numeros).
					 **/
					{
						_putchar('0' + (prod / 100));
						_putchar('0' + ((prod / 10) % 10));
						_putchar('0' + (prod % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
