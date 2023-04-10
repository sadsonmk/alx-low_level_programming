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

	int result, x, y;

	if (argc > 2)
	{

		x = atoi(argv[1]);

		y = atoi(argv[2]);

		result = x * y;

		printf("%d\n", result);
	}

	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
