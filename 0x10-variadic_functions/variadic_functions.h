#include <stdarg.h>
#ifndef VARIADIC_H
#define VARIADIC_H
/**
 * struct format - Struct format
 *
 * @s: A string
 * @f: The function associated
 */
typedef struct format
{
	char *s;
	void (*f)(va_list argm);
}frm;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif