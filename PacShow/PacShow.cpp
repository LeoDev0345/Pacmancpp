#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "starter.h" 
using namespace sf;

Texture sprTexture;
Texture backTexture; 
Starter *starter; 
int winW = 23 * 30;
int winH = 25 * 30;
int main()
{   
	//Initialisation de la fenetre
    while (!sprTexture.loadFromFile("texture/PMSprites.png")) {}; 
    RenderWindow window(VideoMode( winW,winH ), "PacMan", Style::Default );  
    window.setActive(false);
    starter = new Starter( &window , &sprTexture);  
    std::cout << "fenetre fermer " << endl;
    delete starter;
    return 0;
};
    