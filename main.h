#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct printer - structure for printing to stdout
 * given a specifier
 * @specifier: the specifier recognized by this
 * printer (without the %)
 * @run:the function to run when this printer is invoked
 */
typedef struct printer
{
	char *specifier;
	int (*run)(va_list);
} printer;

int _printf(const char *format, ...);
int _printstr(va_list);
int _putchar(char c);

#endif /* MAIN_H */

