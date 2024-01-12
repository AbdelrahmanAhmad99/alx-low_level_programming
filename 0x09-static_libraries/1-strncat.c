#include "main.h"
/**
 * _strncat - main concatenates a bytes.
 * @dest: destination.
 * @src: source.
 * @a: number of bytes.
 * Return: a pointer.
 */
char *_strncat(char *dest, char *src, int a)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	i++;
	while (src[j] != '\0' && j < a)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
dest[i] = '\0';
return (dest);
}
