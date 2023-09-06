#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character to stdout
 * @c: printed character
 * Return: 1 (success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
