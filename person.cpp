#include "Person.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include <iostream>

Person::Person()
{
	if (!pers.loadFromFile("images/character.png")) {
		//return EXIT_FAILURE;
		std::cout << "couldn't load it" << std::endl;
	}
	spt.setTexture(pers);
	xpos = 122;
	ypos = 288;

	//if (!person.loadFromFile("images/character.png")) {
	//	return EXIT_FAILURE;
	//}
	//sf::Sprite spriteZero(person);
}

void Person::setpos(float x, float y) {
	this->xpos = x;
	this->ypos = y;
}


Person::~Person()
{
}

void Person::move() {
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		xpos -= 0.2;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		xpos += 0.2;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		std::cout << ypos;
		ypos += 5;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		ypos -= .2;
	}
}
