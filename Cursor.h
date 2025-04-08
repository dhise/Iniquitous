#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>





class Cursor {
public:
	Cursor();
	

	sf::Sprite returnSprite();
	void draw(sf::RenderWindow& window);
	void moveCursor(sf::Vector2i mouselocation);
private:
	sf::Texture cursorTexture;
	std::unique_ptr<sf::Sprite> cursorSprite;


};




/*
sf::Texture cursorTexture("graphics/NewCursorBig.png");
sf::Sprite cursorSprite(cursorTexture);
*/