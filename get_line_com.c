#include "holberton.h"

/**
 * get_line_com - write prompt, get line command and clear characters
 *
 * Return: string array of line command.
 */
char *get_line_com()
{
	int fd = 0;
	char *str = NULL;
	ssize_t byt_written = 0;
	size_t num_bytes = 0;

	write(fd, PROMPT, 9);

	byt_written = getline(&str, &num_bytes, stdin);
	if(byt_written == EOF)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDIN_FILENO, "\n", 1);
			free(str);
			exit(0);
		}
	}
	else if (byt_written == -1)
	{
		dprintf(STDERR_FILENO, "Usage: Can't use getline with %s\n", str);
		free(str);
		exit(91);
	}

	return (str);
}
