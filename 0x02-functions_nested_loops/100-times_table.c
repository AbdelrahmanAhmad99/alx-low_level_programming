#include "main.h"
/**
 * print_times_table - prints n times 0
 * @bb: num
*/
void print_times_table(int bb)
{
int a, s, d;
if (bb >= 0 && bb <= 15)
{
for (a = 0; a <= bb; a++)
{
for (s = 0; s <= bb; s++)
{
d = s * a;
if (s == 0)
{
_putchar(d + '0');
}
else if (d < 10 && s != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(d + '0');
}
else if (d >= 10 && d < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
}
else if (d >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((d / 100) + '0');
_putchar(((d / 10) % 10) + '0');
_putchar((d % 10) + '0');
}
}
_putchar('\n');
}
}
}
