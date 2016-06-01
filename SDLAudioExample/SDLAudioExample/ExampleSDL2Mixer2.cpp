//
//  ExampleSDL2Mixer2.cpp
//  SDLAudioExample
//
//  Created by Chenxing Ouyang on 6/1/16.
//  Copyright © 2016 Chenxing Ouyang. All rights reserved.
//

#include <stdio.h>

#include <SDL2/SDL.h>
#include <SDL2_mixer/SDL_mixer.h>

#define WAV_PATH "../../../Audio/beat.wav"

int main(int argc, char **argv) {
    int result = 0;
    int flags = MIX_INIT_MP3;
    
    if (SDL_Init(SDL_INIT_AUDIO) < 0) {
        printf("Failed to init SDL\n");
        exit(1);
    }
    
    if (flags != (result = Mix_Init(flags))) {
        printf("Could not initialize mixer (result: %d).\n", result);
        printf("Mix_Init: %s\n", Mix_GetError());
        exit(1);
    }
    
    Mix_OpenAudio(22050, AUDIO_S16SYS, 2, 640);
    Mix_Music *music = Mix_LoadMUS(WAV_PATH);
    Mix_PlayMusic(music, 1);
    
    while (!SDL_QuitRequested()) {
        SDL_Delay(250);
    }
    
    Mix_FreeMusic(music);
    SDL_Quit();
    return 0;
}