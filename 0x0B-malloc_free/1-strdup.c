#include "main.h"

/**
* *_strdup - return a pointer to a newly allocated space in memory
* which contains a copy of the string given as a parameter.
* @str: string
* Return: 0
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *copy;

	if (str == 0)
		return (NULL);

	for (; str[size] != '\0'; size++)
		;

	copy = malloc(size + 1);

	if (copy == 0)
		return (NULL);
	else
	{
		for (; i < size; i++)
			copy[i] = str[i];
	}
	return (copy);
}
