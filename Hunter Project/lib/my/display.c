/*
** EPITECH PROJECT, 2022
** display.c
** File description:
** display.c
*/

#include "my.h"

char putchar_percent(void)
{
    my_putchar('%');
}

void display_float(double nbr)
{
    int count;
    int zero = 0;
    int res = 0;
    int p_e = (int) nbr;
    double p_dec = nbr - p_e;
    my_put_nbr(p_e);
    my_putchar('.');
    for (int i = 0; i < 6; i++) {
        p_dec = p_dec * my_compute_power_rec(10, 1);
        if ((int) p_dec == 0) {
            zero++;
        }
    }
    p_dec += 1;
    for (int j = 0; j < zero; j++) {
        my_putchar('0');
    }
    my_put_nbr((int)p_dec);
}

void display_unbr(int nb)
{
    if (nb < 0)
        nb *= -1;
    if (nb >= 10)
        my_put_nbr(nb / 10);
    my_putchar(48 + nb % 10);
}

char show_mem_adress(char *str)
{
    my_putchar('0');
    my_putchar('x');
    int adress = &(str[0]);
    my_putnbr_hex(adress);
}

int is_printable(char str)
{
    if (str < 32 || str > 126) {
        return 0;
    }
    return 1;
}
