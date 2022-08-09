#include "main.h"

/**
 * _printc - prints a char
 * @av: format of char
 * @format: format
 * Return: Number of char for printf
 */
int _printc(va_list av)
{
	_putchar(va_arg(av, int));
	return (1);
}
