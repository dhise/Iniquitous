#include "EntityMonsters.h"
#include <SFML/Graphics.hpp>
#include <iostream>


Monster::Monster(int hp) : monsterHealth(hp) {} //Constructor defintion

TestDummy::TestDummy(int hp, sf::Font& font) : text(font)
{



	text.setCharacterSize(30);
	text.setFillColor(sf::Color::Black);
	
	testDummyTexture.loadFromFile("graphics/testdummy.png");
	testDummySprite = std::make_unique<sf::Sprite>(testDummyTexture);
	testDummySprite->setPosition({ 960.f, 540.f });
	text.setString(std::to_string(hp));
	sf::Vector2f textLocation({ testDummySprite->getPosition().x, testDummySprite->getPosition().y});//Gets the location of the sprite and adds to y to place text above it
	text.setPosition(textLocation);
	

}

void TestDummy::draw(sf::RenderWindow& window)
{
	window.draw(*testDummySprite);//Draw testdummy sprite
	window.draw(text);
	
}



/* TO DO make a general spawner from monster class that can be used on any entity
void Monster::drawEntity(sf::RenderWindow& window)
{
	window.draw()
}*/