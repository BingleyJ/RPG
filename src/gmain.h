/*
 * gmain.h
 *
 *  Created on: Mar 2, 2015
 *      Author: jay
 */

#ifndef GMAIN_H_
#define GMAIN_H_
#include <SDL2/SDL.h>
#include "sdlsetup.h"

class gmain {
public:
	gmain(int inScreenwidth, int inSreenheight);
	virtual ~gmain();
	void gameloop();
private:
	bool quit;
	int screenWidth;
	int screenHieght;
	sdlsetup* SDLsetup;

};
#endif /* GMAIN_H_ */
