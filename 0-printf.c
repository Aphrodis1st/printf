#include "main.h"

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */


int _printf(const char *format, ...)

{
	unsigned int h = 0, value = 0;
	va_list aphro;
	va_start(aphro, format);
	if (format == NULL)
	{
		return (-1);
	}

	for ( ; format[h] != '\0'; h++)
	{
		if (format[h] != '%')
		{
			putchar(format[h]);
		}

		else if (format[h + 1] == 'c')
		{
			putchar (va_arg(aphro, int));

			h++;
		}

		else if (format[h + 1] == 's')
		{
			putx(va_arg(aphro, char *));

			h++;
		}

		else if (format[h] == '%')
		{
			putchar(format[h]);
			h++;
		}

		else if (format[h + 1] == 'd')
		{
			value += decimal(va_arg(aphro, int));
			h++;
		}

		value += 1;
	}
	return (value);

}
