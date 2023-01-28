#include "main.h"

/**
 * print_integer_fun - Prints a number in base ten
 * @lists: argument lists to print in base 10
 * Return: Length of th numbers in base 10
 **/
int print_integer_fun(va_list lists)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(lists, int), 10);

	size = print_fun((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
