#include "main.h"
/**
 * print_rev - main prints a string in reverse.
 * @a: string.
 */
void print_rev(char *a)
{
	int i, j, e;

	i = 0;

	while (a[i] != '\0')
	{
	i++;
	}
	e = i;
	for (j = e - 1; j >= 0; j--)
	{
		_putchar(a[j]);
	}
		_putchar('\n');
}
