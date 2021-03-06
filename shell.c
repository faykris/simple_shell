#include "holberton.h"

/**
 * main - prompt and line command loop
 * @argc: number of the arguments
 * @argv: content of the arguments
 *
 * Return: Always 0 on succesfull, -1 on error.
 */
int main(int argc, char **argv)
{
	char *string = NULL, **p_dire = NULL, *exec = NULL, *com = NULL;
	struct stat st;
	size_t count = 0;
	int ind = 0, code = 0;

	signal(SIGINT, &catch);
	exec = _strdup(argv[0]);
	p_dire = get_path_dir(environ);
	while (1)
	{
		count++;
		if (isatty(STDIN_FILENO))
			write(STDIN_FILENO, PROMPT, 10);
		string = get_line_com(p_dire, exec, code);
		argv = assign_args(argv, string);
		ind = select_built_in(argv, exec, p_dire[0], p_dire, count);
		if (ind == 1)
			break;
		else if (ind == -1)
			continue;
		else if (ind == 0)
		{
			free(string);
			continue;
		}	else if (argv[0] != NULL)
		{
			com = _strdup(argv[0]);
			argv[0] = search_dir_com(argv[0], p_dire, exec, count);
			if (stat(argv[0], &st) == 0)
				exec_com_args(argv, p_dire, com, exec, count);
			else
				code = _atoi(argv[0]);
			free(com);
			free(string);
		}
	}	free_helper(string, exec, p_dire[0], p_dire);
	argc = argc;
	if (code != 0)
		exit(code);
	return (EXIT_SUCCESS);
}
