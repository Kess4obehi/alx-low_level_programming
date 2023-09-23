#include "main.h"

/**
 * puts2 - A function that prints every other character of a string
 * @str: string to be printed
 * Return: 0
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	for (i = 0; i < len - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
