#include "main.h"

/**
 * handle_S - print %X specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_S(va_list arg_p)
{
	char *S;
	int i, len = 0;
	int val;


	S = va_arg(arg_p, char *);
	if (S == NULL)
		S = "(null)";

	for (i = 0; S[i] != '\0'; i++)
	{
		if (S[i] < 32 || S[i] >= 127)
		{
			len += output_char('\\');
			len += output_char('x');

			val = S[i];

			if (val < 16)
			{
				len += output_char('0');
			}
			len += print_HEX_2C(val);
		}
		else
		{
			len += output_char(S[i]);
		}
	}


	return (len);
}


/**
 * handle_r - print %r specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_r(va_list arg_p)
{
	char *s;
	int i, j = 0, len = 0;

	s = va_arg(arg_p, char *);

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;

	for (i = j - 1; i >= 0; i--)
		len += output_char(s[i]);

	return (len);
}

/**
 * handle_R - print %R specifier
 *
 * @arg_p: arg value
 *
 *  Return: no of byte printed
 */
int handle_R(va_list arg_p)
{
	int i, j, c = 0, k = 0;

	char *s = va_arg(arg_p, char *);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};


	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				c += output_char(b[j]);
				k = 1;
			}
		}
		if (!k)
		{
			c += output_char(s[i]);
		}
	}

	return (c);

}

