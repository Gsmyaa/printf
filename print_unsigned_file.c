#include "main.h"

/**
 * print_unsigned_fun - Prints out an unsigned int
 * @lists: list of arguments be to printed
 *
 * Return: length of number
 **/
int print_unsigned_fun(va_list lists)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(lists, unsigned int), 10);

	size = print_fun((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
