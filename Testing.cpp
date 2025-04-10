#include "Testing.h"




// Constructor definition: Initializes the testMessage member variable
Testing::Testing() {
    testMessage = "This is a test message inside the class!";  // Hardcoded message
}

// Member function definition: Prints the testMessage member variable
void Testing::testFunc() {
    std::cout << testMessage << std::endl;  // Print the testMessage
}



//Constructor for test slime
TestSlime::TestSlime() {

    /*
    state idle 
    state searching - maybe make a rect shape for this? it expands until it sees a target then changes to chase state
    state chasing
    state attacking
    state dead
    
    
    */

    slimeTexture.loadFromFile("graphics/testSlime.png");
    slimeSprite = std::make_unique<sf::Sprite>(slimeTexture);
    slimeSprite->setPosition({spawnLocation.x, spawnLocation.y});
    
    sf::Vector2f size = slimeSprite->getLocalBounds().size;

    sf::Vector2f spriteOrigin((size.x / 2.f), (size.y / 2));
    slimeSprite->setOrigin(spriteOrigin);
    position = slimeSprite->getPosition();

}

//TestSlime functions
void TestSlime::draw(sf::RenderWindow& window)
{
    window.draw(*slimeSprite);
    
}



sf::FloatRect TestSlime::getPosition()
{
    return slimeSprite->getGlobalBounds();
}



void TestSlime::update(float elapsedTime)
{
    position.x += (speed * elapsedTime);
    slimeSprite->setPosition(position);
    
};



//Background testing
Background::Background() {

    texture.loadFromFile("graphics/simplebackground.png");
    sprite = std::make_unique<sf::Sprite>(texture);

}

void  Background::draw(sf::RenderWindow& window)
{
    window.draw(*sprite);
}




//Entity actions

//Searching for target
Searching::Searching() {//Creating a rectangle shape search box any entity that findintersects returns will be in target range. visible only for testing/debugging
    searchRectShape.setSize({ 400.f, 400.f });//Once set up this will be a variable that different monsters will have different search ranges

    searchRectShape.setOutlineThickness(2.f);
    searchRectShape.setOutlineColor(sf::Color::Black);
    searchRectShape.setTexture(nullptr);
    testRect.size = sf::Vector2f(400.f, 400.f);//Rect for findintersection
    //sf::Color::Transparent use this 

}

void Searching::draw(sf::RenderWindow& window)
{

}

void Searching::setEntitySearchRange(sf::Sprite& sprite)//Currently this is placing the search box to the right and down of sprite instead of centering  
{
    sf::Vector2f spriteLocation{ sprite.getPosition() };
    searchRectShape.setPosition(spriteLocation);
    searchRectShape.setOrigin(sprite.getOrigin());//Will need to figure out the math for this
    testRect.position = spriteLocation;//placing rect with sprite
}





Movement::Movement() {





    
}

