/*
 * sdlsetup.h
 *
 *  Created on: Mar 2, 2015
 *      Author: jay
 */

#pragma once
#ifndef SDLSETUP_H_
#define SDLSETUP_H_
#include <SDL2/SDL.h>
#include <iostream>

class sdlsetup {
public:
	sdlsetup(bool* quit, int screenWidth, int screenHeight);
	virtual ~sdlsetup();
	SDL_Renderer* getrenderer();
	SDL_Event* getmainevent();
	void begin();
	void end();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* mainevent;
};

#endif /* SDLSETUP_H_ */
