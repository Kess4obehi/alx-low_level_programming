#include "main.h"


/**
 * _abs - A  function that computes the absolute value of an integer
 *
 * @n: number to be checked
 * Return: Always 0
 */


int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
