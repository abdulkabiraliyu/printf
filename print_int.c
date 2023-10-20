#include "main.h"

/**
 * print_n - print an integer to stdout
 *
 * @n: integer input
 * @base: base
 *
 * Return: number of bytes printed
 */

int print_n(long int n, int base)
{
	long int count;
	char *symbols;

	symbols = "0123456789abcdef";

	if (n < 0)
	{
		output_char('-');
		return (print_n(-n, base) + 1);
	}
	else if (n < base)
		return (output_char(symbols[n]));

	else
	{
		count = print_n(n / base, base);
		return (count + print_n(n % base, base));

	}
}

/**
 * print_n_ca - print an integer to stdout capitalize
 *
 * @n: integer input
 * @base: base
 *
 * Return: number of bytes printed
 */

int print_n_ca(long int n, int base)
{
	long int count;
	char *symbols;

	symbols = "0123456789ABCDEF";

	if (n < 0)
	{
		output_char('-');
		return (print_n_ca(-n, base) + 1);
	}
	else if (n < base)
		return (output_char(symbols[n]));

	else
	{
		count = print_n_ca(n / base, base);
		return (count + print_n_ca(n % base, base));

	}
}
