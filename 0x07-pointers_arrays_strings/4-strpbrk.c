#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @x: string to search
 * @accept: stringcontaining.
 * Return: pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *x, char *accept)
{
	int i, j;

	for (i = 0; *x != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*x == accept[j])
			{
			return (x);
			}
		}
		x++;
	}
return (NULL);
}
