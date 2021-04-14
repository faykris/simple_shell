#include "holberton.h"

/**
 * print_envi - Print enviroment variable
 *
 * Return: nothing
 */
void print_envi(void)
{
	int i = 0;
	char **env = environ;

	while (env[i])
	{
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}
}
