#include "holberton.h"

/**
 * free_helper - frees pending allocations from memory before exit
 * @av: arguments to be stored
 * @exe: executable name
 * @f_di: first directory path to free
 * @o_di: others directories path to free
 *
 * Return: nothing
 */
void free_helper(char *av, char *exe, char *f_di, char **o_di)
{
	free(exe);
	free(av);
	free(f_di);
	free(o_di);
}
