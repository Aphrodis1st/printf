#include "main.h"

int putx(char *string)
{
	int idx = 0, char_val = 0;

	if (string)
	{
		while (string[idx] != '\0')
		{
			print_char(string[idx]);
		char_val += 1;
			idx++;
		}
	}
	print_char('\n');
	return (char_val);
}
