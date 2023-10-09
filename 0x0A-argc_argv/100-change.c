#include <stdlib.h>
#include <stdio.h>

/**
 * main - A program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of argument
 * @argv: An array of pointers to the arguments.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cent, money, denom[5], num_denom, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (0);
	}
	denom[0] = 25;
	denom[1] = 10;
	denom[2] = 5;
	denom[3] = 2;
	denom[4] = 1;

	num_denom = sizeof(denom) / sizeof(denom[0]);
	cent = 0;
	for (i = 0; i < num_denom; i++)
	{
		cent = cent + (money / denom[i]);
		money = money % denom[i];
	}
	printf("%d\n", cent);
	return (0);
}
