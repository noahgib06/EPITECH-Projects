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

void create_button_menu(general_t *all)
{
    sfVector2f button_scale = {6, 6};
    sfVector2f button_pos = {315, 510};
    all->image[3].texture = sfTexture_createFromFile("start-button.jpg", NULL);
    all->image[3].sprite = sfSprite_create();
    sfSprite_setTexture(all->image[3].sprite, all->image[3].texture, sfTrue);
    sfSprite_setScale(all->image[3].sprite, button_scale);
    sfSprite_setPosition(all->image[3].sprite, button_pos);
}
