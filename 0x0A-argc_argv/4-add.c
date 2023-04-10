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
	int counter, total, value;

	if (argc > 1)
	{
		for (counter = 1; counter < argc; counter++)
		{
			value = atoi(argv[counter]);

			if (value == 0)
			{
				printf("Error\n");
				return (1);
			}

			total = total + value;
		}

		printf("%d\n", total);
	}

	else
	{
		printf("%d\n", 0);
	}


	return (0);

}
