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

    slimeTexture.loadFromFile("graphics/testSlime.png");
    slimeSprite = std::make_unique<sf::Sprite>(slimeTexture);
    slimeSprite->setPosition({spawnLocation.x, spawnLocation.y});
    
    sf::Vector2f size = slimeSprite->getLocalBounds().size;
    slimeSprite->setOrigin(sf::Vector2f(size.x / 2.f, size.y / 2.f));
    position = slimeSprite->getPosition();

}

//Member functions of test slime
void TestSlime::draw(sf::RenderWindow& window)
{
    window.draw(*slimeSprite);
    
}



sf::FloatRect TestSlime::getPosition()
{
    return slimeSprite->getGlobalBounds();
}

void TestSlime::moveRight()
{
    position.x += 1;
    slimeSprite->setPosition(position);
}




//Background testing
Background::Background() {

    texture.loadFromFile("graphics/simplebackground.png");
    sprite = std::make_unique<sf::Sprite>(texture);

}

void  Background::draw(sf::RenderWindow& window)
{
    window.draw(*sprite);
}


Movement::Movement() {
    
}

