#include "main.h"

int main _printf(const char *format, ...)
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

		else if (format[a + 1] == 's')
		{
			int char_val = print_string(va_arg(aphro, char *));

			a++;

			value += (char_val - 1);
		}

		else if (format[a + 1] == 's')
		{
			print_char('s');
			a++;
		}

		else if ((format[a + 1] == 'd') || (format[a + 1] == 'i'))
		{
			get_int(va_arg(aphro, int));
			a++;
		}
		value += 1;
	}
	return (value);
}
