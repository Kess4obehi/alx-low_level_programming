#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: the character to be checked
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
