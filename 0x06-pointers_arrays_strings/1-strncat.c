#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int e, b;

	e = 0;
	b = 0;
	while (dest[e] != '\0')
	{
		e++;
	}

	while (src[b] <= n && src[b] != '\0')
	{
		dest[e] = src[b];
		e++;
		b++;
	}

	dest[e] = '\0';
	return (dest);
}

