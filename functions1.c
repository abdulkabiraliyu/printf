#include "main.h"


/**
 * handle_c - print %c specifier
 *
 * @arg_p: arg value
 *
 * Return: no of byte printed
 */

int handle_c(va_list arg_p)
{
	char c = va_arg(arg_p, int);

	return (output_char(c));
}


/**
 * handle_s - print %s specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_s(va_list arg_p)
{
	char *s  = va_arg(arg_p, char *);

	return (output_str(s));
}

/**
 * handle_d - print %d specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_d(va_list arg_p)
{
	int d  = va_arg(arg_p, int);

	return (print_n(d, 10));
}

/**
 * handle_i - print %i specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_i(va_list arg_p)
{
	int i  = va_arg(arg_p, int);

	return (print_n(i, 10));
}


/**
 * handle_b - print %b specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_b(va_list arg_p)
{
	int b  = va_arg(arg_p, int);

	return (print_n(b, 2));
}
