#include <iostream>
#include <SFML/Graphics.hpp>
#include "Skeleton.h"
#include "PrimaryInteract.h"
#include "BaseEnemy.h"
#include "GameTic.h"
#include "EntityMonsters.h"
#include "EntityGeneral.h"
#include "Testing.h"
#include "GameVariables.h"
#include "Cursor.h"


/* KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID*/



int main()
{

 
    sf::Font font("fonts/textfont.otf");
    
    //sf::Texture cursorTexture("graphics/NewCursorBig.png");
    //sf::Sprite cursorSprite(cursorTexture);
   

    //Make values for window to use as variables
    unsigned int windowX{ 1920 };
    unsigned int windowY{ 1080 };

    //Make window
    sf::RenderWindow window(sf::VideoMode({ windowX, windowY }), "Iniquitous");


    PrimaryInteract primaryInteract;
    TestDummy testDummy(20, font);
    EntitySpawner entitySpawner;
    TestSlime testSlime;
    Cursor cursor;
    




    while (window.isOpen())
    {
        window.setMouseCursorVisible(false);
        
        //({ static_cast<float>(mouseLocation.x), static_cast<float>(mouseLocation.y) });

        //Get mouse window coordinates
        sf::Vector2i mouseLocation = sf::Mouse::getPosition(window);

        cursor.moveCursor(mouseLocation);


        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::R))
        {
        
            
            
        }
        /*                                             going to try a TestSlime function that returns the TestSlime.getLocalBounds.position and compare it against current mouse location if so then set outlinethickness
        if (cursorSprite.getGlobalBounds().findIntersection(testSlime.getPosition().position))
        {
            testSlime.outline();
        }
        */
  
        
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>()) window.close();

        }


        window.clear(sf::Color::White);
        
        entitySpawner.drawSkeletons(window);
        testDummy.draw(window);
        testSlime.draw(window);
        cursor.draw(window);
        window.display();
    }



}

