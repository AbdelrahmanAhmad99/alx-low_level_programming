#include "main.h"
/**
 * set_bit - sets value.
 * @n: decimal number passed.
 * @index: index position.
 * Return: 1 if it worked.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
	return (-1);
	for (p = 1; index > 0; index--, p *= 2)
	;
	*n += p;
	return (1);





}
