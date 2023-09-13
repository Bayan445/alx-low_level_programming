#include "main.h"
/**
 * _strchr - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @c: the desired value
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)

		return (&s[i]);
	}

	return (NULL);
}
