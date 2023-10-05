#include <stdio.h>

/**
 * main - the entry point for the program
 *
 * Return: always 0.
 */

int main(void)
{
	char MB;

	for (MB = 'a'; MB <= 'z'; MB++)
	{
		if (MB != 'q' && MB != 'e')

			putchar (MB);
	}

	putchar ('\n');


	return (0);
}
