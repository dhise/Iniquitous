#include "Cursor.h"

Cursor::Cursor() {

	cursorTexture.loadFromFile("graphics/NewCursorBig.png");
	cursorSprite = std::make_unique<sf::Sprite>(cursorTexture);
	iMouseRect.size = cursorSprite->getGlobalBounds().size;
	//iMouseRect.position = cursorSprite->getGlobalBounds().position;
	
}









void Cursor::draw(sf::RenderWindow& window)
{
	window.draw(*cursorSprite);
}

sf::Sprite Cursor::returnSprite()
{
	return *cursorSprite;
}

void Cursor::moveCursor(sf::Vector2f mouseLocation)
{
	cursorSprite->setPosition({ static_cast<float>(mouseLocation.x), static_cast<float>(mouseLocation.y) });
	iMouseRect.position = mouseLocation;
}

void Cursor::printCursorSize()
{
	std::cout << iMouseRect.size.x << " " << iMouseRect.size.y;
}