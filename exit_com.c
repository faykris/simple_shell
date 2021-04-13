#include "holberton.h"
/**
 * exit_com - Validate exit built-in
 * @av: arguments to be stored
 * @exe: executable name
 * @f_di: first directory path to free
 * @o_di: others directories path to free
 * @count: prompt count
 *
 * Return: 1 whe only exit argument, on error -1 and exit code typed
 */
int exit_com(char **av, char *exe, char *f_di, char **o_di, size_t count)
{
	int e = 0;

	if (av[1] == NULL)
		return (1);
	else if (_atoi(av[1]) != 0)
	{
		e = _atoi(av[1]);
		free_helper(av[0], exe, f_di, o_di);
		exit(e);
	}
	else
	{
	/*	dig = digits_count(count); */
		fprintf(stderr, "%s: %lu: %s: Illegal number: %s\n",
				exe, count, av[0], av[1]);

		if (!isatty(STDIN_FILENO))
		{
			free_helper(av[0], exe, f_di, o_di);
			exit(2);
		}
		else
			free(av[0]);
		return (-1);
	}
}
