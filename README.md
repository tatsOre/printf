# _printf
## Simulation of C printf function CHECK
_printf is a function that produces output according to a format.

##### Prototype:
```bash
int _printf(const char *format, ...);
```
* *format* is a character string. The format string is composed of zero or more directives and conversion specifiers: *%c, %s, %, %d, %i
* (...) are the variable number of input arguments *(optional)*.

##### Returns:
* the number of characters printed (excluding the null byte used to end output to strings).
* write output to stdout, the standard output stream.

### Examples:
**Character (%c):**
* *Input:*   _printf("This is a char: [%c]\n", 'C');
* *Output:*  This is a char: [C]

**String (%s):**
* *Input:*   _printf("This is a string: [%s]\n", "Hello World");
* *Output:*  This is a string: [Hello World]

**Number (%i):**
* *Input:*   _printf("This is a number: [%i]\n", 20);
* *Output:*  This is a number: [20]

**Number (%d):**
* *Input:*   _printf("This is another number: [%d]\n", 156);
* *Output:*  This is another number: [156]

**Percentage (%):**
* *Input:*   _printf("Printing a percentage: [%%]\n");
* *Output:*  Printing a percentage: [%]

**Literal(?)**
* *Input:*   _printf("Hello World");
* *Output:*  Hello World

## Resources

* [Secrets of printf](https://www.cypress.com/file/54761/download)
* [printf(3) - Linux man page](https://linux.die.net/man/3/printf)
* [Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)
* [Variable Arguments in C](https://www.tutorialspoint.com/cprogramming/c_variable_arguments.htm)
* [Function Pointers](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
* [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
* [Structures in C language](https://en.wikipedia.org/wiki/Struct_(C_programming_language))

## Requirements

* gcc 4.8.4
* All files should be compiled with Ubuntu 14.04 LTS
* The prototypes of all functions, structures and libraries are included in the header file called holberton.h
* Global variables are not allowed

## Authorized functions and macros:

* [write (man 2 write)](https://linux.die.net/man/2/write)
* [malloc (man 3 malloc)](https://linux.die.net/man/3/malloc)
* [free (man 3 free)](https://linux.die.net/man/3/free)
* [va_start (man 3 va_start)](https://linux.die.net/man/3/va_start)
* [va_end (man 3 va_end)](https://linux.die.net/man/3/va_end)
* [va_copy (man 3 va_copy)](https://linux.die.net/man/3/va_copy)
* [va_arg (man 3 va_arg)](https://linux.die.net/man/3/va_arg)

## Authorized libraries:

* [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)

## Compilation
Code files must be compiled this way:
```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

## Authors
* Andrés Bayona
* Tatiana Orejuela

##### Holberton School - Foundations - Low-level programming & Algorithm
#####  Marzo, 2020.
