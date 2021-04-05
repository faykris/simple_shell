#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * @s: integer pointer variable
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
