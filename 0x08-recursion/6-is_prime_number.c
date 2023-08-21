#include "main.h"

/**
 * is_prime_number - returns 1 if the input is a prime number, 0 otherwise.
 * @i: other numbers to check.
 * @n: The input number.
 * Return: 1 if the input integer is a prime number, 0 otherwise.
 */

int is_prime_helper(int n, int i);
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - check all previous numbers.
 * @i: other numbers to check.
 * @n: The input number.
 * Return: int.
 */

int is_prime_helper(int n, int i)
{
	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (is_prime_helper(n, i + 1));
}
