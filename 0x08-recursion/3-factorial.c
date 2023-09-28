#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number
 * @n: the factorial value to be returned
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
