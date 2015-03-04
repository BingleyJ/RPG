/*
 * gmain.cpp
 *
 *  Created on: Mar 2, 2015
 *      Author: jay
 */
#include "gmain.h"

using std::cout;
using std::endl;

gmain::gmain(int inScreenwidth, int inScreenheight) {
	screenWidth = inScreenwidth;
	screenHieght = inScreenheight;
	quit = false;
	SDLsetup = new sdlsetup(&quit, screenWidth, screenHieght);
}

gmain::~gmain() {
	delete SDLsetup;
}

void gmain::gameloop(void) {
	UserInput UI = new UserInput();
	while (!quit && SDLsetup->getmainevent()->type != SDL_QUIT) {
		SDLsetup->begin();

		UI.pollCommand();
		cout << UI.getCommand() << endl;
		//All game logic goes here
		//Draw something
		//Update Something
		SDLsetup->end();
	}
}

