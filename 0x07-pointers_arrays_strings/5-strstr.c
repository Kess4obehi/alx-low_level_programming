#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: the main string to be checked
 * @needle: the substring to be checked
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*n != 0 && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
