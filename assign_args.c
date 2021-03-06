#include "holberton.h"

/**
 * assign_args - separate string to differents arguments
 * @av: arguments to be stored
 * @str: command line string
 *
 * Return: list of command arguments, NULL if string is empty.
 */
char **assign_args(char **av, char *str)
{
	char *token = NULL, delimiter[] = " \n\t\v\r";
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	token = strtok(str, delimiter);
	for (i = 0; token != NULL; i++)
	{
		av[i] = token;
		token = strtok(NULL, delimiter);
	}
	av[i] = NULL;

	return (av);
}
