#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - main function that checks for the last digits of numbers
 *
 * Return: always 0
 */

int main(void)
{
	int n;
	int m;
	m = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if ((m < 6) && (m !=0))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	else
		printf("Last digit of %d is %d and is 0\n", n, m);
	/* your code goes there */
	return (0);
}
