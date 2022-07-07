#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
char *check_string(char *s);
void print_all(const char * const format, ...);
int get_format(const char * const format);
void display_sep(int i, int j);

#endif /* VARIADIC_FUNCTIONS_H */
