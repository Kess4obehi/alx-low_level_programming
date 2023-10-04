#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - A function that creates an array of chars
 * And initializes it with a specific char.
 * @size: size of the array
 * @c: character to be assigned
 * Return: pointer to array if successfull, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *)malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
