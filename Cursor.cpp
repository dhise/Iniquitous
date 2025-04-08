#include "Cursor.h"

Cursor::Cursor() {

	cursorTexture.loadFromFile("graphics/NewCursorBig.png");
	cursorSprite = std::make_unique<sf::Sprite>(cursorTexture);
}









void Cursor::draw(sf::RenderWindow& window)
{
	window.draw(*cursorSprite);
}

sf::Sprite Cursor::returnSprite()
{
	return *cursorSprite;
}

void Cursor::moveCursor(sf::Vector2i mouseLocation)
{
	cursorSprite->setPosition({ static_cast<float>(mouseLocation.x), static_cast<float>(mouseLocation.y) });
}