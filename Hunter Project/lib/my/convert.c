/*
** EPITECH PROJECT, 2022
** convert.c
** File description:
** convert.c
*/

#include "my.h"

char convert_to_oct(char str)
{
    if (str >= 8) {
        convert_to_oct((int) str / 8);
    }
    if ((str % 8) >= 10) {
        my_putchar(((int)str % 8) + 55);
    } else {
        my_putchar(((int) str % 8) + '0');
    }
}

int convert_noprintable(char *str)
{
    for (int i = 0; i < my_strlen(str) + 1; i++) {
        if (is_printable(str[i]) == 0) {
            my_putchar(convert_to_oct(str[i]));
        }
        my_putchar(str[i]);
    }
    return str;
}
