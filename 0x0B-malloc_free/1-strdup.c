#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 *
 */

char *_strdup(char *str)
{

	char *newpo;
	int leng;


	if (str == NULL)
		return (NULL);

	leng = strlen(str);

	newpo = malloc(sizeof(char) * leng);

	if (newpo == NULL)
		return (NULL);

	strcpy(newpo, str);

	return (newpo);
	free(newpo);

}

