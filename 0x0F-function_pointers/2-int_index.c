#include "function_pointers.h"
/**
 * int_index - earches for an int.
 * @array: array to search.
 * @size: size.
 * @cmp: pointer to the comparing.
 * Return: index of the first element.
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	return (i);
	}
	}
	return (-1);
}
