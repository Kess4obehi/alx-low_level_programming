#include <stdio.h>

/**
 * main - A program that prints all the numbers of base 16 in lowercase
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (j = 'a'; j < 'g'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
