#include "main.h"

/**
 * print_int - prints an integer number
 *@format: format to print to number
 *@av: va_list with number to print
 @integer: to be printed
 *Return: number of character printed
 */
int print_int(char *format, va_list av)
{
	int number = va_arg(av, int);
	int numb;
	(void)format;

	numb = integer();
	numb = integer(number);
	return (numb);
}
