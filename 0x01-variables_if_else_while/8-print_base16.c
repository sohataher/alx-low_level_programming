#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: play the alphabet game
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
			digit = 96;
		digit++;
	}
	putchar('\n');

	return (0);
}
