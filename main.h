#ifndef _MAIN_H_
#define _MAIN_H_

/* C standard library header files */
#include <stdarg.h>
#include <unistd.h>

/* function prototypes */
int print_char(char q);
int  _printf(const char *format, ...);
int print_string(char *string);
int put_int(int integer);
int _puts(char *string);
void get_int(int num);

#endif 
