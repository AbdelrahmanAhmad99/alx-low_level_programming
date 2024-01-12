#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates a substring.
 * @haystack: string to search.
 * @a: substring.
 * Return: pointer to the beginning.
 */
char *_strstr(char *haystack, char *a)
{
	int d, j;

	for (d = 0; haystack[d] != '\0'; d++)
	{
	for (j = 0; a[j] != '\0'; j++)
	{
	if (haystack[d + j] != a[j])
	break;
	}
	if (!a[j])
	return (&haystack[d]);
	}
return (NULL);
}
