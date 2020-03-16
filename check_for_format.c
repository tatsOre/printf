#include "holberton.h"

/**
 * check_for_format - checks format if belongs to a special char to be printed.
 * @format: input char which could describe the format in which next arg is printed.
 * @p: printing selection. If 0 no printing in stdout is done. If 1 print.
 * @valist: arguments list to be formated.
 * @count: count of bytes if printed.
 *
 * Return: 0 if no errors in format are found, 1 if format is not the correct.
 */

int check_for_format(char format, va_list *valist, int p, int *count)
{
	int i = 0;

	s_format special[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int}
	};

	while (i < 4)
	{
		if (format == *special[i].c)
		{
			special[i].f(valist, p, count);
			return (0);
		}
	}

	return (1);
}
