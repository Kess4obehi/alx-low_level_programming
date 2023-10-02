#include "main.h"

/**
 * _isalpha - A function that checks for alphabetic character
 * @c: the character to be checked
 * Return: returns 1 if it an alphabet or 0 if otherwise
 */


int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
