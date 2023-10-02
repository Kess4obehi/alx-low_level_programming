#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: the pointer to be filled with the constant byte
 * @b: the string that will be filled
 * @n: the number of the bytes in the string
 * Return: 0
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
