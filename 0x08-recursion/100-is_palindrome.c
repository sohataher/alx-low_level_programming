#include "main.h"

/**
 * get_length - calculate the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int get_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_length(s + 1));
}

/**
 * is_palindrome_recursive - helper function checks if a string is a palindrome
 * @s: The input string.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The input string.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
bool is_palindrome(char *s)
{
	int length = get_length(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
