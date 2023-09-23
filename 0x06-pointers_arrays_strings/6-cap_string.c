#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string
 * @str: string to be capitalized
 * Return: 0
 */

char *cap_string(char *str)
{
	int capitalize;

	capitalize = 0;

	while (str[capitalize])
	{
		while (!(str[capitalize] >= 'a' && str[capitalize] <= 'z'))
			capitalize++;
		if (str[capitalize - 1] == ' ' || str[capitalize - 1] == ',' || str[capitalize - 1] == ';' || str[capitalize - 1] == '.' || str[capitalize - 1] == '!' || str[capitalize - 1] == '?' || str[capitalize - 1] || '"' || str[capitalize - 1] == '(' || str[capitalize - 1] == ')' || str[capitalize - 1] == '{' || str[capitalize - 1] == '}' || capitalize == 0 || str[capitalize - 1] == '\t' || str[capitalize - 1] == '\n')
			str[capitalize] -= 32;
		capitalize++;
	}
	return (str);
}
