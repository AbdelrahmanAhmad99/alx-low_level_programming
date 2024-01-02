#include <main.h>

/**
 * _putchar -  main writes the character s to stdout
 * @s: The character to printc.
 * Return: on success 1 .
 * On error, -1 is return.
 */
int _putchar(char s)
{
	return (write(1, &s, 1));
}
