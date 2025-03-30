#pragma once
#include <SFML/Graphics.hpp>

class Skeleton {
public:
	Skeleton();//Constructor
	void draw(sf::RenderWindow& window);
	void moveSkele(sf::Vector2i& mouselocation);

private:
	sf::Texture skeletonTexture;
	std::unique_ptr<sf::Sprite> skeletonSprite;
	
};
