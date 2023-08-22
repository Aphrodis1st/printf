#include "holberton.h"

/**
 * get_int - function to print integers
 * @number: list printed
 * Return: Return count
 */

int get_int(va_list number)
{
	int a, kev = 1, len = 0;
	unsigned int b;

	a = va_arg(number, int);

	if (a < 0)
	{
		len = len + print_char('-');
		b = a * -1;
	}
	else
		b = a;
	while (b / expo > 9)
		kev *= 10;

	while (kev != 0)
	{
		len = len + print_char(b / kev + '0');
		b = b % kev;
		kev = kev / 10;
	}
	return (len);
}
