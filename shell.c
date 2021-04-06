#include "holberton.h"

/**
 * main - prompt and line command loop
 * @argc: number of the arguments
 * @argv: content of the arguments
 * @envi: enviroment variable
 *
 * Return: Always 0 on succesfull, -1 on error.
 */
int main(int argc, char **argv)
{
	char *string = NULL;
	char *executable = argv[0];

	while (1)
	{
		string = get_line_com();

		argv = assign_args(argv, string);

		if (_strcmp(string, EXIT) == 0)
		{
			free(string);
			break;
		}
		else if (argv[0] != NULL)
		{
			exec_com( argv, executable);
		}
		if (!isatty(STDIN_FILENO))
		{
			free(string);
			break;
		}
		free(string);
	}
	argc = argc;
	
	return (EXIT_SUCCESS);
}
