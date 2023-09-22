#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: the array to be reversed
 * @n: he number of element in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, b;

	for (i = 0; i < n--; i++)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
