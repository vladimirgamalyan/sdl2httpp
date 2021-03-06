#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_net.h>

int main(int argc, char* argv[])
{
	if (SDL_Init(0) != 0)
	{
		SDL_Log("Unable to initialize SDL: %s\n", SDL_GetError());
		return 1;
	}

	if (SDLNet_Init() != 0)
	{
		SDL_Log("SDLNet_Init: %s\n", SDLNet_GetError());
		return 2;
	}

	SDLNet_Quit();
	SDL_Quit();
	return 0;
}
