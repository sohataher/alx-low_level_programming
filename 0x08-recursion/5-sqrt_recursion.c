#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number
 * Return: natural square root of a number.
 */

int _sqrt_recursion(int n)
{
	int r = 1;

	if (r * r == num)
		return (r);
	else if (r * r < num)
	{
		r++;
		return (_sqrt_recursion(n));
	}
	else
		return (-1);
}
