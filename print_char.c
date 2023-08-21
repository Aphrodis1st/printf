#include "main.h"

int print_char(char q)
{
	return (write(1, &q, 1));
}
