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

	long int counter = second;

	long int next_number = first + second;

	while (next_number <= 4000000)
	{

		if (next_number % 2 == 0)
		{
			counter += next_number;

		}


		first = second;

		second = next_number;

		next_number = first + second;


	}
	printf("%lu\n", counter);

	return (0);

}

