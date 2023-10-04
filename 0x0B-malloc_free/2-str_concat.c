#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - A function that concatenates two strings.
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*calculate length of both strings*/
	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	/*Allocate memory for the concatenate string*/
	concatenate = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (concatenate == NULL)
		return (NULL);
	len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		concatenate[len1] = s1[len1];
		len1++;
	}
	while (s2[len2] != '\0')
	{
		concatenate[len1] = s2[len2];
		len1++, len2++;
	}
	concatenate[len1] = '\0';
	return (concatenate);
}
