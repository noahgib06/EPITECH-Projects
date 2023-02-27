/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** display the characters of a string one by one
*/

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return (0);
}
