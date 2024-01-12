#include "main.h"
/**
 * *_memcpy - memory area
 * @dest: destination.
 * @src: memory area to copy from
 * @a: number of bytes.
 * Return: pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int a)
{
	unsigned int i;

	for (i = 0; i < a; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
