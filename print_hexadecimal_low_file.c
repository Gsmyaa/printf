#include "main.h"

/**
 * print_hexadecimal_low_fun - Print num in hexadecimal
 * @lists: input argument to print
 * Return: total length of the number
 **/
int print_hexadecimal_low_fun(va_list lists)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(lists, unsigned int), 16);

	size = print_fun((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
