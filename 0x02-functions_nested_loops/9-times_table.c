#include "main.h"

/**
 * times_table - A function that prints the 9 times table
 *
 * Return: always 0
 */

void times_table(void)
{
	int i, k;

	for (i = 0; i < 9; i++)
	{
		k = i * 9;
		if (i != 0)
		{
			_putchar(',');
		        _putchar(' ');
			if (k < 10)
			{
				_putchar(' ');
			}
		}
		if (k >= 10)
		{
			_putchar((k / 10) + '0');
		}
			_putchar((k % 10) + '0');
	}
		_putchar('\n');
}
