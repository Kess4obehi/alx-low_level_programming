#include <stdio.h>

/**
 * main - sums up multiples of 3 and 5
 *
 * Returns: 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%d", sum);
	return (0);
}
