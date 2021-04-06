#include "holberton.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string pointer
 * @s2: string pointer
 * Return: Int type result
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
