#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: letter to be computed
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i < n; i++)
		{
			for (j = 1; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
