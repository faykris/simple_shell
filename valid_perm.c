#include "holberton.h"

/**
 * valid_perm - valid if argument is not a file or not have permissions
 * @av: argument lcommand
 * @exe: executable name of a shell
 * @count: line command counter
 *
 * Return: 0 is a valid file, otherwise 1
 */
int valid_perm(char *av, char *exe, size_t count)
{
	int dig = 0;
	char *ctr = NULL;

	if (!is_file(av) || access(av, F_LOCK))
	{
		dig = digits_count(count);
		ctr = malloc(sizeof(char) * dig + 1);
		write(STDERR_FILENO, exe, _strlen(exe));
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, _itoa(count, ctr, 10), dig);
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, av, _strlen(av));
		write(STDERR_FILENO, ": Permission denied\n", 21);
		free(ctr);
		free(av);
		return (1);
	}

	return (0);
}
