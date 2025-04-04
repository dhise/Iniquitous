#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/System/Clock.hpp>



class Monster {
public:
	int monsterHealth{};
	Monster(int hp);

	Monster() : monsterHealth(20) {}//Default constructor

	

};

class TestDummy : public Monster{
public:
	
	sf::Text text;
	TestDummy(int hp, sf::Font& font);
	void draw(sf::RenderWindow& window);
	void drawText(int hp, sf::RenderWindow& window);
	sf::Texture testDummyTexture;
	std::unique_ptr<sf::Sprite> testDummySprite;
private:
	sf::Vector2f textLocation{};

};




