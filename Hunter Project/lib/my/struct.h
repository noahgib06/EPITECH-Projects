/*
** EPITECH PROJECT, 2022
** description
** File description:
** description
*/

#ifndef STRUCT_H_
    #define STRUCT_H_
    #include "my.h"
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

    typedef struct TEXT {
        sfText *text;
    }TEXT_T;

    typedef struct AUDIO {
        sfMusic *sound;
    }AUDIO_T;

    typedef struct TIME {
        sfClock *clock;
        sfTime time;
    }TIME_T;

    typedef struct IMG {
        sfTexture *texture;
        sfSprite *sprite;
        sfIntRect rect;
        sfVector2f sprite_pos;
        int direction;
    }IMG_T;

    typedef struct PARAMETERS {
        sfRenderWindow *window;
        sfEvent event;
        sfVideoMode video_mode;
        int max_wind;
    }PARAMETERS_T;

    typedef struct general {
        TEXT_T text;
        AUDIO_T audio;
        TIME_T timing;
        PARAMETERS_T settings;
        IMG_T * image;
    } general_t;

#endif
