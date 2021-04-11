#include "holberton.h"
/**
 * exit_com - Validate exit built-in
 * @av: arguments to be stored
 * @exe: executable name
 * @f_di: first directory path to free
 * @o_di: others directories path to free
 * @count: prompt count
 *
 * Return: 
 */
int exit_com(char **av, char *exe, char *f_di, char **o_di, size_t count)
{
	int e = 0, dig = 0;
	char *ctr = NULL;

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
		dig = digits_count(count);
		ctr = malloc(sizeof(char) * dig + 1);
		write(STDERR_FILENO, exe, _strlen(exe));
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, _itoa(count, ctr, 10), dig);
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, av[0],_strlen(av[0]));
		write(STDERR_FILENO, ": Illegal number: ", 18);
		write(STDERR_FILENO, av[1],_strlen(av[1]));
		write(STDERR_FILENO, "\n", 1);
		free(ctr);
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
