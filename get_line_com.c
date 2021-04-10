#include "holberton.h"

/**
 * get_line_com - write prompt, get line command and clear characters
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

	write(STDIN_FILENO, PROMPT, 9);
	signal(SIGINT, &catch);
	byt_written = getline(&str, &num_bytes, stdin);
	if(byt_written == EOF)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDIN_FILENO, "\n", 1);
			free_helper(str, exec, p_dire[0], p_dire);
			exit(0);
		}
	}
	else if (byt_written == -1)
	{
		write(STDERR_FILENO, "Usage: Can't use getline", 24);
		free_helper(str, exec, p_dire[0], p_dire);
		exit(91);
	}

	return (str);
}
