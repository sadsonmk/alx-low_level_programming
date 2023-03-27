#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random valid passwords
 * for the program 101-crackme.
 * Return: Always 0 (success)
 *
 */


int main(void)
{

	int password[80];
	int x, y, sum;

	sum = 0;

	srand(time(NULL));

	for (x = 0; x < 80; x++)
	{
		password[x] = rand() % 60;
		sum += (password[x] + '0');
		_putchar(password[x] + '0');

		if ((2000 - sum) - '0' < 60)
		{
			y = 2000 - sum - '0';

			sum += y
			_putchar(y + '0');
			break;

		}
	}

	return (0);

}
