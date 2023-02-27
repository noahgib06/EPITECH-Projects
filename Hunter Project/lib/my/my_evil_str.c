/*
** EPITECH PROJECT, 2022
** my_evil_str.c
** File description:
** swich each character two by two
*/

int my_lenstr(char const *str)
{
    int val = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        val++;
    }
    return val;
    return (0);
}

char *my_evil_str(char *str)
{
    int b = my_lenstr(str) - 1;
    char valtmp;
    int a = 0;
    while (a != b) {
        valtmp = str[a];
        str[a] = str[b];
        str[b] = valtmp;
        a++;
        b--;
    }
    return str;
}
