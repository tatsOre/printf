#include "holberton.h"

/**
 * print_char - prints the next char in a va_list
 * @valist: the working va_list.
 * Return: void.
 */
void print_char(va_list *valist, int p, int *count)
{
	char c;

	c = va_arg(*valist, int);

	if (p == 1)
	{
		_putchar(c);
		*count = *count + 1;
	}
}

/**
 * print_string - prints the next char array in a va_list
 * @valist: the working va_list.
 * Return: void.
 */
void print_string(va_list *valist, int p, int *count)
{
	char *s = va_arg(*valist, char *);

	if (s == NULL)
	{
		_puts("(nil)", count);
		return;
	}

	if (p == 1)
		_puts(s, count);
}

/**
 * print_int - prints the next integer vaue in a va_list
 * @valist: the working va_list.
 * Return: void.
 */
void print_int(va_list *valist, int p, int *count)
{
	int n;

	n = va_arg(*valist, int);

	if (p == 1)
	{
		print_number(n, count);
	}
}
