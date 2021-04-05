#include "holberton.h"

/**
 * get_line_com - write prompt, get line command and clear characters
 *
 * Return: string array of line command.
 */
char *get_line_com()
{
	int fd = 0, i = 0;
	char *str = NULL;
	ssize_t byt_written = 0;
	size_t num_bytes = 0;

	write(fd, PROMPT, 9);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Usage: Can't write prompt %s\n", PROMPT);
		exit(90);
	}

	byt_written = getline(&str, &num_bytes, stdin);
	if (byt_written == -1)
	{
		dprintf(STDERR_FILENO, "Usage: Can't use getline with %s\n", str);
		free(str);
		exit(91);
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '\n' || str[i] == '\t'|| str[i] == '\v')
		{
			str[i] = ' ';
		}
	}

	return (str);
}
