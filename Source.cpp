#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <iostream>
#include "Game.h"

//the hero gets brought along with his white background

int main() {
	Game game;
	sf::RenderWindow window(sf::VideoMode(800, 800), "Hero Game");
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
			window.clear();
			game.update();
			window.draw(game.somebody->spt);
			window.display();
		}
		

	}
