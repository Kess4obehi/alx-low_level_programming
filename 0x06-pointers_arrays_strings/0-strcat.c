#include "main.h"

/**
 * _strcat - A function that concatenates two strings.
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
