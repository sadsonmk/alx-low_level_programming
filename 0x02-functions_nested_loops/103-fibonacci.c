#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * prints even values of fibonacci
 */

int main(void)
{

	long int first = 1;
	long int second = 2;

	int counter = 0;

	long int next_number = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (next_number <= 4000000)
	{

		if (next_number % 2 == 0)
		{
			printf("%lu, ", next_number);
			counter += next_number;

		}


		first = second;

		second = next_number;

		next_number = first + second;


	}
	printf("%lu\n", counter);

	return (0);

}

