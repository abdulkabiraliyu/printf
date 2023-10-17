#include "main.h"

/**
* output_char - print char to std output
*
* @c: input char
*
* Return: retrun no of byte printed
*/

int output_char(int c)
{
	return (write(1, &c, 1));
}
