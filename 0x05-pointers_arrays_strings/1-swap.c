#include"main.h"
/**
 *swap_int - swap the value of two variables.
 *@a: pointer int.
 *@b: pointer int..
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
