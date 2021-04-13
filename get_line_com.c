#include "holberton.h"

/**
 * get_line_com - write prompt and get line command
 * @p_dire: pointer directories to do free
 * @exec: executable to do free
 *
 * Return: string array of line command.
 */
char *get_line_com(char **p_dire, char *exec)
{
	char *str = NULL;
	ssize_t byt_written = 0;
	size_t num_bytes = 0;

	byt_written = getline(&str, &num_bytes, stdin);
	if (byt_written == EOF)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDIN_FILENO, "\n", 1);
			free_helper(str, exec, p_dire[0], p_dire);
			exit(0);
		}
		free_helper(str, exec, p_dire[0], p_dire);
		exit(0);
	}
	if (!isatty(STDIN_FILENO) && val_only_spa(str) == 0)
		exit(0);
	return (str);
}
