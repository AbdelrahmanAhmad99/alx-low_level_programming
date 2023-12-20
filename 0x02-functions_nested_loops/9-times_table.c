#include "main.h"
/**
 * times_table - prints 9 .starting 0
*/
void times_table(void)
{
int aa, ss, dd;
for (aa = 0; aa < 10; aa++)
{
for (ss = 0; ss < 10; ss++)
{
dd = ss * aa;
if (ss == 0)
{
_putchar(dd + '0');
}
if (dd < 10 && ss != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(dd + '0');
}
else if (dd >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((dd / 10) + '0');
_putchar((dd % 10) + '0');
}
}
_putchar('\n');
}
}
