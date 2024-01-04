#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer.
 */
char *_strcat(char *dest, char *src)
{
	int a, s;

	a = 0;
	s = 0;
	while (dest[a] != '\0')
	a++;
	while (src[s] != '\0')
	{
	dest[a] = src[s];
	s++;
	a++;
	}
	dest[a] = '\0';
return (dest);
}
