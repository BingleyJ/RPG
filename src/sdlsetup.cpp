/*
 * sdlsetup.cpp
 *
 *  Created on: Mar 2, 2015
 *      Author: jay
 */

#include "sdlsetup.h"


sdlsetup::sdlsetup(bool* quit, int screenWidth, int screenHeight) {
	SDL_Init(SDL_INIT_VIDEO);
	window = NULL;
	window = SDL_CreateWindow("RPG",100,100,screenWidth, screenHeight, SDL_WINDOW_SHOWN);
	if (window == NULL){
		std::cout<<"Error : Window Creation Failed" << std::endl;
		*quit = true;
	}
	renderer = NULL;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	mainevent = new SDL_Event();
}

sdlsetup::~sdlsetup() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	delete mainevent;
}

SDL_Renderer* sdlsetup::getrenderer(){
	return renderer;
}

SDL_Event* sdlsetup::getmainevent(){
	return mainevent;
}

void sdlsetup::begin(){
	SDL_PollEvent(mainevent);
	SDL_RenderClear(renderer);
}

void sdlsetup::end(){
	SDL_RenderPresent(renderer);
}
