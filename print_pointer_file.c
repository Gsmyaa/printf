#include "main.h"
#include <stdio.h>

int _strcmp_fun(char *, char *);

/**
 * print_pointer_fun - Prints a number in hexadecimal
 * @lists: list of argument to print
 * Return: Length of number
 **/
int print_pointer_fun(va_list lists)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(lists, unsigned long int), 16);

	if (!_strcmp_fun(p_buff, "0"))
		return (print_fun("(nil)"));

	size = print_fun("0x");

	if (!_strcmp_fun(p_buff, "-1"))
		size += print_fun("ffffffffffffffff");
	else
		size += print_fun(p_buff);

	return (size);
}

/**
 * _strcmp_fun - Compares two given strings
 * @s1: Str 1
 * @s2: Str 2
 * Return: int value
 **/
int _strcmp_fun(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}

