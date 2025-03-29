#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    
    //Make window
    sf::RenderWindow window(sf::VideoMode({ 1920, 1080}), "Iniquitous");
    
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>()) window.close();
                
        }


        window.clear(sf::Color::Black);
        window.display();
    }

}