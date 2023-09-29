#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 *  @s: the string to be counted
 *  Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}

/**
 * check_palindrome - helper function for is_palindrome
 * @s: the string to be checked
 * @start: the beginning of the string
 * @end: the end of the string
 * Return: 0
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] == s[end])
		return (check_palindrome(s, start + 1, end - 1));
	return (0);
}

/**
 * is_palindrome - checks if the string is a palindrome
 * @s: the string to be checked
 * Return: 0
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen_recursion(s);
	if (i <= 1)
		return (1);
	return (check_palindrome(s, 0, i - 1));
}
