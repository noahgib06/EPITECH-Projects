/*
** EPITECH PROJECT, 2022
** task01
** File description:
** task01
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

int check(general_t *all, int n)
{
    if (rotation(all) == 1)
        n += 1;
    if (all->image[1].direction == 1 && n != 7)
        all->image[1].sprite_pos.x += 2;
    if (all->image[1].direction == 0 && n != 7)
        all->image[1].sprite_pos.x -= 2;
    return n;
}

void draw_function(general_t *all, int n)
{
    sfRenderWindow_drawSprite(all->settings.window, all->image[0].sprite, NULL);
    sfRenderWindow_drawSprite(all->settings.window, all->image[1].sprite, NULL);
    sfRenderWindow_drawSprite(all->settings.window, all->image[n].sprite, NULL);
}

void start_game_part2(general_t *all, int n, int i)
{
    if (n == 8 && i == 1) {
        i += 1;
        sfSprite_destroy(all->image[1].sprite);
    }
    if (n == 8) {
        n -= 1;

    }
    sfSprite_setTextureRect(all->image[1].sprite, all->image[1].rect);
    sfSprite_setPosition(all->image[1].sprite, all->image[1].sprite_pos);
    draw_function(all, n);
    sfRenderWindow_display(all->settings.window);
}

void start_game(general_t *all)
{
    float seconds;
    int max_value = 330;
    create_time(all);
    int n = 4;
    int i = 1;
    all->audio.sound = malloc(sizeof(all->audio.sound) * 3);
    all->audio.sound = sfMusic_createFromFile("Begin.ogg");
    sfMusic_play(all->audio.sound);
    while (sfRenderWindow_isOpen(all->settings.window)) {
        analyse_events(all->settings.window, all->settings.event, all);
        seconds = sfTime_asMicroseconds(all->timing.time) / 1000000.0;
        all->timing.time = sfClock_getElapsedTime(all->timing.clock);
        if (seconds > 0.11) {
            move_rect(all, max_value);
            sfClock_restart(all->timing.clock);
        }
        n = check(all, n);
        start_game_part2(all, n, i);
    }
    sfRenderWindow_destroy(all->settings.window);
}

void start(general_t *all)
{
    create_time(all);
    init(all);
    start_game(all);
}
