#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct special_formats - Struct to select specifiers
 *
 * @c: data type
 * @f: The function associated
 */
typedef struct special_formats
{
	char *c;
	void (*f)(va_list *, int, int *);
} s_format;

/**
 * union pointer - union variable to handle pointer byte to byte
 * @ptr: void pointer to store a pointer.
 * @c: char array to handle each byte in ptr.
 */
typedef union pointer
{
	void *ptr;
	char c[sizeof(void *)];
} my_pointer;

int _printf(const char *, ...);
int check_input(const char *format, va_list *);
int print_output(const char *format, va_list *);
int check_for_format(char, va_list *, int, int *count);
void print_char(va_list *, int, int *);
int _putchar(char c);
void print_string(va_list *, int, int *);
void _puts(char *, int *);
void print_int(va_list *, int, int *);
void print_number(int, int *);

/* Advanced */

void print_string_reverse(va_list *, int, int *count);
void print_rev(char *s, int *count);
void print_string_rot13(va_list *, int, int *count);
void rot13(char *s, int *count);
void print_bin(va_list *, int, int *count);
void p_bin(unsigned int, int *);
void print_octal(va_list *, int, int *count);
void p_octal(unsigned int, int *);
void print_uint(va_list *, int, int *count);
void p_uint(unsigned int, int *);
void print_uhex(va_list *, int, int *count);
void p_uhex(unsigned int, int *);
void print_UHEX(va_list *, int, int *count);
void p_UHEX(unsigned int, int *);
void print_pointer(va_list *, int, int *count);
void p_ptr(char *, int *);

#endif /* HOLBERTON_H */
