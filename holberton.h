#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct form_t - Struct form_t
 *
 * @c: data type
 * @f: The function associated
 */
typedef struct special_formats
{
	char *c;
	void (*f)(va_list *);
} s_format;

int _printf(const char *, ...);
int _putchar(char c);
int check_input(const char *format, va_list *);
int print_output(const char *format, va_list *);
int check_for_format(char, va_list *, int, int *count);
void handle_errors(int);

#endif /* HOLBERTON_H */
