#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>


class Testing {
public:
    Testing();  // Constructor declaration

    void testFunc();  // Function declaration that prints the test message

private:
    std::string testMessage;  // Member variable to store the test message
};





class TestSlime {
public:
    TestSlime();
    void draw(sf::RenderWindow& window);
    void printTest(sf::FloatRect bounds);
    //Get position of hitbox
    sf::FloatRect getPosition();
    void outline();
    sf::FloatRect slimeRect;
    sf::Vector2f size;
    std::unique_ptr<sf::Sprite> slimeSprite;
    sf::Vector2f position;
    void moveRight();

private:
    int slimeHealth{ 100 };
    sf::Texture slimeTexture;
    //temporary start location
    sf::Vector2f spawnLocation{ 400.f,400.f };
    //Location of slime
    sf::Vector2f mPosition = spawnLocation;



};



//Background testing
class Background {
public:
    Background();
    void draw(sf::RenderWindow& window);
    std::unique_ptr<sf::Sprite> sprite;

private:
    sf::Texture texture;

};




class Movement{
public:
    Movement();
    void moveRight(sf::Vector2f currentXPosition);

};
