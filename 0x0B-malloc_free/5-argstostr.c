#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - function concatenates all the arguments of your program.
 * @ac: pointer
 * @av: altura
 *
 * REturn: result
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, cont;
	char *result, *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		new = av[i];
		while (*new)
		{
			cont++;
			new++;
		}
		cont++;
		i++;
	}
	result = malloc (cont + 1);
	while (i < ac)
	{
		new = av[i];
		while (*new)
		{
			result[j] = *new;
			new++;
			j++;
		}
		result[j] = '\n';
		j++;
		i++;
	}
	result[cont + 1] = '\0';
	return (result);
}
