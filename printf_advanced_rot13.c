#include "holberton.h"

/**
 * print_string_reverse - prints a string in reverse.
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
 * rot13 - Function that encode a string in rot13
 * @str: strings character to change
 * Return: encripted string
 */

void rot13(char *s, int *count)
{
	int ch, c;
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char abc13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (ch = 0 ; s[ch] != '\0' ; ch++)
	{
		for (c = 0 ; abc[c] != '\0' ; c++)
		{
			if (s[ch] == abc[c])
			{
				s[ch] = abc13[c];
				_putchar(s[ch]);
				*count = *count + 1;
				break;
			}
		}
	}
}
