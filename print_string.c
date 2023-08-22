#include "main.h"

/**
 *  print_string - prints string to stdout
 * @string: list
 * Return: number of char
 */

int print_string(char *string)
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
	return (char_val);
}
