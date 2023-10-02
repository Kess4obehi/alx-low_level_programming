#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints the number of arguments passed into it.
 * @argc: displays the number of arguments
 * @argv: displays the arrays of the argument
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
