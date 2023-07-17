#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: The last digit
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int digit = n % 10;

	if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	if (digit > 5)
		printf("Last digit of %i is %i \and is greater than 5\n", n, digit);
	if (digit < 6 && digit != 0)
		printf("Last digit of %i is %i \\and is less than 6 and not 0\n", n, digit);
	return (0);
}
