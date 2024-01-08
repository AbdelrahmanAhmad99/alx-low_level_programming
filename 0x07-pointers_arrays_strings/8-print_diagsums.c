#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum .
 * @s: square matrix of which we print the sum of diagonals.
 * @size: the matrix.
 */
void print_diagsums(int *s, int size)
{
	int i;

	unsigned int su, su1;

	su = 0;
	su1 = 0;
	for (i = 0; i < size; i++)
	{
	su += s[(size * i) + i];
	su1 += s[(size * (i + 1)) - (i + 1)];
	}
printf("%d, %d\n", su, su1);
}
