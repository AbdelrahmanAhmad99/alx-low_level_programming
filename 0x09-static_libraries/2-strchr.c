#include "main.h"
#include <stdio.h>
/**
 * *_strchr - locates a character,
 * @s: string to search.
 * @q: char to find.
 * Return: a pointer to the first occurrence .
 */
char *_strchr(char *s, char q)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == q)
		{
		return (s - 1);
		}
		if (a == 0)
		{
		return (NULL);
		}
	}
}
