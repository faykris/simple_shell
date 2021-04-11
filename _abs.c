#include "holberton.h"

/**
 * _abs - returns absolute value of a number
 * @n: integer number
 *
 * Return: Value of i, on error-1 is returned
 */
int _abs(int n)
{
	int i;

	if (n < 0)
	{
		i = n * -1;
	}
	else
	{
		i = n;
	}
	return (i);
}
