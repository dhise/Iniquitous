#include <iostream>
#include <SFML/Graphics.hpp>
#include "Skeleton.h"
#include "PrimaryInteract.h"
#include "BaseEnemy.h"
#include "GameTic.h"
#include "EntityMonsters.h"
#include "EntityGeneral.h"
#include "Testing.h"

//Be super proud for figuring out how to create the text to appear next to the monster. to do next make it so a skeleton spawns out of a entity (texture of a grave yard or something idk) maybe even move a little?




int main()
{

 
    sf::Font font("fonts/textfont.otf");
    
    sf::Texture cursorTexture("graphics/NewCursorBig.png");
    sf::Sprite cursorSprite(cursorTexture);





    //Make values for window to use as variables
    unsigned int windowX{ 1920 };
    unsigned int windowY{ 1080 };

    //Make window
    sf::RenderWindow window(sf::VideoMode({ windowX, windowY }), "Iniquitous");

 

    Testing testing;
   
    BaseEnemy baseEnemy;
    //Skeleton skeleton;
    PrimaryInteract primaryInteract;
    TestDummy testDummy(20, font);
    EntitySpawner entitySpawner;

    while (window.isOpen())
    {
        window.setMouseCursorVisible(false);
        


        //Get mouse window coordinates
        sf::Vector2i mouseLocation{ sf::Mouse::getPosition(window) };


        //Put cursor graphic where mouse is pointing
        cursorSprite.setPosition({ static_cast<float>(mouseLocation.x), static_cast<float>(mouseLocation.y) });

		if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
		{
            entitySpawner.spawnSkeletons();
		}

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::R))
        {
            entitySpawner.spawnSkeletons();
            testing.testFunc();
        }


        
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>()) window.close();

        }


        window.clear(sf::Color::White);
        window.draw(cursorSprite);
        entitySpawner.drawSkeletons(window);
        testDummy.draw(window);
        window.display();
    }



}

