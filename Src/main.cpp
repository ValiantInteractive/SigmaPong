// v0.0.2

#include "SDL.h"
#include "Game.h"
#define FPS 60

Game* game = nullptr;

int main(int argc, char* argv[]) {

    const int frameDelay = 1000 / FPS;

    Uint32 frameStart;
    unsigned int frameTime;

    game = new Game();

<<<<<<< HEAD
    game->init("Sigma Engine", 2400, 200, 1280, 720, false);
=======
    game->init("Sigma Engine", NULL, NULL, 1980, 1080, true);
>>>>>>> resolution changed

    while (!game->windowShouldClose)
    {
        frameStart = SDL_GetTicks();

        game->update();
        game->handleEvents();

        frameTime = SDL_GetTicks() - frameStart;

        if(frameDelay > frameTime)
            SDL_Delay(frameDelay - frameTime);

    }

    // Clean up
    game->clean();
    SDL_Quit();
    return 0;
}