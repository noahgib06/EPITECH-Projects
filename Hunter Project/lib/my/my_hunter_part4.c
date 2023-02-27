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

void destroy(general_t *all)
{
    sfSprite_destroy(all->image[0].sprite);
    sfSprite_destroy(all->image[1].sprite);
    sfSprite_destroy(all->image[2].sprite);
    sfSprite_destroy(all->image[3].sprite);
    sfSprite_destroy(all->image[4].sprite);
    sfClock_destroy(all->timing.clock);
    sfTexture_destroy(all->image[0].texture);
    sfTexture_destroy(all->image[1].texture);
    sfTexture_destroy(all->image[2].texture);
    sfTexture_destroy(all->image[3].texture);
    sfTexture_destroy(all->image[4].texture);
}

int analyse_events(sfRenderWindow *window, sfEvent event, general_t *all)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed) {
            destroy(all);
            sfRenderWindow_clear(all->settings.window, sfBlack);
            sfRenderWindow_close(all->settings.window);
            sfRenderWindow_destroy(all->settings.window);
            exit(0);
        }
        if (event.type == sfEvtMouseButtonPressed) {
            manage_mouse_click(event.mouseButton, all);
        }
    }
}
