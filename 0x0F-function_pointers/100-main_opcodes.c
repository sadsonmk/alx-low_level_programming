#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: array of arguments - argument vector
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, num_bytes;

	char *main_args;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_args = (char *) main;

	i = 0;

	while (i < num_bytes)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", main_args[i]);
			break;
		}

		printf("%02hhx", main_args[i]);
		i++;
	}

	return (0);
}
