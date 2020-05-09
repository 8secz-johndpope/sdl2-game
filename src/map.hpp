#pragma once

#define MAP_WIDTH 15
#define MAP_HEIGHT 15

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "renderWindow.hpp"

class Map {
public:
    Map(int reference[MAP_WIDTH][MAP_HEIGHT]);
    void loadMap(RenderWindow &window, Camera &cam, SDL_Texture *palette);
    void drawMap();
private:
    int tileMap[MAP_WIDTH][MAP_HEIGHT];
};