/*
** EPITECH PROJECT, 2018
** comp.h
** File description:
** for my_printf
*/
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

struct input_flags
{
    int add;
    int space;
    int nb1;
    int sign;
    int nb2;
};

struct def_arg
{
    char type;
    char *(*func)(va_list ap, struct input_flags flags);
};

int my_printf(char *, ...);
char *my_putstr2(va_list, struct input_flags);
char *my_put_point(va_list, struct input_flags);
char *my_print_nonp(va_list, struct input_flags);
char *my_put_bin(va_list, struct input_flags);
char *my_put_nbr2(va_list, struct input_flags);
char *my_print_oct(va_list, struct input_flags);
char *my_put_unsigned(va_list, struct input_flags);
char *my_put_base(va_list, struct input_flags);
char *my_put_basem(va_list, struct input_flags);
char *my_putchar2(va_list, struct input_flags);
char *my_printper(va_list, struct input_flags);
char *my_strcat(char *, char *);
char *my_revstr(char *);
int my_strlen(char *);
char *my_strcpy(char *);
int my_putstr(char *);
char *my_putback(va_list, struct input_flags);
char *print_flags(char *, struct input_flags, int);
char *test_sp(char *, char);

#ifndef MACRO_H_
#define MACRO_H_
#define IF_MINUS (type2[i] == '-') ? (flags.add = 1) : (i = i)
#define IF_PLUS (type2[i] == '+') ? (flags.sign = 1) : (i = i)
#endif /* MACRO_H_ */
