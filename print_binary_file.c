#include "main.h"

/**
 * print_binary_fun - Print out number in base two
 * @lists: list of Numbers to be  printed in base 2
 * Return: Length of numbers in binary
 **/
int print_binary_fun(va_list lists)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(lists, unsigned int), 2);

	size = print_fun(p_buff);

	return (size);
}
