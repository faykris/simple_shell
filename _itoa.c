#include "holberton.h"

/**
 * swap - function to swap two numbers
 * @x: number to be swap
 * @y: number to be swap
 *
 * Return: Integer to string converted
 */
void swap(char *x, char *y)
{
	char t = *x;

	*x = *y;
	*y = t;
}

/**
 * rev_buffer - function to reverse buffer[i..j]
 * @buffer: string of number converted
 * @i: number to be swap
 * @j: number to be swap
 *
 * Return: Integer to string converted
 */
char *rev_buffer(char *buffer, int i, int j)
{
	while (i < j)
	{
		swap(&buffer[i++], &buffer[j--]);
	}

	return (buffer);
}

/**
 * _itoa - Iterative function to implement itoa() function
 * @value: integer value to be converted
 * @buffer: string of number converted
 * @base: base number to be converted
 *
 * Return: Integer to string converted
 */
char *_itoa(int value, char *buffer, int base)
{
	int i = 0, n = 0, r = 0;

	if (base < 2 || base > 32)
	{
		return (buffer);
	}
	n = _abs(value);
	i = 0;
	while (n)
	{
		r = n % base;
		if (r >= 10)
		{
			buffer[i++] = 65 + (r - 10);
		}
		else
		{
			buffer[i++] = 48 + r;
		}
		n = n / base;
	}
	if (i == 0)
	{
		buffer[i++] = '0';
	}
	if (value < 0 && base == 10)
	{
		buffer[i++] = '-';
	}
	buffer[i] = '\0';

	return (rev_buffer(buffer, 0, i - 1));
}
