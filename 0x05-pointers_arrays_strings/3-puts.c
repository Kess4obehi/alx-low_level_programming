#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line, to stdout
 * @str: value to be printed
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
