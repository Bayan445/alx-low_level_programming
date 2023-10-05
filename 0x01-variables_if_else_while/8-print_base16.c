#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char moh;
	char bar;

	for (moh = '0'; moh <= '9'; moh++)
	{
		putchar (moh);
	}

	for (bar = 'a'; bar <= 'f'; bar++)
	{
		putchar (bar);
	}
	putchar ('\n');

	return (0);

}

