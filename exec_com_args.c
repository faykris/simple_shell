#include "holberton.h"

/**
 * exec_com_args - create other process and execute command arguments
 * @av: argument list command
 * @p_dire: pointer enviroment
 * @com: command typed by user
 *
 * Return: nothing
 */
void exec_com_args(char **av, char **p_dire, char *com)
{
	int status = 0;
	pid_t child_pid;
	struct stat st;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror(com);
		free_helper(av[0], com, p_dire[0], p_dire);
		exit(2);
	}
	if (child_pid == 0)
	{
		if (execve(av[0], av, NULL) == -1)
		{	
			perror(com);
			free_helper(av[0], com, p_dire[0], p_dire);
			exit(2);
		}
	}
	else
	{
		wait(&status);
		if (stat(av[0], &st) == 0)
		{
			free(av[0]);
		}
	/*	if (!isatty(STDIN_FILENO))
			exit(2); */
	}
}
