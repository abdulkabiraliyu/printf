#include "main.h"

/**
 * getspecifier - get the format type, flag, length
 *
 * @format: poiter to the format string
 * @i: counter
 * @width: width flag
 * @precision: precision flag
 * @f_spec: format specifier
 * @flag: flag
 * @flag_arr: array of acceptable flags
 * @for_spec_arr: array of format specifiers
 */

void getspecifier(char const *format, unsigned int *i, int *width, int *precision, char *f_spec, char *flag, char flag_arr[], char for_spec_arr[])
{
	int n, a;

	int break_flg = 0;

	UNUSED(width);

	for (n = *i; format[n] != '\0'; n++)
	{

		if (format[n] == '%' && format[n - 1] == '%')
		{
			*f_spec = '%';
			break_flg = 1;
			*i = n++;
			break;
		}

		/*
		   if (isdigit(format[n]))
		   {
		 *width = atoi(&format[n]);
		 continue;
		 }
		 */

		if (format[n] == '.')
		{
			for (a = (n + 1); format[a] >= '0' && format[a] <= '9'; a++)
			{
				*precision = *precision * 10 + (format[a] + '0');
			}

			n = a;
			continue;
		}
		for (a = 0; flag_arr[a] != '\0'; a++)
		{
			if (flag_arr[a] == format[n])
				*flag = format[n];

			continue;

		}

		for (a = 0; for_spec_arr[a] != '\0'; a++)
		{
			if (for_spec_arr[a] == format[n])
			{

				*f_spec = format[n];
				*i = n++;
				break_flg = 1;
				break;
			}
		}

		if (break_flg == 1)
			break;
	}

}
