/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** Count the number of characters
*/

int my_strlen(char const *str)
{
    int val = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        val++;
    }
    return val;
}
