#include "holberton.h"

/**
 * print_envi - Print enviroment variable
 * @envi: enviroment vairable
 *
 * Return: nothing
 */
void print_envi(char **envi)
{
	int i = 0;

	while (envi[i])
	{
		write(STDERR_FILENO, envi[i], _strlen(envi[i]));
		write(STDERR_FILENO, "\n", 1);
		i++;
	}
}
