#include "main.h"
#include <stdlib.h>

/**
 * cal_strlen - calculates length of string
 * @str: input string
 * Return: 0
 */
int cal_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * cat_strcpy - copies one string to another
 * @dest: destination string
 * @src: source string
 */

void cat_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

/**
 * argstostr - A function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: arguments
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int total_len, i, pos;
	char *conct;

	if (ac == 0 || av == NULL)
		return (NULL);
	total_len = i = pos = 0;
	for (i = 0; i < ac; i++)
		total_len += cal_strlen(av[i]) + 1;
	conct = malloc(total_len + 1);
	if (conct == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		cat_strcpy(conct + pos, av[i]);
		pos += cal_strlen(av[i]);
		conct[pos] = '\n';
		pos++;
	}
	conct[total_len] = '\0';
	return (conct);
}
