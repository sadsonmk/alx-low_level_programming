#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector for the strings passed
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int cents, i, num_coins = 0;

	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d/n", 0);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (cents >= coins[i])
			{
				num_coins += cents / coins[i];
			}

			cents = cents % coins[i];
		}

	}

	printf("%d\n", num_coins);

	return (0);
}
