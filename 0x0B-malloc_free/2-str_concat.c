#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 * str_concat - A function that will mix tow strings
 *
 * @s1: the first string
 * @s2: the second string that will be added
 *
 * Description: it is just a task will make tow one
 *
 * Return: A pointer to a newly allocated string
 */

char *str_concat(char *s1, char *s2)
{
	char *taymaa;
	int len1;
	int len2;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	/**** callculate length of input strings******/
	len1 = strlen(s1);
	len2 = strlen(s2);


	taymaa = malloc(len1 + len2 + 1);

	if (taymaa == NULL)
	{
		return (NULL);
	}

	strcpy(taymaa, s1);
	strcat(taymaa, s2);

	return (taymaa);
}
