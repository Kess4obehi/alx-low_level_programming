#include "main.h"

/**
 * string_toupper - A function that changes all lowercase letters
 * of a string to uppercase
 * @p: array to be converted to upper case
 * Return: 0
 */

char *string_toupper(char *p)
{
	int k = 0;

	while (p[k] != '\0')
	{
		if (p[k] >= 'a' && p[k] <= 'z')
			p[k] = p[k] - 32;
		k++;
	}
	return (p);
}
