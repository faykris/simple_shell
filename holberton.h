#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* Used standard input libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

/* Prompt text macro*/
#define PROMPT "#cisfun$ "

/* Print prompt, get line command and clear characters */
char *get_line_com();

/* Separate string to differents arguments*/
char **assign_args(char **av, char *str);

/* create other process and execute command arguments */
void exec_com(char **av, char *exec);

/* returns the length of a string */
int _strlen(char *s);

#endif
