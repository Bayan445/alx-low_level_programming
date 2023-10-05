#include <stdio.h>

/**
 * main - a function that prints alphabets in reverse
 *
 * Return: always 0.
 */
int main(void)
{
	char mob;

	for (mob = 'z'; mob >= 'a'; mob--)
	{
		putchar (mob);
	}
	putchar ('\n');

	return (0);
}
