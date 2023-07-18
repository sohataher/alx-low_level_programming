#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:Numbers of base 10 using putchar
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = 48;

	while (num >= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
