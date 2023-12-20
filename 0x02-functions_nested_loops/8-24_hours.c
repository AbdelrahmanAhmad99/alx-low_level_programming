#include "main.h"
/**
 * jack_bauer - prints minute
 * starting 00:00 to 23:59
*/
void jack_bauer(void)
{
int gh, op;
gh = 0;
while (gh < 24)
{
op = 0;
while (op < 60)
{
_putchar((gh / 10) + '0');
_putchar((gh % 10) + '0');
_putchar(':');
_putchar((op / 10) + '0');
_putchar((op % 10) + '0');
_putchar('\n');
j++;
}
gh++;
}
}
