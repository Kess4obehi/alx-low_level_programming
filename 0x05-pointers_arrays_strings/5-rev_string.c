#include "main.h"

/**
 * rev_string - A function that reverses a string
 * @s: string to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char rev = s[0];

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (i = 0; i < len / 2; i++)
	{
		rev = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = rev;
	}
}
