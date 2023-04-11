#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: args count
 * @av: args vector
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;

	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		i++;
	}

	len = len + ac;

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	k = i = 0;
	while (i < ac)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		if (str[k] == '\0')
			str[k++] = '\n';
		i++;
	}
	return (str);
}
