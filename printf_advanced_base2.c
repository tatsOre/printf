#include "holberton.h"

/**
 * print_uhex - takes an unsigned int and sees if prints it as lowercase hexa.
 * @valist: the working va_list.
 * @p: print indicator. 0 just to get value, 1 for printing the value.
 * @count: bytes counting.
 * Return: void.
 */
void print_uhex(va_list *valist, int p, int *count)
{
	unsigned int n = va_arg(*valist, unsigned int);

	if (p == 1)
	{
		p_uhex(n, count);
	}
}

/**
 * p_uhex - prints an unsigned int converted to hexadecimal in lowercase.
 * @n: unsigned int to be converted and printed.
 * @count: bytes counting.
 * Return: void.
 */
void p_uhex(unsigned int n, int *count)
{
	/*Create an array big enough to store an unsigned int as hex*/
	int hexNum[sizeof(unsigned int) * 2];
	int i;
	char num = '#';

	i = 0;

	if (n == 0)
	{
		hexNum[i] = 0;
		i++;
	}
	while (n > 0)
	{
		hexNum[i] = n % 16;
		n = n / 16;
		i++;
	}
	i--;

	while (i >= 0)
	{
		num = hexNum[i--];
		if (num > 9)
			num = num - 10 + 'a';
		else
			num = num + '0';

		_putchar(num);
		*count = *count + 1;
	}
}

/**
 * print_UHEX - takes an unsigned int and sees if prints it as uppercase hexa.
 * @valist: the working va_list.
 * @p: print indicator. 0 just to get value, 1 for printing the value.
 * @count: bytes counting.
 * Return: void.
 */
void print_UHEX(va_list *valist, int p, int *count)
{
	unsigned int n = va_arg(*valist, unsigned int);

	if (p == 1)
	{
		p_UHEX(n, count);
	}
}

/**
 * p_UHEX - prints an unsigned int converted to hexadecimal in uppercase.
 * @n: unsigned int to be converted and printed.
 * @count: bytes counting.
 * Return: void.
 */
void p_UHEX(unsigned int n, int *count)
{
	/*Create an array big enough to store an unsigned int as hex*/
	int hexNum[sizeof(unsigned int) * 2];
	int i;
	char num = '#';

	i = 0;

	if (n == 0)
	{
		hexNum[i] = 0;
		i++;
	}
	while (n > 0)
	{
		hexNum[i] = n % 16;
		n = n / 16;
		i++;
	}
	i--;

	while (i >= 0)
	{
		num = hexNum[i--];
		if (num > 9)
			num = num - 10 + 'A';
		else
			num = num + '0';

		_putchar(num);
		*count = *count + 1;
	}
}
