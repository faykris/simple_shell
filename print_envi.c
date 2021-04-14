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
		fprintf(stdout, "%s\n", thisEnv);
		env++;
	}
}
