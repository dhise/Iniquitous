#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/System/Clock.hpp>
/* KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID KEEP IT SIMPLE STUPID*/


class Monster {
public:
	int monsterHealth{};
	Monster(int hp);
	//Monster(sf::Sprite sprite);//universal spawner for entities will come back later
	Monster() : monsterHealth(20) {}//Default constructor
	//void drawEntity(sf::RenderWindow& window);//to draw the entity's sprite
	

};

class TestDummy : public Monster{
public:
	
	sf::Text text;
	TestDummy(int hp, sf::Font& font);
	void draw(sf::RenderWindow& window);
	void drawText(int hp, sf::RenderWindow& window);
	sf::Texture testDummyTexture;
	std::unique_ptr<sf::Sprite> testDummySprite;
private:
	sf::Vector2f textLocation{};

};




/*class  Skeleton : public

class Skeleton {
public:
	Skeleton();//Constructor
	void draw(sf::RenderWindow& window);
	void moveSkele(sf::Vector2i& mouselocation);
	int skeleDmg{ 1 };






private:
	sf::Texture skeletonTexture;
	#std::unique_ptr<sf::Sprite> skeletonSprite;
	#sf::Clock clock;
};
*\


/*
implement this later to easily adjust all monster health if needed


class Monster {
public:
    int health;
    int attackPower;

    static int baseHealth;  // Static variable for base health

    Monster(int atk) : health(baseHealth), attackPower(atk) {}  // Initialize health with baseHealth

    void attack() {
        std::cout << "Monster attacks with " << attackPower << " damage!" << std::endl;
    }

    // Static function to modify the base health for all monsters
    static void setBaseHealth(int newBaseHealth) {
        baseHealth = newBaseHealth;
    }
};

// Define the static variable outside the class
int Monster::baseHealth = 100;  // Default base health for all monsters */