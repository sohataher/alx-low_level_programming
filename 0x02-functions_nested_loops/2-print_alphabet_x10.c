#include "main.h"

/**
 * print_alphabet_x10 - print the alphapet 10 times using _putchar
 *
 * Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	int ch, l;

	for (l = 0; l < 10; l++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
