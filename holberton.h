#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/* Used standard input libraries */
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/* exit command text macro*/
#define EXIT "exit"
/* Prompt text macro*/
#define PROMPT "#cisfun$ "

/* Separate string to differents arguments*/
char **assign_args(char **av, char *str);
/* Catch SIGINT in get_line_com */
void catch(int sig);
/* create other process and execute command arguments */
void exec_com_args(char **av, char **p_dire, char *exec);
/* Print prompt, get line command and clear characters */
char *get_line_com(char **p_dire, char *exec);
/* Get PATH and separates their directories */
char **get_path_dir(char **envi);
/* Validate the first argument to search in path directories */
char *search_dir_com(char *arg, char **p_dir, char *exec, unsigned int count);

/* Concatenates two strings*/
char *_strcat(char *dest, char *src);
/* Compares two strings */
int _strcmp(char *s1, char *s2);
/* Copy a string to another */
char *_strcpy(char *dest, char *src);
/* Returns a pointer to a newly allocated space in memory*/
char *_strdup(char *str);
/* Returns the length of a string */
size_t _strlen(const char *s);

#endif
