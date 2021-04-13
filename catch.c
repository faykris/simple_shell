#include "holberton.h"

/**
 * catch - catch SIGINT in get_line_com
 * @sig: unused SIGINT value
 *
 * Return: nothing
 */
void catch(int sig)
{
	sig = sig;
	write(STDIN_FILENO, "\n", 1);
	write(STDIN_FILENO, PROMPT, 10);
}
