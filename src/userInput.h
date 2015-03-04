/*
 * userInput.h
 *
 *  Created on: Mar 4, 2015
 *      Author: yomama
 */

#include <SDL2/SDL.h>

#ifndef USER_INPUT_H
#define USER_INPUT_H

class UserInput {
private:
	SDL_Event m_event;
	int m_pressed;
public:
	UserInput():m_pressed(0) {}
	~UserInput();

	int getCommand(void) {
		return m_pressed;
	}
	void pollCommand(void);
};


#endif /* userInput.h */
