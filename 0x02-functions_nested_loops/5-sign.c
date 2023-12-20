#include "main.h"
/**
 * print_sign - prints sign go go
 * @opp: check
 * Return: 1 if 0
 *
*/
int print_sign(int opp)
{
if (opp > 0)
{
_putchar('+');
return (1);
}
else if (opp == 0)
{
_putchar(48);
return (0);
}
else if (opp < 0)
{
_putchar('-');
}
	return (-1);
}
