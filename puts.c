#include "main.h"

int putx(char *str)

{
	int idx = 0, val = 0;

	if (str)
	{
		while(str[idx] != '\0')
		{
			putchar(str[idx]);
			val += 1;
			idx++;
		}
	}

	return (val);
}
