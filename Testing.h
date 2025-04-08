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
    sf::RectangleShape slimeRectShape;
    std::unique_ptr<sf::Sprite> slimeSprite;
private:
    int slimeHealth{ 100 };
    sf::Texture slimeTexture;
    



   
    
    //temporary start location
    sf::Vector2f spawnLocation{ 400.f,400.f };
    //Location of slime
    sf::Vector2f mPosition = spawnLocation;

    //Rect
   


};
