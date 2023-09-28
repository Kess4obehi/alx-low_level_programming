#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - A function that returns the
 * natural square root of a number
 * @n: the number whose square root is to be calculated
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - A funtion to find the square root of a number
 * @n: the number whose square root should be calculated
 * @i: iterator
 * Return: 0
 */

int real_sqrt_recursion(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}
