#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector - array pointer to args
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int x, y;

	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	operator = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '%' && y == 0) ||
		(*operator == '/' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(operator)(x, y));

	return (0);
}
