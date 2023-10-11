#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - A function that searches for an integer.
 * @array: array
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
