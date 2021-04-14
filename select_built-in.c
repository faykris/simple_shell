#include "holberton.h"

/**
 * select_built_in - Validate built-in commands
 * @av: arguments to be stored
 * @exe: executable name
 * @f_di: first directory path to free
 * @o_di: others directories path to free
 * @count: prompt count
 *
 * Return: list of command arguments, NULL if string is empty.
 */
int select_built_in(char **av, char *exe, char *f_di, char **o_di,
			size_t count)
{
	if (av[0] == NULL)
		return (0);
	else if (_strcmp(av[0], EXIT) == 0)
	{
		return (exit_com(av, exe, f_di, o_di, count));
	}
	else if (_strcmp(av[0], ENVI) == 0)
	{
		if (av[1] == NULL)
		{
			print_envi();
			return (0);
		}
		else
		{
			free(av[0]);
			return (-1);
		}
	}
	return (2);
}
