#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that takes a copy from a pointer to
 * string and then allocate memory to it
 *
 * @str: a string to be copied
 *
 * Return: the new allocated string which is copy
 */

char *_strdup(char *str)
{

	char *newpo;
	int leng;


	if (str == NULL)
		return (NULL);

	leng = strlen(str);

	newpo = malloc(sizeof(char) * leng + 1);

	if (newpo == NULL)
		return (NULL);

	strcpy(newpo, str);

	return (newpo);
	free(newpo);

}

