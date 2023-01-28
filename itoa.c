#include "main.h"

/**
 * itoa - convert integer to ascii
 * @num: num passed in
 * @base: base passed in
 *
 * Return: char value
 **/
char *itoa(long int num, int base)
{
	static char *ar = "0123456789abcdef";
	static char buff[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	ptr = &buff[49];
	*ptr = '\0';

	do      {
		*--ptr = ar[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}
