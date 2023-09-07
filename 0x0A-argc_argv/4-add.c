#include <stdlib.h>
#include <stdio.h>

/**
* main - print sum of numbers.
* @argc:number of arguments.
* @argv: pointer to an array of arguments.
* Return: 0-success, non-zero-fail.
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *ch;

	while (--argc)
	{
		for (ch = argv[argc]; *ch; ch++)
		{
			if (*ch < '0' || *ch > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
