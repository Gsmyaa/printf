#include "main.h"

/**
 * print_string_fun - Prints string
 * @lists: list of given arguments.
 * Return: length of string.
 */

int print_string_fun(va_list lists)
{
	char *p;
	int p_len;

	p = va_arg(lists, char*);
	p_len = print_fun((p != NULL) ? p : "(null)");

	return (p_len);
}

