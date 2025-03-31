#pragma once
#include <SFML/System/Clock.hpp>
#include <iostream>


class GameTic
{
	
public:
	GameTic();//constructor
	bool shouldTick();//Checks if a tic should happen and reset timer if needed
	float accumulatedTime;//Tracks leftover time
	int ticCount; //Counts from 1-30
	int singleTic;//Holds 1 tics worth of time 1/30th of a second



private:
	sf::Clock clock;
	float mTicDuration;//Time per tick(1.0 / 30) for 30 tics per 1 second
	

};