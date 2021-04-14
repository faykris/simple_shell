#include "holberton.h"

/**
 * search_dir_com - Validate the first argument to search in path directories
 * @arg: command argument to validate
 * @p_dir: PATH directories
 * @exec: executable to be printed on message error
 * @count: number of times line command showed, printed in message error
 *
 * Return: Command argument with their respective directory
 */
char *search_dir_com(char *arg, char **p_dir, char *exec, size_t count)
{
	int i = 0, dig = 0;
	char *str = NULL, *ctr = NULL;
	struct stat st;

	if ((stat(arg, &st) == 0 && arg[0] == '/') ||
		(arg[0] == '.' && arg[1] == '/'))
	{
		str = malloc(sizeof(char) * _strlen(arg) + 1);
		str = _strcpy(str, arg);
		return (str);
	}
	else
	{
		while (p_dir[i])
		{
			str = malloc(sizeof(char) * _strlen(p_dir[i]) + _strlen(arg) + 2);
			str = _strcpy(str, p_dir[i]);
			_strcat(str, "/");
			_strcat(str, arg);
			if (stat(str, &st) == 0)
				return (str);
			free(str);
			i++;
		}
		dig = digits_count(count);
		ctr = malloc(sizeof(char) * dig + 1);
		write(STDERR_FILENO, exec, _strlen(exec));
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, _itoa(count, ctr, 10), dig);
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, arg, _strlen(arg));
		write(STDERR_FILENO, ": not found\n", 13);
		free(ctr);
		arg = "127";
		return (arg);
	}
}
