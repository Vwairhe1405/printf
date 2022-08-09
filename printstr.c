#include "main.h"

/**
 *_printstr - Prints a string
 *@av: string format
 *@format: format string
 *Return: number of str for print
 */
int _printstr(va_list av)
{
	char *str = va_arg(av, char *);
	int count;
		if (str == NULL)
			str = "(null)";
		for (count = 0; str[count]; count++)
		{
			_putchar (str[count]);
		}
		return (count);
}
