#include <stdlib.h>
#include <stdio.h>

/**
* main - print mul of 2 numbers.
* @argc:number of arguments.
* @argv: pointer to an array of arguments.
* Return: 0-success, non-zero-fail.
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
