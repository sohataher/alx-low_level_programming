#include <stdio.h>

/**
 *
 * main -Entry point
 *
 * description: using sizeof to print the size of various types.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	printf("Size of a char: %u byte(s)", sizeof(char));
	printf("Size of a int: %u byte(s)", sizeof(int));
	printf("Size of a long int: %u byte(s)", sizeof(long int));
	printf("Size of a long long int: %u byte(s)", sizeof(long long int));
	printf("Size of a float: %u byte(s)", sizeof(float));
	return (0);
}
