#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i < j && i != j)
			{
				putchar(i + '0');
				putchar(j + '0');
				if ((i + j) != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
