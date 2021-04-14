#include "holberton.h"

/**
 * print_envi - Print enviroment variable
 * @exec: executable file
 * @count: prompt count
 *
 * Return: nothing
 */
void print_envi(size_t count, char *exec)
{
	int i = 0, dig;
	char **env = environ, *ctr = NULL;
	struct stat st;

	if (stat("/usr/bin/env", &st) != 0)
	{
		dig = digits_count(count);
		ctr = malloc(sizeof(char) * dig + 1);
		write(STDERR_FILENO, exec, _strlen(exec));
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, _itoa(count, ctr, 10), dig);
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, ENVI, _strlen(ENVI));
		write(STDERR_FILENO, ": not found\n", 13);
		free(ctr);
		return;
	}

	while (env[i])
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
	if (i == 0)
		write(STDOUT_FILENO, "\n", 1);
}
