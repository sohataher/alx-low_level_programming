#include <unistd.h>
#include "main.h"

/**
 * _putchar: write the character to stdout
 */

int putchar(char c)
{
	return (write(1, &c, 1));
}
