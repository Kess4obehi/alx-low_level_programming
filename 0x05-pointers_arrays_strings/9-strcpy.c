#include "main.h"

/**
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