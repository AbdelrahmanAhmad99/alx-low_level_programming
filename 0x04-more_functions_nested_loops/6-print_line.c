#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @m: number of character
*/
void print_line(int m)
{
if (m <= 0)
{
_putchar('\n');
}
else
{
int a;
for (a = 1; a <= m; a++)
{
_putchar('_');
}
_putchar('\n');
}
}
