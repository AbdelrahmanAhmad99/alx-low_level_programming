#include "main.h"
/**
 * reverse_array - reverses.
 * @x: array to be reversed
 * @c: number of elements.
 */
void reverse_array(int *x, int c)
{
	int i, f, tmp;

	f = c - 1;
	for (i = 0; i < c / 2; i++)
	{
	tmp = x[i];
	x[i] = x[f];
	x[f--] = tmp;
	}
}
