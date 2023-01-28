#include "main.h"

int is_lowercase_fun(char);
char *string_to_upper_fun(char *);

/**
 * print_hexadecimal_upp_fun - Prints a number in hexadecimal
 * @lists: list of argument to print
 * Return: total Length of the number
 **/
int print_hexadecimal_upp_fun(va_list lists)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(lists, unsigned int), 16);
	p_buff = string_to_upper_fun(p_buff);

	size = print_fun((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}

/**
 * is_lowercase_fun - Check out if the char  in lowercase
 * @c: Char value given
 * Return: 1 or 0
 **/
int is_lowercase_fun(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper_fun - Changes to uppercase
 * @s: String given
 * Return: String which changed to uppercase
 **/
char *string_to_upper_fun(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase_fun(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}

