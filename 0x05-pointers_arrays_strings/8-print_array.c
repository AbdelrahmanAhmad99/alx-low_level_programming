#include <stdio.h>
#include "main.h"
/**
 * print_array - main prints d elements.
 * a new line.
 * @s: array to print.
 * @d: number of elements.
 */
void print_array(int *s, int d)
{
	int i;

	for (i = 0; i < d; i++)
	{
	if (i == 0)
	printf("%d", s[i]);
	else
	printf(", %d", s[i]);
	}
	printf("\n");
}
