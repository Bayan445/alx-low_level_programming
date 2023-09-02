#include "main.h"

/**
 * main - Entry point
 * Descreption: checks if the character is capital or not
 * Return: always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';
	if (_isupper(c))
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return (0);
}
