#include "BaseEnemy.h"
#include <iostream>


BaseEnemy::BaseEnemy() : health(10)//Constructor to initialize
{
	testDummyTexture.loadFromFile("graphics/testdummy.png");
	testDummySprite = std::make_unique<sf::Sprite>(testDummyTexture);
	testDummySprite->setPosition({ 960.f, 540.f });
	
}


void BaseEnemy::draw(sf::RenderWindow& window)
{
	window.draw(*testDummySprite);//Draw testdummy sprite
}

sf::FloatRect BaseEnemy::getPosition()
{
	return testDummySprite->getGlobalBounds();
}