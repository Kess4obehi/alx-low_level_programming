#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: displays the number of arguments
 * @argv: displays the arrays of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
