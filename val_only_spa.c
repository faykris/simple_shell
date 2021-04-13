#include "holberton.h"

/**
 * val_only_spa - validate if the command line give only spaces
 * @str: pointer directories to do free
 *
 * Return: 0 if the stirng have only spaces, otherwise 1
 */
int val_only_spa(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}
