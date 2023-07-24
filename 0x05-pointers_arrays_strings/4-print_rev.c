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
	while (*(s + 1) != '\0')
		s++;

	while (*s != '\0')
	{
		_putchar(*s + 0);
		s--;
	}
	_putchar('\n');
}
