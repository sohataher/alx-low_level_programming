#include "main.h"

/**
 * main - Entry point
 *
 * Description: print using putchar prototype
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < sizeof(str); ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
