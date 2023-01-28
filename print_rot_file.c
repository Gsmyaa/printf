#include "main.h"

/**
 * rot13_fun - Encodes a string using rot13 encoders.
 * @s: String to be enconded
 * Return: encoded string
 */
int rot13_fun(char *s)
{
	int i, j;
	char *origin, *rot13;

	origin = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; origin[j] != '\0'; j++)
		{
			if (s[i] == origin[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}

		if (!origin[j])
			_putchar(s[i]);
	}
	return (i);
}

/**
 * print_rot_fun - Prints the encoded string with rot13
 * @lists: String to be encoded
 * Return: Length of the string encoded
 **/
int print_rot_fun(va_list lists)
{
	char *p;
	int p_len;

	p = va_arg(lists, char *);
	p_len = rot13_fun((p != NULL) ? p : "(ahyy)");

	return (p_len);
}
