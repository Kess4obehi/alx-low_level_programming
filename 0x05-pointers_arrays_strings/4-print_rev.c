#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse,
 * followed by a new line
 * @s: string to be reversed
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	while (*s != '\0')
	{
		s++;
	}

	for (i = s - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
