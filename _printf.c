#include "main.h"

int  _printf(const char *format, ...)
{
	unsigned int a = 0, value = 0;
	va_list aphro;

	va_start(aphro, format);

	for ( ; format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			print_char(format[a]);
		}
		else if (format[a + 1] == 'c')
		{
			print_char(va_arg(aphro, int));
			a++;
		}
		value += 1;
	}
	return (value);
}
