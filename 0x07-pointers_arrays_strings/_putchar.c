#include <unistd.h>
/**
 * _putchar - writes character a.
 * @a: The character to print.
 * Return:1 .
 * On error, -1 is returned.
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
