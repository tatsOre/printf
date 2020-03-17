#include "holberton.h"

/**
 * print_string_rot13 - prints a string in rot13.
 * @valist: the working va_list.
 * @p: print indicator. 0 just to get value, 1 for printing the value.
 * @count: bytes counting.
 * Return: void.
 */
void print_string_rot13(va_list *valist, int p, int *count)
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
			rot13(s, count);
		}
	}
}

/**
 * rot13 - Function that encode and prints a string in rot13.
 * @s: strings character to change.
 * @count: bytes counting.
 * Return: void.
 */
void rot13(char *s, int *count)
{
	int ch = 0;

	while (s[ch])
	{
		if (s[ch] >= 'A' && s[ch] <= 'Z')
		{
			if (s[ch] >= 'A' && s[ch] <= 'M')
				_putchar(s[ch] + 13);
			else
				_putchar(s[ch] - 13);

			*count = *count + 1;
		}

		else if (s[ch] >= 'a' && s[ch] <= 'z')
		{
			if (s[ch] >= 'a' && s[ch] <= 'm')
				_putchar(s[ch] + 13);
			else
				_putchar(s[ch] - 13);
			*count = *count + 1;
		}
		else
		{
			_putchar(s[ch]);
			*count = *count + 1;
		}
		ch++;
	}
}
