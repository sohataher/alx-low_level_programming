#include "main.h"

/**
 *  puts_half - prints half of a string, followed by a new line
 *
 * @str: string parameter
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
