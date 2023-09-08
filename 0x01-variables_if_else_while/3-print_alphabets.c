#include <stdio.h>

/**
 * main - function that  print loer and upper case
 *
 * Return: always o
 */

int main(void)
{
	char i, j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
