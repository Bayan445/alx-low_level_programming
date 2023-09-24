#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - the function i will serach so i know what it does
 *
 * Description - here we the sunction copy and allocate a string
 *
 * @str: a variable we will make copy from it
 *
 * Return: a copy from a pointer to string
 */

char *_strdup(char *str)
{

	char *yenistr;

	if (str == NULL)
	{
		return (NULL);
	}

	/* the +1 here is for the null terminator /0 at the end of string*/

	yenistr = malloc(sizeof(char) * strlen(str) + 1);

	if (yenistr == NULL)
	{
		return (NULL);
	}

	strcpy(yenistr, str);

	return (yenistr);

}

