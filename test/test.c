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
	unsigned int ui;
	void *addr;
	char *str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\nCurabitur pretium tincidunt lacus. Nulla gravida orci a odio. Nullam varius, turpis et commodo pharetra, est eros bibendum elit, nec luctus magna felis sollicitudin mauris. Integer in mauris eu nibh euismod gravida. Duis ac tellus et risus vulputate vehicula. Donec lobortis risus a elit. Etiam tempor. Ut ullamcorper, ligula eu tempor congue, eros est euismod turpis, id tincidunt sapien risus a quam. Maecenas fermentum consequat mi. Donec fermentum. Pellentesque malesuada nulla a mi. Duis sapien sem, aliquet nec, commodo eget, consequat quis, neque. Aliquam faucibus, elit ut dictum aliquet, felis nisl adipiscing sapien, sed malesuada diam lacus eget erat. Cras mollis scelerisque nunc. Nullam arcu. Aliquam consequat. Curabitur augue lorem, dapibus quis, laoreet et, pretium ac, nisi. Aenean magna nisl, mollis quis, molestie eu, feugiat in, orci. In hac habitasse platea dictumst.\n";

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
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

	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned wNeg:[%u]\n", -123);
	printf("Unsigned wNeg:[%u]\n", -123);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("%%%%%%%%%\n");
	printf("%%%%%%%%%\n");

	len = _printf("Address:[%p]\n", addr);
	len2 = printf("Address:[%p]\n", addr);
	printf("Len: %d\tLen2: %d\n", len,len2);
	len = _printf("Address:[%p]\n", NULL);
	len2 = printf("Address:[%p]\n", NULL);
	printf("Len: %d\tLen2: %d\n", len,len2);
	len = _printf("Address:[%p and %p]\n", addr, (void *)0x7f56ad2bf);
	len2 = printf("Address:[%p and %p]\n", addr, (void *)0x7f56ad2bf);
	printf("Len: %d\tLen2: %d\n", len,len2);
	len = _printf("%p", NULL);
	len2 = printf("%p", NULL);
	printf("Len: %d\tLen2: %d\n", len,len2);

	return (0);
}
