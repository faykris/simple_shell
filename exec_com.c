#include "holberton.h"

/**
 * exec_com - create other process and execute command arguments
 * @av: argument list command
 * @exec: executable file string
 *
 * Return: nothing
 */

void exec_com(char **av, char *exec)
{
	int status = 0;
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror(exec);
	}
	if (child_pid == 0)
	{
		if (execve(av[0], av, NULL) == -1)
		{
			perror(exec);
		}
	}
	else
	{
		wait(&status);
	}
}
