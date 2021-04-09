#include "holberton.h"

/**
 * main - prompt and line command loop
 * @argc: number of the arguments
 * @argv: content of the arguments
 * @envi: enviroment variable
 *
 * Return: Always 0 on succesfull, -1 on error.
 */
int main(int argc, char **argv, char **envi)
{
	char *string = NULL, **p_dire = NULL, *exec = NULL, *com = NULL;
	struct stat st;
	unsigned int count = 0;

	
	exec = _strdup(argv[0]);
	p_dire = get_path_dir(envi);
	while (1)
	{
		count++;
		string = get_line_com(p_dire, exec);
		argv = assign_args(argv, string);
		if (_strcmp(string, EXIT) == 0)
			break;
		if (argv[0] != NULL)
		{	
			com = strdup(argv[0]);
			argv[0] = search_dir_com(argv[0], p_dire, exec, count);
			if (stat(argv[0], &st) == 0)
				exec_com_args(argv, p_dire, com);
			free(com);
		}
		if (!isatty(STDIN_FILENO))
		{	
			break;
		}
		free(string);
	}
	free(exec);
	free(string);
	free(p_dire[0]);
	free(p_dire);
	argc = argc;
	
	return (EXIT_SUCCESS);
}



