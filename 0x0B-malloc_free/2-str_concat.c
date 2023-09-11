#include "main.h"

/**
* _len - find string length.
* @s: string
* Return: int
*/

int _len(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
* *str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *con;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	size1 = _len(s1);
	size2 = _len(s2);
	con = malloc((size1 + size2) * sizeof(char) + 1);

	if (con == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			con[i] = s1[i];
		else
			con[i] = s2[i - size1];
	}
	con[i] = "\0";
	return (con);
}
