#pragma once
#include <SFML/Graphics.hpp>

class BaseEnemy{
public:
	BaseEnemy();//Constructor

	void draw(sf::RenderWindow& window);
	sf::Texture testDummyTexture;
	std::unique_ptr<sf::Sprite> testDummySprite;

private:
	int health;
	

};

