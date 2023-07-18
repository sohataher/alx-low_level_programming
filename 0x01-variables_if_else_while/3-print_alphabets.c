#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: play the alphabet game
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a', Ch = 'A';

	/*print a to z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A to Z*/
	while (Ch <= 'Z')
	{
		putchar(Ch);
		Ch++;
	}
	putchar('\n');

	return (0);
}
