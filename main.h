#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* functions in printers file */
int print_string_fun(va_list);
int print_char_fun(va_list);
int print_integer_fun(va_list);
int print_binary_fun(va_list);
int print_rot_fun(va_list);
int print_unsigned_fun(va_list);
int print_octal_fun(va_list);
int print_hexadecimal_low_fun(va_list);
int print_hexadecimal_upp_fun(va_list);
int print_pointer_fun(va_list);
int print_rev_string_fun(va_list);

/* function inside utils_file.c */
int _strlen_fun(const char *);
int print_fun(char *);
char *itoa(long int, int);

/* function in handler_file.c */
int handler_fun(const char *, va_list);
int percent_handler_fun(const char *, va_list, int *);

/* function in printf.c */
int _printf(const char *, ...);

/* _putchar.c */
int _putchar(char);
int buff_fun(char);

/**
 * struct _format - Typedef struct
 * @type: Format
 * @f: The function associated
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif
