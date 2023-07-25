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
	int i;

	while (*(s + 1) != '\0')
		s++;

	for (i = 0; *s != '\0'; i++)
	{
		s[i] = *s;
		s--;
	}
}
