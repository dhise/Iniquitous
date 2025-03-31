#include <iostream>
#include <SFML/Graphics.hpp>
#include "Skeleton.h"
#include "PrimaryInteract.h"
#include "BaseEnemy.h"
#include "GameTic.h"


//Something is crashing the game out it is something to do with the skeleton attacking formula maybe scrap it completely and do even simpler one




int main()
{

    sf::Font font("fonts/textfont.otf");
    sf::Text text(font);
    text.setCharacterSize(24);//in pixels
    text.setFillColor(sf::Color::Black);
    sf::Texture cursorTexture;
    sf::Sprite cursorSprite(cursorTexture);


    //Make values for window to use as variables
    unsigned int windowX{ 1920 };
    unsigned int windowY{ 1080 };

    //Make window
    sf::RenderWindow window(sf::VideoMode({ windowX, windowY }), "Iniquitous");

    int baseHealth{ 10 };
 


    BaseEnemy baseEnemy;
    Skeleton skeleton;
    PrimaryInteract primaryInteract;

    while (window.isOpen())
    {
        window.setMouseCursorVisible(false);


        //Get mouse window coordinates
        sf::Vector2i mouseLocation{ sf::Mouse::getPosition(window) };
        //std::cout << mouseLocation.x << " " << mouseLocation.y << std::endl;//Debugging to output mouse coordinates to terminal to make sure coords are tracking

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


        window.clear(sf::Color::White);
        skeleton.draw(window);
        window.draw(cursorSprite);
        baseEnemy.draw(window);
        window.draw(text);
        window.display();
    }



}

