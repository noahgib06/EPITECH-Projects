/*
** EPITECH PROJECT, 2022
** my_putnbr_func
** File description:
** my_putnbr_func
*/

#include "my.h"
#include <unistd.h>

int my_putnbr_oct(int nb)
{
    if (nb < 0)
        nb = nb * -1;
    if (nb >= 8)
        my_putnbr_oct(nb / 8);
    if ((nb % 8) >= 10)
        my_putchar((nb % 8) + 55);
    else
        my_putchar((nb % 8) + '0');
}

int my_putnbr_bin(int nb)
{
    if (nb < 0)
        nb = nb * -1;
    if (nb >= 2)
        my_putnbr_bin(nb / 2);
    if ((nb % 2) >= 10)
        my_putchar((nb % 2) + 55);
    else
        my_putchar((nb % 2) + '0');
}

int my_putnbr_hex(int nb)
{
    if (nb < 0)
        nb = nb * -1;
    if (nb >= 16)
        my_putnbr_hex(nb / 16);
    if ((nb % 16) >= 10)
        my_putchar((nb % 16) + 87);
    else
        my_putchar((nb % 16) + '0');
}

int my_putnbr_hex2(int nb)
{
    if (nb < 0)
        nb = nb * -1;
    if (nb >= 16)
        my_putnbr_hex(nb / 16);
    if ((nb % 16) >= 10)
        my_putchar((nb % 16) + 55);
    else
        my_putchar((nb % 16) + '0');
}

int double_to_hex(double nb)
{
    my_putstr("0x1.");
    long n = *(long *)&nb;
    my_putnbr_hex(n);
}
