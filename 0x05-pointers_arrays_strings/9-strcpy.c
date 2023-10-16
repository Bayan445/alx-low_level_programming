#include "main.h"
#include <string.h>

/**
 * *_strcpy - a function that copies string
 *
 * @dest: will copy to it
 * @src: will copy it
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';


	return (dest);
}
