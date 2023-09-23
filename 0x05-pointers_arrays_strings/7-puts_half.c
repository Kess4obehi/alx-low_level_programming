#include "main.h"

/**
 * puts_half - A function that prints half of a string, followed by a new line
 * @str: the string to be printed
 * Return: 0
 */

void puts_half(char *str)
{
	int len = 0, i = 0, n;

	for (; str[i] != 0; i++)
		len++;
	if (len % 2 == 1)
		n = (len - 1) / 2;
	else
		n = len / 2;
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
