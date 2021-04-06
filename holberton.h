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
/* exit command text macro*/
#define EXIT "exit"

/* Print prompt, get line command and clear characters */
char *get_line_com();
/* Separate string to differents arguments*/
char **assign_args(char **av, char *str);
/* create other process and execute command arguments */
void exec_com(char **av, char *exec);

/* Compares two strings */
int _strcmp(char *s1, char *s2);
/* Copy a string to another */
char *_strcpy(char *dest, char *src);
/* Returns the length of a string */
int _strlen(char *s);

#endif
