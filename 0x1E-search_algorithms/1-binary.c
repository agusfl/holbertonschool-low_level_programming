#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: Size of the array.
 * @value: is the value to search
 * Return: Index of the searched value in the array.
*/

int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	int i = 0;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != high)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}
	return (-1);
}
