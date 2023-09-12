#include "main.h"


/**
 * print_last_digit - A function that prints the last digit of a number
 *
 * @n: number to be checked
 * Return: Always 0
 */


int print_last_digit(int n)
{
	int f;

	f = n % 10;
	if (n < 0)
		f = -f;
	_putchar(f + '0');
	return (f);
}
