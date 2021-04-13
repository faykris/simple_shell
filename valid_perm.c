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
	if (!is_file(av) || access(av, F_LOCK))
	{
		fprintf(stderr, "%s: %lu: %s: Permission denied\n", exe, count, av);
		free(av);
		return (1);
	}

	return (0);
}
