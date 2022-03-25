#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 * This is an attribute of a systme that indicates whether integers are
 * represented with the most significant byte stored at the lowest address
 * (big endian) or at the highest address (littles endian).
 **/

int get_endianness(void)
{
	int rand_num = 100;
	char *ptr = (char *) &rand_num;
	/**
	 * Ava estamos casteando la dir del int rand_num a un string (char *)
	 */

	if (*ptr != 0)
	{
		return (1); /* Si es distinto a cero es el little endian */
	}
	else
	{
		return (0);
	}
}
