/*
** EPITECH PROJECT, 2022
** sc_float.c
** File description:
** sc_float.c
*/

#include "my.h"

void nb_neg(double nbr, int count)
{
    while ((int) nbr <= 1) {
        nbr *= 10;
        count ++;
    }
    count++;
    display_float(nbr);
    my_putchar('e');
    my_putchar('-');
    if (count < 10) {
        my_putchar('0');
        my_put_nbr(count);
    } else {
        my_put_nbr(count);
    }
}

void nb_pos(double nbr, int count)
{
    while (nbr >= 1) {
        nbr /= 10;
        count++;
    }
    nbr *= 10;
    display_float(nbr);
    my_putchar('e');
    my_putchar('+');
    if (count < 10) {
        my_putchar('0');
        my_put_nbr(count);
    } else {
        my_put_nbr(count);
    }
}

int sc_float(double nbr)
{
    int p_e = (int) nbr;
    if (p_e < 10)
        nbr *= 1;
    else
        nbr /= 10;
    if (nbr < 0) {
        nbr *= -1;
        my_putchar('-');
    }
    int count = 0;
    if (p_e < 10)
        count -= 1;
    if (p_e == 0) {
        nb_neg(nbr, count);
    } else {
        nb_pos(nbr, count);
    }
}

void nb_neg2(double nbr, int count)
{
    while ((int) nbr <= 1) {
        nbr *= 10;
        count ++;
    }
    count++;
    display_float(nbr);
    my_putchar('E');
    my_putchar('-');
    if (count < 10) {
        my_putchar('0');
        my_put_nbr(count);
    } else {
        my_put_nbr(count);
    }
}

void nb_pos2(double nbr, int count)
{
    while (nbr >= 1) {
        nbr /= 10;
        count++;
    }
    nbr *= 10;
    display_float(nbr);
    my_putchar('E');
    my_putchar('+');
    if (count < 10) {
        my_putchar('0');
        my_put_nbr(count);
    } else {
        my_put_nbr(count);
    }
}
