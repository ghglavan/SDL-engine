#include "init.h"
#include <SDL2/SDL.h>

bool g_bRunning = false;

int main(int argc, char *args[])
{
	if (init("Hello SDL", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640,
			 480, SDL_WINDOW_SHOWN))
	{
		g_bRunning = true;
	}
	else
	{
		return 1;
	}
	while (g_bRunning)
	{
		render();
	}

	SDL_Quit();
	return 0;
}
