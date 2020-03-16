#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int check_input(const char *format, va_list *);
int print_output(const char *format, va_list *);
int check_for_format(*char, va_list *, int, int *count); /*tengo duda con los punteros here, as usual */
void handle_errors(int);

#endif /* HOLBERTON_H */
