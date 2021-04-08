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
	char *string = NULL, **p_dire = NULL;

	p_dire = get_path_dir(envi);
	while (1)
	{
		string = get_line_com(p_dire);
		argv = assign_args(argv, string);
		if (_strcmp(string, EXIT) == 0)
		{
			break;
		}
		else if (argv[0] != NULL)
		{
			argv[0] = search_dir_com(argv[0], p_dire);
			exec_com_args(argv, EXECUT, p_dire);
		}
		if (!isatty(STDIN_FILENO))
		{	
			break;
		}
		free(string);
	}
	free(string);
	free(p_dire[0]);
	free(p_dire);
	argc = argc;
	
	return (EXIT_SUCCESS);
}
