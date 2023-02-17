#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point for program
 *
 * Description: The program reads the value for n and
 * checks if it is positive, negative or zero
 *
 * int n -  Declares an integer variable
 *
 * if/else - Sets conditions for program
 *
 * Return: Always 0 (success)
 */

/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	};

	return (0);
}
