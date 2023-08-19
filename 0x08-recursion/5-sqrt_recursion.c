#include "main.h"

/**
 *  _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: input number
 *
 * Return: natural square root of a number.
 */

int sqroot(int num, int r);
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}

/**
 * sqroot - find  the square root.
 *
 * @num: input number
 * @r: square root
 *
 * Return: square root of a number.
 */

int sqroot(int num, int r)
{
	if (r * r == num)
		return (r);
	else if (r * r < num)
		return (sqroot(num, r + 1));
	else
		return (-1);
}
