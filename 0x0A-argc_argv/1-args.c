#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector for the strings passed
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int count_args;


	if (argc > 1 && argv)
	{
		for(count_args = 1; count_args < argc; count_args++);
		
		printf("%d\n", count_args - 1);
		
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
