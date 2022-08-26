#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: Size of the array.
 * @value: is the value to search
 * Return: Index of the searched value in the array.
*/

int linear_search(int *array, size_t size, int value)
{
	/* Declare variable for iterating */
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	i++;
	}
	return (-1);
}
