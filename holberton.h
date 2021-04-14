#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#define _GNU_SOURCE
/* Used standard input libraries */
#include <limits.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/* Exit command text macro*/
#define EXIT "exit"
/* enviroment command text macro */
#define ENVI "env"
/* Prompt text macro*/
#define PROMPT "#cshell~$ "
/* Global variable enviroment*/
extern char **environ;

/* Separate string to differents arguments*/
char **assign_args(char **av, char *str);
/* Catch SIGINT in get_line_com */
void catch(int sig);
/* Return of number of digits of a number */
int digits_count(unsigned int count);
/* Create other process and execute command arguments */
void exec_com_args(char **av, char **p_dire, char *com, char *exec,
					size_t count);
/* Validate exit built-in*/
int exit_com(char **av, char *exe, char *f_di, char **o_di, size_t count);
/* Frees pending allocations from memory before exit */
void free_helper(char *av, char *exe, char *f_di, char **o_di);
/* Print prompt, get line command and clear characters */
char *get_line_com(char **p_dire, char *exec);
/* Get PATH and separates their directories */
char **get_path_dir(char **envi);
/* Validates if argument is a file or not */
int is_file(char *path);
/* Print enviroment variable */
void print_envi(char **envi);
/* Validate the first argument to search in path directories */
char *search_dir_com(char *arg, char **p_dir, char *exec, size_t count);
/* Validate built-in commands */
int select_built_in(char **av, char *exe, char *f_di, char **o_di, char **env,
					size_t count);
/* validate if the command line give only spaces */
int val_only_spa(char *str);
/* validate if argument is not a file or not have permissions */
int valid_perm(char *av, char *exe, size_t count);

/* Returns absolute value of a number */
int _abs(int n);
/* Iterative function to implement atoi() function */
long _atoi(const char *s);
/* Iterative function to implement itoa() function */
char *_itoa(int value, char *buffer, int base);
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
