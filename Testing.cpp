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
    slimeRectShape.setPosition(sf::Vector2f(slimeSprite->getPosition().x, slimeSprite->getPosition().y));
    slimeRectShape.setOrigin(sf::Vector2f(size.x / 2.f, size.y / 2.f));
    slimeRectShape.setSize({ slimeSprite->getLocalBounds().size.x, slimeSprite->getLocalBounds().size.y });
    slimeRectShape.setOutlineThickness(0.f);
    slimeRectShape.setOutlineColor(sf::Color::Black);
    slimeRectShape.setOutlineThickness(1.0f);
    slimeRect.size = slimeSprite->getGlobalBounds().size;
    slimeRect.position = slimeSprite->getPosition();

}

//Member functions of test slime
void TestSlime::draw(sf::RenderWindow& window)
{
    window.draw(slimeRectShape);
    window.draw(*slimeSprite);
    
}



sf::FloatRect TestSlime::getPosition()
{
    return slimeSprite->getGlobalBounds();
}

void TestSlime::outline()
{
    slimeRectShape.setOutlineThickness(1.0f);
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

void moveRight(sf::Vector2f currentXPosition) {

    int rand();
};
