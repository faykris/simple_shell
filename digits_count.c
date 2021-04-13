#include "holberton.h"

/**
 * digits_count - return of number of digits of a number
 * @count: number of times is a prompt showed
 *
 * Return: digits of a number, or error 0
 */
int digits_count(unsigned int count)
{
	if (count > 0 && count <= 9)
		return (1);
	else if (count > 9 && count <= 99)
		return (2);
	else if (count > 99 && count <= 999)
		return (3);
	else if (count > 999 && count <= 9999)
		return (4);
	else if (count > 9999 && count <= 99999)
		return (5);
	else if (count > 99999 && count <= 999999)
		return (6);
	else if (count > 999999 && count <= 9999999)
		return (7);
	else if (count > 9999999 && count <= 99999999)
		return (8);
	else if (count > 99999999 && count <= 999999999)
		return (9);
	else if (count > 999999999 && count <= UINT_MAX)
		return (10);
	else
		return (0);
}
