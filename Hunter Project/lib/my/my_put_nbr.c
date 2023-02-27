/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** des
*/

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb *= -1;
        my_putchar(45);
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar(48 + nb % 10);
    return 0;
}
