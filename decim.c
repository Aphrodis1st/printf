#include "main.h"

int decimal(int num)

{
	int x, value = 0;

	if (num == 0)
		return (0);

	num = num/10;
	decimal(x);
	putchar(num % 10 + '0');
	value += 1;

	return (value);


}
