#include"main.h"
/**
 *_strlen - main return the length of a string.
 *@s: character to get string.
 *Return: length.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
