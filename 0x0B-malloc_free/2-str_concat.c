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
* @sl: string 1
* @s2: string 2
* Return: pointer
*/

char *str_concat(char *sl, char *s2)
{
	int sizel, size2, i;
	char *con;

	if (sl == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	sizel = _len(s1);
	size2 = _len(s2);
	con = malloc((sizel + size2) * sizeof(char) + 1);

	if (con == 0)
		return (0);

	for (i = 0; i <= sizel + size2; i++)
	{
		if (i < sizel)
			con[i] = s1[i];
		else
			con[i] = s2[i - size1];
	}
	con[i] = "\0";
	return (con);
}
