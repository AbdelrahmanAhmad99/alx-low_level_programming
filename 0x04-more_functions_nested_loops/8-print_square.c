#include "main.h"
/**
 * print_square - square new line
 * @dff: square
*/
void print_square(int dff)
{
if (dff <= 0)
{
_putchar('\n');
}
else
{
int a, s;
for (a = 0; a < dff; a++)
{
for (s = 0; s < dff; s++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
