#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a bytes .
 * @a: buffer to print.
 * @s: bytes of buffer.
 * @l: line .
 * Return: void
 */
void print_line(char *a, int s, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
	if (j <= s)
	printf("%02x", a[l * 10 + j]);
	else
	printf("  ");
	if (j % 2)
	putchar(' ');
	}
	for (k = 0; k <= s; k++)
	{
	if (a[l * 10 + k] > 31 && a[l * 10 + k] < 127)
	putchar(a[l * 10 + k]);
	else
	putchar('.');
	}
}
/**
 * print_buffer - prints.
 * @d: char..
 * @size: size.
 * Return: void.
 */
void print_buffer(char *d, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
	printf("%08x: ", i * 10);
	if (i < size / 10)
	{
	print_line(d, 9, i);
	}
	else
	{
	print_line(d, size % 10 - 1, i);
	}
	putchar('\n');
	}
	if (size == 0)
	putchar('\n');
}
