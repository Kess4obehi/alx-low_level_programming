#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: the string to be checked
 * @accept: the string to be checked
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}
	return (len);
}
