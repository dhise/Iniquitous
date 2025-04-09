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


//clean up all the rect functions/variables as they are not needed for findIntersction()





int main()
{
    
    //what is this for? idr
    sf::Font font("fonts/textfont.otf");
    


    //Make values for window to use as variables
    unsigned int windowX{ 1920 };
    unsigned int windowY{ 1080 };

    //Make window
    sf::RenderWindow window(sf::VideoMode({ windowX, windowY }), "Iniquitous");

    //I doubt people just have a thousand constructors in 1 spot
    PrimaryInteract primaryInteract;
    TestDummy testDummy(20, font);
    EntitySpawner entitySpawner;
    TestSlime testSlime;
    Cursor cursor;
    Background background;
    
    //Create a object that holds a rect<float> variable that holds the value of how much rects are intersecting
    std::optional<sf::FloatRect> intersection;


    //Fucking around with time
           /*
    ************
        Clock
    ************
    */
    sf::Clock clock;

    float timeSinceLast = 0.f;
    float deltaTime = 0.f;
    float dt{0.f};

    testSlime.slimeSprite->setPosition(testSlime.position);

    while (window.isOpen())
    {
        //Hide cursor
        window.setMouseCursorVisible(false);
        deltaTime = clock.restart().asSeconds();
        dt += deltaTime;
        
        
        sf::Vector2f mouseLocation = sf::Vector2f(sf::Mouse::getPosition(window));//Pass window coordinates to mouse texture
        cursor.moveCursor(mouseLocation);//Function to match location of the cursor sprite with where it should be
        

        /*
        if (dt >= 1.f)
        {
            std::cout << "Yay";
            dt = 0.f;
        }
        */
        
        
  

        //this is just insane
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::R))
        {
            

            std::cout << testSlime.getPosition().position.x << " " << testSlime.getPosition().position.y << std::endl;
            std::cout << testSlime.position.x << " " << testSlime.position.y << std::endl;
            testSlime.moveRight();


            /*
            std::cout << "Test slime size x " << testSlime.slimeSprite->getGlobalBounds().size.x << " " << "Test slime size y" << testSlime.slimeSprite->getGlobalBounds().size.y << std::endl;
            std::cout << "Cursor size x " << cursor.cursorSprite->getGlobalBounds().size.x << " " << "Cursor size y " << cursor.cursorSprite->getGlobalBounds().size.y << std::endl;
            */
        }
 
  
        
        while (const std::optional event = window.pollEvent())
        {
            
            if (event->is<sf::Event::Closed>()) window.close();

        }


        //I will eventually need to group all the draws into one call or something idk not priority this shit is just going to get messy
        window.clear(sf::Color::White);
        
        //background.draw(window); only takes up half the screen  low priority for now just use white
        entitySpawner.drawSkeletons(window);
        testDummy.draw(window);
        testSlime.draw(window);
        cursor.draw(window);
        window.display();
    }



}


