#include "search_algos.h"

/**
 * jump_search - A function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: If the value is not present or the array is null, -1.
 * Otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time it is compared in the array.
 * Uses the square root of the arrray size as the jump step.
 *
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	step = sqrt(size);

	for (i = jump = 0; jump < size;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}
	printf("Value found between indexes [%ld] = [%ld]", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n" i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
