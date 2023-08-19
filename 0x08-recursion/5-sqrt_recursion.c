#include "main.h"

/**
 *  _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: input number
 *
 * Return: natural square root of a number.
 */

int sqrt(int num, int r);
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - find  the square root.
 *
 * @num: input number
 * @r: square root
 *
 * Return: square root of a number.
 */

int sqrt(int num, int r)
{
	if (r * r == num)
		return (r);
	else if (r * r < num)
		return (sqrt(num, r + 1));
	else
		return (-1);
}
