#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @string: the string to be capitalized
 * Return: returns a pointer to the capitalized string
 */

char *cap_string(char *string)
{
	int i;

	i = 0;

	while (string[i])
	{
		while (!(string[i] >= 97 && string[i] <= 122))
			i++;

		if (string[i - 1] == ' ' || string[i - 1] == '\t'
			|| string[i - 1] == '\n' || string[i - 1] == ';'
			|| string[i - 1] == ',' || string[i - 1] == '.'
			|| string[i - 1] == '!' || string[i - 1] == '"'
			|| string[i - 1] == '?' || string[i - 1] == '('
			|| string[i - 1] == ')' || string[i - 1] == '{'
			|| string[i - 1] == '}' || i == 0)

			string[i] -= 32;


	i++;
	}

	return (string);
}
