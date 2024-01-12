#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @e: a string.
 * Return:int.
 */
int _atoi(char *e)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
	while (e[len] != '\0')
	len++;
	while (i < len && f == 0)
	{
	if (e[i] == '-')
	++d;
	if (e[i] >= '0' && e[i] <= '9')
	{
	digit = e[i] - '0';
	if (d % 2)
	digit = -digit;
	n = n * 10 + digit;
	f = 1;
	if (e[i + 1] < '0' || e[i + 1] > '9')
	break;
	f = 0;
	}
	i++;
	}
	if (f == 0)
	return (0);
	return (n);
}
