#include "main.h"

/**
 * print_to_98 - A function that prints natural numbers
 *
 * Return: always 0
 */


void print_to_98(int n)
{
	if (n < 98)
	{
		int i;
		for (i = n; i <= 98; i++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			 _putchar(i + '0');
			 _putchar(',');
		         _putchar(' ');
		}
	}
	_putchar('\n');

		
