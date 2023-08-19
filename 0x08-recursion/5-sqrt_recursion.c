#include "main.h"

/**
 * sqrt_helper - Recursive helper function to find the square root of a number.
 * @n: The input number.
 * @r: The current value being checked as a potential square root.
 * Return: The square root of 'n' if found, -1 otherwise.
 */
int sqrt_helper(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r < n)
		return (sqrt_helper(n, r + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 * Return: The natural square root of the number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_helper(n, 1));
}
