#include "main.h"

/**
 * _bin - function to print binary
 * @bin: list being passed
 * Return: updated count return
 */
int _bin(va_list bin)
{
	int count = 0, i;
	int *arr;
	unsigned int n = va_arg(bin, unsigned int);
	unsigned int tmp = n;

	while (n / 2 != 0)
	{
		n /= 2;
		count++;
	}
		count++;
		arr = malloc(count * sizeof(int));
	{
		_putchar(arr[i] + '0');
	}
		free(arr);
		return (count);
}
