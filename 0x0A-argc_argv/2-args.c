#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector for the strings passed
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int counter;

	counter = 0;

	if (argc > 0)
	{

		while (argc > counter)
		{
			printf("%s\n", argv[counter]);

			counter++;
		}
	}

	return (0);
}

