#include "main.h"

int real_prime(int n, int i);


/**
 * is_prime_number - A function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: the value to be checked
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - A funtion that calculatesthe prime number
 * @n: the value to be checked
 * @i: iterator
 * Return: 0
 */

int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, i - 1));
}
