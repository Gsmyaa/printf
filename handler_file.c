#include "main.h"

/**
 * handler_fun - checks out format
 * @str: format given as string
 * @lists: List of arguments
 * Return: total counted size of aguments
 **/
int handler_fun(const char *str, va_list lists)
{
	int size, i, a;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			a = percent_handler_fun(str, lists, &i);
			if (a == -1)
				return (-1);

			size += a;
			continue;
		}

		_putchar(str[i]);
		size = size + 1;
	}


	return (size);
}

/**
 * percent_handler_fun - cheks for percent format
 * @str: format string
 * @lists: List of argument given
 * @i: int value for iterating
 * Return: counted number of printed elements
 **/
int percent_handler_fun(const char *str, va_list lists, int *i)
{
	int size, j, number_formats;
	format formats[] = {
		{'s', print_string_fun}, {'c', print_char_fun},
		{'d', print_integer_fun}, {'i', print_integer_fun},
		{'b', print_binary_fun}, {'u', print_unsigned_fun},
		{'o', print_octal_fun}, {'x', print_hexadecimal_low_fun},
		{'X', print_hexadecimal_upp_fun}, {'p', print_pointer_fun},
		{'r', print_rev_string_fun}, {'R', print_rot_fun}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < number_formats; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(lists);
			return (size);
		}

	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}

