#include "main.h"
/**
 * *_strspn - gets the length of a prefix.
 * @a: string to evaluate
 * @accept: string containing the list of characters to match in a.
 * Return: the number of bytes.
 */
unsigned int _strspn(char *a, char *accept)
{
	int i, j, f, flag;

	f = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
	flag = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
		if (a[i] == accept[j])
		{
		f++;
		flag = 1;
		}
	}
	if (flag == 0)
	{
	return (f);
	}
	}
	return (0);
}
