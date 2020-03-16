#include "holberton.h"

/**
 * _puts - prints a string
 * @s: input string to be printed
 *
 * Return: void
 */

void _puts(char *s, int *count)
{
	while (*s != '\0')
	{
		_putchar(*s++);
		*count = *count + 1;
	}
}
