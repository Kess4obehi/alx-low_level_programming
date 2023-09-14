#include "main.h"

/**
 * print_triangle - A function that prints a triangle
 *
 * @size: value to be checked
 * Return: 0
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i-1; j++)
				_putchar(' ');
			for (k = 0; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
