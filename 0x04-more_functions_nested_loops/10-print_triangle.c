#include "main.h"
/**
 * print_triangle - a triangle,
 * @dff: size ofthe triangle.
*/
void print_triangle(int dff)
{
if (dff <= 0)
{
_putchar('\n');
}
else
{
int a, s;
for (a = 1; a <= dff; a++)
{
for (s = a; s < dff; s++)
{
_putchar(' ');
}
for (s = 1; s <= a; s++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
