#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, mulitiplies two numbers
 * @argc: arguments count
 * @argv: argument vector
 * Return: result of multiplication
 */

int main(int argc, char *argv[])
{

	unsigned long int total, num1, num2;

	char *endptr;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = strtol(argv[1], &endptr, 10);
	num2 = strtol(argv[2], &endptr, 10);

	if (*endptr != '\0')
	{
		printf("Error\n");
		exit(98);
	}

	total = num1 * num2;

	printf("%lu\n", total);

	return (0);

}


