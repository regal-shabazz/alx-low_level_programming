#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char alphabt = 'a';

	while (alphabt <= 'z')
	{
		if (alphabt == 'e' || alphabt == 'q')
			alphabt++;
		putchar(alphabt);
		alphabt++;
	}
	putchar('\n');

	return (0);
}
