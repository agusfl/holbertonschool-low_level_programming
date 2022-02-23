#include "main.h"

/**
 * search_root - search for square root of n, starting from the lowest
 * possible value (0)
 * @n: number to search squere root
 * @root: test this root starting from 0
 * Return: natural square root, or -1 if not natural root
 */

int search_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (search_root(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: number to search squere root
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (search_root(n, 0));
}
