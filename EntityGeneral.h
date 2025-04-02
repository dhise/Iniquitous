#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System/Clock.hpp>
#include <iostream>
#include <vector>
#include "EntityMonsters.h"





class Skeleton {
public:
	// Constructor takes a texture reference and initializes the sprite
	Skeleton(sf::Texture& texture);

	// Method to get the sprite
	sf::Sprite& getSprite();

private:
	sf::Sprite sprite;  // Sprite for the skeleton
};



class EntitySpawner
{
public:
	EntitySpawner();  // Constructor declaration
	void spawnSkeletons();  // Method declaration
	void drawSkeletons(sf::RenderWindow& window);  // Method to draw skeletons

private:
	sf::Texture skeletonTexture;  // Texture for the skeleton
	std::vector<std::unique_ptr<Skeleton>> skeletons;  // Vector of unique pointers to Skeleton
};