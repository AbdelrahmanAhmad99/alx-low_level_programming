#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates.
 * passwords.
 * Return: always 0 .
 */
int main(void)
{
	int pass[100];

	int i, s, d;

	s = 0;
	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
	pass[i] = rand() % 78;
	s += (pass[i] + '0');
	putchar(pass[i] + '0');
	if ((2772 - s) - '0' < 78)
	{
	d = 2772 - s - '0';
	s += d;
	putchar(d + '0');
	break;
	}
	}
	return (0);
}
