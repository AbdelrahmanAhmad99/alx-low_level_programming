#include "main.h"
/**
 * print_most_numbers - prints 0 to 9
 * new line
*/
void print_most_numbers(void)
{
int f;
for (f = 0; f < 10; f++)
{
if (f != 2 && f != 4)
{
_putchar(f + '0');
}
}
_putchar('\n');
}
