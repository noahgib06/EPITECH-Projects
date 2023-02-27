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

void life_counter_part2(general_t *all)
{
    sfVector2f life_scale = {1, 1};
    sfVector2f life_pos = {50, 715};
    all->image[7].texture = sfTexture_createFromFile("Life_0.jpg", NULL);
    all->image[7].sprite = sfSprite_create();
    sfSprite_setTexture(all->image[7].sprite, all->image[7].texture, sfTrue);
    sfSprite_setScale(all->image[7].sprite, life_scale);
    sfSprite_setPosition(all->image[7].sprite, life_pos);
}

void life_counter(general_t *all)
{
    sfVector2f life_scale = {1, 1};
    sfVector2f life_pos = {50, 715};
    all->image[4].texture = sfTexture_createFromFile("Life_3.jpg", NULL);
    all->image[4].sprite = sfSprite_create();
    sfSprite_setTexture(all->image[4].sprite, all->image[4].texture, sfTrue);
    sfSprite_setScale(all->image[4].sprite, life_scale);
    sfSprite_setPosition(all->image[4].sprite, life_pos);
    all->image[5].texture = sfTexture_createFromFile("Life_2.jpg", NULL);
    all->image[5].sprite = sfSprite_create();
    sfSprite_setTexture(all->image[5].sprite, all->image[5].texture, sfTrue);
    sfSprite_setScale(all->image[5].sprite, life_scale);
    sfSprite_setPosition(all->image[5].sprite, life_pos);
    all->image[6].texture = sfTexture_createFromFile("Life_1.jpg", NULL);
    all->image[6].sprite = sfSprite_create();
    sfSprite_setTexture(all->image[6].sprite, all->image[6].texture, sfTrue);
    sfSprite_setScale(all->image[6].sprite, life_scale);
    sfSprite_setPosition(all->image[6].sprite, life_pos);
    life_counter_part2(all);
}

void create_window(general_t *all)
{
    all->settings.video_mode.bitsPerPixel = 32;
    all->settings.video_mode.height = 800;
    all->settings.video_mode.width = 800;
    all->settings.window = sfRenderWindow_create(all->settings.video_mode,\
    "Duck Hunt", sfDefaultStyle, NULL);
    all->settings.max_wind = 800;
}

void create_main_menu(general_t *all)
{
    sfVector2f menu_scale = {1.23, 1.23};
    sfVector2f menu_pos = {-43, 200};
    all->image[2].texture = sfTexture_createFromFile("Main_Menu.jpg", NULL);
    all->image[2].sprite = sfSprite_create();
    sfSprite_setTexture(all->image[2].sprite, all->image[2].texture, sfTrue);
    sfSprite_setScale(all->image[2].sprite, menu_scale);
    sfSprite_setPosition(all->image[2].sprite, menu_pos);
}
