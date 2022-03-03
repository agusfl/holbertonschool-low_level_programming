#include "main.h"
#include <string.h>

/**
 * *array_range - creates an array of integers
 * @min: min value of the array
 * @max: max value of the array
 * Return: pointer to the array or NULL if malloc fails
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0, len;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
