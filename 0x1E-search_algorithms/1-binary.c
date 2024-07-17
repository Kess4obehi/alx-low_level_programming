#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x;
	size_t l, r, mid;

	l = 0;
	r = size - 1;
	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		mid = (l + r) / 2;

		printf("Searching in array: ");
		for (x = l; x <= r; x++)
			printf("%i%s", array[x], x == r ? "\n" : ", ");
		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}
	return (-1);
}
