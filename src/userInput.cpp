#include "userInput.h"
#include "Globals.h"

void UserInput::pollCommand() {
	if (SDL_PollEvent(&m_event) != 0) {
		switch(m_event.type) {
		//on key down save key
		case SDL_KEYDOWN:
			switch (m_event.key.keysym.sym) {
			case SDLK_UP:
				m_pressed = Globals::UP;
				break;
			case SDLK_DOWN:
				m_pressed = Globals::DOWN;
				break;
			case SDLK_LEFT:
				m_pressed = Globals::LEFT;
				break;
			case SDLK_RIGHT:
				m_pressed = Globals::RIGHT;
				break;
			}
			break;
		//on key up reset
		case SDL_KEYUP:
			m_pressed = 0;
			break;
		}
	}
}
