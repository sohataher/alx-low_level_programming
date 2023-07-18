#include "main.h"

/**
 * print_alphabet - print the alphapet using _putchar
 *
 * Return: Always 0 (success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
