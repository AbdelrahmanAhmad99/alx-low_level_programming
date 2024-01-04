#include "main.h"
/**
 * _strcmp - compares.
 * @a1: string.
 * @a2: string.
 * Return:  0 if a1.
 * more than 0 a2.
 */
int _strcmp(char *a1, char *a2)
{
	while (*a1 == *a2)
	{
	if (*a1 == '\0')
	{
	return (0);
	}
	a1++;
	a2++;
	}
return (*a1 - *a2);
}
