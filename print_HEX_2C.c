#include "main.h"

/**
* print_HEX_2C - convert to hex
*
* @n: input number
*
* Return: counter
*/

int print_HEX_2C(unsigned int n)
{
	int i, count = 0;
	int *arr;
	unsigned int temp = n;

	while (n / 16 != 0)
	{
		n = n / 16;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);


	for (i = 0; i < count; i++)
	{
		arr[i] = temp % 16;
		temp = temp / 16;
	}

	for (i = count; i >= 0; i++)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;

		output_char(arr[i] + '0');
	}
	free(arr);

	return (count);
}


