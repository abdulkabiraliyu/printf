#include "main.h"


/**
* _printf - print formatted string
*
* @format: string format
*
* Return: number of bytes printed
*/

int _printf(const char *format, ...)
{
	 char flag_arr[] = {'+', ' ', '#'};
	 char for_spec_arr[] = {'c', 's', 'd', 'i', 'b', 'u', 'o', 'x', 'X', 'S', 'r', 'p', '\0'};

	unsigned int i, b_index = 0, write_count = 0;
	va_list arg_p;
	char buffer[BUFFER_SIZE];
	char flag, f_spec;
	int width = 0, precision = 0;

	if (format == NULL)
		return (-1);
	va_start(arg_p,  format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{

			buffer[b_index++] = format[i];
			write_count++;

			if (b_index == BUFFER_SIZE)
			{
				write_buffer(buffer, &b_index);
			}
		}
		else
		{
			write_buffer(buffer, &b_index);
			getspecifier(format, &i, &width, &precision,  &f_spec, &flag, flag_arr, for_spec_arr);
			write_count = handle_format(arg_p, f_spec, flag, width, precision);
		}

	}
va_end(arg_p);

write_buffer(buffer, &b_index);

return (write_count);
}
