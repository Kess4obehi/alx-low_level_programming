#include <stdlib.h>
#include "main.h"

/**
 * array_range - A function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Retun: 0
 */

int *array_range(int min, int max)
{
	int *ptr, size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);
	for (i = min; i < size; i++)
		*(ptr + i) = min++;
	return (ptr);
}
