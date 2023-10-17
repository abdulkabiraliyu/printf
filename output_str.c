#include "main.h"

/**
* output_str -print string to std output
*
* @str: input string
*
* Return: no of bytes printed
*/

int output_str(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		output_char((int)*str);
		++count;
		++str;
	}
	return (count);
}
