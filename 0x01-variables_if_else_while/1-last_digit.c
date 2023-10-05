#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry point of the program 
 *
 * Return: always 0.
 */

int main(void)
{
	int n;
	int taymaa;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	taymaa = n % 10;

	if (taymaa > 5)
	{
		printf("the last digit of %d is %d and is greater than 5 \n", n, taymaa);
	}
	if (taymaa == 0)
	{
		printf("the last digit of %d is %d and is 0\n", n, taymaa);
	}
	if (taymaa < 6 && taymaa != 0)
	{
		printf("the last digit of %d is %d and is less than 6 and not 0 \n", n, taymaa);
	}

	return (0);
}
