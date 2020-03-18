# _printf
## Simulation of C printf function
_printf is a function that produces output according to a format. Writes at most size bytes (including the terminating null byte ('\0')) to str.

##### Synopsis:
```bash
int _printf(const char *format, ...);
```
* *format* is a character string. The format string is composed of zero or more directives and conversion specifiers:
%c, %s, %d, %i, %%, %o, %u, %x, %X, %p (custom conversion specifiers: %r, %R, %b).

* (...) are the variable number of input arguments separated by comma *(optional)*.

##### Returns:
* Upon successful return, the number of characters printed (excluding the null byte used to end output to strings).
* Write output to stdout, the standard output stream.
* If an output error is encountered, a negative value (-1) is returned.

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

**Percentage (%%):**
* *Input:*   _printf("Printing a percentage: [%%]\n");
* *Output:*  Printing a percentage: [%]

**Character string without conversion specifications:**
* *Input:*   _printf("Hello World");
* *Output:*  Hello World

**Print an unsigned decimal argument (%u):**
* *Input:*   _printf("Unsigned wNeg (with Negative): [%u], -123");
* *Output:*  Unsigned wNeg (with Negative): [4294967173]

**Print an unsigned int argument converted to octal notation (%o):**
* *Input:*   _printf("98 in octal notation is: [%o], 98");
* *Output:*  98 in octal notation is: [142]

**Print an unsigned int argument converted hexadecimal (x) notation (%x):**
* *Input:*   _printf("2035495 in hexadecimal (x) notation is: [%x], 2035495");
* *Output:*  2035495 in hexadecimal (x) notation is: [1f0f27]

**Print an unsigned int argument converted hexadecimal (X) notation (%X):**
* *Input:*   _printf("2035495 in hexadecimal (X) notation is: [%X], 2035495");
* *Output:*  2035495 in hexadecimal (X) notation is: [1F0F27]

**Print a memory address (%p):**
The argument shall be a pointer to void. The value of the pointer is converted to a sequence of printing characters, in an implementation-defined manner.
* *Input:*   _printf("Address:[%p]\n", addr); //----> where 'addr' is addr = (void *)0x7ffe637541f0;
* *Output:*  Address:[0x7ffe637541f0]



### Custom conversion specifiers examples:
**Print a string in reverse (%r):**
* *Input:*   _printf("String in [%r]\n", "reverse");
* *Output:*  String in [esrever]

**Print a string in rot13 (%R):**
* *Input:*   _printf("Hello World in rot13 is: [%R]\n", "Hello World");
* *Output:*  Hello World in rot13 is: [Uryyb Jbeyq]

**Unsigned int argument converted to binary (%b):**
* *Input:*   _printf("98 in binary: [%b]\n", 98);
* *Output:*  98 in binary: [1100010]

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

## Authorized functions and macros

* [write (man 2 write)](https://linux.die.net/man/2/write)
* [malloc (man 3 malloc)](https://linux.die.net/man/3/malloc)
* [free (man 3 free)](https://linux.die.net/man/3/free)
* [va_start (man 3 va_start)](https://linux.die.net/man/3/va_start)
* [va_end (man 3 va_end)](https://linux.die.net/man/3/va_end)
* [va_copy (man 3 va_copy)](https://linux.die.net/man/3/va_copy)
* [va_arg (man 3 va_arg)](https://linux.die.net/man/3/va_arg)

## Authorized libraries

* [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)
* [stdlib.h](https://es.wikipedia.org/wiki/Stdlib.h)
* [unistd.h](https://en.wikipedia.org/wiki/Unistd.h)

## Files
| File  | Description |
| :---: | :---:  |
| `_printf.c` | Function that prints according to a given format|
| `_putchar.c` | writes the character c to stdout |
| `_puts.c` | prints a string |
| `call_print_functions.c` | Auxiliary functions |
| `check_for_format.c` | Check printf format specifiers |
| `holberton.h` | Include prototypes, strucs, libraries. |
| `inp_out.c` | Check /and print input/output |
| `man_3_printf` | _printf Man Page |
| `print_number.c` | Auxiliary function |
| `printf_advanced.c` | Advanced Task - Prints a reversed string |
| `printf_advanced_base.c` | Advanced Task - Unsigned int argument is converted to binary |
| `printf_advanced_base2.c` | Advanced Task - Print unsigned, octal, hexadecimal notation |
| `printf_advanced_rot13.c` | Advanced Task - Prints rot13'ed string |
| `printf_advanced_pointer.c` | Advanced Task - Prints a memory address in C |


## Compilation
Code files must be compiled this way:
```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c
```
## Flowcharts
https://drive.google.com/file/d/1V-SUvg7jqLFF5P20Prx_qDa7WkukhqG7/view?usp=sharing

## Authors
* Andrés Bayona | [Github](https://github.com/AndrewB4y)
* Tatiana Orejuela | [Github](https://github.com/tatsOre)

##### Holberton School - Foundations - Low-level programming & Algorithm
#####  March, 2020.
