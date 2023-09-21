#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest: string to be conatenated
 * @src: string to be concatenated
 * @n: number of string to be concatenated
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
