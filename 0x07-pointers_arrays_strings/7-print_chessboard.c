#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard
 * @a: the characters  in the chessboard to be printed
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
