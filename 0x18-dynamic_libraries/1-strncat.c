#include "main.h"
/**
 * _strncat - concatenates n bytes.
 * @dest: destination string
 * @src: source string.
 * @n: number of bytes of str.
 * Return: a pointer.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
