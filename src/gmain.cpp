/*
 * gmain.cpp
 *
 *  Created on: Mar 2, 2015
 *      Author: jay
 */
#include "gmain.h"

<<<<<<< HEAD

=======
>>>>>>> c32a280376fe777d22d7847556466941f3018fcb
using std::cout;
using std::endl;

gmain::gmain(int inScreenwidth, int inScreenheight) {
	screenWidth = inScreenwidth;
	screenHieght = inScreenheight;
	quit = false;
	SDLsetup = new sdlsetup(&quit, screenWidth, screenHieght);
	UI = new UserInput();
}

gmain::~gmain() {
	delete SDLsetup;

}

void gmain::gameloop(void) {
<<<<<<< HEAD


	while (!quit && SDLsetup->getmainevent()->type != SDL_QUIT) {
		SDLsetup->begin();

		UI->pollCommand();
		cout << UI->getCommand() << endl;
=======
	UserInput UI = new UserInput();
	while (!quit && SDLsetup->getmainevent()->type != SDL_QUIT) {
		SDLsetup->begin();

		UI.pollCommand();
		cout << UI.getCommand() << endl;
>>>>>>> c32a280376fe777d22d7847556466941f3018fcb
		//All game logic goes here
		//Draw something
		//Update Something
		SDLsetup->end();
	}
}

