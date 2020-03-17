#include "holberton.h"

/**
 * print_string_reverse - prints a string in reverse.
 * @valist: the working va_list.
 * @p: print indicator. 0 just to get value, 1 for printing the value.
 * @count: bytes counting.
 * Return: void.
 */
void print_string_reverse(va_list *valist, int p, int *count)
{
	char *s = va_arg(*valist, char *);

	if (p == 1)
	{
		if (s == NULL)
		{
			_puts("(null)", count);
			return;
		}
		else
		{
			print_rev(s, count);
		}
	}
}

/**
 * print_rev - prints a string, in reverse.
 * @s: string input.
 * @count: bytes counting.
 * Return: a reversed string.
 */

void print_rev(char *s, int *count)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	while (length >= 0)
	{
		_putchar(s[length]);
		*count = *count + 1;
		length--;
	}
}
