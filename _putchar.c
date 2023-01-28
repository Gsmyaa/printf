#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: The character to be printed
 * Return: 1 on success, -1 on error, errno is set correctly.
 */
int _putchar(char c)
{
	return (buff_fun(c));
}

/**
 * buff_fun - Save the char in a buffer
 * @c: Char value
 *
 * Return: 1
 **/
int buff_fun(char c)
{
	static char buff[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, buff, i);
		i = 0;
	}

	if (c != -1)
		buff[i++] = c;

	return (1);
}
