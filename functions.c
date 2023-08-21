#include "main.h"

/**
 * print_char - print a character
 * @size: size of specifiers
 * @types: List a of arguments
*/
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}
