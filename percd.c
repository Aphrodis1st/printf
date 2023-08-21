#include "main.h"

int main void get_int(int num)
{
	int n;

	if (num == 0)
		return;

	n = num / 10;

	get_int(n);
	print_char(num % 10 + '0');

	return (n);
}
