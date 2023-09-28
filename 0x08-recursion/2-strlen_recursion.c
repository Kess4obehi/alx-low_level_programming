#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: string len to be checked
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
