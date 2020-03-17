#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	char *str = "When you invoke GCC , it normally does preprocessing, compilation, assembly and linking. The \"overall options\" allow you to stop this process at an intermediate stage. For example, the -c option says not to run the linker. Then the output consists of object files output by the assembler.\n\nOther options are passed on to one stage of processing. Some options control the preprocessor and others the compiler itself. Yet other options control the assembler and linker; most of these are not documented here, since you rarely need to use any of them.\n\nMost of the command line options that you can use with GCC are useful for C programs; when an option is only useful with another language (usually C ++ ), the explanation says so explicitly. If the description for a particular option does not mention a source language, you can use that option with all supported languages.\n\nThe gcc program accepts options and file names as operands. Many options have multi-letter names; therefore multiple single-letter options may not be grouped: -dv is very different from -d -v.\n\nYou can mix options and other arguments. For the most part, the order you use doesn't matter. Order does matter when you use several options of the same kind; for example, if you specify -L more than once, the directories are searched in the order specified. Also, the placement of the -l option is significant.\n\nMany options have long names starting with -f or with -W---for example, -fmove-loop-invariants, -Wformat and so on. Most of these have both positive and negative forms; the negative form of -ffoo would be -fno-foo. This manual documents only one of these two forms, whichever one is not the default.\n";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	len = _printf("Length1:[%d, %i]\n", len, len);
	len2 = printf("Length2:[%d, %i]\n", len2, len2);
	_printf("Length1:[%d, %i]\n", len, len);
	printf("Length2:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	/*_printf("man gcc u:\n%s", str);
	printf("man gcc t:\n%s", str);*/
	printf("\ntesting null char =================\n");
	_printf("o%c", '\0');
	printf("t%c", '\0');
	printf("\nexclamation test ====== =============\n");
	_printf("o%!\n");
	printf("t%!\n");
	/*printf("\nK test ====== =============\n");
	_printf("o%K\n");
	printf("t%K\n");
	*/

	printf("%b\n", 98);
	_printf("a%ba\n", 98);
	_printf("%b\n", (unsigned int)INT_MAX + 1024);
	_printf("%b\n", 4294967295);
	_printf("%b\n", 0);
	return (0);
}
