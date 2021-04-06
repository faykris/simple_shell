#include "holberton.h"

/**
 * _strcpy - function that copy a string to another
 * @dest: name integer of array
 * @src: number elements of array
 * Return: char pointer value
 */
char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;
	return (a);
}
