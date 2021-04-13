#include "holberton.h"

/**
 * is_file - Validates if argument is a file or not
 * @path: path of 
 *
 * Return: 1 if file, otherwise 0
 */
int is_file(char *path)
{
    struct stat path_stat;
    stat(path, &path_stat);
    return (S_ISREG(path_stat.st_mode));
}
