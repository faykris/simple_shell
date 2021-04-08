#include "holberton.h"

/**
 * _strlen - function that returns the length of a string
 * @s: integer pointer variable
 * Return: len
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s[len])
	{
		len++;	
	}
	len++;
	return (len);
}
