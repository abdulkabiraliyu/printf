#include "main.h"

/**
 * write_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @b_index: Index at which to add next char, represents the length.
 */

void write_buffer(char buffer[], unsigned int *b_index)
{

	if (*b_index > 0)
		write(1, &buffer[0], *b_index);

	*b_index = 0;
}
