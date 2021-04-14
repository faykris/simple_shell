#include "holberton.h"

/**
 * print_envi - Print enviroment variable
 *
 * Return: nothing
 */
void print_envi(void)
{
	char **env = environ;
	char *thisEnv = *env;

	while (*env != 0)
	{
		thisEnv = *env;
		write(STDOUT_FILENO, thisEnv, _strlen(thisEnv));
		write(STDOUT_FILENO, "\n", 1);
		env++;
	}
}
