#include <unistd.h>
#include "holberton.h"

/**
 * handle_errors - Print error messages
 * @error: error message to print
 *
 * Return: Nothing.
 */
void handle_errors(int error)
{
	char *error1 = "warning: conversion lacks type at end of format";
	char *error2 = "warning: spurious trailing % in format";

	if (error == 1)
		_puts_error(error1);
	if (error == 2)
		_puts_error(error2);
}


/**
 * _puts_error - prints a string
 * @s: input string to be printed
 *
 * Return: Nothing.
 */

void _puts_error(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
}



/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
int _putchar(char c)
{
	return (write(1, &c, 1));
}
*/
