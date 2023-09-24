#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * _strdup - the function i will serach so i know what it does
 *
 * @str: i will modify this idk
 *
 */

char *_strdup(char *str)
{

	char *yenistr;

	if (str == NULL)
	{
		return (NULL);
	}
	yenistr = malloc(sizeof(char) * strlen(str));

	if (yenistr == NULL)
	{
		return (NULL);
	}

	strcpy(yenistr, str);

	return (yenistr);

}

