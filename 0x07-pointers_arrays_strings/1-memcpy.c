#include "main.h"
/**
 * _memcpy - fill a block of memory with a specific value
 * @n: starting address of memory to be filled
 * @src: the desired value
 * @dest: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e;

	for (e = 0; e < n; e++)
	{
		dest[e] = src[e];
	}

	return (dest);
}
