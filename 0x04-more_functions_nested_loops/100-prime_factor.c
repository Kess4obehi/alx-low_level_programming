#include <stdio.h>
#include <math.h>

/**
 * main - function that checks for prime factors
 *
 * Return: 0
 */

int main(void)
{
	long int n;

	long int i, maxprime;

	n = 612852475143;
	maxprime = -1;

	while (n % 2 == 0)
	{
		maxprime = 2;
		n /=2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			maxprime = i;
			n = n / i;
		}
	}
	if (n > 2)
		maxprime = n;
	printf("%ld\n", maxprime);
	return (0);
}
