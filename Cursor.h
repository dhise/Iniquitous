#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>





class Cursor {
public:
	Cursor();
	
	sf::FloatRect iMouseRect;
	sf::Sprite returnSprite();
	void printCursorSize();
	void draw(sf::RenderWindow& window);
	void moveCursor(sf::Vector2f mouselocation);
	std::unique_ptr<sf::Sprite> cursorSprite;
private:
	sf::Texture cursorTexture;
	
	

};




