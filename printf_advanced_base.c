#include "holberton.h"

/**
 * print_bin - takes an unsigned int and sees if prints it as binary.
 * @valist: the working va_list.
 * @p: print indicator. 0 just to get value, 1 for printing the value.
 * @count: bytes counting.
 * Return: void.
 */
void print_bin(va_list *valist, int p, int *count)
{
	unsigned int n = va_arg(*valist, unsigned int);

	if (p == 1)
	{
		p_bin(n, count);
	}
}

/**
 * p_bin - prints an unsigned int converted to binary.
 * @n: unsigned int to be converted and printed.
 * @count: bytes counting.
 * Return: void.
 */
void p_bin(unsigned int n, int *count)
{
	/*Create an array big enough to store an unsigned int binary*/
	int binNum[sizeof(unsigned int) * 8];
	int i;

	i = 0;

	if (n == 0)
	{
		binNum[i] = 0;
		i++;
	}
	while (n > 0)
	{
		binNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	i--;

	while (i >= 0)
	{
		_putchar(binNum[i--] + '0');
		*count = *count + 1;
	}
}

/**
 * print_uint - takes an unsigned int and sees if prints it as binary.
 * @valist: the working va_list.
 * @p: print indicator. 0 just to get value, 1 for printing the value.
 * @count: bytes counting.
 * Return: void.
 */
void print_uint(va_list *valist, int p, int *count)
{
	unsigned int n = va_arg(*valist, unsigned int);

	if (p == 1)
	{
		p_uint(n, count);
	}
}


/**
 * print_octal - takes an unsigned int and sees if prints it as octal.
 * @valist: the working va_list.
 * @p: print indicator. 0 just to get value, 1 for printing the value.
 * @count: bytes counting.
 * Return: void.
 */
void print_octal(va_list *valist, int p, int *count)
{
	unsigned int n = va_arg(*valist, unsigned int);

	if (p == 1)
	{
		p_octal(n, count);
	}
}

/**
 * p_octal - prints an unsigned int converted to octal.
 * @n: unsigned int to be converted and printed.
 * @count: bytes counting.
 * Return: void.
 */
void p_octal(unsigned int n, int *count)
{
	/*Create an array big enough to store an unsigned int binary*/
	int octalNum[sizeof(unsigned int) * 3];
	int i;

	i = 0;

	if (n == 0)
	{
		octalNum[i] = 0;
		i++;
	}

	while (n > 0)
	{
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}
	i--;

	while (i >= 0)
	{
		_putchar(octalNum[i--] + '0');
		*count = *count + 1;
	}
}
