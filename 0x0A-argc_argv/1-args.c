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
	
	count_args = 0;
	while (argc-- > 1 && argv)
		count_args++;
	printf("%d\n", count_args++);

	return (0);
}
