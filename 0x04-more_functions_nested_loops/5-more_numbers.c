#include "main.h"
/**
 * more_numbers - prints from 0 to 14
 * new line
*/
void more_numbers(void)
{
int a, s;
for (a = 0; a < 10; a++)
{
for (s = 0; s < 15; s++)
{
if (s >= 10)
_putchar(s / 10 + '0');
_putchar(s % 10 + '0');
}
_putchar('\n');
}
}
