#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: string to be checked
 * @accept: string to be checked
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	char *p = accept;

	while (*s)
	{
		for (i = 0; p[i]; i++)
		{
			if (*s == p[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
