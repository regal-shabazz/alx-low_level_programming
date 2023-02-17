#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char tebahpla = 'z';

	while (tebahpla >= 'a')
	{
		putchar(tebahpla);
		tebahpla--;
	}
	putchar('\n');

	return (0);
}
