#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* Used standard input libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

/* Prompt text macro*/
#define PROMPT "#cisfun$ "
/* exit command text macro*/
#define EXIT "exit"
/* executable text macro*/
#define EXECUT argv[0]

/* Print prompt, get line command and clear characters */
char *get_line_com(char **p_dire);
/* Separate string to differents arguments*/
char **assign_args(char **av, char *str);
/* create other process and execute command arguments */
void exec_com_args(char **av, char *exec, char **p_dire);
/* Get PATH and separates their directories */
char **get_path_dir(char **envi);
/* Validate the first argument to search in path directories */
char *search_dir_com(char *arg, char **p_dir);

/* Compares two strings */
int _strcmp(char *s1, char *s2);
/* Copy a string to another */
char *_strcpy(char *dest, char *src);
/* Returns the length of a string */
size_t _strlen(const char *s);
/* Concatenates two strings*/
char *_strcat(char *dest, char *src);

#endif
