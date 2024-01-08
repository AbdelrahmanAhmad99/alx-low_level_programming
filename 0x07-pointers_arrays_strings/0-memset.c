#include "main.h"
/**
 * *_memset -a constant byte.
 * @a: memory area .
 * @b: var to copy.
 * @c: number of times.
 * Return: pointer
 */
char *_memset(char *a, char b, unsigned int c)
{
	unsigned int i;

	for (i = 0; i < c; i++)
	{
		a[i] = b;
	}
	return (a);
}
