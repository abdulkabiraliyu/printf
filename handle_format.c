#include "main.h"

/**
 * handle_format - handle different format speciefiers
 * @arg_p: stores the argument
 * @f_spec: format specifier
 * @flag: flag
 * @width: width
 * @precision: precision
 * Return: number bytes written
 */

int handle_format(va_list arg_p, char f_spec, char flag, int width, int precision)
{

	int r = 0;

	UNUSED(f_spec);
	UNUSED(flag);
	UNUSED(width);
	UNUSED(precision);


	switch (f_spec)
	{
		case 'c':
			r = handle_c(arg_p);
			break;

		case 's':
			r = handle_s(arg_p);
			break;

		case '%':
			r = output_char(f_spec);
			break;

		case 'd':
			r = handle_d(arg_p);
			break;

		case 'i':
			r = handle_i(arg_p);
			break;

		case 'b':
			r = handle_b(arg_p);
			break;

		case 'u':
			r = handle_u(arg_p);
			break;

		case 'o':
			r = handle_o(arg_p);
			break;
		case 'x':
			r = handle_x(arg_p);
			break;

		case 'X':
			r = handle_X(arg_p);
			break;

		case 'p':
			r = handle_p(arg_p);
			break;
	}

	return (r);
}
