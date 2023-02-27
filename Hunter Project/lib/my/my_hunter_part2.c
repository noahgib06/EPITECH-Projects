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

void direction_modif(general_t *all)
{
    if (all->image[1].direction == 1) {
        all->settings.max_wind = 800;
        sfVector2f scale = {1, 1};
        sfSprite_setScale(all->image[1].sprite, scale);
        all->image[1].sprite_pos.x = -150;
        all->image[1].sprite_pos.y = rand() % 400;
    }
    if (all->image[1].direction == 0) {
        all->settings.max_wind = -100;
        sfVector2f scale = {-1, 1};
        sfSprite_setScale(all->image[1].sprite, scale);
        all->image[1].sprite_pos.x = 900;
        all->image[1].sprite_pos.y = rand() % 400;
    }
}

void manage_mouse_click(sfMouseButtonEvent event, general_t *all)
{
    all->audio.sound = sfMusic_createFromFile("gunshot.ogg");
    sfMusic_play(all->audio.sound);
    sfVector2f pos = sfSprite_getPosition(all->image[1].sprite);
    sfFloatRect sprite_box = sfSprite_getGlobalBounds(all->image[1].sprite);
    if (sfFloatRect_contains(&sprite_box, event.x, event.y)) {
        all->image[1].direction = rand() % 2;
        direction_modif(all);
    }
}

void move_rect(general_t *all, int max_value)
{
    all->image[1].rect.left = (all->image[1].rect.left + 110) % max_value;
}

void create_time(general_t *all)
{
    all->timing.clock = sfClock_create();
}
