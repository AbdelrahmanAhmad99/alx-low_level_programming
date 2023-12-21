#include "main.h"
/**
 * print_number - integer.
 * @m: .integer.
*/
void print_number(int m)
{
unsigned int a;
if (m < 0)
{
a = -m;
_putchar('-');
}
else
{
a = m;
}
if (a / 10)
{
print_number(a / 10);
}
_putchar((a % 10) + '0');
}
