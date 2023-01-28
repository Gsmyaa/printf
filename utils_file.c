#include "main.h"


/**
 * _strlen_fun - Compute the length of a string
 * @str: given String
 * Return: Length of string
 **/
int _strlen_fun(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}

/**
 * print_fun - print out  character.
 * @str: given string.
 * Return: length of string.
 */

int print_fun(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}

