#include "init.h"
#include <SDL2/SDL.h>

static SDL_Window *g_pWindow = nullptr;
static SDL_Renderer *g_pRenderer = nullptr;

bool init(const char *title, int xpos, int ypos, int height, int width,
          int flags)
{
    // initialize SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) >= 0)
    {
        // if succeded create out window
        g_pWindow = SDL_CreateWindow(title, xpos, ypos, height, width, flags);

        // if the window creation succeded, create out renderer
        if (g_pWindow != 0)
        {
            g_pRenderer = SDL_CreateRenderer(g_pWindow, -1, 0);
        }
    }
    else
    {
        return false; // SDL could not initialize
    }
    return true;
}

void render()
{
    // set to black
    SDL_SetRenderDrawColor(g_pRenderer, 0, 0, 0, 255);

    // clear the window to black
    SDL_RenderClear(g_pRenderer);

    // show the window
    SDL_RenderPresent(g_pRenderer);
}