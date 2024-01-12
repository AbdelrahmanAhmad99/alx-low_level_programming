#include <unistd.h>

/**
 * _putchar -  main writes the character s to stdout
 * @c: The character to printc.
 * Return: on success 1 .
 * On error, -1 is return.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
