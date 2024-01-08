#include "main.h"
/**
 * print_chessboard - print.
 * @x: two dimension array.
 */
void print_chessboard(char (*x)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
		_putchar(x[i][j]);
	}
	_putchar('\n');
	}
}
