#include "main.h"


/**
 * _isdigit - A function that checks for a digit
 * @c: number to be checked
 *
 * Return: returns 1 if its a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= 0) && (c > 10))
		return (1);
	else
		return (0);
}
