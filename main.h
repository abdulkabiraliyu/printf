#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


#define BUFFER_SIZE 1024
#define UNUSED(x) ((void)(x))

int _printf(const char *format, ...);

int print_n_ca(long n, int base);
int print_n(long n, int base);
int output_char(int c);
int output_str(char *s);
void write_buffer(char buffer[], unsigned int *b_index);
void getspecifier(char const *format, unsigned int *i,  int *width, int *precision, char *f_spec, char *flag, char flag_arr[], char for_spec_arr[]);

int handle_format(va_list, char, char, int, int);
int print_HEX_2C(unsigned int n);


int handle_c(va_list arg_p);
int handle_s(va_list arg_p);
int handle_d(va_list arg_p);
int handle_i(va_list arg_p);
int handle_b(va_list arg_p);
int handle_o(va_list arg_p);
int handle_u(va_list arg_p);
int handle_x(va_list arg_p);
int handle_X(va_list arg_p);
int handle_p(va_list arg_p);
int handle_r(va_list arg_p);
int handle_S(va_list arg_p);
int handle_R(va_list arg_p);

#endif
