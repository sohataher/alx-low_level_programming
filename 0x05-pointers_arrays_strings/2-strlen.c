#include "main.h"

/**
 *  _strlen - returns the length of a string
 *
 * @s: string parameter
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
		count++;
	return (count);
}
