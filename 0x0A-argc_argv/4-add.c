#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector for the strings passed
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int counter, total, value;

	total = 0;

	if (argc > 1)
	{
		for (counter = 1; counter < argc; counter++)
		{

			if (!atoi(argv[counter]))
			{
				printf("Error\n");
				return (1);
			}


			value = atoi(argv[counter]);

			if (value < 0)
			{
				printf("%d\n", 0);
				return (0);
			}

			total = total + value;
		}

		printf("%d\n", total);
	}

	else if (argc == 1)
	{
		printf("%d\n", 0);
	}


	return (0);

}
