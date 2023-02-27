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


void create_texture_sprite(general_t *all)
{
    all->image = malloc(sizeof(*all->image) * 8);
    sfVector2f font_scale = {1.08, 1.08};
    sfVector2f font_pos = {-290, 0};
    all->image[0].texture = sfTexture_createFromFile("stage.jpg", NULL);
    all->image[0].sprite = sfSprite_create();
    sfSprite_setTexture(all->image[0].sprite, all->image[0].texture, sfTrue);
    sfSprite_setScale(all->image[0].sprite, font_scale);
    sfSprite_setPosition(all->image[0].sprite, font_pos);
}

void create_texture_sprite_duck(general_t *all)
{
    all->image[1].texture = sfTexture_createFromFile("duck.jpg", NULL);
    all->image[1].sprite = sfSprite_create();
    sfSprite_setTexture(all->image[1].sprite, all->image[1].texture, sfTrue);
    all->image[1].sprite_pos.x = -1000;
    all->image[1].sprite_pos.y = rand() % 400;
    sfSprite_setPosition(all->image[1].sprite, all->image[1].sprite_pos);
    all->image[1].direction = 1;

    all->image[1].rect.height = 110;
    all->image[1].rect.width = 110;
    all->image[1].rect.left = 0;
    all->image[1].rect.top = 0;
    sfSprite_setTextureRect(all->image[1].sprite, all->image[1].rect);
}

void init(general_t *all)
{
    create_window(all);
    create_texture_sprite(all);
    create_texture_sprite_duck(all);
    create_main_menu(all);
    create_button_menu(all);
    life_counter(all);
    sfRenderWindow_setFramerateLimit(all->settings.window, 100);
}
