#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
