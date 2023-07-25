#include "main.h"

/**
 *  print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string parameter
 *
 * Return: Nothing
 */

void print_rev(char *s)
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
