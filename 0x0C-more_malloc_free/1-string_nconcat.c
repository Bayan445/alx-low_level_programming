#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pois;
	int e, b;
	unsigned int r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	r = strlen(s2);
	b = strlen(s1);
	pois = malloc(sizeof(char) * (b + n + 1));

	if (pois == NULL)
		return (NULL);

	/*copying s1 elements to new allocated pointer*/
	for (e = 0; e < b; e++)
	{
		if (s1[e] != '\0')
			pois[e] = s1[e];
	}

	/*copying s2 elements to new allocated pointer*/
	for (r = 0; r < n && s2[r] != '\0'; r++)
	{
		pois[e] = s2[r];
		e++;
	}

	pois[e] = '\0';

	return (pois);

}

