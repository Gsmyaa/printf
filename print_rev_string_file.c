#include "main.h"

/**
 * print_rev_string_fun - Prints a string in reverse
 * @lists: List of arguments to print
 * Return: Length of string
 **/
int  print_rev_string_fun(va_list lists)
{
	int i, size;
	const char *str;

	str = va_arg(lists, const char *);

	size = _strlen_fun(str);

	for (i = size - 1; i >= 0; i--)
		_putchar(str[i]);

	return (size);
}
