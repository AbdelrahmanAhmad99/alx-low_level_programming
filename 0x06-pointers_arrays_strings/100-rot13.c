#include "main.h"
/**
 * rot13 - encodes a string.
 * @d: string to be encoded.
 * Return: the result.
 */
char *rot13(char *d)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; d[i] != '\0'; i++)
	{
	for (j = 0; a[j] != '\0'; j++)
	{
	if (d[i] == a[j])
	{
	d[i] = b[j];
	break;
	}
	}
	}
return (d);
}
