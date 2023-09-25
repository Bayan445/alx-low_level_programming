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

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2  = "";
	}

	taymaa = malloc(strlen(s1) + strlen(s2) + 1);

	if (taymaa == NULL)
	{
		return (NULL);
	}

	strcpy(taymaa, s1);
	strcat(taymaa, s2);

	return (taymaa);
}
