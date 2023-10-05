#include <stdio.h>

/**
 * main - the entry point for the program
 *
 * Return: always 0.
 */

int main(void)
{
	char pe;
	char ba;

	for (pe = 'a'; pe <= 'z'; pe++)
	{
		putchar (pe);
	}
	for (ba = 'A'; ba <= 'Z'; ba++)
	{
		putchar (ba);
	}
	putchar ('\n');

	return (0);
}
