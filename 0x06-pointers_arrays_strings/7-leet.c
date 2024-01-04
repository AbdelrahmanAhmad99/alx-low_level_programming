#include "main.h"
/**
 * leet - a string .
 * @x: string.
 * Return: the resulting.
 */
char *leet(char *x)
{
	int i, j;

	char *a = "aAeEoOtTlL";

	char *b = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
	if (x[i] == a[j])
	{
	x[i] = b[j];
	}
	}
	}
return (x);
}
