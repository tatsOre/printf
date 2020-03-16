#include "holberton.h"

/**
 * check_input - check format and arg according requirements.
 * @format: string holding characters and format of arguments to be checked.
 * @original: original list of arguments
 * Return: (0) success, (2) error
 */

int check_input(const char *format, va_list *original)
{
	int i = 0, n_printed = 0;

	while (format[i])
	{
		while (format[i] == '%')
		{
			i++;

			if (format[i] == '%')
				i++;
			else if (format[i]) /* is a format spec? */
				check_for_format
					(format[i], original, 0, n_printed);
			else  /* is null? */
				return (2);
		}

		i++;
	}
	return (0);
}

/**
 * print_output - prints according to the check_input status
 * @format: string holding characters and format of arguments to be checked.
 * @copy: copy of the list of arguments
 * Return: number of charaters printed.
 */

int print_output(const char *format, va_list *copy)
{

	int i = 0, n_printed = 0;

	while (format[i])
	{
		if (format[i] != '%')
			_putchar(format[i]);

		while (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				_putchar('%');
			else
				check_for_format(format[i], copy, 1, n_printed);
		}

		i++;
	}

	return (0);

}
