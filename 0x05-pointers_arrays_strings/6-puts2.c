#include "main.h"
/**
 * puts2 - prints one char.
 * followed by a new line
 * @str: string.
 */
void puts2(char *str)
{
	int l, i;

	l = 0;
	while (str[l] != '\0')
	{
	l++;
	}
	for (i = 0; i < l; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
