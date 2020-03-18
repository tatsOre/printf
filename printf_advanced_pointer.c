#include "holberton.h"
#include <stdio.h>
/**
 * print_pointer - checks for a pointer in va_list and see if prints it.
 * @valist: the working va_list.
 * @p: print indicator. 0 just to get value, 1 for printing the value.
 * @count: bytes counting.
 * Return: void.
 */

void print_pointer(va_list *valist, int p, int *count)
{
	char *ptr = va_arg(*valist, char *);

	if (p == 1)
	{
		if (ptr != NULL)
		{
			_putchar('0');
			_putchar('x');
			*count = *count + 2;
			p_ptr(ptr, count);
			return;
		}

		_puts("(nil)", count);
	}
}

/**
 * p_ptr - prints a pointer in hex format.
 * @pointer: pointer to be printed.
 * @count: bytes counting.
 * Return: void.
 */
void p_ptr(char *pointer, int *count)
{
	int i, found_nz_byte = 0;
	unsigned char c = 0;
	my_pointer ptr;

	ptr.ptr = pointer;
	for (i = sizeof(char *) - 1; i >= 0 ; i--)
	{
		c = ptr.c[i];

		c = (ptr.c[i] >> 4) & 0xf;
		if (found_nz_byte == 0 && c != 0)
			found_nz_byte = 1;

		if (found_nz_byte == 1)
		{
			if (c > 9)
				c = c - 10 + 'a';
			else
				c = c + '0';
			_putchar(c);
			*count = *count + 1;
		}

		c = ptr.c[i] & 0xf;
		if (found_nz_byte == 0 && c != 0)
			found_nz_byte = 1;

		if (found_nz_byte == 1)
		{
			if (c > 9)
				c = c - 10 + 'a';
			else
				c = c + '0';
			_putchar(c);
			*count = *count + 1;
		}
	}
}
