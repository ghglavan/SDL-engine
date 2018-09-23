#include "Game.h"

Game *g_game = nullptr;

int main(int argc, char *argv[])
{
	g_game = new Game();

	g_game->init("Hello", 100, 100, 640, 480, 0);

	while (g_game->running())
	{
		g_game->handleEvents();
		g_game->update();
		g_game->render();
	}

	g_game->clean();

	return 0;
}