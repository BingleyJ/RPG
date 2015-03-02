//============================================================================
// Name        : RPG.cpp
// Author      : Ioan Istrate & John Bingley
// Version     : 0
// Copyright   : Your copyright notice
// Description : SDL2/C++ RPG
//============================================================================
#pragma once
#include <iostream>

#include "gmain.h"
#include "sdlsetup.h"

int main(int argc, char *argv[]) {

	gmain* rpgmain = new gmain(800, 600);
	rpgmain->gameloop();
	delete rpgmain;
	return 0;
}

