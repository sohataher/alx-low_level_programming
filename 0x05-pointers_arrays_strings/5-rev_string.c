#include "main.h"

/**
 *  rev_string - reverses a string
 *
 * @s: string parameter
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	char temp;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;

	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}
