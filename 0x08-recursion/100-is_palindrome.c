#include "main.h"

/**
 * compare - compare first and last indices of the word searching a match
 * @first: index starting from left of string
 * @last: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *first, char *last)
{

	if (first >= last)
		return (1);
	if (*first == *last)
		return (compare(first + 1, last - 1));

	return (0);
}

/**
 * _strlen - find length of string recursively
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{

	if (*str == '\0')
		return (0);
	str++;
	return (1 + (_strlen(str)));
}

/**
 * is_palindrome - check if string is palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
