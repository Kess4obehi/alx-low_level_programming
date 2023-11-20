#include <stdio.h>

/**
 * main - A function that prints first 50 Fibonacci numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, n;

	n = 50;

	long long int a = 1, b = 2, c;

	printf("%lld, %lld", a, b);

	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %lld", c);

		a = b;
		b = c;
	}
	printf("\n");
}
