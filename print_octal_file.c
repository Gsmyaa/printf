#include "main.h"

/**
 * print_octal_fun - Prints out a unsigned octal value
 * @lists: list of arguments to print
 * Return: Length of number
 **/
int print_octal_fun(va_list lists)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(lists, unsigned int), 8);

	size = print_fun((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
