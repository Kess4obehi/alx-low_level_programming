#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char d;
	char f;

	for (d = 0; d < 10; d++)
	{
		for (f = 'a'; f <= 'z'; f++)
			_putchar(f);
		_putchar('\n');
	}
}
