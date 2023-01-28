#include "main.h"

/**
 * _printf - print anything based on format given
 * @format: string given zero or more directive
 * Return: count number of character printed except a  null byte
 **/
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen_fun(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = handler_fun(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}
