#include <iostream>
#include <SFML/Graphics.hpp>
#include "Skeleton.h"
#include "PrimaryInteract.h"
#include "BaseEnemy.h"

int main()
{
    
    
    
    

    sf::Texture cursorTexture;
    cursorTexture.loadFromFile("graphics/mousecursor.png");
    sf::Sprite cursorSprite(cursorTexture);
    
    
    //Make values for window to use as variables
    unsigned int windowX{ 1920 };
    unsigned int windowY{ 1080 };

    //Make window
    sf::RenderWindow window(sf::VideoMode({ windowX, windowY }), "Iniquitous");
    
    
    
   

    BaseEnemy baseEnemy;
    Skeleton skeleton;
    PrimaryInteract primaryInteract;

    while (window.isOpen())
    {
        window.setMouseCursorVisible(false);

        //Get mouse window coordinates
        sf::Vector2i mouseLocation{sf::Mouse::getPosition(window)};
        std::cout << mouseLocation.x << " " << mouseLocation.y << std::endl;//Debugging to output mouse coordinates to terminal to make sure coords are tracking

        //Put cursor graphic where mouse is pointing
        cursorSprite.setPosition({ static_cast<float>(mouseLocation.x), static_cast<float>(mouseLocation.y) });

        if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))//Makes skeleton sprite move on left click
        {
            skeleton.moveSkele(mouseLocation);
        }


        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>()) window.close();

        }


        window.clear(sf::Color::Black);
        skeleton.draw(window);
        window.draw(cursorSprite);
        baseEnemy.draw(window);
        window.display();
    }   


        
}

