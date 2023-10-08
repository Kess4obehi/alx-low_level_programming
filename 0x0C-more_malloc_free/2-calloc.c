#include <stdlib.h>
#include "main.h"

/**
 * *_elementset - fills memory with a constant byte
 * @p: memory area to be filled
 * @c: char to copy
 * @n: number of time to copy c
 * Return: 0
 */

char *_elementset(char *p, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		p[i] = c;
	return (p);
}

/**
 * _calloc - A function that allocates memory for an array, using malloc.
 * @nmemb: elements of array
 * @size: bytes of memory to be allocated
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	ptr = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	_elementset(ptr, 0, nmemb * size);
	return (ptr);
}
