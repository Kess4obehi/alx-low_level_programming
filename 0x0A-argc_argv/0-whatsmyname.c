#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name, followed by a new line.
 * @argc: displays numbeer of arguments
 * @argv: displays array of argument
 * Return: 0
 */


int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
