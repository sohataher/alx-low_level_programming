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
	char *c = *s;

	while (*(c + 1) != '\0')
		c++;

	while (c != s)
	{
		temp = *c;
		*c = *s;
		*s = temp;
		c--;
		s++;
	}
}
