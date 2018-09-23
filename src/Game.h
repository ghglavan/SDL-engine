#pragma once

#include "SDL2/SDL.h"

class Game
{
  public:
    Game();
    ~Game();

    bool init(const char *, int, int, int, int, int);

    void render();
    void update();
    void handleEvents();
    void clean();

    bool running() { return m_bRunning; }

  private:
    SDL_Window *m_pWindow;
    SDL_Renderer *m_pRenderer;

    bool m_bRunning;
};