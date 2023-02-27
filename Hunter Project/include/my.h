/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef TEST_N_
    #define TEST_N_
    #include "struct.h"


void if_click_part2(sfMouseButtonEvent event, general_t *all, sfVector2i mouse);

void if_click_part3(sfMouseButtonEvent event, general_t *all);

void move_rect(general_t *all, int max_value);

int rotation(general_t *all);

int rotation_part2(general_t *all);

void create_time(general_t *all);

void create_window(general_t *all);

void life_counter_part2(general_t *all);

void life_counter(general_t *all);

void create_main_menu(general_t *all);

void create_button_menu(general_t *all);

int analyse_events(sfRenderWindow *window, sfEvent event, general_t *all);

void manage_mouse_click(sfMouseButtonEvent event, general_t *all);

void direction_modif(general_t *all);

void start(general_t *all);

void init(general_t *all);

int my_printf(char const *format, ...);

char *my_strcat(char *dest, const char *src);

void second_option(char const *format, int i);

char *my_evil_str(char *str);

int my_lenstr(char const *str);

int sc_float(double nbr);

int sc_float2(double nbr);

int convert_noprintable(char *str);

char convert_to_oct(char str);

void my_putchar(char c);

int my_put_nbr(int nb);

int my_putstr(char const *str);

int my_strlen(char const *str);

int my_compute_power_rec(int nb, int power);

int my_putnbr_oct(int nb);

void nb_pos(double nbr, int count);

void nb_neg(double nbr, int count);

void nb_pos2(double nbr, int count);

void nb_neg2(double nbr, int count);

int my_putnbr_bin(int nb);

int my_putnbr_hex(int nb);

int my_putnbr_hex2(int nb);

int double_to_hex(double nb);

int is_printable(char str);

char show_mem_adress(char *str);

void display_unbr(int nb);

void display_float(double nbr);

char putchar_percent(void);

#endif /* TEST_N_ */
