#include <iostream>
#include <SFML/Graphics.hpp>
#include "EntityGeneral.h"

// Constructor definition: Initializes sprite with the provided texture
Skeleton::Skeleton(sf::Texture& texture) : sprite(texture) {
    // The sprite is initialized with the texture when the Skeleton is created
    sprite.setPosition({ 300.f, 300.f });
}

// Method definition: Returns the sprite
sf::Sprite& Skeleton::getSprite() {
    return sprite;
}

// Constructor definition
EntitySpawner::EntitySpawner() {
    // Load the texture directly in the constructor
    if (!skeletonTexture.loadFromFile("graphics/skeleton.png")) {
        std::cerr << "Failed to load skeleton texture!" << std::endl;
    }
}

// Method to spawn skeletons
void EntitySpawner::spawnSkeletons() {
    // Create a new Skeleton and add it to the vector
    skeletons.push_back(std::make_unique<Skeleton>(skeletonTexture));
}

// Method to draw all skeletons
void EntitySpawner::drawSkeletons(sf::RenderWindow& window) {
    for (auto& skeleton : skeletons) {
        window.draw(skeleton->getSprite());  // Draw each skeleton's sprite
    }
}