/*
** EPITECH PROJECT, 2022
** description
** File description:
** description
*/

#include "my.h"
#include "struct.h"
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

int rotation_part2(general_t *all)
{
    if (all->image[1].direction == 1) {
        all->settings.max_wind = 800;
        sfVector2f scale = {1, 1};
        sfSprite_setScale(all->image[1].sprite, scale);
        all->image[1].sprite_pos.x = -100;
        all->image[1].sprite_pos.y = rand() % 400;
    }
    if (all->image[1].direction == 0) {
        all->settings.max_wind = -100;
        sfVector2f scale = {-1, 1};
        sfSprite_setScale(all->image[1].sprite, scale);
        all->image[1].sprite_pos.x = 1000;
        all->image[1].sprite_pos.y = rand() % 400;
    }
}

int rotation(general_t *all)
{
    if (all->image[1].sprite_pos.x == all->settings.max_wind) {
        all->image[1].direction = rand() % 2;
        rotation_part2(all);
        return 1;
    }
    return 0;
}

void if_click_part3(sfMouseButtonEvent event, general_t *all)
{
    if (event.type == sfEvtMouseButtonPressed) {
        sfMusic_pause(all->audio.sound);
        sfRenderWindow_close(all->settings.window);
        sfRenderWindow_destroy(all->settings.window);
        start(all);
    }
}

void if_click_part2(sfMouseButtonEvent event, general_t *all, sfVector2i mouse)
{
    if (mouse.y >= 524 && mouse.y <= 561)
        if_click_part3(event, all);
}
