#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit.
 * @n: number.
 * @index: index starting from 0 .
 * Return: Value of bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
	return (-1);
	hold = n >> index;
	return (hold & 1);





}
