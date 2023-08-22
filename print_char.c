#include "main.h"

/**
 * print_char - function to return char
 * @q: list given
 * Return: number of char printed
 */

int print_char(char q)
{
	return (write(1, &q, 1));
}
