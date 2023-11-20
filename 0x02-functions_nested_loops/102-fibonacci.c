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

	unsigned long a = 1, b = 2, c;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= n; i++)
	{
		c = a + b;
		printf(", %lu", c);

		a = b;
		b = c;
	}
	printf("\n");
}
