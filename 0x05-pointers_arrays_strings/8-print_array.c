#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers
 * @a: pointer to the array to be printed
 * @n: number of the element of the array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
