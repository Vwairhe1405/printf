#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - prints a char
 * @c: character to print
 * Return: Number of char
 */
int print_char(va_list c)
{
	unsigned char my_char;

	my_char = (va_arg(c, int));
	putchar(my_char);

	return (1);
}
/**
 * print_percentage - %
 *
 * Return: 1. 
 */
int print_percentage(void)
{
	_putchar('%');
	return (1);
}
