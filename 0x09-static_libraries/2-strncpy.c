#include "main.h"
/**
 * _strncpy - copies a string pra.
 * @dest: destination.
 * @src: source.
 * @a: number of bytes.
 * Return: pointer.
 */
char *_strncpy(char *dest, char *src, int a)
{
	int x;

	x = 0;
	while (src[x] != '\0' && x < a)
	{
	dest[x] = src[x];
	x++;
	}
	while (x < a)
	{
	dest[x] = '\0';
	x++;
	}
return (dest);
}
