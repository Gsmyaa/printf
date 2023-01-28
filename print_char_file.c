#include "main.h"
/**
 * print_char_fun - print out char value.
 * @lists: list of arguments.
 * Return: 1 value
 */
int print_char_fun(va_list lists)
{
	int a;

	a = va_arg(lists, int);

	_putchar(a);

	return (1);
}

