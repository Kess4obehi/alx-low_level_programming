#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: string to be checked for the occurence of a character
 * @c: the string to be checked
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
