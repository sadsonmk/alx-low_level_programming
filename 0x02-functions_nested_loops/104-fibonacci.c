#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int first = 1;
	unsigned long int second = 2;

	int counter = 3;

	unsigned long int next_number = first + second;

	printf("%lu, ", first);
	printf("%lu, ", second);

	while (counter <= 98)
	{

		if (counter != 98)
		{
			printf("%lu, ", next_number);

		}
		else
		{
			printf("%lu\n", next_number);
		}

		first = second;

		second = next_number;

		next_number = first + second;

		counter++;
	}

	return (0);

}

