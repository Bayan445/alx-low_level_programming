#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	for (e = 0; e < n && src[e] != '\0'; e++)
	{
		dest[e] = src[e];
	}

	while (e < n)
	{
		dest[e] = '\0';
		e++;
	}

	return (dest);
}

