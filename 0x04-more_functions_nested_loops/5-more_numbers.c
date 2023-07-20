#include "main.h"

/**
 *  more_numbers - print the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i < 10)
			_putchar('i');
		else
		{
			_putchar('i / 10');
			_putchar('i % 10');
		}
	}
	_putchar('\n');
}
