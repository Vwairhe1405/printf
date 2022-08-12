#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _print_char - prints a char
 * @av: format of char
 * @format: format
 * Return: Number of char for printf
 */
int _print_char(va_list av)
{
	unsigned char my_char;

	my_char = (va_arg(av, int));
	_putchar(my_char);

	return (1);
}
