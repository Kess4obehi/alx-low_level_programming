#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: where the bytes will be copied into
 * @src: where the bytes will be copied from
 * @n: the number of bytes to be copied
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
