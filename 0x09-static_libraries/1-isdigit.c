#include "main.h"

/**
 *  _isdigit - checks for digit
 *
 * @c: input of function
 *
 * Return: (1) if 'c' is a digit
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
