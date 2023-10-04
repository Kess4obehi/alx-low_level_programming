#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: char to be allocated to new memory
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ptr;
	int len, i;

	if (str == 0)
		return (0);
	/*calculate length of string*/
	len = 0;
	while (str[len] != '\0')
		len++;
	/* Allocate memory for the new string using malloc*/
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	/*where (len+1) is the length of new string plus the null character*/
	if (ptr == NULL)
		return (NULL);
	/*copy the input string to the newly allocated string*/
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	return (ptr);
}
