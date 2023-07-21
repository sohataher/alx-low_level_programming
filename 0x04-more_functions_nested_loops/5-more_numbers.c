#include "main.h"

/**
 *  more_numbers - print the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int a, i, num;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i < 15; i++)
		{
			num = i;
			if (i > 9)
			{
				_putchar(i / 10 + 48);
				num = i % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
