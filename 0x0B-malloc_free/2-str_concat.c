#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatnates 2 strings with malloc
 *
 * @s1: the first string parameter
 * @s2: the second string that will be copied after the first one
 *
 * Return: it returns a pointer to char that we allocate memory to it
 */

char *str_concat(char *s1, char *s2)
{
	char *newv;
	int i, e, lens1, lens2;

	/*checking if parameters are empty*/
	if (s1 == NULL)
		return (NULL);
	if (s2 == NULL)
		return (NULL);

	/*allocating right amount of memory*/
	lens1 = strlen(s1);
	lens2 = strlen(s2);
	newv = malloc(sizeof(char) * (lens1 + lens2 + 1));

	if (newv == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
	{
		newv[i] = s1[i];
	}

	for (e = 0; e < lens2; e++, i++)
	{
		newv[i] = s2[e];
	}

	newv[i] = '\0';


	return (newv);
	free(newv);

}
