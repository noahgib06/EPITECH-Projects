/*
** EPITECH PROJECT, 2022
** sc_float2
** File description:
** sc_float2
*/

#include "my.h"

int sc_float2(double nbr)
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
        nb_neg2(nbr, count);
    } else {
        nb_pos2(nbr, count);
    }
}
