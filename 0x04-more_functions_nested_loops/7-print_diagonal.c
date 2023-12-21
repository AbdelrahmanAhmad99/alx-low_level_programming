#include "main.h"
/**
 * print_diagonal - main
 * @m: number of character
*/
void print_diagonal(int m)
{
if (m <= 0)
{
_putchar('\n');
}
else
{
int a, s;
for (a = 0; a < m; a++)
{
for (s = 0; s < m; s++)
{
if (s == a)
_putchar('\\');
else if (s < a)
_putchar(' ');
}
_putchar('\n');
}
}
}
