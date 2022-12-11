#pragma once
#include <SFML/Graphics.hpp>

class Background {
private:
    sf::Sprite background;
    sf::Texture texture;


public:
    Background();
    void drawBackground(sf::RenderWindow &w);
    void initBackground();
    void backgroundPos();
    void moveBackground();
};