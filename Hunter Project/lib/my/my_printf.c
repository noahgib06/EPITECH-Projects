/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "my.h"

void second_option(char const *format, int i)
{
    my_putchar('%');
    my_putchar(format[i]);
}

int second_loop(va_list list, char const *format, int i)
{
    int j = 0;
    int test = 0;
    char flags[] = {'d', 'i', 'c', 's', '%', 'f', 'u',
        'o', 'b', 'x', 'X', 'a', 'S', 'p', 'e', 'E'};
    int (*fptr[16])(void *) = {(void *) my_put_nbr, (void *) my_put_nbr,
        (void *) my_putchar, (void *) my_putstr, (void *) putchar_percent,
        (void *) display_float, (void *) display_unbr,
        (void *) my_putnbr_oct, (void *) my_putnbr_bin,
        (void *) my_putnbr_hex, (void *) my_putnbr_hex2,
        (void *) double_to_hex, (void *) convert_noprintable,
        (void *) show_mem_adress, (void *) sc_float,
        (void *) sc_float2};
    for (; flags[j]; j++) {
        if (format[i] == flags[j]) {
            fptr[j](va_arg(list, void *));
            test = 1;
        }
    }
    if (test != 1)
        second_option(format, i);
}

int my_printf(char const *format, ...)
{
    va_list list;
    va_start (list, format);
    if (my_strlen(format) == 0)
        return (84);
    for (int i = 0; i < my_strlen(format); i++) {
        if (format [i] == '%') {
            i++;
            second_loop(list, format, i);
        } else
            my_putchar(format[i]);
    }
    va_end(list);
    return 0;
}
