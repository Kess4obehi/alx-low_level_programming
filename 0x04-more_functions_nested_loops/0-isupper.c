#include "main.h"


/**
 * _isupper - A function that checks for uppercase character
 * @c: the number to be checked
 *
 * Return: 1 for upper case and 0 if otherwise
 */


int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
