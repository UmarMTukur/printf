#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

/**
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/* helper functions*/
void write_base(char *str);
char *rev_string(char *s);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
int hex_check(int, char);

/*Printf functions*/
int _printf(const char *format, ...);
int print_string(va_list);
int print_char(va_list);
int _write_char(char);
int print_percent(va_list);
int print_binary(va_list);
int print_integer(va_list);
int print_number(va_list);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int print_unsgined_number(unsigned int);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);




#endif /* MAIN_H */
