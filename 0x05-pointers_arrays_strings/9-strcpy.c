#include "main.h"

/**
<<<<<<< HEAD
 * _strcpy - function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 *Return: 0
*/

char *_strcpy(char *dest, char *src)
{
int len = 0, i;

while (src[len] != '\0')
{
    len++;
}
for (i = 0; i < len; i++)
    {
    dest[i] = src[i];
    }
dest[i] = '\0';
return (dest);

}
=======
 * _strcpy - A function that copies the string pointed to by src
 * @dest: destination of the string to be copied to
 * @src: source from where the string will be copied from
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';

	return (dest);
}
>>>>>>> a9b10ab9713b5cc7ac5d5665365e1aa747ae1ca7
