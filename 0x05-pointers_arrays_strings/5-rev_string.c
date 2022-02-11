#include "main.h"
/**
 * rev_string - reverses string
 * @s: string to print
 * Return: always 0
 **/
void rev_string(char *s)
{
int x, y;

for (x = 0; s[x] != '\0'; x++)
{
}
for (y = x - 1; y >= 0; y--)
_putchar(s[y]);
_putchar('\n');
}
