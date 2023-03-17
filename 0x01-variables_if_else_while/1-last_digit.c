#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * if else statements - check the last digit whether its positive or negative
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;
	if (rem > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, rem);
	}
	else if (rem == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rem);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);
	}

	/* your code goes there */
	return (0);
}
