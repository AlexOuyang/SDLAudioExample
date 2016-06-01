////
////  ExampleSDL2Mixer.cpp
////  SDLAudioExample
////
////  Created by Chenxing Ouyang on 6/1/16.
////  Copyright © 2016 Chenxing Ouyang. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <SDL2/SDL.h>
//#include <SDL2_mixer/SDL_mixer.h>
//
//#define WAV1_PATH "../../../Audio/beat.wav"
//#define WAV2_PATH "../../../Audio/death1.wav"
//#define MUS_PATH "../../../Audio/TimeTravel.mp3"
//
//// Our wav1 file
//Mix_Chunk *wav1 = NULL;
//// Our wav2 file
//Mix_Chunk *wav2 = NULL;
//// Our music file
//Mix_Music *music = NULL;
//
//
//int main(int argc, char* argv[]){
//    
//    // Initialize SDL.
//    if (SDL_Init(SDL_INIT_AUDIO) < 0)
//        return -1;
//    
//    //Initialize SDL_mixer
//    if( Mix_OpenAudio( 22050, MIX_DEFAULT_FORMAT, 2, 4096 ) == -1 )
//        return -1;
//    
//    // Load our 1st sound effect
//    wav1 = Mix_LoadWAV(WAV1_PATH);
//    if (wav1 == NULL)
//        return -1;
//    
//    // Load our 2st sound effect
//    wav2 = Mix_LoadWAV(WAV2_PATH);
//    if (wav2 == NULL)
//        return -1;
//    
//    // Load our music
//    music = Mix_LoadMUS(MUS_PATH);
//    if (music == NULL)
//        return -1;
//    
//    if ( Mix_PlayChannel(-1, wav1, 0) == -1 )
//        return -1;
//    
//    SDL_Delay(3000);
//    std::cout << "Delayed for 3 seconds then keey playing" << std::endl;
//    
//    if ( Mix_PlayChannel(-1, wav2, 0) == -1 )
//        return -1;
//    
//    if ( Mix_PlayMusic( music, -1) == -1 )
//        return -1;
//    
//    while ( Mix_PlayingMusic() ) ;
//    
//    // clean up our resources
//    Mix_FreeChunk(wav1);
//    Mix_FreeChunk(wav2);
//    Mix_FreeMusic(music);
//    
//    // quit SDL_mixer
//    Mix_CloseAudio();
//    
//    return 0;
//}