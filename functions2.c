#include "main.h"

/**
 * handle_u - print %u specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_u(va_list arg_p)
{
	unsigned int u;

	u = va_arg(arg_p, unsigned int);

	return (print_n(u, 10));
}

/**
 * handle_o -  print %o specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_o(va_list arg_p)
{
	unsigned int o;

	o = va_arg(arg_p, unsigned int);

	return (print_n(o, 8));
}

/**
 * handle_x - print %x specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_x(va_list arg_p)
{
	unsigned int x;

	x = va_arg(arg_p, unsigned int);

	return (print_n(x, 16));
}

/**
 * handle_X - print %X specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_X(va_list arg_p)
{
	unsigned int X;

	X = va_arg(arg_p, unsigned int);

	return (print_n_ca(X, 16));
}
/**
 * handle_p - print %p specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_p(va_list arg_p)
{
	void *p;
	char *s = "(nil)";
	int p_int;
	int n = 0;

	p = va_arg(arg_p, void *);

	if (p == NULL)
	{
		n += output_str(s);
		return (n);
	}

	p_int = (unsigned long int)p;
	n += output_char('0');
	n += output_char('x');
	n += print_n(p_int, 16);

	return (n);
}
