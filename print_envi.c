#include "holberton.h"

/**
 * print_envi - Print enviroment variable
 * @envi: enviroment vairable
 *
 * Return: nothing
 */
void print_envi(char **envi)
{
	char **env = envi;
	char *thisEnv = *env;

	while (*env != 0)
	{
		thisEnv = *env;
		write(STDOUT_FILENO, thisEnv, _strlen(thisEnv));
		write(STDOUT_FILENO, "\n", 1);
		env++;
	}
}
