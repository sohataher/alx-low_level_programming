#include "main.h"

/**
 *  more_numbers - print the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int a, i;

	for (a = 0; a < 10; a++)
	{
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
}
