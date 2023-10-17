#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
        int e, b;

	e = 0;
	b = 0;

	while (dest[e] != '\0')
	{
		e++;
        }

	while (src[b] != '\0')
	{
		dest[e] = src[b];
		e++;
		b++;
	}

	dest[e] = '\0';


        return (dest);
}

