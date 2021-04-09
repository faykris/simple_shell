#include "holberton.h"

/**
 * get_path_dir - get PATH and separates their directories
 * @envi: enviroment value
 *
 * Return: list of PATH directories, exit if PATH is not found
 */
char **get_path_dir(char **envi)
{
	char *path = NULL, **var = NULL, **pdir = NULL;
	char *token = NULL, delimiter[] = ":";
	int i = 0, j = 0;

	for (var = envi; *var != NULL; ++var)
	{
		if (var[0][0] == 'P' && var[0][1] == 'A' && 
			var[0][2] == 'T' && var[0][3] == 'H')
		{
			path = malloc(sizeof(char) * _strlen(var[0]));
			for (i = 5; var[0][i] != '\0'; j++, i++)
			{
				path[j] = var[0][i];
			}
			path[j] = '\0';
			break;
		}
	}
	if (var == NULL)
	{
		dprintf(STDIN_FILENO,"Usage: Can't read the PATH line");
		exit(91);
	}
	pdir = malloc(sizeof(char) * _strlen(path) + j);
	token = strtok(path, delimiter);
	if(token != NULL)
	{
		for (j = 0; token != NULL; j++)
		{
			pdir[j] = token;
			token = strtok(NULL, delimiter);
		}
		pdir[j] = NULL; 
	}
	return (pdir);
}
