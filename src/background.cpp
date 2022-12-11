#include "background.hpp"
#include <iostream>


// cons

Background::Background() {
    initBackground();
    backgroundPos();
}
// public functions
void Background::initBackground() {
    if(!texture.loadFromFile("D:/Coding/Project/SFML/RocketUp/Gambar/spaceBG.jpg")) {
        std::cout << "File not found" << std:: endl;
    }
    background.setTexture(texture);
    background.setTextureRect(sf::IntRect(0, 6339, 1280, 7619));
}

void Background::drawBackground(sf::RenderWindow &w) {
    w.draw(background);
}

void Background::backgroundPos() {
}

void Background::moveBackground() {
    background.setPosition(background.getPosition().x, background.getPosition().y + 10.f);
}

