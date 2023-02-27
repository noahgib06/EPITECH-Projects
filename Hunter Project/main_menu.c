/*
** EPITECH PROJECT, 2022
** description
** File description:
** description
*/

#include "./include/my.h"
#include "./include/struct.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/Music.h>

void if_click(sfMouseButtonEvent event, general_t *all)
{
    int i = 0;
    sfVector2i mouse = sfMouse_getPosition(all->settings.window);
    if (mouse.x >= 323 && mouse.x <= 469)
        if_click_part2(event, all, mouse);
}

int control(sfRenderWindow *window, sfEvent event, general_t *all)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            sfRenderWindow_close(window);
        }
        if (event.type == sfEvtMouseButtonPressed) {
            if_click(event.mouseButton, all);
        }
    }
}

void menu_game(general_t *all)
{
    all->audio.sound = sfMusic_createFromFile("Title_Theme.ogg");
    sfMusic_play(all->audio.sound);
    while (sfRenderWindow_isOpen(all->settings.window)) {
        control(all->settings.window, all->settings.event, all);
        sfRenderWindow_drawSprite(all->settings.window,\
        all->image[2].sprite, NULL);
        sfRenderWindow_drawSprite(all->settings.window,\
        all->image[3].sprite, NULL);
        sfRenderWindow_display(all->settings.window);
        sfRenderWindow_clear(all->settings.window, sfBlack);

    }
}

void print_h_option(int ac)
{
    if (ac == 2) {
        my_printf("USAGE\n");
        my_printf("      my_hunter\n");
        my_printf("DESCRIPTION\n");
        my_printf("      My Hunter Program is a video game.");
        my_printf(" The goal is simple:");
        my_printf(" as a hunter, you have to kill as many ducks");
        my_printf(" as possible by clicking with your mouse.\n");
        my_printf("      To start this game, you have to");
        my_printf("click on the start button.\n");
        my_printf("      After that, the game begins, ");
        my_printf("so you have to click on the duck,");
        my_printf("with the help of your mouse button, to kill it.\n");
        exit (0);
    }
}

int main(int ac, char **av)
{
    general_t *all = malloc(sizeof(*all));
    print_h_option(ac);
    init(all);
    menu_game(all);
    return 0;
}
