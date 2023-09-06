#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins
 *to make change for an amount of money.
 *@argc:number of arguments.
 *@argv:pointer to an array of arguments.
 *Return: 0-success.
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1);

		for (int i = 0; i < 5; i++)
		{
			if (money >= cents[i])
			{
				leastcents += money / cents[i];
				money %= cents[i];
				if (money % cents[i] == 0)
					break;
			}
		}
	printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
