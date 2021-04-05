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
	int exit_ind = 0; 
	char *string = NULL, quit[] = "quit";
	char *executable = argv[0];

	while (exit_ind == 0)
	{
		string = get_line_com();

		argv = assign_args(argv, string);

		if (*string == *quit)
		{
			exit_ind = 1;
		}
		else if (argv[0] != NULL)
		{
			exec_com( argv, executable);
		}
	}
	argc = argc;
	free(string);
	return (EXIT_SUCCESS);
}
