#include "holberton.h"

/**
 * print_number - prints an integer
 * @n: input number to be printed
 * @count: count of bytes printed.
 *
 * Return: void
 */

void print_number(int n, int *count)
{
	int res = n;
	int fact = 1;
	int sign = 1;

	if (n < 0)
	{
		sign *= -1;
		_putchar('-');
		*count = *count + 1;
	}

	while (res / 10)
	{
		fact *= 10;
		res /= 10;
	}
	while (fact)
	{
		res = n / fact;
		_putchar((res * sign) + '0');
		*count = *count + 1;
		n = n - (res * fact);
		fact /= 10;
	}
}

/**
 * p_uint - prints an unsigned integer
 * @n: input number to be printed
 * @count: count of bytes printed.
 *
 * Return: void
 */

void p_uint(unsigned int n, int *count)
{
	unsigned int res = n;
	unsigned int fact = 1;
	unsigned int sign = 1;

	while (res / 10)
	{
		fact *= 10;
		res /= 10;
	}
	while (fact)
	{
		res = n / fact;
		_putchar((res * sign) + '0');
		*count = *count + 1;
		n = n - (res * fact);
		fact /= 10;
	}
}
