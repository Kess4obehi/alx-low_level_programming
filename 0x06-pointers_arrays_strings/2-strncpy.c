#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: string to be copied
 * @src: string to be copied
 * @n: number of times to be copied
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
