#include "main.h"
/**
 * print_last_digit - prints the last digit done
 * @roo: the int
 * Return: digit
*/
int print_last_digit(int roo)
{
int ll;
if (roo < 0)
roo = -roo;
ll = roo % 10;
if (ll < 0)
ll = -ll;
_putchar(ll + '0');
return (ll);
}
