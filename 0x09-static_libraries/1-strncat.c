#include "main.h"

/**
 * *_strncat - concatenates two strings.
 *
 * @dest: pointer to the destination
 * @src: pointer to the source
 * @n: most number of bytes
 *
 * Return: pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i++] = src[j];
	dest[i++] = '\0';
	return (dest);
}
