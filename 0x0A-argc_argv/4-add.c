#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - A program that adds positive numbers.
 * @argc: displays the number of arguments
 * @argv: displays the arrays of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;


	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *end;
		long num = strtol(argv[i], &end, 10);

		if (*end != '\0' || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += (int)num;
	}
	printf("%d\n", sum);
	return (0);
}
