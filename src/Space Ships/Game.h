#pragma once

// Todas las librerias de SDL y otras utilidades
#include <SDL.h>
#include <SDL_ttf.h>
#include <SDL_image.h>

#include <map>
#include <string>
#include <iostream>

#include "Layer.h"

using namespace std;

// Valores generales
#define WIDTH 680
#define HEIGHT 520

class Layer;

class Game
{
public:
	Game();
	void loop();
	void scale();
	SDL_Texture* getTexture(string filename);
	map<string, SDL_Texture*> mapTextures;
	TTF_Font* font;
	bool scaledToMax = false;
	float scaleLower = 1;
	SDL_Window* window; //Ventana
	SDL_Renderer* renderer; //Renderización
	bool loopActive; //Variable que indica si el juego esta activo
	Layer* gameLayer;
};