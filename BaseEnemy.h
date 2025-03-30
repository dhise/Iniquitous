#pragma once
#include <SFML/Graphics.hpp>

class BaseEnemy{
public:
	BaseEnemy();//Constructor

	void draw(sf::RenderWindow& window);
	int health{ 10 };


private:

	sf::Texture testDummyTexture;
	std::unique_ptr<sf::Sprite> testDummySprite;

};