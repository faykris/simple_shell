#include "holberton.h"

/**
 * select_built_in - Validate built-in commands
 * @av: arguments to be stored
 * @exe: executable name
 * @f_di: first directory path to free
 * @o_di: others directories path to free
 * @envi: enviroment variable
 *
 * Return: list of command arguments, NULL if string is empty.
 */
int select_built_in(char **av, char *exe, char *f_di, char **o_di, char **env)
{
	int e = 0;
	if (av[0] == NULL)
		return (0);
	else if (_strcmp(av[0], EXIT) == 0)
	{
		if (av[1] == NULL)
		{
			return (1);
		}
		else if (atoi(av[1]) != 0)
		{
			e = atoi(av[1]);
			free_helper(av[0], exe, f_di, o_di);
			exit(e);
		}
		else
		{
			perror(exe);   /* exit = 2 */
			return (-1);
		}
	}
	else if (_strcmp(av[0], ENVI) == 0)
	{
		print_envi(env);
		free(av[0]);
		return 0;
	}
	return (2);
}
