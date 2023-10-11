#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function given
 * as a parameter on each element of an array.
 * @array: array
 * @size: number of elements in the array
 * @action: pointer to a function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
